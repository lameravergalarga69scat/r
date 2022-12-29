void func_0(var uParam0)
{
	uParam0->f_8 = 1;
}

bool func_1(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, iParam4))
	{
		return true;
	}
	if (iParam4 == 2)
	{
		fVar0 = ENTITY::_0x8E46E18AA828334F(iParam0, sParam1, sParam2);
	}
	else
	{
		fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2);
	}
	return MISC::ABSF(((1f - fVar0) - fParam3)) < 0.01f;
}

void func_2(var uParam0)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (!uParam0->f_13)
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 513836296))
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")))
		{
			bVar0 = true;
		}
		else
		{
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
			fVar3 = ((fVar1 * fVar1) + (fVar2 * fVar2));
			if (fVar3 >= (0.1f * 0.1f))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		TASK::_0x2D657B10F211C572(Global_35, 0.5f);
		TASK::CLEAR_PED_TASKS(Global_35, false, false);
	}
}

bool func_3(var uParam0)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return true;
	}
	if (Global_1935630.f_12)
	{
		return true;
	}
	bVar0 = false;
	if (__LIB_0__::func_356(uParam0->f_1) == joaat("CONSUMABLE"))
	{
		if ((Global_1935496.f_30 != uParam0->f_1 && Global_1935496.f_31 != uParam0->f_1) && Global_1935496.f_32 != uParam0->f_1)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (uParam0->f_23 == 0)
		{
			uParam0->f_23 = MISC::GET_GAME_TIMER();
		}
		if (uParam0->f_23 + 150 < MISC::GET_GAME_TIMER())
		{
			return true;
		}
	}
	else
	{
		uParam0->f_23 = 0;
	}
	return false;
}

void func_4(var uParam0)
{
	if (__LIB_0__::func_30(uParam0->f_15))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_15, false);
	}
	if (__LIB_9__::func_999(uParam0->f_16))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_16);
	}
}

void func_5(int iParam0)
{
	struct<2> Var0;
	struct<2> Var22;
	int iVar29;
	Var0.f_1 = 20;
	if (__LIB_0__::func_356(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				__LIB_0__::func_597(0, 7000);
			}
			else if (-1104847406 == Var22.f_1)
			{
				__LIB_0__::func_597(2, 7000);
			}
			else if (381158954 == Var22.f_1)
			{
				__LIB_0__::func_597(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				__LIB_0__::func_597(0, 7000);
			}
			else if (1857353317 == Var22.f_1)
			{
				__LIB_0__::func_597(2, 7000);
			}
			else if (1681823811 == Var22.f_1)
			{
				__LIB_0__::func_597(1, 7000);
			}
			iVar29++;
		}
	}
}

bool func_6(var uParam0)
{
	if (__LIB_0__::func_30(uParam0->f_15))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_15))
		{
			return false;
		}
	}
	if (__LIB_9__::func_999(uParam0->f_16))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_16))
		{
			return false;
		}
	}
	if (Global_1935496.f_31 != uParam0->f_1 && __LIB_0__::func_356(uParam0->f_1) == joaat("CONSUMABLE"))
	{
		return false;
	}
	return true;
}

void func_7(var uParam0)
{
	vector3 vVar0;
	if (!Global_1935630.f_12 && __LIB_0__::func_30(uParam0->f_15))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 0f, -10f) };
		uParam0->f_4 = OBJECT::CREATE_OBJECT(uParam0->f_15, vVar0, false, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_4, Global_35, PED::GET_PED_BONE_INDEX(Global_35, uParam0->f_22), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
}

void func_8(var uParam0)
{
	if (uParam0->f_13)
	{
		if (uParam0->f_14 != 0)
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(Global_35, uParam0->f_14, 0, true, 0, -1f, false);
		}
		return;
	}
	if (!__LIB_9__::func_999(uParam0->f_16))
	{
		return;
	}
	if (!Global_1935630.f_12 && (uParam0->f_12 || ENTITY::DOES_ENTITY_EXIST(uParam0->f_4)))
	{
		if (!uParam0->f_12 && __LIB_9__::func_999(uParam0->f_17))
		{
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_4, uParam0->f_17, uParam0->f_16, 16f, false, true, false, 0f, 0);
		}
		if (__LIB_9__::func_999(uParam0->f_18))
		{
			TASK::TASK_PLAY_ANIM(Global_35, uParam0->f_16, uParam0->f_18, 16f, -4f, -1, 67108880, 0f, false, 4096, false, uParam0->f_20, false);
		}
	}
}

void func_9(var uParam0)
{
	if (!__LIB_9__::func_999(uParam0->f_16))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_21) && ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_4, uParam0->f_16, uParam0->f_17, 1))
		{
			TASK::_0x87B66D77D545DB66(uParam0->f_4, uParam0->f_21, 0, 1);
		}
	}
}

void func_10(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (uParam0->f_9)
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_4));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		}
	}
	__LIB_4__::func_896(1);
	if (uParam0->f_13)
	{
		TASK::CLEAR_PED_TASKS(Global_35, false, false);
	}
	Global_1935496.f_31 = 0;
	Global_1935496.f_32 = 0;
	Global_1935689.f_8 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	fVar0 = __LIB_0__::func_260(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!__LIB_0__::func_293(17))
	{
		return;
	}
	if (__LIB_6__::func_152())
	{
		iVar1 = __LIB_0__::func_261(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = __LIB_0__::func_261(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = __LIB_0__::func_23();
			__LIB_7__::func_846(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		__LIB_6__::func_44(&fVar3, &fVar4);
		__LIB_1__::func_557(13, __LIB_0__::func_251(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			__LIB_1__::func_240(94, 0);
		}
	}
}

void func_12(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	iParam0 = iParam0;
}

void func_13(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_14, 1);
	__LIB_2__::func_766(uParam1, iLocal_15, 2);
}

bool func_14(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_2() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

void func_15()
{
	__LIB_4__::func_603(&(Global_1946804.f_1949));
}

void func_16(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		__LIB_9__::func_171(uParam1, uParam2, &uVar0, &uVar1, 0, __LIB_8__::func_989());
	}
}

void func_17(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_4__::func_661(iParam0))
	{
		return;
	}
	if (!__LIB_4__::func_662(iParam1))
	{
		return;
	}
	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && __LIB_4__::func_630(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = __LIB_0__::func_23();
		__LIB_9__::func_979(iParam0, &iVar0, &iVar1, bVar2);
		__LIB_1__::func_446(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_18(var uParam0)
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	iVar16 = __LIB_4__::func_939(uParam0);
	iVar17 = __LIB_5__::func_24(iVar16);
	iVar18 = __LIB_5__::func_279(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_583(uParam0, &(uParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_4__::func_972(&(uParam0->f_8269[iVar19 /*16*/]));
				}
				else if (__LIB_5__::func_584(uParam0, &(uParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_5__::func_29(&(uParam0->f_8269[iVar19 /*16*/]));
					if (iVar19 < (uParam0->f_8269.f_2504 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269[iVar19 /*16*/]), &(uParam0->f_8269[(uParam0->f_8269.f_2504 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269[uParam0->f_8269.f_2504 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2504 = (uParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2505)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_641[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_489(uParam0, &(uParam0->f_8269.f_641[iVar19 /*16*/]), iVar16, iVar17, iVar18, 1))
				{
					__LIB_4__::func_990(&(uParam0->f_8269.f_641[iVar19 /*16*/]));
					if (iVar19 < (uParam0->f_8269.f_2505 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[iVar19 /*16*/]), &(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1) /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2505 = (uParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2506)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_489(uParam0, &(uParam0->f_8269.f_1282[iVar19 /*16*/]), iVar16, iVar17, iVar18, 0))
				{
					if (__LIB_1__::func_388(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 1))
					{
						if (__LIB_0__::func_755(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 4))
						{
							__LIB_4__::func_991(&(uParam0->f_8269));
						}
						if (iVar19 < (uParam0->f_8269.f_2506 - 1))
						{
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), &(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1) /*16*/]), 16);
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1) /*16*/]), &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), &uVar0, 16);
						}
						uParam0->f_8269.f_2506 = (uParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2507)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_583(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_9__::func_100(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
					__LIB_0__::func_324(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
				}
				else if (__LIB_5__::func_584(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_9__::func_100(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), 0);
					__LIB_0__::func_324(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 2);
					if (iVar19 < (uParam0->f_8269.f_2507 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), &(uParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2507 = (uParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

int func_19(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_75(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_1__::func_283(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_0__::func_37(uParam4);
	}
	if (__LIB_0__::func_75(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_0__::func_265(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

int func_20(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	if (!__LIB_8__::func_692(iParam0))
	{
		return 0;
	}
	if ((__LIB_1__::func_25(Global_1347702[59 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (__LIB_9__::func_78(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && !__LIB_5__::func_542(iParam0)) && !Global_43891)
		{
			__LIB_9__::func_245(iParam0, BUILTIN::VDIST2(__LIB_5__::func_449(iParam0), Global_36), -1, 1, 1);
			__LIB_5__::func_450(&(Global_1835011[iParam0 /*74*/]), 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!__LIB_4__::func_378(__LIB_5__::func_538(iParam0), __LIB_3__::func_918(iParam0), 0, Global_1835011[iParam0 /*74*/].f_21, iParam3))
		{
			return 0;
		}
		if (__LIB_5__::func_543(1) > 1)
		{
			if (Global_1835011[iParam0 /*74*/].f_73 <= 0)
			{
				Global_1835011[iParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - Global_1835011[iParam0 /*74*/].f_73) < 60000)
			{
				if (__LIB_8__::func_990(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549.f_1494 & 32768 != 0) && __LIB_0__::func_266(Global_35, __LIB_1__::func_469(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
					{
						Global_1835011[iParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[iParam0 /*74*/].f_72, __LIB_1__::func_469(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[iParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(__LIB_1__::func_469(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = __LIB_1__::func_319(Global_1835011[iParam0 /*74*/].f_1);
	if (!__LIB_0__::func_79(iVar0))
	{
		return 0;
	}
	else if (Global_1835011[iParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[iParam0 /*74*/].f_73 = 0;
		__LIB_8__::func_991(iParam0);
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
		}
	}
	if (bParam1)
	{
		__LIB_5__::func_506(Global_1835011[iParam0 /*74*/].f_1);
	}
	else if (!Global_1879534)
	{
		__LIB_0__::func_301(4);
	}
	return 1;
}

bool func_21(int iParam0, int iParam1)
{
	return __LIB_9__::func_4(iParam0, iParam1, &(Global_1946804.f_1949), 1, 0, 0);
}

int func_22(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_9__::func_450(uParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_5__::func_339(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_9__::func_451(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				__LIB_9__::func_452(uParam0, uParam1, iVar0);
				break;
			case joaat("EVENT_ENTITY_DAMAGED"):
			case 2145012826:
				__LIB_9__::func_453(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	__LIB_9__::func_454(uParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

void func_23()
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
	__LIB_9__::func_908(7);
	__LIB_9__::func_961(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_9__::func_961(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_9__::func_961(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_24(int iParam0)
{
	int iVar0;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(iParam0);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
	}
}

void func_25(int iParam0)
{
	int iVar0;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(iParam0);
	PERSCHAR::_0x7B204F88F6C3D287(iVar0);
}

void func_26(var uParam0, int iParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		STREAMING::REMOVE_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
		__LIB_0__::func_7(&(uParam0->f_1), 4);
	}
}

void func_27(int iParam0)
{
	Global_1905944.f_5694 = iParam0;
}

void func_28(int iParam0)
{
	Global_1310720.f_10 = iParam0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

int func_30()
{
	if (Global_1572887.f_12 != -1)
	{
		Global_35 = Global_1225639.f_8;
		Global_36 = { Global_1225639.f_16 };
		return Global_1225639.f_10;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

void func_31()
{
	Global_1935630.f_13 = 0;
	Global_1935630.f_14 = 0;
	Global_1935630.f_26 = 0;
	Global_1935630.f_15 = 0;
	Global_1935630.f_16 = 0;
	Global_1935630.f_17 = 0;
	Global_1935630.f_18 = 0;
	Global_1935630.f_19 = -1;
	Global_1935630.f_20 = -1;
	Global_1935630.f_21 = -1;
	Global_1935630.f_23 = 0;
}

int func_32(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_33(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] - (Global_40.f_431[iParam0] && iParam1));
		return;
	}
	Global_1058888.f_42339[iParam0] = (Global_1058888.f_42339[iParam0] - (Global_1058888.f_42339[iParam0] && iParam1));
}

void func_34(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), iParam2);
		}
		iVar0++;
	}
}

bool func_35(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_34(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0 /*5*/] && iParam1) != 0;
}

void func_36(vector3 vParam0, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	bool bVar0;
	bVar0 = __LIB_5__::func_783(iParam4);
	if (!INTERIOR::IS_VALID_INTERIOR(iParam8))
	{
		if (iParam5 != 0)
		{
			iParam8 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(vParam0, iParam5);
		}
		else
		{
			iParam8 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
		}
	}
	if (INTERIOR::IS_VALID_INTERIOR(iParam8))
	{
		if (__LIB_9__::func_922(iParam4) != bVar0 || INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam8, sParam3) != bVar0)
		{
			if (__LIB_9__::func_923(iParam8, iParam6, bParam7))
			{
				if (bVar0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam8, sParam3, 0);
					__LIB_9__::func_924(iParam4);
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(iParam8, 1);
						INTERIOR::_0xFE2B3D5500B1B2E4(iParam8, 1);
					}
				}
				else
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam8, sParam3, true);
					__LIB_9__::func_925(iParam4);
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(iParam8, 0);
						INTERIOR::_0xFE2B3D5500B1B2E4(iParam8, 0);
					}
				}
			}
		}
	}
}

void func_37(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_622(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] || iParam1);
		return;
	}
	Global_1058888.f_42339[iParam0] = (Global_1058888.f_42339[iParam0] || iParam1);
}

bool func_38(int iParam0)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_622(iParam0, 2);
}

int func_39(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return 0;
	}
	if (Global_40.f_358[iParam0 /*12*/].f_5 & 2 != 0)
	{
		return 5;
	}
	if (Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return __LIB_8__::func_978(Global_40.f_358[iParam0 /*12*/]);
	}
	return 0;
}

int func_40(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	StringCopy(&cVar0, __LIB_8__::func_979(iParam0), 64);
	sVar8 = __LIB_1__::func_569(cVar0);
	return MISC::GET_HASH_KEY(sVar8);
}

void func_41()
{
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
	if (__LIB_0__::func_293(47))
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
	}
}

void func_42(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_730(iParam0) && __LIB_9__::func_27(iParam0))
	{
		__LIB_9__::func_95(__LIB_9__::func_28(iParam0));
	}
	else
	{
		__LIB_9__::func_90(__LIB_9__::func_28(iParam0));
	}
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	if (!__LIB_0__::func_923(iParam0))
	{
		return 0;
	}
	__LIB_9__::func_92(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

void func_44(int iParam0, var uParam1)
{
	if (ITEMSET::IS_ITEMSET_VALID(iParam0))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0);
	}
}

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2910.89f, 1310.44f, 44.38f;
		case 5:
			return 2506.39f, -1308.93f, 47.95f;
		case 105:
			return 1359.44f, -1304.92f, 76.76f;
		case 26:
			return -1808.58f, -350.06f, 163.65f;
		case 76:
			return -275.78f, 804.02f, 118.37f;
		case 38:
			return -757.78f, -1269.13f, 43.14f;
		case 115:
			return -5528.903f, -2929.261f, -2.2833f;
	}
	return 0f, 0f, 0f;
}

int func_46(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 78:
			iVar0 = 382;
			break;
		case 5:
			iVar0 = 256;
			break;
		case 105:
			iVar0 = 70;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 76:
			iVar0 = 3;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 115:
			iVar0 = 348;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 1;
		case 26:
			return 2;
		case 105:
			return 3;
		case 5:
			return 2;
		case 38:
			return 3;
		case 115:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			if (iParam1 == 0)
			{
				return 14;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 11;
			}
			else if (iParam1 == 1)
			{
				return 153;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 13;
			}
			else if (iParam1 == 1)
			{
				return 154;
			}
			else if (iParam1 == 2)
			{
				return 15;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 12;
			}
			else if (iParam1 == 1)
			{
				return 16;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 18;
			}
			else if (iParam1 == 1)
			{
				return 155;
			}
			else if (iParam1 == 2)
			{
				return 17;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return 19;
			}
			else if (iParam1 == 1)
			{
				return 20;
			}
			break;
	}
	return -1;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return joaat("DOCUMENT_POSTER_SB_DUEL");
		case 13:
			return -120239629 /* GXTEntry: "Bounty Poster - Mark Johnson" */;
		case 12:
			return -1129500286 /* GXTEntry: "Bounty Poster - Lindsey Wofford" */;
		case 14:
			return -1490222567 /* GXTEntry: "Bounty Poster - Ellie Anne Swan" */;
		case 17:
			return joaat("DOCUMENT_POSTER_SKINNER_BROS");
		case 18:
			return joaat("DOCUMENT_POSTER_SKINNER_SEARCH");
		case 15:
			return joaat("DOCUMENT_POSTER_SHACK_ESCAPE");
		case 16:
			return joaat("DOCUMENT_POSTER_SD_SALOON");
		case 19:
			return joaat("DOCUMENT_POSTER_BANDITO_SHACK");
		case 20:
			return joaat("DOCUMENT_POSTER_BANDITO_MINE");
		case 155:
			return 1472661824 /* GXTEntry: "Bounty Poster - Herman Zizendorf" */;
		case 153:
			return -1980065901 /* GXTEntry: "Bounty Poster - Bart Cavanaugh" */;
		case 154:
			return 1385735108 /* GXTEntry: "Bounty Poster - Camille de Millemont" */;
		default:
			break;
	}
	return joaat("DOCUMENT_TEST_BOUNTY_POSTER");
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = -1;
	iVar1 = __LIB_5__::func_230(iParam1);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if (iVar3 >= 0)
			{
				__LIB_5__::func_231(iVar3, Global_40.f_9829[iVar0 /*4*/].f_1, iParam1, Global_40.f_9829[iVar0 /*4*/].f_3);
			}
			iVar3 = iVar0;
			iVar2++;
			if (iVar2 == iVar1)
			{
				__LIB_5__::func_231(iVar0, iParam0, iParam1, 0);
				return;
			}
		}
		iVar0++;
	}
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("P_CHAIRDESK02X");
		case 105:
			return joaat("P_WOODENCHAIR01X");
		case 26:
			return joaat("P_CHAIR24X");
		case 76:
			return joaat("P_DININGCHAIRS01X");
		case 38:
			return joaat("P_DININGCHAIRS01X");
		case 115:
			return joaat("P_WINDSORCHAIR03X");
		case 78:
			return joaat("P_WOODENCHAIR01X");
	}
	return joaat("P_CHAIR24X");
}

void func_52()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&(Global_1395482.f_20[iVar0 /*3*/]), "", 24);
		StringCopy(&(Global_1395482.f_36[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_52[iVar0 /*3*/]), "", 24);
		StringCopy(&(Global_1395482.f_62[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	Global_1395482.f_115 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	__LIB_3__::func_695(Global_1395482.f_1, 8);
	__LIB_3__::func_695(Global_1395482.f_1, 16);
}

bool func_53(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	fVar0 = 0f;
	if (bParam2)
	{
		fVar0 = 4f;
	}
	switch (iParam0)
	{
		case 76:
			if (__LIB_0__::func_94(Global_35, -275.43f, 802.52f, 118.41f, 0) < (1f + fVar0) || __LIB_0__::func_94(Global_35, -276.39f, 812.02f, 118.42f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 78:
			if (__LIB_0__::func_94(Global_35, 2911.362f, 1310.298f, 43.94069f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 26:
			if (!bParam1 && __LIB_0__::func_94(Global_35, -1806.44f, -350.96f, 163.65f, 0) < (1f + fVar0))
			{
				return true;
			}
			if (__LIB_0__::func_94(Global_35, -1812.81f, -345.61f, 163.66f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 105:
			if (__LIB_0__::func_94(Global_35, 1359.11f, -1305.88f, 76.77f, 0) < (1f + fVar0) || __LIB_0__::func_94(Global_35, 1358.8f, -1298.06f, 76.78f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 5:
			if ((((((__LIB_0__::func_94(Global_35, 2511.1f, -1311.37f, 47.95f, 0) < (1.5f + fVar0) || __LIB_0__::func_94(Global_35, 2507.45f, -1317.49f, 47.62f, 0) < (1.5f + fVar0)) || __LIB_0__::func_94(Global_35, 2496.77f, -1317.49f, 47.81f, 0) < (1.5f + fVar0)) || __LIB_0__::func_94(Global_35, 2493.1f, -1311.09f, 47.94f, 0) < (1.5f + fVar0)) || __LIB_0__::func_94(Global_35, 2493.22f, -1306.48f, 47.95f, 0) < (1.5f + fVar0)) || __LIB_0__::func_94(Global_35, 2511.18f, -1306.25f, 47.95f, 0) < (1.5f + fVar0)) || __LIB_0__::func_94(Global_35, 2516.28f, -1308.78f, 47.96f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
		case 38:
			if (__LIB_0__::func_94(Global_35, -756.9f, -1269.2f, 43.03f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			else if (__LIB_0__::func_94(Global_35, -769.19f, -1269.29f, 42.98f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 115:
			if (!bParam1 && __LIB_0__::func_94(Global_35, -5527.72f, -2930.482f, -2.2717f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_54()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_95[iVar0 /*6*/]), "", 32);
		Global_1395482.f_95[iVar0 /*6*/].f_4 = 2;
		iVar0++;
	}
	Global_1395482.f_94 = 0;
	__LIB_3__::func_695(Global_1395482.f_1, 512);
}

void func_55(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1 && Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
		{
			__LIB_4__::func_901(iVar0, 128);
		}
		iVar0++;
	}
}

Vector3 func_56(char[12] cParam0)
{
	if (__LIB_0__::func_181())
	{
		StringConCat(&cParam0, "J", 24);
	}
	else
	{
		StringConCat(&cParam0, "A", 24);
	}
	return cParam0;
}

void func_57(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 278, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 305, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 306, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 21, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 314, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 466, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 326, true);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 16, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, false);
	PED::_0x2E5B5D1F1453E08E(*uParam0, 1);
	MISC::_0x7FA58CED69405F9A(*uParam0, 3);
	HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(*uParam0);
	__LIB_1__::func_991(*uParam0, 0);
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
	sVar2 = __LIB_2__::func_650(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
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
	if (__LIB_2__::func_651(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_59()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_387))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15.f_387, joaat("REL_CRIMINALS"));
		PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_15.f_387, joaat("REL_CRIMINALS"));
		PED::SET_PED_CONFIG_FLAG(Local_15.f_387, 6, true);
	}
}

void func_60(int iParam0, int iParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2504.735f, -1308.831f, 49.06328f, 0f, 0f, 0f, 22.43624f, 17.01578f, 3.468709f, "SD Sheriff Office");
			break;
		case 26:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry Sheriff Office");
			VOLUME::_0x39816F6F94F385AD(*iParam1, -1810.522f, -349.3201f, 163.474f, 0f, 0f, -25.06604f, 7.327408f, 6.633123f, 6.036f);
			VOLUME::_0x39816F6F94F385AD(*iParam1, -1813.445f, -353.8168f, 163.474f, 0f, 0f, -25.06604f, 5.841297f, 4.267593f, 6.036f);
			break;
		case 76:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine Sheriff Office");
			VOLUME::_0x39816F6F94F385AD(*iParam1, -272.9176f, 809.1227f, 119.4f, 0f, 0f, -80.06616f, 6.765059f, 4.518183f, 3f);
			VOLUME::_0x39816F6F94F385AD(*iParam1, -277.2155f, 807.0856f, 119.8f, 0f, 0f, -79.7f, 9.130634f, 5.028743f, 2.8f);
			break;
		case 78:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.428f, 1312.199f, 45.46901f, 0f, 0f, -21.08204f, 10.47463f, 7.642887f, 2.791512f, "Annesburg Sheriff Office");
			break;
		case 105:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes Sheriff Office");
			VOLUME::_0x39816F6F94F385AD(*iParam1, 1355.464f, -1302.104f, 77.52525f, 0f, 0f, -20.36115f, 3.923681f, 4.045318f, 2.635184f);
			VOLUME::_0x39816F6F94F385AD(*iParam1, 1360.674f, -1301.562f, 77.52525f, 0f, 0f, -20.30303f, 5.747039f, 8.956645f, 2.635184f);
			break;
		case 38:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater Sheriff Office");
			VOLUME::_0x39816F6F94F385AD(*iParam1, -763.0246f, -1269.283f, 43.6176f, 0f, 0f, 0f, 12.03637f, 8.528987f, 5.107259f);
			VOLUME::_0x39816F6F94F385AD(*iParam1, -764.7173f, -1263.493f, 43.76242f, 0f, 0f, 0f, 7.664316f, 3.774002f, 5.107259f);
			break;
		case 115:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5529.529f, -2927.852f, -1.033f, 0f, 0f, 25f, 6.7f, 6.3f, 3f, "Tumbleweed Sheriff Office");
			break;
		default:
			break;
	}
}

bool func_61(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!bParam1 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam1 && !PED::_IS_PED_HOGTIED(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam0, "bIsCriminal"))
	{
		return true;
	}
	return false;
}

Vector3 func_62(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 78:
			return 2907.757f, 1312.703f, 43.94054f;
		case 5:
			return 2508.101f, -1307.674f, 47.954f;
		case 105:
			return 1361.196f, -1304.287f, 76.761f;
		case 26:
			return -1808.399f, -348.088f, 163.655f;
		case 76:
			return -276.91f, 804.93f, 119.24f;
		case 38:
			if (iParam1 == 18)
			{
				return -762.74f, -1271.27f, 43.84f;
			}
			else
			{
				return -762.751f, -1266.627f, 43.051f;
			}
			break;
		case 115:
			return -5530.877f, -2930.6f, -2.2877f;
	}
	return 0f, 0f, 0f;
}

void func_63(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		ENTITY::_0x18FF3110CF47115D(iParam0->f_387, 7, 1);
		ENTITY::_0x18FF3110CF47115D(iParam0->f_387, 4, 1);
		ENTITY::_0x18FF3110CF47115D(iParam0->f_387, 14, 1);
		ENTITY::_0x18FF3110CF47115D(iParam0->f_387, 4, 1);
		ENTITY::_0x18FF3110CF47115D(iParam0->f_387, 1, 1);
		ENTITY::_0x18FF3110CF47115D(iParam0->f_387, 2, 1);
		ENTITY::_0x18FF3110CF47115D(iParam0->f_387, 3, 1);
		ENTITY::_0x18FF3110CF47115D(iParam0->f_387, 16, 1);
	}
}

Vector3 func_64(int iParam0, char* sParam1)
{
	vector3 vVar0;
	vVar0 = { iParam0->f_398 };
	StringConCat(&vVar0, "_", 24);
	StringConCat(&vVar0, sParam1, 24);
	return vVar0;
}

bool func_65(bool bParam0)
{
	if (bParam0)
	{
		if (Local_15.f_458 >= 3)
		{
			if (Local_15.f_459 >= 3)
			{
				return true;
			}
		}
	}
	if (Local_15.f_456 >= 5)
	{
		if (Local_15.f_457 >= 5)
		{
			return true;
		}
	}
	return false;
}

void func_66(var uParam0, int iParam1)
{
	uParam0->f_59 = iParam1;
}

Vector3 func_67(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2908.76f, 1304.58f, 43.91f;
		case 5:
			return 2483.26f, -1303.78f, 48.88f;
		case 105:
			return 1362.846f, -1294.084f, 75.7035f;
		case 26:
			return -1808.76f, -342.45f, 163.81f;
		case 76:
			return -277.76f, 816.93f, 118.15f;
		case 38:
			return -768.61f, -1277.13f, 42.56f;
		case 115:
			return -5533.509f, -2932.444f, -2.8992f;
	}
	return 0f, 0f, 0f;
}

bool func_68(var uParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = 1;
	STREAMING::REQUEST_MODEL(uParam0->f_14, false);
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
	{
		iVar0 = 0;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_19, false);
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
	{
		iVar0 = 0;
	}
	if (uParam0->f_5 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_5, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_7 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_7, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_7))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_11 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_11, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_11))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_9 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_9, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_9))
		{
			iVar0 = 0;
		}
	}
	switch (uParam0->f_300)
	{
		case 76:
			sVar1 = "BHJVAAU";
			break;
		case 26:
			sVar1 = "BHJSTAU";
			break;
		case 105:
			sVar1 = "BHJROAU";
			break;
		case 5:
			sVar1 = "BHJSDAU";
			break;
		case 38:
			sVar1 = "BHJBWAU";
			break;
		case 115:
			sVar1 = "BHJTWAU";
			break;
		case 78:
			sVar1 = "";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar1);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_69(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_307))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_307, false, 0))
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_306, false, 0))
	{
		return true;
	}
	return false;
}

int func_70(var uParam0)
{
	switch (uParam0->f_5)
	{
		case 0:
			return Global_35;
		case 1:
			return Local_15.f_387;
		default:
			break;
	}
	return 0;
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_60 = iParam1;
}

void func_72(var uParam0)
{
	switch (uParam0->f_301)
	{
		case 1:
		case default:
			TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", -1, false, true, 0, false, -1f, false);
			break;
		case 0:
			TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_STANDING_DESK", -1, false, true, 0, false, -1f, false);
			break;
		case 2:
			TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_SIT_WRITING", -1, false, true, 0, false, -1f, false);
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_12));
	}
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 20:
			return joaat("GANG_BANDITOS");
		case 17:
		case 18:
			return joaat("GANG_SAVAGES");
		case 12:
		case 154:
			return joaat("GANG_EXCONFED");
		case 153:
			return joaat("GANG_RANCHERS");
	}
	return 0;
}

bool func_74(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_310))
	{
		vVar0 = { uParam0->f_1 };
		uParam0->f_310 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0.x, vVar0.y, (vVar0.z + 1f), 0f, 0f, 0f, 4.5f, 4.5f, 2.2f, "BH_RewardLineTriggerFar");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_311))
	{
		vVar3 = { uParam0->f_1 };
		uParam0->f_311 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar3.x, vVar3.y, (vVar3.z + 1f), 0f, 0f, 0f, 3f, 3f, 2.2f, "BH_RewardLineTriggerClose");
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_306, Global_36))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_310, Global_36) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_69))
		{
			return true;
		}
		else if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_311, Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_75(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		return false;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
	{
		return false;
	}
	return true;
}

Vector3 func_76(int iParam0)
{
	vector3 vVar0[24];
	switch (iParam0)
	{
		case 76:
			StringCopy(&cVar0, "JRPY_VA_NOT", 24);
			break;
		case 38:
			StringCopy(&cVar0, "JRPY_BW", 24);
			break;
		case 26:
			StringCopy(&cVar0, "JRPY_ST_A", 24);
			break;
		case 78:
			StringCopy(&cVar0, "", 24);
			break;
		case 105:
			StringCopy(&cVar0, "JRPYE_RO", 24);
			break;
		case 5:
			StringCopy(&cVar0, "", 24);
			break;
		case 115:
			StringCopy(&cVar0, "BHJTW_PAY_LEALY", 24);
			break;
	}
	return cVar0;
}

Vector3 func_77(int iParam0)
{
	vector3 vVar0[24];
	switch (iParam0)
	{
		case 26:
			StringCopy(&cVar0, "_ST", 24);
			break;
		case 76:
			StringCopy(&cVar0, "_VA", 24);
			break;
		case 105:
			StringCopy(&cVar0, "_RO", 24);
			break;
		case 5:
			StringCopy(&cVar0, "_SD", 24);
			break;
		case 38:
			StringCopy(&cVar0, "_BW", 24);
			break;
		case 115:
			StringCopy(&cVar0, "_TW", 24);
			break;
		case 78:
			StringCopy(&cVar0, "_AN", 24);
			break;
		default:
			StringCopy(&cVar0, "_ST", 24);
			break;
	}
	return cVar0;
}

void func_78()
{
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYCLIP")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYCLIP"));
	}
}

bool func_79(int iParam0)
{
	if ((ENTITY::_0x61914209C36EFDDB(iParam0) == 5 || ENTITY::_0x61914209C36EFDDB(iParam0) == 4) || ENTITY::_0x61914209C36EFDDB(iParam0) == 9)
	{
		if (PED::_GET_CARRIER_AS_HUMAN(iParam0) == Global_35)
		{
			return true;
		}
	}
	return false;
}

void func_80(var uParam0)
{
	if (uParam0->f_5 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
	}
	if (uParam0->f_7 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
	}
	if (uParam0->f_9 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_9);
	}
	if (uParam0->f_11 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_11);
	}
}

bool func_81(int iParam0)
{
	var uVar0;
	if (ENTITY::_0x61914209C36EFDDB(iParam0) == 3 && !ENTITY::_0x383F64263F946E45(&uVar0, iParam0, 4, Global_35, 0, 1))
	{
		if (!FIRE::IS_ENTITY_ON_FIRE(iParam0) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			return true;
		}
	}
	return false;
}

void func_82(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam0->f_329, 262144))
	{
		return;
	}
	if (!__LIB_0__::func_272(uParam0->f_67, 0) || PED::_IS_PED_HOGTIED(uParam0->f_67))
	{
		iVar0 = 455691738;
	}
	else
	{
		iVar0 = 953018525;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_68))
	{
		MAP::_0xBD62D98799A3DAF0(uParam0->f_68, iVar0);
	}
	else
	{
		uParam0->f_68 = MAP::_BLIP_ADD_FOR_ENTITY(iVar0, uParam0->f_67);
	}
	MAP::_0x97F6F158CC5B5CA2(uParam0->f_67, uParam0->f_68);
	MAP::_BLIP_SET_MODIFIER(uParam0->f_68, 231194138);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_68, &(uParam0->f_325));
}

bool func_83(var uParam0)
{
	if (uParam0->f_300 == 5)
	{
		return true;
	}
	return false;
}

int func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 == 0)
			{
				return 1674105116;
			}
			else if (iParam1 == 1)
			{
				return 1979938193;
			}
			else if (iParam1 == 2)
			{
				return 1879655431;
			}
			else if (iParam1 == 3)
			{
				return -1170253702;
			}
			else if (iParam1 == 4)
			{
				return -864682777;
			}
			else if (iParam1 == 5)
			{
				return -693431983;
			}
			else if (iParam1 == 6)
			{
				return 417663242;
			}
			else if (iParam1 == 7)
			{
				return 1611175760;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 1614494720;
			}
			else if (iParam1 == 1)
			{
				return 349074475;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 1514359658;
			}
			else if (iParam1 == 1)
			{
				return 1821044729;
			}
			break;
		case 76:
			if (iParam1 == 0)
			{
				return 395506985;
			}
			else if (iParam1 == 1)
			{
				return joaat("DOOR_VAL_JAIL_CELL_01");
			}
			else if (iParam1 == 2)
			{
				return 1988748538;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return -1484165375;
			}
			else if (iParam1 == 1)
			{
				return -473782212;
			}
			else if (iParam1 == 2)
			{
				return -884246706;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return joaat("DOOR_TUM_02_JAIL_FRONT");
			}
			break;
		case 78:
			if (iParam1 == 0)
			{
				return -2082598623;
			}
			break;
	}
	return 0;
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_62 = iParam1;
}

void func_86(var uParam0)
{
	if (uParam0->f_27 == 0)
	{
		uParam0->f_27 = ENTITY::_0x6F3068258A499E52(uParam0->f_5, uParam0->f_1, 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_27))
	{
		uParam0->f_4 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_27));
	}
}

bool func_87(var uParam0)
{
	if ((((((uParam0->f_65 == 11 || uParam0->f_65 == 16) || uParam0->f_65 == 154) || uParam0->f_65 == 13) || uParam0->f_65 == 15) || uParam0->f_65 == 20) || uParam0->f_65 == 19)
	{
		return true;
	}
	return false;
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "Player";
		case 105:
			return "plr";
		case 78:
			return "Player";
		case 26:
			return "Player";
		case 5:
			return "Player";
		case 38:
			return "Player";
		case 115:
			return "Player";
	}
	return "";
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_61 = iParam1;
}

void func_90(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			if (!bLocal_14)
			{
				if (CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING() > 90f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				}
				bLocal_14 = true;
			}
			CAM::_CLAMP_GAMEPLAY_CAM_YAW(-45f, 90f);
			break;
	}
}

int func_91(int iParam0)
{
	if (iParam0 == 76)
	{
		return 0;
	}
	else if (iParam0 == 38)
	{
		return 0;
	}
	return -1;
}

void func_92(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1 && Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
		{
			Global_40.f_9829[iVar0 /*4*/].f_3 = uParam2;
		}
		iVar0++;
	}
}

bool func_93(int iParam0)
{
	if (iParam0 == 14)
	{
		return true;
	}
	return false;
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return "ANN";
		case 5:
			return "NBX";
		case 105:
			return "RHO";
		case 26:
			return "STR";
		case 76:
			return "VAL";
		case 38:
			return "BLK";
		case 115:
			return "TBL";
	}
	return "";
}

bool func_95(var uParam0)
{
	if (uParam0->f_300 == 5 || uParam0->f_300 == 38)
	{
		return true;
	}
	return false;
}

bool func_96(var uParam0)
{
	float fVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_30[0 /*14*/].f_1, false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_30[0 /*14*/].f_1, "PB_REWARD_R"))
		{
			fVar0 = 6.8f;
		}
		else
		{
			fVar0 = 5.7f;
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[0 /*14*/].f_1) > fVar0)
		{
			return true;
		}
	}
	return false;
}

void func_97()
{
	struct<6> Var0;
	MISC::_0x49F3241C28EBBFBC(0);
	Var0 = joaat("CURRENCY_CASH");
	Var0.f_3 = 6;
	if (Global_1392235)
	{
		Var0.f_4 = Global_40.f_9074.f_3;
		Var0.f_5 = Global_40.f_9074.f_3;
	}
	else
	{
		Var0.f_4 = Global_40.f_9074.f_4;
		Var0.f_5 = Global_40.f_9074.f_4;
	}
	Var0.f_1 = 1f;
	MISC::_0x183672FE838A661B(&Var0);
	MISC::_0x38C0C9CAE1544500(joaat("REWARD_MONEYCLIP"));
}

int func_98(int iParam0)
{
	if (!__LIB_1__::func_76(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 76;
		case 2:
			return 26;
		case 5:
			return 105;
		case 4:
			return 78;
		case 6:
			return 5;
		case 1:
			return 38;
		case 0:
			return 115;
		default:
			break;
	}
	return -1;
}

int func_99(int iParam0)
{
	if (!__LIB_1__::func_76(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 9;
		case 2:
			return 1;
		case 6:
			return 0;
		case 4:
			return 10;
		case 1:
			return 4;
		case 5:
			return 11;
		case 0:
			return 13;
		default:
			break;
	}
	return -1;
}

void func_100(int iParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SD Dialogue Volume");
			VOLUME::_0x39816F6F94F385AD(*uParam1, 2506.862f, -1308.892f, 48.50731f, 0f, 0f, 0f, 8f, 16.5f, 3f);
			VOLUME::_0x39816F6F94F385AD(*uParam1, 2499.045f, -1308.865f, 48.91688f, 0f, 0f, 0f, 10f, 2f, 3f);
			break;
		default:
			break;
	}
}

void func_101(int iParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.332f, -1306.672f, 49.06244f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.066f, -353.3387f, 161.438f, 0f, 0f, -20.6699f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-273.4034f, 808.0645f, 119.503f, 0f, 0f, -78.66611f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.195f, -1302.73f, 77.57108f, 0f, 0f, -18.89946f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.9052f, -1264.156f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			break;
		case 78:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2903.745f, 1311.18f, 45.13168f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
			break;
		default:
			break;
	}
}

bool func_102(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::_0x61914209C36EFDDB(iParam0) == 7 || ENTITY::_0x61914209C36EFDDB(iParam0) == 8)
	{
		iVar0 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (__LIB_0__::func_272(iVar0, 0))
		{
			PED::_0x2EB75FB86C41F026(iVar0, 3, 0);
			PED::_0x2EB75FB86C41F026(iVar0, 1, 0);
		}
		if (iParam1 == 0)
		{
			return true;
		}
		if (__LIB_0__::func_272(iVar0, 0))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar1 = PED::GET_MOUNT(Global_35);
				if (iVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::_0x61914209C36EFDDB(iParam0) == 7 || ENTITY::_0x61914209C36EFDDB(iParam0) == 8)
	{
		iVar1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			iVar0 = TASK::_0xED1F514AF4732258(Global_35);
			if (iVar0 == iVar1)
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_104(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2903.174f, 1311.317f, 43.9893f;
		case 5:
			return 2503.365f, -1308.754f, 47.9537f;
		case 105:
			return 1358.246f, -1301.761f, 76.7606f;
		case 26:
			return -1811.682f, -353.0481f, 160.4039f;
		case 76:
			return -273.1385f, 809.027f, 118.38f;
		case 38:
			return -764.4813f, -1263.396f, 42.8484f;
		case 115:
			return -5529.103f, -2926.849f, -2.2884f;
	}
	return 0f, 0f, 0f;
}

bool func_105(var uParam0)
{
	float fVar0;
	float fVar1;
	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_331, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_331) > 3f)
	{
		if ((fVar0 > 0.1f || fVar0 < -0.1f) || (fVar1 > 0.1f || fVar1 < -0.1f))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_331, "player", Global_35);
			return true;
		}
	}
	return false;
}

Vector3 func_106(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2906.88f, 1313.98f, 44.32f;
		case 5:
			return 2510.23f, -1308.89f, 47.95f;
		case 105:
			return 1362.44f, -1301.61f, 76.76f;
		case 26:
			return -1808.22f, -347.41f, 163.65f;
		case 76:
			return -278.31f, 805.26f, 118.37f;
		case 38:
			return -763.94f, -1270.71f, 43.14f;
		case 115:
			return -5530.877f, -2930.6f, -2.2877f;
	}
	return 0f, 0f, 0f;
}

char* func_107(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 78:
			sVar0 = "ASB_Sheriff";
			break;
		case 5:
			sVar0 = "SD_PoliceChief";
			break;
		case 105:
			sVar0 = "RHD_sheriff";
			break;
		case 26:
			sVar0 = "STR_Sheriff";
			break;
		case 76:
			sVar0 = "VAL_Sheriff";
			break;
		case 38:
			sVar0 = "BLW_Police_Chief";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "VAL_Sheriff";
			break;
	}
	return sVar0;
}

bool func_108(var uParam0)
{
	if (uParam0->f_359)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true))
	{
		return __LIB_0__::func_27(uParam0->f_328, 33554432);
	}
	return __LIB_0__::func_27(uParam0->f_328, 16777216);
}

bool func_109(var uParam0)
{
	if (uParam0->f_358)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true))
	{
		return __LIB_0__::func_27(uParam0->f_328, -2147483648);
	}
	return __LIB_0__::func_27(uParam0->f_328, 1073741824 /* Float: 2f */);
}

char* func_110(int iParam0, bool bParam1)
{
	if (iParam0 == 78 && !bParam1)
	{
		return "WHOA";
	}
	return "GREET_PLAYER_CAPTURED_BOUNTY";
}

void func_111(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13))
	{
		if (uParam0->f_29 == 0)
		{
			uParam0->f_29 = ENTITY::_0x6F3068258A499E52(uParam0->f_14, uParam0->f_15, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_29))
		{
			uParam0->f_13 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_29));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		if (uParam0->f_28 == 0)
		{
			uParam0->f_28 = ENTITY::_0x6F3068258A499E52(uParam0->f_19, uParam0->f_20, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_28))
		{
			uParam0->f_18 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_28));
		}
	}
}

int func_112(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
		{
			return 1;
		}
		if (uParam0->f_5 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_4))
			{
				return 1;
			}
		}
		if (uParam0->f_7 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_6))
			{
				return 1;
			}
		}
		if (uParam0->f_11 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_10))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_113(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

void func_114(char* sParam0, char* sParam1, char* sParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam2))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::_CREATE_VAR_STRING(42, sParam0, sParam1, sParam2));
}

void func_115(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam1))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::_CREATE_VAR_STRING(10, sParam0, sParam1));
}

void func_116(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = uParam1;
}

char* func_117(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 78:
			sVar0 = "0034_U_M_O_AsbSheriff_01";
			break;
		case 5:
			sVar0 = "1017_U_M_M_SDPoliceChief_01";
			break;
		case 105:
			sVar0 = "0405_U_M_M_RhdSheriff_01";
			break;
		case 26:
			sVar0 = "0457_U_M_M_StrSherriff_01";
			break;
		case 76:
			sVar0 = "0484_U_M_M_ValSheriff_01";
			break;
		case 38:
			sVar0 = "0085_U_M_O_BlWPoliceChief_01";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "0484_U_M_M_ValSheriff_01";
			break;
	}
	return sVar0;
}

void func_118(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_10)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "Sheriff", uParam0->f_69, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "DESK", uParam0->f_6, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "Chair", uParam0->f_4, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "BOOK", uParam0->f_10, 0);
		}
	}
}

bool func_119(int iParam0)
{
	if (((iParam0 == 14 || iParam0 == 11) || iParam0 == 154) || iParam0 == 17)
	{
		return true;
	}
	return false;
}

bool func_120(int iParam0)
{
	if ((iParam0 == 13 || iParam0 == 16) || iParam0 == 155)
	{
		return true;
	}
	return false;
}

bool func_121(int iParam0)
{
	if (((((iParam0 == 153 || iParam0 == 15) || iParam0 == 18) || iParam0 == 20) || iParam0 == 19) || iParam0 == 12)
	{
		return true;
	}
	return false;
}

char* func_122(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "Bounty";
		case 105:
			return "Target";
		case 78:
			return "Bounty";
		case 26:
			return "Bounty";
		case 5:
			return "Bounty";
		case 38:
			return "Bounty";
		case 115:
			return "Bounty";
	}
	return "";
}

char* func_123(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "CellDoor";
		case 105:
			return "Door";
		case 78:
			return "CellDoor";
		case 26:
			return "CellDoor";
		case 5:
			return "CellDoor";
		case 38:
			return "CellDoor";
		case 115:
			return "CellDoor";
	}
	return "";
}

char* func_124(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "CellDoorLock";
		case 105:
			return "lock";
		case 78:
			return "CellDoorLock";
		case 26:
			return "CellDoorLock";
		case 5:
			return "CellDoorLock";
		case 38:
			return "CellDoorLock";
		case 115:
			return "CellDoorLock";
	}
	return "";
}

void func_125(int iParam0)
{
	__LIB_0__::func_11(iParam0);
	HUD::_TEXT_DATABASE_REQUEST("BHCR");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)))
	{
		HUD::_TEXT_DATABASE_REQUEST(&(iParam0->f_401));
	}
}

bool func_126(int iParam0)
{
	if (!__LIB_0__::func_0(iParam0))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("BHCR"))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)) && !HUD::_TEXT_DATABASE_HAS_LOADED(&(iParam0->f_401)))
	{
		return false;
	}
	return true;
}

void func_127()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_3.f_306))
	{
		if (__LIB_1__::func_205(Global_35, Local_15.f_3.f_306, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_3.f_69))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_15.f_3.f_69, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_15.f_387, -1))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_15.f_387, 0, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				}
			}
		}
	}
}

void func_128(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_76(iParam0))
	{
		return;
	}
	if (!__LIB_3__::func_186(iParam0, iParam1))
	{
		Global_1395482.f_2[iParam0] = (Global_1395482.f_2[iParam0] || iParam1);
	}
}

bool func_129(int iParam0)
{
	if (!__LIB_4__::func_182(4))
	{
		if (!__LIB_3__::func_186(iParam0->f_389, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_130(int iParam0)
{
	if (__LIB_1__::func_76(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1395482.f_117, iParam0);
	}
	return false;
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = -1;
	iVar1 = __LIB_5__::func_230(iParam1);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == -1 && iVar3 == -1)
		{
			iVar3 = iVar0;
		}
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if (Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
			{
				return;
			}
			if (iParam2 == iVar2)
			{
				__LIB_5__::func_231(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_10__::func_50(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	__LIB_5__::func_231(iVar3, iParam0, iParam1, 0);
}

bool func_132(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_931(iParam0) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(5))
	{
		return true;
	}
	return false;
}

bool func_133(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1347702[iParam0 /*49*/].f_15);
	if (__LIB_0__::func_27(iVar0, iParam1))
	{
		return true;
	}
	return false;
}

void func_134(var uParam0)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_301 != 0)
	{
		__LIB_1__::func_683(&(uParam0->f_328), 2097152);
		return;
	}
	if (uParam0->f_300 == 38)
	{
		if ((__LIB_0__::func_265(&(uParam0->f_318)) > 5f && __LIB_0__::func_27(uParam0->f_328, 32)) && __LIB_0__::func_94(Global_35, -762.929f, -1265.749f, 43.051f, 0) > 1f)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -762.929f, -1265.749f, 43.051f, 1f, 20000, 0.25f, 0, 16.36f);
			TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_67, -1, 0, 51, 0);
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_STARE_STOIC"), -1, true, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_69, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			__LIB_1__::func_683(&(uParam0->f_328), 2097152);
		}
	}
	else if (uParam0->f_300 == 76)
	{
		if (__LIB_0__::func_27(uParam0->f_328, 32) && __LIB_0__::func_94(Global_35, -276.282f, 807.353f, 118.379f, 0) > 1f)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_67, -1, 0, 51, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_LEAN_POST_LEFT"), -276.282f, 807.353f, 118.379f, -60.915f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_69, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			__LIB_1__::func_683(&(uParam0->f_328), 2097152);
		}
	}
	else
	{
		__LIB_1__::func_683(&(uParam0->f_328), 2097152);
	}
}

void func_135()
{
	StringCopy(&(Global_1395482.f_11), "", 24);
	StringCopy(&(Global_1395482.f_14), "", 24);
	StringCopy(&(Global_1395482.f_17), "", 24);
	StringCopy(&(Global_1395482.f_76), "", 32);
	__LIB_10__::func_52();
	__LIB_10__::func_54();
	__LIB_3__::func_694();
	Global_1395482.f_115 = 0;
	Global_1395482.f_116 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_94 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	Global_1395482.f_117 = 0;
	Global_1395482.f_93 = 0;
	__LIB_0__::func_769();
	__LIB_3__::func_692(4);
}

bool func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return true;
	}
	iVar0 = __LIB_3__::func_624(Global_35);
	if (iVar0 == iParam0->f_387)
	{
		return false;
	}
	iVar1 = PED::_GET_LAST_MOUNT(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		iVar0 = __LIB_3__::func_624(iVar1);
		if (iVar0 == iParam0->f_387)
		{
			return false;
		}
	}
	if (__LIB_2__::func_118(iParam0->f_387, 1, 1) < 50f)
	{
		return false;
	}
	return true;
}

int func_137(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (__LIB_2__::func_366(Global_35))
		{
			iVar1 = __LIB_8__::func_105(Global_35);
		}
		else if (__LIB_1__::func_869(Global_35))
		{
			iVar1 = __LIB_8__::func_106(Global_35);
		}
		else if (__LIB_2__::func_365(Global_35))
		{
			iVar1 = __LIB_3__::func_989(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (__LIB_0__::func_797(0))
		{
			iVar2 = __LIB_0__::func_398(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar2);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (__LIB_0__::func_797(1))
		{
			iVar3 = __LIB_0__::func_398(1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar3);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar4 = PED::_GET_LAST_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar4);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (!PED::IS_PED_HUMAN(iVar0))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!(DECORATOR::DECOR_EXIST_ON(iVar0, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iVar0, "bIsCriminal")))
		{
			return 0;
		}
	}
	return iVar0;
}

bool func_138(var uParam0)
{
	if (!Global_1935630.f_12)
	{
		if (__LIB_0__::func_20(uParam0->f_300) && __LIB_1__::func_220(uParam0->f_300))
		{
			return true;
		}
	}
	return false;
}

void func_139(var uParam0, int iParam1, char* sParam2)
{
	__LIB_0__::func_928(&(uParam0->f_103), iParam1, sParam2, 1);
}

void func_140(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = -1;
	switch (uParam0->f_300)
	{
		case 76:
			iVar0 = 4;
			break;
		case 26:
			iVar0 = 473;
			break;
		case 105:
			iVar0 = 71;
			break;
		case 5:
			break;
		case 38:
			iVar0 = 510;
			break;
		case 115:
			iVar0 = 349;
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			__LIB_3__::func_229(iVar0);
			__LIB_1__::func_683(&(uParam0->f_329), 16384);
		}
		else if (__LIB_0__::func_27(uParam0->f_329, 16384))
		{
			__LIB_4__::func_193(iVar0);
		}
	}
}

void func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_230(uParam0->f_300);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		__LIB_4__::func_272(uParam0->f_300, iVar1);
		iVar1++;
	}
	__LIB_2__::func_261(uParam0->f_306, "volSheriffOffice", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	__LIB_4__::func_269(1);
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1347702[iParam0 /*49*/].f_15);
	__LIB_1__::func_683(&iVar0, iParam1);
	__LIB_1__::func_532(Global_1347702[iParam0 /*49*/].f_15, iVar0);
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1347702[iParam0 /*49*/].f_15);
	__LIB_1__::func_681(&iVar0, iParam1);
	__LIB_1__::func_532(Global_1347702[iParam0 /*49*/].f_15, iVar0);
}

void func_144(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = __LIB_3__::func_547(uParam0->f_69, Global_35, 0.7f);
	if (uParam0->f_65 == 18)
	{
		if (iVar0 == 0 || iVar0 == 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_DEAD_F_SHRFF";
				sVar2 = "RTN_DEAD_F_SHRFF";
			}
			else
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_ALIVE_F_SHRFF";
				sVar2 = "RTN_ALIVE_F_SHRFF";
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
		{
			sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_DEAD_B_SHRFF";
			sVar2 = "RTN_DEAD_B_SHRFF";
		}
		else
		{
			sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_ALIVE_B_SHRFF";
			sVar2 = "RTN_ALIVE_B_SHRFF";
		}
		TASK::_0x79197F7D2BB5E73A(uParam0->f_69, uParam0->f_371, sVar1, sVar2, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", 0);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
	}
	else if (uParam0->f_65 == 12)
	{
		if (iVar0 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_FRONT_DEAD_DEPUTY";
				sVar2 = "ENTER_FRONT_DEAD_DEPUTY";
			}
			else
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_FRONT_ALIVE_DEPUTY";
				sVar2 = "ENTER_FRONT_ALIVE_DEPUTY";
			}
		}
		else
		{
			iVar0 = __LIB_3__::func_547(uParam0->f_69, Global_35, 1f);
			if (iVar0 == 3)
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_LEFT_DEAD_DEPUTY";
					sVar2 = "ENTER_LEFT_DEAD_DEPUTY";
				}
				else
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_LEFT_ALIVE_DEPUTY";
					sVar2 = "ENTER_LEFT_ALIVE_DEPUTY";
				}
			}
			else if (iVar0 == 2)
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_RIGHT_DEAD_DEPUTY";
					sVar2 = "ENTER_RIGHT_DEAD_DEPUTY";
				}
				else
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_RIGHT_ALIVE_DEPUTY";
					sVar2 = "ENTER_RIGHT_ALIVE_DEPUTY";
				}
			}
		}
		TASK::_0x79197F7D2BB5E73A(uParam0->f_69, uParam0->f_371, sVar1, sVar2, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", 0);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
	}
	else
	{
		TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, -1f, 1, 0, 0, 0);
	}
}

bool func_145(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_329, 256))
	{
		if (__LIB_0__::func_492(1) > uParam0->f_304)
		{
			__LIB_0__::func_325(&(uParam0->f_66));
			__LIB_1__::func_683(&(uParam0->f_329), 256);
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_308))
			{
				__LIB_1__::func_544(uParam0->f_308);
				__LIB_0__::func_172(uParam0->f_308);
			}
			if (__LIB_0__::func_272(uParam0->f_69, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, false);
			}
			if (__LIB_5__::func_463())
			{
				__LIB_0__::func_82(1, 0, 0);
			}
			return true;
		}
	}
	return false;
}

bool func_146()
{
	if (__LIB_0__::func_1(Local_15.f_388, 32))
	{
		return false;
	}
	if (Local_15.f_477 < 0 || Local_15.f_477 >= 3)
	{
		__LIB_0__::func_7(&(Local_15.f_388), 32);
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_464[Local_15.f_477 /*4*/])))
	{
		__LIB_2__::func_478(Global_35, Local_15.f_387, &(Local_15.f_464[Local_15.f_477 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	Local_15.f_477++;
	return true;
}

void func_147(int iParam0)
{
	if (iParam0 == 105)
	{
		__LIB_3__::func_124(349074475, 1);
		__LIB_3__::func_124(1614494720, 1);
	}
	else if (iParam0 == 26)
	{
	}
	else if (iParam0 == 76)
	{
		__LIB_3__::func_124(1988748538, 1);
	}
	else if (iParam0 == 5)
	{
	}
	else if (iParam0 == 38)
	{
	}
	else if (iParam0 == 115)
	{
	}
}

void func_148(int iParam0)
{
	if (iParam0 == 26)
	{
		__LIB_3__::func_124(1821044729, 1);
	}
	else if (iParam0 == 76)
	{
		__LIB_1__::func_948(joaat("DOOR_VAL_JAIL_CELL_01"), 0, 1f, 0, 1, 0, 0, 0);
	}
}

bool func_149(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	vector3 vVar5[24];
	vector3 vVar8;
	if (AUDIO::_0x54B187F111D9C6F8(uParam0->f_69, 0))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		iVar0 = __LIB_3__::func_547(uParam0->f_6, Global_35, 1060437492 /* Float: 0.707f */);
		iVar1 = __LIB_3__::func_547(uParam0->f_6, Global_35, 1f);
		StringCopy(&cVar5, "PB", 24);
		switch (uParam0->f_301)
		{
			case 1:
			case default:
				StringCopy(&cVar2, "_RELAX", 24);
				break;
			case 0:
				StringCopy(&cVar2, "_STAND", 24);
				break;
			case 2:
				StringCopy(&cVar2, "_WRITE", 24);
				break;
		}
		StringConCat(&cVar5, &cVar2, 24);
		switch (uParam0->f_300)
		{
			case 76:
				StringConCat(&cVar5, "_FL", 24);
				break;
			case 26:
			case 38:
			case 78:
				if (iVar0 == 0)
				{
					StringConCat(&cVar5, "_FR", 24);
				}
				else
				{
					StringConCat(&cVar5, "_R", 24);
				}
				break;
			case 105:
				StringConCat(&cVar5, "_R", 24);
				break;
			case 5:
				if (iVar1 == 2)
				{
					StringConCat(&cVar5, "_R", 24);
				}
				else
				{
					StringConCat(&cVar5, "_L", 24);
				}
				break;
			case 115:
				if (iVar0 == 0)
				{
					StringConCat(&cVar5, "_FL", 24);
				}
				else
				{
					StringConCat(&cVar5, "_L", 24);
				}
				break;
		}
		if (uParam0->f_301 == 0)
		{
			StringConCat(&cVar5, "_LOOK", 24);
		}
		else
		{
			StringConCat(&cVar5, &cVar2, 24);
		}
		ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_30[0 /*14*/].f_1, &cVar5);
		if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_30[0 /*14*/].f_1, &cVar5))
		{
			if (uParam0->f_301 == 2 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
			{
				uParam0->f_12 = PED::_0x4D0D2E3D8BC000EB(uParam0->f_69, "p_pen01x", 1);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[0 /*14*/].f_1, "PEN", uParam0->f_12, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				vVar8 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "MONEY", &cVar5) };
				uParam0->f_8 = OBJECT::CREATE_OBJECT(uParam0->f_9, vVar8, true, true, false, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[0 /*14*/].f_1, "MONEY", uParam0->f_8, 0);
				OBJECT::_0xDFA1237F5228263F(uParam0->f_8, Global_35);
			}
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_30[0 /*14*/].f_1);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_30[0 /*14*/].f_1, &cVar5, true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_30[0 /*14*/].f_1, "BASE_BOOL", true, false);
			return true;
		}
	}
	return false;
}

bool func_150(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 > -1 && iParam3 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iParam3 /*3*/]))
		{
			__LIB_2__::func_478(*uParam1, *uParam2, uParam0[iParam3 /*3*/], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			return true;
		}
	}
	return false;
}

void func_151()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
	{
		if (__LIB_3__::func_186(Local_15.f_389, 32))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_3.f_306))
			{
				if (__LIB_1__::func_205(Global_35, Local_15.f_3.f_306, 1, 0))
				{
					if (!__LIB_2__::func_136(Local_15.f_387, 0))
					{
						if ((Local_15.f_397 > 1 && !ENTITY::IS_ENTITY_DEAD(Local_15.f_3.f_69)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_15.f_3.f_69, -1))
						{
							if (__LIB_1__::func_285(&(Local_15.f_393), 1f))
							{
								__LIB_2__::func_478(Local_15.f_3.f_69, Local_15.f_3.f_69, "CUT_THAT_OUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_148(&(Local_15.f_393));
								Local_15.f_397 = 0;
								Local_15.f_396 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 13f);
							}
						}
						else if (!__LIB_0__::func_75(&(Local_15.f_393)) || __LIB_1__::func_285(&(Local_15.f_393), Local_15.f_396))
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								case 1:
									__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "GENERIC_CURSE_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								case 2:
									__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
							}
							__LIB_1__::func_148(&(Local_15.f_393));
							Local_15.f_397++;
							Local_15.f_396 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 13f);
						}
					}
				}
			}
		}
	}
}

void func_152(var uParam0)
{
	if (uParam0->f_375 > 0 && STREAMING::HAS_ANIM_DICT_LOADED("script_proc@bounty@riding_punch"))
	{
		STREAMING::REMOVE_ANIM_DICT("script_proc@bounty@riding_punch");
	}
	if (__LIB_0__::func_139(uParam0->f_375.f_1))
	{
		__LIB_1__::func_196(&(uParam0->f_375.f_1), 1, 1);
	}
	if (__LIB_0__::func_75(&(uParam0->f_375.f_3)))
	{
		__LIB_0__::func_37(&(uParam0->f_375.f_3));
	}
	if (uParam0->f_375 != 0)
	{
		uParam0->f_375 = 0;
	}
}

bool func_153(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
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
				if (__LIB_2__::func_228(iParam0, uParam2))
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

void func_154(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_27(uParam0->f_329, 262144))
	{
		return;
	}
	iVar0 = PED::_GET_CARRIER_AS_MOUNT(uParam0->f_67);
	iVar1 = __LIB_0__::func_398(7);
	if (iVar1 == iVar0)
	{
		__LIB_1__::func_718(7);
		__LIB_1__::func_643();
	}
	else
	{
		uParam0->f_66 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iVar0);
	}
	MAP::_BLIP_SET_MODIFIER(uParam0->f_66, 231194138);
}

void func_155(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_2__::func_652(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_10__::func_58(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_156(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_2__::func_652(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_10__::func_58(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_10__::func_58(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_157(int iParam0, int iParam1)
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
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_10__::func_58(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_10__::func_58(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_10__::func_58(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_10__::func_58(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_10__::func_58(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_158(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
	}
	else if (uParam0->f_63 == 8)
	{
		if (__LIB_0__::func_94(uParam0->f_67, __LIB_10__::func_67(uParam0->f_300), 1) > 5f || __LIB_10__::func_83(uParam0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (__LIB_0__::func_94(uParam0->f_67, __LIB_10__::func_45(uParam0->f_300), 1) < 10f)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_159(char* sParam0, var uParam1)
{
	__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(42, sParam0, &(uParam1->f_325), __LIB_10__::func_94(uParam1->f_300)), 7500, 0, 0, 0, 1);
}

void func_160(var uParam0)
{
	if (uParam0->f_5 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			__LIB_10__::func_86(uParam0);
		}
	}
	if (uParam0->f_7 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
		{
			if (uParam0->f_26 == 0)
			{
				uParam0->f_26 = ENTITY::_0x6F3068258A499E52(uParam0->f_7, uParam0->f_1, 7);
			}
			else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_26))
			{
				uParam0->f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_26));
			}
		}
	}
	if (uParam0->f_11 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
		{
			uParam0->f_10 = OBJECT::CREATE_OBJECT(uParam0->f_11, uParam0->f_1, true, true, false, false, true);
		}
	}
}

void func_161(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_329, 16777216))
	{
		if (!__LIB_10__::func_75(uParam0->f_67))
		{
			if (PED::_0x913D04A5176F84C9(uParam0->f_67))
			{
				if (!TASK::_0x0CCFE72B43C9CF96(uParam0->f_67))
				{
					if (ENTITY::_GET_ENTITY_CARRY_CONFIG(uParam0->f_67) != joaat("HOGTIED_PED"))
					{
						TASK::TASK_CARRIABLE(uParam0->f_67, joaat("HOGTIED_PED"), 0, 0, 9);
						__LIB_1__::func_683(&(uParam0->f_329), 16777216);
					}
				}
			}
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(uParam0->f_67, 11, true) == 1)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 11, false);
	}
}

void func_162(var uParam0)
{
	if (uParam0->f_301 == 0)
	{
		if (((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false) && !__LIB_0__::func_163(uParam0->f_69, 993674639)) && !__LIB_0__::func_163(uParam0->f_69, -1098463898)) && !__LIB_0__::func_163(uParam0->f_69, -76381094))
		{
			if (uParam0->f_300 == 105)
			{
				if (__LIB_0__::func_94(Global_35, 1360.928f, -1305.943f, 76.761f, 0) > 1.5f)
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_69, joaat("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS"), 1360.928f, -1305.943f, 76.761f, -15.235f, -1, true, false, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
				else
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_69, joaat("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS"), 1357.958f, -1304.813f, 76.761f, -20.879f, -1, true, false, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(uParam0->f_69, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -1, true, 0, -1f, false);
			}
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
		}
	}
	else if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_69, uParam0->f_371))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_30[0 /*14*/].f_1, "Sheriff") || ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_30[0 /*14*/].f_1, "Sheriff"))
		{
			__LIB_10__::func_72(uParam0);
		}
	}
}

struct<4> func_163(int iParam0)
{
	char cVar0[32];
	char cVar4[32];
	StringCopy(&cVar0, "JPAY", 32);
	MemCopy(&cVar4, {__LIB_10__::func_77(iParam0)}, 1);
	StringConCat(&cVar0, &cVar4, 32);
	if (__LIB_0__::func_181())
	{
		StringConCat(&cVar0, "J", 32);
	}
	else
	{
		StringConCat(&cVar0, "A", 32);
	}
	return cVar0;
}

void func_164(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_1__::func_206(__LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 3f, 2);
	}
	if (uParam0->f_300 == 26 || uParam0->f_300 == 105)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK07X", bParam1);
	}
	else if (uParam0->f_300 == 38 || uParam0->f_300 == 76)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_WORKBENCHDESK01X_RIGHT", bParam1);
	}
	else if (uParam0->f_300 == 5)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK08X_R", bParam1);
	}
	else if (uParam0->f_300 == 115)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK07X", bParam1);
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_CABINET13X", bParam1);
	}
}

void func_165(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_329, 4194304) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		__LIB_1__::func_683(&(uParam0->f_329), 4194304);
	}
	if (!__LIB_0__::func_27(uParam0->f_329, 8) && __LIB_10__::func_75(uParam0->f_67))
	{
		__LIB_1__::func_681(&(uParam0->f_329), 2);
		__LIB_1__::func_683(&(uParam0->f_329), 8);
	}
}

bool func_166(int iParam0, int iParam1)
{
	if (__LIB_10__::func_102(iParam0, iParam1) || __LIB_10__::func_79(iParam0))
	{
		return true;
	}
	return false;
}

void func_167(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_329, 128))
	{
		if (__LIB_10__::func_102(uParam0->f_67, 1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_363))
			{
				AUDIO::TRIGGER_MUSIC_EVENT(uParam0->f_363);
			}
			__LIB_1__::func_683(&(uParam0->f_329), 128);
		}
	}
}

Vector3 func_168(var uParam0)
{
	vector3 vVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_30[1 /*14*/].f_1, true, false))
	{
		vVar0 = { __LIB_4__::func_494(uParam0->f_30[1 /*14*/].f_1, __LIB_10__::func_88(uParam0->f_300), uParam0->f_30[1 /*14*/].f_9) };
		return vVar0;
	}
	if (uParam0->f_300 == 115)
	{
		return -5530.09f, -2925.662f, -2.3609f;
	}
	return __LIB_10__::func_104(uParam0->f_300);
}

bool func_169(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_331))
			{
				uParam0->f_331 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@lemoyneraider@bodydrop", 0, "PBL_DROPOFF", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_331, "LINDSEY", uParam0->f_67, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_331, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_331);
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_331, true, false))
			{
				if (__LIB_0__::func_94(Global_35, __LIB_10__::func_67(uParam0->f_300), 0) < 3f && __LIB_10__::func_79(uParam0->f_67))
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_10__::func_89(uParam0, 3);
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				if (__LIB_0__::func_94(Global_35, __LIB_10__::func_67(uParam0->f_300), 0) > 2f)
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_331);
					__LIB_10__::func_89(uParam0, 4);
				}
			}
			break;
		case 4:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_331, false) || __LIB_10__::func_105(uParam0))
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 7, 0);
				__LIB_10__::func_89(uParam0, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_170(var uParam0)
{
	vector3 vVar0[24];
	int iVar3;
	if (__LIB_10__::func_108(uParam0))
	{
		if (!__LIB_0__::func_181())
		{
			if (__LIB_2__::func_122(Global_35, "GREET_SHERIFF", 291934926, uParam0->f_69, 1, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3) + 3, 1))
			{
				return true;
			}
			else
			{
				return true;
			}
		}
		else
		{
			iVar3 = 0;
			StringCopy(&cVar0, "HOGTIES_MALE", 24);
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					iVar3 = 2;
					break;
				case 1:
					iVar3 = 3;
					break;
				case 2:
					iVar3 = 4;
					break;
				case 3:
					iVar3 = 7;
					break;
				case 4:
					iVar3 = 8;
					break;
				case 5:
					iVar3 = 13;
					break;
				case 6:
					iVar3 = 15;
					break;
			}
			if (__LIB_2__::func_122(Global_35, &cVar0, 291934926, uParam0->f_69, 1, 0, iVar3, 1))
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	else if (!__LIB_5__::func_236(1))
	{
		if (uParam0->f_382 == 0)
		{
			if (!__LIB_10__::func_75(uParam0->f_67))
			{
				MemCopy(&cVar0, {uParam0->f_332}, 3);
			}
			else
			{
				MemCopy(&cVar0, {uParam0->f_336}, 3);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			if (__LIB_1__::func_104(&(uParam0->f_103), cVar0, 0, -1, 0, 0))
			{
				uParam0->f_382++;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_171(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_10__::func_116(iParam0, uParam1);
}

void func_172(var uParam0, int iParam1)
{
	if (!__LIB_7__::func_955(iParam1, 1))
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam1, __LIB_10__::func_117(uParam0->f_300));
	}
}

void func_173(var uParam0)
{
	int iVar0;
	if (__LIB_10__::func_119(uParam0->f_65))
	{
		uParam0->f_301 = 0;
	}
	else if (__LIB_10__::func_120(uParam0->f_65))
	{
		uParam0->f_301 = 2;
	}
	else if (__LIB_10__::func_121(uParam0->f_65))
	{
		uParam0->f_301 = 1;
	}
	else if (uParam0->f_300 != 78)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		uParam0->f_301 = iVar0;
	}
	else if (__LIB_1__::func_985())
	{
		uParam0->f_301 = 1;
	}
	else
	{
		uParam0->f_301 = 0;
	}
}

void func_174(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_11 || uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, __LIB_10__::func_122(uParam0->f_300), uParam0->f_67, 0);
	}
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, __LIB_10__::func_88(uParam0->f_300), Global_35, 0);
	}
}

void func_175(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, __LIB_10__::func_123(uParam0->f_300), uParam0->f_13, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, __LIB_10__::func_124(uParam0->f_300), uParam0->f_18, 0);
	}
}

void func_176(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bVar1 = false;
	bVar2 = false;
	bVar3 = __LIB_0__::func_1(iParam0->f_388, -2147483648);
	bVar4 = __LIB_4__::func_182(8);
	bVar5 = __LIB_4__::func_182(16);
	iParam0->f_3.f_358 = 0;
	iParam0->f_3.f_359 = __LIB_10__::func_130(iParam0->f_389);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_17)))
	{
		iParam0->f_3.f_325 = { Global_1395482.f_17 };
	}
	else
	{
		StringCopy(&(iParam0->f_3.f_325), "BNTY_NME_CRIM", 24);
	}
	if (!iParam0->f_3.f_359)
	{
		if (bVar3 || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_11)))
		{
			__LIB_1__::func_683(&(iParam0->f_3.f_328), 16777216);
			__LIB_1__::func_683(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_11)))
		{
			MemCopy(&(iParam0->f_3.f_332), {__LIB_10__::func_64(iParam0, &(Global_1395482.f_11))}, 4);
			__LIB_1__::func_681(&(iParam0->f_3.f_328), 16777216);
			__LIB_1__::func_681(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
		}
		if (bVar3 || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_14)))
		{
			__LIB_1__::func_683(&(iParam0->f_3.f_328), 33554432);
			__LIB_1__::func_683(&(iParam0->f_3.f_328), -2147483648);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_14)))
		{
			MemCopy(&(iParam0->f_3.f_336), {__LIB_10__::func_64(iParam0, &(Global_1395482.f_14))}, 4);
			__LIB_1__::func_681(&(iParam0->f_3.f_328), 33554432);
			__LIB_1__::func_681(&(iParam0->f_3.f_328), -2147483648);
		}
	}
	else
	{
		__LIB_1__::func_683(&(iParam0->f_3.f_328), -2147483648);
		__LIB_1__::func_683(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
	}
	iParam0->f_3.f_360 = ((bVar4 || bVar3) || iParam0->f_3.f_359);
	if (bVar5)
	{
		__LIB_1__::func_683(&(iParam0->f_3.f_328), -2147483648);
		__LIB_1__::func_683(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_20[iVar0 /*3*/])))
		{
			bVar1 = true;
			iParam0->f_404[iVar0 /*3*/] = { Global_1395482.f_20[iVar0 /*3*/] };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_36[iVar0 /*3*/])))
			{
				iParam0->f_420[iVar0 /*3*/] = { Global_1395482.f_36[iVar0 /*3*/] };
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_52[iVar0 /*3*/])))
		{
			bVar1 = true;
			bVar2 = true;
			iParam0->f_436[iVar0 /*3*/] = { Global_1395482.f_52[iVar0 /*3*/] };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_62[iVar0 /*3*/])))
			{
				iParam0->f_446[iVar0 /*3*/] = { Global_1395482.f_62[iVar0 /*3*/] };
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		__LIB_10__::func_128(iParam0->f_389, 8);
	}
	if (bVar2)
	{
		__LIB_10__::func_128(iParam0->f_389, 16);
	}
	if (Global_1395482.f_115)
	{
		__LIB_0__::func_7(&(iParam0->f_388), 4);
	}
	else
	{
		__LIB_0__::func_8(&(iParam0->f_388), 4);
	}
	if (Global_1395482.f_116)
	{
		__LIB_0__::func_7(&(iParam0->f_388), 2);
	}
	else
	{
		__LIB_0__::func_8(&(iParam0->f_388), 2);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_95[iVar0 /*6*/])))
		{
			MISC::_COPY_MEMORY(&(iParam0->f_479[iVar0 /*6*/]), &(Global_1395482.f_95[iVar0 /*6*/]), 6);
			if (!__LIB_3__::func_186(iParam0->f_389, 512))
			{
				__LIB_10__::func_128(iParam0->f_389, 512);
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_76)))
	{
		iParam0->f_460 = { Global_1395482.f_76 };
	}
	else
	{
		StringCopy(&(iParam0->f_460), "", 32);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_80[iVar0 /*4*/])))
		{
			iParam0->f_464[iVar0 /*4*/] = { Global_1395482.f_80[iVar0 /*4*/] };
		}
		else
		{
			StringCopy(&(iParam0->f_464[iVar0 /*4*/]), "", 32);
		}
		iVar0++;
	}
	iParam0->f_498 = Global_1395482.f_114;
	iParam0->f_478 = Global_1395482.f_94;
	iParam0->f_456 = Global_1395482.f_72;
	iParam0->f_457 = Global_1395482.f_73;
	iParam0->f_458 = Global_1395482.f_74;
	iParam0->f_459 = Global_1395482.f_75;
	iParam0->f_500 = Global_1395482.f_117;
	iParam0->f_477 = Global_1395482.f_93;
	__LIB_1__::func_683(&(iParam0->f_3.f_328), 67108864);
	__LIB_1__::func_683(&(iParam0->f_3.f_328), 268435456);
	__LIB_1__::func_683(&(iParam0->f_3.f_328), 536870912);
	__LIB_1__::func_683(&(iParam0->f_3.f_328), 134217728);
	__LIB_1__::func_683(&(iParam0->f_3.f_329), 262144);
	__LIB_0__::func_8(&(iParam0->f_388), -2147483648);
}

void func_177(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_3.f_306))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0->f_387, iParam0->f_3.f_306, false, 0))
	{
		if (!__LIB_3__::func_186(Global_1395482.f_1, 64))
		{
			__LIB_10__::func_128(Global_1395482.f_1, 64);
		}
	}
	else if (__LIB_3__::func_186(Global_1395482.f_1, 64))
	{
		__LIB_3__::func_695(Global_1395482.f_1, 64);
	}
}

void func_178(var uParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4)
{
	char* sVar0;
	if (bParam1)
	{
		if (__LIB_0__::func_75(&(uParam0->f_364)))
		{
			__LIB_0__::func_37(&(uParam0->f_364));
		}
	}
	else
	{
		__LIB_1__::func_148(&(uParam0->f_364));
	}
	uParam0->f_367 = bParam1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		__LIB_10__::func_114(sParam2, sParam3, sParam4);
		if (__LIB_0__::func_5(uParam0->f_65))
		{
			sVar0 = __LIB_0__::func_958(4, sParam2, sParam3, sParam4, -1, -1);
			__LIB_5__::func_238(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		__LIB_10__::func_115(sParam2, sParam3);
		if (__LIB_0__::func_5(uParam0->f_65))
		{
			sVar0 = __LIB_0__::func_958(3, sParam2, sParam3, 0, -1, -1);
			__LIB_5__::func_238(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
	else
	{
		__LIB_1__::func_324(sParam2);
		if (__LIB_0__::func_5(uParam0->f_65))
		{
			sVar0 = __LIB_0__::func_958(0, sParam2, 0, 0, -1, -1);
			__LIB_5__::func_238(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
}

Vector3 func_179(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_65)
	{
		case 154:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT12_REWARD_A", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT12_RWD_A", 24);
				cVar0 = { __LIB_10__::func_56(cVar0) };
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BRA_REWARD", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "BRA_REWARD_", 24);
				cVar0 = { __LIB_10__::func_56(cVar0) };
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT14_REWARD_A", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT14_REWARD_A", 24);
				cVar0 = { __LIB_10__::func_56(cVar0) };
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT20_REWARD_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT20_REWARD_A", 24);
				}
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT21_PUTCAGEJ", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_REWARD_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT18_REWARD_A", 24);
				}
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BDUL_PAY_S1", 24);
			}
			else if (iParam1 == 1)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "BDUL_PAY_J1", 24);
				}
				else
				{
					StringCopy(&cVar0, "BDUL_PAY_A1", 24);
				}
			}
			else if (iParam1 == 2)
			{
				StringCopy(&cVar0, "BDUL_PAY_S2", 24);
			}
			else if (iParam1 == 3)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "BDUL_PAY_J2", 24);
				}
				else
				{
					StringCopy(&cVar0, "BDUL_PAY_A2", 24);
				}
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_SDS_RWD", 24);
			}
			else if (iParam1 == 1)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "NBX_SDS_RWD_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_SDS_RWD_A", 24);
				}
			}
			else if (iParam1 == 2)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "NBX_SDS_TKRWD_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_SDS_TKRWD_A", 24);
				}
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT03_RWD_DEAD", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT03_RWD_ALVE", 24);
				}
			}
			break;
	}
	return cVar0;
}

Vector3 func_180(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_65)
	{
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BDUL_LAWGREET", 24);
				cVar0 = { __LIB_10__::func_56(cVar0) };
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "BDUL_LAWGREETSJ", 24);
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT03_GREET_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT03_GREET_A", 24);
				}
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "JVA_RBT5_RTRN_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "JVA_RBT5_RTRN_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (__LIB_10__::func_133(uParam0->f_65, 16))
				{
					if (__LIB_0__::func_181())
					{
						StringCopy(&cVar0, "JVA_RBT5_DEAD_J", 24);
					}
					else
					{
						StringCopy(&cVar0, "JVA_RBT5_DEAD_A", 24);
					}
				}
				else if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "JVA_RBT5_ALVE_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "JVA_RBT5_ALVE_A", 24);
				}
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "BRA_DELIVER_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "BRA_DELIVER_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (__LIB_10__::func_133(uParam0->f_65, 8))
				{
					StringCopy(&cVar0, "BRA_DEL_S_WK", 24);
				}
				else
				{
					StringCopy(&cVar0, "BRA_DELIVER_S", 24);
				}
			}
			else if (iParam1 == 2)
			{
				if (__LIB_10__::func_133(uParam0->f_65, 8))
				{
					StringCopy(&cVar0, "BRA_PLYR_KILL_", 24);
					cVar0 = { __LIB_10__::func_56(cVar0) };
				}
				else if (__LIB_0__::func_27(uParam0->f_329, 32768))
				{
					StringCopy(&cVar0, "BRA_PLYR_ATK_", 24);
					cVar0 = { __LIB_10__::func_56(cVar0) };
				}
				else
				{
					StringCopy(&cVar0, "BRA_PLR_ATKN_", 24);
					cVar0 = { __LIB_10__::func_56(cVar0) };
				}
			}
			else if (iParam1 == 3)
			{
				if (__LIB_0__::func_27(uParam0->f_329, 32768))
				{
					StringCopy(&cVar0, "BRA_PLYR_ATK_JN", 24);
				}
			}
			break;
		case 154:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					if (__LIB_0__::func_181())
					{
						StringCopy(&cVar0, "RBT12_GREET_DJ", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBT12_GREET_D", 24);
					}
				}
				else if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "RBT12_GRT_AJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT12_GREET_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT12_GREET_DS", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT12_GRT_AS", 24);
				}
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_133(uParam0->f_65, 32))
				{
					if (__LIB_0__::func_181())
					{
						StringCopy(&cVar0, "RBT14_GREET_AJ1", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBT14_GREET_A", 24);
					}
				}
				else if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "RBT14_GREET_J12", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT14_GREET_A2", 24);
				}
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT14_GREET_AS", 24);
			}
			else if (iParam1 == 2)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "RBT14_GREET_AJ2", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT14_GREET_AA", 24);
				}
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					if (__LIB_0__::func_181())
					{
						StringCopy(&cVar0, "RBCON_IG3_P1_J", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBCON_IG3_P1", 24);
					}
				}
				else if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "RBCON_IG2_P1_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBCON_IG2_P1", 24);
				}
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_SDS_ALV", 24);
				cVar0 = { __LIB_10__::func_56(cVar0) };
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "NBX_SDS_ALVR", 24);
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT20_IG3_DEAD", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT20_IG3_ALIVE", 24);
				}
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT21_RTRNAWKJ", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_GREET_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT18_GREET_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (!__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_RTNAWAKE", 24);
				}
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT22_IG7_B", 24);
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				if (__LIB_10__::func_75(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT23_BDM_D", 24);
					cVar0 = { __LIB_10__::func_56(cVar0) };
				}
				else
				{
					StringCopy(&cVar0, "RBT23_BDM_A", 24);
					cVar0 = { __LIB_10__::func_56(cVar0) };
				}
			}
			break;
	}
	return cVar0;
}

void func_181()
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_186(Local_15.f_389, 512))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_15.f_387, -1260924842))
			{
				if (!__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "PLEAD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					if (!__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						if (!__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							if (!__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_15.f_387, -369774137))
			{
				if (!__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					if (!__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "WHOA_ESCALATED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						if (!__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							if (!__LIB_2__::func_478(Local_15.f_387, Local_15.f_387, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 381748758))
			{
				__LIB_2__::func_478(Global_35, Global_35, "TELLS_PED_TO_SHUT_UP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!MISC::IS_BIT_SET(Local_15.f_478, iVar0))
			{
				if (Local_15.f_479[iVar0 /*6*/].f_4 != 2)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_479[iVar0 /*6*/])))
					{
						iVar1 = __LIB_10__::func_70(&(Local_15.f_479[iVar0 /*6*/]));
						if (!ENTITY::IS_ENTITY_DEAD(iVar1))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, Local_15.f_479[iVar0 /*6*/].f_4))
							{
								__LIB_2__::func_478(iVar1, iVar1, &(Local_15.f_479[iVar0 /*6*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								MISC::SET_BIT(&(Local_15.f_478), iVar0);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_182(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	vector3 vVar7[24];
	vector3 vVar10[24];
	vector3 vVar15[24];
	vector3 vVar18[24];
	if (!__LIB_0__::func_27(uParam0->f_329, 4) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
	{
		__LIB_1__::func_683(&(uParam0->f_329), 4);
	}
	if (__LIB_0__::func_272(uParam0->f_69, 0))
	{
		if (!uParam0->f_358)
		{
			if (!__LIB_0__::func_27(uParam0->f_328, 16) && !__LIB_5__::func_236(1))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0) || __LIB_10__::func_53(uParam0->f_300, 1, 0))
				{
					vVar0 = { __LIB_10__::func_76(uParam0->f_300) };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
					{
						__LIB_1__::func_683(&(uParam0->f_328), 16);
					}
					else if (__LIB_1__::func_104(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
					{
						__LIB_1__::func_683(&(uParam0->f_328), 16);
					}
				}
			}
		}
		if (__LIB_1__::func_205(Global_35, uParam0->f_306, 1, 0) && __LIB_2__::func_215(uParam0->f_69, Global_35, 0, 15f, 0))
		{
			if (__LIB_0__::func_27(uParam0->f_329, 4) && !__LIB_0__::func_27(uParam0->f_328, 512))
			{
				if (__LIB_0__::func_265(&(uParam0->f_318)) >= 2f)
				{
					if (uParam0->f_358 || __LIB_0__::func_27(uParam0->f_328, 134217728))
					{
						StringCopy(&cVar3, "JAIL_LEFT_MONEY_BEHIND_POST", 32);
						if (__LIB_2__::func_122(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
						{
							__LIB_1__::func_148(&(uParam0->f_318));
							__LIB_1__::func_683(&(uParam0->f_328), 512);
						}
					}
					else if (!__LIB_5__::func_236(1))
					{
						StringCopy(&cVar7, "JFRT", 24);
						MemCopy(&cVar10, {__LIB_10__::func_77(uParam0->f_300)}, 1);
						StringConCat(&cVar7, &cVar10, 24);
						if (__LIB_1__::func_104(&(uParam0->f_201), cVar7, 0, -1, 0, 0))
						{
							__LIB_1__::func_148(&(uParam0->f_318));
							__LIB_1__::func_683(&(uParam0->f_328), 512);
						}
					}
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_328, 256))
			{
				if (__LIB_0__::func_265(&(uParam0->f_318)) >= 15f)
				{
					if (uParam0->f_358 || __LIB_0__::func_27(uParam0->f_328, 536870912))
					{
						StringCopy(&cVar11, "JAIL_LEAVE_MONEY_BEHIND", 32);
						if (__LIB_2__::func_122(uParam0->f_69, &cVar11, 291934926, Global_35, 1, 0, 0, 1))
						{
							__LIB_1__::func_148(&(uParam0->f_318));
							__LIB_1__::func_683(&(uParam0->f_328), 256);
						}
					}
					else if (!__LIB_5__::func_236(1))
					{
						StringCopy(&cVar15, "JRPY", 24);
						MemCopy(&cVar18, {__LIB_10__::func_77(uParam0->f_300)}, 1);
						StringConCat(&cVar15, &cVar18, 24);
						if (uParam0->f_300 == 38)
						{
							__LIB_1__::func_683(&(uParam0->f_328), 256);
						}
						else if (__LIB_1__::func_104(&(uParam0->f_201), cVar15, 0, -1, 0, 0))
						{
							__LIB_1__::func_148(&(uParam0->f_318));
							__LIB_1__::func_683(&(uParam0->f_328), 256);
						}
					}
				}
			}
		}
	}
}

void func_183(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 8;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = __LIB_10__::func_84(uParam0->f_300, iVar2);
		if (__LIB_0__::func_30(iVar0) && __LIB_2__::func_769(iVar0))
		{
			__LIB_3__::func_124(iVar0, 1);
		}
		iVar2++;
	}
}

bool func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_76(iParam0))
	{
		return false;
	}
	if (__LIB_3__::func_186(iParam0, 2))
	{
		if (iParam0 == 2 && __LIB_1__::func_185(12))
		{
			__LIB_3__::func_695(iParam0, 2);
		}
		else
		{
			return true;
		}
		if (iParam0 == 5)
		{
			if (!__LIB_2__::func_230())
			{
				__LIB_3__::func_695(iParam0, 2);
			}
			else
			{
				return true;
			}
		}
	}
	else if (iParam0 == 5)
	{
		if (__LIB_2__::func_230())
		{
			__LIB_10__::func_128(iParam0, 2);
			return true;
		}
	}
	iVar0 = __LIB_10__::func_98(iParam0);
	if (__LIB_0__::func_20(iVar0))
	{
		if (__LIB_0__::func_730(iVar0))
		{
			return true;
		}
	}
	iVar1 = __LIB_10__::func_99(iParam0);
	if (__LIB_0__::func_69(iVar1))
	{
		iVar2 = __LIB_1__::func_905(iVar1);
		if (__LIB_0__::func_630(iVar2))
		{
			if (__LIB_10__::func_132(iVar2))
			{
				return true;
			}
			if (__LIB_10__::func_132(iVar2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_185(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_15.f_456 < 5)
		{
			if (__LIB_10__::func_150(&(Local_15.f_420), &Global_35, &(Local_15.f_387), Local_15.f_456))
			{
				Local_15.f_498++;
				Local_15.f_456++;
			}
			else
			{
				Local_15.f_456 = 5;
			}
		}
		else
		{
			__LIB_10__::func_146();
		}
	}
	else if (Local_15.f_458 < 3)
	{
		if (__LIB_10__::func_150(&(Local_15.f_446), &Global_35, &(Local_15.f_387), Local_15.f_458))
		{
			Local_15.f_498++;
			Local_15.f_458++;
		}
		else
		{
			Local_15.f_458 = 3;
		}
	}
	else
	{
		__LIB_10__::func_146();
	}
	__LIB_0__::func_37(&(Local_15.f_393));
	__LIB_0__::func_8(&(Local_15.f_388), 2);
}

void func_186(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_15.f_457 < 5)
		{
			if (__LIB_10__::func_150(&(Local_15.f_404), &(Local_15.f_387), &Global_35, Local_15.f_457))
			{
				Local_15.f_498++;
				Local_15.f_457++;
			}
			else
			{
				Local_15.f_457 = 5;
			}
		}
	}
	else if (Local_15.f_459 < 3)
	{
		if (__LIB_10__::func_150(&(Local_15.f_436), &(Local_15.f_387), &Global_35, Local_15.f_459))
		{
			Local_15.f_498++;
			Local_15.f_459++;
		}
		else
		{
			Local_15.f_459 = 3;
		}
	}
	__LIB_1__::func_148(&(Local_15.f_393));
	__LIB_0__::func_7(&(Local_15.f_388), 2);
}

void func_187(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	vector3 vVar6[24];
	vector3 vVar9[24];
	if ((!__LIB_0__::func_75(&(uParam0->f_318)) || __LIB_5__::func_236(1)) || TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
	{
		__LIB_1__::func_148(&(uParam0->f_318));
	}
	if ((__LIB_0__::func_272(uParam0->f_69, 0) && __LIB_1__::func_205(Global_35, uParam0->f_306, 1, 0)) && __LIB_2__::func_215(uParam0->f_69, Global_35, 0, 15f, 0))
	{
		if (__LIB_0__::func_265(&(uParam0->f_318)) >= 0.75f)
		{
			iVar1 = __LIB_10__::func_47(uParam0->f_300);
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				iVar5 = __LIB_10__::func_48(uParam0->f_300, iVar0);
				if (!__LIB_1__::func_187(iVar5))
				{
					if (!__LIB_0__::func_1(Global_1347702[iVar5 /*49*/].f_12, 256) || __LIB_0__::func_181())
					{
						iVar2++;
					}
					else
					{
						bVar4 = true;
					}
				}
				else
				{
					iVar3++;
				}
				iVar0++;
			}
			if ((iVar2 == 0 && bVar4) || (iVar2 > 0 && iVar3 >= 2))
			{
				__LIB_1__::func_148(&(uParam0->f_318));
				__LIB_1__::func_683(&(uParam0->f_328), 32);
				return;
			}
			StringCopy(&cVar6, "JMRE", 24);
			if (iVar2 > 0)
			{
				StringCopy(&cVar6, "JMRE", 24);
			}
			else
			{
				StringCopy(&cVar6, "JFIN", 24);
			}
			MemCopy(&cVar9, {__LIB_10__::func_77(uParam0->f_300)}, 1);
			StringConCat(&cVar6, &cVar9, 24);
			if (__LIB_1__::func_104(&(uParam0->f_201), cVar6, 0, -1, 0, 0))
			{
				__LIB_1__::func_148(&(uParam0->f_318));
				__LIB_1__::func_683(&(uParam0->f_328), 32);
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_69, 0))
				{
					TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, 5000f, 1, 0, 0, 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, 5000, 0, 51, 0);
				}
			}
		}
	}
}

void func_188(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_65;
	if (iVar0 != -1)
	{
		if (__LIB_10__::func_75(uParam0->f_67))
		{
			__LIB_10__::func_142(iVar0, 1);
		}
		else
		{
			__LIB_10__::func_143(iVar0, 1);
		}
	}
	LAW::_0x73BAD7B2F2DB50DE(PLAYER::PLAYER_ID(), __LIB_5__::func_235(uParam0->f_300, 1, 1));
	if (!__LIB_10__::func_75(uParam0->f_67))
	{
		ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 7, 0);
		ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 1, 0);
		ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 2, 0);
		PED::SET_PED_KEEP_TASK(uParam0->f_67, true);
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_67);
		__LIB_10__::func_131(iVar1, uParam0->f_300, __LIB_10__::func_91(uParam0->f_300));
		__LIB_10__::func_92(iVar1, uParam0->f_300, uParam0->f_299);
		if (!__LIB_4__::func_385(&(uParam0->f_67)))
		{
			__LIB_10__::func_55(iVar1, uParam0->f_300);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 4, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 6, false);
		__LIB_1__::func_683(&(uParam0->f_329), 2048);
	}
}

bool func_189(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (uParam0->f_25)
			{
				__LIB_0__::func_202(Global_35, 0);
				__LIB_0__::func_325(&(uParam0->f_66));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_30[1 /*14*/].f_1, __LIB_10__::func_88(uParam0->f_300), uParam0->f_30[1 /*14*/].f_9, 1069379748 /* Float: 1.48f */, 0, 256, 20000, -1082130432 /* Float: -1f */);
				__LIB_10__::func_89(uParam0, 2);
				__LIB_10__::func_89(uParam0, 1);
			}
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_10__::func_90(uParam0->f_300);
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 1)
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 2, 0);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_30[1 /*14*/].f_1);
				__LIB_10__::func_89(uParam0, 2);
			}
			break;
		case 2:
			if (!uParam0->f_362)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_69))
				{
					TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
					TASK::TASK_CLEAR_LOOK_AT(uParam0->f_69);
					uParam0->f_362 = 1;
				}
			}
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_30[1 /*14*/].f_1, __LIB_10__::func_88(uParam0->f_300)))
			{
				__LIB_3__::func_465(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_10__::func_89(uParam0, 5);
			}
			break;
		case 5:
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			return true;
	}
	return false;
}

bool func_190(var uParam0)
{
	if (__LIB_10__::func_153(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
	{
		if (uParam0->f_102 == 2)
		{
			return true;
		}
		else if (uParam0->f_102 == 4)
		{
			return true;
		}
		else if (uParam0->f_102 == 8)
		{
			return true;
		}
		else if (uParam0->f_102 == 8192)
		{
			if (__LIB_2__::func_839(uParam0->f_69, &(uParam0->f_74), 1))
			{
				return true;
			}
		}
		else if (uParam0->f_102 == 64)
		{
			return true;
		}
		else if (uParam0->f_102 == 256)
		{
			if (__LIB_1__::func_205(Global_35, uParam0->f_306, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_191(int iParam0)
{
	int iVar0;
	if (ENTITY::_0x61914209C36EFDDB(iParam0) == 7)
	{
		iVar0 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (__LIB_0__::func_394(Global_35, iVar0, 0))
		{
			__LIB_1__::func_721(7);
			__LIB_1__::func_643();
			return false;
		}
	}
	else
	{
		return false;
	}
	if (__LIB_10__::func_103(iParam0))
	{
		__LIB_1__::func_721(7);
		__LIB_1__::func_643();
		return false;
	}
	return true;
}

void func_192(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_2__::func_591(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				__LIB_10__::func_155(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				__LIB_10__::func_156(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_193(var uParam0)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, false, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (uParam0->f_61 > 0)
	{
		if (!ENTITY::_0x808077647856DE62(uParam0->f_67, 4) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 4, 1);
		}
	}
	else if (__LIB_10__::func_79(uParam0->f_67))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_306, false, 0))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (__LIB_10__::func_158(uParam0, bVar0))
		{
			if (!ENTITY::_0x808077647856DE62(uParam0->f_67, 4))
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 4, 1);
			}
		}
		else if (ENTITY::_0x808077647856DE62(uParam0->f_67, 4))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 4, 0);
		}
		if (uParam0->f_63 == 8)
		{
			if (ENTITY::_0x808077647856DE62(uParam0->f_67, 14))
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 14, 0);
			}
		}
	}
}

void func_194(var uParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	__LIB_10__::func_173(uParam0);
	switch (uParam0->f_300)
	{
		case 76:
			vVar0 = { -272.0415f, 808.1991f, 118.3685f };
			vVar3 = { 0f, 0f, -170.5f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_WORKBENCHDESK01X");
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -273.2888f, 808.1285f, 119.3935f };
			uParam0->f_1 = { -277.49f, 804.13f, 118.38f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@sitrelax_val";
					sVar8 = "PB_RELAX_FL_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@stand_val";
					sVar8 = "PB_STAND_FL_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@sitwriting_val";
					sVar8 = "PB_WRITE_FL_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_val";
			sVar9 = "PB_DROPOFF";
			break;
		case 105:
			vVar0 = { 1357.334f, -1302.453f, 76.75331f };
			vVar3 = { 0f, 0f, 70.00005f };
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 1357.897f, -1301.337f, 77.77831f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_DESK07X");
			uParam0->f_1 = { 1361.26f, -1303.45f, 77.26f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@sitrelax_rhodes";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@stand_rhodes";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@sitwriting_rhodes";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_rhodes";
			if (bParam1)
			{
				sVar9 = "PB_DROPOFF_Floor";
			}
			else
			{
				sVar9 = "PB_DROPOFF";
			}
			break;
		case 78:
			vVar0 = { 2902.943f, 1310.878f, 43.9443f };
			vVar3 = { 0f, 0f, 69.26f };
			uParam0->f_14 = joaat("ANN_JAIL_CELL_DOOR_01");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 2903.49f, 1312.001f, 44.978f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_BW_DESK01X");
			uParam0->f_1 = { 2907.75f, 1313.686f, 44.56693f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@sitrelax_Ann";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@stand_Ann";
					sVar8 = "PB_BASE";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@sitwriting_Ann";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_ans";
			if (bParam1)
			{
				sVar9 = "PB_DROPOFF_Floor";
			}
			else
			{
				sVar9 = "PB_DROPOFF";
			}
			break;
		case 26:
			vVar0 = { -1811.985f, -351.8662f, 160.4395f };
			vVar3 = { 0f, 0f, -25.00003f };
			uParam0->f_1 = { -1807.28f, -347.87f, 163.65f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_DESK07X");
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -1810.923f, -352.5239f, 161.4644f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@sitrelax_strawberry";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@stand_strawberry";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@sitwriting_strawberry";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_strawberry";
			sVar9 = "PB_DROPOFF";
			break;
		case 5:
			vVar0 = { 2502.43f, -1307.799f, 47.95231f };
			vVar3 = { 0f, 0f, 0f };
			uParam0->f_1 = { 2508.56f, -1309.07f, 48.41f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_DESK07X");
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 2503.67f, -1307.946f, 48.97729f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@sitrelax_std";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@stand_std";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@sitwriting_std";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_std";
			sVar9 = "PB_DROPOFF";
			break;
		case 38:
			vVar0 = { -763.5278f, -1262.461f, 42.90836f };
			vVar3 = { 0f, 0f, -89.99999f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			if (uParam0->f_65 == 18)
			{
				uParam0->f_7 = joaat("P_DESK14X");
				uParam0->f_1 = { -761.53f, -1271.73f, 43.77f };
				sVar6 = "script@proc@bountyhunting@skinnersearch@sitrelax";
				sVar8 = "PB_RELAX_R_RELAX";
			}
			else
			{
				uParam0->f_7 = joaat("P_WORKBENCHDESK01X");
				uParam0->f_1 = { -761.69f, -1266.73f, 43.05f };
				switch (uParam0->f_301)
				{
					case 1:
					case default:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@sitrelax_bw";
						sVar8 = "PB_RELAX_R_RELAX";
						break;
					case 0:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@stand_bw";
						sVar8 = "PB_STAND_R_LOOK";
						break;
					case 2:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@sitwriting_bw";
						sVar8 = "PB_WRITE_R_WRITE";
						break;
				}
			}
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -763.6382f, -1263.701f, 44.04934f };
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_blackwater";
			sVar9 = "PB_DROPOFF";
			break;
		case 115:
			vVar0 = { -5529.901f, -2925.066f, -2.3753f };
			vVar3 = { 0f, 0f, 295f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_DESK07X");
			uParam0->f_1 = { -5530.877f, -2930.6f, -2.2877f };
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -5529.466f, -2926.232f, -1.3503f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@sitrelax_tweed";
					sVar8 = "PB_RELAX_FL_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@stand_tweed";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@sitwriting_tweed";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_tumbleweed";
			sVar9 = "PB_DROPOFF";
			break;
	}
	if (uParam0->f_301 == 2)
	{
		uParam0->f_11 = joaat("P_JOURNAL_OPEN01X");
	}
	uParam0->f_5 = __LIB_10__::func_51(uParam0->f_300);
	uParam0->f_30[0 /*14*/] = 0;
	uParam0->f_30[0 /*14*/].f_2 = { vVar0 };
	uParam0->f_30[0 /*14*/].f_5 = { vVar3 };
	uParam0->f_30[0 /*14*/].f_8 = sVar6;
	uParam0->f_30[0 /*14*/].f_9 = sVar8;
	uParam0->f_30[0 /*14*/].f_10 = 1;
	uParam0->f_30[0 /*14*/].f_11 = 0;
	uParam0->f_30[0 /*14*/].f_12 = 0;
	uParam0->f_30[1 /*14*/] = 0;
	uParam0->f_30[1 /*14*/].f_2 = { vVar0 };
	uParam0->f_30[1 /*14*/].f_5 = { vVar3 };
	uParam0->f_30[1 /*14*/].f_8 = sVar7;
	uParam0->f_30[1 /*14*/].f_9 = sVar9;
	uParam0->f_30[1 /*14*/].f_10 = 0;
	uParam0->f_30[1 /*14*/].f_11 = 0;
	uParam0->f_30[1 /*14*/].f_12 = 1;
}

bool func_195(var uParam0, int iParam1)
{
	if ((uParam0->f_30[iParam1 /*14*/].f_11 || uParam0->f_30[iParam1 /*14*/].f_12) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		return false;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[iParam1 /*14*/].f_1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_30[iParam1 /*14*/].f_1, true, false))
		{
			uParam0->f_30[iParam1 /*14*/] = 1;
			return true;
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_30[iParam1 /*14*/].f_9))
		{
			uParam0->f_30[iParam1 /*14*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_8, uParam0->f_30[iParam1 /*14*/].f_13, uParam0->f_30[iParam1 /*14*/].f_9, false, true);
		}
		else
		{
			uParam0->f_30[iParam1 /*14*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_8, uParam0->f_30[iParam1 /*14*/].f_13, 0, false, true);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[iParam1 /*14*/].f_1))
		{
			__LIB_10__::func_174(uParam0, iParam1);
			__LIB_10__::func_175(uParam0, iParam1);
			__LIB_10__::func_118(uParam0, iParam1);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_1);
		}
	}
	return false;
}

void func_196(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_5__::func_236(1))
	{
		if (__LIB_0__::func_272(uParam0->f_67, 0))
		{
			if (!__LIB_0__::func_27(uParam0->f_328, 1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_340)))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1))
				{
					if (uParam0->f_300 == 105)
					{
						iVar0 = 5;
					}
					else
					{
						iVar0 = 4;
					}
					if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_30[1 /*14*/].f_1, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[1 /*14*/].f_1) > IntToFloat(iVar0)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, uParam0->f_30[1 /*14*/].f_1))
					{
						if (__LIB_1__::func_104(&(uParam0->f_103), uParam0->f_340, 0, -1, 0, 0))
						{
							__LIB_1__::func_683(&(uParam0->f_328), 1);
						}
					}
				}
			}
			if (!__LIB_0__::func_27(uParam0->f_328, 2) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_343)))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1))
				{
					if (uParam0->f_300 == 105)
					{
						iVar0 = 11;
					}
					else
					{
						iVar0 = 8;
					}
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_30[1 /*14*/].f_1, false) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_30[1 /*14*/].f_1, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[1 /*14*/].f_1) > IntToFloat(iVar0)))
					{
						if (__LIB_1__::func_104(&(uParam0->f_103), uParam0->f_343, 0, -1, 0, 0))
						{
							__LIB_1__::func_683(&(uParam0->f_328), 2);
						}
					}
				}
			}
			if ((!__LIB_0__::func_27(uParam0->f_328, 64) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_349))) && uParam0->f_60 > 1)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_305, true, 0) && !__LIB_10__::func_75(uParam0->f_67))
				{
					if (__LIB_0__::func_265(&(uParam0->f_315)) > 3f)
					{
						if (__LIB_1__::func_104(&(uParam0->f_103), uParam0->f_349, 0, -1, 0, 0))
						{
							__LIB_1__::func_683(&(uParam0->f_328), 64);
						}
					}
				}
			}
			if ((!__LIB_0__::func_27(uParam0->f_328, 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_352))) && uParam0->f_60 > 1)
			{
				if (uParam0->f_300 == 26)
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_67, true, false) };
					if (Global_36.f_2 > (vVar1.z + 1f))
					{
						if (__LIB_1__::func_104(&(uParam0->f_103), uParam0->f_352, 0, -1, 0, 0))
						{
							__LIB_1__::func_683(&(uParam0->f_328), 8);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0) || __LIB_10__::func_53(uParam0->f_300, 0, 0))
				{
					if (__LIB_1__::func_104(&(uParam0->f_103), uParam0->f_352, 0, -1, 0, 0))
					{
						__LIB_1__::func_683(&(uParam0->f_328), 8);
					}
				}
			}
		}
		if (!__LIB_0__::func_27(uParam0->f_328, 4) && __LIB_0__::func_27(uParam0->f_329, 256))
		{
			if (__LIB_0__::func_272(uParam0->f_67, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_346)))
			{
				if (__LIB_1__::func_104(&(uParam0->f_103), uParam0->f_346, 0, -1, 0, 0))
				{
					__LIB_1__::func_683(&(uParam0->f_328), 4);
				}
			}
			else
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355)))
				{
					MemCopy(&(uParam0->f_355), {__LIB_10__::func_163(uParam0->f_300)}, 3);
				}
				if (__LIB_1__::func_104(&(uParam0->f_103), uParam0->f_355, 0, -1, 0, 0))
				{
					__LIB_1__::func_683(&(uParam0->f_328), 4);
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_148(&(uParam0->f_315));
	}
}

void func_197(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (bParam2)
	{
		if (__LIB_0__::func_27(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (__LIB_10__::func_93(uParam0->f_65))
			{
				sVar0 = "BNTY_O_FLCTA";
			}
			else if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_LCTEA";
			}
			else
			{
				sVar0 = "BNTY_O_LCTED";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (__LIB_0__::func_27(uParam0->f_329, 1048576))
			{
				return;
			}
			if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_CTREA";
			}
			else
			{
				sVar0 = "BNTY_O_CTRED";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (__LIB_0__::func_27(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!__LIB_10__::func_75(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (__LIB_0__::func_27(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!__LIB_10__::func_75(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (__LIB_0__::func_27(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!__LIB_10__::func_75(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), __LIB_10__::func_94(uParam0->f_300));
			if (bParam2)
			{
				__LIB_10__::func_159(sVar0, uParam0);
			}
			break;
		case 256:
			if (__LIB_0__::func_27(uParam0->f_329, 1048576))
			{
				return;
			}
			if (__LIB_0__::func_272(uParam0->f_67, 2) && ((PED::IS_PED_FLEEING(uParam0->f_67) || PED::IS_PED_ON_MOUNT(uParam0->f_67)) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			__LIB_10__::func_178(uParam0, bParam2, sVar0, __LIB_10__::func_94(uParam0->f_300), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, __LIB_10__::func_94(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!__LIB_10__::func_75(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (__LIB_10__::func_83(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (__LIB_10__::func_95(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				__LIB_1__::func_422(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (__LIB_10__::func_95(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			__LIB_10__::func_178(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				__LIB_1__::func_422(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			__LIB_10__::func_178(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				__LIB_1__::func_422(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_683(&(uParam0->f_330), iParam1);
	}
}

bool func_198(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	vector3 vVar7[24];
	vector3 vVar10[24];
	if (uParam0->f_65 == 14)
	{
		return true;
	}
	vVar0 = { __LIB_10__::func_179(uParam0, uParam0->f_383) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (!__LIB_5__::func_236(1))
		{
			if (__LIB_1__::func_104(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
			{
				uParam0->f_383++;
				vVar0 = { __LIB_10__::func_179(uParam0, uParam0->f_383) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
				{
					return true;
				}
			}
		}
	}
	else if (uParam0->f_358 || __LIB_0__::func_27(uParam0->f_328, 268435456))
	{
		if (__LIB_10__::func_75(uParam0->f_67))
		{
			StringCopy(&cVar3, "BOUNTY_TURN_IN_DEAD", 32);
		}
		else
		{
			StringCopy(&cVar3, "BOUNTY_TURN_IN_ALIVE", 32);
		}
		if (__LIB_2__::func_122(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
		{
			return true;
		}
	}
	else
	{
		StringCopy(&cVar7, "JPAY", 24);
		MemCopy(&cVar10, {__LIB_10__::func_77(uParam0->f_300)}, 1);
		StringConCat(&cVar7, &cVar10, 24);
		if (__LIB_1__::func_104(&(uParam0->f_201), cVar7, 0, -1, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_199(var uParam0)
{
	uParam0->f_69 = __LIB_2__::func_965(__LIB_10__::func_46(uParam0->f_300), 1, 0, 0, 1, 1);
	if (__LIB_0__::func_272(uParam0->f_69, 0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_69) || !ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_69))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_69, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, true);
		PED::_0xBD75500141E4725C(uParam0->f_69, joaat("LAW_SHERIFF"));
		__LIB_1__::func_406(&(uParam0->f_74), 1);
		__LIB_1__::func_405(&(uParam0->f_74), 1);
		__LIB_1__::func_402(&(uParam0->f_74), 1);
		__LIB_2__::func_828(&(uParam0->f_74), 1);
		__LIB_1__::func_401(&(uParam0->f_74), 1);
		if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_69))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_69, false, true);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_69, true, false);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_69, 146, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_69, __LIB_10__::func_106(uParam0->f_300), true, false, true, true);
		WEAPON::_0x94A3C1B804D291EC(uParam0->f_69, 1, 0, 0, 0);
		TASK::TASK_SWAP_WEAPON(uParam0->f_69, 1, 0, 0, 0);
		__LIB_10__::func_139(uParam0, uParam0->f_69, __LIB_10__::func_107(uParam0->f_300));
		__LIB_0__::func_928(&(uParam0->f_201), uParam0->f_69, __LIB_10__::func_107(uParam0->f_300), 1);
		__LIB_10__::func_172(uParam0, uParam0->f_69);
		if (!Global_1935630.f_12)
		{
			if (__LIB_0__::func_181())
			{
				__LIB_0__::func_928(&(uParam0->f_201), Global_35, "John", 1);
			}
			else
			{
				__LIB_0__::func_928(&(uParam0->f_201), Global_35, "Arthur", 1);
			}
		}
		return true;
	}
	return false;
}

void func_200(var uParam0)
{
	__LIB_10__::func_164(uParam0, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		__LIB_10__::func_144(uParam0);
	}
}

bool func_201(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	if (__LIB_10__::func_109(uParam0))
	{
		if (!__LIB_2__::func_136(Global_35, 0))
		{
			StringCopy(&cVar3, __LIB_10__::func_110(uParam0->f_300, PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true)), 32);
			if (__LIB_2__::func_122(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
			{
				return true;
			}
		}
	}
	else if (!__LIB_0__::func_27(uParam0->f_329, 512))
	{
		if (!__LIB_5__::func_236(1))
		{
			if (uParam0->f_382 == 0)
			{
				if (!__LIB_10__::func_75(uParam0->f_67))
				{
					MemCopy(&vVar0, {uParam0->f_332}, 3);
				}
				else
				{
					MemCopy(&vVar0, {uParam0->f_336}, 3);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				if (__LIB_1__::func_104(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
				{
					uParam0->f_382++;
				}
			}
			else
			{
				return true;
			}
		}
	}
	else if (!__LIB_5__::func_236(1))
	{
		vVar0 = { __LIB_10__::func_180(uParam0, uParam0->f_382) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			if (__LIB_1__::func_104(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
			{
				uParam0->f_382++;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_202(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_76(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = iParam0;
	while (iVar0 < 6 || iVar1 > 0)
	{
		if (iVar0 < 6)
		{
			iVar0++;
		}
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - 1);
		}
		if (!__LIB_10__::func_184(iVar0))
		{
			iVar2 = iVar0;
		}
		else if (!__LIB_10__::func_184(iVar1))
		{
			iVar2 = iVar1;
		}
	else
	{
		}
	}
	if (iVar2 == iParam0)
	{
		iVar2 = -1;
	}
	return iVar2;
}

void func_203(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_10__::func_152(uParam0);
	}
	Global_1392235.f_4 = 0;
	__LIB_0__::func_325(&(uParam0->f_66));
	__LIB_0__::func_325(&(uParam0->f_68));
	__LIB_3__::func_459(uParam0->f_67, 0);
	__LIB_10__::func_78();
	__LIB_10__::func_140(uParam0, 0);
	if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_67) && __LIB_10__::func_79(uParam0->f_67)) && ENTITY::_0x808077647856DE62(uParam0->f_67, 4) == 0)
	{
		ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 4, 1);
	}
	if (uParam0->f_27 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(uParam0->f_27);
	}
	if (uParam0->f_28 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(uParam0->f_28);
	}
	if (uParam0->f_29 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(uParam0->f_29);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_10));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
	}
	if (TASK::IS_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD", false);
	}
	__LIB_10__::func_80(uParam0);
	__LIB_2__::func_788(&(uParam0->f_67), 1, 0, 1);
	__LIB_10__::func_164(uParam0, 1, 0);
	__LIB_2__::func_788(&(uParam0->f_69), 1, 1, 1);
	if (__LIB_2__::func_763(__LIB_10__::func_46(uParam0->f_300), 0) && (__LIB_0__::func_122(__LIB_10__::func_46(uParam0->f_300)) || !__LIB_0__::func_171(__LIB_10__::func_46(uParam0->f_300))))
	{
		__LIB_2__::func_753(__LIB_10__::func_46(uParam0->f_300), 0, 1, 0, 0);
	}
	__LIB_4__::func_269(0);
	__LIB_1__::func_544(uParam0->f_306);
	__LIB_0__::func_172(uParam0->f_306);
	__LIB_0__::func_172(uParam0->f_307);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_308))
	{
		__LIB_1__::func_544(uParam0->f_308);
		__LIB_0__::func_172(uParam0->f_308);
	}
	__LIB_0__::func_172(uParam0->f_305);
	__LIB_0__::func_172(uParam0->f_310);
	__LIB_0__::func_172(uParam0->f_311);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
	{
		STREAMING::_0x4EDDD9E9CA5AF985(joaat("SC_BOUNTY_HUNTER_SHERIFF"));
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_371);
	}
	if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_71))
	{
		INTERIOR::UNPIN_INTERIOR(uParam0->f_71);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_72))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_72, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_73))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_73, false);
	}
}

void func_204(bool bParam0)
{
	if (!PED::IS_PED_DEAD_OR_DYING(Local_15.f_387, true))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_15.f_387))
			{
				if (!__LIB_0__::func_75(&(Local_15.f_393)))
				{
					__LIB_1__::func_148(&(Local_15.f_393));
					if (Local_15.f_498 == 0)
					{
						Local_15.f_499 = 1f;
					}
					else if (bParam0)
					{
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
					}
					else
					{
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7.5f, 18.5f);
					}
				}
				else if (__LIB_9__::func_344())
				{
					if (__LIB_0__::func_1(Local_15.f_388, 2))
					{
						if (__LIB_1__::func_285(&(Local_15.f_393), 2f))
						{
							__LIB_10__::func_185(bParam0);
						}
					}
					else if (__LIB_1__::func_285(&(Local_15.f_393), Local_15.f_499))
					{
						__LIB_10__::func_186(bParam0);
					}
				}
			}
		}
	}
}

void func_205(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	fVar3 = 15f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (__LIB_0__::func_272(uParam0->f_69, 0))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false) };
			if ((((((__LIB_10__::func_190(uParam0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f)) || MISC::IS_PROJECTILE_IN_AREA(vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3), true)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_69, 5000)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_67, 5000)) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_69))
				{
					PED::_0x802092B07E3B1EEA(uParam0->f_69, Global_36, 3);
				}
				TASK::CLEAR_PED_TASKS(uParam0->f_69, true, false);
				TASK::TASK_COMBAT_PED(uParam0->f_69, Global_35, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, false);
				if (__LIB_2__::func_763(__LIB_10__::func_46(uParam0->f_300), 0) && (__LIB_0__::func_122(__LIB_10__::func_46(uParam0->f_300)) || !__LIB_0__::func_171(__LIB_10__::func_46(uParam0->f_300))))
				{
					__LIB_2__::func_753(__LIB_10__::func_46(uParam0->f_300), 0, 1, 0, 0);
				}
				if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
					{
						LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
					}
				}
				__LIB_5__::func_20(0, 0);
				__LIB_1__::func_683(&(uParam0->f_329), 8388608);
			}
		}
		else
		{
			__LIB_1__::func_683(&(uParam0->f_329), 8388608);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_MURDER_LAW"), 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_206(var uParam0, int iParam1)
{
	__LIB_0__::func_325(&(uParam0->f_66));
	if (iParam1 == 3)
	{
		if (!__LIB_0__::func_27(uParam0->f_329, 524288))
		{
			uParam0->f_66 = MAP::_BLIP_ADD_FOR_COORD(408396114, __LIB_10__::func_45(uParam0->f_300));
			MAP::_BLIP_SET_MODIFIER(uParam0->f_66, 825788762);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_JAIL");
		}
	}
	else if (iParam1 == 7)
	{
		uParam0->f_66 = MAP::_BLIP_ADD_FOR_COORD(408396114, __LIB_10__::func_168(uParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_CELL");
	}
	else if (iParam1 == 8)
	{
		uParam0->f_66 = MAP::_BLIP_ADD_FOR_COORD(408396114, __LIB_10__::func_67(uParam0->f_300));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_DUMP");
	}
	MAP::_BLIP_SET_MODIFIER(uParam0->f_66, 231194138);
	__LIB_1__::func_721(7);
	__LIB_1__::func_643();
	if (!__LIB_0__::func_27(uParam0->f_329, 1))
	{
		__LIB_1__::func_683(&(uParam0->f_329), 1);
		uParam0->f_368 = { Global_36 };
	}
}

void func_207(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_10__::func_157(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_10__::func_192(iParam0, iParam1, 1, 0);
		}
	}
}

void func_208(var uParam0, bool bParam1)
{
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	__LIB_10__::func_60(uParam0->f_300, &(uParam0->f_306));
	__LIB_10__::func_100(uParam0->f_300, &(uParam0->f_307));
	__LIB_10__::func_101(uParam0->f_300, &(uParam0->f_305));
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_306, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_306, 0, 0, 0, -1, -1, 2);
	__LIB_10__::func_194(uParam0, bParam1);
}

void func_209(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	char cVar4[32];
	vector3 vVar8[24];
	vector3 vVar11[24];
	if (!__LIB_0__::func_75(&(uParam0->f_318)))
	{
		__LIB_0__::func_268(&(uParam0->f_318), 5f);
		uParam0->f_324 = 0;
	}
	else if (__LIB_0__::func_265(&(uParam0->f_318)) >= 7f && __LIB_5__::func_236(1))
	{
		__LIB_0__::func_268(&(uParam0->f_318), 7f);
	}
	if (__LIB_10__::func_75(uParam0->f_67))
	{
		vVar1 = { __LIB_10__::func_67(uParam0->f_300) };
	}
	else
	{
		vVar1 = { __LIB_10__::func_104(uParam0->f_300) };
	}
	if (uParam0->f_300 == 5)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (uParam0->f_324 < iVar0)
	{
		if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vVar1, 45f) || PED::IS_PED_STOPPED(Global_35))
		{
			if ((__LIB_0__::func_272(uParam0->f_69, 0) && __LIB_2__::func_215(uParam0->f_69, Global_35, 0, 12f, 0)) && __LIB_1__::func_205(Global_35, uParam0->f_306, 1, 0))
			{
				if (__LIB_0__::func_265(&(uParam0->f_318)) >= 15f)
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_69, 0) && !TASK::_0x916B8E075ABC8B4E(uParam0->f_69, 1))
					{
						TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, -1f, 1, 0, 0, 0);
					}
					if (uParam0->f_358 || __LIB_0__::func_27(uParam0->f_328, 67108864))
					{
						StringCopy(&cVar4, "BOUNTY_THROW_IN_CELL_AGAIN", 32);
						if (__LIB_2__::func_122(uParam0->f_69, &cVar4, 291934926, Global_35, 1, 0, 0, 1))
						{
							__LIB_1__::func_148(&(uParam0->f_318));
							uParam0->f_324++;
							if (uParam0->f_324 == 1)
							{
								__LIB_10__::func_197(uParam0, 1024, 1);
							}
						}
					}
					else if (!__LIB_5__::func_236(1))
					{
						StringCopy(&cVar8, "JR", 24);
						if (__LIB_10__::func_75(uParam0->f_67))
						{
							StringConCat(&cVar8, "DE", 24);
						}
						else
						{
							StringConCat(&cVar8, "AL", 24);
						}
						MemCopy(&cVar11, {__LIB_10__::func_77(uParam0->f_300)}, 1);
						StringConCat(&cVar8, &cVar11, 24);
						StringIntConCat(&cVar8, uParam0->f_324, 24);
						if (__LIB_1__::func_104(&(uParam0->f_201), cVar8, 0, -1, 0, 0))
						{
							__LIB_1__::func_148(&(uParam0->f_318));
							uParam0->f_324++;
							if (uParam0->f_324 == 1)
							{
								__LIB_10__::func_197(uParam0, 1024, 1);
							}
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_265(&(uParam0->f_318)) > 8f)
		{
			__LIB_0__::func_268(&(uParam0->f_318), 8f);
		}
	}
}

bool func_210(var uParam0)
{
	if (!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 150f, 1) || !__LIB_10__::func_138(uParam0))
	{
		return false;
	}
	if (!uParam0->f_70)
	{
		uParam0->f_71 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_10__::func_45(uParam0->f_300));
		INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_71);
		uParam0->f_70 = 1;
	}
	if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_71))
	{
		return false;
	}
	if (uParam0->f_30[*uParam0 /*14*/])
	{
		return true;
	}
	__LIB_10__::func_160(uParam0);
	__LIB_10__::func_111(uParam0);
	if (uParam0->f_60 != 1)
	{
		if (__LIB_10__::func_112(uParam0, *uParam0) || __LIB_10__::func_113(uParam0, *uParam0))
		{
			return false;
		}
	}
	if (__LIB_10__::func_195(uParam0, *uParam0))
	{
		*uParam0++;
		if (*uParam0 >= 2)
		{
			if (!uParam0->f_23)
			{
				uParam0->f_23 = 1;
			}
			return true;
		}
	}
	return false;
}

int func_211(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_69(iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	switch (iParam0)
	{
		case 8:
			return -1;
		case 3:
		case 5:
		case 9:
			iVar0 = 3;
			break;
		case 6:
		case 10:
			iVar0 = 4;
			break;
		case 1:
		case 7:
			iVar0 = 2;
			break;
		case 0:
		case 2:
			iVar0 = 6;
			break;
		case 4:
		case 12:
			iVar0 = 1;
			break;
		case 11:
			iVar0 = 5;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 0;
			break;
	}
	if (__LIB_10__::func_184(iVar0))
	{
		iVar0 = __LIB_10__::func_202(iVar0);
	}
	return iVar0;
}

void func_212(int iParam0, bool bParam1)
{
	__LIB_0__::func_11(iParam0);
	if (!__LIB_3__::func_186(iParam0->f_389, 4))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_387))
		{
			__LIB_3__::func_608(iParam0->f_387);
			if (__LIB_3__::func_186(iParam0->f_389, 32))
			{
				TASK::TASK_CARRIABLE(iParam0->f_387, joaat("HOGTIED_PED"), 0, 0, 0);
				PED::SET_PED_KEEP_TASK(iParam0->f_387, true);
			}
			else if (bParam1)
			{
				PED::_0xED00D72F81CF7278(iParam0->f_387, 0, 0);
				PED::_0x39A2FC5AF55A52B1(iParam0->f_387, -1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_387));
			__LIB_3__::func_692(4);
		}
	}
	__LIB_10__::func_203(&(iParam0->f_3), 0);
	__LIB_3__::func_732(0);
	HUD::_TEXT_DATABASE_DELETE("BHCR");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(iParam0->f_401));
	}
	if (__LIB_3__::func_186(iParam0->f_389, 128))
	{
		__LIB_3__::func_608(iParam0->f_387);
		__LIB_3__::func_692(4);
	}
	if (__LIB_10__::func_129(iParam0))
	{
		__LIB_10__::func_135();
	}
	else
	{
		Global_1395482.f_115 = __LIB_0__::func_1(iParam0->f_388, 4);
		Global_1395482.f_116 = __LIB_0__::func_1(iParam0->f_388, 2);
		Global_1395482.f_114 = iParam0->f_498;
		Global_1395482.f_94 = iParam0->f_478;
		Global_1395482.f_72 = iParam0->f_456;
		Global_1395482.f_73 = iParam0->f_457;
		Global_1395482.f_74 = iParam0->f_458;
		Global_1395482.f_75 = iParam0->f_459;
		Global_1395482.f_117 = iParam0->f_500;
		Global_1395482.f_93 = iParam0->f_477;
	}
	__LIB_10__::func_63(iParam0);
	__LIB_0__::func_769();
	__LIB_3__::func_695(iParam0->f_389, 4);
	__LIB_3__::func_695(iParam0->f_389, 32);
	__LIB_3__::func_695(iParam0->f_389, 128);
	Global_1395482.f_1 = -1;
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (PED::_0x5C16855277819BBF() >= 1)
	{
		PED::_0x7D4E70A67A651C71(1);
	}
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_213(int iParam0)
{
	if (!__LIB_3__::func_186(iParam0->f_389, 256))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0->f_387) && !PED::_IS_PED_HOGTIED(iParam0->f_387)) && !__LIB_1__::func_205(iParam0->f_387, iParam0->f_3.f_306, 1, 0))
		{
			__LIB_10__::func_203(&(iParam0->f_3), 1);
			__LIB_10__::func_128(iParam0->f_389, 256);
		}
	}
	else if (PED::_IS_PED_HOGTIED(iParam0->f_387))
	{
		__LIB_3__::func_695(iParam0->f_389, 256);
	}
}

void func_214(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bVar0 = false;
	bVar1 = __LIB_3__::func_186(Local_15.f_389, 8);
	if (bParam0)
	{
		if (!__LIB_0__::func_1(Local_15.f_388, 4))
		{
			if (__LIB_3__::func_186(Local_15.f_389, 16))
			{
				__LIB_0__::func_7(&(Local_15.f_388), 4);
				__LIB_0__::func_8(&(Local_15.f_388), 16);
				Local_15.f_498 = 0;
				bVar0 = true;
			}
		}
	}
	if (!bVar0)
	{
		bVar0 = __LIB_0__::func_1(Local_15.f_388, 4);
	}
	if (!__LIB_0__::func_1(Local_15.f_388, 16))
	{
		if (!bVar1 || __LIB_10__::func_65(bVar0))
		{
			if (bVar0 || !bVar1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
				{
					AUDIO::STOP_PED_SPEAKING(Local_15.f_387, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_387, false);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_387, 178, true);
				}
				__LIB_10__::func_52();
			}
			__LIB_0__::func_7(&(Local_15.f_388), 16);
			Local_15.f_502 = 0;
			return;
		}
		else
		{
			PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
		}
		__LIB_10__::func_204(bVar0);
	}
	else
	{
		switch (Local_15.f_502)
		{
			case 0:
				AUDIO::STOP_PED_SPEAKING(Local_15.f_387, false);
				if (__LIB_0__::func_1(Local_15.f_388, 32))
				{
					Local_15.f_502 = 4;
				}
				else if (__LIB_2__::func_227(0, 1, 0, 0))
				{
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_15.f_387) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15.f_387))
					{
						Local_15.f_502 = 1;
					}
				}
				break;
			case 1:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_15.f_387))
				{
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15.f_387))
					{
						if (__LIB_10__::func_137(0) == Local_15.f_387)
						{
							if (!__LIB_10__::func_146())
							{
								if (__LIB_0__::func_1(Local_15.f_388, 32))
								{
									Local_15.f_502 = 4;
								}
							}
							else
							{
								Local_15.f_502 = 2;
							}
						}
						else
						{
							Local_15.f_502 = 0;
						}
					}
				}
				break;
			case 2:
				PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
				{
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
					{
						__LIB_1__::func_148(&(Local_15.f_393));
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
						Local_15.f_502 = 3;
					}
				}
				break;
			case 3:
				PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
				if (__LIB_1__::func_285(&(Local_15.f_393), Local_15.f_499))
				{
					Local_15.f_502 = 0;
				}
				break;
			case 4:
				break;
		}
	}
}

bool func_215(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (__LIB_0__::func_27(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			__LIB_0__::func_325(&(uParam0->f_68));
			return true;
		}
		return false;
	}
	if (uParam0->f_61 <= 0)
	{
		if (__LIB_10__::func_75(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				__LIB_0__::func_325(&(uParam0->f_68));
				return true;
			}
			if (!__LIB_0__::func_75(&(uParam0->f_321)))
			{
				if (__LIB_10__::func_81(uParam0->f_67))
				{
					__LIB_1__::func_148(&(uParam0->f_321));
				}
			}
			else if ((!__LIB_10__::func_81(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
			{
				__LIB_0__::func_37(&(uParam0->f_321));
			}
			else if (__LIB_0__::func_265(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				__LIB_0__::func_325(&(uParam0->f_68));
				return true;
			}
		}
		else if (!__LIB_0__::func_75(&(uParam0->f_321)))
		{
			if (__LIB_10__::func_81(uParam0->f_67))
			{
				__LIB_1__::func_148(&(uParam0->f_321));
			}
		}
		else if ((!__LIB_10__::func_81(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
		{
			__LIB_0__::func_37(&(uParam0->f_321));
		}
		else if (__LIB_0__::func_265(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			__LIB_0__::func_325(&(uParam0->f_68));
			return true;
		}
	}
	fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (__LIB_10__::func_75(uParam0->f_67))
			{
				uParam0->f_64 = 2;
			}
			else if (!PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				uParam0->f_64 = 3;
			}
			else
			{
				uParam0->f_64 = 1;
			}
			return true;
		}
		else if (fVar0 > fParam1)
		{
			if (!__LIB_0__::func_27(uParam0->f_329, 16))
			{
				__LIB_10__::func_197(uParam0, 256, 1);
				__LIB_1__::func_683(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (__LIB_0__::func_27(uParam0->f_329, 16))
			{
				__LIB_1__::func_681(&(uParam0->f_329), 16);
				if (__LIB_10__::func_75(uParam0->f_67) || PED::_IS_PED_HOGTIED(uParam0->f_67))
				{
					__LIB_10__::func_197(uParam0, 16, 0);
				}
				else
				{
					__LIB_10__::func_197(uParam0, 4, 0);
				}
			}
		}
	}
	if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (__LIB_0__::func_272(uParam0->f_69, 0))
		{
			if (__LIB_10__::func_190(uParam0))
			{
				if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 5;
				}
				else
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 6;
				}
				return true;
			}
		}
		else
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_MURDER_LAW"), 0, 0, 0, 0, 0, 0, 0);
			uParam0->f_64 = 6;
			return true;
		}
	}
	if (uParam0->f_63 == 7 || uParam0->f_63 == 8)
	{
		fVar1 = __LIB_0__::func_94(Global_35, __LIB_10__::func_45(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar1 > 35f)
		{
			if (!__LIB_0__::func_27(uParam0->f_329, 131072))
			{
				__LIB_1__::func_683(&(uParam0->f_329), 131072);
				__LIB_10__::func_197(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (__LIB_0__::func_27(uParam0->f_329, 131072))
			{
				__LIB_1__::func_681(&(uParam0->f_329), 131072);
				__LIB_10__::func_197(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = __LIB_0__::func_94(Global_35, __LIB_10__::func_45(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar2 > 55f)
		{
			if (!__LIB_0__::func_27(uParam0->f_329, 33554432))
			{
				__LIB_1__::func_683(&(uParam0->f_329), 33554432);
				__LIB_10__::func_197(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (__LIB_0__::func_27(uParam0->f_329, 33554432))
			{
				__LIB_1__::func_681(&(uParam0->f_329), 33554432);
				__LIB_10__::func_197(uParam0, 2048, 0);
			}
		}
	}
	return false;
}

bool func_216(var uParam0)
{
	float fVar0;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_10__::func_62(uParam0->f_300, uParam0->f_65), Global_36, true);
	if (__LIB_0__::func_272(uParam0->f_69, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_69, 49, true);
	}
	if (__LIB_2__::func_157(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	if (!__LIB_0__::func_27(uParam0->f_329, 8388608))
	{
		__LIB_10__::func_205(uParam0);
		__LIB_10__::func_196(uParam0);
		if (!__LIB_0__::func_27(uParam0->f_329, 256))
		{
			if (!__LIB_0__::func_163(Global_35, -76381094) && !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
			{
				__LIB_10__::func_182(uParam0);
			}
		}
		else if (__LIB_0__::func_27(uParam0->f_329, 512) && !__LIB_0__::func_27(uParam0->f_328, 32))
		{
			__LIB_10__::func_187(uParam0);
		}
		if (!__LIB_0__::func_27(uParam0->f_328, 2097152))
		{
			__LIB_10__::func_134(uParam0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
	{
		__LIB_3__::func_459(uParam0->f_67, 0);
	}
	if (fVar0 > 50f)
	{
		return true;
	}
	if (__LIB_10__::func_145(uParam0))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_308))
	{
		if (!__LIB_2__::func_157(uParam0->f_306, Global_36))
		{
			__LIB_1__::func_544(uParam0->f_308);
			__LIB_0__::func_172(uParam0->f_308);
		}
	}
	return false;
}

void func_217(var uParam0, int iParam1)
{
	if (uParam0->f_63 != iParam1)
	{
		uParam0->f_63 = iParam1;
		__LIB_1__::func_681(&(uParam0->f_329), 2);
		switch (iParam1)
		{
			case 0:
				if (__LIB_0__::func_272(uParam0->f_67, 0))
				{
					AUDIO::STOP_PED_SPEAKING(uParam0->f_67, false);
				}
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_10__::func_82(uParam0);
				__LIB_10__::func_197(uParam0, 4, 1);
				break;
			case 1:
				if (__LIB_0__::func_272(uParam0->f_67, 0))
				{
					AUDIO::STOP_PED_SPEAKING(uParam0->f_67, false);
				}
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_10__::func_82(uParam0);
				__LIB_10__::func_197(uParam0, 8, 1);
				break;
			case 2:
				if (__LIB_0__::func_272(uParam0->f_67, 0))
				{
					if (!__LIB_0__::func_27(uParam0->f_329, 67108864))
					{
						AUDIO::STOP_PED_SPEAKING(uParam0->f_67, true);
					}
				}
				if (!__LIB_0__::func_71(Global_35))
				{
					__LIB_10__::func_152(uParam0);
				}
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_10__::func_82(uParam0);
				MISC::_0x7FA58CED69405F9A(uParam0->f_67, 3);
				__LIB_10__::func_197(uParam0, 16, 1);
				break;
			case 3:
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_10__::func_206(uParam0, 3);
				__LIB_10__::func_197(uParam0, 32, 1);
				break;
			case 5:
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_10__::func_154(uParam0);
				__LIB_10__::func_197(uParam0, 64, 0);
				break;
			case 6:
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_10__::func_82(uParam0);
				__LIB_10__::func_197(uParam0, 128, 0);
				break;
			case 4:
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_0__::func_325(&(uParam0->f_66));
				break;
			case 7:
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_10__::func_206(uParam0, 7);
				__LIB_10__::func_197(uParam0, 1024, 0);
				break;
			case 8:
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_10__::func_206(uParam0, 8);
				__LIB_10__::func_197(uParam0, 1024, 0);
				break;
			case 9:
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_10__::func_82(uParam0);
				__LIB_10__::func_197(uParam0, 16, 1);
				break;
			case 10:
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_10__::func_197(uParam0, 2048, 1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
				{
					uParam0->f_66 = __LIB_4__::func_983(408396114, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, true, false), 1);
				}
				else
				{
					uParam0->f_66 = __LIB_4__::func_983(408396114, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 1);
				}
				break;
			case 11:
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_10__::func_197(uParam0, 8192, 1);
				uParam0->f_66 = __LIB_8__::func_778(408396114, uParam0->f_8, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_RWRD");
				break;
			case 12:
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_0__::func_325(&(uParam0->f_68));
				__LIB_0__::func_325(&(uParam0->f_66));
				__LIB_0__::func_769();
				break;
		}
	}
}

void func_218(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringCopy(&(uParam0->f_325), "BNTY_NME_GU", 24);
	}
	else
	{
		StringCopy(&(uParam0->f_325), sParam1, 24);
	}
	uParam0->f_300 = uParam2;
	Global_40.f_9074.f_3 = iParam3;
	Global_40.f_9074.f_4 = iParam4;
	uParam0->f_303 = iParam3;
	uParam0->f_302 = iParam4;
	uParam0->f_65 = -1;
	__LIB_1__::func_681(&(uParam0->f_329), 512);
	__LIB_10__::func_208(uParam0, bParam5);
}

int func_219(var uParam0)
{
	if (uParam0->f_25)
	{
		return 1;
	}
	if (__LIB_10__::func_210(uParam0))
	{
		uParam0->f_25 = 1;
	}
	return 0;
}

void func_220(bool bParam0)
{
	if (bParam0)
	{
		if (!__LIB_2__::func_204(0) || CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_10__::func_212(&Local_15, 1);
		}
	}
}

bool func_221(int iParam0)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		__LIB_3__::func_692(4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return true;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0->f_387, "bIsCriminal") || DECORATOR::DECOR_GET_BOOL(iParam0->f_387, "bIsCriminal") == 0)
	{
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		__LIB_10__::func_128(iParam0->f_389, 128);
		return true;
	}
	if (__LIB_10__::func_215(&(iParam0->f_3), 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
	{
		if (iParam0->f_3.f_64 == 5 || iParam0->f_3.f_64 == 6)
		{
			__LIB_10__::func_128(iParam0->f_389, 128);
		}
		return true;
	}
	if (!__LIB_0__::func_1(iParam0->f_388, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_1(iParam0->f_388, 8) && ENTITY::IS_ENTITY_DEAD(iParam0->f_387))
	{
		__LIB_3__::func_692(4);
		return true;
	}
	if (__LIB_10__::func_136(iParam0))
	{
		__LIB_3__::func_692(4);
		return true;
	}
	iVar0 = __LIB_1__::func_898();
	if (__LIB_10__::func_211(iVar0) != iParam0->f_389)
	{
		__LIB_10__::func_128(iParam0->f_389, 4);
		return true;
	}
	if (__LIB_0__::func_58(iParam0))
	{
		return true;
	}
	return false;
}

int func_222(var uParam0)
{
	if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false)) || __LIB_10__::func_96(uParam0))
	{
		if (__LIB_10__::func_75(uParam0->f_67))
		{
			Global_1392235 = 0;
		}
		else
		{
			Global_1392235 = 1;
		}
		TASK::SET_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD", true);
		__LIB_10__::func_97();
		uParam0->f_304 = __LIB_0__::func_492(1);
		__LIB_10__::func_217(uParam0, 11);
		return 1;
	}
	return 0;
}

void func_223(var uParam0)
{
	bool bVar0;
	__LIB_10__::func_165(uParam0);
	switch (uParam0->f_63)
	{
		case 0:
			__LIB_10__::func_82(uParam0);
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_10__::func_217(uParam0, 2);
			}
			else
			{
				bVar0 = PED::GET_PED_CONFIG_FLAG(uParam0->f_67, 11, true);
				if (bVar0)
				{
					__LIB_10__::func_217(uParam0, 1);
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_10__::func_217(uParam0, 2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_67) && !PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_10__::func_217(uParam0, 0);
			}
			ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_67, 19, 1);
			if (__LIB_10__::func_166(uParam0->f_67, 0))
			{
				if (__LIB_10__::func_69(uParam0))
				{
					__LIB_10__::func_217(uParam0, 4);
				}
				else if (__LIB_10__::func_191(uParam0->f_67))
				{
					if (!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 30f, 1))
					{
						__LIB_10__::func_217(uParam0, 5);
					}
					else
					{
						__LIB_10__::func_217(uParam0, 6);
					}
				}
				else
				{
					__LIB_10__::func_217(uParam0, 3);
				}
			}
			break;
		case 3:
			__LIB_10__::func_167(uParam0);
			if (!__LIB_10__::func_166(uParam0->f_67, 0))
			{
				__LIB_10__::func_217(uParam0, 2);
			}
			else if (__LIB_10__::func_69(uParam0))
			{
				__LIB_10__::func_217(uParam0, 4);
			}
			else if (__LIB_10__::func_191(uParam0->f_67))
			{
				if (!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 30f, 1))
				{
					__LIB_10__::func_217(uParam0, 5);
				}
				else
				{
					__LIB_10__::func_152(uParam0);
					__LIB_10__::func_217(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!__LIB_10__::func_191(uParam0->f_67))
			{
				__LIB_10__::func_217(uParam0, 3);
			}
			break;
		case 6:
			if (__LIB_10__::func_79(uParam0->f_67))
			{
				__LIB_10__::func_217(uParam0, 3);
			}
			break;
		case 4:
			if (uParam0->f_62 >= 5)
			{
				if (!__LIB_10__::func_75(uParam0->f_67))
				{
					__LIB_1__::func_148(&(uParam0->f_364));
					__LIB_10__::func_217(uParam0, 7);
				}
				else
				{
					__LIB_1__::func_148(&(uParam0->f_364));
					__LIB_10__::func_217(uParam0, 8);
				}
			}
			break;
		case 7:
			if (!__LIB_0__::func_27(uParam0->f_329, 2) && !__LIB_5__::func_236(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					__LIB_10__::func_197(uParam0, 1024, 1);
					__LIB_1__::func_683(&(uParam0->f_329), 2);
				}
			}
			if (!__LIB_10__::func_75(uParam0->f_67))
			{
				__LIB_10__::func_209(uParam0);
				if (!__LIB_10__::func_166(uParam0->f_67, 1))
				{
					__LIB_10__::func_217(uParam0, 2);
				}
				else if (__LIB_0__::func_94(Global_35, __LIB_10__::func_168(uParam0), 0) < 1f && __LIB_3__::func_592(Global_35, __LIB_10__::func_168(uParam0)) < 3f)
				{
					__LIB_3__::func_459(uParam0->f_67, 0);
					__LIB_10__::func_71(uParam0, 1);
					__LIB_10__::func_217(uParam0, 12);
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_364));
				__LIB_10__::func_217(uParam0, 8);
			}
			break;
		case 8:
			if (!__LIB_0__::func_27(uParam0->f_329, 2) && !__LIB_5__::func_236(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					__LIB_10__::func_197(uParam0, 1024, 1);
					__LIB_1__::func_683(&(uParam0->f_329), 2);
				}
			}
			__LIB_10__::func_209(uParam0);
			if (__LIB_10__::func_83(uParam0))
			{
				if (__LIB_10__::func_169(uParam0))
				{
					__LIB_3__::func_459(uParam0->f_67, 0);
					__LIB_10__::func_71(uParam0, 2);
					__LIB_10__::func_217(uParam0, 12);
				}
			}
			else if (!__LIB_10__::func_166(uParam0->f_67, 1))
			{
				if (ENTITY::_0x61914209C36EFDDB(uParam0->f_67) != 6)
				{
					if (__LIB_0__::func_266(Global_35, __LIB_10__::func_67(uParam0->f_300), 6.5f, 1, 1))
					{
						ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 7, 0);
						__LIB_3__::func_459(uParam0->f_67, 0);
						__LIB_10__::func_71(uParam0, 2);
						__LIB_10__::func_217(uParam0, 12);
					}
					else
					{
						__LIB_10__::func_217(uParam0, 9);
					}
				}
			}
			break;
		case 9:
			if (__LIB_10__::func_166(uParam0->f_67, 1))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					__LIB_10__::func_217(uParam0, 8);
				}
				else
				{
					__LIB_10__::func_217(uParam0, 7);
				}
			}
			break;
		case 12:
			break;
	}
}

void func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	if (PED::GET_PED_CONFIG_FLAG(iParam0->f_387, 4, true))
	{
		iVar0 = __LIB_4__::func_211(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, -1);
		iVar1 = __LIB_4__::func_211(joaat("REWARD_BOUNTYHUNTING_SMALL"), 0, -1);
	}
	else
	{
		iVar0 = __LIB_4__::func_211(joaat("REWARD_BOUNTYHUNTING_SMALL"), 0, -1);
		iVar1 = __LIB_4__::func_211(joaat("REWARD_BEAT_MEDIUM"), 0, -1);
	}
	iParam0->f_3.f_67 = iParam0->f_387;
	__LIB_10__::func_57(&(iParam0->f_3.f_67));
	__LIB_10__::func_218(&(iParam0->f_3), &(iParam0->f_3.f_325), iParam0->f_2, iVar0, iVar1, 0);
	__LIB_1__::func_683(&(iParam0->f_3.f_329), 262144);
	__LIB_1__::func_683(&(iParam0->f_3.f_329), 524288);
	__LIB_1__::func_683(&(iParam0->f_3.f_329), 1048576);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_387, 4, true);
	iParam0->f_3.f_299 = 1;
}

bool func_225(var uParam0, var uParam1)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	if (!ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		return false;
	}
	*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam0));
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

void func_226(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

bool func_227(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return false;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return true;
	}
	return false;
}

float func_228(var uParam0)
{
	return uParam0->f_218;
}

bool func_229(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar6 = { VOLUME::_GET_VOLUME_ROTATION(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return true;
}

void func_230(int iParam0, int iParam1)
{
	if (__LIB_4__::func_810(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] - (Global_40.f_9052.f_11[iParam0] && iParam1));
	}
}

int func_231(int iParam0)
{
	float fVar0;
	bool bVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	bVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	bVar1 = __LIB_5__::func_439(MISC::ABSF(bVar1) < 1f, __LIB_5__::func_439(bVar1 < 0f, -1f, 1f), bVar1);
	return BUILTIN::CEIL(bVar1);
}

char* func_232(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "BLIP_LSM_CATFISH";
		case 7:
			return "BLIP_LSM_HORSE_CHASE_1";
		case 1:
			return "BLIP_LSM_HUNTER";
		case 5:
			return "BLIP_LSM_MINER_1";
		case 6:
			return "BLIP_LSM_MINER_2";
		case 8:
			return "BLIP_LSM_SELL_HORSE_1";
		case 4:
			return "BLIP_LSM_SOLDIER";
		case 3:
			return "BLIP_LSM_UNDERTAKER";
		case 0:
			return "BLIP_LSM_WOMANCRY";
	}
	return "";
}

void func_233(int iParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		MAP::_BLIP_SET_MODIFIER(Global_1392626[iParam0 /*32*/], iParam1);
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		MAP::_BLIP_SET_MODIFIER(Global_1392626[iParam0 /*32*/].f_1, iParam1);
	}
}

void func_234(int iParam0, int iParam1)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_10), iParam1);
	__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_10), 2);
	__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_8), 1);
}

bool func_235(int iParam0, int iParam1)
{
	if (__LIB_4__::func_810(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

bool func_236(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam6, iParam7);
	}
	if (__LIB_5__::func_725(*iParam4))
	{
		if (!bParam5)
		{
			return true;
		}
		iVar0 = __LIB_5__::func_726();
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
		{
			return ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0) != *iParam4;
		}
		return true;
	}
	return false;
}

void func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	if ((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (__LIB_0__::func_2() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = __LIB_0__::func_338(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_8 = iParam0;
	Global_1898077.f_9 = iVar1;
	__LIB_0__::func_339(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
}

void func_238(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		uParam0->f_8 = __LIB_0__::func_485();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	__LIB_1__::func_350(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

void func_239()
{
	__LIB_9__::func_771(2, 1048576);
	__LIB_9__::func_771(2, 2097152);
	__LIB_9__::func_771(2, 8388608);
	__LIB_9__::func_771(2, 16777216);
	__LIB_9__::func_771(2, 33554432);
	__LIB_9__::func_771(2, 67108864);
	__LIB_9__::func_771(2, 134217728);
	__LIB_9__::func_771(2, 268435456);
	__LIB_9__::func_771(2, 536870912);
	__LIB_9__::func_771(2, 1073741824 /* Float: 2f */);
	__LIB_9__::func_771(2, -2147483648);
	__LIB_4__::func_262(2, 4194304);
}

void func_240()
{
	__LIB_9__::func_771(2, 1048576);
	__LIB_9__::func_771(2, 2097152);
	__LIB_9__::func_771(2, 4194304);
	__LIB_9__::func_771(2, 8388608);
	__LIB_9__::func_771(2, 16777216);
	__LIB_9__::func_771(2, 67108864);
	__LIB_9__::func_771(2, 134217728);
	__LIB_9__::func_771(2, 268435456);
	__LIB_9__::func_771(2, 536870912);
	__LIB_9__::func_771(2, 1073741824 /* Float: 2f */);
	__LIB_9__::func_771(2, -2147483648);
	__LIB_4__::func_262(2, 33554432);
}

void func_241(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 16);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 16);
	}
}

void func_242(int* iParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*uParam2, iParam0->f_26, 3, 1, 0, sParam3, 0);
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if (!__LIB_0__::func_139((uParam1[iVar1 /*17*/])->f_6) || __LIB_3__::func_66((uParam1[iVar1 /*17*/])->f_6) == 0)
			{
			}
			else
			{
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66((uParam1[iVar1 /*17*/])->f_6), iVar0, 0);
			}
			iVar1++;
		}
	}
}

int func_243(int iParam0)
{
	if (__LIB_0__::func_700(iParam0) == 6)
	{
		if (__LIB_0__::func_76(iParam0) == 0)
		{
			return __LIB_0__::func_872(iParam0);
		}
	}
	return -1;
}

void func_244(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				__LIB_3__::func_581(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				__LIB_3__::func_573(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			__LIB_3__::func_685(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			__LIB_3__::func_683(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*uParam0, false, 15);
		}
	}
}

bool func_245(int* iParam0, var uParam1)
{
	vector3 vVar0;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return true;
	}
	if (!PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { __LIB_3__::func_114(*uParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			__LIB_1__::func_338(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		if (__LIB_3__::func_417(Global_35))
		{
			iParam0->f_60 = __LIB_0__::func_147();
		}
		else
		{
			iParam0->f_60 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, 2f, 9);
		}
	}
	return false;
}

void func_246(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	Global_40.f_9422[iParam0 /*7*/] = iParam1;
	if (!bParam2)
	{
		__LIB_1__::func_446(&(Global_40.f_9422[iParam0 /*7*/]), 0, 0, iParam4, iParam3, 0, 0, 0);
	}
}

void func_247(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_281(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = __LIB_1__::func_745(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_248()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = __LIB_1__::func_710(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_9__::func_470(Global_1946804.f_57[__LIB_0__::func_161(iVar1, 1) /*11*/], 8);
	__LIB_1__::func_452(26, 0, 0, 0, 0);
	return 1;
}

void func_249(int iParam0, int iParam1)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (__LIB_1__::func_44(Global_1392626[iParam0 /*32*/].f_3) || __LIB_0__::func_702(Global_1392626[iParam0 /*32*/].f_3))
	{
		__LIB_1__::func_559(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		__LIB_8__::func_985(iParam0);
	}
}

int func_250()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!__LIB_3__::func_907(iVar0))
	{
		return 0;
	}
	iVar1 = __LIB_1__::func_710(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_1__::func_683(&iVar2, 1);
	return __LIB_3__::func_630(iVar0, iVar2);
}

void func_251(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (__LIB_0__::func_700(iParam0) == 1)
	{
		cVar0 = __LIB_0__::func_631(__LIB_0__::func_909(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (__LIB_0__::func_700(iParam0) == 8)
	{
		cVar0 = __LIB_0__::func_632(__LIB_0__::func_957(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	__LIB_9__::func_786(1, 1);
	__LIB_5__::func_119(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_303(1f);
}

void func_252(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_8__::func_584(iParam0);
}

void func_253(char[4] cParam0, int iParam1)
{
	if (iParam1 != cParam0->f_1)
	{
		cParam0->f_2 = cParam0->f_1;
		cParam0->f_1 = iParam1;
	}
}

void func_254(var uParam0)
{
	if (uParam0->f_12 == -1)
	{
		uParam0->f_12 = 5;
	}
	if (uParam0->f_12 > 0)
	{
		PED::_0xED9582B3DA8F02B4(uParam0->f_12);
	}
}

bool func_255()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return true;
	}
	else if (Global_1935630.f_12)
	{
		return true;
	}
	else if (PED::IS_PED_FATALLY_INJURED(Global_35))
	{
		return true;
	}
	else if (ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		return true;
	}
	return false;
}

void func_256(char[4] cParam0, int iParam1)
{
	if (cParam0->f_15 != iParam1)
	{
		cParam0->f_15 = iParam1;
	}
}

bool func_257()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return true;
	}
	return false;
}

int func_258(int iParam0)
{
	if (PED::_0x5C16855277819BBF() >= iParam0)
	{
		return 1;
	}
	return 0;
}

void func_259(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam3);
		}
	}
}

void func_260(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	if (iParam1 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

bool func_261(char* sParam0)
{
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && ANIMSCENE::_0x5D7BFDA2290B4E39(sParam0));
}

void func_262(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, 0, 51, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, -1f, -1f, -1f);
	}
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (iParam0 == 1 && !CAM::_0xA24C1D341C6E0D53(0, 0, 1))
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	if (iParam2 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	}
	if (iParam1 == 1)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_264(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

bool func_265()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed");
		}
	}
	return false;
}

int func_266(char[4] cParam0)
{
	return cParam0->f_15;
}

void func_267(var uParam0, char* sParam1)
{
	StringCopy(&(uParam0->f_2205), sParam1, 24);
}

void func_268(var uParam0, int iParam1)
{
	uParam0->f_12 = iParam1;
}

void func_269(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

bool func_270(float fParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0);
	}
	if (iVar0 > 0 && fParam0 <= (50f * 50f))
	{
		return true;
	}
	return false;
}

void func_271(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_272(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_273(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LSEMR";
		case 1:
			return "LSHNT";
		case 2:
			return "LSCFJ";
		case 3:
			return "LSUND";
		case 5:
			return "LSAM";
		case 6:
			return "LSAM2";
		case 4:
			return "LSSLD";
		case 7:
			return "LSHSC";
		case 8:
			return "LSHSS";
	}
	return "";
}

void func_275(char[4] cParam0)
{
	int iVar0;
	if (cParam0->f_13 == -1)
	{
		cParam0->f_13 = 8;
	}
	if (cParam0->f_13 != -1)
	{
		if (cParam0->f_13 < cParam0->f_12)
		{
			iVar0 = (cParam0->f_12 - cParam0->f_13);
			PED::_0x7D4E70A67A651C71(iVar0);
			cParam0->f_12 = -1;
		}
		if (cParam0->f_13 > 0)
		{
			PED::_0xED9582B3DA8F02B4(cParam0->f_13);
		}
	}
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LSM_WOMANCRY";
		case 1:
			return "LSM_HUNTER";
		case 2:
			return "LSM_CATFISH";
		case 3:
			return "LSM_UNDERTAKER";
		case 5:
			return "LSM_MINER_1";
		case 6:
			return "LSM_MINER_2";
		case 4:
			return "LSM_SOLDIER_1";
		case 7:
			return "LSM_HC_1";
		case 8:
			return "LSM_SELL_HORSE_1";
	}
	return "";
}

bool func_277(var uParam0)
{
	if (uParam0->f_1536)
	{
		return false;
	}
	return uParam0->f_1535;
}

bool func_278(var uParam0, int iParam1)
{
	return (uParam0->f_1430 && iParam1) != 0;
}

void func_279(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 - (uParam0->f_1430 && iParam1));
}

bool func_280(var uParam0, int iParam1)
{
	return (uParam0->f_1432.f_1 && iParam1) != 0;
}

void func_281(int* iParam0)
{
	struct<247> Var0;
	Var0 = 1;
	Var0.f_13 = 17;
	Var0.f_218 = 1097859072;
	Var0.f_219 = 1101004800;
	Var0.f_246 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 314);
}

bool func_282(int iParam0)
{
	return __LIB_0__::func_27(iLocal_16, iParam0);
}

bool func_283(int iParam0, float fParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		return false;
	}
	else if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		if (fParam1 == -1f)
		{
			fParam1 = __LIB_0__::func_94(iParam0, Global_36, 0);
		}
		if (fParam1 > fParam2)
		{
			return true;
		}
	}
	return false;
}

void func_284(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
}

void func_285(char[4] cParam0, int iParam1)
{
	cParam0->f_14 = iParam1;
}

float func_286(var uParam0)
{
	return uParam0->f_219;
}

void func_287(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/]));
		}
		uParam0->f_246[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_288(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_228);
	}
}

struct<8> func_289(var uParam0)
{
	return uParam0->f_230;
}

void func_290(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0xA2F8B3B5FEDFC100(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_291(var uParam0, int iParam1)
{
	uParam0->f_1449 = iParam1;
}

bool func_292(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_241[iVar0 /*18*/].f_17 == 1 && uParam0->f_241[iVar0 /*18*/].f_2 == 4) && uParam0->f_241[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_293(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 || iParam1);
}

void func_294(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1687);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1687);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_295(var uParam0, int iParam1)
{
	return (uParam0->f_1431 && iParam1) != 0;
}

void func_296(var uParam0)
{
	uParam0->f_1431 = 0;
}

bool func_297(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_782[uParam0->f_1450 /*41*/].f_14 >= uParam0->f_782[uParam0->f_1450 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_298(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_782[uParam0->f_1450 /*41*/].f_15 >= uParam0->f_782[uParam0->f_1450 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_299(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<8> func_300(var uParam0)
{
	return uParam0->f_238;
}

void func_301(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_230), sParam1, 64);
}

bool func_302(var uParam0, int iParam1)
{
	return (uParam0->f_223 && iParam1) != 0;
}

int func_303(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_228, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_228) * 1000f));
}

int func_304(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_228, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_228) * 1000f));
}

bool func_305(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_228, 0))
	{
		if (__LIB_0__::func_84(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_228) && __LIB_0__::func_84(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

Vector3 func_306(int iParam0)
{
	return Global_1392626[iParam0 /*32*/].f_24 + Global_1392626[iParam0 /*32*/].f_27 * Vector(0.5f, 0.5f, 0.5f);
}

struct<4> func_307(var uParam0)
{
	return uParam0->f_224;
}

void func_308(var uParam0, int iParam1)
{
	uParam0->f_1432.f_1 = (uParam0->f_1432.f_1 - (uParam0->f_1432.f_1 && iParam1));
}

void func_309(var uParam0, int iParam1)
{
	uParam0->f_1432.f_1 = (uParam0->f_1432.f_1 || iParam1);
}

void func_310(var uParam0, int iParam1)
{
	uParam0->f_1431 = (uParam0->f_1431 || iParam1);
}

void func_311(var uParam0, int iParam1)
{
	uParam0->f_1431 = (uParam0->f_1431 - (uParam0->f_1431 && iParam1));
}

void func_312(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_782[iParam1 /*41*/].f_28 = 1;
		uParam0->f_1450 = iParam1;
		uParam0->f_1454 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1535 = 1;
	}
}

int func_313(var uParam0)
{
	if (uParam0->f_1451 < 0 || uParam0->f_241[uParam0->f_1451 /*18*/].f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1288[uParam0->f_241[uParam0->f_1451 /*18*/].f_4 /*10*/].f_8;
}

void func_314(var uParam0, char[16] cParam1)
{
	uParam0->f_224 = { cParam1 };
}

Vector3 func_315(var uParam0)
{
	return uParam0->f_286;
}

void func_316(var uParam0, vector3 vParam1)
{
	uParam0->f_286 = { vParam1 };
}

void func_317(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_318(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_228, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_228, sParam1, iParam2, iParam3);
}

void func_319(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_225 = { Var1 };
	StringCopy(&(uParam0->f_225), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_241)
	{
		uParam0->f_241[iVar0 /*18*/] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1288)
	{
		uParam0->f_1288[iVar0 /*10*/] = { Var76 };
		iVar0++;
	}
	uParam0->f_1449 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_782)
	{
		uParam0->f_782[iVar0 /*41*/] = { Var35 };
		uParam0->f_1111[iVar0 /*22*/] = { Var86 };
		iVar0++;
	}
	uParam0->f_1450 = -1;
	uParam0->f_1531 = { Global_36 };
	uParam0->f_1534 = 0;
	uParam0->f_1535 = 0;
	uParam0->f_1454 = -1;
	uParam0->f_1455 = -1f;
	uParam0->f_1430 = 0;
	uParam0->f_1432 = 0;
	uParam0->f_1432.f_1 = 0;
	uParam0->f_1669 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
	}
}

void func_320(var uParam0, int iParam1)
{
	uParam0->f_1655.f_1 = 0;
	uParam0->f_1655.f_3 = iParam1;
}

bool func_321(var uParam0, int iParam1)
{
	bool bVar0;
	uParam0->f_1655.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1655.f_1), &(uParam0->f_1655));
	return bVar0;
}

bool func_322(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	uParam0->f_1655.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_1655));
	return bVar0;
}

bool func_323(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1655.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_FLOAT(uParam2, &(uParam0->f_1655));
	return uVar0;
}

bool func_324(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1655.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_STRING(uParam2, &(uParam0->f_1655));
	return uVar0;
}

bool func_325(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	uParam0->f_1655.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, &(uParam0->f_1655));
	return uVar0;
}

var func_326(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1655.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &(uParam0->f_1655));
	return uVar0;
}

bool func_327(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_241[iVar0 /*18*/].f_2 == 9 && uParam0->f_241[iVar0 /*18*/].f_4 == iParam1) && !__LIB_0__::func_129(&(uParam0->f_1288[iParam1 /*10*/]), 32)) && ((uParam0->f_241[iVar0 /*18*/].f_1 == 0 && !__LIB_0__::func_84(&(uParam0->f_241[iVar0 /*18*/]), 512)) || __LIB_0__::func_84(&(uParam0->f_241[iVar0 /*18*/]), 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_328(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_172(uParam0->f_1399[iVar0 /*15*/].f_12);
		iVar0++;
	}
}

void func_329(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1399[iVar0 /*15*/].f_11)
		{
			__LIB_0__::func_172(uParam0->f_1399[iVar0 /*15*/].f_12);
			switch (uParam0->f_1399[iVar0 /*15*/].f_9)
			{
				case 0:
					uParam0->f_1399[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_1399[iVar0 /*15*/], uParam0->f_1399[iVar0 /*15*/].f_6, uParam0->f_1399[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1399[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1399[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_1399[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_1399[iVar0 /*15*/], uParam0->f_1399[iVar0 /*15*/].f_6, uParam0->f_1399[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1399[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1399[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

bool func_330(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_241[iVar0 /*18*/].f_2 && uParam0->f_241[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_331(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_782[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[iVar0 /*41*/].f_22)) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_782[iVar0 /*41*/].f_22), sParam1)) && __LIB_0__::func_164(&(uParam0->f_782[iVar0 /*41*/]), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_332(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_241[iParam1 /*18*/].f_17 == 0 && __LIB_0__::func_78(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_241[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_241[iParam1 /*18*/].f_17 == 1 && __LIB_0__::func_78(uParam0) > 3) && __LIB_0__::func_78(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

bool func_333(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/] == iParam1)
		{
			if (__LIB_0__::func_84(&(uParam0->f_241[iVar0 /*18*/]), 4))
			{
				return true;
			}
			if (uParam0->f_241[iVar0 /*18*/].f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_334(var uParam0)
{
	return uParam0->f_289;
}

float func_335(var uParam0)
{
	return uParam0->f_292;
}

bool func_336(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_337(var uParam0)
{
	struct<8> Var0;
	uParam0->f_238 = { Var0 };
}

void func_338(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_246[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

bool func_339(int iParam0)
{
	if (__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_8, 4) || !__LIB_8__::func_779(1))
	{
		return true;
	}
	return false;
}

Vector3 func_340(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_241[iParam1 /*18*/].f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 17)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_241[iParam1 /*18*/].f_3 == uParam0->f_3[iVar0 /*13*/].f_3)
			{
				if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					return ENTITY::GET_ENTITY_COORDS(uParam0->f_3[iVar0 /*13*/].f_2, true, false);
				}
			}
			iVar0++;
		}
	}
	return 0f, 0f, 0f;
}

bool func_341(int iParam0)
{
	return __LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_8, 64);
}

void func_342(char[4] cParam0)
{
	if (cParam0->f_17 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		MAP::DISPLAY_RADAR(true);
	}
	cParam0->f_17 = 0;
	cParam0->f_17.f_1 = 0;
	__LIB_0__::func_37(&(cParam0->f_17.f_12));
}

Vector3 func_343(int iParam0)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return Global_36;
	}
	return Global_1392626[iParam0 /*32*/].f_24;
}

bool func_344(char[4] cParam0)
{
	if (!__LIB_0__::func_382(64))
	{
		return false;
	}
	if (__LIB_1__::func_927())
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return false;
	}
	return true;
}

void func_345(char[4] cParam0)
{
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 32))
	{
		if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, 0, -1f, -1f, -1f);
		}
	}
}

Vector3 func_346(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	switch (uParam0->f_782[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_782[iParam1 /*41*/].f_4 - uParam0->f_782[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { __LIB_0__::func_173(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!__LIB_0__::func_86(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_782[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_782[iParam1 /*41*/].f_7, true))
				{
					return vVar0[1 /*3*/];
				}
				else
				{
					return vVar0[0 /*3*/];
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if (uParam0->f_782[iParam1 /*41*/].f_13 < uParam0->f_782[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_782[iParam1 /*41*/].f_12 + (uParam0->f_782[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_782[iParam1 /*41*/].f_12 + uParam0->f_782[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_782[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_782[iParam1 /*41*/].f_11 + 5f))) };
			vVar0[0 /*3*/].f_2 = (vVar0[0 /*3*/].f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			if (!__LIB_0__::func_86(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_347(char[4] cParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(cParam0->f_32.f_4))
		{
			POPULATION::_0xA1CFB35069D23C23(cParam0->f_32.f_4);
			POPULATION::_0x74C2B3DC0B294102(cParam0->f_32.f_4);
			if (PED::_0x91A5F9CBEBB9D936(cParam0->f_2213[1]))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(cParam0->f_2213[1], false);
			}
			if (__LIB_10__::func_229(cParam0->f_32.f_4, &Var0))
			{
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 1, 1);
			}
		}
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 128))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(cParam0->f_32.f_4))
		{
			VOLUME::_DELETE_VOLUME(cParam0->f_32.f_4);
		}
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

void func_348(var uParam0, char* sParam1)
{
	int iVar0;
	if (__LIB_0__::func_84(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_224), {__LIB_0__::func_98("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_224), {__LIB_0__::func_98("cutscene@", sParam1, 1, 63)}, 4);
	}
	__LIB_0__::func_88(uParam0, 8192);
}

void func_349(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_0__::func_84(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4) && !__LIB_0__::func_138(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, __LIB_0__::func_93());
		__LIB_0__::func_88(uParam0, 8);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		__LIB_5__::func_457(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		__LIB_0__::func_88(uParam0, 16);
	}
}

void func_350(var uParam0)
{
	__LIB_0__::func_200(&(uParam0->f_1670));
}

int func_351(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2 && __LIB_0__::func_84(&(uParam0->f_241[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_352(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_353(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_228, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_354(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !__LIB_0__::func_125(uParam0->f_3[iVar0 /*13*/].f_2)) && __LIB_0__::func_154(uParam0->f_3[iVar0 /*13*/].f_10)) && !__LIB_4__::func_649(uParam0->f_3[iVar0 /*13*/].f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 0, false))
				{
					if (__LIB_0__::func_237(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if (uParam0->f_3[iVar0 /*13*/].f_11)
				{
					if (__LIB_0__::func_399(iVar1, 0, 0, 0) != uParam0->f_3[iVar0 /*13*/].f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_355(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_12)
		{
			__LIB_4__::func_653(&(uParam0->f_3[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

void func_356(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_357(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 103)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1655, iVar0, __LIB_4__::func_667(iVar0));
		iVar0++;
	}
}

bool func_358(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		uParam0->f_1687 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (((__LIB_4__::func_649(iParam1) && !uParam0->f_3[iVar0 /*13*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) == Global_35)
			{
				iParam1 = ENTITY::GET_ENTITY_MODEL(Global_35);
			}
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2) == iParam1)
			{
				if (!uParam0->f_3[iVar0 /*13*/])
				{
					uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
					*iParam2 = iVar0;
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687))
					{
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687);
					}
					return true;
				}
			}
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_140(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687);
						}
						return true;
					}
				}
			}
			if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_231(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687);
						}
						return true;
					}
				}
			}
		}
		else if (STREAMING::IS_MODEL_VALID(iParam1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9)) && MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, "^"))
		{
			if ((ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::IS_MODEL_A_PED(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_140(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_140(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687);
						}
						return true;
					}
				}
			}
			if ((ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::_0x274EE1B90CFA669E(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_231(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_231(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1687);
						}
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_359(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0 /*13*/].f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[iVar0 /*13*/].f_4)))
			{
				__LIB_0__::func_928(&(uParam0->f_1537), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), &(uParam0->f_3[iVar0 /*13*/].f_4), 0);
			}
		}
		iVar0++;
	}
}

bool func_360(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar12;
	int iVar13;
	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_241[iVar12 /*18*/].f_17 == 1 && uParam0->f_241[iVar12 /*18*/].f_2 == 9) && uParam0->f_241[iVar12 /*18*/].f_4 >= 0) && uParam0->f_241[iVar12 /*18*/] == iParam1)
		{
			iVar13 = uParam0->f_1288[uParam0->f_241[iVar12 /*18*/].f_4 /*10*/].f_8;
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar13) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar13, true, false)) && ANIMSCENE::_0x6F1F0B17109309DA(iVar13, __LIB_0__::func_731(Global_35)))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar13, __LIB_0__::func_731(Global_35), &vVar0, false, 0, 2))
				{
					if (!__LIB_0__::func_86(vVar0))
					{
						return true;
					}
				}
			}
		}
		iVar12++;
	}
	return false;
}

void func_361(int iParam0)
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
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_0__::func_45(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_0__::func_45(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_0__::func_45(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_0__::func_45(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_0__::func_45(sVar3, 10000, 0, 0, 0, 1);
		}
		__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_362(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_40.f_1094 - 1))
		{
			if (Global_40.f_450[iVar0] == 92)
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (iParam0 == 3)
	{
		if (__LIB_3__::func_751(21))
		{
			return true;
		}
	}
	return false;
}

bool func_363(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != __LIB_10__::func_243(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_364(char[4] cParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	return __LIB_1__::func_104(cParam0, cVar0, 0, -1, bParam2, 0);
}

void func_365(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_1635));
}

void func_366(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	var uVar0;
	var uVar7;
	int iVar14;
	float fVar15;
	__LIB_4__::func_672(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35))), (2f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35))), 0f);
	__LIB_4__::func_672(&uVar7, 1f, vParam3, (-2f * BUILTIN::SIN(fParam6)), (2f * BUILTIN::COS(fParam6)), 0f);
	if (MISC::ABSF(uParam0->f_782[iParam1 /*41*/].f_12) == MISC::ABSF(uParam0->f_782[iParam1 /*41*/].f_13))
	{
		if (MISC::ABSF(uParam0->f_782[iParam1 /*41*/].f_12) >= 90f)
		{
			fVar15 = 180f;
		}
		else
		{
			fVar15 = 90f;
		}
	}
	else
	{
		fVar15 = (uParam0->f_782[iParam1 /*41*/].f_12 - uParam0->f_782[iParam1 /*41*/].f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if (uParam0->f_782[iParam1 /*41*/].f_12 < uParam0->f_782[iParam1 /*41*/].f_13)
		{
			fVar15 = (uParam0->f_782[iParam1 /*41*/].f_12 + MISC::ABSF(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_782[iParam1 /*41*/].f_13 + MISC::ABSF(fVar15));
		}
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
	}
	*uParam7 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar15) * (uParam0->f_782[iParam1 /*41*/].f_11 / 2f)), (BUILTIN::SIN(fVar15) * (uParam0->f_782[iParam1 /*41*/].f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(uParam2[iVar14 /*3*/]) = { __LIB_4__::func_792(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / BUILTIN::TO_FLOAT(5))) };
		iVar14++;
	}
}

int func_367()
{
	return __LIB_10__::func_243(__LIB_4__::func_533());
}

int func_368(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_10__::func_247(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_369(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_10__::func_247(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_370(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_10__::func_247(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_371()
{
	if (!__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1) && __LIB_8__::func_779(1))
	{
		return true;
	}
	return false;
}

bool func_372(var uParam0, int iParam1)
{
	var uVar0;
	if (__LIB_4__::func_641())
	{
		return true;
	}
	if (__LIB_1__::func_750(&uVar0))
	{
		return true;
	}
	if ((__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 0, 0)) && !__LIB_0__::func_274(&(uParam0->f_782[iParam1 /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_782[iParam1 /*41*/]), 64))
	{
		return true;
	}
	return false;
}

bool func_373(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
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
			if (__LIB_2__::func_968(iParam0, uParam2))
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
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
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
				if (__LIB_2__::func_971(iParam0, uParam2))
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
			if (__LIB_2__::func_833(uParam2, iParam0))
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
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
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

void func_374(char[4] cParam0)
{
	switch (cParam0->f_17)
	{
		case 0:
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1392626[*cParam0 /*32*/].f_24, true) > cParam0->f_17.f_5)
				{
					if (__LIB_0__::func_75(&(cParam0->f_17.f_12)))
					{
						__LIB_0__::func_37(&(cParam0->f_17.f_12));
					}
				}
				cParam0->f_17 = 1;
			}
			else
			{
				cParam0->f_17 = 2;
				return;
			}
			break;
		case 1:
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (__LIB_9__::func_419(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
			{
				cParam0->f_17 = 2;
				return;
			}
			else if (PED::IS_PED_ON_FOOT(Global_35))
			{
				cParam0->f_17 = 2;
				return;
			}
			break;
		case 2:
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && !__LIB_0__::func_163(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !__LIB_0__::func_163(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_375(int iParam0)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	__LIB_8__::func_985(iParam0);
	__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = __LIB_0__::func_23();
		__LIB_1__::func_446(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	Global_40.f_9052.f_1[iParam0] = __LIB_0__::func_23();
	__LIB_1__::func_446(&(Global_40.f_9052.f_1[iParam0]), 0, 0, 2, 0, 0, 0, 0);
	__LIB_1__::func_645(Global_1392626[iParam0 /*32*/].f_3);
	__LIB_1__::func_242(Global_1392626[iParam0 /*32*/].f_3, 0);
}

void func_376(int iParam0)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		__LIB_8__::func_985(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (__LIB_0__::func_746(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		__LIB_1__::func_559(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

void func_377(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (__LIB_4__::func_637(&(uParam0->f_1399[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!__LIB_0__::func_1(uParam0->f_1399[iParam1 /*15*/].f_10, 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1669)))
				{
					__LIB_5__::func_386(uParam0->f_1669, 0);
					__LIB_4__::func_666(&(uParam0->f_1399[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_1399[iParam1 /*15*/].f_10, 256))
			{
				if (!__LIB_4__::func_795())
				{
					__LIB_4__::func_666(&(uParam0->f_1399[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				__LIB_4__::func_666(&(uParam0->f_1399[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!__LIB_4__::func_790())
			{
				__LIB_4__::func_666(&(uParam0->f_1399[iParam1 /*15*/]), 0);
			}
			break;
	}
}

void func_378(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;
	if (__LIB_4__::func_513() != iParam9)
	{
		__LIB_0__::func_304(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	__LIB_10__::func_251(Global_1392626[iParam0 /*32*/].f_3, Var0, Var4, iParam9, iParam10);
}

void func_379(int iParam0)
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
				if (__LIB_1__::func_335(-525676072, &iVar1))
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
		__LIB_10__::func_252(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_380(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_10__::func_252(50);
			}
			else
			{
				__LIB_10__::func_252(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_10__::func_252(51);
			}
			else
			{
				__LIB_10__::func_252(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
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
			__LIB_10__::func_252(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

float func_381(var uParam0)
{
	return 1000f;
}

void func_382()
{
	STREAMING::REQUEST_MODEL(joaat("SCRIPTEDBALL"), false);
}

int func_383(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return 0;
	}
	return Global_20710[iParam0 /*45*/].f_1;
}

void func_384(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (cParam0->f_14 == -1)
	{
		cParam0->f_14 = cParam0->f_13;
	}
	if (cParam0->f_14 >= 0)
	{
		iVar0 = cParam0->f_12;
		iVar1 = __LIB_10__::func_266(cParam0);
		if (iVar1 == 1 || iVar1 == 0)
		{
			iVar0 = cParam0->f_13;
		}
		if (cParam0->f_14 < iVar0)
		{
			iVar2 = (iVar0 - cParam0->f_14);
			PED::_0x7D4E70A67A651C71(iVar2);
			cParam0->f_13 = -1;
			cParam0->f_12 = -1;
		}
		if (cParam0->f_14 > 0)
		{
			PED::_0xED9582B3DA8F02B4(cParam0->f_14);
		}
	}
}

void func_385(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 297, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, 330, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
		}
	}
}

void func_386(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;
	if (__LIB_0__::func_81(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1454;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_782[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_782[iVar0 /*41*/].f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_782[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_782[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1641);
		if (bVar4)
		{
			vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1641) };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_782[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_782[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_782[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_782[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668))
			{
				__LIB_10__::func_293(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1668 == iVar9)
			{
				__LIB_10__::func_293(uParam0, 65536);
				return;
			}
		}
		__LIB_10__::func_279(uParam0, 65536);
	}
}

bool func_387(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::_0xEF2D9ED7CE684F08(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

bool func_388(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return (PED::_0xE4C11F104620DDCE(iParam0, 0) || PED::_0xE4C11F104620DDCE(iParam0, 1));
	}
	return true;
}

struct<8> func_389(vector3 vParam0, vector3 vParam3, int iParam6)
{
	struct<8> Var0;
	Var0.f_1 = { vParam0 };
	Var0.f_4 = { vParam3 };
	Var0.f_7 = iParam6;
	return Var0;
}

int func_390(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_391(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2));
				if (__LIB_10__::func_278(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false, true);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), true);
				}
			}
		}
		iVar0++;
	}
}

void func_392(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_10__::func_325(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (__LIB_10__::func_325(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_10__::func_325(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_10__::func_325(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_10__::func_325(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

void func_393(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_10__::func_278(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_782[iVar0 /*41*/].f_29)
		{
			uParam0->f_782[iVar0 /*41*/].f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_782[iVar0 /*41*/].f_1, -uParam0->f_1654, uParam0->f_1651) };
			vVar1 = { uParam0->f_782[iVar0 /*41*/].f_7 - uParam0->f_782[iVar0 /*41*/].f_1 };
			vVar1 = { vVar1 + uParam0->f_1651 };
			uParam0->f_782[iVar0 /*41*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_782[iVar0 /*41*/].f_1, -uParam0->f_1654, vVar1) };
			uParam0->f_782[iVar0 /*41*/].f_12 = (uParam0->f_782[iVar0 /*41*/].f_12 + uParam0->f_1654);
			uParam0->f_782[iVar0 /*41*/].f_13 = (uParam0->f_782[iVar0 /*41*/].f_13 + uParam0->f_1654);
			if (uParam0->f_782[iVar0 /*41*/].f_12 > 180f)
			{
				uParam0->f_782[iVar0 /*41*/].f_12 = (-180f + (MISC::ABSF(uParam0->f_782[iVar0 /*41*/].f_12) - 180f));
			}
			else if (uParam0->f_782[iVar0 /*41*/].f_12 < -180f)
			{
				uParam0->f_782[iVar0 /*41*/].f_12 = (180f - (MISC::ABSF(uParam0->f_782[iVar0 /*41*/].f_12) - 180f));
			}
			if (uParam0->f_782[iVar0 /*41*/].f_13 > 180f)
			{
				uParam0->f_782[iVar0 /*41*/].f_13 = (-180f + (MISC::ABSF(uParam0->f_782[iVar0 /*41*/].f_13) - 180f));
			}
			else if (uParam0->f_782[iVar0 /*41*/].f_13 < -180f)
			{
				uParam0->f_782[iVar0 /*41*/].f_13 = (180f - (MISC::ABSF(uParam0->f_782[iVar0 /*41*/].f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1399[iVar0 /*15*/].f_11)
		{
			uParam0->f_1399[iVar0 /*15*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1399[iVar0 /*15*/], -uParam0->f_1654, uParam0->f_1651) };
			uParam0->f_1399[iVar0 /*15*/].f_6.f_2 = (uParam0->f_1399[iVar0 /*15*/].f_6.f_2 + uParam0->f_1654);
		}
		iVar0++;
	}
	__LIB_10__::func_279(uParam0, 8388608);
}

void func_394(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	__LIB_0__::func_172(uParam0->f_1641);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1641 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630.f_12)
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1641, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_10__::func_279(uParam0, 1048576);
	__LIB_10__::func_279(uParam0, 2097152);
}

void func_395(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return;
	}
	__LIB_0__::func_172(uParam0->f_1641);
	MISC::GET_MODEL_DIMENSIONS(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (VEHICLE::_IS_DRAFT_VEHICLE(iVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), iVar14);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_1641 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1641, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_10__::func_293(uParam0, 2097152);
	__LIB_10__::func_279(uParam0, 1048576);
}

void func_396(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { __LIB_10__::func_289(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_228, sParam1);
	}
}

int func_397(int iParam0, char* sParam1, Vector3* vParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			bVar1 = false;
		}
		else
		{
			bVar1 = true;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, bVar1, false) };
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, vVar2, &iVar0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iVar0, vParam2))
			{
				return iVar0;
			}
		}
	}
	return iVar0;
}

Vector3 func_398(var uParam0)
{
	if (__LIB_10__::func_278(uParam0, 8))
	{
		return uParam0->f_782[uParam0->f_1450 /*41*/].f_7;
	}
	if (uParam0->f_1454 >= 0)
	{
		return uParam0->f_782[uParam0->f_1454 /*41*/].f_7;
	}
	return 0f, 0f, 0f;
}

int func_399(var uParam0)
{
	__LIB_9__::func_590(&(uParam0->f_2041));
	__LIB_10__::func_271(&(uParam0->f_2052));
	HUD::_TEXT_DATABASE_REQUEST("LOAN");
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)))
	{
	}
	else
	{
		HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_2205));
	}
	if (((__LIB_10__::func_272(&(uParam0->f_2041)) && __LIB_10__::func_273(&(uParam0->f_2052))) && HUD::_TEXT_DATABASE_HAS_LOADED("LOAN")) && (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)) || HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_2205))))
	{
		return 1;
	}
	return 0;
}

void func_400(char[4] cParam0)
{
	char cVar0[64];
	struct<4> Var8;
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(cParam0->f_32.f_4) && !__LIB_0__::func_86(cParam0->f_32.f_5))
	{
		StringCopy(&cVar0, __LIB_10__::func_276(*cParam0), 64);
		StringConCat(&cVar0, ".VolRestrictCutscene", 64);
		cParam0->f_32.f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(cParam0->f_32.f_5, 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(cParam0->f_32.f_4))
	{
		POPULATION::_0xB56D41A694E42E86(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		cParam0->f_2213[1] = PED::_0x4C39C95AE5DB1329(cParam0->f_32.f_4, 0, 15);
		if (__LIB_10__::func_229(cParam0->f_32.f_4, &Var8))
		{
			PATHFIND::SET_ROADS_IN_AREA(Var8, Var8.f_3, 0, 1, 0);
		}
	}
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

void func_401(char[4] cParam0, vector3 vParam1)
{
	if (!__LIB_0__::func_86(vParam1))
	{
		cParam0->f_32.f_5 = { vParam1 };
	}
	else
	{
		cParam0->f_32.f_5 = { __LIB_10__::func_343(*cParam0) };
	}
}

void func_402(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_0__::func_137() };
	__LIB_10__::func_301(uParam0, &Var0);
}

struct<8> func_403(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_10__::func_300(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { __LIB_0__::func_134() };
	}
	return Var0;
}

void func_404(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_246[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_230 };
			uParam0->f_246[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	__LIB_10__::func_301(uParam0, sParam1);
	__LIB_10__::func_288(uParam0, 2097152, 1);
	__LIB_0__::func_88(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_228, sParam1, true);
}

void func_405(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (__LIB_0__::func_84(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			__LIB_0__::func_136(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (__LIB_0__::func_84(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		__LIB_10__::func_288(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	__LIB_10__::func_288(uParam0, 16, 1);
}

void func_406(var uParam0)
{
	bool bVar0;
	if (!__LIB_10__::func_278(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(__LIB_0__::func_199(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_0__::func_199(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			__LIB_10__::func_293(uParam0, 134217728);
		}
	}
}

bool func_407(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_84(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_228, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_228, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_228, "ExportCamera") && bParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_228))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

void func_408(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_228, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_10__::func_318(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						__LIB_0__::func_142(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_409(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1288[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1288[iVar0 /*10*/]), 2)) && !__LIB_0__::func_129(&(uParam0->f_1288[iVar0 /*10*/]), 16)) && __LIB_10__::func_327(uParam0, iVar0))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1288[iVar0 /*10*/].f_8))
			{
				uParam0->f_1288[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1288[iVar0 /*10*/]), 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1288[iVar0 /*10*/].f_8);
				return false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1288[iVar0 /*10*/].f_8, false))
			{
				return false;
			}
			if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1288[iVar0 /*10*/].f_8, "pl_breakout"))
			{
				__LIB_4__::func_647(&(uParam0->f_1288[iVar0 /*10*/]), 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1288[iVar0 /*10*/].f_8);
			__LIB_4__::func_647(&(uParam0->f_1288[iVar0 /*10*/]), 16);
		}
		iVar0++;
	}
	return true;
}

void func_410(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1288[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1288[iVar0 /*10*/]), 2))
		{
			iVar1 = 0;
			if (__LIB_10__::func_327(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1288[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1288[iVar0 /*10*/]), iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, __LIB_0__::func_166(), 64);
	StringCopy(&(Var2.f_8), __LIB_4__::func_616(), 64);
	uParam0->f_1474 = { Var2 };
	uParam0->f_1497 = { Var2 };
	if (!__LIB_10__::func_280(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(__LIB_0__::func_166());
		__LIB_10__::func_309(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1111[iVar0 /*22*/].f_2), __LIB_0__::func_166()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				CAM::_0x6A4D224FC7643941(&(uParam0->f_1111[iVar0 /*22*/].f_2));
				uParam0->f_1111[iVar0 /*22*/].f_21 = 1;
			}
		}
		iVar0++;
	}
}

void func_411(var uParam0)
{
	__LIB_10__::func_328(uParam0);
	__LIB_10__::func_329(uParam0);
}

void func_412(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_1454 < 0)
	{
		return;
	}
	if ((uParam0->f_1665 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667)) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_1667))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_1667, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || __LIB_0__::func_94(iVar2, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1) < __LIB_0__::func_94(iVar1, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!__LIB_10__::func_278(uParam0, 8192))
		{
			if (__LIB_0__::func_94(iVar1, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1) <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f) || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1667) != 5f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 5f);
				}
			}
			else if ((!__LIB_1__::func_533(512) || __LIB_4__::func_635(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1667) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 50f);
			}
		}
	}
}

bool func_413(var uParam0)
{
	if (uParam0->f_1454 < 0)
	{
		return false;
	}
	if (__LIB_10__::func_278(uParam0, 33554432))
	{
		return false;
	}
	if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1641) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1642))
	{
		return true;
	}
	if (__LIB_10__::func_278(uParam0, 65536))
	{
		return true;
	}
	return false;
}

int func_414(var uParam0, int iParam1)
{
	if (uParam0->f_241[iParam1 /*18*/].f_1 > uParam0->f_1449)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2))
	{
	}
	if (uParam0->f_1449 < 0 || uParam0->f_1449 > 6)
	{
		return 0;
	}
	if (uParam0->f_241[iParam1 /*18*/].f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_241[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		return 1;
	}
	if (!__LIB_10__::func_278(uParam0, 4096) && uParam0->f_1662)
	{
		return 0;
	}
	if (Global_1430231.f_4)
	{
		return 0;
	}
	if (uParam0->f_241[iParam1 /*18*/] != uParam0->f_1450)
	{
		return 0;
	}
	if (__LIB_0__::func_78(uParam0) > 3 && uParam0->f_241[iParam1 /*18*/] != uParam0->f_1450)
	{
		return 0;
	}
	if ((((__LIB_0__::func_78(uParam0) > 3 && uParam0->f_241[iParam1 /*18*/].f_17 == 1) && __LIB_4__::func_576(uParam0) != 11) && __LIB_10__::func_292(uParam0, uParam0->f_1450)) && uParam0->f_241[iParam1 /*18*/].f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_241[iParam1 /*18*/].f_2 == 9 && uParam0->f_241[iParam1 /*18*/].f_4 >= 0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8, __LIB_0__::func_731(Global_35)))
		{
			if (__LIB_0__::func_129(&(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/]), 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_129(&(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/]), 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_415(int iParam0)
{
	if (!__LIB_10__::func_235(iParam0, 4))
	{
		__LIB_9__::func_969(iParam0, 4);
		__LIB_10__::func_230(iParam0, 2);
	}
}

void func_416(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_228, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 0, 1, 0)))
						{
							if (!__LIB_10__::func_336(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 1, 1, 0)))
						{
							if (!__LIB_10__::func_336(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_417(var uParam0)
{
	StringCopy(&(uParam0->f_224), "", 32);
	__LIB_10__::func_337(uParam0);
	__LIB_0__::func_487(uParam0, 0f, 0f, 0f);
	__LIB_10__::func_338(uParam0);
}

int func_418(int iParam0)
{
	if (__LIB_10__::func_339(iParam0))
	{
		return 1673015813;
	}
	return -936216634;
}

void func_419(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_10__::func_325(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_10__::func_325(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_10__::func_325(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_10__::func_325(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (__LIB_10__::func_325(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (__LIB_10__::func_325(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (__LIB_10__::func_325(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (__LIB_10__::func_325(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (__LIB_10__::func_325(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (__LIB_10__::func_325(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (__LIB_10__::func_325(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (__LIB_10__::func_325(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (__LIB_10__::func_325(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (__LIB_10__::func_325(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

void func_420(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	__LIB_0__::func_172(uParam0->f_1641);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1648 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1648 * FtoV(__LIB_4__::func_634(iParam1)) };
	uParam0->f_1641 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1641, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_10__::func_293(uParam0, 1048576);
	__LIB_10__::func_279(uParam0, 2097152);
}

void func_421(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_10__::func_278(uParam0, 64) && __LIB_0__::func_81(uParam0) != 0)
	{
		return;
	}
	if (!bParam1)
	{
		iVar0 = __LIB_0__::func_399(Global_35, 0, 0, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0))
		{
			if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
			{
				WEAPON::_0xCEF4C65DE502D367(Global_35, 1, 0, 1, 0);
				__LIB_10__::func_293(uParam0, 256);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
		}
		iVar0 = __LIB_0__::func_399(Global_35, 0, 1, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0))
		{
			if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
			{
				WEAPON::_0xCEF4C65DE502D367(Global_35, 1, 1, 1, 0);
				__LIB_10__::func_293(uParam0, 256);
			}
		}
	}
	else
	{
		__LIB_4__::func_791(0);
		__LIB_4__::func_791(1);
	}
}

void func_422(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	vector3 vVar0;
	if (bParam2)
	{
		TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, *(uParam3[0 /*3*/]), 1), 0);
	}
	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	if (__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/]), 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_40, 0);
	}
	else
	{
		vVar0 = { __LIB_10__::func_340(uParam0, iParam1) };
		if (!__LIB_0__::func_86(vVar0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
	}
}

void func_423(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;
	vVar0 = { __LIB_10__::func_340(uParam0, iParam1) };
	if (!__LIB_0__::func_86(vVar0))
	{
		if (bParam2)
		{
			TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, vParam3, 1), 0);
		}
		fVar3 = __LIB_0__::func_152(vParam3, vVar0, 1);
		if (__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar3 = uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_40;
		}
		if (__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 256))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam3, 1f, 20000, fVar3, 1056964608 /* Float: 0.5f */, 0);
		}
		else
		{
			iVar4 = 4;
			iVar4 |= 4194304;
			fVar3 = (fVar3 % 360f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, iVar4, fVar3);
		}
		if (!__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/]), 4) && !__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/]), 2))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
		else
		{
			TASK::TASK_ACHIEVE_HEADING(0, fVar3, 0);
			TASK::TASK_STAND_STILL(0, -1);
		}
	}
	else
	{
		fVar5 = 40000f;
		if (__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar5 = uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_40;
		}
		fVar5 = (fVar5 % 360f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

char* func_424(int iParam0)
{
	char* sVar0;
	if (!__LIB_9__::func_768(iParam0))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 1:
			sVar0 = "enter_2_hold";
			break;
		case 2:
			sVar0 = "hold";
			break;
		case 3:
			sVar0 = "hold_2_look";
			break;
		case 4:
			sVar0 = "look";
			break;
		case 5:
			sVar0 = "look_2_hold";
			break;
		case 6:
			sVar0 = "hold_2_exit";
			break;
	}
	return sVar0;
}

void func_425(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, float fParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = fParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

void func_426(int iParam0)
{
	int iVar0;
	if (iParam0 < 0)
	{
		return;
	}
	if (!__LIB_0__::func_86(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		__LIB_1__::func_222(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20f, 1, 0);
	}
	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0f;
	if (__LIB_5__::func_733(iParam0, 8388608))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 8388608;
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		if (Global_1393237.f_11[iParam0 /*30*/].f_17 != __LIB_1__::func_976())
		{
		}
		Global_1393237.f_11[iParam0 /*30*/].f_17 = __LIB_1__::func_976();
	}
	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[iVar0] = 0;
		iVar0++;
	}
	__LIB_3__::func_533(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[0]));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[1]));
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1393237.f_11[iParam0 /*30*/].f_21))
	{
		__LIB_1__::func_222(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);
	}
}

bool func_427(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (__LIB_1__::func_996(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = __LIB_1__::func_351(iParam2);
		if (__LIB_2__::func_958(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > __LIB_1__::func_352(iParam2)
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_428(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = __LIB_1__::func_353(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (__LIB_2__::func_832(iParam2, iParam1))
			{
				__LIB_2__::func_89(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_429(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	if (iParam2->f_12 < IntToFloat(__LIB_1__::func_354(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (__LIB_2__::func_832(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_430(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = __LIB_1__::func_355(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (__LIB_1__::func_997(iParam1, vVar0, vVar4))
					{
						__LIB_2__::func_89(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (__LIB_1__::func_997(iParam1, vVar0, vVar7))
					{
						__LIB_2__::func_89(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

Vector3 func_431(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	MemCopy(&uVar0, {__LIB_10__::func_307(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_229))
	{
		uParam0->f_229 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), 0, 0, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_229, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_229, __LIB_0__::func_731(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_229, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_229);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_432(var uParam0)
{
	int iVar0;
	__LIB_10__::func_359(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_782[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[iVar0 /*41*/].f_22)) && __LIB_10__::func_330(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_782[iVar0 /*41*/]), 1))
			{
				if (!__LIB_10__::func_331(uParam0, &(uParam0->f_782[iVar0 /*41*/].f_22)))
				{
					__LIB_1__::func_104(&(uParam0->f_1537), uParam0->f_782[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_782[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

bool func_433(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	if (__LIB_10__::func_278(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1454 < 0 || uParam0->f_1454 >= 8)
	{
		return false;
	}
	if (!uParam0->f_782[uParam0->f_1454 /*41*/].f_29)
	{
		return false;
	}
	if (!__LIB_10__::func_278(uParam0, 4096) && uParam0->f_1662)
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (uParam0->f_782[uParam0->f_1454 /*41*/].f_29)
	{
		if (uParam0->f_782[uParam0->f_1454 /*41*/] == 0)
		{
			vVar3 = { uParam0->f_782[uParam0->f_1454 /*41*/].f_4 - uParam0->f_782[uParam0->f_1454 /*41*/].f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (__LIB_4__::func_788(&vVar0, uParam0->f_1531, Global_36, vVar6, uParam0->f_782[uParam0->f_1454 /*41*/].f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_782[uParam0->f_1454 /*41*/].f_1)
				{
					if (vVar0.x > uParam0->f_782[uParam0->f_1454 /*41*/].f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_782[uParam0->f_1454 /*41*/].f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_1)
					{
						if (vVar0.y > uParam0->f_782[uParam0->f_1454 /*41*/].f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_782[uParam0->f_1454 /*41*/].f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 + uParam0->f_782[uParam0->f_1454 /*41*/].f_10)) || (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && (uParam0->f_1663 || uParam0->f_1665)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1454;
					return true;
				}
			}
		}
		else if (__LIB_10__::func_278(uParam0, 8))
		{
			*iParam1 = uParam0->f_1450;
			return true;
		}
	}
	return false;
}

void func_434(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56, false);
	}
	__LIB_10__::func_310(uParam0, 4);
	HUD::_HIDE_HUD_COMPONENT(-1679307491);
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if ((__LIB_0__::func_81(uParam0) == 0 && uParam0->f_1450 >= 0) && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		__LIB_10__::func_309(uParam0, 64);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	__LIB_3__::func_739(0);
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(0);
	}
}

void func_435(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		__LIB_1__::func_544(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		__LIB_1__::func_544(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		__LIB_2__::func_161(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_436(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_1(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (__LIB_0__::func_1(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1663)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1664, 214, true);
	}
	if (uParam0->f_1662 && __LIB_10__::func_278(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (__LIB_0__::func_1(uParam1, 262144) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	__LIB_4__::func_706(&iVar1, uParam2);
	__LIB_4__::func_794(&(uParam0->f_1670), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!__LIB_10__::func_278(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	__LIB_4__::func_614();
	__LIB_10__::func_310(uParam0, 1);
}

void func_437(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1288[iVar0 /*10*/].f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1288[iVar0 /*10*/].f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1288[iVar0 /*10*/].f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1288[iVar0 /*10*/].f_8, "pl_breakout")) && !uParam0->f_1535)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1288[iVar0 /*10*/].f_8, "pl_breakout", true);
					}
				}
				else if (__LIB_10__::func_278(uParam0, 32768) && __LIB_0__::func_129(&(uParam0->f_1288[iVar0 /*10*/]), 128))
				{
					__LIB_4__::func_712(uParam0->f_1288[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1288[iVar0 /*10*/].f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1288[iVar0 /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1288[iVar0 /*10*/].f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_438(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = __LIB_3__::func_441(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = __LIB_9__::func_706(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = __LIB_9__::func_673(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = __LIB_0__::func_36();
		}
		else if ((__LIB_0__::func_36() - *iParam5) > bParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*fParam6 = 1;
	}
	return false;
}

bool func_439(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1288[iVar0 /*10*/].f_8))
		{
			if (!__LIB_0__::func_129(&(uParam0->f_1288[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1288[iVar0 /*10*/].f_8, false))
				{
					__LIB_5__::func_124(uParam0, uParam0->f_1288[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1288[iVar0 /*10*/].f_8);
					bVar1 = false;
					__LIB_4__::func_647(&(uParam0->f_1288[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1288[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_782)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_782[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_782[iVar0 /*41*/].f_19));
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_782[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (__LIB_10__::func_280(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && uParam0->f_1111[iVar0 /*22*/].f_21) && !CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_86(uParam0->f_1651) || uParam0->f_1654 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1288[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1288[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1288[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1288[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1654, uParam0->f_1651) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1654);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1288[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_440(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = __LIB_10__::func_231(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!__LIB_0__::func_181())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_0__::func_935(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_0__::func_896(10, 1);
	}
}

void func_441(int iParam0)
{
	if (!__LIB_10__::func_235(iParam0, 2))
	{
		if (!__LIB_10__::func_371())
		{
			if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
			{
				MAP::_BLIP_SET_MODIFIER(Global_1392626[iParam0 /*32*/], 580546400);
			}
		}
		__LIB_9__::func_969(iParam0, 2);
	}
}

void func_442(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;
	if (!__LIB_10__::func_372(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_782[iParam1 /*41*/].f_12) * uParam0->f_782[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_782[iParam1 /*41*/].f_12) * uParam0->f_782[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_782[iParam1 /*41*/].f_13) * uParam0->f_782[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_782[iParam1 /*41*/].f_13) * uParam0->f_782[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_782[iParam1 /*41*/].f_12) * uParam0->f_782[iParam1 /*41*/].f_11) + uParam0->f_782[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_782[iParam1 /*41*/].f_12) * uParam0->f_782[iParam1 /*41*/].f_11) + uParam0->f_782[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_782[iParam1 /*41*/].f_13) * uParam0->f_782[iParam1 /*41*/].f_11) + uParam0->f_782[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_782[iParam1 /*41*/].f_13) * uParam0->f_782[iParam1 /*41*/].f_11) + uParam0->f_782[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1663 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1641)) && __LIB_0__::func_266(uParam0->f_1664, uParam0->f_782[iParam1 /*41*/].f_1, uParam0->f_782[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_1641) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1641) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1664), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1664), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1664), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1664), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_782[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_782[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_782[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_782[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_782[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_782[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_782[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_782[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (fVar29[iVar40] < fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { vVar16[iVar41 /*3*/] };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*fParam8 = __LIB_0__::func_152(uParam0->f_782[iParam1 /*41*/].f_1, vVar0, 0);
	if (*fParam8 < uParam0->f_782[iParam1 /*41*/].f_12)
	{
		*fParam8 = (*fParam8 + 360f);
	}
	if (uParam0->f_782[iParam1 /*41*/].f_13 < uParam0->f_782[iParam1 /*41*/].f_12)
	{
		*fParam9 = (uParam0->f_782[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*fParam9 = uParam0->f_782[iParam1 /*41*/].f_13;
	}
	if (*fParam8 < *fParam9)
	{
		vVar42 = { uParam0->f_782[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1642 = { vVar42 + Vector(0f, (BUILTIN::COS(*fParam8) * uParam0->f_782[iParam1 /*41*/].f_11), (BUILTIN::SIN(*fParam8) * uParam0->f_782[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_1645 = { vVar42 + Vector(0f, ((BUILTIN::COS(*fParam8) * uParam0->f_782[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*fParam8) * uParam0->f_782[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

void func_443(int iParam0)
{
	if (__LIB_10__::func_339(iParam0))
	{
		__LIB_10__::func_233(iParam0, -1986290853);
		__LIB_10__::func_233(iParam0, 495758964);
	}
	if (__LIB_10__::func_371())
	{
		__LIB_10__::func_233(iParam0, 847579139);
	}
}

void func_444(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			__LIB_9__::func_355(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			__LIB_9__::func_355(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			__LIB_9__::func_355(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_01"), __LIB_1__::func_803(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_02"), __LIB_1__::func_803(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_03"), __LIB_1__::func_803(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_04"), __LIB_1__::func_803(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_05"), __LIB_1__::func_803(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_445(int iParam0)
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
	__LIB_9__::func_355(39, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_446(int iParam0)
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
	__LIB_9__::func_355(49, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_447(int iParam0, int iParam1)
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
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
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_448(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_10__::func_380(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_10__::func_380(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

struct<16> func_449(char* sParam0, char* sParam1)
{
	struct<16> Var0;
	Var0.f_1 = sParam0;
	Var0.f_15 = sParam1;
	return Var0;
}

void func_450(var uParam0, int iParam1)
{
	uParam0->f_223 = (uParam0->f_223 || iParam1);
}

int func_451(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_452(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_453(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 17)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_454(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_455(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_289 = { vParam1 };
	uParam0->f_292 = iParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_10__::func_288(uParam0, 2048, 1);
	}
	else
	{
		__LIB_0__::func_88(uParam0, 2048);
		if (bParam5)
		{
			__LIB_0__::func_88(uParam0, -2147483648);
		}
	}
}

bool func_456(var uParam0)
{
	return AUDIO::_0xD89504D9D7D5057D(uParam0);
}

void func_457(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), iParam2);
		}
		iVar0++;
	}
}

void func_458(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	uParam0->f_17.f_9 = { vParam7 };
	uParam0->f_17.f_5 = (vParam7.x + 2f);
	__LIB_3__::func_139(&(uParam0->f_17.f_8), vParam1, vParam4, uParam0->f_17.f_9, "LS CORE Dismount area");
}

void func_459(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_10__::func_403(uParam0) };
	__LIB_10__::func_301(uParam0, &Var0);
}

bool func_460(var uParam0, int iParam1)
{
	if (__LIB_0__::func_84(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_228, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_228, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_228, "ExportCamera") && iParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_228))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

void func_461(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar0 /*9*/])))
		{
			__LIB_10__::func_396(uParam0, &(uParam0->f_246[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { __LIB_0__::func_137() };
	__LIB_10__::func_396(uParam0, &Var1);
	Var1 = { __LIB_10__::func_403(uParam0) };
	__LIB_10__::func_396(uParam0, &Var1);
}

bool func_462(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_10__::func_289(uParam0) };
	Var8 = { __LIB_10__::func_403(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

void func_463(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 32))
	{
		if (__LIB_10__::func_278(uParam0, 8))
		{
			*uParam2 = { uParam0->f_782[uParam0->f_1450 /*41*/].f_1 + __LIB_0__::func_173(Global_36 - uParam0->f_782[uParam0->f_1450 /*41*/].f_1) };
			if (!__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_782[uParam0->f_1450 /*41*/].f_40;
			}
		}
		else
		{
			*uParam2 = { uParam0->f_782[uParam0->f_1454 /*41*/].f_1 + __LIB_0__::func_173(Global_36 - uParam0->f_782[uParam0->f_1454 /*41*/].f_1) };
			if (!__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_782[uParam0->f_1454 /*41*/].f_40;
			}
		}
	}
	else
	{
		*uParam2 = { __LIB_10__::func_398(uParam0) };
		if (__LIB_10__::func_278(uParam0, 8))
		{
			if (!__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_782[uParam0->f_1450 /*41*/].f_40;
			}
		}
		else if (!__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2))
		{
			*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		}
		else
		{
			*fParam3 = uParam0->f_782[uParam0->f_1454 /*41*/].f_40;
		}
	}
}

void func_464(var uParam0, var uParam1)
{
	struct<8> Var0;
	if (__LIB_10__::func_278(uParam1, 32768))
	{
		Var0 = { __LIB_10__::func_403(uParam0) };
		__LIB_10__::func_404(uParam0, &Var0);
		if (__LIB_10__::func_278(uParam1, 131072))
		{
			__LIB_0__::func_88(uParam0, 268435456);
			if (__LIB_0__::func_86(uParam0->f_289))
			{
				uParam0->f_289 = { __LIB_10__::func_346(uParam1, uParam1->f_1450) };
			}
			if (__LIB_0__::func_86(uParam0->f_286))
			{
				uParam0->f_286 = { __LIB_10__::func_346(uParam1, uParam1->f_1450) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_286, &(uParam0->f_286.f_2), false);
				uParam0->f_286.f_2 = (uParam0->f_286.f_2 + 0.5f);
			}
		}
		if (__LIB_10__::func_278(uParam1, 268435456))
		{
			__LIB_0__::func_7(&(uParam0->f_284), 16384);
		}
	}
	else if (__LIB_10__::func_278(uParam1, 524288))
	{
		__LIB_0__::func_88(uParam0, 67108864);
		__LIB_10__::func_279(uParam1, 524288);
	}
	if (__LIB_10__::func_280(uParam1, 128))
	{
		__LIB_0__::func_88(uParam0, 32);
	}
	if (uParam1->f_1669 != 0)
	{
		uParam0->f_296 = uParam1->f_1669;
		if (uParam1->f_1450 >= 0 && __LIB_0__::func_274(&(uParam1->f_782[uParam1->f_1450 /*41*/]), 256))
		{
			__LIB_0__::func_7(&(uParam0->f_284), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1458)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_297), &(uParam1->f_1458), 16);
	}
}

void func_465(char[4] cParam0, bool bParam1)
{
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_32.f_228))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_32.f_228, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_FINISHED(cParam0->f_32.f_228, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(cParam0->f_32.f_228, false))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE_2(cParam0->f_32.f_228);
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_32.f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_32.f_228);
					}
				}
			}
		}
	}
	if (bParam1)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
	if (__LIB_10__::func_261(cParam0->f_346))
	{
		__LIB_10__::func_405(&(cParam0->f_32));
	}
	else
	{
		__LIB_10__::func_347(cParam0);
	}
	__LIB_10__::func_281(&(cParam0->f_32));
	StringCopy(&(cParam0->f_348), "", 32);
}

void func_466(var uParam0)
{
	if ((!__LIB_0__::func_84(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_228, false))
	{
		__LIB_10__::func_353(uParam0);
		__LIB_10__::func_408(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_228, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_228);
		}
		__LIB_0__::func_88(uParam0, 32768);
	}
}

bool func_467(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_1451 < 0)
	{
		return true;
	}
	switch (uParam0->f_241[uParam0->f_1451 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_0__::func_265(&(uParam0->f_1638)) >= 15f)
			{
				__LIB_10__::func_293(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1534)
			{
				if (__LIB_0__::func_265(&(uParam0->f_1638)) >= 15f)
				{
					__LIB_10__::func_293(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_10__::func_313(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_10__::func_313(uParam0), false))
				{
					uParam0->f_1534 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_10__::func_313(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_10__::func_313(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_10__::func_313(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_0__::func_265(&(uParam0->f_1638)) >= 15f;
	}
	return false;
}

bool func_468(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	struct<8> Var20;
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1655);
	if (!bVar0)
	{
		uParam0->f_1655 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_1655);
	if (!bVar1)
	{
		return false;
	}
	__LIB_10__::func_357(uParam0);
	__LIB_0__::func_19(uParam0, iParam2);
	if (__LIB_10__::func_278(uParam0, 16384))
	{
		__LIB_10__::func_319(uParam0);
	}
	Var2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		__LIB_10__::func_320(uParam0, iVar18);
		if (__LIB_10__::func_321(uParam0, 0))
		{
			if (__LIB_10__::func_322(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_782[iVar16 /*41*/].f_27 = 0;
					__LIB_10__::func_323(uParam0, 1, &(uParam0->f_782[iVar16 /*41*/].f_1));
					__LIB_10__::func_323(uParam0, 2, &(uParam0->f_782[iVar16 /*41*/].f_1.f_1));
					__LIB_10__::func_323(uParam0, 3, &(uParam0->f_782[iVar16 /*41*/].f_1.f_2));
					__LIB_10__::func_323(uParam0, 4, &(uParam0->f_782[iVar16 /*41*/].f_11));
					__LIB_10__::func_323(uParam0, 5, &(uParam0->f_782[iVar16 /*41*/].f_12));
					__LIB_10__::func_323(uParam0, 6, &(uParam0->f_782[iVar16 /*41*/].f_13));
					__LIB_10__::func_323(uParam0, 7, &(uParam0->f_782[iVar16 /*41*/].f_4));
					__LIB_10__::func_323(uParam0, 8, &(uParam0->f_782[iVar16 /*41*/].f_4.f_1));
					__LIB_10__::func_323(uParam0, 9, &(uParam0->f_782[iVar16 /*41*/].f_4.f_2));
					__LIB_10__::func_323(uParam0, 10, &(uParam0->f_782[iVar16 /*41*/].f_7));
					__LIB_10__::func_323(uParam0, 11, &(uParam0->f_782[iVar16 /*41*/].f_7.f_1));
					__LIB_10__::func_323(uParam0, 12, &(uParam0->f_782[iVar16 /*41*/].f_7.f_2));
					__LIB_10__::func_323(uParam0, 13, &(uParam0->f_782[iVar16 /*41*/].f_10));
					__LIB_10__::func_323(uParam0, 14, &(uParam0->f_782[iVar16 /*41*/].f_14));
					__LIB_10__::func_323(uParam0, 15, &(uParam0->f_782[iVar16 /*41*/].f_15));
					if (__LIB_10__::func_322(uParam0, 16, &iVar17))
					{
						uParam0->f_782[iVar16 /*41*/] = iVar17;
					}
					__LIB_10__::func_323(uParam0, 19, &(uParam0->f_782[iVar16 /*41*/].f_16));
					__LIB_10__::func_323(uParam0, 20, &(uParam0->f_782[iVar16 /*41*/].f_17));
					__LIB_10__::func_323(uParam0, 31, &(uParam0->f_782[iVar16 /*41*/].f_18));
					if (__LIB_10__::func_324(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_782[iVar16 /*41*/].f_19), {Var20}, 3);
					}
					if (__LIB_10__::func_324(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_782[iVar16 /*41*/].f_22), {Var20}, 3);
					}
					__LIB_10__::func_322(uParam0, 23, &(uParam0->f_782[iVar16 /*41*/].f_25));
					__LIB_10__::func_419(uParam0, &(uParam0->f_782[iVar16 /*41*/].f_27));
					if (__LIB_10__::func_324(uParam0, 35, &(uParam0->f_782[iVar16 /*41*/].f_30)))
					{
					}
					if (__LIB_10__::func_322(uParam0, 39, &iVar17))
					{
						uParam0->f_782[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_782[iVar16 /*41*/].f_39 = 1;
					}
					if (__LIB_10__::func_323(uParam0, 40, &(uParam0->f_782[iVar16 /*41*/].f_40)))
					{
						__LIB_4__::func_639(&(uParam0->f_782[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[iVar16 /*41*/].f_30)))
					{
						uParam0->f_782[iVar16 /*41*/].f_30 = { __LIB_0__::func_137() };
					}
					uParam0->f_782[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_1661 == -1 || uParam0->f_782[uParam0->f_1661 /*41*/].f_17 < uParam0->f_782[iVar16 /*41*/].f_17)
					{
						uParam0->f_1661 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_782[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_782[iVar18 /*41*/].f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1666 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_782[iVar18 /*41*/].f_29)
		{
			if (!__LIB_1__::func_410(vVar29, uParam0->f_782[iVar18 /*41*/].f_1, 5f, 1))
			{
				uParam0->f_1666 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				__LIB_10__::func_320(uParam0, iVar18);
				if (__LIB_10__::func_321(uParam0, 45))
				{
					if (__LIB_10__::func_322(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							__LIB_4__::func_647(&(uParam0->f_1288[iVar16 /*10*/]), 2);
							__LIB_10__::func_324(uParam0, 46, &(uParam0->f_1288[iVar16 /*10*/]));
							if (__LIB_10__::func_325(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									__LIB_4__::func_647(&(uParam0->f_1288[iVar16 /*10*/]), 1);
								}
							}
							if (__LIB_10__::func_322(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									__LIB_4__::func_647(&(uParam0->f_1288[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									__LIB_4__::func_647(&(uParam0->f_1288[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 17)
			{
				iVar16 = -1;
				__LIB_10__::func_320(uParam0, iVar18);
				if (__LIB_10__::func_321(uParam0, 50))
				{
					if (__LIB_10__::func_322(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					__LIB_10__::func_322(uParam0, 43, &(Var2.f_3));
					if (__LIB_10__::func_324(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					__LIB_10__::func_323(uParam0, 53, &(Var2.f_8));
					if (__LIB_10__::func_322(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					__LIB_10__::func_325(uParam0, 55, &(Var2.f_11));
					__LIB_10__::func_325(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (__LIB_10__::func_358(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 17)
						{
							uParam0->f_3[iVar32 /*13*/].f_3 = Var2.f_3;
							uParam0->f_3[iVar32 /*13*/].f_4 = { Var2.f_4 };
							uParam0->f_3[iVar32 /*13*/].f_8 = Var2.f_8;
							uParam0->f_3[iVar32 /*13*/].f_10 = Var2.f_10;
							uParam0->f_3[iVar32 /*13*/].f_11 = Var2.f_11;
							uParam0->f_3[iVar32 /*13*/].f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (__LIB_4__::func_649(Var2.f_1))
							{
								__LIB_10__::func_293(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			__LIB_10__::func_320(uParam0, iVar18);
			if (__LIB_10__::func_321(uParam0, 82))
			{
				if (__LIB_10__::func_324(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_225), {Var20}, 4);
				}
				__LIB_10__::func_324(uParam0, 84, &(uParam0->f_225.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225.f_4)))
				{
					if (uParam0->f_225.f_15 == 1)
					{
						uParam0->f_225.f_4 = { __LIB_0__::func_134() };
					}
					else if (uParam0->f_225.f_15 == 2)
					{
						uParam0->f_225.f_4 = { __LIB_0__::func_137() };
					}
					else
					{
						uParam0->f_225.f_4 = { __LIB_0__::func_137() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				__LIB_10__::func_320(uParam0, iVar18);
				if (__LIB_10__::func_321(uParam0, 57))
				{
					if (__LIB_10__::func_322(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_241[iVar16 /*18*/].f_8 = 0;
							__LIB_10__::func_322(uParam0, 58, &(uParam0->f_241[iVar16 /*18*/]));
							if (__LIB_10__::func_322(uParam0, 59, &iVar17))
							{
								uParam0->f_241[iVar16 /*18*/].f_1 = __LIB_4__::func_650(iVar17);
							}
							if (__LIB_10__::func_322(uParam0, 60, &iVar17))
							{
								uParam0->f_241[iVar16 /*18*/].f_2 = __LIB_4__::func_651(iVar17);
							}
							__LIB_10__::func_322(uParam0, 61, &(uParam0->f_241[iVar16 /*18*/].f_3));
							__LIB_10__::func_323(uParam0, 67, &(uParam0->f_241[iVar16 /*18*/].f_10));
							__LIB_10__::func_323(uParam0, 70, &(uParam0->f_241[iVar16 /*18*/].f_11));
							__LIB_10__::func_323(uParam0, 68, &(uParam0->f_241[iVar16 /*18*/].f_9));
							__LIB_10__::func_322(uParam0, 72, &(uParam0->f_241[iVar16 /*18*/].f_5));
							__LIB_10__::func_323(uParam0, 77, &(uParam0->f_241[iVar16 /*18*/].f_12));
							__LIB_10__::func_322(uParam0, 78, &(uParam0->f_241[iVar16 /*18*/].f_13));
							__LIB_10__::func_322(uParam0, 79, &(uParam0->f_241[iVar16 /*18*/].f_14));
							if (__LIB_10__::func_322(uParam0, 73, &iVar17))
							{
								uParam0->f_241[iVar16 /*18*/].f_17 = iVar17;
							}
							if (__LIB_10__::func_322(uParam0, 75, &iVar17))
							{
								uParam0->f_241[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							__LIB_10__::func_323(uParam0, 80, &(uParam0->f_241[iVar16 /*18*/].f_15));
							if (__LIB_10__::func_325(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (__LIB_10__::func_325(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 512;
								}
							}
							if (__LIB_10__::func_325(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (__LIB_10__::func_325(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (__LIB_10__::func_325(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (__LIB_10__::func_325(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (__LIB_10__::func_325(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (__LIB_10__::func_325(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (__LIB_10__::func_325(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_241[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_241[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_241[iVar16 /*18*/].f_4 = uParam0->f_241[iVar16 /*18*/].f_3;
								uParam0->f_241[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_241[iVar16 /*18*/].f_16 = uParam0->f_241[iVar16 /*18*/].f_2;
							uParam0->f_241[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1660 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				__LIB_10__::func_320(uParam0, iVar18);
				if (__LIB_10__::func_321(uParam0, 85))
				{
					__LIB_10__::func_322(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						__LIB_10__::func_325(uParam0, 87, &(uParam0->f_1111[iVar18 /*22*/]));
						__LIB_10__::func_324(uParam0, 96, &(uParam0->f_1111[iVar18 /*22*/].f_2));
						__LIB_10__::func_324(uParam0, 97, &(uParam0->f_1111[iVar18 /*22*/].f_10));
						__LIB_10__::func_323(uParam0, 93, &(uParam0->f_1111[iVar18 /*22*/].f_18));
						__LIB_10__::func_323(uParam0, 94, &(uParam0->f_1111[iVar18 /*22*/].f_19));
						__LIB_10__::func_322(uParam0, 95, &(uParam0->f_1111[iVar18 /*22*/].f_20));
						uParam0->f_1111[iVar18 /*22*/].f_1 = 0;
						__LIB_10__::func_392(uParam0, &(uParam0->f_1111[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				__LIB_10__::func_320(uParam0, iVar18);
				if (__LIB_10__::func_321(uParam0, 98))
				{
					if (__LIB_10__::func_322(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1399[iVar16 /*15*/].f_10 = 0;
							__LIB_10__::func_326(uParam0, 99, &(uParam0->f_1399[iVar16 /*15*/]));
							__LIB_10__::func_326(uParam0, 100, &(uParam0->f_1399[iVar16 /*15*/].f_6));
							__LIB_10__::func_326(uParam0, 101, &(uParam0->f_1399[iVar16 /*15*/].f_3));
							if (__LIB_10__::func_322(uParam0, 102, &iVar17))
							{
								uParam0->f_1399[iVar16 /*15*/].f_9 = iVar17;
							}
							__LIB_10__::func_419(uParam0, &(uParam0->f_1399[iVar16 /*15*/].f_10));
							uParam0->f_1399[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1655);
			__LIB_10__::func_293(uParam0, 1);
			__LIB_10__::func_293(uParam0, 16384);
			__LIB_10__::func_393(uParam0);
			return true;
		}
	}
}

void func_469(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		if (!bParam1)
		{
			__LIB_10__::func_394(uParam0);
		}
		else if (bParam2)
		{
			__LIB_10__::func_395(uParam0);
		}
		else
		{
			__LIB_10__::func_420(uParam0, uParam0->f_1664);
		}
	}
	else
	{
		if (!__LIB_10__::func_278(uParam0, 1048576) && bParam1)
		{
			__LIB_10__::func_420(uParam0, uParam0->f_1664);
		}
		else if (!__LIB_10__::func_278(uParam0, 2097152) && bParam2)
		{
			__LIB_10__::func_395(uParam0);
		}
		else if ((__LIB_10__::func_278(uParam0, 1048576) && !bParam1) || (__LIB_10__::func_278(uParam0, 2097152) && !bParam2))
		{
			__LIB_10__::func_394(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1648 * FtoV(__LIB_4__::func_634(uParam0->f_1664)) };
			if (!__LIB_0__::func_175(vVar0, VOLUME::_GET_VOLUME_SCALE(uParam0->f_1641), 1056964608 /* Float: 0.5f */, 1) && !__LIB_0__::func_86(vVar0))
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_1641, vVar0);
			}
		}
	}
}

void func_470(var uParam0)
{
	int iVar0;
	if (!uParam0->f_1663)
	{
		if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 8192) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 65536) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
		{
			if (__LIB_10__::func_292(uParam0, uParam0->f_1450))
			{
				__LIB_4__::func_774(uParam0->f_782[uParam0->f_1450 /*41*/].f_7);
			}
		}
	}
	if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16) && (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 65536))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		}
		__LIB_10__::func_365(uParam0, 1);
	}
	else if ((!__LIB_10__::func_292(uParam0, uParam0->f_1450) && !__LIB_10__::func_295(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		__LIB_10__::func_365(uParam0, 3);
	}
	else
	{
		__LIB_10__::func_365(uParam0, 6);
	}
}

void func_471(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		__LIB_9__::func_130(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		__LIB_9__::func_130(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		__LIB_2__::func_161(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_472(var uParam0, char* sParam1, vector3 vParam2)
{
	if (!__LIB_1__::func_588(sParam1, 0, 0, -1, -1, 0))
	{
		__LIB_1__::func_324(sParam1);
		if (!__LIB_0__::func_75(&(uParam0->f_2067)))
		{
			__LIB_1__::func_283(&(uParam0->f_2067), 0);
		}
		else
		{
			__LIB_1__::func_148(&(uParam0->f_2067));
		}
		uParam0->f_2073 = { vParam2 };
		uParam0->f_2076 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_2073, Global_36, true);
	}
}

int func_473(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (__LIB_10__::func_433(uParam0, &iVar0))
	{
		__LIB_10__::func_312(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_474(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar19;
	int iVar20;
	vector3 vVar21;
	if (uParam0->f_241[iParam2 /*18*/].f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_241[iParam2 /*18*/].f_4;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1288[iVar0 /*10*/].f_8))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1288[iVar0 /*10*/].f_8, true, false))
		{
			__LIB_5__::func_124(uParam0, uParam0->f_1288[iVar0 /*10*/].f_8);
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1288[iVar0 /*10*/].f_8, &vVar1, &vVar4, 2);
			if (__LIB_0__::func_129(&(uParam0->f_1288[iVar0 /*10*/]), 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1288[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (__LIB_0__::func_152(vVar1, Global_36, 1) - __LIB_0__::func_152(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1288[iVar0 /*10*/].f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1288[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_241[iParam2 /*18*/].f_17 != 0)
			{
				if ((__LIB_0__::func_78(uParam0) > 3 && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_241[iParam2 /*18*/] /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_241[iParam2 /*18*/] /*41*/]), 32768))
				{
					__LIB_10__::func_421(uParam0, 1);
				}
				if (uParam0->f_1665)
				{
					if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_241[iParam2 /*18*/] /*41*/]), 128))
					{
					}
					else
					{
						__LIB_10__::func_293(uParam0, 131072);
						return;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1288[iVar0 /*10*/].f_8, false))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1288[iVar0 /*10*/].f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1288[iVar0 /*10*/].f_8, "b_PlayerArthur", !__LIB_0__::func_181(), false);
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1288[iVar0 /*10*/].f_8);
				if (uParam0->f_241[iParam2 /*18*/].f_17 == 0)
				{
					__LIB_4__::func_647(&(uParam0->f_1288[iVar0 /*10*/]), 128);
					if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1288[iVar0 /*10*/].f_8, "pl_breakout"))
					{
						__LIB_4__::func_712(uParam0->f_1288[iVar0 /*10*/].f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1288[iVar0 /*10*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1288[iVar0 /*10*/].f_8, false);
			}
			if (__LIB_0__::func_84(&(uParam0->f_241[iParam2 /*18*/]), 4))
			{
				uParam0->f_1451 = iParam2;
				if (((((__LIB_0__::func_81(uParam0) == 0 && !CAM::_0x81DCFD13CF39920E()) && uParam0->f_241[iParam2 /*18*/].f_17 == 1) && uParam0->f_241[iParam2 /*18*/] < 8) && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_241[iParam2 /*18*/] /*41*/]), 32768)) && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_241[iParam2 /*18*/] /*41*/]), 524288))
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_10__::func_309(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 17)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && uParam0->f_3[iVar20 /*13*/].f_8 > 0f) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar20 /*13*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar20 /*13*/].f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1288[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_241[iParam2 /*18*/].f_17 != 0) && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_241[iParam2 /*18*/] /*41*/]), 32768))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1288[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar21, false, 0, 2) && !__LIB_0__::func_86(vVar21))
				{
					__LIB_10__::func_434(uParam0, 0);
				}
			}
			uParam0->f_241[iParam2 /*18*/].f_7 = 1;
		}
	}
}

int func_475(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_10__::func_280(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			HUD::_DISPLAY_HUD_COMPONENT(474191950);
			break;
		default:
			if (__LIB_4__::func_682())
			{
				if (!__LIB_10__::func_278(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (__LIB_4__::func_682())
	{
		__LIB_10__::func_279(uParam0, 512);
		__LIB_10__::func_309(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (__LIB_0__::func_164(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_782[uParam0->f_1450 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	__LIB_4__::func_782();
	__LIB_10__::func_437(uParam0, 1, 0);
	__LIB_10__::func_391(uParam0);
	if (__LIB_10__::func_278(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	__LIB_10__::func_309(uParam0, 4);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1641);
	}
	if (__LIB_10__::func_280(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		CAM::_0x798BE43C9393632B(__LIB_0__::func_166());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1111[iVar0 /*22*/].f_2), __LIB_0__::func_166())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1111[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1111[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (__LIB_10__::func_278(uParam0, 524288) || iParam1 == 1)
	{
		__LIB_3__::func_120();
	}
	if (__LIB_10__::func_280(uParam0, 16))
	{
		if (__LIB_0__::func_81(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
		}
	}
	__LIB_4__::func_613();
	if (__LIB_10__::func_280(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667))
	{
		if (!__LIB_10__::func_278(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1667) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
		}
	}
	__LIB_10__::func_350(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1687);
	}
	return 1;
}

void func_476(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_228, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_285, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_10__::func_352(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_228, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_228, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_228))
	{
		if (!__LIB_0__::func_1(uParam0->f_285, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_285, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_228);
		__LIB_3__::func_120();
	}
}

bool func_477(int iParam0, var uParam1, int iParam2, var uParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (__LIB_0__::func_232(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0f;
		return true;
	}
	if (fParam6 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (__LIB_3__::func_893(iParam0, fParam5))
	{
		if (__LIB_10__::func_438(vVar0, iParam0, uParam1, iParam2, uParam3, fParam4, fParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0f;
	}
	return false;
}

void func_478(var uParam0, int iParam1)
{
	if (__LIB_10__::func_339(iParam1))
	{
		MAP::SET_BLIP_SPRITE(*uParam0, joaat("BLIP_SCM_STRAUSS"), true);
	}
	else
	{
		MAP::SET_BLIP_SPRITE(*uParam0, joaat("BLIP_PROC_LOANSHARK"), true);
	}
	__LIB_10__::func_443(iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, __LIB_10__::func_232(iParam1));
}

void func_479(char[4] cParam0)
{
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
			__LIB_1__::func_480(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

void func_480(var uParam0)
{
	if (!__LIB_10__::func_409(uParam0))
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 4194304))
	{
		__LIB_10__::func_410(uParam0);
		__LIB_10__::func_293(uParam0, 4194304);
	}
	if (__LIB_10__::func_439(uParam0))
	{
		__LIB_10__::func_354(uParam0);
		__LIB_10__::func_355(uParam0);
		__LIB_0__::func_115(uParam0, 2);
	}
}

bool func_481(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_4__::func_50(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_6__::func_814(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							__LIB_6__::func_750(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_6__::func_785(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

bool func_482(int* iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_10__::func_250())
			{
			}
		}
		else
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_0__::func_264(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || __LIB_10__::func_250()) || bVar1)
		{
			if (bVar1)
			{
				__LIB_10__::func_248();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

float func_483(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	fVar16 = 10000f;
	switch (uParam0->f_782[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iParam1 /*41*/].f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iParam1 /*41*/].f_4, true);
			vVar0 = { uParam0->f_782[iParam1 /*41*/].f_4 - uParam0->f_782[iParam1 /*41*/].f_1 };
			if (__LIB_4__::func_788(&vVar3, uParam0->f_782[iParam1 /*41*/].f_1, uParam0->f_782[iParam1 /*41*/].f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_782[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_782[iParam1 /*41*/].f_1.f_2 + uParam0->f_782[iParam1 /*41*/].f_10))
			{
				__LIB_10__::func_442(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iParam1 /*41*/].f_1, true) - uParam0->f_782[iParam1 /*41*/].f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_484(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1399[iVar2 /*15*/].f_11 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1399[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1664) && !uParam0->f_1399[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1664, uParam0->f_1399[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1664, 1);
				uParam0->f_1399[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1453 != 0 || __LIB_10__::func_278(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_1453 = 0;
					__LIB_10__::func_279(uParam0, 33554432);
				}
				bVar3 = __LIB_0__::func_1(uParam0->f_1399[iVar2 /*15*/].f_10, 131072);
				if (__LIB_0__::func_393(Global_35, uParam0->f_1399[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_1454 >= 0)
					{
						__LIB_10__::func_436(uParam0, uParam0->f_1399[iVar2 /*15*/].f_10, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						__LIB_4__::func_636();
					}
					__LIB_10__::func_377(uParam0, iVar2, iVar0, bVar3);
				}
				else if (__LIB_4__::func_637(&(uParam0->f_1399[iVar2 /*15*/])) != 0)
				{
					__LIB_10__::func_377(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_1399[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_1454 >= 0)
				{
					if (((__LIB_0__::func_94(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1) > uParam0->f_782[uParam0->f_1454 /*41*/].f_17 && __LIB_0__::func_393(uParam0->f_1664, uParam0->f_1399[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_1453 != 0) || __LIB_10__::func_278(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (__LIB_3__::func_869(Global_35, &(uParam0->f_1453), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_1453 = 0;
							__LIB_10__::func_279(uParam0, 33554432);
						}
						else
						{
							__LIB_10__::func_293(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

void func_485(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_10__::func_448(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_10__::func_448(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_10__::func_448(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_10__::func_448(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_10__::func_448(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_10__::func_448(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_10__::func_448(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_10__::func_448(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_10__::func_448(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_10__::func_448(-1, iParam0);
	}
}

void func_486(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6)
{
	uParam0->f_17.f_2 = iParam1;
	uParam0->f_17.f_3 = iParam2;
	uParam0->f_17.f_4 = iParam3;
	uParam0->f_17.f_5 = iParam4;
	uParam0->f_17.f_6 = fParam5;
	uParam0->f_17.f_7 = iParam6;
	uParam0->f_17 = 0;
}

void func_487(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;
	if (__LIB_0__::func_81(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1376;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_704[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_704[iVar0 /*41*/].f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_704[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_704[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_704[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1563);
		if (bVar4)
		{
			vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1563) };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_704[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_704[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_704[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_704[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1590))
			{
				__LIB_8__::func_462(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1590 == iVar9)
			{
				__LIB_8__::func_462(uParam0, 65536);
				return;
			}
		}
		__LIB_8__::func_480(uParam0, 65536);
	}
}

void func_488()
{
	int iVar0;
	iVar0 = iLocal_14;
	iVar0++;
	iLocal_14 = iVar0;
	if (iLocal_14 == 3)
	{
		iLocal_14 = (iVar0 - 1);
	}
}

void func_489(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2));
				if (__LIB_8__::func_470(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false, true);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), true);
				}
			}
		}
		iVar0++;
	}
}

void func_490(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_8__::func_502(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (__LIB_8__::func_502(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_8__::func_502(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_8__::func_502(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_8__::func_502(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

void func_491(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_8__::func_470(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_704[iVar0 /*41*/].f_29)
		{
			uParam0->f_704[iVar0 /*41*/].f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_704[iVar0 /*41*/].f_1, -uParam0->f_1576, uParam0->f_1573) };
			vVar1 = { uParam0->f_704[iVar0 /*41*/].f_7 - uParam0->f_704[iVar0 /*41*/].f_1 };
			vVar1 = { vVar1 + uParam0->f_1573 };
			uParam0->f_704[iVar0 /*41*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_704[iVar0 /*41*/].f_1, -uParam0->f_1576, vVar1) };
			uParam0->f_704[iVar0 /*41*/].f_12 = (uParam0->f_704[iVar0 /*41*/].f_12 + uParam0->f_1576);
			uParam0->f_704[iVar0 /*41*/].f_13 = (uParam0->f_704[iVar0 /*41*/].f_13 + uParam0->f_1576);
			if (uParam0->f_704[iVar0 /*41*/].f_12 > 180f)
			{
				uParam0->f_704[iVar0 /*41*/].f_12 = (-180f + (MISC::ABSF(uParam0->f_704[iVar0 /*41*/].f_12) - 180f));
			}
			else if (uParam0->f_704[iVar0 /*41*/].f_12 < -180f)
			{
				uParam0->f_704[iVar0 /*41*/].f_12 = (180f - (MISC::ABSF(uParam0->f_704[iVar0 /*41*/].f_12) - 180f));
			}
			if (uParam0->f_704[iVar0 /*41*/].f_13 > 180f)
			{
				uParam0->f_704[iVar0 /*41*/].f_13 = (-180f + (MISC::ABSF(uParam0->f_704[iVar0 /*41*/].f_13) - 180f));
			}
			else if (uParam0->f_704[iVar0 /*41*/].f_13 < -180f)
			{
				uParam0->f_704[iVar0 /*41*/].f_13 = (180f - (MISC::ABSF(uParam0->f_704[iVar0 /*41*/].f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1321[iVar0 /*15*/].f_11)
		{
			uParam0->f_1321[iVar0 /*15*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1321[iVar0 /*15*/], -uParam0->f_1576, uParam0->f_1573) };
			uParam0->f_1321[iVar0 /*15*/].f_6.f_2 = (uParam0->f_1321[iVar0 /*15*/].f_6.f_2 + uParam0->f_1576);
		}
		iVar0++;
	}
	__LIB_8__::func_480(uParam0, 8388608);
}

void func_492(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	__LIB_0__::func_172(uParam0->f_1563);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1563 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630.f_12)
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1563, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_8__::func_480(uParam0, 1048576);
	__LIB_8__::func_480(uParam0, 2097152);
}

void func_493(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return;
	}
	__LIB_0__::func_172(uParam0->f_1563);
	MISC::GET_MODEL_DIMENSIONS(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (VEHICLE::_IS_DRAFT_VEHICLE(iVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), iVar14);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_1563 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1563, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_8__::func_462(uParam0, 2097152);
	__LIB_8__::func_480(uParam0, 1048576);
}

Vector3 func_494(var uParam0)
{
	if (__LIB_8__::func_470(uParam0, 8))
	{
		return uParam0->f_704[uParam0->f_1372 /*41*/].f_7;
	}
	if (uParam0->f_1376 >= 0)
	{
		return uParam0->f_704[uParam0->f_1376 /*41*/].f_7;
	}
	return 0f, 0f, 0f;
}

int func_495(var uParam0, var uParam1)
{
	__LIB_10__::func_260(1, 1);
	return 9;
}

void func_496(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	uParam0->f_17.f_9 = { vParam7 };
	uParam0->f_17.f_5 = (vParam7.x + 2f);
	__LIB_3__::func_527(&(uParam0->f_17.f_8), vParam1, vParam4, uParam0->f_17.f_9, "LS CORE Dismount area");
}

int func_497(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = __LIB_10__::func_390(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

void func_498(var uParam0, int iParam1)
{
	uParam0->f_148 = iParam1;
	__LIB_1__::func_736(uParam0, 1);
}

void func_499(var uParam0)
{
	bool bVar0;
	if (!__LIB_8__::func_470(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(__LIB_0__::func_199(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_0__::func_199(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			__LIB_8__::func_462(uParam0, 134217728);
		}
	}
}

bool func_500(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1210[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1210[iVar0 /*10*/]), 2)) && !__LIB_0__::func_129(&(uParam0->f_1210[iVar0 /*10*/]), 16)) && __LIB_8__::func_504(uParam0, iVar0))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1210[iVar0 /*10*/].f_8))
			{
				uParam0->f_1210[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1210[iVar0 /*10*/]), 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1210[iVar0 /*10*/].f_8);
				return false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1210[iVar0 /*10*/].f_8, false))
			{
				return false;
			}
			if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1210[iVar0 /*10*/].f_8, "pl_breakout"))
			{
				__LIB_4__::func_647(&(uParam0->f_1210[iVar0 /*10*/]), 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1210[iVar0 /*10*/].f_8);
			__LIB_4__::func_647(&(uParam0->f_1210[iVar0 /*10*/]), 16);
		}
		iVar0++;
	}
	return true;
}

void func_501(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1210[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1210[iVar0 /*10*/]), 2))
		{
			iVar1 = 0;
			if (__LIB_8__::func_504(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1210[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1210[iVar0 /*10*/]), iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, __LIB_0__::func_166(), 64);
	StringCopy(&(Var2.f_8), __LIB_4__::func_616(), 64);
	uParam0->f_1396 = { Var2 };
	uParam0->f_1419 = { Var2 };
	if (!__LIB_8__::func_472(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(__LIB_0__::func_166());
		__LIB_8__::func_486(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1033[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1033[iVar0 /*22*/].f_2), __LIB_0__::func_166()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1033[iVar0 /*22*/].f_2)))
			{
				CAM::_0x6A4D224FC7643941(&(uParam0->f_1033[iVar0 /*22*/].f_2));
				uParam0->f_1033[iVar0 /*22*/].f_21 = 1;
			}
		}
		iVar0++;
	}
}

void func_502(var uParam0)
{
	__LIB_8__::func_505(uParam0);
	__LIB_8__::func_506(uParam0);
}

void func_503(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_1376 < 0)
	{
		return;
	}
	if ((uParam0->f_1587 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1589)) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_1589))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_1589, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || __LIB_0__::func_94(iVar2, uParam0->f_704[uParam0->f_1376 /*41*/].f_1, 1) < __LIB_0__::func_94(iVar1, uParam0->f_704[uParam0->f_1376 /*41*/].f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!__LIB_8__::func_470(uParam0, 8192))
		{
			if (__LIB_0__::func_94(iVar1, uParam0->f_704[uParam0->f_1376 /*41*/].f_1, 1) <= (uParam0->f_704[uParam0->f_1376 /*41*/].f_17 + 5f) || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1563, uParam0->f_1567))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1589) != 5f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1589, 5f);
				}
			}
			else if ((!__LIB_1__::func_533(512) || __LIB_4__::func_635(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1589) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1589, 50f);
			}
		}
	}
}

bool func_504(var uParam0)
{
	if (uParam0->f_1376 < 0)
	{
		return false;
	}
	if (__LIB_8__::func_470(uParam0, 33554432))
	{
		return false;
	}
	if (__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1376 /*41*/]), 2) && uParam0->f_1585)
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1563) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1563, uParam0->f_1564))
	{
		return true;
	}
	if (__LIB_8__::func_470(uParam0, 65536))
	{
		return true;
	}
	return false;
}

int func_505(var uParam0, int iParam1)
{
	if (uParam0->f_163[iParam1 /*18*/].f_1 > uParam0->f_1371)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_3 /*13*/].f_2))
	{
	}
	if (uParam0->f_1371 < 0 || uParam0->f_1371 > 6)
	{
		return 0;
	}
	if (uParam0->f_163[iParam1 /*18*/].f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_163[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		return 1;
	}
	if (!__LIB_8__::func_470(uParam0, 4096) && uParam0->f_1584)
	{
		return 0;
	}
	if (Global_1430231.f_4)
	{
		return 0;
	}
	if (uParam0->f_163[iParam1 /*18*/] != uParam0->f_1372)
	{
		return 0;
	}
	if (__LIB_0__::func_78(uParam0) > 3 && uParam0->f_163[iParam1 /*18*/] != uParam0->f_1372)
	{
		return 0;
	}
	if ((((__LIB_0__::func_78(uParam0) > 3 && uParam0->f_163[iParam1 /*18*/].f_17 == 1) && __LIB_4__::func_576(uParam0) != 11) && __LIB_8__::func_471(uParam0, uParam0->f_1372)) && uParam0->f_163[iParam1 /*18*/].f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_163[iParam1 /*18*/].f_2 == 9 && uParam0->f_163[iParam1 /*18*/].f_4 >= 0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/].f_8))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/].f_8, __LIB_0__::func_731(Global_35)))
		{
			if (__LIB_0__::func_129(&(uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/]), 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_129(&(uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/]), 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_506(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_8__::func_502(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_8__::func_502(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_8__::func_502(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_8__::func_502(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (__LIB_8__::func_502(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (__LIB_8__::func_502(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (__LIB_8__::func_502(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (__LIB_8__::func_502(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (__LIB_8__::func_502(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (__LIB_8__::func_502(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (__LIB_8__::func_502(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (__LIB_8__::func_502(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (__LIB_8__::func_502(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (__LIB_8__::func_502(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

void func_507(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	__LIB_0__::func_172(uParam0->f_1563);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1570 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1570 * FtoV(__LIB_4__::func_634(iParam1)) };
	uParam0->f_1563 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1563, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_8__::func_462(uParam0, 1048576);
	__LIB_8__::func_480(uParam0, 2097152);
}

void func_508(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_8__::func_470(uParam0, 64) && __LIB_0__::func_81(uParam0) != 0)
	{
		return;
	}
	if (!bParam1)
	{
		iVar0 = __LIB_0__::func_399(Global_35, 0, 0, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0))
		{
			if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
			{
				WEAPON::_0xCEF4C65DE502D367(Global_35, 1, 0, 1, 0);
				__LIB_8__::func_462(uParam0, 256);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
		}
		iVar0 = __LIB_0__::func_399(Global_35, 0, 1, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0))
		{
			if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
			{
				WEAPON::_0xCEF4C65DE502D367(Global_35, 1, 1, 1, 0);
				__LIB_8__::func_462(uParam0, 256);
			}
		}
	}
	else
	{
		__LIB_4__::func_791(0);
		__LIB_4__::func_791(1);
	}
}

void func_509(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	vector3 vVar0;
	if (bParam2)
	{
		TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, *(uParam3[0 /*3*/]), 1), 0);
	}
	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	if (__LIB_0__::func_164(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/]), 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_40, 0);
	}
	else
	{
		vVar0 = { __LIB_8__::func_508(uParam0, iParam1) };
		if (!__LIB_0__::func_86(vVar0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
	}
}

void func_510(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;
	vVar0 = { __LIB_8__::func_508(uParam0, iParam1) };
	if (!__LIB_0__::func_86(vVar0))
	{
		if (bParam2)
		{
			TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, vParam3, 1), 0);
		}
		fVar3 = __LIB_0__::func_152(vParam3, vVar0, 1);
		if (__LIB_0__::func_164(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar3 = uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_40;
		}
		if (__LIB_0__::func_84(&(uParam0->f_163[iParam1 /*18*/]), 256))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam3, 1f, 20000, fVar3, 1056964608 /* Float: 0.5f */, 0);
		}
		else
		{
			iVar4 = 4;
			iVar4 |= 4194304;
			fVar3 = (fVar3 % 360f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, iVar4, fVar3);
		}
		if (!__LIB_0__::func_164(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/]), 4) && !__LIB_0__::func_164(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/]), 2))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
		else
		{
			TASK::TASK_ACHIEVE_HEADING(0, fVar3, 0);
			TASK::TASK_STAND_STILL(0, -1);
		}
	}
	else
	{
		fVar5 = 40000f;
		if (__LIB_0__::func_164(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar5 = uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_40;
		}
		fVar5 = (fVar5 % 360f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

void func_511(var uParam0, var uParam1)
{
	struct<8> Var0;
	if (__LIB_8__::func_470(uParam1, 32768))
	{
		Var0 = { __LIB_1__::func_589(uParam0) };
		__LIB_1__::func_590(uParam0, &Var0);
		if (__LIB_8__::func_470(uParam1, 131072))
		{
			__LIB_0__::func_88(uParam0, 268435456);
			if (__LIB_0__::func_86(uParam0->f_217))
			{
				uParam0->f_217 = { __LIB_8__::func_479(uParam1, uParam1->f_1372) };
			}
			if (__LIB_0__::func_86(uParam0->f_214))
			{
				uParam0->f_214 = { __LIB_8__::func_479(uParam1, uParam1->f_1372) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_214, &(uParam0->f_214.f_2), false);
				uParam0->f_214.f_2 = (uParam0->f_214.f_2 + 0.5f);
			}
		}
		if (__LIB_8__::func_470(uParam1, 268435456))
		{
			__LIB_0__::func_7(&(uParam0->f_212), 16384);
		}
	}
	else if (__LIB_8__::func_470(uParam1, 524288))
	{
		__LIB_0__::func_88(uParam0, 67108864);
		__LIB_8__::func_480(uParam1, 524288);
	}
	if (__LIB_8__::func_472(uParam1, 128))
	{
		__LIB_0__::func_88(uParam0, 32);
	}
	if (uParam1->f_1591 != 0)
	{
		uParam0->f_224 = uParam1->f_1591;
		if (uParam1->f_1372 >= 0 && __LIB_0__::func_274(&(uParam1->f_704[uParam1->f_1372 /*41*/]), 256))
		{
			__LIB_0__::func_7(&(uParam0->f_212), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1380)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_225), &(uParam1->f_1380), 16);
	}
}

bool func_512(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_1373 < 0)
	{
		return true;
	}
	switch (uParam0->f_163[uParam0->f_1373 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_0__::func_265(&(uParam0->f_1560)) >= 15f)
			{
				__LIB_8__::func_462(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1456)
			{
				if (__LIB_0__::func_265(&(uParam0->f_1560)) >= 15f)
				{
					__LIB_8__::func_462(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_8__::func_491(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_8__::func_491(uParam0), false))
				{
					uParam0->f_1456 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_8__::func_491(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_8__::func_491(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_8__::func_491(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_0__::func_265(&(uParam0->f_1560)) >= 15f;
	}
	return false;
}

bool func_513(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	return __LIB_1__::func_104(uParam0, cVar0, 0, -1, bParam2, 0);
}

bool func_514(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (*uParam0 == 0)
	{
		if (!__LIB_0__::func_139(uParam0->f_5) || !__LIB_0__::func_139(uParam0->f_6))
		{
			return false;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[uParam0->f_5 /*18*/].f_3) && __LIB_0__::func_567(uParam0->f_5, 1)) || __LIB_1__::func_732(uParam0->f_5, 1))
		{
			if (__LIB_1__::func_530(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[uParam0->f_6 /*18*/].f_3) && __LIB_0__::func_567(uParam0->f_6, 1)) || __LIB_1__::func_732(uParam0->f_6, 1))
		{
			if (__LIB_1__::func_530(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = MISC::GET_GAME_TIMER();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945938[uParam0->f_5 /*18*/].f_3))
				{
					fVar2 = __LIB_0__::func_486(uParam0->f_6, 1);
					fVar3 = __LIB_0__::func_486(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						else
						{
							uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							__LIB_5__::func_793(uParam0->f_5, 1);
						}
						__LIB_0__::func_633(uParam0->f_5, 6, 1);
						__LIB_0__::func_633(uParam0->f_6, 6, 1);
						__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
						__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945938[uParam0->f_6 /*18*/].f_3))
			{
				fVar2 = __LIB_0__::func_486(uParam0->f_5, 1);
				fVar3 = __LIB_0__::func_486(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					else
					{
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						__LIB_5__::func_793(uParam0->f_5, 1);
					}
					__LIB_0__::func_633(uParam0->f_5, 6, 1);
					__LIB_0__::func_633(uParam0->f_6, 6, 1);
					__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
					__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

void func_515(var uParam0)
{
	if (uParam0->f_3)
	{
		if (__LIB_0__::func_139(uParam0->f_5))
		{
			__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_6))
		{
			__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
		}
		uParam0->f_2 = 0;
		AUDIO::_0x9428447DED71FC7E("player_decision_moment_scenes");
		HUD::_UIPROMPT_CLEAR_HORIZONTAL_ORIENTATION(uParam0->f_15);
	}
}

void func_516(var uParam0)
{
	int iVar0;
	__LIB_8__::func_521(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_704[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_704[iVar0 /*41*/].f_22)) && __LIB_8__::func_492(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_704[iVar0 /*41*/]), 1))
			{
				if (!__LIB_8__::func_493(uParam0, &(uParam0->f_704[iVar0 /*41*/].f_22)))
				{
					__LIB_1__::func_104(&(uParam0->f_1459), uParam0->f_704[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_704[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

bool func_517(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	if (__LIB_8__::func_470(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1376 < 0 || uParam0->f_1376 >= 8)
	{
		return false;
	}
	if (!uParam0->f_704[uParam0->f_1376 /*41*/].f_29)
	{
		return false;
	}
	if (!__LIB_8__::func_470(uParam0, 4096) && uParam0->f_1584)
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (uParam0->f_704[uParam0->f_1376 /*41*/].f_29)
	{
		if (uParam0->f_704[uParam0->f_1376 /*41*/] == 0)
		{
			vVar3 = { uParam0->f_704[uParam0->f_1376 /*41*/].f_4 - uParam0->f_704[uParam0->f_1376 /*41*/].f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (__LIB_4__::func_788(&vVar0, uParam0->f_1453, Global_36, vVar6, uParam0->f_704[uParam0->f_1376 /*41*/].f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_704[uParam0->f_1376 /*41*/].f_1)
				{
					if (vVar0.x > uParam0->f_704[uParam0->f_1376 /*41*/].f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_704[uParam0->f_1376 /*41*/].f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_704[uParam0->f_1376 /*41*/].f_1.f_1)
					{
						if (vVar0.y > uParam0->f_704[uParam0->f_1376 /*41*/].f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_704[uParam0->f_1376 /*41*/].f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_704[uParam0->f_1376 /*41*/].f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_704[uParam0->f_1376 /*41*/].f_1.f_2 + uParam0->f_704[uParam0->f_1376 /*41*/].f_10)) || (__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1376 /*41*/]), 2) && (uParam0->f_1585 || uParam0->f_1587)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1376;
					return true;
				}
			}
		}
		else if (__LIB_8__::func_470(uParam0, 8))
		{
			*iParam1 = uParam0->f_1372;
			return true;
		}
	}
	return false;
}

void func_518(int* iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, float fParam5)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		return;
	}
	bVar0 = __LIB_5__::func_439(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam2, true, false)));
	if ((bVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!__LIB_0__::func_163(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *iParam2, 5000, -1f, -1f, -1f);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		__LIB_6__::func_740(iParam0, uParam1, iParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *iParam2, "ForcedILO", 0f, 0f, 0f, *iParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

void func_519(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = MISC::_CREATE_VAR_STRING(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			__LIB_5__::func_793(uParam0->f_5, 1);
		}
		__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
		__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
		__LIB_0__::func_633(uParam0->f_5, 6, 1);
		__LIB_0__::func_633(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = MISC::GET_GAME_TIMER() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = (MISC::GET_GAME_TIMER() + BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = HUD::_UIPROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MissionChoice");
		}
		AUDIO::_0x6339C1EA3979B5F7("make_decision", "player_decision_moment_scenes");
	}
}

void func_520(var uParam0)
{
	int iVar0;
	if (!uParam0->f_1585)
	{
		if (__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1372 /*41*/]), 8192) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1372 /*41*/]), 65536) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
		{
			if (__LIB_8__::func_471(uParam0, uParam0->f_1372))
			{
				__LIB_4__::func_774(uParam0->f_704[uParam0->f_1372 /*41*/].f_7);
			}
		}
	}
	if (!__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1372 /*41*/]), 16) && (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		if (__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1372 /*41*/]), 65536))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		}
		__LIB_8__::func_530(uParam0, 1);
	}
	else if ((!__LIB_8__::func_471(uParam0, uParam0->f_1372) && !__LIB_8__::func_474(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		__LIB_8__::func_530(uParam0, 3);
	}
	else
	{
		__LIB_8__::func_530(uParam0, 6);
	}
}

void func_521(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56, false);
	}
	__LIB_8__::func_487(uParam0, 4);
	HUD::_HIDE_HUD_COMPONENT(-1679307491);
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if ((__LIB_0__::func_81(uParam0) == 0 && uParam0->f_1372 >= 0) && !__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1372 /*41*/]), 524288))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		__LIB_8__::func_486(uParam0, 64);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	__LIB_3__::func_739(0);
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(0);
	}
}

void func_522(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_1(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (__LIB_0__::func_1(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1585)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1586, 214, true);
	}
	if (uParam0->f_1584 && __LIB_8__::func_470(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (__LIB_0__::func_1(uParam1, 262144) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	__LIB_4__::func_706(&iVar1, uParam2);
	__LIB_4__::func_794(&(uParam0->f_1592), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!__LIB_8__::func_470(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	__LIB_4__::func_614();
	__LIB_8__::func_487(uParam0, 1);
}

void func_523(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1210[iVar0 /*10*/].f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1210[iVar0 /*10*/].f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1210[iVar0 /*10*/].f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1210[iVar0 /*10*/].f_8, "pl_breakout")) && !uParam0->f_1457)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1210[iVar0 /*10*/].f_8, "pl_breakout", true);
					}
				}
				else if (__LIB_8__::func_470(uParam0, 32768) && __LIB_0__::func_129(&(uParam0->f_1210[iVar0 /*10*/]), 128))
				{
					__LIB_4__::func_712(uParam0->f_1210[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1210[iVar0 /*10*/].f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1210[iVar0 /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1210[iVar0 /*10*/].f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_524(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1210[iVar0 /*10*/].f_8))
		{
			if (!__LIB_0__::func_129(&(uParam0->f_1210[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1210[iVar0 /*10*/].f_8, false))
				{
					__LIB_5__::func_124(uParam0, uParam0->f_1210[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1210[iVar0 /*10*/].f_8);
					bVar1 = false;
					__LIB_4__::func_647(&(uParam0->f_1210[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1210[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_704)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_704[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_704[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_704[iVar0 /*41*/].f_19));
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_704[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (__LIB_8__::func_472(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1033[iVar0 /*22*/].f_2)) && uParam0->f_1033[iVar0 /*22*/].f_21) && !CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1033[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_86(uParam0->f_1573) || uParam0->f_1576 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1210[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1210[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1210[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1210[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1576, uParam0->f_1573) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1576);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1210[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_525(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		__LIB_10__::func_440(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			__LIB_10__::func_440(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_526(int iParam0, vector3 vParam1, float fParam4)
{
	if (!MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1) && !__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_8, 1024))
	{
		Global_1392626[iParam0 /*32*/].f_1 = MAP::_BLIP_ADD_FOR_RADIUS(__LIB_10__::func_418(iParam0), vParam1, fParam4);
		if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
		{
			__LIB_10__::func_478(&(Global_1392626[iParam0 /*32*/].f_1), iParam0);
			__LIB_10__::func_441(iParam0);
			if (!__LIB_0__::func_474(163))
			{
				__LIB_5__::func_473(163, Global_1392626[iParam0 /*32*/].f_1, 0);
			}
		}
	}
}

void func_527(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;
	if (!__LIB_8__::func_543(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_704[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_704[iParam1 /*41*/].f_12) * uParam0->f_704[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_704[iParam1 /*41*/].f_12) * uParam0->f_704[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_704[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_704[iParam1 /*41*/].f_13) * uParam0->f_704[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_704[iParam1 /*41*/].f_13) * uParam0->f_704[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_704[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_704[iParam1 /*41*/].f_12) * uParam0->f_704[iParam1 /*41*/].f_11) + uParam0->f_704[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_704[iParam1 /*41*/].f_12) * uParam0->f_704[iParam1 /*41*/].f_11) + uParam0->f_704[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_704[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_704[iParam1 /*41*/].f_13) * uParam0->f_704[iParam1 /*41*/].f_11) + uParam0->f_704[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_704[iParam1 /*41*/].f_13) * uParam0->f_704[iParam1 /*41*/].f_11) + uParam0->f_704[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1585 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1563)) && __LIB_0__::func_266(uParam0->f_1586, uParam0->f_704[iParam1 /*41*/].f_1, uParam0->f_704[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_1563) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1563) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1586), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1586), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1586), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1586), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_704[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_704[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_704[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_704[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_704[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_704[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_704[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_704[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (fVar29[iVar40] < fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { vVar16[iVar41 /*3*/] };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*fParam8 = __LIB_0__::func_152(uParam0->f_704[iParam1 /*41*/].f_1, vVar0, 0);
	if (*fParam8 < uParam0->f_704[iParam1 /*41*/].f_12)
	{
		*fParam8 = (*fParam8 + 360f);
	}
	if (uParam0->f_704[iParam1 /*41*/].f_13 < uParam0->f_704[iParam1 /*41*/].f_12)
	{
		*fParam9 = (uParam0->f_704[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*fParam9 = uParam0->f_704[iParam1 /*41*/].f_13;
	}
	if (*fParam8 < *fParam9)
	{
		vVar42 = { uParam0->f_704[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1564 = { vVar42 + Vector(0f, (BUILTIN::COS(*fParam8) * uParam0->f_704[iParam1 /*41*/].f_11), (BUILTIN::SIN(*fParam8) * uParam0->f_704[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_1567 = { vVar42 + Vector(0f, ((BUILTIN::COS(*fParam8) * uParam0->f_704[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*fParam8) * uParam0->f_704[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

void func_528(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*iParam0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, sParam3);
		}
	}
}

bool func_529(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, sParam3, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*uParam0, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true))
	{
		ANIMSCENE::RESET_ANIM_SCENE(*uParam0, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			return true;
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		}
	}
	return false;
}

int func_530(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_531(char[4] cParam0, char* sParam1)
{
	StringCopy(&(cParam0->f_2208), sParam1, 16);
}

int func_532()
{
	return iLocal_14;
}

void func_533(int iParam0)
{
	int iVar0;
	char cVar1[16];
	struct<2> Var3;
	struct<2> Var5;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_empty");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_money");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "fLoot_money");
	}
	StringCopy(&cVar1, "loot_ammo", 16);
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		Var3 = { cVar1 };
		Var5 = { cVar1 };
		StringIntConCat(&Var3, iVar0, 16);
		StringIntConCat(&Var5, iVar0, 16);
		StringConCat(&Var3, "_type", 16);
		StringConCat(&Var5, "_amt", 16);
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var3))
		{
			DECORATOR::DECOR_REMOVE(iParam0, &Var3);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var5))
		{
			DECORATOR::DECOR_REMOVE(iParam0, &Var5);
		}
		iVar0++;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_weapon");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt1"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model1"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model1");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1x"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1x");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1y"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1y");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1z"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1z");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1x"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1x");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1y"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1y");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1z"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1z");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt2"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model2"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model2");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2x"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2x");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2y"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2y");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2z"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2z");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2x"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2x");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2y"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2y");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2z"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2z");
	}
}

int func_534(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	if (!__LIB_10__::func_14(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!__LIB_5__::func_458((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_535(var uParam0, int iParam1)
{
	uParam0->f_221 = iParam1;
	__LIB_10__::func_450(uParam0, 2);
}

void func_536(char[4] cParam0)
{
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	if (__LIB_10__::func_399(cParam0) && __LIB_10__::func_258(cParam0->f_12))
	{
		__LIB_10__::func_253(cParam0, 1);
	}
}

void func_537(int* iParam0, var uParam1, var uParam2, bool bParam3, char* sParam4, float fParam5)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	bVar0 = __LIB_5__::func_439(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam2, true, false)));
	if ((bVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!__LIB_0__::func_163(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *uParam2, 5000, -1f, -1f, -1f);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		__LIB_10__::func_242(iParam0, uParam1, uParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *uParam2, "ForcedILO", 0f, 0f, 0f, *uParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

void func_538(var uParam0, char* sParam1)
{
	if (((!__LIB_0__::func_84(uParam0, 32) || __LIB_10__::func_462(uParam0)) || __LIB_0__::func_84(uParam0, 268435456)) && !__LIB_0__::func_84(uParam0, 65536))
	{
		__LIB_0__::func_7(&(uParam0->f_284), 256);
	}
}

void func_539(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_1__::func_435(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = __LIB_10__::func_451(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = __LIB_10__::func_452(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			__LIB_10__::func_453(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_10__::func_454(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_540(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	__LIB_10__::func_308(uParam0, 4);
	if (__LIB_10__::func_468(uParam0, &uParam1, iParam5))
	{
		__LIB_0__::func_115(uParam0, 1);
	}
}

void func_541(var uParam0)
{
	uParam0->f_1451 = -1;
	__LIB_10__::func_291(uParam0, 0);
	__LIB_0__::func_115(uParam0, 3);
	__LIB_10__::func_365(uParam0, 0);
	__LIB_0__::func_37(&(uParam0->f_1635));
	__LIB_10__::func_411(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1638));
}

void func_542(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_10__::func_278(uParam0, 512))
	{
		return;
	}
	if (__LIB_0__::func_264(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_10__::func_293(uParam0, 524288);
	}
}

bool func_543(char[4] cParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = BUILTIN::VDIST2(cParam0->f_32.f_5, Global_36);
	fVar1 = 3f;
	if (cParam0->f_347 > 0f)
	{
		fVar1 = cParam0->f_347;
	}
	__LIB_10__::func_263(0, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		__LIB_0__::func_37(&(cParam0->f_17.f_12));
		if (__LIB_0__::func_163(Global_35, 242628503))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
	}
	else
	{
		if (!__LIB_0__::func_75(&(cParam0->f_17.f_12)))
		{
			__LIB_1__::func_283(&(cParam0->f_17.f_12), 1);
		}
		else if (__LIB_0__::func_264(&(cParam0->f_17.f_12)) > 5f)
		{
			__LIB_0__::func_37(&(cParam0->f_17.f_12));
			if (__LIB_0__::func_163(Global_35, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (!WEAPON::_0x07E1C35F0078C3F9(Global_35, joaat("WEAPON_UNARMED")))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, cParam0->f_32.f_5, 1f, 7500, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar2);
		}
		if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1392626[*cParam0 /*32*/].f_11))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

void func_544(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	__LIB_10__::func_463(uParam0, iParam1, &vVar1, &fVar0);
	__LIB_10__::func_434(uParam0, __LIB_0__::func_1(uParam0->f_1111[uParam0->f_241[iParam1 /*18*/] /*22*/].f_1, 8));
	__LIB_1__::func_148(&(uParam0->f_1635));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
	if (uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!__LIB_10__::func_360(uParam0, uParam0->f_241[iParam1 /*18*/]))
		{
			__LIB_4__::func_639(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/]), 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}
	__LIB_4__::func_774(vVar1);
	if (uParam0->f_241[iParam1 /*18*/].f_15 < 1f)
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, uParam0->f_241[iParam1 /*18*/].f_15);
		__LIB_10__::func_309(uParam0, 32);
	}
	if (__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 16))
	{
		__LIB_10__::func_366(uParam0, uParam0->f_241[iParam1 /*18*/], &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(vVar4[iVar24 /*3*/]);
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_10__::func_422(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_10__::func_423(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

bool func_545(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_6__::func_814(iParam1, uParam2, 0);
		iVar5 = __LIB_4__::func_48(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_546(var uParam0, int iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	__LIB_6__::func_739(uParam0, iParam1);
	fVar0 = __LIB_5__::func_439(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_6__::func_742(iParam1, uParam2);
		__LIB_6__::func_749(iParam1);
		__LIB_3__::func_113(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		__LIB_1__::func_538(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				__LIB_3__::func_58(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (__LIB_3__::func_547(Global_35, *uParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_5__::func_439(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_547(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_285), uParam0->f_296);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_10__::func_417(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_10__::func_405(uParam0);
	__LIB_10__::func_317(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_10__::func_356(uParam0, 4);
	__LIB_10__::func_402(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_10__::func_287(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_228))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_285, 128));
	if (!__LIB_0__::func_1(uParam0->f_285, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_548(int iParam0)
{
	__LIB_10__::func_526(iParam0, __LIB_10__::func_306(iParam0), (Global_1392626[iParam0 /*32*/].f_4 / 2f));
}

bool func_549(int iParam0, float fParam1)
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		if (BUILTIN::VDIST2(Global_36, vVar0) > (fParam1 * fParam1) && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_550(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_17.f_2 = fParam1;
	uParam0->f_17.f_3 = fParam2;
	uParam0->f_17.f_4 = fParam3;
	uParam0->f_17.f_5 = fParam4;
	uParam0->f_17.f_6 = fParam5;
	uParam0->f_17.f_7 = iParam6;
	uParam0->f_17 = 0;
}

bool func_551(var uParam0, char* sParam1)
{
	return MISC::_DOES_STRING_EXIST_IN_STRING(&(uParam0->f_224), sParam1);
}

void func_552(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_289 = { vParam1 };
	uParam0->f_292 = fParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_10__::func_288(uParam0, 2048, 1);
	}
	else
	{
		__LIB_0__::func_88(uParam0, 2048);
		if (bParam5)
		{
			__LIB_0__::func_88(uParam0, -2147483648);
		}
	}
}

void func_553(int* iParam0, bool bParam1)
{
	if (bParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

void func_554(var uParam0, int iParam1)
{
	uParam0->f_222 = iParam1;
	__LIB_10__::func_450(uParam0, 4);
}

bool func_555(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (uParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return __LIB_1__::func_990(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_556(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = __LIB_0__::func_485();
	}
	else if (__LIB_0__::func_485() - uParam1->f_4) > __LIB_1__::func_365(uParam1)
	{
		return __LIB_1__::func_366(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return false;
}

void func_557(var uParam0, int iParam1)
{
	uParam0->f_220 = iParam1;
	__LIB_10__::func_450(uParam0, 1);
}

void func_558(char[4] cParam0, int iParam1)
{
	__LIB_10__::func_535(&(cParam0->f_32), iParam1);
}

void func_559(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	iVar0 = uParam0->f_1454;
	if (iVar0 >= 0 && !__LIB_10__::func_295(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), __LIB_0__::func_67(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), __LIB_0__::func_67(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1458)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1458.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1111[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_1670), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_782[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1111[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 17)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1111[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1111[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668) || iVar26 != uParam0->f_1668))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
											__LIB_10__::func_309(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_10__::func_309(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1474.f_22 != bVar30);
								uParam0->f_1474.f_16 = iVar23;
								uParam0->f_1474.f_17 = { vVar20 };
								uParam0->f_1474.f_20 = fVar27;
								uParam0->f_1474.f_21 = fVar28;
								uParam0->f_1474.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1474 = { uParam0->f_1458 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1474));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1497.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1497.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1497.f_21 != bVar30);
								uParam0->f_1497.f_16 = iVar23;
								uParam0->f_1497.f_17 = { vVar20 };
								uParam0->f_1497.f_20 = !bVar31;
								uParam0->f_1497.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1497 = { uParam0->f_1458 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1497));
								}
							}
							Jump @1466; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
							}
							StringCopy(&(uParam0->f_1458), "", 64);
							StringCopy(&(uParam0->f_1458.f_8), "", 64);
							__LIB_10__::func_311(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

bool func_560(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	if (bParam3)
	{
		uParam0->f_295++;
		if (uParam0->f_295 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_295 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_10__::func_348(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_10__::func_431(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = __LIB_0__::func_94(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((fVar3 >= __LIB_10__::func_286(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
		{
			if (uParam0->f_313)
			{
				__LIB_1__::func_436();
				uParam0->f_313 = 0;
			}
			__LIB_10__::func_287(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
			}
			__LIB_10__::func_405(uParam0);
			__LIB_10__::func_288(uParam0, 128, 1);
			__LIB_10__::func_288(uParam0, 256, 1);
			__LIB_10__::func_288(uParam0, 4096, 1);
			__LIB_10__::func_288(uParam0, 32768, 1);
			__LIB_10__::func_288(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_10__::func_228(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				if (__LIB_10__::func_228(uParam0) >= __LIB_10__::func_286(uParam0))
				{
				}
				Var4 = { __LIB_10__::func_289(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_10__::func_402(uParam0);
				}
				Var4 = { __LIB_10__::func_289(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_228 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), iVar12, &Var4, false, true);
				__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
				__LIB_0__::func_88(uParam0, 128);
			}
		}
	}
	if (__LIB_0__::func_84(uParam0, 128))
	{
		if (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304))
		{
			return true;
		}
		__LIB_10__::func_466(uParam0);
		if (!uParam0->f_313)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_313 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_10__::func_403(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_246[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_246[iVar14 /*9*/].f_8)
						{
							uParam0->f_246[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_228, &(uParam0->f_246[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &(uParam0->f_246[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_228, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_228, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			__LIB_0__::func_88(uParam0, 256);
			__LIB_10__::func_288(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_561(char[4] cParam0, char* sParam1, vector3 vParam2)
{
	if (!__LIB_1__::func_588(sParam1, 0, 0, -1, -1, 0))
	{
		__LIB_1__::func_324(sParam1);
		if (!__LIB_0__::func_75(&(cParam0->f_2067)))
		{
			__LIB_1__::func_283(&(cParam0->f_2067), 0);
		}
		else
		{
			__LIB_1__::func_148(&(cParam0->f_2067));
		}
		cParam0->f_2073 = { vParam2 };
		cParam0->f_2076 = MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true);
	}
}

bool func_562(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_272(*iParam1, 0))
	{
		if (!__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*iParam1 = __LIB_8__::func_931(iParam2, vParam3, iParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (__LIB_0__::func_272(*iParam1, 0))
			{
				__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_9), 256);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_563(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_284, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_10__::func_403(uParam0) };
		__LIB_10__::func_404(uParam0, &Var0);
	}
	__LIB_10__::func_538(uParam0, sParam1);
	if (__LIB_0__::func_84(uParam0, 131072))
	{
		__LIB_0__::func_99(uParam0, 0);
	}
	if (__LIB_0__::func_100())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		__LIB_0__::func_101();
	}
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(1);
	}
	__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_10__::func_314(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_10__::func_287(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_228, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_10__::func_302(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_220);
	}
	__LIB_10__::func_461(uParam0);
	__LIB_10__::func_408(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_228);
	Global_43800 = uParam0->f_228;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_564(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_10__::func_539(&(cParam0->f_32), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_565(var uParam0, struct<4> Param1, int iParam5)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_10__::func_540(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_10__::func_480(uParam0);
			break;
		case 2:
			__LIB_10__::func_541(uParam0);
			break;
	}
}

int func_566(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1454;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_241[iParam1 /*18*/];
		fVar3 = uParam0->f_782[uParam0->f_1454 /*41*/].f_7;
		fVar4 = uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!__LIB_10__::func_333(uParam0, iVar2))
				{
					uParam0->f_1451 = iParam1;
				}
				uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225))) || (!__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 128) && uParam0->f_1665))
			{
				if (uParam0->f_1665)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1667, 0.1f, -1, false);
					if (!__LIB_10__::func_278(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1667, 24, 1000);
					__LIB_10__::func_365(uParam0, 8);
				}
				else
				{
					__LIB_10__::func_293(uParam0, 131072);
					__LIB_10__::func_365(uParam0, 11);
				}
			}
			else if (uParam0->f_1663)
			{
				__LIB_10__::func_365(uParam0, 5);
			}
			else
			{
				__LIB_10__::func_470(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_0__::func_264(&(uParam0->f_1635)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_10__::func_470(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1452), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_10__::func_470(uParam0);
			}
			if ((!uParam0->f_1663 && !uParam0->f_1665) || bVar0)
			{
				uParam0->f_1452 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_10__::func_470(uParam0);
				}
				else
				{
					__LIB_10__::func_544(uParam0, iParam1, bParam2);
					__LIB_1__::func_148(&(uParam0->f_1635));
					__LIB_10__::func_365(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_10__::func_365(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1669)))
				{
					__LIB_5__::func_386(uParam0->f_1669, 0);
				}
			}
			__LIB_1__::func_148(&(uParam0->f_1635));
			__LIB_10__::func_365(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_10__::func_365(uParam0, 10);
				}
				else
				{
					__LIB_10__::func_365(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_10__::func_365(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1635)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1452), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1452 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1667, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_10__::func_365(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_264(&(uParam0->f_1635)) >= 0.75f)
			{
				if (!__LIB_10__::func_278(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
				__LIB_10__::func_293(uParam0, 131072);
				__LIB_10__::func_365(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_567(int iParam0)
{
	if (!__LIB_10__::func_235(iParam0, 8))
	{
		__LIB_8__::func_985(iParam0);
		__LIB_10__::func_548(iParam0);
		__LIB_9__::func_969(iParam0, 8);
	}
}

int func_568(char[4] cParam0)
{
	return 8;
}

void func_569(var uParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(iParam1))
	{
		uParam0->f_56 = iParam1;
		if (!MISC::IS_BIT_SET(uParam0->f_21, 16))
		{
			MISC::SET_BIT(&(uParam0->f_21), 16);
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 16);
	}
	if (iParam2 != 0)
	{
		uParam0->f_55 = iParam2;
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 18);
	}
}

void func_570(int iParam0, vector3 vParam1, int iParam4, char* sParam5, bool bParam6, float fParam7)
{
	if (!MAP::DOES_BLIP_EXIST(*iParam0))
	{
		if (!bParam6)
		{
			*iParam0 = MAP::_BLIP_ADD_FOR_COORD(iParam4, vParam1);
		}
		else
		{
			*iParam0 = MAP::_BLIP_ADD_FOR_RADIUS(iParam4, vParam1, fParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, sParam5);
		}
	}
}

bool func_571(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_572(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;
	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (bParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_573(char* sParam0, bool bParam1)
{
	bool bVar0[1];
	if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0xB8B207C34285E978(sParam0);
		bVar0[0] = bParam1;
		CAM::_0xFEB8646818294C75(sParam0, &bVar0);
	}
}

void func_574(bool bParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 1f);
	}
}

int func_575(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = __LIB_10__::func_530(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

void func_576(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (__LIB_8__::func_588(bParam0, iParam1))
		{
			if (__LIB_8__::func_589(bParam0, iParam1))
			{
				if (__LIB_8__::func_842(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					__LIB_8__::func_590(bParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 9);
		}
	}
}

void func_577(int* iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_1__::func_502(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				__LIB_10__::func_553(iParam0, bParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_578(char* sParam0)
{
	return __LIB_9__::func_24(sParam0);
}

void func_579(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (129 - 1))
	{
		__LIB_0__::func_516(&(uParam0->f_20), iVar0);
		iVar0++;
	}
}

bool func_580(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (__LIB_1__::func_373(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_581(bool bParam0, bool bParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, int iParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(bParam0, uParam2);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(bParam0, bParam1, &Var0, iParam8, fParam9, fParam10, iParam11, iParam13, fParam12);
	}
	else if (!__LIB_0__::func_138(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(bParam0, bParam1, &Var11, iParam8, fParam9, fParam10, iParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(bParam0, false, 0, false);
	}
	if (bParam19)
	{
		__LIB_8__::func_636(bParam0, bParam1, iParam14);
	}
}

void func_582(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	iVar0 = uParam0->f_1454;
	if (iVar0 >= 0 && !__LIB_10__::func_295(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), __LIB_0__::func_67(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), __LIB_0__::func_67(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1458)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1458.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1111[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_1670), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_782[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1111[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 17)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1111[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1111[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668) || iVar26 != uParam0->f_1668))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
											__LIB_10__::func_309(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_10__::func_309(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1474.f_22 != bVar30);
								uParam0->f_1474.f_16 = iVar23;
								uParam0->f_1474.f_17 = { vVar20 };
								uParam0->f_1474.f_20 = fVar27;
								uParam0->f_1474.f_21 = fVar28;
								uParam0->f_1474.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1474 = { uParam0->f_1458 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1474));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1497.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1497.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1497.f_21 != bVar30);
								uParam0->f_1497.f_16 = iVar23;
								uParam0->f_1497.f_17 = { vVar20 };
								uParam0->f_1497.f_20 = !bVar31;
								uParam0->f_1497.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1497 = { uParam0->f_1458 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1497));
								}
							}
							Jump @1468; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
							}
							StringCopy(&(uParam0->f_1458), "", 64);
							StringCopy(&(uParam0->f_1458.f_8), "", 64);
							__LIB_10__::func_311(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

void func_583(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bVar4 = __LIB_0__::func_2() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(bParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_190);
			}
			__LIB_0__::func_155(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			__LIB_8__::func_686(bParam1, 29, bVar4, 1, 0);
			__LIB_8__::func_686(bParam1, 31, bVar4, 1, 0);
			__LIB_8__::func_686(bParam1, 30, bVar4, 1, 0);
			__LIB_8__::func_686(bParam1, 22, bVar4, 1, 0);
			__LIB_8__::func_686(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((__LIB_0__::func_156(32768) && __LIB_0__::func_555(1108822547, 8)) && __LIB_0__::func_157(10, iParam3))
	{
		__LIB_8__::func_865(bParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946804.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = __LIB_0__::func_158(iVar1, 1);
			if (__LIB_0__::func_555(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!__LIB_0__::func_157(iVar1, iParam3))
				{
				}
				else if ((__LIB_0__::func_555(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!__LIB_0__::func_555(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							__LIB_8__::func_686(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						__LIB_0__::func_556(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946804.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
							{
								__LIB_8__::func_686(bParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (__LIB_0__::func_555(iVar3, 1))
							{
								__LIB_0__::func_550(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(bParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(bParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(bParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

void func_584(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(bParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		if (bParam3 && PED::_GET_PED_CROUCH_MOVEMENT(bParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(bParam0, false, 0, false);
		}
		__LIB_1__::func_738(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(bParam0, 188, true);
		}
	}
}

void func_585(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
		}
		__LIB_1__::func_738(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_586(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_161(iParam0, 1);
	__LIB_0__::func_380(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), 2, 6);
	__LIB_0__::func_380(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1 = 0;
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		if (bParam2)
		{
			__LIB_8__::func_904(17, iParam0, 0, 0, 0);
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			__LIB_0__::func_380(&(Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			__LIB_0__::func_380(&(Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_587(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_450(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_122(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_123(iParam0))
	{
		__LIB_1__::func_607(iParam0, 1, 0);
	}
	iVar0 = __LIB_0__::func_223(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (__LIB_0__::func_805(iParam0, 512))
		{
			__LIB_8__::func_904(30, iVar0, 0, 0, 0);
		}
	}
	if ((!__LIB_0__::func_104() && !bParam1) && !__LIB_0__::func_296(0, 0, 1))
	{
		__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_806(iParam0, 6);
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 4);
		}
	}
}

void func_588(char[4] cParam0, char* sParam1, char[12] cParam2)
{
	if (!__LIB_1__::func_588(sParam1, 0, 0, -1, -1, 0))
	{
		__LIB_1__::func_324(sParam1);
		if (!__LIB_0__::func_75(&(cParam0->f_2067)))
		{
			__LIB_1__::func_283(&(cParam0->f_2067), 0);
		}
		else
		{
			__LIB_1__::func_148(&(cParam0->f_2067));
		}
		cParam0->f_2073 = { cParam2 };
		cParam0->f_2076 = MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true);
	}
}

bool func_589()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_516())
	{
		return false;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return false;
	}
	if (!__LIB_3__::func_907(iVar0))
	{
		return false;
	}
	iVar1 = __LIB_1__::func_710(iVar0);
	if (iVar1 == -358215195)
	{
		return false;
	}
	__LIB_1__::func_683(&iVar2, 1);
	return __LIB_3__::func_630(iVar0, iVar2);
}

void func_590(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 524288);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 524288);
	}
}

void func_591(char[4] cParam0, int iParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam1))
	{
		cParam0->f_32.f_4 = *iParam1;
	}
}

void func_592(int iParam0)
{
	iLocal_18 = iParam0;
}

void func_593(int iParam0)
{
	iLocal_19 = iParam0;
}

void func_594(int iParam0, bool bParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, bParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, bParam1);
}

void func_595(int iParam0)
{
	iLocal_22 = iParam0;
}

int func_596(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	uVar1 = PED::_0x5463C962BC7777C3(iParam0, iParam1, &uVar0, 1, 1);
	return uVar1;
}

void func_597(char* sParam0)
{
	if (__LIB_4__::func_68(sParam0, 1))
	{
		__LIB_1__::func_390(sParam0, 1);
	}
}

bool func_598()
{
	return __LIB_0__::func_104();
}

void func_599(char[4] cParam0, int iParam1)
{
	__LIB_10__::func_557(&(cParam0->f_32), iParam1);
}

int func_600(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_1__::func_435(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!__LIB_10__::func_352(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_228, sParam2))
		{
			__LIB_10__::func_457(uParam0, iParam1, 4);
			return 1;
		}
		else if (iParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_228, sParam2))
		{
			__LIB_10__::func_457(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

int func_601(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_4__::func_421(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_602(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_4__::func_421(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_603(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_4__::func_421(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

void func_604(int* iParam0, var uParam1, int iParam2, float fParam3, char* sParam4)
{
	__LIB_2__::func_480(uParam1, 1, 1, 1, 0);
	__LIB_1__::func_480(iParam2);
	MISC::_0x870708A6E147A9AD(*iParam2, sParam4, fParam3, 0, 8, 0, 0, 0, 0, -1);
}

bool func_605(char[4] cParam0)
{
	if (cParam0->f_2 == 3)
	{
		if (!__LIB_10__::func_543(cParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_606(int iParam0, vector3 vParam1, var uParam4, var uParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, uParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_75(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_1__::func_283(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_0__::func_37(uParam4);
	}
	if (__LIB_0__::func_75(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_0__::func_265(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

bool func_607(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return __LIB_8__::func_336(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return __LIB_2__::func_478(iParam2, iParam3, sParam4, iParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

bool func_608(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
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
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
								*iParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
				*iParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_609(var uParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *uParam0, iParam1->f_56, 0);
	fVar0 = __LIB_5__::func_439(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_10__::func_546(uParam0, iParam1, uParam2, fVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_10__::func_537(iParam1, uParam2, uParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_10__::func_245(iParam1, uParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_3__::func_109(iParam1);
			}
		}
	}
}

void func_610(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_241[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 17)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 4) && uParam0->f_241[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_241[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 64) && __LIB_10__::func_332(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_241[iParam1 /*18*/].f_3 >= 0 && uParam0->f_241[iParam1 /*18*/].f_5 >= 0) && uParam0->f_241[iParam1 /*18*/].f_3 != uParam0->f_241[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_10__::func_566(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_611(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_241[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_10__::func_474(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_10__::func_566(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_1638)) >= IntToFloat((uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_10__::func_359(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1537), uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_241[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1451 = iParam1;
			break;
	}
}

void func_612(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_10__::func_559(uParam0);
	__LIB_10__::func_469(uParam0, uParam0->f_1663, uParam0->f_1665);
	__LIB_10__::func_412(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_10__::func_278(uParam0, 33554432)) && !__LIB_10__::func_278(uParam0, 4))
		{
			__LIB_10__::func_484(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!__LIB_10__::func_278(uParam0, 4))
	{
		if (__LIB_10__::func_413(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				__LIB_10__::func_293(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_10__::func_484(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = __LIB_10__::func_483(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					__LIB_10__::func_293(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1455 == -1f || fVar0 <= uParam0->f_1455) || uParam0->f_1456 == uParam0->f_1454)
				{
					if (uParam0->f_1456 != uParam0->f_1454)
					{
					}
					uParam0->f_1454 = uParam0->f_1456;
					uParam0->f_1455 = fVar0;
					__LIB_10__::func_293(uParam0, 16);
					if (((!__LIB_10__::func_278(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						__LIB_10__::func_432(uParam0);
						__LIB_10__::func_293(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				__LIB_10__::func_279(uParam0, 16);
			}
		}
		if (uParam0->f_1456 + 1 >= 8)
		{
			uParam0->f_1456 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1456 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_782[iVar2 /*41*/].f_29)
				{
					uParam0->f_1456 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1456 = 0;
			}
		}
		if (uParam0->f_1454 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (__LIB_10__::func_278(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_782[uParam0->f_1454 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 + uParam0->f_782[uParam0->f_1454 /*41*/].f_10))
			{
				__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1665 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1667) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1667, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
			}
		}
		else if ((uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1664))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1664, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || __LIB_10__::func_278(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645) && __LIB_10__::func_483(uParam0, uParam0->f_1454) < 10000f) && __LIB_10__::func_278(uParam0, 16)) || __LIB_10__::func_278(uParam0, 4))
		{
			if (!__LIB_10__::func_278(uParam0, 4))
			{
				__LIB_10__::func_293(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				__LIB_10__::func_279(uParam0, 4);
			}
		}
	}
	else if (__LIB_10__::func_278(uParam0, 4))
	{
		__LIB_10__::func_279(uParam0, 4);
	}
}

void func_613(char[4] cParam0)
{
	if (!__LIB_10__::func_235(*cParam0, 4))
	{
		if (__LIB_0__::func_266(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
		{
			if (cParam0->f_2204 == -1)
			{
				cParam0->f_2204 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - cParam0->f_2204) > 120000)
			{
				__LIB_10__::func_567(*cParam0);
			}
		}
		else if (cParam0->f_2204 != -1)
		{
			cParam0->f_2204 = -1;
		}
	}
}

void func_614(int iParam0)
{
	Global_21 = (Global_21 || iParam0);
}

void func_615(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::_0xBD62D98799A3DAF0(Global_36308[iParam0], iParam1);
		}
	}
}

void func_616()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
}

bool func_617(int iParam0)
{
	return (Global_1934182.f_74 && iParam0) != 0;
}

bool func_618(int iParam0)
{
	return Global_1934182[iParam0 /*18*/].f_15;
}

bool func_619(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 6);
}

void func_620()
{
	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		Global_0.f_1 = -1;
		return;
	}
	__LIB_0__::func_380(&Global_0, 8);
	Global_0.f_1 = -1;
}

void func_621(int iParam0)
{
	var uVar0;
	MemCopy(&uVar0, {Global_1835011[iParam0 /*74*/].f_3}, 3);
	if ((__LIB_0__::func_2() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar0)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_7, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1835011[iParam0 /*74*/].f_7);
	}
}

bool func_622(int iParam0, int iParam1)
{
	return (Global_1392240.f_1[iParam0 /*18*/].f_16 && iParam1) != 0;
}

void func_623(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_3 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_3 = iParam1;
	return;
}

bool func_624(int iParam0)
{
	switch (iParam0)
	{
		case joaat("W_SP_BOWARROW_CHARLES"):
		case joaat("W_MELEE_HATCHET04"):
		case joaat("W_REPEATER_CARBINE01"):
		case joaat("W_MELEE_TOMAHAWK02"):
		case joaat("W_MELEE_KNIFE08"):
		case joaat("W_MELEE_KNIFE20"):
		case joaat("W_MELEE_HATCHET05"):
		case joaat("W_MELEE_LASSO03"):
		case joaat("W_MELEE_KNIFE10"):
		case joaat("W_MELEE_KNIFE09"):
		case joaat("W_MELEE_KNIFE17"):
		case joaat("W_MELEE_HATCHET02"):
		case joaat("W_MELEE_HATCHET03"):
		case joaat("W_REVOLVER_SCHOFIELD01"):
		case joaat("W_MELEE_LASSO01"):
		case joaat("W_SHOTGUN_REPEATING01"):
		case joaat("W_REPEATER_WINCHESTER01"):
		case joaat("W_MELEE_TOMAHAWK01"):
		case joaat("W_PISTOL_MAUSER01"):
		case joaat("W_REVOLVER_CATTLEMAN01"):
		case joaat("W_MELEE_KNIFE16"):
		case joaat("W_SHOTGUN_SEMIAUTO01"):
		case joaat("W_MELEE_KNIFE15"):
		case joaat("W_MELEE_KNIFE03"):
		case joaat("W_MELEE_BROKENSWORD01"):
		case joaat("W_SHOTGUN_PUMPACTION01"):
		case joaat("W_MELEE_KNIFE01"):
		case joaat("W_MELEE_KNIFE02"):
		case joaat("W_MELEE_KNIFE04"):
		case joaat("W_PISTOL_VOLCANIC01"):
		case joaat("W_MELEE_KNIFE19"):
		case joaat("W_PISTOL_SEMIAUTO01"):
		case joaat("W_RIFLE_BOLTACTION01"):
		case joaat("W_MELEE_KNIFE18"):
		case joaat("W_REVOLVER_DOUBLEACTION06"):
		case joaat("W_MELEE_KNIFE06"):
		case joaat("W_RIFLE_CARCANO01"):
		case joaat("W_REVOLVER_SCHOFIELD02"):
		case joaat("W_REPEATER_PUMPACTION01"):
		case joaat("W_MELEE_KNIFE07"):
		case joaat("W_REVOLVER_SCHOFIELD03"):
		case joaat("W_REVOLVER_CATTLEMAN02"):
		case joaat("W_RIFLE_ROLLINGBLOCK01"):
		case joaat("W_REVOLVER_DOUBLEACTION03"):
		case joaat("W_REVOLVER_SCHOFIELD04"):
		case joaat("W_PISTOL_MAUSER02"):
		case joaat("W_MELEE_HATCHET06"):
		case joaat("W_MELEE_KNIFE05"):
		case joaat("W_REPEATER_HENRY01"):
		case joaat("W_REVOLVER_CATTLEMAN03"):
		case joaat("W_REVOLVER_DOUBLEACTION02"):
		case joaat("W_MELEE_KNIFE12"):
		case joaat("W_SHOTGUN_DOUBLEBARREL01"):
		case joaat("W_MELEE_KNIFE14"):
		case joaat("W_MELEE_HATCHET07"):
		case joaat("W_MELEE_KNIFE11"):
		case joaat("W_REVOLVER_DOUBLEACTION01"):
		case joaat("W_MELEE_KNIFE13"):
		case joaat("W_RIFLE_SPRINGFIELD01"):
			return true;
		default:
			break;
	}
	return false;
}

void func_625(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16078)
	{
		iVar1 = Global_1310750.f_16078[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			if (BUILTIN::VDIST(VOLUME::_0xC4019CF9AE8E931A(iVar1), vParam0) < fParam3)
			{
				VOLUME::_0xFDFECC6EE4491E11(iVar1);
				Global_1310750.f_16078[iVar0] = 0;
				Global_17504.f_2084[iVar0 /*5*/] = { 0f, 0f, 0f };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = -1;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = 0;
			}
		}
		iVar0++;
	}
}

Vector3 func_626(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2644.397f, -1296.915f, 53.3029f;
		case 1:
			return 1289.142f, -1305.846f, 77.34f;
		case 2:
			return -306.3943f, 771.1057f, 119.2639f;
		case 3:
			return -815.711f, -1276.18f, 43.997f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_627(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -63.95661f;
		case 1:
			return 0f, 0f, 139.649f;
		case 2:
			return 0f, 0f, 10.06205f;
		case 3:
			return 0f, 0f, 89.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_628(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 18.36461f, 16.07587f, 4.061802f;
		case 1:
			return 12.37f, 19.599f, 5.349f;
		case 2:
			return 9.925132f, 17.83831f, 3.145048f;
		case 3:
			return 7.8f, 12.9f, 2.9f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_629(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "app";
		case 1:
			return "cas";
		case 2:
			return "cur";
		case 3:
			return "ftr";
		default:
			break;
	}
	return "";
}

Vector3 func_630()
{
	return -433.5319f, 505.9023f, 96.77488f;
}

int func_631(int iParam0)
{
	return Global_40.f_9422[iParam0 /*7*/];
}

bool func_632(int iParam0)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_9052, iParam0);
}

void func_633(int iParam0, int iParam1)
{
	Global_1425247.f_12[iParam0] = iParam1;
}

bool func_634(int iParam0)
{
	return (Global_1934765.f_67 && iParam0) != 0;
}

void func_635(int iParam0)
{
	Global_1934765.f_67 = (Global_1934765.f_67 - (Global_1934765.f_67 && iParam0));
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -678244495;
		case 1:
			return -678244495;
		case 2:
			return -678244495;
		case 4:
			return -678244495;
		case 5:
			return -678244495;
		case 6:
			return -678244495;
		case 7:
			return -678244495;
		case 8:
			return -678244495;
		case 9:
			return -678244495;
		case 10:
			return -678244495;
		case 11:
			return -678244495;
		case 12:
			return -678244495;
		case 14:
			return -936216634;
		case 13:
			return -936216634;
		case 15:
			return -936216634;
		case 16:
			return -936216634;
		case 17:
			return -936216634;
		case 18:
			return -936216634;
		case 19:
			return -936216634;
		case 20:
			return joaat("BLIP_STYLE_SHOP");
		case 21:
			return joaat("BLIP_STYLE_SHOP");
		case 22:
			return joaat("BLIP_STYLE_SHOP");
		case 23:
			return joaat("BLIP_STYLE_SHOP");
		case 24:
			return joaat("BLIP_STYLE_SHOP");
		case 25:
			return joaat("BLIP_STYLE_SHOP");
		case 26:
			return joaat("BLIP_STYLE_SHOP");
		case 28:
			return joaat("BLIP_STYLE_SHOP");
		case 29:
			return joaat("BLIP_STYLE_SHOP");
		case 33:
			return joaat("BLIP_STYLE_SHOP");
		case 34:
			return joaat("BLIP_STYLE_SHOP");
		case 30:
			return joaat("BLIP_STYLE_SHOP");
		case 32:
			return joaat("BLIP_STYLE_SHOP");
		case 31:
			return joaat("BLIP_STYLE_SHOP");
		case 41:
			return joaat("BLIP_STYLE_SHOP");
		case 42:
			return joaat("BLIP_STYLE_SHOP");
		case 35:
			return joaat("BLIP_STYLE_SHOP");
		case 36:
			return joaat("BLIP_STYLE_SHOP");
		case 37:
			return joaat("BLIP_STYLE_SHOP");
		case 38:
			return joaat("BLIP_STYLE_SHOP");
		case 39:
			return joaat("BLIP_STYLE_SHOP");
		case 27:
			return joaat("BLIP_STYLE_SHOP");
		case 45:
			return joaat("BLIP_STYLE_SHOP");
		case 40:
			return joaat("BLIP_STYLE_SHOP");
		case 43:
			return joaat("BLIP_STYLE_SHOP");
		case 44:
			return joaat("BLIP_STYLE_SHOP");
		case 46:
			return -972966383;
		case 47:
			return -972966383;
		case 48:
			return -972966383;
		case 49:
			return -678244495;
		case 50:
			return -678244495;
		case 51:
			return -678244495;
		case 52:
			return 1560611276;
		case 53:
			return -494978356;
		case 54:
			return -494978356;
		case 55:
			return -494978356;
		case 56:
			return -494978356;
		case 57:
			return -507182222;
		case 58:
			return -1337945352;
		case 59:
			return -678244495;
		case 60:
			return -678244495;
		case 61:
			return -678244495;
		case 62:
			return -383696203;
		default:
			break;
	}
	return 0;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MG_POKER");
		case 1:
			return joaat("BLIP_MG_BLACKJACK");
		case 2:
			return joaat("BLIP_MG_DOMINOES");
		case 4:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET");
		case 5:
			return joaat("BLIP_SUMMER_COW");
		case 6:
			return joaat("BLIP_SUMMER_HORSE");
		case 7:
			return joaat("BLIP_FENCE_BUILDING");
		case 8:
			return joaat("BLIP_MG_DOMINOES_ALL3S");
		case 9:
			return joaat("BLIP_MG_DOMINOES_ALL5S");
		case 10:
			return joaat("BLIP_MG_DOMINOES_DRAW");
		case 11:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT");
		case 12:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS");
		case 14:
			return joaat("BLIP_PROC_LOANSHARK");
		case 13:
			return joaat("BLIP_AMBIENT_HERD");
		case 16:
			return joaat("BLIP_PROC_BOUNTY_POSTER");
		case 17:
			return joaat("BLIP_AMBIENT_COACH");
		case 18:
			return joaat("BLIP_AMBIENT_TRAIN");
		case 19:
			return joaat("BLIP_AMBIENT_RIVERBOAT");
		case 20:
			return joaat("BLIP_SHOP_STORE");
		case 21:
			return joaat("BLIP_SHOP_SHADY_STORE");
		case 22:
			return joaat("BLIP_AMBIENT_QUARTERMASTER");
		case 23:
			return joaat("BLIP_SHOP_GUNSMITH");
		case 24:
			return joaat("BLIP_SHOP_COACH_FENCING");
		case 25:
			return joaat("BLIP_SHOP_DOCTOR");
		case 26:
			return joaat("BLIP_SHOP_TAILOR");
		case 28:
			return joaat("BLIP_SHOP_BLACKSMITH");
		case 29:
			return joaat("BLIP_SHOP_TRAINER");
		case 33:
			return joaat("BLIP_POST_OFFICE");
		case 34:
			return joaat("BLIP_POST_OFFICE_REC");
		case 30:
			return joaat("BLIP_SHOP_TRAIN");
		case 31:
			return joaat("BLIP_SHOP_BARBER");
		case 32:
			return joaat("BLIP_SHOP_BUTCHER");
		case 35:
			return joaat("BLIP_SHOP_TACKLE");
		case 36:
			return joaat("BLIP_SHOP_ANIMAL_TRAPPER");
		case 37:
			return joaat("BLIP_SHOP_HORSE");
		case 38:
			return joaat("BLIP_SHOP_HORSE_FENCING");
		case 39:
			return joaat("BLIP_SHOP_HORSE_SADDLE");
		case 27:
			return joaat("BLIP_SALOON");
		case 40:
			return joaat("BLIP_AMBIENT_NEWSPAPER");
		case 41:
			return joaat("BLIP_SHOP_MARKET_STALL");
		case 42:
			return joaat("BLIP_SHOP_MARKET_STALL");
		case 43:
			return joaat("BLIP_HOTEL_BED");
		case 44:
			return joaat("BLIP_PHOTO_STUDIO");
		case 45:
			return joaat("BLIP_STABLE");
		case 46:
			return joaat("BLIP_PROC_HOME");
		case 47:
			return joaat("BLIP_PROC_HOME_LOCKED");
		case 48:
			return joaat("BLIP_PROC_HOME");
		case 49:
			return joaat("BLIP_AMBIENT_TELEGRAPH");
		case 50:
			return joaat("BLIP_AMBIENT_COACH_TAXI");
		case 51:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 52:
			return joaat("BLIP_REGION_CARAVAN");
		case 53:
			return joaat("BLIP_EVENT_APPLESEED");
		case 54:
			return joaat("BLIP_EVENT_CASTOR");
		case 55:
			return joaat("BLIP_EVENT_RAILROAD_CAMP");
		case 56:
			return joaat("BLIP_EVENT_RIGGS_CAMP");
		case 57:
			return joaat("BLIP_REGION_HIDEOUT");
		case 58:
			return joaat("BLIP_PROC_HOME");
		case 59:
			return joaat("BLIP_MG_FISHING");
		case 60:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 61:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 62:
			return joaat("BLIP_TOWN");
		default:
			break;
	}
	return 0;
}

int func_638(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 76;
			break;
		case 2:
			iVar0 = 26;
			break;
		case 3:
			iVar0 = 105;
			break;
		case 4:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 38;
			break;
		case 6:
			iVar0 = 115;
			break;
	}
	return iVar0;
}

Vector3 func_639(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -274.9763f, 805.6725f, 118.3688f;
		case 3:
			return 1233.915f, -1293.723f, 75.902f;
		case 4:
			return 2513.311f, -1304.996f, 47.954f;
		case 2:
			return -1809.173f, -352.972f, 163.661f;
		case 5:
			return -757.932f, -1265.766f, 43.041f;
		case 6:
			return -5532.741f, -2927.213f, -2.361f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_640(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -789.869f, -1362.602f, 43.687f;
		case 1:
		case 2:
			return 2686.483f, -1362.37f, 48.2681f;
		case 0:
			return 2541.448f, -1281.873f, 49.26815f;
		case 3:
			return -354.8969f, 705.4585f, 116.9782f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_641()
{
	return 711.6718f, -828.5062f, 50.8174f;
}

bool func_642()
{
	return Global_1935183.f_3;
}

bool func_643(int iParam0)
{
	return (Global_40.f_12019.f_3 && iParam0) != 0;
}

int func_644()
{
	return Global_1572864;
}

int func_645(int iParam0)
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool func_646(int iParam0)
{
	return (Global_1392135.f_1 && iParam0) != 0;
}

char* func_647()
{
	return "ClerkAggroed";
}

void func_648(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT1_DAY"), bParam0);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT1_EVENING"), bParam1);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT1_NIGHT"), bParam2);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT2_DAY"), bParam0);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT2_EVENING"), bParam1);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT2_NIGHT"), bParam2);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT3_DAY"), bParam0);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT3_EVENING"), bParam1);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT3_NIGHT"), bParam2);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT4_DAY"), bParam0);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT4_EVENING"), bParam1);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LNS_TENANT4_NIGHT"), bParam2);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(870756084, bParam3);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LONNIES_FLOOR_STASH"), bParam3);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LONNIES_PILLOW_STASH"), bParam3);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LONNIES_SACK_STASH"), bParam3);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LONNIES_WALL_STASH"), bParam3);
}

void func_649(int iParam0, int iParam1)
{
	if (__LIB_0__::func_31(iParam0))
	{
		Global_1360165[iParam0 /*1157*/].f_62 = iParam1;
	}
}

var func_650()
{
	return Global_1425247.f_56;
}

var func_651()
{
	return Global_1425247.f_57;
}

bool func_652(int iParam0)
{
	return __LIB_0__::func_694(&(Global_1425247.f_9), iParam0, 2);
}

char[] func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_FAIL_TO_FIND_CREATE_LOCATION";
		case 1:
			return "CHEAT_FAIL_TO_CREATE";
		case 3:
			return "CHEAT_ADDED_OUTFITS";
		case 2:
			return "CHEAT_FAILED_TO_ADD_OUTFITS";
		case 4:
			return "CHEAT_UNLOCKED_RECIPES";
		case 5:
			return "CHEAT_UNABLE_TO_ACTIVATE";
		case 6:
			return "CHEAT_UNABLE_TO_ACTIVATE_SHOP";
		case 8:
			return "CHEAT_UNABLE_TO_ACTIVATE_CAMP";
		case 9:
			return "CHEAT_UNABLE_TO_ACTIVATE_HOME";
		case 7:
			return "CHEAT_UNABLE_TO_ACTIVATE_GUAMA";
		case 10:
			return "CHEAT_WEAPON_ACTIVATE";
		case 11:
			return "CHEAT_INVALID_LOCATION";
		case 12:
			return "CHEAT_UNABLE_TO_ACTIVATE_DISABLED";
		case 13:
			return "CHEAT_UNABLE_TO_DEACTIVATE_DISABLED";
		case 14:
			return "CHEAT_DISABLED_WHILE_ACTIVE";
		default:
			break;
	}
	return "INVALID_CHEAT_HELP";
}

int func_654(int iParam0)
{
	return Global_40.f_297[iParam0 + 30];
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLIP_MG_POKER"):
			return 3;
		case joaat("BLIP_MG_BLACKJACK"):
			return 1;
		case joaat("BLIP_FENCE_BUILDING"):
			return 7;
		case joaat("BLIP_MG_DOMINOES"):
			return 2;
		case joaat("BLIP_MG_FISHING"):
			return 59;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET"):
			return 4;
		case joaat("BLIP_SUMMER_COW"):
			return 5;
		case joaat("BLIP_MG_DOMINOES_ALL3S"):
			return 8;
		case joaat("BLIP_MG_DOMINOES_ALL5S"):
			return 9;
		case joaat("BLIP_MG_DOMINOES_DRAW"):
			return 10;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT"):
			return 11;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS"):
			return 12;
		case joaat("BLIP_PROC_LOANSHARK"):
			return 14;
		case joaat("BLIP_AMBIENT_HERD"):
			return 13;
		case joaat("BLIP_PROC_BOUNTY_POSTER"):
			return 16;
		case joaat("BLIP_AMBIENT_COACH"):
			return 17;
		case joaat("BLIP_AMBIENT_TRAIN"):
			return 18;
		case joaat("BLIP_AMBIENT_RIVERBOAT"):
			return 19;
		case joaat("BLIP_AMBIENT_QUARTERMASTER"):
			return 22;
		case joaat("BLIP_SHOP_STORE"):
			return 20;
		case joaat("BLIP_SHOP_SHADY_STORE"):
			return 21;
		case joaat("BLIP_SHOP_GUNSMITH"):
			return 23;
		case joaat("BLIP_SHOP_COACH_FENCING"):
			return 24;
		case joaat("BLIP_SHOP_DOCTOR"):
			return 25;
		case joaat("BLIP_SHOP_TAILOR"):
			return 26;
		case joaat("BLIP_SHOP_BLACKSMITH"):
			return 28;
		case joaat("BLIP_SHOP_TRAINER"):
			return 29;
		case joaat("BLIP_POST_OFFICE"):
			return 33;
		case joaat("BLIP_POST_OFFICE_REC"):
			return 34;
		case joaat("BLIP_SHOP_TRAIN"):
			return 30;
		case joaat("BLIP_SHOP_BARBER"):
			return 31;
		case joaat("BLIP_SHOP_BUTCHER"):
			return 32;
		case joaat("BLIP_SHOP_TACKLE"):
			return 35;
		case joaat("BLIP_SHOP_ANIMAL_TRAPPER"):
			return 36;
		case joaat("BLIP_SHOP_HORSE"):
			return 37;
		case joaat("BLIP_SHOP_HORSE_FENCING"):
			return 38;
		case joaat("BLIP_SHOP_HORSE_SADDLE"):
			return 39;
		case joaat("BLIP_PHOTO_STUDIO"):
			return 44;
		case joaat("BLIP_HOTEL_BED"):
			return 43;
		case joaat("BLIP_SALOON"):
			return 27;
		case joaat("BLIP_AMBIENT_NEWSPAPER"):
			return 40;
		case joaat("BLIP_SHOP_MARKET_STALL"):
			return 41;
		case joaat("BLIP_STABLE"):
			return 45;
		case joaat("BLIP_PROC_HOME"):
			return 46;
		case joaat("BLIP_PROC_HOME_LOCKED"):
			return 47;
		case joaat("BLIP_AMBIENT_TELEGRAPH"):
			return 49;
		case joaat("BLIP_AMBIENT_COACH_TAXI"):
			return 50;
		case joaat("BLIP_AMBIENT_THEATRE"):
			return 51;
		case joaat("BLIP_REGION_CARAVAN"):
			return 52;
		case joaat("BLIP_EVENT_APPLESEED"):
			return 53;
		case joaat("BLIP_EVENT_CASTOR"):
			return 54;
		case joaat("BLIP_EVENT_RAILROAD_CAMP"):
			return 55;
		case joaat("BLIP_EVENT_RIGGS_CAMP"):
			return 56;
		case joaat("BLIP_REGION_HIDEOUT"):
			return 57;
		case joaat("BLIP_TOWN"):
			return 62;
		default:
			break;
	}
	return 0;
}

bool func_656()
{
	return __LIB_0__::func_27(Global_1415419.f_3, 1);
}

bool func_657(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2)
		{
			if (Global_1415419.f_9721[iVar0 /*8*/] == iParam0 || ((bParam1 && Global_1415419.f_19[iParam0 /*12*/].f_5 != 0) && Global_1415419.f_19[Global_1415419.f_9721[iVar0 /*8*/] /*12*/].f_5 == Global_1415419.f_19[iParam0 /*12*/].f_5))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_658(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_659()
{
	return __LIB_4__::func_54(6, 8388608);
}

bool func_660()
{
	return __LIB_4__::func_54(6, 4194304);
}

bool func_661()
{
	return __LIB_4__::func_54(6, 2097152);
}

bool func_662()
{
	return __LIB_4__::func_54(6, 33554432);
}

bool func_663()
{
	return __LIB_4__::func_54(6, 67108864);
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_665()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_BANDITO_EXECUTION")) > 0)
	{
		return true;
	}
	return false;
}

var func_666(int iParam0)
{
	return Global_1914319.f_15936[iParam0 /*6*/];
}

bool func_667(int iParam0, var uParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_19))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[iParam0 /*78*/].f_19);
		}
		else
		{
			return false;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_668(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (__LIB_0__::func_730(Global_1392915[iVar0 /*12*/].f_2))
	{
		return false;
	}
	if (__LIB_0__::func_90(&(Global_1392915[iVar0 /*12*/].f_3), 60))
	{
		switch (__LIB_0__::func_96())
		{
			case 1:
				if (!__LIB_0__::func_90(&(Global_1392915[iVar0 /*12*/].f_3), 4))
				{
					return false;
				}
				break;
			case 2:
				if (!__LIB_0__::func_90(&(Global_1392915[iVar0 /*12*/].f_3), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!__LIB_0__::func_90(&(Global_1392915[iVar0 /*12*/].f_3), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!__LIB_0__::func_90(&(Global_1392915[iVar0 /*12*/].f_3), 32))
				{
					return false;
				}
				break;
		}
	}
	return true;
}

int func_669(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 76:
			iVar0 = 3;
			break;
		case 78:
			iVar0 = 382;
			break;
		case 105:
			iVar0 = 72;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 115:
			iVar0 = 348;
			break;
		case 5:
			iVar0 = 256;
			break;
	}
	return iVar0;
}

int func_670(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 4:
			return 128;
		case 3:
			return 64;
		case 5:
			return 512;
	}
	return 0;
}

bool func_671(int iParam0)
{
	return (Global_1395601.f_4 && iParam0) != 0;
}

void func_672(int iParam0, int iParam1)
{
	if (__LIB_9__::func_226())
	{
		return;
	}
	if (__LIB_9__::func_227())
	{
		return;
	}
	Global_1327590.f_9 = iParam0;
	Global_1327590.f_10.f_11 = iParam1;
	Global_1327590.f_10.f_1 = { __LIB_9__::func_228(Global_1327590.f_9) };
	SCRIPTS::REQUEST_SCRIPT(&(Global_1327590.f_10.f_1));
}

void func_673(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319.f_15936[iVar0 /*6*/].f_5)
		{
			Global_1914319.f_15936[iVar0 /*6*/].f_5 = 0;
		}
		__LIB_9__::func_945(&(Global_1914319.f_15936[iVar0 /*6*/]), bParam0);
		iVar0++;
	}
}

void func_674(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		__LIB_9__::func_945(&(Global_1934051.f_23[iVar0]), bParam0);
		iVar0++;
	}
}

void func_675(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 33)
	{
		__LIB_9__::func_945(&(Global_1899778.f_34[iVar0]), bParam0);
		Global_1899778[iVar0] = 0;
		iVar0++;
	}
}

void func_676(bool bParam0)
{
	__LIB_9__::func_945(&Global_1956614, bParam0);
}

void func_677(bool bParam0)
{
	__LIB_9__::func_945(&(Global_1415412.f_3), bParam0);
}

void func_678(bool bParam0)
{
	if (__LIB_1__::func_59(Global_1934051.f_33))
	{
		__LIB_1__::func_96(Global_1934051.f_33, 7148155);
	}
	__LIB_9__::func_945(&(Global_1934051.f_33), bParam0);
}

void func_679(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = __LIB_1__::func_98(__LIB_1__::func_97(iVar0));
		if (iVar1 != 0)
		{
			__LIB_1__::func_96(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (Global_1934051[iVar0 /*2*/].f_1)
		{
			Global_1934051[iVar0 /*2*/].f_1 = 0;
		}
		__LIB_9__::func_945(&(Global_1934051[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

bool func_680()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_41(iVar0);
	if (iVar1 >= 7)
	{
		return true;
	}
	return false;
}

void func_681(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			sVar0 = "new_bank_01_main";
			break;
		case 1:
			sVar0 = "rho_bank_01_main";
			if (bParam1)
			{
				if (__LIB_0__::func_898(-1741667789))
				{
					__LIB_0__::func_804(-1741667789);
				}
			}
			else if (!__LIB_0__::func_898(-1741667789))
			{
				__LIB_0__::func_803(-1741667789);
			}
			break;
		case 2:
			sVar0 = "val_bank_01_main";
			break;
		case 3:
			sVar0 = "bla_bank_01_main";
			break;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	GRAPHICS::_0xBFCB17895BB99E4E(iVar1, bParam1);
	if (GRAPHICS::_0x113857D66A9CABE6(iVar1))
	{
	}
	GRAPHICS::_0x67B0778C62E74423(!bParam1);
	GRAPHICS::_0x6C03118E9E5C1A14(!bParam1);
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			if (__LIB_0__::func_898(-1799960545))
			{
				__LIB_0__::func_804(-1799960545);
			}
		}
		else if (!__LIB_0__::func_898(-1799960545))
		{
			__LIB_0__::func_803(-1799960545);
		}
	}
}

bool func_682(int iParam0)
{
	if ((__LIB_7__::func_907(iParam0, 524288) || __LIB_7__::func_907(iParam0, 1048576)) || __LIB_7__::func_907(iParam0, 2097152))
	{
		return true;
	}
	return false;
}

void func_683(int iParam0)
{
	if (!__LIB_4__::func_54(iParam0, 2))
	{
		return;
	}
	__LIB_7__::func_766(Global_1392240.f_1[iParam0 /*18*/].f_4, 58, Global_1392240.f_1[iParam0 /*18*/], 0);
	__LIB_9__::func_771(iParam0, 2);
}

bool func_684()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PLAYER_CAMP")) < 0)
	{
		return false;
	}
	if (!__LIB_7__::func_772(8388608))
	{
		return false;
	}
	return true;
}

void func_685(int iParam0)
{
	if (__LIB_1__::func_958(&Global_1425247, iParam0, 2))
	{
	}
}

void func_686()
{
	if (__LIB_0__::func_898(-919512195))
	{
		__LIB_0__::func_400(419559004);
		__LIB_0__::func_400(1786931635);
		__LIB_0__::func_400(557212279);
		__LIB_0__::func_400(1426715569);
		__LIB_0__::func_400(2097480406);
		__LIB_5__::func_440("cal_nav_tabacco_burnt");
		__LIB_5__::func_440("cal_nav_tabacco_burning");
		__LIB_5__::func_440("cal_nav_tabacco_mission");
		__LIB_0__::func_401(702350293);
		__LIB_0__::func_401(-677977650);
		__LIB_0__::func_401(26815048);
		__LIB_0__::func_401(-1229109520);
		__LIB_5__::func_441("cal_nav_tabacco_clean");
	}
	else if (__LIB_0__::func_898(-1925798111))
	{
		__LIB_0__::func_400(419559004);
		__LIB_0__::func_400(1786931635);
		__LIB_0__::func_400(557212279);
		__LIB_5__::func_440("cal_nav_tabacco_burnt");
		__LIB_5__::func_440("cal_nav_tabacco_burning");
		__LIB_5__::func_440("cal_nav_tabacco_clean");
		__LIB_0__::func_401(702350293);
		__LIB_0__::func_401(-677977650);
		__LIB_0__::func_401(26815048);
		__LIB_0__::func_401(-1229109520);
		__LIB_0__::func_401(1426715569);
		__LIB_0__::func_401(2097480406);
		__LIB_5__::func_441("cal_nav_tabacco_mission");
	}
	else if (__LIB_0__::func_898(420709909))
	{
		__LIB_0__::func_400(419559004);
		__LIB_0__::func_400(26815048);
		__LIB_0__::func_400(-1229109520);
		__LIB_5__::func_440("cal_nav_tabacco_burnt");
		__LIB_5__::func_440("cal_nav_tabacco_clean");
		__LIB_5__::func_440("cal_nav_tabacco_mission");
		__LIB_0__::func_401(702350293);
		__LIB_0__::func_401(-677977650);
		__LIB_0__::func_401(1786931635);
		__LIB_0__::func_401(557212279);
		__LIB_0__::func_401(1426715569);
		__LIB_0__::func_401(2097480406);
		__LIB_5__::func_441("cal_nav_tabacco_burning");
	}
	else if (__LIB_0__::func_898(1703426636))
	{
		__LIB_0__::func_400(702350293);
		__LIB_0__::func_400(-677977650);
		__LIB_0__::func_400(26815048);
		__LIB_0__::func_400(-1229109520);
		__LIB_0__::func_400(1426715569);
		__LIB_0__::func_400(2097480406);
		__LIB_5__::func_440("cal_nav_tabacco_clean");
		__LIB_5__::func_440("cal_nav_tabacco_mission");
		__LIB_5__::func_440("cal_nav_tabacco_burning");
		__LIB_0__::func_401(419559004);
		__LIB_0__::func_401(1786931635);
		__LIB_0__::func_401(557212279);
		__LIB_5__::func_441("cal_nav_tabacco_burnt");
	}
}

void func_687()
{
	if (__LIB_0__::func_898(371850993))
	{
		__LIB_0__::func_401(263152228);
		__LIB_0__::func_401(1936009597);
	}
	else
	{
		__LIB_0__::func_400(263152228);
		__LIB_0__::func_400(1936009597);
	}
}

void func_688(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = Global_1392915[iParam1 /*12*/];
	if (!__LIB_1__::func_58(iVar0))
	{
		return;
	}
	if (__LIB_1__::func_59(uParam0->f_34[iVar0]))
	{
		__LIB_9__::func_945(&(uParam0->f_34[iVar0]), 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

bool func_689(int iParam0)
{
	return __LIB_1__::func_14(1, iParam0);
}

int func_690(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_5__::func_668(&iVar2, &iVar3, &iVar4);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1393237.f_11[iVar0 /*30*/].f_2 == 0)
		{
			if (__LIB_5__::func_733(iVar0, iVar2) || __LIB_5__::func_733(iVar0, iVar3))
			{
				if (iVar1 < 1083240)
				{
					iVar1 = 1083240;
				}
			}
			else if (__LIB_5__::func_733(iVar0, iVar4))
			{
				if (iVar1 < 720720)
				{
					iVar1 = 720720;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		iVar1 = 360360;
	}
	if (iParam0 != -1)
	{
		if (iParam0 == Global_1393237.f_209)
		{
			iVar1 = BUILTIN::FLOOR((2f * IntToFloat(iVar1)));
		}
	}
	return iVar1;
}

int func_691()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_5__::func_668(&iVar2, &iVar3, &iVar4);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1393237.f_11[iVar0 /*30*/].f_2 != 0)
		{
			if (__LIB_5__::func_733(iVar0, iVar2))
			{
				iVar1 = 2885760;
			}
			else if (__LIB_5__::func_733(iVar0, iVar3))
			{
				if (iVar1 < 2882880)
				{
					iVar1 = 2882880;
				}
			}
			else if (__LIB_5__::func_733(iVar0, iVar4))
			{
				if (iVar1 < 2880000)
				{
					iVar1 = 2880000;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		iVar1 = 1440000;
	}
	return iVar1;
}

Vector3 func_692(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { Global_1393237.f_11[iParam0 /*30*/].f_3 };
	if (!__LIB_0__::func_86(Global_1393237.f_11[iParam0 /*30*/].f_6))
	{
		vVar0 = { Global_1393237.f_11[iParam0 /*30*/].f_6 };
	}
	switch (__LIB_5__::func_695(iParam0))
	{
		case joaat("GANG_ODRISCOLLBOYS_HRT001"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODORISCOLLBOYS_HRT002"):
			vVar3 = { 498.174f, -256.7451f, 143.3717f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT003"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT004"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODORISCOLLBOYS_HRT005"):
			vVar3 = { -1164.453f, 91.68877f, 44.62806f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT006"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT007"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT008"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT009"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT010"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT011"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT012"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_HRT013"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV001"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV002"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV003"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV004"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV005"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV006"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV007"):
			vVar3 = { -1582.034f, 498.4228f, 114.0487f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV008"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV009"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_BGV010"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_CML001"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_CML002"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_CML003"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_CML004"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_ODRISCOLLBOYS_CML005"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM001"):
			vVar3 = { 1172.784f, -2180.536f, 54.65417f };
			break;
		case joaat("GANG_LEMOYNE_SCM002"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM003"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM004"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM005"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM006"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM007"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM008"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM009"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM010"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM011"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM012"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM013"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM014"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM015"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM016"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM017"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM018"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_LEMOYNE_SCM019"):
			vVar3 = { 0f, 0f, 0f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC01_HAT"):
			vVar3 = { 2121.892f, -138.5448f, 49.74233f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC01_SHOE"):
			vVar3 = { 2121.77f, -139.2138f, 49.71836f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC02_HAT"):
			vVar3 = { 2467f, -89.99516f, 45.19795f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC02_SHOE"):
			vVar3 = { 2464.787f, -91.20225f, 45.15141f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC03_HAT"):
			vVar3 = { 2555.149f, -66.95429f, 49.53902f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC03_SHOE"):
			vVar3 = { 2550.89f, -70.14941f, 49.58291f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC04_HAT"):
			vVar3 = { 2320.137f, 9.97915f, 47.49155f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC04_SHOE"):
			vVar3 = { 2319.414f, 11.21736f, 47.49919f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC05_HAT"):
			vVar3 = { 2440.252f, 647.3441f, 69.38534f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC05_SHOE"):
			vVar3 = { 2436.895f, 641.1175f, 69.33932f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC06_HAT"):
			vVar3 = { 2425.307f, 779.8348f, 67.81346f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC06_SHOE"):
			vVar3 = { 2420.318f, 777.536f, 67.6056f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC07_HAT"):
			vVar3 = { 2361.987f, 841.1643f, 78.79051f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC07_SHOE"):
			vVar3 = { 2358.234f, 840.37f, 78.72357f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC08_HAT"):
			vVar3 = { 2409.418f, 884.5353f, 73.20782f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC08_SHOE"):
			vVar3 = { 2404.697f, 883.5768f, 73.29004f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC09_HAT"):
			vVar3 = { 2503.454f, 883.302f, 72.8469f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC09_SHOE"):
			vVar3 = { 2507.415f, 881.9269f, 72.64252f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC10_HAT"):
			vVar3 = { 2391.311f, 1024.629f, 89.66936f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC10_SHOE"):
			vVar3 = { 2386.943f, 1024.219f, 89.71957f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC11_HAT"):
			vVar3 = { 2302.055f, 1055.938f, 115.7271f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC11_SHOE"):
			vVar3 = { 2299.388f, 1052.703f, 115.6931f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC12_HAT"):
			vVar3 = { 2518.389f, 1749.014f, 87.51678f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC12_SHOE"):
			vVar3 = { 2516.159f, 1746.446f, 87.39398f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC13_HAT"):
			vVar3 = { 2793.999f, 2009.131f, 164.7415f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC13_SHOE"):
			vVar3 = { 2793.361f, 2009.616f, 164.7349f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC14_HAT"):
			vVar3 = { 2622.838f, 2106.842f, 173.2784f };
			break;
		case joaat("GANG_MURFREERANSACK_LOC14_SHOE"):
			vVar3 = { 2617.052f, 2106.459f, 173.1849f };
			break;
		case joaat("GANG_SKINNER_TAL001"):
			vVar3 = { -2000.054f, -1828.726f, 112.4916f };
			break;
		case joaat("GANG_SKINNER_TAL002"):
			vVar3 = { -2130.4f, -1775.59f, 141.8341f };
			break;
		case joaat("GANG_SKINNER_TAL003"):
			vVar3 = { -2672.631f, -1457.476f, 145.6802f };
			break;
		case joaat("GANG_SKINNER_TAL004"):
			vVar3 = { -2429.996f, -1337.574f, 152.9727f };
			break;
		case joaat("GANG_SKINNER_TAL005"):
			vVar3 = { -2102.945f, -1257.687f, 122.1524f };
			break;
		case joaat("GANG_SKINNER_TAL006"):
			vVar3 = { -2033.818f, -1269.037f, 114.7918f };
			break;
		default:
			switch (__LIB_5__::func_692(iParam0))
			{
				case 18:
					vVar3 = { __LIB_5__::func_700(iParam0, -5.01f, -1.95f, 0f) };
					break;
				case 16:
					vVar3 = { __LIB_5__::func_700(iParam0, -3.54f, 0.4f, 0f) };
					break;
				case 17:
					vVar3 = { __LIB_5__::func_700(iParam0, -5.01f, -1.95f, 0f) };
					break;
				case 19:
				case 22:
					vVar3 = { __LIB_5__::func_700(iParam0, 0.17f, 0.13f, 0f) };
					break;
				case 20:
				case 23:
					vVar3 = { __LIB_5__::func_700(iParam0, 0f, 0f, 0f) };
					break;
				case 21:
				case 24:
					vVar3 = { __LIB_5__::func_700(iParam0, 0f, 0f, 0f) };
					break;
				case 25:
				case 26:
					vVar3 = { __LIB_5__::func_700(iParam0, 0f, 0f, 0f) };
					break;
				case 27:
				case 28:
					vVar3 = { __LIB_5__::func_700(iParam0, 0f, 0f, 0f) };
					break;
				case 29:
				case 30:
				case 31:
					vVar3 = { __LIB_5__::func_700(iParam0, 0f, 0f, 0f) };
					break;
				case 33:
					vVar3 = { __LIB_5__::func_700(iParam0, 1.94f, 0.3f, 0f) };
					break;
			}
			break;
	}
	if (!__LIB_0__::func_86(vVar3))
	{
		return vVar3;
	}
	else
	{
		vVar3 = { vVar0 };
	}
	return vVar3;
}

void func_693(int iParam0)
{
	if (!__LIB_1__::func_662(iParam0))
	{
		__LIB_1__::func_581(&(Global_1900073.f_1), iParam0);
	}
}

void func_694(int iParam0)
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (__LIB_0__::func_5(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			__LIB_4__::func_683(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

bool func_695(int iParam0)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0 /*10*/].f_1 == 4;
}

bool func_696(int iParam0)
{
	if (__LIB_1__::func_935(iParam0, 32768) || __LIB_1__::func_935(iParam0, 16384))
	{
		return true;
	}
	return false;
}

bool func_697()
{
	if (__LIB_0__::func_296(0, 0, 1))
	{
		switch (__LIB_0__::func_64(0))
		{
			case 1:
			case 6:
			case 8:
			case 10:
				return false;
			default:
				break;
		}
		if (__LIB_0__::func_2() == -1)
		{
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("HOMEINVASION")) > 0)
			{
				return false;
			}
		}
	}
	return true;
}

int func_698()
{
	return __LIB_0__::func_957(__LIB_4__::func_533());
}

int func_699(int iParam0)
{
	return __LIB_9__::func_315(iParam0, 23);
}

bool func_700()
{
	struct<2> Var0;
	float fVar2;
	if (!__LIB_0__::func_28())
	{
		return false;
	}
	if (__LIB_0__::func_13(32768))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RESPAWN_DUMP_BODY")) > 0)
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ARTHURS_GRAVE_SCENE")))
	{
		return false;
	}
	if (!__LIB_1__::func_25(Global_1835011[77 /*74*/].f_1, 1) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FINALE3_OUTRO")) > 0)
	{
		return false;
	}
	if (Global_1914319.f_18941.f_17 || Global_1914319.f_18941.f_15)
	{
		return false;
	}
	if (Global_1392040 & 8388608 != 0)
	{
		return false;
	}
	if (((PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		return false;
	}
	if (Global_1392040.f_6)
	{
		return false;
	}
	if (Global_1914319.f_17369)
	{
		return false;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return false;
	}
	if (UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return false;
	}
	if (Global_1898437 == Global_1347702[42 /*49*/].f_15 && (MISC::GET_GAME_TIMER() - Global_1898438) <= 60000)
	{
		return false;
	}
	Var0 = { __LIB_0__::func_14(joaat("TOTAL_PROGRESS_MADE")) };
	fVar2 = __LIB_0__::func_650(Var0);
	return fVar2 >= 100f;
}

void func_701(int iParam0)
{
	Global_0.f_7 = iParam0;
	__LIB_1__::func_148(&(Global_0.f_9));
}

int func_702(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_2__::func_824(iParam0))
	{
		return 0;
	}
	iVar2 = __LIB_8__::func_983(iParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			if (__LIB_8__::func_623(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1, 1) > __LIB_8__::func_623(iParam3, 1))
			{
				return 1;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_4 = iVar1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 = iVar2;
			__LIB_4__::func_295(iParam0, iParam1, 1);
			Global_1935183.f_24 = 1;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == joaat("TSTAG_NO_TAGS"))
		{
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] = iParam1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_4 = iVar1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 = iVar2;
			__LIB_4__::func_295(iParam0, iParam1, 1);
			Global_1935183.f_24 = 1;
			if (__LIB_8__::func_624(iVar2))
			{
				iVar3 = 0;
				while (iVar3 < 5)
				{
					if (Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/].f_3 == iVar2 && Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] != iParam1)
					{
						if ((Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON") || Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS")) && (iParam1 == joaat("TSTAG_LOCKDOWN_SALOON") || iParam1 == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS")))
						{
							return 0;
						}
						__LIB_4__::func_713(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/]));
					}
					iVar3++;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bLostLogs") && DECORATOR::DECOR_GET_BOOL(*iParam0, "bLostLogs"))
	{
		return false;
	}
	if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(*iParam0))
	{
		return false;
	}
	iVar0 = PROPSET::_GET_VEHICLE_PROPSET(*iParam0);
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar0, iVar1, joaat("P_VEH_LOGWAGON01"), false, false) < 1)
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
		return false;
	}
	iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar1)));
	ITEMSET::DESTROY_ITEMSET(iVar1);
	fVar3 = OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(iVar2, true);
	if (fVar3 < 0.7f)
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bLostLogs", true);
		__LIB_1__::func_240(459, 1);
		return false;
	}
	return true;
}

bool func_704()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_6__::func_677(642);
	iVar1 = __LIB_6__::func_677(643);
	__LIB_1__::func_446(&iVar0, 0, 0, 0, 3, 0, 0, 0);
	__LIB_1__::func_446(&iVar1, 0, 0, 0, 3, 0, 0, 0);
	return ((!__LIB_6__::func_683(__LIB_0__::func_23(), Global_1956614.f_4) || !__LIB_6__::func_683(__LIB_0__::func_23(), iVar0)) || !__LIB_6__::func_683(__LIB_0__::func_23(), iVar1));
}

bool func_705(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		return false;
	}
	else if (__LIB_0__::func_181())
	{
		if ((__LIB_4__::func_271(iParam0, iParam1) == joaat("CS_JOHNMARSTON") || iParam1 == 0) || iParam1 == 8)
		{
			return true;
		}
	}
	else if (__LIB_4__::func_271(iParam0, iParam1) != joaat("CS_JOHNMARSTON"))
	{
		return true;
	}
	return false;
}

void func_706(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, __LIB_0__::func_426(__LIB_0__::func_354(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_707(int iParam0)
{
	var uVar0;
	uVar0 = Global_1393237.f_11[iParam0 /*30*/];
	__LIB_1__::func_446(&uVar0, 0, 0, 0, 1, 0, 0, 0);
	return uVar0;
}

bool func_708(int iParam0)
{
	int iVar0;
	iVar0 = Global_40.f_11182.f_1;
	if (iVar0 == -15)
	{
		return false;
	}
	__LIB_1__::func_446(&iVar0, 0, 0, 0, 5, 0, 0, 0);
	*iParam0 = iVar0;
	return true;
}

void func_709(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4))
	{
		iVar0 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar1 = joaat("HUD_TOASTS");
	}
	else
	{
		iVar2 = __LIB_5__::func_248(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 67108864))
	{
		__LIB_5__::func_785("MISSION_COMPLETE", &(Global_1347702[iParam0 /*49*/].f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, __LIB_3__::func_733(iParam0));
		__LIB_0__::func_425("MISSION_COMPLETE", &(Global_1347702[iParam0 /*49*/].f_3), iVar1, iVar0, joaat("PLAYER_MENU"), "MISSION_COMPLETE_DETAILS", joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

bool func_710(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			if (__LIB_3__::func_674(40, 9) == 10)
			{
				return true;
			}
			break;
		case 20:
			if (__LIB_3__::func_674(40, 8) == 11)
			{
				return true;
			}
			break;
		case 23:
			if (__LIB_3__::func_674(40, 7) == 13)
			{
				return true;
			}
			break;
		case 26:
			if (__LIB_3__::func_674(40, 6) == 14)
			{
				return true;
			}
			break;
		case 5:
			if (__LIB_3__::func_674(40, 5) == 15)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_711(int iParam0)
{
	return __LIB_3__::func_564(119, iParam0);
}

bool func_712(int iParam0)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == joaat("COST_TYPE_CRAFT") && !__LIB_1__::func_114(iParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

void func_713(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_0__::func_450(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_123(iParam0))
	{
		__LIB_0__::func_806(iParam0, 2);
		if (bParam2)
		{
			if (!__LIB_0__::func_296(0, 0, 1))
			{
				__LIB_0__::func_703(1, 4);
			}
		}
		if ((!__LIB_0__::func_104() && !bParam1) && !__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_8__::func_966(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", __LIB_1__::func_377(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

void func_714()
{
	Global_1898164.f_163 = __LIB_0__::func_296(0, 0, 0);
}

bool func_715(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_1392915[iVar0 /*12*/].f_1 == iParam0)
			{
				if (__LIB_1__::func_44(Global_1392915[iVar0 /*12*/].f_4))
				{
					return true;
				}
			}
			iVar0++;
		}
		return false;
	}
	return false;
}

bool func_716(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (__LIB_0__::func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = __LIB_0__::func_560(__LIB_0__::func_12(), iParam0);
		}
		iVar1 = MISC::GET_FRAME_COUNT();
		if (Global_1914319.f_3[iParam0 /*446*/].f_444 >= iVar1)
		{
			return Global_1914319.f_3[iParam0 /*446*/].f_445;
		}
		bVar0 = (__LIB_4__::func_216(iParam1) || __LIB_2__::func_117(__LIB_3__::func_737(iParam0)));
		Global_1914319.f_3[iParam0 /*446*/].f_444 = iVar1;
		Global_1914319.f_3[iParam0 /*446*/].f_445 = bVar0;
	}
	return bVar0;
}

bool func_717()
{
	if (__LIB_1__::func_200(95))
	{
		return true;
	}
	if (__LIB_5__::func_353(95))
	{
		return true;
	}
	if (__LIB_4__::func_54(4, 1048576))
	{
		return true;
	}
	return false;
}

int func_718(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (((((((__LIB_1__::func_307(21, 1, 1) && !__LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"), 1)) || __LIB_1__::func_307(17, 1, 1)) || __LIB_1__::func_307(19, 1, 1)) || __LIB_1__::func_307(9, 1, 1)) || (__LIB_1__::func_307(1, 1, 1) && !__LIB_1__::func_198(joaat("CSTAG_FLOW_JOHN_RECOVER"), 1))) || __LIB_1__::func_307(18, 1, 1)) || __LIB_1__::func_307(4, 1, 1))
			{
				return 1;
			}
			break;
		case 1:
			if ((((__LIB_1__::func_307(22, 1, 1) || __LIB_1__::func_307(15, 1, 1)) || __LIB_1__::func_307(13, 1, 1)) || __LIB_1__::func_307(17, 1, 1)) || __LIB_1__::func_307(5, 1, 1))
			{
				return 1;
			}
			break;
		case 2:
			if (((__LIB_1__::func_307(2, 1, 1) || __LIB_1__::func_307(6, 1, 1)) || __LIB_1__::func_307(9, 1, 1)) || (__LIB_1__::func_307(11, 1, 1) && __LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_719(int iParam0)
{
	switch (iParam0)
	{
		case 654481153:
			if (!__LIB_1__::func_253() || !__LIB_1__::func_185(16))
			{
				return false;
			}
			return true;
		case 1784895540:
			if (!__LIB_1__::func_185(15))
			{
				return false;
			}
			return true;
		case -2036347356:
		case -1567081107:
		case -1511391406:
		case -1341684320:
			return __LIB_1__::func_224(__LIB_1__::func_254(iParam0));
		case -919476462:
			return __LIB_1__::func_305(3);
		default:
			break;
	}
	return true;
}

bool func_720(bool bParam0)
{
	if (__LIB_0__::func_2() == 0)
	{
		return false;
	}
	if (!__LIB_1__::func_187(94))
	{
		return false;
	}
	if ((__LIB_1__::func_200(92) || __LIB_5__::func_353(92)) || __LIB_7__::func_852(92))
	{
		return false;
	}
	if (__LIB_7__::func_851(2) && !bParam0)
	{
		return false;
	}
	if (bParam0 && ((((CAM::_0x1811A02277A9E49D() || !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || PED::IS_PED_IN_ANY_TAXI(Global_35)) || PED::_GET_SEAT_PED_IS_USING(Global_35) != -1) || !__LIB_7__::func_850(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(Global_35, false)))))
	{
		return false;
	}
	return true;
}

bool func_721(int iParam0)
{
	int iVar0;
	if (Global_1347702[iParam0 /*49*/].f_48 == -1)
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_47 == 0)
	{
		return true;
	}
	iVar0 = __LIB_8__::func_997(iParam0);
	return __LIB_1__::func_426(iVar0, 1);
}

void func_722(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 != 0 && __LIB_0__::func_296(0, 0, 1))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 16 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = __LIB_4__::func_824(iParam0);
	if (!bParam5 && __LIB_4__::func_826(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, __LIB_4__::func_816(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_COORD(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		__LIB_0__::func_326(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO");
	}
	__LIB_5__::func_241(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_825(iParam0);
		iVar0 = __LIB_1__::func_953(Global_40.f_4283);
		if (__LIB_0__::func_20(iVar0) && __LIB_1__::func_59(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = __LIB_5__::func_246(iVar0);
		}
		if (__LIB_4__::func_827(iParam0, bVar1, iVar0))
		{
			__LIB_8__::func_715(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_IS_RADAR_HIDDEN_2() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 1 == 0)
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!__LIB_4__::func_826(iParam0) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1)) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 512)) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 2048))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 580546400);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32768 == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == joaat("BLIP_RC") && Global_1347702[iParam0 /*49*/].f_12 & 1 == 0) && Global_1347702[iParam0 /*49*/].f_12 & 2 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -211388321);
		}
		else
		{
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (__LIB_4__::func_828(iParam0))
		{
			if (iParam0 == 97)
			{
				__LIB_1__::func_240(185, 0);
			}
			else
			{
				__LIB_1__::func_240(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		__LIB_3__::func_727(iParam0, 2);
	}
}

bool func_723()
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_1__::func_293(__LIB_3__::func_574(65536), 0, 3, __LIB_3__::func_575(65536));
	if (__LIB_0__::func_6(iVar1))
	{
		iVar0 = __LIB_0__::func_895(iVar1);
		if (!__LIB_0__::func_27(iVar0, 4))
		{
			return false;
		}
	}
	return true;
}

bool func_724(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (__LIB_0__::func_770(6, 8))
		{
			return false;
		}
	}
	if (!__LIB_1__::func_187(58))
	{
		return false;
	}
	if (bParam0)
	{
		if (__LIB_0__::func_770(6, 1))
		{
			if (__LIB_0__::func_181() && !__LIB_0__::func_770(6, 8))
			{
				return true;
			}
			else if (!__LIB_0__::func_181())
			{
				return false;
			}
		}
	}
	return true;
}

void func_725(int iParam0, bool bParam1)
{
	float fVar0;
	fVar0 = BUILTIN::TO_FLOAT(iParam0);
	if (Global_1347477.f_4 + 60000) > MISC::GET_GAME_TIMER()
	{
		fVar0 = (BUILTIN::TO_FLOAT(iParam0) - Global_1347477.f_5);
	}
	if (fVar0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), fVar0, 0, 0, 0);
		Global_1347477.f_5 = BUILTIN::TO_FLOAT(iParam0);
		__LIB_0__::func_597(2, 7000);
	}
	Global_1347477.f_4 = MISC::GET_GAME_TIMER();
	__LIB_1__::func_299(0);
	if (bParam1)
	{
		__LIB_9__::func_469(100f);
	}
}

void func_726(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			__LIB_6__::func_777(0, 26, 476, __LIB_6__::func_710(26), __LIB_6__::func_711(iParam0));
			break;
		case 1:
			__LIB_6__::func_777(1, 26, 476, __LIB_6__::func_710(26), __LIB_6__::func_711(iParam0));
			break;
		case 2:
			__LIB_6__::func_777(2, 26, 476, __LIB_6__::func_710(26), __LIB_6__::func_711(iParam0));
			break;
		case 3:
			__LIB_6__::func_777(3, 26, 476, __LIB_6__::func_710(26), __LIB_6__::func_710(26));
			break;
		case 4:
			__LIB_6__::func_777(4, 105, 72, __LIB_6__::func_710(105), __LIB_6__::func_711(iParam0));
			break;
		case 5:
			__LIB_6__::func_777(5, 105, 72, __LIB_6__::func_710(105), __LIB_6__::func_711(iParam0));
			break;
		case 6:
			__LIB_6__::func_777(6, 105, 72, __LIB_6__::func_710(105), __LIB_6__::func_711(iParam0));
			break;
		case 7:
			__LIB_6__::func_777(7, 105, 72, __LIB_6__::func_710(105), __LIB_6__::func_710(105));
			break;
	}
}

int func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_9__::func_83(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = __LIB_10__::func_43(__LIB_9__::func_20(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

bool func_728(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = __LIB_1__::func_55(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	if (__LIB_1__::func_214(iParam0))
	{
		return true;
	}
	__LIB_1__::func_229(iParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	__LIB_1__::func_788(iVar0);
	iVar2 = __LIB_0__::func_80(Global_1392915[iVar0 /*12*/].f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			__LIB_1__::func_722(Global_1392915[iVar0 /*12*/].f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
		}
		__LIB_1__::func_109(iVar2, 0);
		return true;
	}
	return false;
}

void func_729(bool bParam0)
{
	if (!__LIB_0__::func_65(&Global_0, 2))
	{
		__LIB_1__::func_812(0, 0);
		SAVE::_0x62C9EB51656D68CE(-189896212);
		__LIB_0__::func_47(&Global_0, 2);
		if (bParam0)
		{
			__LIB_0__::func_47(&Global_0, 32);
		}
		__LIB_0__::func_380(&Global_0, 1);
	}
}

void func_730(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("CMD_TENANT1_LONGDAY"), false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1296607096, false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1397600367, false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-680744572, false);
			break;
		case 2:
			__LIB_9__::func_728(0, 0, 0);
			break;
		case 4:
			__LIB_10__::func_648(0, 0, 0, 0);
			break;
		case 7:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("WAT_OLDLADY_LONGDAY"), false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("WAT_OLDLADY_NIGHT"), false);
			break;
	}
}

void func_731()
{
	var uVar0;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "ObjectiveSequence");
	Global_1911643.f_2 = uVar0;
	Global_1911643.f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "Enabled", 0);
	Global_1911643.f_4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uVar0, "Objectives");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1911643.f_4);
}

void func_732(int iParam0)
{
	Global_21 = (Global_21 - (Global_21 && iParam0));
}

char* func_733(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case joaat("SHIFT_F"):
			sVar0 = "shift_f";
			break;
		case joaat("DEMO"):
			sVar0 = "demo";
			break;
		case joaat("INTRO_NOT_DONE"):
			sVar0 = "intro_not_done";
			break;
		case joaat("PRIVATE"):
			sVar0 = "private";
			break;
		case joaat("FRIENDLY"):
			sVar0 = "friendly";
			break;
		case joaat("HARDCORE"):
			sVar0 = "hardcore";
			break;
		case joaat("NEAR_POSSE"):
			sVar0 = "near_posse";
			break;
		case joaat("RANDOM_POSSE"):
			sVar0 = "random_posse";
			break;
		case joaat("OPEN_POSSE"):
			sVar0 = "open_posse";
			break;
		case joaat("FOLLOW_INVITE"):
			sVar0 = "follow_invite";
			break;
		case joaat("RANDOM_REGION"):
			sVar0 = "random_region";
			break;
		case joaat("LAST_REGION"):
			sVar0 = "last_region";
			break;
		case joaat("SPAWN_LOCATION"):
			sVar0 = "spawn_location";
			break;
		case joaat("LAST_LOCATION"):
			sVar0 = "last_location";
			break;
		case joaat("CAMP"):
			sVar0 = "camp";
			break;
		case joaat("HANDHELD"):
			sVar0 = "handheld";
			break;
		case joaat("BENCHMARK"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_734()
{
	Global_1905944.f_5693 = -1;
}

void func_735()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			Global_1934765.f_39[iVar0] = Global_40.f_283[iVar0];
		}
		else
		{
			Global_1934765.f_39[iVar0] = Global_1058888.f_40567[iVar0];
		}
		iVar0++;
	}
}

void func_736(bool bParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
}

void func_737(bool bParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	__LIB_0__::func_11();
	if (bParam1)
	{
		__LIB_0__::func_146(-1);
	}
}

void func_738()
{
	Global_1934765++;
}

void func_739(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1310750.f_16074 = (Global_1310750.f_16074 || iParam0);
	}
	else
	{
		Global_1310750.f_16074 = (Global_1310750.f_16074 - (Global_1310750.f_16074 && iParam0));
	}
}

void func_740(int iParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(iParam0);
	}
}

void func_741(int iParam0)
{
	if (!GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDFEA23EC90113657(iParam0);
	}
}

void func_742()
{
	__LIB_5__::func_440("nav_sdn_docks_pre_es");
	__LIB_5__::func_440("nav_sdn_docks_korrigan_pre_es");
	__LIB_5__::func_440("nav_sdn_docks_antenor_pre_es");
	__LIB_5__::func_440("nav_sdn_docks_trains_pre_es");
	__LIB_5__::func_440("nav_sdn_docks_korrigan_antenor_pre_es");
	__LIB_5__::func_440("nav_sdn_docks_antenor_trains_pre_es");
	__LIB_5__::func_440("nav_sdn_docks_korrigan_trains_pre_es");
	__LIB_5__::func_440("nav_sdn_docks_korrigan_antenor_trains_pre_es");
	__LIB_5__::func_440("nav_sdn_docks_es");
	__LIB_5__::func_440("nav_sdn_docks_korrigan_es");
	__LIB_5__::func_440("nav_sdn_docks_antenor_es");
	__LIB_5__::func_440("nav_sdn_docks_trains_es");
	__LIB_5__::func_440("nav_sdn_docks_korrigan_antenor_es");
	__LIB_5__::func_440("nav_sdn_docks_antenor_trains_es");
	__LIB_5__::func_440("nav_sdn_docks_korrigan_trains_es");
	__LIB_5__::func_440("nav_sdn_docks_korrigan_antenor_trains_es");
}

void func_743(var uParam0, vector3 vParam1, float fParam4)
{
	if (*uParam0 == -1)
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, 1, -1, 0);
	}
}

void func_744(var uParam0, int iParam1)
{
	if (*uParam0 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
		*uParam0 = -1;
	}
}

bool func_745(int iParam0)
{
	switch (iParam0)
	{
		case 42:
			return true;
		default:
			break;
	}
	return false;
}

int func_746(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 0;
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_748()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	Global_40.f_9074 = 0;
	Global_40.f_9074.f_1 = 0;
}

void func_749(bool bParam0)
{
	MAP::SET_MINIMAP_HIDE_FOW(bParam0);
	if (bParam0)
	{
		MAP::_REVEAL_MINIMAP_FOW(0);
	}
	else
	{
		MAP::_RESET_MINIMAP_FOW(0);
	}
}

bool func_750(int iParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return false;
	}
	if (!STREAMING::_GET_IMAP_POSITION_AND_HEADING(iParam0, &vVar0, &uVar3))
	{
		return false;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar0) <= fParam1)
	{
		return true;
	}
	return false;
}

void func_751(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ASB_GUNSMITH"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("ASB_SHERIFF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_LCMP_FOREMAN"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("AMD_GENERAL_STORE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("AMD_UNDERTAKER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("AMD_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("BLW_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("BLW_GENERAL_STORE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("BLW_POLICE_CHIEF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("BRA_STABLE_HAND"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_HMSTD_FOREMAN"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_HMSTD_WORKER_1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_HMSTD_WORKER_2"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EA_RCAMP_FOREMAN"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EMR_FATHER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("EMR_SON1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("LAG_MOTHER1"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("CRO_RANCHER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_FENCE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_GUNSMITH"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_SHERIFF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("RHD_TRAIN_STAT_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_BARTENDER_SLUMS"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GEN_STORE_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GEN_STORE_SHADY"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_GUNSMITH"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("SDN_POLICE_CHIEF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("STR_FREIGHT_CLERK"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("STR_GENERAL_STORE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("STR_SHERIFF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("STR_WELCOME_CENTER_CLERK"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("TBL_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("TBL_BUTCHER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("TBL_GENERAL_STORE_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("TBL_GUNSMITH_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_BARBER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_BUTCHER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_DOCTOR"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_GENERAL_STORE"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_GUNSMITH"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_HOTEL_OWNER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_SHERIFF"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VAL_SLUM_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VHT_BARTENDER"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VHT_STATION_CLERK"), iParam0);
	PERSCHAR::_0x2DF89CD2ED1D0BDE(joaat("VHT_EXOTIC_STORE"), iParam0);
}

void func_752(int iParam0)
{
	MAP::_0x563FCB6620523917(__LIB_9__::func_28(iParam0), -514130076);
}

void func_753(int iParam0)
{
	if (MAP::_0xE38450DBCBC70E3D(__LIB_9__::func_28(iParam0), -514130076))
	{
		MAP::_0x6786D7AFAC3162B3(__LIB_9__::func_28(iParam0));
	}
}

void func_754(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_401(iParam0);
	}
	else
	{
		__LIB_0__::func_400(iParam0);
	}
}

void func_755(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	var uVar0;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5836[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, sParam3, iParam4);
}

void func_756(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	var uVar0;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5848[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, sParam3, iParam4);
}

void func_757(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	var uVar0;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5859[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, sParam3, sParam4);
}

void func_758()
{
	int iVar0;
	Global_1946804.f_850 = 0;
	Global_1946804.f_855 = 0;
	Global_1946804.f_856 = 0;
	Global_1946804.f_852 = 0;
	Global_1946804.f_853 = 0;
	Global_1946804.f_854 = 0;
	Global_1946804.f_851 = 0;
	iVar0 = 0;
	while (iVar0 < 37)
	{
		Global_1946804.f_529[iVar0] = 0;
		iVar0++;
	}
	__LIB_0__::func_194(8);
	__LIB_0__::func_194(16);
}

int func_759()
{
	if (__LIB_0__::func_241() == 1160113249)
	{
		return -2091943191 /* GXTEntry: "Left Parted" */;
	}
	return 933586678 /* GXTEntry: "Right Parted" */;
}

bool func_760(int iParam0)
{
	if (iParam0 == 3)
	{
		return false;
	}
	return true;
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_FISH_BLUEGILL_LEGENDARY");
		case 1:
			return joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY");
		case 2:
			return joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY");
		case 3:
			return joaat("PROVISION_FISH_CHANNEL_CATFISH_LEGENDARY");
		case 4:
			return joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY");
		case 5:
			return joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY");
		case 6:
			return joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY");
		case 7:
			return joaat("PROVISION_FISH_MUSKIE_LEGENDARY");
		case 8:
			return joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY");
		case 9:
			return joaat("PROVISION_FISH_PERCH_LEGENDARY");
		case 10:
			return joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY");
		case 11:
			return joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY");
		case 12:
			return joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY");
		case 13:
			return joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY");
		case 14:
			return joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY");
		default:
			break;
	}
	return 0;
}

int func_762(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		default:
			break;
	}
	return 15;
}

int func_763(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHBLUEGIL_01_MS");
			}
			else
			{
				iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			}
			break;
		case 1:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHBULLHEADCAT_01_MS");
			}
			else
			{
				iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			}
			break;
		case 2:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_MS");
			}
			else
			{
				iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			}
			break;
		case 3:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_XL");
			}
			else
			{
				iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			}
			break;
		case 4:
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case 5:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_LG");
			}
			else
			{
				iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			}
			break;
		case 6:
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case 7:
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case 8:
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case 9:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHPERCH_01_MS");
			}
			else
			{
				iVar0 = joaat("A_C_FISHPERCH_01_SM");
			}
			break;
		case 10:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_MS");
			}
			else
			{
				iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			}
			break;
		case 11:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHROCKBASS_01_MS");
			}
			else
			{
				iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			}
			break;
		case 12:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_LG");
			}
			else
			{
				iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			}
			break;
		case 13:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_LG");
			}
			else
			{
				iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			}
			break;
		case 14:
			if (iParam1 == 2)
			{
				iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_LG");
			}
			else
			{
				iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			}
			break;
		default:
			break;
	}
	return iVar0;
}

int func_764(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISHING_SPOT_01"):
			return 1791726215;
		case joaat("LEGENDARY_FISHING_SPOT_02"):
			return -1553566002;
		case joaat("LEGENDARY_FISHING_SPOT_03"):
			return -528070704;
		case joaat("LEGENDARY_FISHING_SPOT_04"):
			return 1214218277;
		case joaat("LEGENDARY_FISHING_SPOT_05"):
			return -1424874851;
		case joaat("LEGENDARY_FISHING_SPOT_06"):
			return -414895106;
		case joaat("LEGENDARY_FISHING_SPOT_07"):
			return -1560294747;
		case joaat("LEGENDARY_FISHING_SPOT_08"):
			return 1937997726;
		case joaat("LEGENDARY_FISHING_SPOT_09"):
			return 505929754;
		case joaat("LEGENDARY_FISHING_SPOT_10"):
			return -312076753;
		case joaat("LEGENDARY_FISHING_SPOT_11"):
			return 235447783;
		case joaat("LEGENDARY_FISHING_SPOT_12"):
			return 1793239293;
		case joaat("LEGENDARY_FISHING_SPOT_13"):
			return -1142443514;
		default:
			break;
	}
	return 0;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISHING_SPOT_01"):
			return -695777111;
		case joaat("LEGENDARY_FISHING_SPOT_02"):
			return 1671816740;
		case joaat("LEGENDARY_FISHING_SPOT_03"):
			return 1467033526;
		case joaat("LEGENDARY_FISHING_SPOT_04"):
			return 1178765838;
		case joaat("LEGENDARY_FISHING_SPOT_05"):
			return -1385591042;
		case joaat("LEGENDARY_FISHING_SPOT_06"):
			return -1508614120;
		case joaat("LEGENDARY_FISHING_SPOT_07"):
			return -116204733;
		case joaat("LEGENDARY_FISHING_SPOT_08"):
			return 1041505554;
		case joaat("LEGENDARY_FISHING_SPOT_09"):
			return 756063611;
		case joaat("LEGENDARY_FISHING_SPOT_10"):
			return 1035814529;
		case joaat("LEGENDARY_FISHING_SPOT_11"):
			return -1052716565;
		case joaat("LEGENDARY_FISHING_SPOT_12"):
			return 1265504095;
		case joaat("LEGENDARY_FISHING_SPOT_13"):
			return 1343260208;
		default:
			break;
	}
	return 0;
}

int func_766(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BONE_00"):
			return -507522147;
		case joaat("BONE_01"):
			return 385826331;
		case joaat("BONE_02"):
			return 88906422;
		case joaat("BONE_03"):
			return 400179125;
		case joaat("BONE_04"):
			return 93559592;
		case joaat("BONE_05"):
			return 1011255441;
		case joaat("BONE_06"):
			return 720004565;
		case joaat("BONE_07"):
			return 1620332844;
		case joaat("BONE_08"):
			return 1331375802;
		case joaat("BONE_09"):
			return -2062411225;
		case joaat("BONE_10"):
			return 397365919;
		case joaat("BONE_11"):
			return 1306640139;
		case joaat("BONE_12"):
			return 1008999312;
		case joaat("BONE_13"):
			return 1163767295;
		case joaat("BONE_14"):
			return 857606528;
		case joaat("BONE_15"):
			return 1500468770;
		case joaat("BONE_16"):
			return -2018299223;
		case joaat("BONE_17"):
			return 2019070964;
		case joaat("BONE_18"):
			return -1382547854;
		case joaat("BONE_19"):
			return -1872444404;
		case joaat("BONE_20"):
			return 981506433;
		case joaat("BONE_21"):
			return -1863104923;
		case joaat("BONE_22"):
			return -1623923992;
		case joaat("BONE_23"):
			return -1730324939;
		case joaat("BONE_24"):
			return -1491144008;
		case joaat("BONE_25"):
			return 2101583618;
		case joaat("BONE_26"):
			return -1952302145;
		case joaat("BONE_27"):
			return -640198616;
		case joaat("BONE_28"):
			return -1340078918;
		case joaat("BONE_29"):
			return -1087659311;
		default:
			break;
	}
	return 0;
}

Vector3 func_767(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2638.87f, -1289.67f, 51.32f;
		case 1:
			return 1289.142f, -1305.846f, 77.34f;
		case 2:
			return -307.3165f, 776.0316f, 118.7f;
		case 3:
			return -813.4f, -1275.6f, 44.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_768(int iParam0)
{
	Global_1934266.f_56 = iParam0;
}

void func_769(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	*uParam0 = 0;
	uParam0->f_4 = 0;
}

char* func_770(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 53:
			return "dynamic_list_item_link";
		case 54:
			return "dynamic_list_item_event_channel_hash";
		case 55:
			return "dynamic_list_item_focus_hash";
		case 56:
			return "dynamic_list_item_select_hash";
		case 57:
			return "dynamic_list_item_prompt_text";
		case 58:
			return "dynamic_list_item_prompt_enabled";
		case 59:
			return "dynamic_list_item_prompt_visible";
		case 60:
			return "dynamic_list_item_prompt_option_text";
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
		case 62:
			return "dynamic_list_item_prompt_option_visible";
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 68:
			return "dynamic_list_item_prompt_r3_text";
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
		case 72:
			return "mount_collection_index";
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 76:
			return "invite_unique_id";
		case 77:
			return "invite_tracked";
		case 78:
			return "invite_processed";
		case 79:
			return "invite_script_type";
		case 80:
			return "invite_gang_id";
		case 81:
			return "invite_expiration_time";
		case 82:
			return "invite_filter_type";
		case 83:
			return "invite_feed_message_id";
		default:
			break;
	}
	return "null";
}

int func_771(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PEDEXPRESS_NECK_WIDTH"):
			return 0;
		case joaat("PEDEXPRESS_NECK_DEPTH"):
			return 1;
		case joaat("PEDEXPRESS_SHOULDERS_HEIGHT"):
			return 2;
		case joaat("PEDEXPRESS_SHOULDERS_DEPTH"):
			return 3;
		case joaat("PEDEXPRESS_SHOULDERS_WIDTH"):
			return 4;
		case joaat("PEDEXPRESS_TRAPS"):
			return 5;
		case joaat("PEDEXPRESS_LATS"):
			return 6;
		case joaat("PEDEXPRESS_CHEST_WIDTH"):
			return 7;
		case joaat("PEDEXPRESS_CHEST_DEPTH"):
			return 8;
		case joaat("PEDEXPRESS_BELLY_WIDTH"):
			return 9;
		case joaat("PEDEXPRESS_BELLY_DEPTH"):
			return 10;
		case joaat("PEDEXPRESS_UPPER_ARMS"):
			return 11;
		case joaat("PEDEXPRESS_FOREARMS"):
			return 12;
		case joaat("PEDEXPRESS_UPPER_LEGS"):
			return 13;
		case joaat("PEDEXPRESS_LOWER_LEGS"):
			return 14;
		case joaat("PEDEXPRESS_FACE_WIDTH"):
			return 15;
		case joaat("PEDEXPRESS_BROW_HEIGHT"):
			return 16;
		case joaat("PEDEXPRESS_BROW_WIDTH"):
			return 17;
		case joaat("PEDEXPRESS_BROW_DEPTH"):
			return 18;
		case joaat("PEDEXPRESS_EAR_SIZE"):
			return 19;
		case joaat("PEDEXPRESS_EAR_ROTATION"):
			return 20;
		case joaat("PEDEXPRESS_EAR_LENGTH"):
			return 21;
		case joaat("PEDEXPRESS_EAR_LOBE"):
			return 22;
		case joaat("PEDEXPRESS_CHEEKS_HEIGHT"):
			return 23;
		case joaat("PEDEXPRESS_CHEEKS_WIDTH"):
			return 24;
		case joaat("PEDEXPRESS_CHEEKS_DEPTH"):
			return 25;
		case joaat("PEDEXPRESS_JAW_HEIGHT"):
			return 26;
		case joaat("PEDEXPRESS_JAW_WIDTH"):
			return 27;
		case joaat("PEDEXPRESS_JAW_DEPTH"):
			return 28;
		case joaat("PEDEXPRESS_CHIN_TILT"):
			return 29;
		case joaat("PEDEXPRESS_CHIN_WIDTH"):
			return 30;
		case joaat("PEDEXPRESS_CHIN_DEPTH"):
			return 31;
		case joaat("PEDEXPRESS_EYE_HEIGHT"):
			return 32;
		case joaat("PEDEXPRESS_EYE_WIDTH"):
			return 33;
		case joaat("PEDEXPRESS_EYE_DEPTH"):
			return 34;
		case joaat("PEDEXPRESS_EYE_ANGLE"):
			return 35;
		case joaat("PEDEXPRESS_EYE_H_POS"):
			return 36;
		case joaat("PEDEXPRESS_EYE_V_POS"):
			return 37;
		case joaat("PEDEXPRESS_NOSE_WIDTH"):
			return 38;
		case joaat("PEDEXPRESS_NOSE_LENGTH"):
			return 39;
		case joaat("PEDEXPRESS_NOSE_HEIGHT"):
			return 40;
		case joaat("PEDEXPRESS_NOSE_TILT"):
			return 41;
		case joaat("PEDEXPRESS_NOSE_BREAK"):
			return 42;
		case joaat("PEDEXPRESS_NOSTRIL_WIDTH"):
			return 43;
		case joaat("PEDEXPRESS_MOUTH_WIDTH"):
			return 44;
		case joaat("PEDEXPRESS_MOUTH_DEPTH"):
			return 45;
		case joaat("PEDEXPRESS_MOUTH_H_POS"):
			return 46;
		case joaat("PEDEXPRESS_MOUTH_V_POS"):
			return 47;
		case joaat("PEDEXPRESS_UPPER_LIP_THICKNESS"):
			return 48;
		case joaat("PEDEXPRESS_UPPER_LIP_WIDTH"):
			return 49;
		case joaat("PEDEXPRESS_UPPER_LIPDEPTH"):
			return 50;
		case joaat("PEDEXPRESS_LOWER_LIP_THICKNESS"):
			return 51;
		case joaat("PEDEXPRESS_LOWER_LIP_WIDTH"):
			return 52;
		case joaat("PEDEXPRESS_LOWER_LIP_DEPTH"):
			return 53;
		default:
			break;
	}
	return -1;
}

void func_772(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] = (Global_26796.f_26[iParam1 /*120*/] - (Global_26796.f_26[iParam1 /*120*/] && iParam0));
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] - (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && iParam0));
	}
}

int func_773(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 5)
	{
		return __LIB_0__::func_223(iVar0);
	}
	return 0;
}

int func_774(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			return joaat("LEGENDARY_FISH_01");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_02");
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			return joaat("LEGENDARY_FISH_03");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_04");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			return joaat("LEGENDARY_FISH_05");
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			return joaat("LEGENDARY_FISH_06");
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			return joaat("LEGENDARY_FISH_07");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_08");
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_09");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_10");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			return joaat("LEGENDARY_FISH_11");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			return joaat("LEGENDARY_FISH_12");
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_13");
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			return joaat("LEGENDARY_FISH_14");
		default:
			break;
	}
	return 0;
}

void func_775(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_46 = iParam1;
	if (bParam2)
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 268435456);
	}
}

void func_776(int iParam0, float fParam1)
{
	float fVar0;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	fVar0 = (Global_1347702[iParam0 /*49*/].f_16 + 10f);
	if (fParam1 >= fVar0)
	{
		Global_1347702[iParam0 /*49*/].f_17 = fParam1;
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_17 = fVar0;
	}
}

void func_777(int iParam0, float fParam1)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_18 = fParam1;
	Global_1347702[iParam0 /*49*/].f_20 = (fParam1 + 5f);
	if (fParam1 >= Global_1347702[iParam0 /*49*/].f_19)
	{
		Global_1347702[iParam0 /*49*/].f_19 = (fParam1 + 5f);
	}
}

void func_778(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (iParam1 != 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < 27)
		{
			iVar0 = iVar1;
			if ((iParam1 && __LIB_0__::func_771(iVar0)) != 0 && __LIB_0__::func_31(iVar0))
			{
				if (iVar2 >= 5)
				{
					return;
				}
				Global_1347702[iParam0 /*49*/].f_29[iVar2] = iVar0;
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_779(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_44 = iParam1;
}

void func_780(int iParam0, float fParam1)
{
	Global_1347702[iParam0 /*49*/].f_20 = fParam1;
}

void func_781(int iParam0, float fParam1)
{
	Global_1347702[iParam0 /*49*/].f_19 = fParam1;
}

void func_782(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "dollars", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "cents", 0);
}

bool func_783(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 4);
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BRL_SAINTDENIS");
		case 1:
			return joaat("BRL_RHODES");
		case 2:
			return joaat("BRL_VALENTINE");
		case 3:
			return joaat("BRL_BLACKWATER");
		default:
			break;
	}
	return 0;
}

char* func_785(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "BRL_SAINTDENIS";
			break;
		case 1:
			sVar0 = "BRL_RHODES";
			break;
		case 2:
			sVar0 = "BRL_VALENTINE";
			break;
		case 3:
			sVar0 = "BRL_BLACKWATER";
			break;
	}
	return sVar0;
}

bool func_786(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_932(iParam0, 1) || (bParam1 && __LIB_1__::func_932(iParam0, 2)))
	{
		return true;
	}
	return false;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LSM_WOMANCRY");
		case 1:
			return joaat("LSM_HUNTER");
		case 2:
			return joaat("LSM_CATFISH");
		case 3:
			return joaat("LSM_UNDERTAKER");
		case 5:
			return joaat("LSM_MINER_1");
		case 6:
			return joaat("LSM_MINER_2");
		case 4:
			return joaat("LSM_SOLDIER_1");
		case 7:
			return -861789942;
		case 8:
			return joaat("LSM_SELL_HORSE_1");
	}
	return 0;
}

void func_788(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[__LIB_0__::func_161(iParam0, 1) /*11*/].f_9 = (Global_1946804.f_57[__LIB_0__::func_161(iParam0, 1) /*11*/].f_9 || iParam1);
}

int func_789(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MISC"):
			return 0;
		case joaat("HEADS"):
			return 7;
		case joaat("EYEBROWS"):
			return 8;
		case joaat("EYES"):
			return 9;
		case joaat("HATS"):
			return 1;
		case -1057211637:
			return 2;
		case -1505611915:
			return 3;
		case -106096122:
			return 4;
		case joaat("HAIR"):
			return 5;
		case -1903910230:
			return 6;
		case joaat("TEETH"):
			return 10;
		case -134124598:
			return 11;
		case 366200818:
			return 13;
		case -322391462:
			return 14;
		case -1229572297:
			return 12;
		case joaat("EYEWEAR"):
			return 15;
		case -126114541:
			return 16;
		case joaat("MASKS"):
			return 17;
		case joaat("MASKS_LARGE"):
			return 18;
		case -2087420491:
			return 19;
		case 1524025505:
			return 20;
		case joaat("NECKWEAR"):
			return 21;
		case 706918662:
			return 22;
		case 1163341077:
			return 24;
		case joaat("NECKTIES"):
			return 23;
		case 1820468724:
			return 25;
		case 1094162565:
			return 26;
		case joaat("BADGES"):
			return 28;
		case joaat("BODIES_UPPER"):
			return 27;
		case joaat("SHIRTS_FULL"):
			return 31;
		case joaat("SHIRTS_FULL_OVERPANTS"):
			return 32;
		case 1250560851:
			return 30;
		case 1065202434:
			return 36;
		case 923771890:
			return 37;
		case 725125637:
			return 29;
		case 1527726350:
			return 33;
		case 1026208467:
			return 34;
		case joaat("SUSPENDERS"):
			return 48;
		case joaat("CLOAKS"):
			return 35;
		case joaat("COATS_HEAVY"):
			return 38;
		case joaat("COATS"):
			return 39;
		case 1799186100:
			return 40;
		case joaat("VESTS"):
			return 41;
		case -372138959:
			return 42;
		case joaat("APRONS"):
			return 43;
		case 2118314848:
			return 44;
		case 1937338194:
			return 45;
		case -1567461477:
			return 46;
		case 425108158:
			return 47;
		case joaat("ACCESSORIES"):
			return 55;
		case joaat("LOADOUTS"):
			return 51;
		case joaat("AMMO_PISTOLS"):
			return 52;
		case joaat("AMMO_RIFLES"):
			return 53;
		case -811108073:
			return 54;
		case joaat("SATCHELS"):
			return 49;
		case 1431760203:
			return 50;
		case joaat("TALISMAN_SATCHEL"):
			return 56;
		case -1250802524:
			return 57;
		case 1018031031:
			return 58;
		case -1459825906:
			return 59;
		case -1783800278:
			return 60;
		case joaat("GLOVES"):
			return 61;
		case -1394906584:
			return 62;
		case joaat("JEWELRY_BRACELETS"):
			return 63;
		case joaat("TALISMAN_WRIST"):
			return 64;
		case joaat("BELT_BUCKLES"):
			return 65;
		case joaat("GUNBELTS"):
			return 66;
		case 904313209:
			return 85;
		case joaat("HOLSTERS_CROSSDRAW"):
			return 70;
		case joaat("HOLSTERS_KNIFE"):
			return 69;
		case joaat("HOLSTERS_RIGHT"):
			return 67;
		case joaat("HOLSTERS_LEFT"):
			return 68;
		case joaat("TALISMAN_HOLSTER"):
			return 71;
		case joaat("BELTS"):
			return 72;
		case joaat("TALISMAN_BELT"):
			return 73;
		case joaat("BODIES_LOWER"):
			return 74;
		case joaat("PANTS"):
			return 75;
		case -1168358466:
			return 76;
		case -2130987730:
			return 77;
		case joaat("SKIRTS"):
			return 78;
		case joaat("STOCKINGS"):
			return 79;
		case joaat("CHAPS"):
			return 80;
		case 1377798597:
			return 81;
		case joaat("BOOTS"):
			return 82;
		case joaat("BOOT_ACCESSORIES"):
			return 83;
		case 828269641:
			return 84;
		default:
			break;
	}
	return -1;
}

void func_790(int iParam0, var uParam1, int iParam2)
{
	Global_1946804.f_860[iParam0] = (Global_1946804.f_860[iParam0] || uParam1);
}

void func_791(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(&(uParam0->f_5), 2);
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_5), 2);
	}
}

bool func_792(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
			break;
		case 1:
			*iParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
			break;
		case 2:
			*iParam1 = joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
			break;
		default:
			return false;
	}
	return true;
}

void func_793(int iParam0)
{
	vector3 vVar0;
	vVar0 = { __LIB_9__::func_494(__LIB_3__::func_324(iParam0)) };
	Global_36308[iParam0] = MAP::_BLIP_ADD_FOR_COORD(__LIB_10__::func_636(__LIB_3__::func_322(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(Global_36308[iParam0], __LIB_10__::func_637(__LIB_3__::func_322(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_36308[iParam0], __LIB_3__::func_322(iParam0), iParam0);
}

void func_794(int iParam0)
{
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
			__LIB_0__::func_537(0);
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
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 2);
			__LIB_8__::func_973(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 2);
			__LIB_8__::func_973(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 2);
			__LIB_8__::func_973(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 2);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 2);
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
			__LIB_0__::func_539(0);
			break;
		case 34:
			__LIB_0__::func_540(0);
			break;
		case 35:
			__LIB_0__::func_541(0);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(1);
			break;
		case 38:
			__LIB_0__::func_543(1);
			break;
		case 39:
			__LIB_0__::func_544(1);
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
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 2:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 1)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			}
			break;
		case 3:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 2)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			}
			break;
		case 4:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 3)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			}
			break;
		case 5:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 4)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			}
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), false);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 0);
			break;
		case 48:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 50:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 49:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 51:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(1);
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
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), false);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", false, true);
			break;
		case 46:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), false);
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), false);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), false);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), false);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), false);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), false);
			break;
	}
}

void func_795(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 > 4)
	{
		iParam0 = 4;
	}
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
		iVar0 = 0;
		while (iVar0 < 17)
		{
			__LIB_5__::func_823(iVar0, iParam0);
			iVar0++;
		}
	}
	else
	{
		__LIB_5__::func_823(iParam1, iParam0);
	}
}

void func_796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_5 = { __LIB_1__::func_977() };
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_3 = 0;
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
}

void func_797()
{
	if (!__LIB_0__::func_898(0))
	{
		__LIB_0__::func_400(1149195254);
		__LIB_0__::func_400(2016081133);
		__LIB_0__::func_400(363257921);
		__LIB_0__::func_400(58066174);
		__LIB_0__::func_400(-1521525254);
		__LIB_0__::func_400(-761186147);
		__LIB_0__::func_400(-1872939092);
		__LIB_0__::func_400(-964156415);
	}
	else
	{
		__LIB_0__::func_400(-1643869063);
	}
	if (!__LIB_0__::func_898(473295046))
	{
		__LIB_0__::func_400(-1108618313);
		__LIB_0__::func_400(-787678727);
	}
	if (!__LIB_0__::func_898(-1738165526))
	{
		__LIB_0__::func_400(622597018);
		__LIB_0__::func_400(1649275138);
	}
	__LIB_0__::func_400(-2137633069);
	__LIB_0__::func_400(1944013855);
	__LIB_0__::func_400(-437251660);
	__LIB_4__::func_524(124);
	__LIB_4__::func_524(125);
	__LIB_4__::func_524(187);
	__LIB_4__::func_524(188);
	__LIB_4__::func_524(123);
	__LIB_4__::func_524(122);
	__LIB_4__::func_524(121);
	__LIB_4__::func_524(120);
	__LIB_5__::func_440("bra_man_burned");
	__LIB_5__::func_440("bra_man_burned_bra3");
	__LIB_5__::func_440("bra_man_endsum");
}

void func_798()
{
	__LIB_0__::func_400(-717025835);
	__LIB_0__::func_400(1248111234);
	if (!__LIB_0__::func_898(1884271742) && !__LIB_0__::func_898(-2038424081))
	{
		__LIB_0__::func_400(-1316886711);
		__LIB_0__::func_400(867231253);
	}
	if (!__LIB_0__::func_898(356365161))
	{
		__LIB_0__::func_400(474287981);
		__LIB_0__::func_400(-1670453688);
	}
	__LIB_0__::func_400(2039534767);
	__LIB_0__::func_400(joaat("WIN1_INTRO_CUTSCENE"));
	__LIB_0__::func_400(-323126593);
	__LIB_0__::func_400(1590561203);
	__LIB_0__::func_400(205214733);
	if (!__LIB_0__::func_898(-1187950766) && !__LIB_0__::func_898(356365161))
	{
		__LIB_0__::func_400(-338553155);
		__LIB_0__::func_400(-1106668087);
		__LIB_0__::func_400(-1636879249);
	}
	__LIB_4__::func_524(186);
	if (!__LIB_0__::func_898(356365161))
	{
		__LIB_5__::func_440("col_nav_wint1_cabin_prefire");
	}
	__LIB_5__::func_440("col_nav_wint1_cabin_duringfire");
	__LIB_5__::func_440("col_nav_wint2_post");
	__LIB_5__::func_440("col_nav_wint_end");
}

void func_799()
{
	if (!__LIB_0__::func_898(-1053549743))
	{
		__LIB_0__::func_400(1033721560);
	}
	__LIB_0__::func_400(1343484786);
	__LIB_0__::func_400(1871051363);
	__LIB_0__::func_400(146746575);
	__LIB_0__::func_400(-2144587490);
	__LIB_0__::func_400(1989074279);
	__LIB_0__::func_400(-1671953459);
	__LIB_5__::func_440("rho_nav_grave_norm_gry3_off");
	__LIB_5__::func_440("rho_nav_grave_norm_gry3_on");
	__LIB_5__::func_440("rho_nav_grave_dug_gry3_off");
	__LIB_5__::func_440("rho_nav_grave_dug_gry3_on");
	__LIB_5__::func_440("rho_nav_grave_open_gry3_off");
	__LIB_5__::func_440("rho_nav_grave_open_gry3_on");
	__LIB_5__::func_440("sad3_nav_rhodes_shootout_00");
}

void func_800()
{
	if (__LIB_0__::func_898(-2020023971))
	{
		__LIB_0__::func_400(758684739);
		__LIB_0__::func_400(-661825463);
		__LIB_0__::func_401(518127510);
		__LIB_4__::func_524(182);
		__LIB_4__::func_495(181);
	}
	else
	{
		__LIB_0__::func_400(518127510);
		__LIB_0__::func_401(758684739);
		__LIB_0__::func_401(-661825463);
		__LIB_4__::func_524(181);
		__LIB_4__::func_495(182);
	}
}

void func_801(int iParam0, int iParam1)
{
	if (__LIB_0__::func_898(iParam0))
	{
		__LIB_0__::func_401(iParam1);
	}
	else
	{
		__LIB_0__::func_400(iParam1);
	}
}

void func_802(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam0 < 0 || iParam0 > 95)
	{
		return;
	}
	if (!Global_40 || bParam4)
	{
		__LIB_0__::func_806(iParam0, iParam3);
	}
	Global_40.f_7157[iParam0 /*3*/].f_1 = iParam1;
	Global_40.f_7157[iParam0 /*3*/].f_2 = iParam2;
}

void func_803()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	Global_1357549.f_1708 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
	{
		MAP::REMOVE_BLIP(&(Global_1357549.f_1711));
		iVar0 = __LIB_1__::func_953(Global_40.f_4283);
		if (__LIB_0__::func_20(iVar0) && __LIB_1__::func_59(Global_1888801[iVar0 /*35*/].f_13))
		{
			__LIB_10__::func_615(Global_1888801[iVar0 /*35*/].f_13, 1560611276);
		}
		Global_1357549.f_1710 = 0;
	}
}

bool func_804(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_392(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_1934765.f_53[iVar1], iVar2);
	}
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar3 == 255)
	{
		return MISC::IS_BIT_SET(Global_1934765.f_53[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1055058[iVar3 /*116*/].f_72.f_28[iVar1], iVar2);
}

void func_805(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_392(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_1934765.f_53[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40567.f_28[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72.f_28[iVar1]), iVar2);
		}
	}
}

int func_806(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_293(45);
	switch (iParam0)
	{
		case 0:
			if (bVar0)
			{
				return -512973841;
			}
			else
			{
				return 470037909;
			}
			break;
		case 1:
			return -904280534;
		case 3:
			return -1438750434;
		case 6:
			return -41414424;
		case 7:
			return 214708080;
		case 5:
			if (bVar0)
			{
				return -241284918;
			}
			else
			{
				return 218350989;
			}
			break;
		case 8:
			return -1083616881;
		case 9:
			return -1643549114;
		case 10:
			return -1865722934;
		case 11:
			return 1936859429;
		case 12:
			return -272646696;
		case 2:
		case 4:
			if (bVar0)
			{
				return -634462673;
			}
			else
			{
				return 1824681511;
			}
			break;
	}
	return 0;
}

void func_807(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_34(iParam0))
	{
		return;
	}
	if (Global_1425371[iParam0 /*373*/].f_8 != iParam1)
	{
		Global_1425371[iParam0 /*373*/].f_8 = iParam1;
		__LIB_0__::func_714(iParam0, 32);
	}
}

void func_808()
{
	if (((!__LIB_0__::func_898(168171957) && !__LIB_0__::func_898(1193080109)) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_4__::func_524(100);
	}
	if (!__LIB_0__::func_898(168171957))
	{
		__LIB_4__::func_524(101);
	}
	if (((!__LIB_0__::func_898(1193080109) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(-618620429))
	{
		__LIB_4__::func_524(102);
	}
	if (!__LIB_0__::func_898(1193080109))
	{
		__LIB_4__::func_524(103);
	}
	if (!__LIB_0__::func_898(1193080109))
	{
		__LIB_4__::func_524(104);
	}
	if (!__LIB_0__::func_898(1193080109))
	{
		__LIB_4__::func_524(105);
	}
	if (!__LIB_0__::func_898(1193080109) && !__LIB_0__::func_898(-491981251))
	{
		__LIB_4__::func_524(107);
	}
	if (!__LIB_0__::func_898(-639037538))
	{
		__LIB_4__::func_524(106);
	}
	if ((!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-618620429)) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_4__::func_524(109);
	}
	if (!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_4__::func_524(110);
	}
	if (((!__LIB_0__::func_898(168171957) && !__LIB_0__::func_898(1193080109)) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_4__::func_524(111);
	}
	if (!__LIB_0__::func_898(-618620429))
	{
		__LIB_4__::func_524(112);
	}
	if (!__LIB_0__::func_898(-618620429))
	{
		__LIB_4__::func_524(113);
	}
	if (!__LIB_0__::func_898(-618620429))
	{
		__LIB_4__::func_524(114);
	}
	if (((!__LIB_0__::func_898(168171957) && !__LIB_0__::func_898(1193080109)) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_4__::func_524(116);
	}
	if ((!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-618620429)) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_4__::func_524(117);
	}
	if (((!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-618620429)) && !__LIB_0__::func_898(1193080109)) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_4__::func_524(118);
	}
	if ((!__LIB_0__::func_898(704802028) && !__LIB_0__::func_898(588987611)) && !__LIB_0__::func_898(2008888900))
	{
		__LIB_0__::func_400(-722030448);
	}
	if (((!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-618620429)) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(1193080109))
	{
		__LIB_0__::func_400(joaat("BEE_01_BARN_STAGE05"));
		__LIB_0__::func_400(1353861354);
	}
	if (((((((!__LIB_0__::func_898(588987611) && !__LIB_0__::func_898(1649996811)) && !__LIB_0__::func_898(227918160)) && !__LIB_0__::func_898(168171957)) && !__LIB_0__::func_898(1193080109)) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(2008888900))
	{
		__LIB_0__::func_400(578474998);
	}
	if ((((!__LIB_0__::func_898(168171957) && !__LIB_0__::func_898(1193080109)) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(-618620429))
	{
		__LIB_0__::func_400(-1667461262);
	}
	if ((((!__LIB_0__::func_898(168171957) && !__LIB_0__::func_898(1193080109)) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(-618620429))
	{
		__LIB_0__::func_400(411742897);
		__LIB_0__::func_400(1467774743);
		__LIB_0__::func_400(1344772301);
		__LIB_0__::func_400(43335376);
		__LIB_0__::func_400(-284612948);
	}
	if (((!__LIB_0__::func_898(1193080109) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(-618620429))
	{
		__LIB_0__::func_400(-692583342);
	}
	if (((!__LIB_0__::func_898(1193080109) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(-618620429))
	{
		__LIB_0__::func_400(-918785150);
	}
	if (((!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-618620429)) && !__LIB_0__::func_898(-491981251)) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_0__::func_400(1236917971);
	}
	if ((!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(-618620429))
	{
		__LIB_0__::func_400(1532009326);
		__LIB_0__::func_400(joaat("BEE_CRAFTINGFIRE01"));
		GRAPHICS::_0xDD0BC0EDCB2162F6(joaat("BEE_CRAFTINGFIRE01"));
		__LIB_0__::func_400(-1860722801);
		__LIB_0__::func_400(637627640);
	}
	if (!__LIB_0__::func_898(-618620429))
	{
		__LIB_0__::func_400(1965249616);
		__LIB_0__::func_400(-2021605623);
		__LIB_0__::func_400(1649902358);
		__LIB_0__::func_400(1169279648);
		__LIB_0__::func_400(-218940381);
	}
	if (!__LIB_0__::func_898(704802028))
	{
		__LIB_0__::func_400(-904669171);
		__LIB_0__::func_400(774601424);
		__LIB_0__::func_400(-584332967);
		__LIB_0__::func_400(-1615103170);
		__LIB_0__::func_400(1256771838);
		__LIB_0__::func_400(-1765152778);
		__LIB_0__::func_400(-2072231077);
		__LIB_0__::func_400(19217583);
	}
	if ((!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-639037538)) && !__LIB_0__::func_898(-618620429))
	{
		__LIB_0__::func_400(349494711);
	}
	if (!__LIB_0__::func_898(1193080109))
	{
		__LIB_0__::func_400(1205945639);
	}
	__LIB_0__::func_400(1532774697);
	if (!__LIB_0__::func_898(1193080109))
	{
		__LIB_0__::func_400(431365499);
		__LIB_0__::func_400(276582710);
		__LIB_0__::func_400(1191890045);
		__LIB_0__::func_400(1864768904);
	}
	if (!__LIB_0__::func_898(-491981251) && !__LIB_0__::func_898(-639037538))
	{
		__LIB_0__::func_400(-2090209059);
		__LIB_0__::func_400(1977031606);
		__LIB_0__::func_400(1929454697);
		__LIB_0__::func_400(938290967);
	}
	__LIB_0__::func_400(-2000794023);
	__LIB_0__::func_400(-531137142);
	if (!__LIB_0__::func_898(588987611) && !__LIB_0__::func_898(2008888900))
	{
		__LIB_0__::func_400(1757739778);
	}
	__LIB_0__::func_400(5422464);
	if (!__LIB_0__::func_898(704802028) && !__LIB_0__::func_898(588987611))
	{
		__LIB_0__::func_400(-1012618146);
	}
	if (!__LIB_0__::func_898(1649996811) && !__LIB_0__::func_898(2008888900))
	{
		__LIB_0__::func_400(2111816145);
	}
	if (!__LIB_0__::func_898(227918160) && !__LIB_0__::func_898(168171957))
	{
		__LIB_0__::func_400(joaat("BEE_01_CAMP"));
	}
	if (!__LIB_0__::func_898(168171957))
	{
		__LIB_0__::func_400(-974480336);
	}
	__LIB_0__::func_400(33260939);
	__LIB_0__::func_400(-270212770);
	__LIB_0__::func_400(862349416);
	__LIB_0__::func_400(joaat("BEE_01_CHIMNEY_STAGE01"));
	__LIB_0__::func_400(joaat("BEE_01_CHIMNEY_STAGE02"));
	if (__LIB_0__::func_2() == -1)
	{
		if ((((!__LIB_0__::func_898(704802028) && !__LIB_0__::func_898(588987611)) && !__LIB_0__::func_898(1649996811)) && !__LIB_0__::func_898(227918160)) && !__LIB_0__::func_898(2008888900))
		{
			__LIB_0__::func_400(-1253110600);
			__LIB_0__::func_400(-1402083909);
			__LIB_0__::func_400(1970695826);
			__LIB_0__::func_400(-382865315);
		}
	}
	if (!__LIB_0__::func_898(168171957))
	{
		__LIB_0__::func_400(-1325016116);
	}
	__LIB_5__::func_440("nav_mesh_beech_shack");
	__LIB_5__::func_440("nav_mesh_beech_shack_with_fire");
	__LIB_5__::func_440("nav_mesh_beech_camp_with_rubble");
	__LIB_5__::func_440("nav_mesh_beech_house_finished");
	__LIB_5__::func_440("nav_mesh_beech_barn_finished");
	__LIB_5__::func_440("nav_mesh_beech_gazebo_finished");
	__LIB_5__::func_440("nav_mesh_beech_house_decor");
	__LIB_5__::func_440("nav_mesh_beech_camp_with_supplies");
}

void func_809(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_3__::func_323(iVar0) == iParam0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				MAP::_BLIP_SET_MODIFIER(Global_36308[iVar0], 580546400);
			}
			return;
		}
		iVar0++;
	}
}

bool func_810(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_3__::func_323(iVar0) == iParam0 && __LIB_3__::func_322(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				return MAP::_BLIP_SET_MODIFIER(Global_36308[iVar0], iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

bool func_811(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_3__::func_323(iVar0) == iParam0 && __LIB_3__::func_322(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				return MAP::_BLIP_REMOVE_MODIFIER(Global_36308[iVar0], iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_812(int iParam0, int iParam1)
{
	if (!__LIB_8__::func_951(iParam0))
	{
		return;
	}
	Global_40.f_11184.f_5[iParam0] = iParam1;
}

bool func_813(int iParam0)
{
	switch (iParam0)
	{
		case -426430150:
			return false;
		case 1788623170:
			return false;
		case -1130865351:
			return false;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return false;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			if (!__LIB_0__::func_293(24))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return true;
	return false;
}

void func_814(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar3 = 0;
	bVar2 = __LIB_0__::func_2() != -1;
	if (__LIB_0__::func_241() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	iVar0 = __LIB_9__::func_971(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = 5;
		if (__LIB_0__::func_219(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946804.f_2653 = iParam0;
		}
		else if (__LIB_0__::func_219(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, __LIB_9__::func_971(iParam0 + 1), bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946804.f_2653 = iParam0;
		}
		else
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = __LIB_9__::func_972(0);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946804.f_2653 = iParam0;
			}
			else
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946804.f_2653 = iParam0;
			}
		}
	}
	iVar0 = __LIB_9__::func_971(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 6;
		if (__LIB_0__::func_219(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946804.f_2654 = iParam1;
		}
		else if (__LIB_0__::func_219(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, __LIB_9__::func_971(iParam1 + 1), bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946804.f_2654 = iParam1;
		}
		else
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = __LIB_9__::func_972(1);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946804.f_2654 = iParam1;
			}
			else
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946804.f_2654 = iParam1;
			}
		}
	}
	iVar0 = __LIB_9__::func_971(iParam2);
	if (iVar0 != 0)
	{
		iVar1 = 7;
		if (__LIB_0__::func_219(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946804.f_2655 = iParam2;
		}
		else if (__LIB_0__::func_219(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, __LIB_9__::func_971(iParam2 + 1), bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946804.f_2655 = iParam2;
		}
		else
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = __LIB_9__::func_972(2);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946804.f_2655 = iParam2;
			}
			else
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946804.f_2655 = iParam2;
			}
		}
	}
}

void func_815(int iParam0)
{
	if (Global_1888801[iParam0 /*35*/].f_13 != -1)
	{
		__LIB_7__::func_766(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 0);
		Global_1888801[iParam0 /*35*/].f_13 = -1;
	}
}

void func_816(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_9__::func_95(__LIB_8__::func_977(iParam0));
	}
	else
	{
		__LIB_9__::func_90(__LIB_8__::func_977(iParam0));
	}
}

void func_817(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = __LIB_5__::func_673(iParam0);
	if (bParam1)
	{
		__LIB_9__::func_95(iVar0);
	}
	else
	{
		__LIB_9__::func_90(iVar0);
	}
}

bool func_818(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((__LIB_0__::func_818(iParam0, 2) || __LIB_0__::func_818(iParam0, 4)) || __LIB_0__::func_818(iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_819(bool bParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	__LIB_10__::func_41();
}

void func_820(int iParam0, bool bParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	iVar2 = joaat("BLIP_ROBBERY_HOME");
	iVar3 = MISC::GET_HASH_KEY("toast_log_blips");
	switch (iParam0)
	{
		case 0:
			sVar4 = "PRHM1_LOG";
			sVar5 = "PRHM1_LOG_DESC";
			sVar0 = "PRHM1_LOG_OBJ1";
			sVar6 = "MISSION_PRHM1";
			sVar1 = "PRHM1_LOG";
			break;
		case 2:
			sVar4 = "PRHM2_LOG";
			sVar5 = "PRHM2_LOG_DESC";
			sVar0 = "PRHM2_LOG_OBJ1";
			sVar6 = "MISSION_PRHM2";
			sVar1 = "PRHM2_LOG";
			break;
		case 3:
			sVar4 = "PRHM6_LOG";
			sVar5 = "PRHM6_LOG_DESC";
			sVar0 = "PRHM6_LOG_OBJ1";
			sVar6 = "MISSION_PRHM6";
			sVar1 = "PRHM6_LOG";
			break;
		case 4:
			sVar4 = "PRHM3_LOG";
			sVar5 = "PRHM3_LOG_DESC";
			sVar0 = "PRHM3_LOG_OBJ1";
			sVar6 = "MISSION_PRHM3";
			sVar1 = "PRHM3_LOG";
			break;
		case 6:
			sVar4 = "PRHM7_LOG";
			sVar5 = "PRHM7_LOG_DESC";
			sVar0 = "PRHM7_LOG_OBJ1";
			sVar6 = "MISSION_PRHM7";
			sVar1 = "PRHM7_LOG";
			break;
		case 7:
			sVar4 = "PRHM5_LOG";
			sVar5 = "PRHM5_LOG_DESC";
			sVar0 = "PRHM5_LOG_OBJ1";
			sVar6 = "MISSION_PRHMW";
			sVar1 = "PRHM5_LOG";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	UILOG::_UILOG_ADD_ENTRY_HASH(4, __LIB_4__::func_260(iParam0), __LIB_4__::func_55(iParam0), MISC::GET_HASH_KEY(sVar4), MISC::GET_HASH_KEY(sVar5), 0);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(4, __LIB_4__::func_260(iParam0), MISC::GET_HASH_KEY(sVar6), joaat("SP_MISSIONS_20"));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(4, __LIB_4__::func_260(iParam0), iVar2, iVar3);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(4, __LIB_4__::func_260(iParam0), MISC::GET_HASH_KEY(sVar0), sVar0, false, false, false);
	if (bParam1)
	{
		return;
	}
	__LIB_4__::func_59(sVar1, 0, iVar3, iVar2, joaat("PLAYER_MENU"), 0, -1, -2, __LIB_3__::func_607(), "robbery_tip_wipe_on", 0, 0, 1, 1, 1);
	__LIB_5__::func_675(iParam0, 1073741824 /* Float: 2f */);
	__LIB_0__::func_703(0, -1);
}

void func_821(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar6 = MISC::GET_HASH_KEY("BLIP_ROBBERY_SHOP");
	iVar7 = MISC::GET_HASH_KEY("toast_log_blips");
	switch (iParam0)
	{
		case 29:
			sVar2 = "PRRGS_LOG";
			iVar3 = joaat("PRRGS_LOG");
			sVar4 = "PRRGS_LOG_DESC";
			iVar5 = joaat("PRRGS_LOG_DESC");
			sVar0 = "PRRGS_LOG_OBJ1";
			iVar1 = joaat("PRRGS_LOG_OBJ1");
			iVar8 = -1662367475;
			break;
		case 43:
			sVar2 = "PRNBG_LOG";
			iVar3 = joaat("PRNBG_LOG");
			sVar4 = "PRNBG_LOG_DESC";
			iVar5 = joaat("PRNBG_LOG_DESC");
			sVar0 = "PRNBG_LOG_OBJ2";
			iVar1 = joaat("PRNBG_LOG_OBJ2");
			iVar8 = -1637141202;
			break;
		case 61:
			sVar2 = "PRSGS_LOG";
			iVar3 = joaat("PRSGS_LOG");
			sVar4 = "PRSGS_LOG_DESC";
			iVar5 = joaat("PRSGS_LOG_DESC");
			sVar0 = "PRSGS_LOG_OBJ3";
			iVar1 = joaat("PRSGS_LOG_OBJ3");
			iVar8 = -439915887;
			break;
		case 73:
			sVar2 = "PRVDO_LOG";
			iVar3 = joaat("PRVDO_LOG");
			sVar4 = "PRVDO_LOG_DESC";
			iVar5 = joaat("PRVDO_LOG_DESC");
			sVar0 = "PRVDO_LOG_OBJ4";
			iVar1 = joaat("PRVDO_LOG_OBJ4");
			iVar8 = -366465324;
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		return;
	}
	UILOG::_UILOG_ADD_ENTRY_HASH(4, __LIB_3__::func_612(iParam0), __LIB_3__::func_613(iParam0), iVar3, iVar5, 0);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(4, __LIB_3__::func_612(iParam0), iVar8, joaat("SP_MISSIONS_20"));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(4, __LIB_3__::func_612(iParam0), iVar6, iVar7);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(4, __LIB_3__::func_612(iParam0), iVar1, sVar0, false, false, false);
	if (bParam1)
	{
		return;
	}
	__LIB_4__::func_59(sVar2, 0, iVar7, iVar6, joaat("PLAYER_MENU"), 0, -1, -2, __LIB_3__::func_607(), "robbery_tip_wipe_on", 0, 0, 1, 1, 1);
	__LIB_4__::func_261(iParam0, -2147483648);
	__LIB_0__::func_703(0, -1);
}

void func_822(int iParam0)
{
	char cVar0[16];
	char[] cVar3[8];
	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar1, "PSTR_O_", 16);
		StringConCat(&cVar1, &cVar0, 16);
		cVar3 = __LIB_0__::func_958(0, &cVar1, 0, 0, -1, -1);
		__LIB_5__::func_238(iParam0, &cVar1, cVar3, -1082130432 /* Float: -1f */);
	}
}

bool func_823(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return false;
	}
	if (__LIB_0__::func_118(iParam0) == 0)
	{
		return true;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return true;
	}
	if (__LIB_0__::func_117(iParam0, 1) && !bParam1)
	{
		__LIB_0__::func_123(iParam0, 128);
		return true;
	}
	__LIB_0__::func_121(iParam0, 129);
	__LIB_1__::func_926(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(__LIB_0__::func_120(iParam0));
	__LIB_0__::func_119(iParam0, 0);
	return true;
}

void func_824(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	__LIB_0__::func_742(&(Global_1946804.f_1497), iParam0);
	if (bParam2)
	{
		__LIB_0__::func_244(2, iParam0, 6);
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 1);
	}
}

void func_825()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (__LIB_4__::func_810(iVar0))
		{
			__LIB_8__::func_985(iVar0);
		}
		iVar0++;
	}
}

void func_826(int iParam0)
{
	__LIB_9__::func_976(&(Global_1946804.f_1378), iParam0);
}

void func_827()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	__LIB_1__::func_446(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (__LIB_4__::func_605(0) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
	}
	if (__LIB_4__::func_605(1) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
	}
	if (__LIB_4__::func_605(2) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
	}
}

void func_828(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_10__::func_39(iParam0);
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELAMBARINO"), iVar0);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWHANOVER"), iVar0);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELLEMOYNE"), iVar0);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELWESTELIZABETH"), iVar0);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWAUSTIN"), iVar0);
			break;
		default:
			break;
	}
}

void func_829(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	switch (Global_40.f_7731[iParam0 /*5*/])
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
		case 10:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		__LIB_9__::func_443(iParam1, iParam2, &uVar0, &uVar1, 0, __LIB_4__::func_670(iParam0));
	}
}

void func_830(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		__LIB_9__::func_443(iParam1, iParam2, &uVar0, &uVar1, 0, __LIB_8__::func_989());
	}
}

void func_831(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MAP::_0x563FCB6620523917(__LIB_10__::func_40(iParam0), -1482012664);
	}
	else if (MAP::_0xE38450DBCBC70E3D(__LIB_10__::func_40(iParam0), -1305340593) || MAP::_0xE38450DBCBC70E3D(__LIB_10__::func_40(iParam0), -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(__LIB_10__::func_40(iParam0));
	}
}

void func_832(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_40(iVar0);
	iVar2 = __LIB_0__::func_39(iVar0);
	iVar3 = __LIB_0__::func_710(iVar0);
	if (__LIB_0__::func_41(iVar0) > iParam0)
	{
		iVar1++;
		if (iVar1 > __LIB_0__::func_44(iVar2, iVar3))
		{
			iVar1 = 1;
			if (iVar2 == 11)
			{
				iVar2 = 0;
				iVar3++;
			}
			else
			{
				iVar2++;
			}
		}
	}
	__LIB_1__::func_159(&iVar0, 0, 0, iParam0, iVar1, iVar2, iVar3);
	CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar0), __LIB_0__::func_42(iVar0), __LIB_0__::func_43(iVar0));
	CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
}

void func_833(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];
	bool bVar5;
	bool bVar6;
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = __LIB_3__::func_734(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_3__::func_733(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_3__::func_733(iParam0));
		}
		__LIB_3__::func_735(iParam0, 4);
		__LIB_3__::func_735(iParam0, 8);
		return;
	}
	else if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4))
	{
		__LIB_10__::func_694(Global_1347702[iParam0 /*49*/]);
		__LIB_7__::func_602(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_3__::func_733(iParam0)))
		{
			StringCopy(&cVar1, "", 24);
			cVar4 = __LIB_0__::func_958(0, &cVar1, 0, 0, -1, -1);
			__LIB_5__::func_238(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, __LIB_3__::func_733(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		__LIB_3__::func_735(iParam0, 4);
		__LIB_3__::func_735(iParam0, 8);
		return;
	}
	bVar5 = false;
	if (__LIB_3__::func_736(iParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (__LIB_3__::func_736(iParam0, 16))
	{
		bVar6 = true;
	}
	__LIB_10__::func_694(Global_1347702[iParam0 /*49*/]);
	__LIB_7__::func_602(iParam0);
	MemCopy(&cVar1, {Global_1347702[iParam0 /*49*/].f_1}, 3);
	StringConCat(&cVar1, "_obj", 24);
	if (__LIB_3__::func_736(iParam0, 64))
	{
		StringConCat(&cVar1, "3", 24);
	}
	else if (__LIB_3__::func_736(iParam0, 32))
	{
		StringConCat(&cVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1))
	{
		cVar4 = __LIB_0__::func_958(0, &cVar1, 0, 0, -1, -1);
		__LIB_5__::func_238(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		if (__LIB_3__::func_736(iParam0, 16) || bVar6)
		{
			__LIB_4__::func_684(iParam0, 1);
		}
		if (__LIB_3__::func_736(iParam0, 8) || bVar5)
		{
			__LIB_4__::func_685(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&cVar1, "", 24);
		cVar4 = __LIB_0__::func_958(0, &cVar1, 0, 0, -1, -1);
		__LIB_5__::func_238(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		__LIB_4__::func_685(iParam0, 1);
		if (__LIB_3__::func_736(iParam0, 16) || bVar6)
		{
			__LIB_4__::func_684(iParam0, 1);
		}
	}
}

void func_834(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			if (__LIB_1__::func_614(joaat("PROVISION_JACKS_THIMBLE"), 0, 0) < 1)
			{
				__LIB_7__::func_374();
				__LIB_7__::func_375(joaat("REWARD_PED_SMALL"), 0.68f);
				__LIB_7__::func_375(joaat("REWARD_PED_MEDIUM"), 0.68f);
				__LIB_7__::func_375(joaat("REWARD_PED_LARGE"), 0.68f);
			}
			break;
	}
}

void func_835(int iParam0, bool bParam1, int iParam2)
{
	if (__LIB_1__::func_44(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_8__::func_985(iParam0);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		if (iParam2 == 1)
		{
			__LIB_10__::func_435(iParam0);
		}
		__LIB_2__::func_788(&(Global_1392626[iParam0 /*32*/].f_11), 1, 0, 1);
		Global_1392626[iParam0 /*32*/].f_11 = 0;
	}
	__LIB_0__::func_8(&(Global_1392626[iParam0 /*32*/].f_9), 1);
	if (!__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_8, 1))
	{
		__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	}
	__LIB_0__::func_8(&(Global_1392626[iParam0 /*32*/].f_9), 2);
}

void func_836(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_450(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_122(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_123(iParam0))
	{
		__LIB_10__::func_713(iParam0, 1, 0);
	}
	iVar0 = __LIB_0__::func_223(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (__LIB_0__::func_805(iParam0, 512))
		{
			__LIB_1__::func_452(30, iVar0, 0, 0, 0);
		}
	}
	if ((!__LIB_0__::func_104() && !bParam1) && !__LIB_0__::func_296(0, 0, 1))
	{
		__LIB_8__::func_966(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_806(iParam0, 6);
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 4);
		}
	}
}

bool func_837()
{
	if (!__LIB_1__::func_185(39))
	{
		return false;
	}
	if (__LIB_1__::func_185(43))
	{
		return false;
	}
	return true;
}

int func_838(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_161(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (__LIB_0__::func_241() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		__LIB_0__::func_191();
	}
	if (iParam1 != joaat("BASE") && __LIB_0__::func_219(Global_1946804.f_1378.f_1[iVar0 /*3*/], iVar1, iParam1, __LIB_0__::func_2() != -1) == -1)
	{
		return 0;
	}
	if (bParam3)
	{
		Global_1946804.f_2456[iVar0 /*2*/] = 0;
		Global_1946804.f_2456[iVar0 /*2*/].f_1 = 0;
	}
	Global_1946804.f_1378.f_1[iVar0 /*3*/].f_1 = iParam1;
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			__LIB_1__::func_452(16, iParam2, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(16, iParam2, 1, iParam0, 0);
		}
	}
	__LIB_0__::func_245(1);
	return 1;
}

void func_839(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, vector3 vParam6, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (!__LIB_5__::func_240(iParam1))
	{
		return;
	}
	if (Global_1879534 == 0)
	{
		Global_1347702[iParam0 /*49*/] = iParam1;
		StringCopy(&(Global_1347702[iParam0 /*49*/].f_1), sParam2, 16);
		StringCopy(&(Global_1347702[iParam0 /*49*/].f_3), sParam3, 8);
		StringCopy(&(Global_1347702[iParam0 /*49*/].f_4), sParam4, 64);
		Global_1347702[iParam0 /*49*/].f_15 = __LIB_1__::func_293(iParam0, iParam1, 8, 0);
		if (!__LIB_0__::func_6(Global_1347702[iParam0 /*49*/].f_15))
		{
			return;
		}
		if (fParam12 < 35f)
		{
			fParam12 = 35f;
		}
		Global_1347702[iParam0 /*49*/].f_16 = fParam12;
		Global_1347702[iParam0 /*49*/].f_28 = iParam9;
		Global_1347702[iParam0 /*49*/].f_36 = iParam10;
		if (iParam5 != -1)
		{
			Global_1347702[iParam5 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
		Global_1347702[iParam0 /*49*/].f_17 = (Global_1347702[iParam0 /*49*/].f_16 + 10f);
		if (iParam11 & 4096 != 0)
		{
			Global_1347702[iParam0 /*49*/].f_20 = 0f;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1347702[iParam0 /*49*/].f_29[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1347702[iParam0 /*49*/].f_24 = { vParam6 };
	Global_1347702[iParam0 /*49*/].f_27 = __LIB_1__::func_447(vParam6, 1);
	Global_1347702[iParam0 /*49*/].f_35 = iParam5;
	Global_1347702[iParam0 /*49*/].f_12 = 0;
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), iParam11);
}

void func_840()
{
	if (__LIB_0__::func_139(Global_43801))
	{
		__LIB_1__::func_196(&Global_43801, 0, 0);
	}
}

int func_841(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
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
		return 0;
	}
	iVar0 = __LIB_0__::func_2();
	if ((bParam4 && __LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 512)) && !__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 1024))
	{
		if (__LIB_0__::func_104())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 0;
	}
	if (!__LIB_5__::func_546(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((__LIB_1__::func_25(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - __LIB_5__::func_452()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((__LIB_1__::func_25(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - __LIB_5__::func_452()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!__LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1))
			{
				return 0;
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
		return 0;
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
		return 1;
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
		return 1;
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
	return 1;
}

void func_842(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	__LIB_5__::func_250(iParam0);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		__LIB_10__::func_722(iParam0, __LIB_4__::func_816(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		__LIB_10__::func_722(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		__LIB_10__::func_722(iParam0, vParam2, 0, 0);
	}
	MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
}

void func_843(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	if (__LIB_9__::func_19(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
	{
		iVar0 = Global_1888801[iParam0 /*35*/].f_5;
	}
	else
	{
		iVar0 = __LIB_0__::func_559(iParam0);
	}
	bVar1 = __LIB_0__::func_21(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = __LIB_10__::func_727(iParam0);
		if (iParam2 > iVar2 || !__LIB_0__::func_923(__LIB_9__::func_20(iParam0)))
		{
			__LIB_9__::func_21(iParam0, __LIB_0__::func_23());
			__LIB_9__::func_22(iParam0, iParam2);
		}
		if (!bVar1)
		{
			__LIB_0__::func_24(iParam0, 33554432);
			if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		__LIB_0__::func_25(iParam0, 33554432);
		__LIB_9__::func_21(iParam0, -15);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	__LIB_10__::func_42(iParam0);
}

void func_844(int iParam0, var uParam1, vector3 vParam2)
{
	*uParam1 = MAP::_BLIP_ADD_FOR_COORD(__LIB_10__::func_418(iParam0), vParam2);
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		__LIB_10__::func_478(uParam1, iParam0);
		__LIB_10__::func_441(iParam0);
		if (!__LIB_0__::func_474(163))
		{
			__LIB_5__::func_473(163, *uParam1, 0);
		}
	}
}

void func_845(int iParam0, int iParam1)
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
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
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_846()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar2 = 0;
	bVar3 = __LIB_0__::func_2() == -1;
	iVar1 = 0;
	while (iVar1 < Global_1898329)
	{
		if (__LIB_0__::func_6(Global_1898330[iVar1]) && __LIB_0__::func_702(Global_1898330[iVar1]))
		{
			if (Global_1898346[iVar1 /*6*/].f_3 == 4)
			{
				if (bVar3)
				{
					iVar0 = Global_1898346[iVar1 /*6*/].f_5;
					if (__LIB_10__::func_728(iVar0, 0))
					{
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
	}
}

void func_847(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_8__::func_940(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_9__::func_355(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_848(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_8__::func_940(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_9__::func_355(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_9__::func_355(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_849(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_161(__LIB_0__::func_997(iParam0), 1);
	if (iVar0 == 39)
	{
		return;
	}
	__LIB_9__::func_470(Global_1946804.f_57[iVar0 /*11*/], 8);
	__LIB_1__::func_452(26, 0, 0, 0, 0);
}

bool func_850(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_20, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_20, 4);
		__LIB_0__::func_25(iLocal_20, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_10__::func_12(iLocal_20);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_20);
		__LIB_2__::func_819(iLocal_20);
		__LIB_2__::func_755(iLocal_20);
		if (!__LIB_2__::func_756(iLocal_20, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_851(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ANNESBURG"):
			return 78;
		case joaat("ARMADILLO"):
			return 120;
		case joaat("BEECHERSHOPE"):
			return 37;
		case joaat("BLACKWATER"):
			return 38;
		case joaat("BRAITHWAITE"):
			return 93;
		case joaat("BUTCHER"):
			return 82;
		case joaat("CALIGA"):
			return 95;
		case joaat("CORNWALL"):
			return 65;
		case joaat("EMERALD"):
			return 69;
		case joaat("LAGRAS"):
			return 3;
		case joaat("MANZANITA"):
			return 110;
		case joaat("RHODES"):
			return 105;
		case joaat("STDENIS"):
			return 5;
		case joaat("SISKA"):
			return 32;
		case joaat("STRAWBERRY"):
			return 26;
		case joaat("TUMBLEWEED"):
			return 115;
		case joaat("VALENTINE"):
			return 76;
		case joaat("VANHORN"):
			return 92;
		case joaat("WALLACE"):
			return 35;
		case joaat("WAPITI"):
			return 56;
		case joaat("AGUASDULCESVILLA"):
		case joaat("AGUASDULCESRUINS"):
		case joaat("AGUASDULCESFARM"):
			return 57;
		case joaat("MANICATO"):
			return 61;
	}
	return -1;
}

struct<7> func_852(int iParam0)
{
	struct<7> Var0;
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_853(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return false;
	}
	return __LIB_1__::func_932(iParam0, 2);
}

int func_854(int iParam0)
{
	return __LIB_1__::func_931(iParam0);
}

char* func_855()
{
	char cVar0[64];
	StringCopy(&cVar0, "share/", 64);
	StringConCat(&cVar0, NETWORK::_NETWORK_GET_ROS_TITLE_NAME(), 64);
	StringConCat(&cVar0, "/pedshots/", 64);
	return __LIB_1__::func_569(cVar0);
}

char* func_856(int iParam0)
{
	char cVar0[64];
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "PROFILE_PHOTO", 64);
			break;
		case 1:
			StringConCat(&cVar0, "MISSION_PHOTO", 64);
			break;
	}
	StringConCat(&cVar0, ".jpg", 64);
	return __LIB_1__::func_569(cVar0);
}

void func_857()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Local_14);
		bVar2 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(bVar2) && ENTITY::_0x88AD6CC10D8D35B2(bVar2)) && !ENTITY::_0xA7E51B53309EAC97(bVar2))
		{
			ENTITY::DELETE_ENTITY(&bVar2);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(Local_14);
}

bool func_858(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(bParam0))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(bParam0, false, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(bParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_859(int iParam0, vector3 vParam1, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vParam4 - vParam1 };
	vVar6 = { vParam4 - vVar0 };
	fVar9 = MISC::ABSF(BUILTIN::VMAG(vVar3));
	fVar10 = MISC::ABSF(BUILTIN::VMAG(vVar6));
	if (fVar10 < fVar9)
	{
		return true;
	}
	return false;
}

int func_860(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;
	if (__LIB_0__::func_86(vParam1))
	{
		return 0;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_COORD(iParam0, vParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 0;
	}
	if (bParam5)
	{
		if ((iParam0 == 408396114 || iParam0 == 1259054292) || iParam0 == -308585968)
		{
			MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam1, true) > fParam4)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, -1878373110);
	}
	return iVar0;
}

void func_861(var uParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	iVar1 = ENTITY::GET_ENTITY_MODEL(bVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return;
	}
	__LIB_0__::func_172(uParam0->f_2265);
	MISC::GET_MODEL_DIMENSIONS(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (VEHICLE::_IS_DRAFT_VEHICLE(bVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bVar0), iVar14);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_2265 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(bVar0, true, false), ENTITY::GET_ENTITY_ROTATION(bVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_2265, bVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_4__::func_532(uParam0, 2097152);
	__LIB_4__::func_563(uParam0, 1048576);
}

bool func_862()
{
	if (__LIB_4__::func_533() < 651 || __LIB_4__::func_533() > 750)
	{
		return false;
	}
	return true;
}

int func_863()
{
	int iVar0;
	if (__LIB_0__::func_700(__LIB_4__::func_533()) == 2)
	{
		if (__LIB_0__::func_76(__LIB_4__::func_533()) == 3)
		{
			iVar0 = __LIB_0__::func_872(__LIB_4__::func_533());
			if (__LIB_6__::func_708(iVar0))
			{
				return iVar0;
			}
		}
	}
	return -1;
}

void func_864(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	bool bVar7;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = __LIB_0__::func_574(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			bVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(bVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7) && !ENTITY::_0x88AD6CC10D8D35B2(bVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&bVar7);
			}
		}
		iVar6++;
	}
}

int func_865(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = __LIB_1__::func_507(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (__LIB_0__::func_195(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_866(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam2))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, true, false) };
	if (__LIB_6__::func_768(iParam0, vVar0, sParam2, iParam3))
	{
		return true;
	}
	return false;
}

void func_867(int iParam0)
{
	bool bVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_725(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = __LIB_8__::func_592(iParam0);
	__LIB_8__::func_882(bVar0);
	__LIB_0__::func_213(iParam0, 8192, 1);
}

void func_868(int iParam0)
{
	bool bVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_725(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = __LIB_8__::func_592(iParam0);
	__LIB_8__::func_883(bVar0);
	__LIB_0__::func_213(iParam0, 8192, 0);
}

void func_869(int iParam0)
{
	bool bVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_725(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = __LIB_8__::func_592(iParam0);
	__LIB_8__::func_884(bVar0);
	__LIB_0__::func_213(iParam0, 16384, 1);
}

void func_870(int iParam0)
{
	bool bVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_725(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = __LIB_8__::func_592(iParam0);
	__LIB_8__::func_885(bVar0);
	__LIB_0__::func_213(iParam0, 16384, 0);
}

char* func_871(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return __LIB_8__::func_678(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		return __LIB_0__::func_743(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		return __LIB_0__::func_209(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	return "";
}

void func_872(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_31(iParam0))
	{
		bVar1 = __LIB_8__::func_593(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(bVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(bVar1);
			PED::SET_PED_CONFIG_FLAG(bVar1, 179, true);
			__LIB_8__::func_866(iParam0);
		}
	}
	if (__LIB_0__::func_287(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(__LIB_8__::func_593(iParam0), 137, true);
	}
}

void func_873(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
	{
		return;
	}
	__LIB_8__::func_629(bParam0);
	__LIB_8__::func_870(bParam0, uParam1);
	__LIB_8__::func_630(bParam0);
	__LIB_8__::func_871(bParam0, uParam2);
	if (iParam3 != 0)
	{
		__LIB_8__::func_631(bParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, true);
}

void func_874(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_8__::func_593(iParam0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	__LIB_8__::func_839(iParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_875(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	if (bParam3)
	{
		uParam0->f_871++;
		if (uParam0->f_871 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_871 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_5__::func_68(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_8__::func_879(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = __LIB_8__::func_619(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((fVar3 >= __LIB_4__::func_569(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
		{
			if (uParam0->f_889)
			{
				__LIB_1__::func_436();
				uParam0->f_889 = 0;
			}
			__LIB_4__::func_570(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
			}
			__LIB_5__::func_67(uParam0);
			__LIB_4__::func_550(uParam0, 128, 1);
			__LIB_4__::func_550(uParam0, 256, 1);
			__LIB_4__::func_550(uParam0, 4096, 1);
			__LIB_4__::func_550(uParam0, 32768, 1);
			__LIB_4__::func_550(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_4__::func_547(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
			{
				if (__LIB_4__::func_547(uParam0) >= __LIB_4__::func_569(uParam0))
				{
				}
				Var4 = { __LIB_4__::func_571(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_5__::func_69(uParam0);
				}
				Var4 = { __LIB_4__::func_571(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_804 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_800), iVar12, &Var4, false, true);
				__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
				__LIB_0__::func_88(uParam0, 128);
			}
		}
	}
	if (__LIB_0__::func_84(uParam0, 128))
	{
		if (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304))
		{
			return true;
		}
		__LIB_5__::func_350(uParam0);
		if (!uParam0->f_889)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_889 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_804, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_5__::func_65(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_822[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_822[iVar14 /*9*/].f_8)
						{
							uParam0->f_822[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, &(uParam0->f_822[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &(uParam0->f_822[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_804, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_804, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			__LIB_0__::func_88(uParam0, 256);
			__LIB_4__::func_550(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_876(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_4__::func_661(iParam0))
	{
		return;
	}
	if (!__LIB_4__::func_662(iParam1))
	{
		return;
	}
	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && __LIB_4__::func_630(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = __LIB_0__::func_23();
		__LIB_10__::func_829(iParam0, &iVar0, &iVar1, bVar2);
		__LIB_1__::func_446(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_877(int iParam0, bool bParam1)
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
		__LIB_10__::func_830(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		__LIB_1__::func_446(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_878(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_1(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (__LIB_0__::func_1(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_2287)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_2288, 214, true);
	}
	if (uParam0->f_2286 && __LIB_4__::func_562(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (__LIB_0__::func_1(uParam1, 262144) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	__LIB_4__::func_706(&iVar1, uParam2);
	__LIB_9__::func_97(&(uParam0->f_2294), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!__LIB_4__::func_562(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	__LIB_4__::func_614();
	__LIB_4__::func_615(uParam0, 1);
}

void func_879(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_8__::func_633(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_8__::func_678(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, __LIB_8__::func_678(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_804))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_861, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_804);
		__LIB_3__::func_120();
	}
}

void func_880()
{
	if (__LIB_0__::func_797(0))
	{
		__LIB_8__::func_903(0);
	}
	if (__LIB_0__::func_797(1))
	{
		__LIB_8__::func_903(1);
	}
	if (__LIB_0__::func_797(5))
	{
		__LIB_8__::func_903(5);
	}
	if (__LIB_0__::func_797(6))
	{
		__LIB_0__::func_798(6);
	}
}

void func_881()
{
	struct<15> Var0;
	int iVar17;
	bool bVar18;
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (__LIB_0__::func_31(iVar17))
		{
			bVar18 = __LIB_8__::func_593(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(bVar18))
			{
				Var0.f_14 = bVar18;
				Var0.f_3 = bVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489.f_58 = -15;
	__LIB_0__::func_37(&(Global_1359489.f_55));
	if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_AWAY"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

int func_882(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!__LIB_1__::func_711(iParam0, 0, 1, 1, 1))
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
			__LIB_1__::func_452(1, 64, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(1, 64, 1, iParam1, 0);
		}
	}
	__LIB_0__::func_245(1);
	return 1;
}

void func_883(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;
	if (!__LIB_5__::func_125(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1406[iParam1 /*41*/].f_12) * uParam0->f_1406[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1406[iParam1 /*41*/].f_12) * uParam0->f_1406[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1406[iParam1 /*41*/].f_13) * uParam0->f_1406[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1406[iParam1 /*41*/].f_13) * uParam0->f_1406[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1406[iParam1 /*41*/].f_12) * uParam0->f_1406[iParam1 /*41*/].f_11) + uParam0->f_1406[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1406[iParam1 /*41*/].f_12) * uParam0->f_1406[iParam1 /*41*/].f_11) + uParam0->f_1406[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1406[iParam1 /*41*/].f_13) * uParam0->f_1406[iParam1 /*41*/].f_11) + uParam0->f_1406[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1406[iParam1 /*41*/].f_13) * uParam0->f_1406[iParam1 /*41*/].f_11) + uParam0->f_1406[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_2287 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2265)) && __LIB_8__::func_864(uParam0->f_2288, uParam0->f_1406[iParam1 /*41*/].f_1, uParam0->f_1406[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_2265) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_2265) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_2288), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_2288), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_2288), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_2288), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1406[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1406[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1406[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1406[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1406[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1406[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1406[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1406[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (fVar29[iVar40] < fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { vVar16[iVar41 /*3*/] };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*fParam8 = __LIB_0__::func_152(uParam0->f_1406[iParam1 /*41*/].f_1, vVar0, 0);
	if (*fParam8 < uParam0->f_1406[iParam1 /*41*/].f_12)
	{
		*fParam8 = (*fParam8 + 360f);
	}
	if (uParam0->f_1406[iParam1 /*41*/].f_13 < uParam0->f_1406[iParam1 /*41*/].f_12)
	{
		*fParam9 = (uParam0->f_1406[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*fParam9 = uParam0->f_1406[iParam1 /*41*/].f_13;
	}
	if (*fParam8 < *fParam9)
	{
		vVar42 = { uParam0->f_1406[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_2266 = { vVar42 + Vector(0f, (BUILTIN::COS(*fParam8) * uParam0->f_1406[iParam1 /*41*/].f_11), (BUILTIN::SIN(*fParam8) * uParam0->f_1406[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_2269 = { vVar42 + Vector(0f, ((BUILTIN::COS(*fParam8) * uParam0->f_1406[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*fParam8) * uParam0->f_1406[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

int func_884(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	__LIB_0__::func_191();
	iVar2 = 0;
	iVar3 = 2;
	iVar4 = 8;
	iVar5 = 9;
	if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &uVar1, iParam1, -1, 0, 0))
	{
		return 0;
	}
	Global_1946804.f_1497.f_1[iVar2 /*3*/] = { Global_1946804.f_1378.f_1[iVar2 /*3*/] };
	Global_1946804.f_1497.f_1[iVar3 /*3*/] = { Global_1946804.f_1378.f_1[iVar3 /*3*/] };
	Global_1946804.f_1497.f_1[iVar4 /*3*/] = { Global_1946804.f_1378.f_1[iVar4 /*3*/] };
	Global_1946804.f_1497.f_1[iVar5 /*3*/] = { Global_1946804.f_1378.f_1[iVar5 /*3*/] };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar2 /*3*/]), iVar2, iVar0);
		__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar3 /*3*/]), iVar3, iVar0);
		__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar4 /*3*/]), iVar4, iVar0);
		__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar5 /*3*/]), iVar5, iVar0);
		iVar0++;
	}
	if (bParam2)
	{
		__LIB_1__::func_41(iVar2, 0);
		__LIB_1__::func_41(iVar3, 0);
		__LIB_1__::func_41(iVar4, 0);
		__LIB_1__::func_41(iVar5, 0);
		__LIB_1__::func_452(19, 0, 66, 0, 0);
	}
	else
	{
		PED::_SET_PED_COMPONENT_ENABLED(iParam0, Global_1946804.f_1497.f_1[iVar2 /*3*/], false, false, false);
		PED::_SET_PED_COMPONENT_ENABLED(iParam0, Global_1946804.f_1497.f_1[iVar3 /*3*/], false, false, false);
		PED::_SET_PED_COMPONENT_ENABLED(iParam0, Global_1946804.f_1497.f_1[iVar4 /*3*/], false, false, false);
		PED::_SET_PED_COMPONENT_ENABLED(iParam0, Global_1946804.f_1497.f_1[iVar5 /*3*/], false, false, false);
	}
	Global_1347477.f_185 = iParam1;
	__LIB_0__::func_245(0);
	return 1;
}

void func_885(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 != Global_1360165[iParam0 /*1157*/].f_13 || __LIB_0__::func_287(iParam0, 36, 1))
	{
		__LIB_0__::func_290(iParam0, 36, 1);
		Global_1360165[iParam0 /*1157*/].f_12 = Global_1360165[iParam0 /*1157*/].f_13;
		__LIB_8__::func_911(iParam0, &(Global_1360165[iParam0 /*1157*/].f_2));
	}
}

int func_886(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	__LIB_0__::func_191();
	if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &iVar0, iParam0, -1, 0, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7731[0 /*5*/];
	}
	if (iParam3 == -1)
	{
		iParam3 = Global_40.f_7731[1 /*5*/];
	}
	if (iParam4 == -1)
	{
		iParam4 = Global_40.f_7731[2 /*5*/];
	}
	__LIB_10__::func_814(iParam2, iParam3, iParam4);
	if ((iParam2 == 0 && iParam3 == 0) && iParam4 == 0)
	{
		__LIB_10__::func_838(iParam1, joaat("MPC_MOD_HEAD_SUPER_CLEAN_SHAVE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	else
	{
		__LIB_10__::func_838(iParam1, joaat("BASE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_1__::func_452(1, 96, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(1, 96, 1, iParam1, 0);
		}
	}
	__LIB_0__::func_245(1);
	return 1;
}

bool func_887(int* iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_2__::func_523(iParam1, uParam2, 0);
		iVar5 = __LIB_4__::func_48(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_888(int* iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_4__::func_50(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_2__::func_523(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_889(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_9__::func_726(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_9__::func_726(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

bool func_890(int iParam0)
{
	if (__LIB_5__::func_132(iParam0))
	{
		__LIB_9__::func_479(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
		return __LIB_5__::func_397(iParam0);
	}
	if (__LIB_2__::func_27(iParam0, 64))
	{
		return false;
	}
	return __LIB_5__::func_520(iParam0);
}

bool func_891(int iParam0)
{
	if (__LIB_5__::func_132(iParam0))
	{
		return __LIB_9__::func_479(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
	}
	return __LIB_5__::func_519(iParam0);
}

bool func_892(int iParam0)
{
	return (Global_40.f_9.f_21 && iParam0) != 0;
}

void func_893(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		__LIB_0__::func_490(iParam0[iVar0], bParam1);
		iVar0++;
	}
}

void func_894(int iParam0)
{
	Global_40.f_9.f_21 = (Global_40.f_9.f_21 || iParam0);
}

void func_895(int iParam0)
{
	Global_40.f_9.f_21 = (Global_40.f_9.f_21 - (Global_40.f_9.f_21 && iParam0));
}

bool func_896(int iParam0, int iParam1)
{
	int iVar0;
	if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (((PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &iVar0, false, false) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_897()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		__LIB_0__::func_798(iVar0);
		__LIB_4__::func_965(iVar0);
		iVar0++;
	}
}

int func_898(char[4] cParam0)
{
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

void func_899(char[4] cParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_3__::func_358(__LIB_8__::func_645(cParam0)))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_4__::func_955(__LIB_8__::func_645(cParam0)))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, cParam0->f_5421));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				__LIB_8__::func_717(cParam0, iVar1, sParam1, bParam2);
			}
			iVar0++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		iVar2 = 0;
		while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iLocal_14))
		{
			iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iLocal_14));
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				__LIB_8__::func_717(cParam0, iVar3, sParam1, bParam2);
			}
			iVar2++;
		}
	}
}

int func_900(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_9__::func_906(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_901(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_9__::func_906(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_902(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_9__::func_906(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_903(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			uParam0->f_24 = __LIB_0__::func_23();
			iVar4 = __LIB_0__::func_23();
			__LIB_0__::func_467(&iVar4, uParam0->f_6);
			__LIB_0__::func_468(&iVar4, 0);
			__LIB_0__::func_469(&iVar4, 0);
			if (__LIB_1__::func_110(uParam0->f_24, iVar4, 1))
			{
				__LIB_1__::func_446(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			__LIB_9__::func_36(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			__LIB_0__::func_115(uParam0, 1);
			break;
		case 1:
			fVar5 = __LIB_5__::func_120(uParam0, -1082130432 /* Float: -1f */);
			if (fVar5 >= 0.5f)
			{
				__LIB_0__::func_115(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = __LIB_5__::func_120(uParam0, -1082130432 /* Float: -1f */);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				__LIB_1__::func_446(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar4), __LIB_0__::func_42(iVar4), __LIB_0__::func_43(iVar4));
				__LIB_4__::func_573(CLOCK::GET_CLOCK_HOURS());
				__LIB_5__::func_591(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_904(int iParam0)
{
	int iVar0;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(iParam0);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0xD4B614179BCD0654(iVar0);
	}
}

void func_905(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	__LIB_7__::func_881(iParam0, &iVar0, &iVar1);
	if (!__LIB_1__::func_102(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
}

int func_906(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
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
		return 0;
	}
	iVar0 = __LIB_0__::func_2();
	if ((bParam4 && __LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 512)) && !__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 1024))
	{
		if (__LIB_0__::func_104())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 0;
	}
	if (!__LIB_5__::func_546(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((__LIB_1__::func_25(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - __LIB_5__::func_452()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((__LIB_1__::func_25(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - __LIB_5__::func_452()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!__LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1))
			{
				return 0;
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
		return 0;
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
		return 1;
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
		__LIB_9__::func_112(579, Global_1835011[iParam0 /*74*/].f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
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
	return 1;
}

void func_907(int iParam0, bool bParam1)
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
		__LIB_10__::func_16(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		__LIB_1__::func_446(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_908(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = __LIB_0__::func_449(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_191();
	if (bParam5)
	{
		if (!__LIB_7__::func_364(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_1__::func_443(iVar3, 1, 1, 1, 1, 1);
	__LIB_5__::func_801(31, 0, 0, 0, 0);
	__LIB_1__::func_36(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_5__::func_801(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_5__::func_801(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

bool func_909(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = __LIB_0__::func_223(iParam1);
	}
	if (iVar0 == -1 && !__LIB_1__::func_87(iVar1, __LIB_0__::func_241()))
	{
		return true;
	}
	if (uParam2->f_1 != 0 && __LIB_0__::func_51(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return __LIB_7__::func_362(iParam0, uParam2);
			}
			else
			{
				return true;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			__LIB_4__::func_603(uParam2);
		}
	}
	if (!__LIB_0__::func_51(uParam2, 1))
	{
		__LIB_0__::func_608(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!__LIB_7__::func_364(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return true;
			}
		}
		uParam2->f_1 = iVar1;
		__LIB_0__::func_7(uParam2, 1);
	}
	if (!bParam3)
	{
		return true;
	}
	return __LIB_7__::func_362(iParam0, uParam2);
}

void func_910(var uParam0)
{
	__LIB_4__::func_945(uParam0, 2);
}

void func_911(int iParam0)
{
	Global_1357549.f_1614 = iParam0;
}

bool func_912(int iParam0)
{
	return __LIB_0__::func_21(iParam0, 256);
}

void func_913(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 8192);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 8192);
	}
}

float func_914(var uParam0)
{
	return __LIB_1__::func_583(&(uParam0->f_603));
}

void func_915(bool bParam0)
{
	if (!bParam0)
	{
		__LIB_4__::func_686(17);
	}
	else
	{
		__LIB_4__::func_687(17);
	}
}

void func_916(bool bParam0)
{
	if (!bParam0)
	{
		__LIB_4__::func_686(23);
	}
	else
	{
		__LIB_4__::func_687(23);
	}
}

int func_917(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	PED::_0xF008E0BA1FE1D644(1);
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
	}
	iVar0 = __LIB_0__::func_110();
	if (PED::IS_PED_IN_GROUP(iParam0))
	{
		PED::REMOVE_PED_FROM_GROUP(iParam0);
	}
	COMPANION::_0xCBD9EC60495C728C(iVar0);
	PED::SET_PED_AS_GROUP_MEMBER(iParam0, iVar0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 279, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
	__LIB_9__::func_86(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 156, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 152, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 154, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 156, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 25, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 87, true);
	PED::_0x9238A3D970BBB0A9(iParam0, -1972074710);
	PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	if (bParam2)
	{
	}
	if (bParam1)
	{
		if (MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iParam0)))
		{
			iVar1 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
			MAP::_BLIP_SET_STYLE(iVar1, joaat("BLIP_STYLE_COMPANION"));
		}
		else
		{
			iVar1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iParam0);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(iVar1, sParam3);
		}
	}
	return 1;
}

void func_918(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar0))
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, (iVar0 - 1), &uVar2))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 658540077, true) != 1)
					{
						__LIB_3__::func_910(sParam0, iParam1, &iVar1, 0, 0);
					}
					else if (__LIB_0__::func_665(iParam1, iParam2, 1, 1) > fParam3)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, 2f, 0, -1082130432 /* Float: -1f */, 0);
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam1, 2f);
					}
					else if (__LIB_0__::func_665(iParam1, iParam2, 1, 1) < 5f)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, 1f, 0, -1082130432 /* Float: -1f */, 0);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, 1f);
					}
				}
			}
		}
	}
}

int func_919(float fParam0)
{
	if (!__LIB_0__::func_899(fParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_901(fParam0))
	{
		return BUILTIN::ROUND((fParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((fParam0->f_1 * 1000f)));
}

bool func_920(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && __LIB_0__::func_665(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(__LIB_1__::func_372(iVar0, 0)))
		{
			if (__LIB_9__::func_260(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_921(vector3 vParam0, float fParam3)
{
	if (__LIB_0__::func_86(vParam0))
	{
		return false;
	}
	if (__LIB_1__::func_960(255) == 4)
	{
		return false;
	}
	if (__LIB_1__::func_14(4, 255))
	{
	}
	__LIB_4__::func_687(4);
	__LIB_1__::func_961(&(Global_1109400.f_419));
	Global_1109400.f_419.f_6 = { vParam0 };
	Global_1109400.f_419 = fParam3;
	Global_1109400.f_419.f_5 = 1;
	Global_1109400.f_22.f_16 = 0;
	Global_1109400.f_22.f_17 = 0;
	__LIB_1__::func_962(Global_1109400.f_419, 42);
	return true;
}

void func_922(var uParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_2__::func_259(&(uParam0->f_603));
	}
}

void func_923(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (__LIB_8__::func_761())
		{
		}
		__LIB_8__::func_765(1);
		if (INVENTORY::_0x7C7E4AB748EA3B07())
		{
			INVENTORY::_0xE1F45A67A9F0DCBC(5);
		}
		else
		{
			INVENTORY::_0xE1F45A67A9F0DCBC(1);
		}
		__LIB_9__::func_901(Global_35, &Global_1347400);
		if (bParam1)
		{
			__LIB_3__::func_809();
		}
		if (bParam0)
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(Global_35, true, true);
		}
	}
}

int func_924(float fParam0, float fParam1)
{
	if (__LIB_3__::func_514(fParam0, fParam1))
	{
		__LIB_1__::func_561(fParam0);
		return 1;
	}
	return 0;
}

void func_925(var uParam0, char[4] cParam1)
{
	__LIB_5__::func_494(&(uParam0->f_7375), cParam1, __LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) != 5);
}

bool func_926(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (uParam0->f_12 == 0)
	{
		uParam0->f_12 = MISC::GET_GAME_TIMER();
	}
	iVar0 = __LIB_1__::func_447(*uParam0, 1);
	if (__LIB_0__::func_20(iVar0))
	{
		if (Global_1888801[iVar0 /*35*/].f_12 != 0)
		{
			PED::_0x95423627A9CA598E(Global_1888801[iVar0 /*35*/].f_12);
		}
	}
	if (!PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_12 + 20000 < MISC::GET_GAME_TIMER())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		return false;
	}
	if (uParam0->f_5)
	{
		__LIB_4__::func_845(1, 0);
		uParam0->f_5 = 0;
	}
	__LIB_4__::func_839();
	if (uParam0->f_10 == 0)
	{
		uParam0->f_10 = MISC::GET_GAME_TIMER();
	}
	if (uParam0->f_10 + 1000 > MISC::GET_GAME_TIMER())
	{
		return false;
	}
	switch (__LIB_1__::func_972(iVar0))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 8:
		case 9:
			if (!__LIB_1__::func_220(iVar0) && uParam0->f_10 + 20000 + 1000 > MISC::GET_GAME_TIMER())
			{
				return false;
			}
			if (uParam0->f_11 == 0)
			{
				uParam0->f_11 = MISC::GET_GAME_TIMER();
			}
			if (uParam0->f_11 + 1000 > MISC::GET_GAME_TIMER())
			{
				return false;
			}
			break;
	}
	if (uParam0->f_8 && !uParam0->f_9)
	{
		TASK::_0x4161648394262FDF(Global_36, 60f);
		PED::_0x4759CC730F947C81();
		uParam0->f_9 = 1;
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	if (uParam0->f_6)
	{
		if (!STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x387AD749E3B69B70(*uParam0, CAM::GET_GAMEPLAY_CAM_ROT(2), 500f, 4);
			return false;
		}
		if (!STREAMING::_0x0909F71B5C070797() && uParam0->f_11 + 20000 + 1000 > MISC::GET_GAME_TIMER())
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), *uParam0) > 2500f)
				{
				}
			}
			return false;
		}
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (uParam0->f_7)
	{
		if (uParam0->f_13 == 0)
		{
			uParam0->f_13 = MISC::GET_GAME_TIMER();
		}
		if (uParam0->f_13 + 20000 > MISC::GET_GAME_TIMER())
		{
			if (!__LIB_4__::func_817())
			{
				return false;
			}
		}
	}
	if (uParam0->f_8 && !PED::_0x0EE3F0D7FECCC54F())
	{
		return false;
	}
	Global_36 = { *uParam0 };
	if (uParam0->f_4)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	return true;
}

bool func_927(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_9__::func_381(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_928(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	__LIB_9__::func_381(iParam0, uParam1, 1);
	__LIB_2__::func_624(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_929(var uParam0)
{
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 268435456))
	{
		return;
	}
	__LIB_10__::func_18(uParam0);
}

int func_930(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return iVar0;
	}
	bVar1 = __LIB_5__::func_570(uParam0, iParam1);
	bVar2 = (ENTITY::IS_ENTITY_A_PED(iParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)));
	if (bVar2)
	{
		iVar3 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
	}
	if (bVar1)
	{
		__LIB_5__::func_572(uParam0, iParam1, 128);
		if (bParam4)
		{
			__LIB_5__::func_572(uParam0, iParam1, 1024);
		}
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && bParam4)
	{
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
		if (bVar2)
		{
			__LIB_0__::func_900(iVar3);
			if (MAP::DOES_BLIP_EXIST(iVar0))
			{
				MAP::_BLIP_SET_MODIFIER(iVar0, -546708623);
				if (bParam5)
				{
					MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
				}
			}
		}
		else if (__LIB_5__::func_570(uParam0, iParam1) && MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::_BLIP_SET_MODIFIER(iVar0, -546708623);
			if (bParam5)
			{
				MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(iVar0))
			{
				iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam3, iParam1);
			}
			MAP::_BLIP_SET_MODIFIER(iVar0, -546708623);
			if (bParam5)
			{
				MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
			}
		}
	}
	if (bVar1)
	{
		if (__LIB_5__::func_281(uParam0, iParam1, &iVar4))
		{
			__LIB_5__::func_339(&(uParam0->f_5423[iVar4 /*65*/]));
		}
	}
	if (bVar2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		__LIB_6__::func_919(iVar3);
	}
	return iVar0;
}

var func_931(int iParam0, int iParam1)
{
	return __LIB_9__::func_993(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_932(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_10__::func_901(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_933(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_10__::func_902(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_934(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_5__::func_129(&(uParam0->f_861), uParam0->f_872);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_85(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_5__::func_67(uParam0);
	__LIB_4__::func_622(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_977(uParam0, 4);
	__LIB_5__::func_69(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_570(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_804))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_861, 128));
	if (!__LIB_0__::func_1(uParam0->f_861, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_935(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	bVar0 = (ENTITY::IS_ENTITY_A_PED(iParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)));
	if (bVar0)
	{
		iVar1 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
		if (bVar0)
		{
			__LIB_0__::func_745(iVar1);
			if (MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iVar2)))
			{
				MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iVar2), -546708623);
				MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iVar2), 231194138);
			}
		}
		else if (__LIB_5__::func_570(uParam0, iParam1) && MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iParam1)))
		{
			MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iParam1), -546708623);
			MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iParam1), 231194138);
		}
		else
		{
			__LIB_3__::func_608(iParam1);
		}
	}
	if (__LIB_5__::func_570(uParam0, iParam1))
	{
		__LIB_5__::func_571(uParam0, iParam1, 1024);
		if (bParam2)
		{
			__LIB_5__::func_572(uParam0, iParam1, 128);
		}
		else
		{
			__LIB_5__::func_571(uParam0, iParam1, 128);
		}
		if (__LIB_5__::func_281(uParam0, iParam1, &iVar3))
		{
			__LIB_5__::func_339(&(uParam0->f_5423[iVar3 /*65*/]));
		}
	}
	if (bVar0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		__LIB_6__::func_919(iVar1);
	}
}

void func_936(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		bVar0 = true;
		iVar1 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
		if (bParam3)
		{
			if (__LIB_5__::func_558(uParam0, iParam1, 1024))
			{
				__LIB_5__::func_572(uParam0, iParam1, 8192);
			}
			else
			{
				__LIB_0__::func_900(iVar1);
			}
		}
		else if (!__LIB_5__::func_558(uParam0, iParam1, 8192))
		{
			if (__LIB_0__::func_51(&(Global_1360165[iVar1 /*1157*/].f_12), 8) && !__LIB_5__::func_558(uParam0, iParam1, 1024))
			{
				__LIB_0__::func_745(iVar1);
			}
		}
		else
		{
			__LIB_5__::func_571(uParam0, iParam1, 8192);
		}
	}
	if (bParam3)
	{
		__LIB_9__::func_102(uParam0, iParam1, iParam2, iParam4, 1, bVar0);
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_5303) || iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE"))
	{
		__LIB_9__::func_102(uParam0, iParam1, iParam2, iParam4, 0, bVar0);
	}
}

void func_937()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_3__::func_150(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_1__::func_828(0);
	__LIB_9__::func_908(7);
	__LIB_9__::func_961(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_9__::func_961(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_9__::func_961(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_938(int iParam0, char[4] cParam1)
{
	__LIB_5__::func_136(&(iParam0->f_428), cParam1);
}

bool func_939(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_205(iParam0, iParam1))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") && DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
		if (iVar0 == iParam1)
		{
			return true;
		}
		else
		{
			__LIB_0__::func_60(iParam0);
		}
	}
	iVar1 = PED::_REQUEST_METAPED_OUTFIT(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "metaped_outfit_request", iVar1);
	DECORATOR::DECOR_SET_INT(iParam0, "metaped_outfit_request_name", iParam1);
	return true;
}

bool func_940(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam2 = 8;
			break;
		case 14:
			*uParam1 = 9;
			*uParam2 = 17;
			break;
		case 16:
			*uParam1 = 9;
			*uParam2 = 18;
			break;
		case 33:
			*uParam1 = 17;
			*uParam2 = 18;
			break;
		case 29:
			*uParam1 = 9;
			*uParam2 = 17;
			break;
		case 30:
			*uParam1 = 6;
			*uParam2 = 18;
			break;
		case 20:
		case 26:
		case 37:
		case 40:
		case 54:
			*uParam1 = 22;
			*uParam2 = 5;
			break;
		case 11:
			*uParam1 = 12;
			*uParam2 = 18;
			break;
		default:
			return false;
	}
	return true;
}

bool func_941(var uParam0)
{
	if ((__LIB_6__::func_872(uParam0, 4) || __LIB_6__::func_872(uParam0, 128)) && !__LIB_4__::func_511())
	{
		return false;
	}
	return true;
}

void func_942(int iParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
}

char* func_943(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_IG3_ENTER_TO_POINT_A";
		case 1:
			return "pl_IG3_POINT_A_TO_POINT_B";
		case 2:
			return "pl_IG3_POINT_A_TO_POINT_C";
		case 3:
			return "pl_IG3_POINT_A_TO_POINT_D";
		case 4:
			return "pl_IG3_POINT_B_TO_POINT_A";
		case 5:
			return "pl_IG3_POINT_B_TO_POINT_C";
		case 6:
			return "pl_IG3_POINT_B_TO_POINT_D";
		case 7:
			return "pl_IG3_POINT_C_TO_POINT_A";
		case 8:
			return "pl_IG3_POINT_C_TO_POINT_B";
		case 9:
			return "pl_IG3_POINT_C_TO_POINT_D";
		case 10:
			return "pl_IG3_POINT_D_TO_POINT_A";
		case 11:
			return "pl_IG3_POINT_D_TO_POINT_B";
		case 12:
			return "pl_IG3_POINT_D_TO_POINT_C";
		case 13:
			return "pl_POINT_D_IDLE";
		default:
			break;
	}
	return "";
}

void func_944(int* iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_7__::func_873(iParam0);
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

void func_945(var uParam0)
{
	char cVar0[64];
	if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12) || PED::IS_PED_FATALLY_INJURED(Global_35)) || ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		if (__LIB_0__::func_0(uParam0))
		{
			__LIB_6__::func_886(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			__LIB_6__::func_892(uParam0, cVar0);
			__LIB_6__::func_879(uParam0, 2);
		}
	}
}

void func_946(var uParam0)
{
	char cVar0[64];
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		if (__LIB_0__::func_0(uParam0))
		{
			__LIB_6__::func_886(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			__LIB_6__::func_892(uParam0, cVar0);
			__LIB_6__::func_879(uParam0, 2);
		}
	}
}

void func_947()
{
	if (Global_1899848 == 1)
	{
		return;
	}
	__LIB_7__::func_871();
	Global_1899848.f_2 = 1;
	Global_1899848.f_201 = { -2537.229f, 397.3773f, 147.148f };
	Global_1899848.f_201.f_3 = { -2.3375f, 1.1951f, 16.4174f };
	Global_1899848.f_201.f_6 = { -2539.177f, 399.4362f, 147.1013f };
	Global_1899848.f_201.f_9 = { 0f, 0f, 270f };
	Global_1899848.f_15.f_2 = { -2537.2f, 403.98f, 147.12f };
	Global_1899848.f_15.f_5 = 0f;
	Global_1899848.f_15.f_6 = { -2558.34f, 401.78f, 147.12f };
	Global_1899848.f_15.f_9 = 90f;
	Global_1899848.f_15.f_11 = { 0f, 0f, 0f };
	Global_1899848.f_15.f_14 = { 0f, 0f, 0f };
	Global_1899848.f_9 = 8;
	Global_1899848.f_32[0 /*21*/] = { -2544.79f, 404.2467f, 147.3056f };
	Global_1899848.f_32[1 /*21*/] = { -2551.178f, 403.3006f, 147.2997f };
	Global_1899848.f_32[2 /*21*/] = { -2547.369f, 404.1897f, 147.3529f };
	Global_1899848.f_32[3 /*21*/] = { -2552.02f, 395.4868f, 147.1927f };
	Global_1899848.f_32[4 /*21*/] = { -2547.765f, 395.0594f, 147.2349f };
	Global_1899848.f_32[5 /*21*/] = { -2541.398f, 394.8979f, 147.1935f };
	Global_1899848.f_32[6 /*21*/] = { -2550.712f, 395.838f, 147.1927f };
	Global_1899848.f_32[7 /*21*/] = { -2555f, 397.488f, 147.185f };
	Global_1899848 = 1;
	Global_1899848.f_1 = 0;
}

void func_948(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, float fParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = fParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = fParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

void func_949(var uParam0, struct<8> Param1)
{
	__LIB_9__::func_84(&(uParam0->f_7375), Param1);
}

void func_950(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (__LIB_8__::func_761())
		{
		}
		__LIB_8__::func_765(1);
		if (INVENTORY::_0x7C7E4AB748EA3B07())
		{
			INVENTORY::_0xE1F45A67A9F0DCBC(5);
		}
		else
		{
			INVENTORY::_0xE1F45A67A9F0DCBC(1);
		}
		__LIB_9__::func_901(Global_35, &Global_1347400);
		if (bParam1)
		{
			__LIB_8__::func_790();
		}
		if (bParam0)
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(Global_35, true, true);
		}
	}
}

bool func_951(var uParam0)
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
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_13109)))
	{
		__LIB_1__::func_283(&(uParam0->f_13109), 0);
	}
	else if (__LIB_0__::func_265(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (__LIB_3__::func_358(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_4__::func_955(uParam0->f_5421))
		{
			iVar2 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::_0xA0BC8FAED8CFEB3C(iVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2), iVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar5))
						{
							if (!PED::_0xA0BC8FAED8CFEB3C(iVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iLocal_14))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_14);
		iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
		if (ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar7))
			{
				iVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar8) && !PED::_0xA0BC8FAED8CFEB3C(iVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(iVar7) && ENTITY::IS_ENTITY_A_VEHICLE(iVar7)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					iVar10 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7), iVar9);
					if (!ENTITY::IS_ENTITY_DEAD(iVar10))
					{
						if (!PED::_0xA0BC8FAED8CFEB3C(iVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_952(var uParam0)
{
	bool bVar0;
	bVar0 = (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
	if (__LIB_0__::func_265(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		if ((__LIB_0__::func_13(32768) && __LIB_4__::func_545()) && __LIB_0__::func_265(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (__LIB_6__::func_872(uParam0, 8) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_1__::func_469(uParam0->f_607))))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_1__::func_469(uParam0->f_607)));
			__LIB_6__::func_881(uParam0, 8);
		}
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		__LIB_0__::func_489(0, 0);
		__LIB_6__::func_881(uParam0, 4096);
		return true;
	}
	return false;
}

void func_953(char[4] cParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	__LIB_9__::func_156(cParam0, &uParam1, "", bParam9, bParam10);
}

void func_954(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, var uParam8, var uParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;
	if (!__LIB_5__::func_125(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1406[iParam1 /*41*/].f_12) * uParam0->f_1406[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1406[iParam1 /*41*/].f_12) * uParam0->f_1406[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1406[iParam1 /*41*/].f_13) * uParam0->f_1406[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1406[iParam1 /*41*/].f_13) * uParam0->f_1406[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1406[iParam1 /*41*/].f_12) * uParam0->f_1406[iParam1 /*41*/].f_11) + uParam0->f_1406[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1406[iParam1 /*41*/].f_12) * uParam0->f_1406[iParam1 /*41*/].f_11) + uParam0->f_1406[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1406[iParam1 /*41*/].f_13) * uParam0->f_1406[iParam1 /*41*/].f_11) + uParam0->f_1406[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1406[iParam1 /*41*/].f_13) * uParam0->f_1406[iParam1 /*41*/].f_11) + uParam0->f_1406[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_2287 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2265)) && __LIB_0__::func_266(uParam0->f_2288, uParam0->f_1406[iParam1 /*41*/].f_1, uParam0->f_1406[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_2265) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_2265) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_2288), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_2288), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_2288), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_2288), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1406[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1406[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1406[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1406[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1406[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1406[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1406[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1406[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (fVar29[iVar40] < fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { vVar16[iVar41 /*3*/] };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*uParam8 = __LIB_0__::func_152(uParam0->f_1406[iParam1 /*41*/].f_1, vVar0, 0);
	if (*uParam8 < uParam0->f_1406[iParam1 /*41*/].f_12)
	{
		*uParam8 = (*uParam8 + 360f);
	}
	if (uParam0->f_1406[iParam1 /*41*/].f_13 < uParam0->f_1406[iParam1 /*41*/].f_12)
	{
		*uParam9 = (uParam0->f_1406[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*uParam9 = uParam0->f_1406[iParam1 /*41*/].f_13;
	}
	if (*uParam8 < *uParam9)
	{
		vVar42 = { uParam0->f_1406[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_2266 = { vVar42 + Vector(0f, (BUILTIN::COS(*uParam8) * uParam0->f_1406[iParam1 /*41*/].f_11), (BUILTIN::SIN(*uParam8) * uParam0->f_1406[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_2269 = { vVar42 + Vector(0f, ((BUILTIN::COS(*uParam8) * uParam0->f_1406[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*uParam8) * uParam0->f_1406[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

bool func_955(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			uParam0->f_24 = __LIB_0__::func_23();
			iVar4 = __LIB_0__::func_23();
			__LIB_0__::func_467(&iVar4, uParam0->f_6);
			__LIB_0__::func_468(&iVar4, 0);
			__LIB_0__::func_469(&iVar4, 0);
			if (__LIB_1__::func_110(uParam0->f_24, iVar4, 1))
			{
				__LIB_1__::func_446(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			__LIB_6__::func_670(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			__LIB_0__::func_115(uParam0, 1);
			break;
		case 1:
			fVar5 = __LIB_5__::func_120(uParam0, -1082130432 /* Float: -1f */);
			if (fVar5 >= 0.5f)
			{
				__LIB_0__::func_115(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = __LIB_5__::func_120(uParam0, -1082130432 /* Float: -1f */);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				__LIB_1__::func_446(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar4), __LIB_0__::func_42(iVar4), __LIB_0__::func_43(iVar4));
				__LIB_4__::func_573(CLOCK::GET_CLOCK_HOURS());
				__LIB_5__::func_591(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

int func_956(struct<2> Param0, int iParam2)
{
	if (!__LIB_3__::func_358(Param0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (__LIB_4__::func_610(Param0, iParam2))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam2, Param0);
		return 1;
	}
	return 0;
}

void func_957()
{
	Global_1359489.f_11 = 0;
}

int func_958(vector3 vParam0, float fParam3, bool bParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false), vParam0, 1f, 1))
		{
			return 1;
		}
		if (bParam4)
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("UTILLIWAG"), vParam0, true))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), vParam0, fParam3, true, false, true);
				return 1;
			}
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), vParam0, fParam3, true, false, true);
			return 1;
		}
	}
	return 0;
}

int func_959(var uParam0)
{
	int iVar0;
	Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/] = uParam0;
	iVar0 = Global_1946804.f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804.f_2535.f_2 = (Global_1946804.f_2535.f_2 || iVar0);
	Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/].f_1 = iVar0;
	Global_1946804.f_2535.f_1++;
	return iVar0;
}

int func_960(var uParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return 0;
	}
	return 1;
}

int func_961(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return 0;
	}
	if (__LIB_0__::func_118(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return 1;
	}
	if (__LIB_0__::func_117(iParam0, 1) && !bParam1)
	{
		__LIB_0__::func_123(iParam0, 128);
		return 1;
	}
	__LIB_0__::func_121(iParam0, 129);
	__LIB_1__::func_926(iParam0);
	PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(iParam0));
	PERSCHAR::_0xFC77C5B44D5FF7C0(__LIB_0__::func_120(iParam0));
	__LIB_0__::func_119(iParam0, 0);
	return 1;
}

bool func_962(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { __LIB_4__::func_572(iParam0) };
	if (__LIB_0__::func_138(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!__LIB_10__::func_940(iParam0, uParam2, &iVar0))
	{
		return false;
	}
	if (__LIB_5__::func_61(*uParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_963(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	iVar0 = uParam0->f_2078;
	if (iVar0 >= 0 && !__LIB_4__::func_579(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[iVar0 /*41*/].f_1, true) <= uParam0->f_1406[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_2082 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_2082), __LIB_1__::func_569(uParam0->f_1735[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_2082), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_2082.f_8), __LIB_1__::func_569(uParam0->f_1735[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_2082.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_2082)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_2082.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1735[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1735[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_2294), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1406[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1735[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 65)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1735[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1735[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292) || iVar26 != uParam0->f_2292))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
											__LIB_4__::func_612(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1735[iVar0 /*22*/].f_18 != 0f || uParam0->f_1735[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1735[iVar0 /*22*/].f_18, 0f, uParam0->f_1735[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1735[iVar0 /*22*/].f_18 != 0f || uParam0->f_1735[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_1406[iVar0 /*41*/].f_1, 1), uParam0->f_1735[iVar0 /*22*/].f_18, 0f, uParam0->f_1735[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_1406[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_1406[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_2082));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_4__::func_612(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_2082), 4))
							{
								bVar32 = (bVar32 || uParam0->f_2098.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_2098.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_2098.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_2098.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_2098.f_22 != bVar30);
								uParam0->f_2098.f_16 = iVar23;
								uParam0->f_2098.f_17 = { vVar20 };
								uParam0->f_2098.f_20 = fVar27;
								uParam0->f_2098.f_21 = fVar28;
								uParam0->f_2098.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_2098 = { uParam0->f_2082 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_2098));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_2082), 9))
							{
								bVar32 = (bVar32 || uParam0->f_2121.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_2121.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_2121.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_2121.f_21 != bVar30);
								uParam0->f_2121.f_16 = iVar23;
								uParam0->f_2121.f_17 = { vVar20 };
								uParam0->f_2121.f_20 = !bVar31;
								uParam0->f_2121.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_2121 = { uParam0->f_2082 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_2121));
								}
							}
							Jump @1465; //curOff = 1421
							if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
							}
							StringCopy(&(uParam0->f_2082), "", 64);
							StringCopy(&(uParam0->f_2082.f_8), "", 64);
							__LIB_4__::func_617(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

bool func_964(var uParam0, char[4] cParam1)
{
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 256))
	{
		if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 65536))
		{
			if (__LIB_0__::func_116(cParam1))
			{
				__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 131072);
			}
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 65536);
		}
		if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 131072))
		{
			if (!__LIB_4__::func_562(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				__LIB_5__::func_585(&(uParam0->f_7375), &(uParam0->f_10792));
				__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 256);
			}
		}
		else
		{
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 256);
		}
	}
	return __LIB_5__::func_577(&(uParam0->f_7375), cParam1, (__LIB_4__::func_937(uParam0, 33554432) || (CAM::IS_SCREEN_FADED_OUT() && !__LIB_4__::func_937(uParam0, 1073741824 /* Float: 2f */))), 1);
}

int func_965(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (__LIB_5__::func_261(uParam0))
	{
		if (!__LIB_4__::func_988(&(uParam0->f_7375), iParam1, 4))
		{
			__LIB_5__::func_17(&(uParam0->f_7375), iParam1, 4);
			return 1;
		}
	}
	return __LIB_6__::func_911(&(uParam0->f_7375), iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_966(var uParam0, char* sParam1, var uParam2)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_4__::func_951(uParam2, 1))
	{
		__LIB_5__::func_1(&(uParam2->f_7375));
	}
	__LIB_5__::func_272(uParam2);
	if (!__LIB_0__::func_84(uParam0, 301989888))
	{
		__LIB_5__::func_317(uParam0, &(uParam2->f_10792));
	}
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_860, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_5__::func_65(uParam0) };
		__LIB_4__::func_980(uParam0, &Var0);
	}
	__LIB_5__::func_492(uParam0, sParam1);
	if (__LIB_0__::func_84(uParam0, 131072))
	{
		__LIB_0__::func_99(uParam0, 0);
	}
	if (__LIB_0__::func_100())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		__LIB_0__::func_101();
	}
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(1);
	}
	__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_4__::func_621(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_4__::func_570(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_4__::func_584(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_796);
	}
	__LIB_5__::func_318(uParam0);
	__LIB_5__::func_83(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_804);
	Global_43800 = uParam0->f_804;
	StringCopy(&Global_43802, sParam1, 24);
}

bool func_967(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	iVar1 = __LIB_1__::func_47(iParam0);
	if (iVar1 == -1)
	{
		return false;
	}
	iVar4 = __LIB_1__::func_55(iVar1);
	if (iVar4 == -1)
	{
		return false;
	}
	iVar5 = __LIB_1__::func_66(iVar4, iParam4);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_DYNAMIC_SCENARIO"), true);
	PED::SET_PED_RESET_FLAG(Global_35, 219, true);
	PED::SET_PED_RESET_FLAG(Global_35, 220, true);
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar5))
	{
		__LIB_1__::func_78(iVar4);
		if (Global_1392915.f_121[iVar1 /*20*/].f_2)
		{
			__LIB_1__::func_211(iVar4, 65536);
		}
		*uParam1 = { Global_1392915[iVar1 /*12*/] };
		uParam1->f_11 = iVar1;
		uParam1->f_12 = iVar4;
		uParam1->f_14 = { uParam1->f_6 };
		uParam1->f_17 = uParam1->f_9;
		uParam1->f_18 = BUILTIN::TO_FLOAT(uParam1->f_10);
		if (iParam3 == 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam1->f_23)
			{
				if (__LIB_1__::func_314(iVar4, uParam1->f_14, uParam1->f_17, iVar0, &iVar2, 0, 0))
				{
					uParam1->f_23[iVar0] = iVar2;
					if (iVar2 == Global_35)
					{
						uParam1->f_30 = iVar0;
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < uParam1->f_23)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_23[iVar0]))
			{
				if (uParam1->f_23[iVar0] == Global_35)
				{
					uParam1->f_30 = iVar0;
				}
			}
			iVar0++;
		}
		if (iParam0 == 0)
		{
			__LIB_1__::func_213(23, 1);
		}
		WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, false);
		if (uParam1->f_12 != 5 && uParam1->f_12 != 6)
		{
			HUD::_HIDE_HUD_COMPONENT(372886907);
		}
		*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar5, uParam1, 34, 6500);
		__LIB_1__::func_79();
		__LIB_1__::func_227();
		__LIB_1__::func_821(Global_1392915[iVar1 /*12*/].f_4, 1, 0);
		Global_1899528.f_45[iVar4] = __LIB_0__::func_23();
		__LIB_1__::func_446(&(Global_1899528.f_45[iVar4]), 0, 0, Global_1899528.f_53[iVar4], 0, 0, 0, 0);
		__LIB_6__::func_376(iVar1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		if (__LIB_1__::func_80(iVar4, &uVar3))
		{
			__LIB_1__::func_228(uVar3);
		}
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar5);
		return true;
	}
	return false;
}

float func_968(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	fVar16 = 10000f;
	switch (uParam0->f_1406[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[iParam1 /*41*/].f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[iParam1 /*41*/].f_4, true);
			vVar0 = { uParam0->f_1406[iParam1 /*41*/].f_4 - uParam0->f_1406[iParam1 /*41*/].f_1 };
			if (__LIB_4__::func_788(&vVar3, uParam0->f_1406[iParam1 /*41*/].f_1, uParam0->f_1406[iParam1 /*41*/].f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_1406[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1406[iParam1 /*41*/].f_1.f_2 + uParam0->f_1406[iParam1 /*41*/].f_10))
			{
				__LIB_10__::func_954(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[iParam1 /*41*/].f_1, true) - uParam0->f_1406[iParam1 /*41*/].f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

int func_969(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	if (((__LIB_0__::func_2() != -1 || __LIB_4__::func_939(uParam0) == 25) || __LIB_4__::func_939(uParam0) == 26) || Global_1935630.f_12)
	{
		return 0;
	}
	bVar0 = __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar1 /*65*/])))
		{
			if (__LIB_5__::func_58(uParam0->f_5423[iVar1 /*65*/].f_7, iParam1))
			{
				__LIB_10__::func_22(uParam0, &(uParam0->f_5423[iVar1 /*65*/]), bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_970(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (__LIB_1__::func_55(iVar0) == iParam0)
		{
			iVar1 = __LIB_1__::func_61(iVar0);
			__LIB_6__::func_656(iVar1, 1);
			__LIB_1__::func_830(iVar0);
			if (bParam1)
			{
				__LIB_1__::func_284(&Global_1899778, iVar0);
			}
			__LIB_6__::func_581(iVar0);
		}
		iVar0++;
	}
}

void func_971()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_10__::func_937();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_972()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = __LIB_0__::func_153(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar1) || __LIB_0__::func_237(iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_973(int iParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bVar0 = PED::IS_PED_ON_FOOT(Global_35);
	if (!bVar0 && __LIB_2__::func_27(iParam0, 1048576))
	{
		__LIB_4__::func_727(iParam0, 1048576);
		return 0;
	}
	if (!__LIB_2__::func_27(iParam0, 8388608))
	{
		if (BUILTIN::VDIST2(__LIB_1__::func_204(*iParam0), Global_36) < (10f * 10f))
		{
			__LIB_5__::func_410(iParam0, 8388608);
			__LIB_1__::func_283(&(iParam0->f_2890), 0);
		}
		else
		{
			return 0;
		}
	}
	if (!__LIB_2__::func_27(iParam0, 1048576))
	{
		if (bVar0)
		{
			__LIB_5__::func_410(iParam0, 1048576);
		}
		else
		{
			iVar1 = 131072;
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, __LIB_1__::func_204(*iParam0)) };
			if (vVar2.x > 0f)
			{
				iVar1 = 262144;
			}
			if (__LIB_3__::func_869(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_422, true, 0))
	{
		return 1;
	}
	else if (BUILTIN::VDIST2(__LIB_1__::func_204(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return 1;
	}
	else if (!__LIB_2__::func_27(iParam0, 2097152))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, __LIB_1__::func_204(*iParam0), 1f, 20000, 0.25f, 0, 40000f);
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
		PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0->f_3, -1, 0, 51, 0);
		}
		__LIB_5__::func_410(iParam0, 2097152);
	}
	if (__LIB_0__::func_75(&(iParam0->f_2890)))
	{
		if (__LIB_0__::func_265(&(iParam0->f_2890)) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_974(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		return;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(iLocal_14);
	if (cParam0->f_13179 == -1 || cParam0->f_13179 > (iVar0 - 1))
	{
		cParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = cParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_14));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iVar3, iLocal_14);
		}
		iVar2++;
		if (iVar2 > 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + -1);
		}
	}
	cParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		cParam0->f_13179 = (ITEMSET::GET_ITEMSET_SIZE(iLocal_14) - 1);
	}
}

bool func_975(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
			iVar1 = __LIB_0__::func_347(iParam1);
			if ((iVar0 && iVar1) != 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_976(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		PED::_0x923583741DC87BCE(iParam0, "casual");
	}
}

bool func_977(char* sParam0)
{
	return MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam0);
}

bool func_978()
{
	return TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35);
}

void func_979(int iParam0, char* sParam1, float fParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && fParam2 > 0f)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
			if (iParam3 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 359, true);
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
			OBJECT::_0xA22712E8471AA08E(iVar1, 1, 1);
		}
		MISC::_0x870708A6E147A9AD(iParam0, sParam1, fParam2, fParam4, iParam5, 0, 0, 0, 0, -1);
	}
}

void func_980(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, float fParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, fParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	__LIB_0__::func_629(iParam0, 1);
	__LIB_0__::func_185(iParam0, 1);
	__LIB_0__::func_186(iParam0, 128);
}

bool func_981(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_899(uParam0))
	{
		return false;
	}
	if (__LIB_1__::func_583(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_982(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	__LIB_0__::func_204(iParam0, 2, 1);
	__LIB_0__::func_292(iParam0);
}

void func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_902(iParam0, &iVar1, &iVar2, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (!__LIB_0__::func_117((iVar1 + iVar0), 16))
			{
				__LIB_10__::func_961((iVar1 + iVar0), 1);
			}
			iVar0++;
		}
	}
}

void func_984(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 16))
		{
			__LIB_0__::func_289(iParam0, 16, 0);
		}
	}
	__LIB_0__::func_289(iParam0, 1, bParam1);
}

int func_985(char[4] cParam0)
{
	return __LIB_4__::func_585(&(cParam0->f_7375));
}

bool func_986(char[4] cParam0, bool bParam1)
{
	if (__LIB_6__::func_862(cParam0, 128) && __LIB_0__::func_91())
	{
		return true;
	}
	if (__LIB_1__::func_592(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!__LIB_0__::func_0(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_987(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		__LIB_1__::func_681(iParam1, 1);
		return true;
	}
	if (!__LIB_0__::func_27(*iParam1, 1) && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 0, sParam3, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		__LIB_1__::func_683(iParam1, 1);
	}
	return false;
}

void func_988(char[4] cParam0, int iParam1, char* sParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		__LIB_9__::func_62(cParam0, iParam1, sParam2, 0, 0, 0, 0);
	}
}

int func_989(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (__LIB_8__::func_616(cParam0))
	{
		if (!__LIB_4__::func_988(&(cParam0->f_7375), iParam1, 4))
		{
			__LIB_5__::func_17(&(cParam0->f_7375), iParam1, 4);
			return 1;
		}
	}
	return __LIB_9__::func_444(&(cParam0->f_7375), iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_990(char[4] cParam0)
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	iVar16 = __LIB_6__::func_864(cParam0);
	iVar17 = __LIB_5__::func_24(iVar16);
	iVar18 = __LIB_8__::func_663(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_151(cParam0, &(cParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_4__::func_972(&(cParam0->f_8269[iVar19 /*16*/]));
				}
				else if (__LIB_9__::func_152(cParam0, &(cParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_5__::func_29(&(cParam0->f_8269[iVar19 /*16*/]));
					if (iVar19 < (cParam0->f_8269.f_2504 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269[iVar19 /*16*/]), &(cParam0->f_8269[(cParam0->f_8269.f_2504 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269[cParam0->f_8269.f_2504 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2504 = (cParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2505)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_641[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_55(cParam0, &(cParam0->f_8269.f_641[iVar19 /*16*/]), iVar16, iVar17, iVar18, 1))
				{
					__LIB_4__::func_990(&(cParam0->f_8269.f_641[iVar19 /*16*/]));
					if (iVar19 < (cParam0->f_8269.f_2505 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[iVar19 /*16*/]), &(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1) /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2505 = (cParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2506)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_55(cParam0, &(cParam0->f_8269.f_1282[iVar19 /*16*/]), iVar16, iVar17, iVar18, 0))
				{
					if (__LIB_1__::func_388(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 1))
					{
						if (__LIB_0__::func_755(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 4))
						{
							__LIB_4__::func_991(&(cParam0->f_8269));
						}
						if (iVar19 < (cParam0->f_8269.f_2506 - 1))
						{
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), &(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1) /*16*/]), 16);
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1) /*16*/]), &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), &uVar0, 16);
						}
						cParam0->f_8269.f_2506 = (cParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2507)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_151(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_10__::func_899(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
					__LIB_0__::func_324(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
				}
				else if (__LIB_9__::func_152(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_10__::func_899(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), 0);
					__LIB_0__::func_324(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 2);
					if (iVar19 < (cParam0->f_8269.f_2507 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), &(cParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2507 = (cParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

void func_991(char[4] cParam0, char[4] cParam1, bool bParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	__LIB_9__::func_205(cParam0, &cParam1, "", bParam9, bParam10);
}

void func_992(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		__LIB_0__::func_288(iParam0, 56, 1);
		__LIB_4__::func_89(&(Global_1359489.f_40), 1);
	}
	__LIB_1__::func_684(iParam0, 0);
	__LIB_0__::func_289(iParam0, 4, 0);
	__LIB_0__::func_745(iParam0);
	__LIB_0__::func_706(iParam0);
	__LIB_0__::func_290(iParam0, 37, 1);
	bVar0 = __LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (__LIB_0__::func_287(iParam0, 64, 1))
	{
		__LIB_0__::func_290(iParam0, 64, 1);
	}
	if (bParam3)
	{
		__LIB_0__::func_290(iParam0, 33, 1);
		__LIB_0__::func_290(iParam0, 34, 1);
		__LIB_1__::func_27(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		__LIB_0__::func_707(iParam0, 1, 1, 0);
		if (bParam6)
		{
			__LIB_0__::func_288(iParam0, 30, 1);
		}
		if (bParam7)
		{
			__LIB_0__::func_288(iParam0, 35, 1);
			if (bParam8)
			{
				__LIB_0__::func_288(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			__LIB_0__::func_705(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		__LIB_0__::func_290(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		__LIB_0__::func_288(iParam0, 33, 1);
		__LIB_0__::func_707(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			__LIB_4__::func_89(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_1__::func_561(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			__LIB_0__::func_288(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			__LIB_1__::func_197(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (__LIB_0__::func_287(iParam0, 45, 1))
	{
		__LIB_0__::func_290(iParam0, 45, 1);
	}
	__LIB_0__::func_176(iParam0, 16, 1);
	__LIB_0__::func_290(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
		{
			__LIB_1__::func_463(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_993(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_5__::func_129(&(uParam0->f_861), uParam0->f_872);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_85(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_5__::func_67(uParam0);
	__LIB_4__::func_622(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_977(uParam0, 4);
	__LIB_5__::func_69(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_570(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_804))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_861, 128));
	if (!__LIB_0__::func_1(uParam0->f_861, 128))
	{
		__LIB_3__::func_120();
	}
}

bool func_994(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return true;
	}
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
	{
		return true;
	}
	iVar0 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return true;
	}
	if (!__LIB_0__::func_702(__LIB_3__::func_918(iParam0)))
	{
		__LIB_10__::func_20(iParam0, 0, 0, -1);
	}
	if (__LIB_0__::func_79(iVar0))
	{
		if (!Global_1835011[iParam0 /*74*/].f_71)
		{
			if (bParam1)
			{
				__LIB_1__::func_109(iVar0, 256);
			}
			if (bParam2)
			{
				__LIB_1__::func_109(iVar0, 512);
			}
			Global_1835011[iParam0 /*74*/].f_71 = 1;
			return true;
		}
	}
	return false;
}

int func_995(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_2078;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_865[iParam1 /*18*/];
		fVar3 = uParam0->f_1406[uParam0->f_2078 /*41*/].f_7;
		fVar4 = uParam0->f_1406[uParam0->f_2078 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!__LIB_5__::func_10(uParam0, iVar2))
				{
					uParam0->f_2075 = iParam1;
				}
				uParam0->f_865[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_1406[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_849))) || (!__LIB_0__::func_274(&(uParam0->f_1406[iVar2 /*41*/]), 128) && uParam0->f_2289))
			{
				if (uParam0->f_2289)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_2291, 0.1f, -1, false);
					if (!__LIB_4__::func_562(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_2291, 24, 1000);
					__LIB_9__::func_191(uParam0, 8);
				}
				else
				{
					__LIB_4__::func_532(uParam0, 131072);
					__LIB_9__::func_191(uParam0, 11);
				}
			}
			else if (uParam0->f_2287)
			{
				__LIB_9__::func_191(uParam0, 5);
			}
			else
			{
				__LIB_9__::func_376(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_2259)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_4__::func_118(&(uParam0->f_2259)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_9__::func_376(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_2259)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_4__::func_575(uParam0, uParam0->f_2078))
			{
				iVar1 |= 2048;
			}
			if (__LIB_5__::func_79(Global_35, &(uParam0->f_2076), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_9__::func_376(uParam0);
			}
			if ((!uParam0->f_2287 && !uParam0->f_2289) || bVar0)
			{
				uParam0->f_2076 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_9__::func_376(uParam0);
				}
				else
				{
					__LIB_9__::func_380(uParam0, iParam1, bParam2);
					__LIB_2__::func_259(&(uParam0->f_2259));
					__LIB_9__::func_191(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_2259)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_9__::func_191(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_1406[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_2293)))
				{
					__LIB_5__::func_386(uParam0->f_2293, 0);
				}
			}
			__LIB_2__::func_259(&(uParam0->f_2259));
			__LIB_9__::func_191(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_2259)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_1406[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_9__::func_191(uParam0, 10);
				}
				else
				{
					__LIB_9__::func_191(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_2259)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_9__::func_191(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_2259)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_4__::func_575(uParam0, uParam0->f_2078))
			{
				iVar1 |= 2048;
			}
			if (__LIB_5__::func_79(Global_35, &(uParam0->f_2076), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_2076 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_2291, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_9__::func_191(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_4__::func_118(&(uParam0->f_2259)) >= 0.75f)
			{
				if (!__LIB_4__::func_562(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_2291);
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_9__::func_191(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_996()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_10__::func_23();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_997(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
		}
	}
}

int func_998(int iParam0)
{
	__LIB_5__::func_410(iParam0, 1073741824 /* Float: 2f */);
	return 1;
}

bool func_999(int iParam0, var uParam1)
{
	*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_3__::func_136(iParam0, 0));
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}
