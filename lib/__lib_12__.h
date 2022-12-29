int func_0(int iParam0)
{
	__LIB_6__::func_46(iParam0);
	return -2;
}

int func_1(int iParam0)
{
	__LIB_6__::func_337(iParam0);
	return -2;
}

int func_2(int iParam0)
{
	__LIB_0__::func_601(iParam0);
	return -2;
}

int func_3(int iParam0)
{
	__LIB_0__::func_967(iParam0);
	return -2;
}

int func_4(int iParam0)
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
	if (iParam0 == -1)
	{
		return -2;
	}
	if (Global_1879534.f_1)
	{
		return -1;
	}
	iVar0 = __LIB_5__::func_543(0);
	if (iVar0 >= Global_1879534.f_211[iParam0 /*4*/])
	{
		iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
		iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
		iVar3 = Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1;
		iVar4 = Global_1879534.f_7222[iVar1 /*2*/];
		iVar5 = Global_1879534.f_7222[iVar1 /*2*/].f_1;
		if (iVar3 < iVar4)
		{
			return -2;
		}
		if (iVar3 > iVar5)
		{
			return -2;
		}
		iVar6 = iVar4;
		iVar7 = -1;
		while (iVar6 <= iVar5)
		{
			if (Global_1879534.f_1911[iVar6 /*3*/] == 531432813)
			{
				iVar7 = Global_1879534.f_1911[iVar6 /*3*/].f_2;
				iVar8 = Global_1879534.f_211[iVar7 /*4*/];
				if (iVar8 == iVar2)
				{
					Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 = iVar6;
					return -2;
				}
			}
			iVar6++;
		}
	}
	return -2;
}

void func_5(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	if (iParam1 == 999)
	{
		iVar0 = __LIB_0__::func_2();
	}
	if (iVar0 == -1)
	{
		switch (iParam0)
		{
			case joaat("PLAYER_ZERO"):
				__LIB_9__::func_967(-2125499975);
				break;
			case joaat("PLAYER_THREE"):
				__LIB_9__::func_967(1160113249);
				break;
			default:
				break;
		}
		return;
	}
	if (iParam0 == joaat("MP_MALE"))
	{
		__LIB_9__::func_967(joaat("MPC_PLAYER_TYPE_MP_MALE"));
	}
	else if (iParam0 == joaat("MP_FEMALE"))
	{
		__LIB_9__::func_967(joaat("MPC_PLAYER_TYPE_MP_FEMALE"));
	}
}

void func_6()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		__LIB_0__::func_176(iVar0, 20510, 1);
		Global_40.f_4942[iVar0 /*60*/].f_1 = 0;
		Global_40.f_4942[iVar0 /*60*/].f_2 = 0;
		Global_40.f_4942[iVar0 /*60*/].f_3 = -268604689;
		Global_40.f_4942[iVar0 /*60*/].f_5 = 0;
		iVar0++;
	}
}

void func_7(var uParam0)
{
	int iVar0;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		__LIB_10__::func_769(&(uParam0->f_1[iVar0 /*5*/]));
		iVar0++;
	}
	uParam0->f_62 = 0;
}

int func_8(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return -2;
	}
	iVar0 = iParam0;
	if (__LIB_0__::func_317() == 4 && (((iVar0 != 0 && iVar0 != 2) && iVar0 != 6) && iVar0 != 3))
	{
		return -2;
	}
	__LIB_0__::func_893(iParam0);
	return -2;
}

int func_9()
{
	__LIB_5__::func_548(32768);
	return -2;
}

int func_10(int iParam0)
{
	if (!__LIB_1__::func_76(iParam0))
	{
		return -2;
	}
	__LIB_1__::func_225(iParam0);
	return -2;
}

int func_11(int iParam0)
{
	float fVar0;
	if (Global_1347477.f_200 || !__LIB_0__::func_28())
	{
		return -2;
	}
	fVar0 = __LIB_0__::func_260(13);
	fVar0 = (fVar0 + BUILTIN::TO_FLOAT(iParam0));
	Global_40.f_11095.f_11[13] = __LIB_0__::func_251(fVar0, Global_40.f_11095.f_40, Global_40.f_11095.f_41);
	Global_1347477.f_201 = 1;
	return -2;
}

int func_12(int iParam0)
{
	bool bVar0;
	bVar0 = iParam0 > 0;
	__LIB_1__::func_142(bVar0);
	return -2;
}

int func_13(int iParam0)
{
	if (__LIB_8__::func_791(iParam0))
	{
		return -2;
	}
	if (!Global_1879534 && __LIB_5__::func_543(1) <= 0)
	{
		return -2;
	}
	return -1;
}

int func_14(int iParam0)
{
	__LIB_0__::func_896(iParam0, 1);
	return -2;
}

int func_15(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (!__LIB_8__::func_779(iVar0))
	{
		return -1;
	}
	return -2;
}

int func_16(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!__LIB_0__::func_83(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (__LIB_0__::func_895(Global_1835011[iVar0 /*74*/].f_1) == Global_1879534.f_211[iParam0 /*4*/].f_1)
	{
		return uVar1;
	}
	return uVar2;
}

int func_17(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!__LIB_0__::func_5(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (__LIB_0__::func_895(Global_1347702[iVar0 /*49*/].f_15) == Global_1879534.f_211[iParam0 /*4*/].f_1)
	{
		return uVar1;
	}
	return uVar2;
}

void func_18()
{
	var uVar0;
	var uVar1;
	Global_1357549.f_1886 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Tithing");
	Global_1357549.f_1886.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1357549.f_1886, "Supplies", "");
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1886, "CampFunds");
	__LIB_10__::func_782(uVar0, &(Global_1357549.f_1886.f_2));
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1886, "PlayerCash");
	__LIB_10__::func_782(uVar1, &(Global_1357549.f_1886.f_4));
}

void func_19()
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			Global_23118[iVar0 /*11*/].f_1 = -15;
			Global_23118[iVar0 /*11*/].f_4 = -1;
			Global_23118[iVar0 /*11*/].f_4.f_1 = 0;
			Global_23118[iVar0 /*11*/].f_4.f_2 = 0;
			Global_23118[iVar0 /*11*/].f_4.f_3 = 0;
			__LIB_0__::func_8(&(Global_23118[iVar0 /*11*/].f_4.f_5), 1);
			Global_23118[iVar0 /*11*/].f_4.f_4 = -15;
			__LIB_0__::func_8(&(Global_23118[iVar0 /*11*/].f_4.f_5), 2);
			if (Global_23118[iVar0 /*11*/] & 16777216 == 0)
			{
				Global_23118[iVar0 /*11*/] = (Global_23118[iVar0 /*11*/] - Global_23118[iVar0 /*11*/] & 33554432);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			Global_1058888.f_40615[iVar0 /*11*/].f_1 = -15;
			Global_1058888.f_40615[iVar0 /*11*/].f_4 = -1;
			Global_1058888.f_40615[iVar0 /*11*/].f_4.f_1 = 0;
			Global_1058888.f_40615[iVar0 /*11*/].f_4.f_2 = 0;
			Global_1058888.f_40615[iVar0 /*11*/].f_4.f_3 = 0;
			__LIB_0__::func_8(&(Global_1058888.f_40615[iVar0 /*11*/].f_4.f_5), 1);
			Global_1058888.f_40615[iVar0 /*11*/].f_4.f_4 = -15;
			__LIB_0__::func_8(&(Global_1058888.f_40615[iVar0 /*11*/].f_4.f_5), 2);
			if (Global_1058888.f_40615[iVar0 /*11*/] & 16777216 == 0)
			{
				Global_1058888.f_40615[iVar0 /*11*/] = (Global_1058888.f_40615[iVar0 /*11*/] - Global_1058888.f_40615[iVar0 /*11*/] & 33554432);
			}
			iVar0++;
		}
	}
}

void func_20()
{
	if (!__LIB_0__::func_28())
	{
		__LIB_6__::func_63(45);
	}
}

void func_21(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_8__::func_967(iParam0);
	__LIB_10__::func_794(iParam0);
}

void func_22(var uParam0)
{
	if (__LIB_0__::func_58())
	{
		return;
	}
	Global_40.f_11095.f_48 = uParam0;
}

void func_23(var uParam0)
{
	if (__LIB_0__::func_58())
	{
		return;
	}
	Global_40.f_11095.f_47 = uParam0;
}

void func_24(var uParam0)
{
	if (__LIB_0__::func_58())
	{
		return;
	}
	Global_40.f_11095.f_46 = uParam0;
}

void func_25(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_2__::func_38(iParam0))
	{
		return;
	}
	iVar0 = 8388864;
	if (bParam1)
	{
		if (!__LIB_10__::func_912(iParam0))
		{
			__LIB_0__::func_24(iParam0, iVar0);
		}
	}
	else if (__LIB_10__::func_912(iParam0))
	{
		__LIB_0__::func_25(iParam0, iVar0);
	}
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return;
	}
	iVar0 = __LIB_8__::func_968(iParam0);
	if (bParam1)
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, iVar0);
	}
	else
	{
		PLAYER::_0xCDDD4B74660E2335(PLAYER::PLAYER_ID(), 0, iVar0);
	}
}

void func_27(int iParam0, bool bParam1)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_40.f_9479[iParam0 /*4*/].f_1 = -1;
		Global_40.f_9479[iParam0 /*4*/].f_2 = -1;
		Global_40.f_9479[iParam0 /*4*/].f_3 = -1;
	}
	Global_40.f_9479[iParam0 /*4*/] = -1;
}

void func_28(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if ((__LIB_0__::func_805(iVar0, 2) == 0 || __LIB_0__::func_805(iVar0, 4) == 0) || bParam1)
		{
			MISC::_COPY_MEMORY(&(Global_40.f_7157[iVar0 /*3*/]), uParam0[iVar0 /*3*/], 3);
		}
		iVar0++;
	}
}

bool func_29(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_281(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return __LIB_4__::func_802(&(Global_1132155.f_12.f_3719.f_772[iVar0 /*4*/]), 1);
}

bool func_30(int iParam0)
{
	return __LIB_0__::func_805(iParam0, 1);
}

void func_31(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_0__::func_783(iParam0, 1);
}

void func_32(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<10> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, __LIB_10__::func_770(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, __LIB_10__::func_770(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(53), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(54), Param10.f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(56), Param10.f_5);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(55), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(57), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, __LIB_10__::func_770(58), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, __LIB_10__::func_770(59), Param10.f_9);
}

void func_33(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar8;
	iVar8 = __LIB_0__::func_158(iParam0, 1);
	Var1 = iParam2;
	Var1.f_1 = uParam1;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -624749060))
		{
		}
		else
		{
			__LIB_10__::func_788(iVar8, __LIB_0__::func_461(iVar0), 7);
		}
	}
}

void func_34(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar8;
	Var1 = iParam2;
	Var1.f_1 = uParam1;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (Global_1946804.f_57[iParam0 /*11*/].f_1 >= 5)
		{
			return;
		}
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, joaat("TAG")))
		{
		}
		else
		{
			Global_1946804.f_57[iParam0 /*11*/].f_2[Global_1946804.f_57[iParam0 /*11*/].f_1] = iVar0;
			Global_1946804.f_57[iParam0 /*11*/].f_1++;
			iVar8 = __LIB_10__::func_789(iVar0);
			if (iVar8 == -1)
			{
			}
			else
			{
				__LIB_10__::func_790(iVar8, Global_1946804.f_57[iParam0 /*11*/].f_9, 9);
			}
		}
	}
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar1 = Global_1879534.f_211[iParam0 /*4*/];
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar1), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), __LIB_0__::func_42(iVar1), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), __LIB_0__::func_43(iVar1));
	}
	if (MISC::IS_BIT_SET(iVar0, 3))
	{
		CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar1), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), __LIB_0__::func_39(iVar1), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), __LIB_0__::func_710(iVar1));
	}
	return -2;
}

int func_36(int iParam0)
{
	__LIB_6__::func_336(iParam0, 0);
	return -2;
}

int func_37(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!__LIB_0__::func_83(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (__LIB_1__::func_185(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam1 /*4*/].f_3;
	if (__LIB_0__::func_83(iVar0))
	{
		if (__LIB_1__::func_185(iVar0))
		{
			return -2;
		}
	}
	Var1 = Global_1879534.f_211[iParam1 /*4*/];
	Var1.f_1 = Global_1879534.f_211[iParam1 /*4*/].f_1;
	iVar3 = Global_1879534.f_211[iParam1 /*4*/].f_2;
	if (!Global_1879534.f_145[iParam0])
	{
		Global_1879534.f_178[iParam0] = (__LIB_8__::func_964(Var1) + iVar3);
		Global_1879534.f_145[iParam0] = 1;
	}
	else if (__LIB_8__::func_964(Var1) >= Global_1879534.f_178[iParam0])
	{
		return -2;
	}
	return -1;
}

int func_39(int iParam0)
{
	if (__LIB_1__::func_187(iParam0))
	{
		return -2;
	}
	return -1;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	PERSCHAR::_0x8BC555034A5A5E8C(__LIB_0__::func_118(iVar0), iVar1);
	if (iVar1 == joaat("CS_LEIGHGRAY"))
	{
		PERSCHAR::_0x2DF89CD2ED1D0BDE(__LIB_0__::func_118(iVar0), joaat("META_OUTFIT_DEFAULT"));
	}
	else
	{
		PERSCHAR::_0x535A66AAD2BF68F9(__LIB_0__::func_118(iVar0), PERSCHAR::_0xDC9655D47DEC0353(__LIB_0__::func_118(iVar0)));
	}
	return -2;
}

int func_41(int iParam0)
{
	__LIB_1__::func_408(iParam0, 1, 0);
	return -2;
}

int func_42(int iParam0)
{
	__LIB_1__::func_408(iParam0, 0, 0);
	return -2;
}

int func_43(int iParam0)
{
	if (!STREAMING::IS_MODEL_A_PED(iParam0))
	{
		return -2;
	}
	if (PED::_IS_THIS_MODEL_A_HORSE(iParam0) && __LIB_1__::func_1(iParam0))
	{
		return -2;
	}
	if (__LIB_0__::func_28())
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(iParam0, false);
	}
	return -2;
}

int func_44(int iParam0)
{
	__LIB_8__::func_980(iParam0, 0);
	if (iParam0 == 24)
	{
		__LIB_8__::func_980(119, 0);
	}
	return -2;
}

int func_45(int iParam0)
{
	__LIB_8__::func_980(iParam0, 1);
	return -2;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (iVar2 == 0)
	{
		__LIB_6__::func_79(iVar0, iVar1);
	}
	else
	{
		__LIB_6__::func_78(iVar0, iVar1);
	}
	return -2;
}

int func_47(int iParam0)
{
	__LIB_0__::func_714(iParam0, 1);
	return -2;
}

int func_48(int iParam0)
{
	__LIB_8__::func_981(iParam0, 1);
	return -2;
}

int func_49(int iParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 == true;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (Global_1879534)
	{
		return -2;
	}
	__LIB_1__::func_240(iVar0, bVar1);
	return -2;
}

int func_50(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!__LIB_0__::func_5(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (__LIB_1__::func_187(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_51(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (__LIB_2__::func_824(iVar0))
	{
		__LIB_8__::func_982(iVar0);
	}
	return -2;
}

int func_52(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return -2;
	}
	__LIB_3__::func_229(iParam0);
	return -2;
}

int func_53(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return -2;
	}
	__LIB_4__::func_193(iParam0);
	return -2;
}

void func_54(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	iVar0 = __LIB_0__::func_652(iParam1);
	if (iParam0 == 0)
	{
		__LIB_10__::func_736(0);
	}
	else if (iParam0 == 2)
	{
		__LIB_10__::func_819(0);
	}
	else if (iParam0 == 1)
	{
		__LIB_10__::func_737(0, bParam3);
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	Global_40.f_11095.f_11[iParam0] = BUILTIN::TO_FLOAT(iVar0);
	if (bParam2)
	{
		__LIB_1__::func_240(__LIB_0__::func_596(iParam0), 0);
		__LIB_1__::func_132(iParam0, iParam1, 0);
		__LIB_0__::func_597(iParam0, 7000);
	}
}

bool func_55(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_725(iParam0, 0);
	if (iVar0 == 0)
	{
		return true;
	}
	iVar1 = __LIB_1__::func_179(iParam0, 0);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(iVar1)) && !ENTITY::_0x88AD6CC10D8D35B2(PERSCHAR::_0x31C70A716CAE1FEE(iVar1)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(iVar1), true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
	}
	Global_40.f_4942[iParam0 /*60*/].f_7 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
	return true;
}

void func_56()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		Global_20710.f_1630[iVar0] = -15;
		__LIB_6__::func_79(iVar0, 8);
		__LIB_6__::func_79(iVar0, 256);
		__LIB_6__::func_79(iVar0, 128);
		iVar0++;
	}
}

void func_57(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	if (iParam3 < 0)
	{
		iVar3 = Global_1392135.f_26[iParam0];
	}
	else
	{
		iVar3 = iParam3;
	}
	if (iParam1 == 20 && Global_1392135.f_26[iParam0] == 0)
	{
		vVar0 = { 2492.525f, 1326.504f, 112.8341f };
	}
	else if (iParam1 == 43 && Global_1392135.f_26[iParam0] == 1)
	{
		vVar0 = { __LIB_8__::func_969(iParam1, iVar3) };
	}
	else
	{
		vVar0 = { __LIB_8__::func_969(iParam1, iVar3) };
	}
	StringIntConCat(sParam2, iParam1, 64);
	if (iParam3 >= 0)
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		__LIB_1__::func_222(vVar0, 256);
		if (iParam1 == 20 && iVar3 == 0)
		{
			__LIB_2__::func_862(vVar0, 115f, sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
		else if (iParam1 == 43 && Global_1392135.f_26[iParam0] == 1)
		{
			__LIB_2__::func_862(vVar0, 130f, sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_862(vVar0, __LIB_11__::func_141(iParam1, iParam0, iVar3), sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
	}
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	return __LIB_9__::func_282(iParam0, &uVar0, iParam1, iParam2, iParam3);
}

int func_59(vector3 vParam0, bool bParam3)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return -1;
	}
	iVar0 = 6;
	fVar1 = MISC::_GET_TEMPERATURE_AT_COORDS(vParam0);
	if (fVar1 <= 10f)
	{
		if (__LIB_1__::func_185(4))
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 7;
		}
	}
	else if (fVar1 <= 27f)
	{
		if (__LIB_1__::func_122(6) || !bParam3)
		{
			iVar0 = 6;
		}
	}
	else if (fVar1 > 27f)
	{
		if (__LIB_1__::func_122(9) || !bParam3)
		{
			iVar0 = 9;
		}
		else if (__LIB_1__::func_122(6))
		{
			iVar0 = 6;
		}
	}
	return iVar0;
}

void func_60(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_10__::func_37(iParam0, 1);
	}
	else
	{
		if (__LIB_10__::func_38(iParam0))
		{
			return;
		}
		__LIB_10__::func_33(iParam0, 1);
	}
	__LIB_10__::func_817(iParam0, bParam1);
}

void func_61(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (__LIB_0__::func_31(iParam0) && MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		__LIB_1__::func_197(iParam0, bParam1, bParam2, bParam3, 0);
	}
}

bool func_62()
{
	if (Global_1572887.f_12 == -1)
	{
		if (!__LIB_0__::func_28())
		{
			return false;
		}
		else if (!__LIB_1__::func_185(0))
		{
			return false;
		}
		else if (__LIB_8__::func_974())
		{
			return false;
		}
	}
	if (!Global_21 & 64 != 0)
	{
		return false;
	}
	if (__LIB_0__::func_13(32898))
	{
		return false;
	}
	if (__LIB_0__::func_6(Global_1572864.f_8))
	{
		return false;
	}
	if (Global_1572864.f_21 != 0)
	{
		return false;
	}
	if (__LIB_0__::func_65(&Global_0, 32))
	{
		if (__LIB_0__::func_65(&Global_0, 2))
		{
			return true;
		}
		if (__LIB_0__::func_65(&Global_0, 64))
		{
			return true;
		}
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 0))
	{
		return false;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return false;
	}
	if (MISC::_0x1B065A2BF7953815(0) == 1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (_NAMESPACE77::_0xC5C395C60B542A3C(1))
	{
		return false;
	}
	if (__LIB_10__::func_644() != 2 && __LIB_10__::func_644() != 3)
	{
		return false;
	}
	if (__LIB_0__::func_383())
	{
		return false;
	}
	return true;
}

bool func_63(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (__LIB_0__::func_5(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			if (__LIB_0__::func_1(Global_1347702[iVar0 /*49*/].f_12, 4))
			{
				if (__LIB_1__::func_25(Global_1347702[iVar0 /*49*/].f_15, 1))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_64(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (!__LIB_0__::func_65(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2))
		{
		}
		else if ((uParam1->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/] || uParam1->f_1[iVar0 /*3*/] == 0) || !__LIB_0__::func_65(&(uParam1->f_1[iVar0 /*3*/]), 2))
		{
			if (__LIB_10__::func_813(__LIB_0__::func_158(iVar0, 1)))
			{
				*uParam0 = 1;
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_65(int iParam0)
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
		__LIB_0__::func_384("MISSION_COMPLETE", &(Global_1347702[iParam0 /*49*/].f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, __LIB_3__::func_733(iParam0));
		__LIB_0__::func_425("MISSION_COMPLETE", &(Global_1347702[iParam0 /*49*/].f_3), iVar1, iVar0, joaat("PLAYER_MENU"), "MISSION_COMPLETE_DETAILS", joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam1 == -1)
	{
		return -2;
	}
	if (!__LIB_0__::func_28())
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam1 /*4*/].f_2;
	iVar1 = Global_1879534.f_211[iParam1 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam1 /*4*/];
	if (!Global_1879534.f_46[iParam0])
	{
		if (__LIB_0__::func_923(Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3))
		{
			Global_1879534.f_112[iParam0] = Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3;
		}
		else
		{
			Global_1879534.f_112[iParam0] = __LIB_0__::func_23();
			__LIB_1__::func_446(&(Global_1879534.f_112[iParam0]), iVar0, iVar1, iVar2, 0, 0, 0, 0);
			Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3 = Global_1879534.f_112[iParam0];
		}
		Global_1879534.f_46[iParam0] = 1;
	}
	else
	{
		iVar3 = (MISC::GET_GAME_TIMER() - __LIB_5__::func_452());
		iVar4 = -1;
		if ((Global_1572887.f_12 == -1 && Global_1430242.f_9) && iVar3 >= 5000)
		{
			iVar4 = __LIB_5__::func_543(1);
		}
		if (__LIB_1__::func_110(__LIB_0__::func_23(), Global_1879534.f_112[iParam0], 1) || iVar4 == 0)
		{
			Global_1879534.f_46[iParam0] = 0;
			Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3 = -15;
			if (iVar4 == 0)
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
			}
			return -2;
		}
	}
	return -1;
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_28())
	{
		return -2;
	}
	if (!Global_1879534.f_46[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = __LIB_0__::func_23();
		if (__LIB_0__::func_41(iVar1) > iVar0)
		{
			__LIB_1__::func_446(&iVar1, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_41(iVar1) != iVar0)
		{
			__LIB_0__::func_469(&iVar1, 0);
			__LIB_0__::func_468(&iVar1, 0);
			__LIB_0__::func_467(&iVar1, iVar0);
		}
		Global_1879534.f_112[iParam0] = iVar1;
		Global_1879534.f_46[iParam0] = 1;
	}
	else if (__LIB_1__::func_426(Global_1879534.f_112[iParam0], 1))
	{
		Global_1879534.f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	if (!Global_1879534.f_46[iParam0])
	{
		iVar0 = iParam1;
		Global_1879534.f_112[iParam0] = iVar0;
		Global_1879534.f_46[iParam0] = 1;
	}
	else if (__LIB_1__::func_426(Global_1879534.f_112[iParam0], 1))
	{
		Global_1879534.f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

void func_69()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		Global_40.f_11029[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Global_40.f_11029[iVar0 /*5*/].f_4 = 0;
		__LIB_8__::func_981(iVar0, 17);
		iVar0++;
	}
	__LIB_1__::func_600(1);
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	__LIB_8__::func_721(iVar0, iVar1);
	return -2;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!__LIB_0__::func_5(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	iVar4 = __LIB_0__::func_933(Global_1347702[iVar0 /*49*/].f_15);
	__LIB_1__::func_446(&iVar4, 0, 0, iVar1, 0, 0, 0, 0);
	switch (iVar2)
	{
		case 2:
		case 5:
			if (!__LIB_3__::func_77(iVar4))
			{
				return uVar3;
			}
			break;
		case 3:
		case 4:
			if (__LIB_3__::func_77(iVar4))
			{
				return uVar3;
			}
			break;
	}
	return -2;
}

int func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1 = iParam1;
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			__LIB_1__::func_452(17, iParam2, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(17, iParam2, 1, iParam0, 0);
		}
	}
	__LIB_0__::func_245(0);
	return 1;
}

void func_73()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	bool bVar7;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar7 = __LIB_0__::func_6(Global_1898164.f_1[iVar0 /*5*/]);
		if (bVar7)
		{
			iVar6 = __LIB_0__::func_746(Global_1898164.f_1[iVar0 /*5*/]);
		}
		else
		{
			iVar6 = -1;
		}
		if (!bVar7 || ((bVar7 && iVar6 != 3) && iVar6 != 4))
		{
			Global_1898164.f_1[iVar0 /*5*/] = { Var1 };
			__LIB_1__::func_295(iVar0, 31);
		}
		iVar0++;
	}
	Global_1898164.f_162 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] != 0)
		{
			Global_1898164.f_162++;
			if (iVar0 == 0)
			{
				__LIB_1__::func_242(Global_1898164.f_1[iVar0 /*5*/], 3);
			}
			else
			{
				__LIB_1__::func_242(Global_1898164.f_1[iVar0 /*5*/], 4);
			}
		}
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		__LIB_10__::func_815(iVar0);
		iVar0++;
	}
}

void func_75(int iParam0, int iParam1, vector3 vParam2, bool bParam5)
{
	if (!__LIB_10__::func_783(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_86(vParam2))
	{
		return;
	}
	if (!__LIB_0__::func_20(iParam1))
	{
		return;
	}
	Global_1934182[iParam0 /*18*/].f_1 = { vParam2 };
	Global_1934182[iParam0 /*18*/].f_5 = __LIB_1__::func_293(1, iParam0, 2, __LIB_10__::func_784(iParam0));
	Global_1934182[iParam0 /*18*/] = iParam1;
	if (bParam5)
	{
		Global_1934182[iParam0 /*18*/].f_7 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_10__::func_626(iParam0), __LIB_10__::func_627(iParam0), __LIB_10__::func_628(iParam0), __LIB_10__::func_785(iParam0));
		VOLUME::_0x128FC3A893BF853A(Global_1934182[iParam0 /*18*/].f_7);
	}
	switch (iParam0)
	{
		case 2:
			__LIB_4__::func_495(170);
			break;
	}
}

int func_76(bool bParam0)
{
	__LIB_10__::func_802(6, 0, 0, 513, bParam0);
	__LIB_10__::func_802(62, 0, 0, 513, bParam0);
	__LIB_10__::func_802(7, 0, 4, 513, bParam0);
	__LIB_10__::func_802(8, 0, 4, 513, bParam0);
	__LIB_10__::func_802(9, 0, 8, 513, bParam0);
	__LIB_10__::func_802(10, 0, 8, 513, bParam0);
	__LIB_10__::func_802(12, 0, 0, 1, 0);
	__LIB_10__::func_802(11, 0, 0, 17, bParam0);
	__LIB_10__::func_802(14, 0, 0, 1, 0);
	__LIB_10__::func_802(13, 0, 0, 1, 0);
	__LIB_10__::func_802(61, 0, 0, 1, 0);
	__LIB_10__::func_802(63, 0, 0, 1, 0);
	__LIB_10__::func_802(70, 0, 4, 513, bParam0);
	__LIB_10__::func_802(94, 0, 0, 1, 0);
	__LIB_10__::func_802(15, 0, 0, 545, bParam0);
	__LIB_10__::func_802(16, 0, 0, 521, bParam0);
	__LIB_10__::func_802(17, 0, 0, 521, bParam0);
	__LIB_10__::func_802(18, 0, 0, 1, 0);
	__LIB_10__::func_802(19, 0, 0, 1, 0);
	__LIB_10__::func_802(20, 0, 0, 1, 0);
	__LIB_10__::func_802(0, 0, 0, 513, bParam0);
	__LIB_10__::func_802(1, 0, 0, 513, bParam0);
	__LIB_10__::func_802(2, 0, 0, 513, bParam0);
	__LIB_10__::func_802(3, 0, 0, 513, bParam0);
	__LIB_10__::func_802(4, 0, 0, 513, bParam0);
	__LIB_10__::func_802(5, 0, 0, 513, bParam0);
	__LIB_10__::func_802(24, 0, 0, 513, bParam0);
	__LIB_10__::func_802(25, 0, 0, 513, bParam0);
	__LIB_10__::func_802(26, 0, 0, 513, bParam0);
	__LIB_10__::func_802(27, 0, 0, 513, bParam0);
	__LIB_10__::func_802(28, 0, 0, 513, bParam0);
	__LIB_10__::func_802(21, 0, 0, 513, bParam0);
	__LIB_10__::func_802(22, 0, 0, 513, bParam0);
	__LIB_10__::func_802(29, 0, 0, 513, bParam0);
	__LIB_10__::func_802(30, 0, 0, 513, bParam0);
	__LIB_10__::func_802(31, 0, 0, 513, bParam0);
	__LIB_10__::func_802(32, 0, 0, 513, bParam0);
	__LIB_10__::func_802(33, 0, 0, 513, bParam0);
	__LIB_10__::func_802(34, 0, 0, 513, bParam0);
	__LIB_10__::func_802(35, 0, 0, 513, bParam0);
	__LIB_10__::func_802(36, 0, 0, 513, bParam0);
	__LIB_10__::func_802(37, 0, 0, 513, bParam0);
	__LIB_10__::func_802(38, 0, 0, 513, bParam0);
	__LIB_10__::func_802(39, 0, 0, 513, bParam0);
	__LIB_10__::func_802(40, 0, 0, 513, bParam0);
	__LIB_10__::func_802(41, 0, 0, 513, bParam0);
	__LIB_10__::func_802(42, 0, 0, 513, bParam0);
	__LIB_10__::func_802(43, 0, 0, 513, bParam0);
	__LIB_10__::func_802(44, 0, 0, 513, bParam0);
	__LIB_10__::func_802(45, 0, 0, 513, bParam0);
	__LIB_10__::func_802(46, 0, 0, 513, bParam0);
	__LIB_10__::func_802(47, 0, 0, 513, bParam0);
	__LIB_10__::func_802(48, 0, 0, 513, bParam0);
	__LIB_10__::func_802(49, 0, 0, 513, bParam0);
	__LIB_10__::func_802(50, 0, 0, 513, bParam0);
	__LIB_10__::func_802(51, 0, 0, 513, bParam0);
	__LIB_10__::func_802(52, 0, 0, 513, bParam0);
	__LIB_10__::func_802(53, 0, 0, 513, bParam0);
	__LIB_10__::func_802(54, 0, 0, 513, bParam0);
	__LIB_10__::func_802(55, 0, 0, 513, bParam0);
	__LIB_10__::func_802(56, 0, 0, 513, bParam0);
	__LIB_10__::func_802(57, 0, 0, 513, bParam0);
	__LIB_10__::func_802(58, 0, 0, 513, bParam0);
	__LIB_10__::func_802(59, 0, 0, 513, bParam0);
	__LIB_10__::func_802(60, 0, 0, 513, bParam0);
	__LIB_10__::func_802(23, 0, 0, 1, 0);
	__LIB_10__::func_802(67, 0, 0, 1, 0);
	__LIB_10__::func_802(68, 0, 0, 1, 0);
	__LIB_10__::func_802(69, 0, 0, 1, 0);
	__LIB_10__::func_802(75, 0, 0, 1, 0);
	__LIB_10__::func_802(79, 0, 0, 1, 0);
	__LIB_10__::func_802(83, 0, 0, 1, 0);
	__LIB_10__::func_802(87, 0, 0, 1, 0);
	__LIB_10__::func_802(71, 0, 0, 1, 0);
	__LIB_10__::func_802(73, 0, 0, 1, 0);
	__LIB_10__::func_802(77, 0, 0, 1, 0);
	__LIB_10__::func_802(78, 0, 0, 1, 0);
	__LIB_10__::func_802(81, 0, 0, 1, 0);
	__LIB_10__::func_802(85, 0, 0, 1, 0);
	__LIB_10__::func_802(89, 0, 0, 1, 0);
	__LIB_10__::func_802(76, 0, 0, 1, 0);
	__LIB_10__::func_802(80, 0, 0, 1, 0);
	__LIB_10__::func_802(82, 0, 0, 1, 0);
	__LIB_10__::func_802(84, 0, 0, 1, 0);
	__LIB_10__::func_802(86, 0, 0, 1, 0);
	__LIB_10__::func_802(88, 0, 0, 1, 0);
	__LIB_10__::func_802(72, 0, 0, 1, 0);
	__LIB_10__::func_802(74, 0, 0, 1, 0);
	__LIB_10__::func_802(93, 0, 0, 513, bParam0);
	__LIB_10__::func_802(66, 0, 0, 1, 0);
	__LIB_10__::func_802(64, 0, 0, 1, 0);
	__LIB_10__::func_802(70, 0, 4, 513, bParam0);
	__LIB_10__::func_802(90, 0, 0, 1, 0);
	__LIB_10__::func_802(65, 0, 0, 513, bParam0);
	__LIB_10__::func_802(91, 0, 0, 513, bParam0);
	__LIB_10__::func_802(92, 0, 0, 1, 0);
	__LIB_6__::func_388(1);
	return 1;
}

void func_77(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	bVar0 = ((iParam2 > 0 || iParam3 > 0) || iParam4 > 0);
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	iVar1 = __LIB_0__::func_23();
	if (bVar0)
	{
		__LIB_1__::func_446(&iVar1, 0, iParam2, iParam3, iParam4, 0, 0, 0);
		if (!__LIB_0__::func_923(iVar1))
		{
			return;
		}
	}
	if (bParam6)
	{
		if (bVar0)
		{
			Global_1360165[iParam0 /*1157*/].f_1152 = uParam1;
			Global_1360165[iParam0 /*1157*/].f_1153 = iVar1;
		}
		return;
	}
	if (bVar0)
	{
		Global_40.f_4942[iParam0 /*60*/].f_42 = uParam1;
		Global_40.f_4942[iParam0 /*60*/].f_43 = iVar1;
	}
	else
	{
		Global_40.f_4942[iParam0 /*60*/].f_44 = uParam1;
		if (bParam5)
		{
			Global_40.f_4942[iParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[iParam0 /*60*/].f_43 = -15;
		}
	}
}

void func_78(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_5__::func_260(iVar0, iParam0) != bParam1)
		{
			__LIB_5__::func_414(iVar0, iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_79(int iParam0, char* sParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	if (Global_1879534 == 0)
	{
		Global_1392626[iParam0 /*32*/].f_3 = __LIB_1__::func_293(0, iParam0, 6, __LIB_10__::func_787(iParam0));
		StringCopy(&(Global_1392626[iParam0 /*32*/].f_13), sParam1, 64);
		Global_1392626[iParam0 /*32*/].f_12 = iParam2;
		Global_1392626[iParam0 /*32*/].f_27 = { vParam6 };
		Global_1392626[iParam0 /*32*/].f_4 = fParam9;
		Global_1392626[iParam0 /*32*/].f_22 = iParam11;
		Global_1392626[iParam0 /*32*/].f_7 = iParam12;
		Global_1392626[iParam0 /*32*/].f_5 = iParam13;
		Global_1392626[iParam0 /*32*/].f_6 = iParam15;
	}
	Global_1392626[iParam0 /*32*/].f_24 = { vParam3 };
	Global_40.f_9052.f_1[iParam0] = -15;
	if (Global_40 == 0 || Global_1879534 == 1)
	{
		if (iParam10 == 1)
		{
			__LIB_9__::func_969(iParam0, 4);
		}
		else
		{
			__LIB_10__::func_230(iParam0, 4);
		}
	}
	__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_8), iParam14);
}

void func_80(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar0 |= 1;
	}
	if (bParam2 && Global_1946804.f_2535 != 0)
	{
		__LIB_6__::func_113(Global_1946804.f_2535);
		__LIB_6__::func_151(0);
		Global_1946804.f_2535 = 0;
	}
	if (__LIB_0__::func_156(32768))
	{
		__LIB_0__::func_860(1108822547);
	}
	if (__LIB_0__::func_2() != -1)
	{
		__LIB_1__::func_452(2, 0, 6, iParam0, 0);
		__LIB_1__::func_452(4, 0, 0, iParam0, 0);
		__LIB_1__::func_452(5, 0, 0, iParam0, 0);
		__LIB_1__::func_452(6, 0, 0, iParam0, 0);
	}
	else
	{
		__LIB_1__::func_452(2, 0, iVar0, iParam0, 0);
	}
	__LIB_0__::func_245(0);
}

void func_81(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		__LIB_4__::func_181(&(Global_1347702[iParam0 /*49*/].f_14));
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		__LIB_5__::func_250(iParam0);
		if ((!__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_0x2F901291EF177B02(Global_1347702[iParam0 /*49*/].f_40, 0);
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
			__LIB_0__::func_325(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			__LIB_4__::func_838(iParam0, 16384);
			__LIB_10__::func_842(iParam0, 1, __LIB_1__::func_440(iParam0));
		}
	}
}

void func_82(bool bParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		__LIB_10__::func_840();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_83(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_40.f_7748.f_1;
	}
	__LIB_0__::func_191();
	__LIB_10__::func_826(iParam1);
	if (bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			__LIB_1__::func_452(1, 64, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(1, 64, 1, iParam0, 0);
		}
	}
	__LIB_0__::func_245(1);
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	iVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	__LIB_4__::func_253(iVar0, iVar2, iVar3, iVar1, 1, 1, 0);
	return -2;
}

int func_85()
{
	VOLUME::_0x748C5F51A18CB8F0(0);
	__LIB_10__::func_839(0, 0, "ABIGAIL11", "RABI1", "rcm_abigail11", -1, -146.9627f, -15.7764f, 95.2415f, 0, joaat("BLIP_SCM_ABIGAIL"), 262151, 100f);
	__LIB_10__::func_839(3, 3, "BANDP10", "RBNP10", "rcm_beau_and_penelope10", -1, 1736.427f, -1375.109f, 42.9164f, 0, joaat("BLIP_SCM_GRAYS"), 67240067, 200f);
	__LIB_10__::func_839(4, 3, "BANDP11", "RBNP11", "rcm_beau_and_penelope11", 5, 1790.746f, -1311.754f, 43.1925f, joaat("CS_BEAUGRAY"), joaat("BLIP_SCM_BEAU"), 1310737, 120f);
	__LIB_10__::func_839(5, 3, "BANDP12", "RBNP12", "rcm_beau_and_penelope12", -1, 1863.698f, -1349.39f, 41.2784f, 0, joaat("BLIP_SCM_BEAU"), 262149, 250f);
	__LIB_10__::func_839(21, 18, "BRAT01", "RBRT0", "rcm_braithwaites01", -1, 660.1356f, -1257.437f, 44.0746f, 0, joaat("BLIP_SCM_ABIGAIL"), 67239943, 120f);
	__LIB_10__::func_839(37, 23, "COACHROBBERY1", "RCHRB", "rcm_coach_robbery1", -1, 675.0945f, -1217.237f, 44.386f, 0, joaat("BLIP_SCM_TRELAWNEY"), 262151, 120f);
	__LIB_10__::func_839(58, 33, "DOCTORSOPINION1", "RDOPN", "rcm_doctors_opinion1", -1, 2802.581f, -1177.624f, 45.9451f, 0, 0, 134480023, 85f);
	__LIB_10__::func_839(59, 34, "DOWN1", "RDOWN1", "rcm_down1", 60, -171.1026f, -25.1129f, 94.9136f, 0, joaat("BLIP_SCM_STRAUSS"), 67, 120f);
	__LIB_10__::func_839(60, 34, "DOWNA", "RDOWNA", "rcm_down1_2", -1, -171.1026f, -25.1129f, 94.9136f, 0, joaat("BLIP_SCM_STRAUSS"), 12529, 150f);
	__LIB_10__::func_839(61, 34, "DOWN2", "RDOWN2", "rcm_down2", -1, -135.48f, -33.46f, 95.08f, 0, joaat("BLIP_AMBIENT_TITHING"), 97, 60f);
	__LIB_10__::func_839(62, 34, "DOWN3", "RDOWN3", "rcm_down3", -1, -815.8262f, 343.8745f, 99.3458f, 0, joaat("BLIP_SCM_STRAUSS"), 262341, 120f);
	__LIB_10__::func_839(63, 35, "DUSTER21", "RDST2", "rcm_dusters21", -1, -138.2931f, -13.8407f, 95.3376f, 0, joaat("BLIP_SCM_KIERAN"), 262215, 120f);
	__LIB_10__::func_839(64, 36, "DUSTER61", "RDST61", "rcm_dusters61", -1, 2362.525f, 1308.025f, 111.6106f, 0, joaat("BLIP_SCM_SADIE"), 67108931, 90f);
	__LIB_10__::func_839(65, 36, "DUSTER62", "RDST62", "rcm_dusters62", -1, -2110.199f, 660.5305f, 119.8892f, 0, joaat("BLIP_SCM_SADIE"), 1310725, 100f);
	__LIB_10__::func_839(66, 37, "DUTCH11", "RDTC1", "rcm_dutch11", -1, -129.8283f, -32.11561f, 94.94459f, 0, joaat("BLIP_MISSION_DUTCH"), 262215, 150f);
	__LIB_10__::func_839(67, 38, "DUTCH21", "RDTC2", "rcm_dutch21", -1, 672.7785f, -1246.157f, 42.9398f, 0, joaat("BLIP_MISSION_DUTCH"), 296039, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(68, 39, "DUTCH31", "RDCH3", "rcm_dutch31", -1, 2247.695f, -798.5478f, 43.1559f, 0, joaat("BLIP_MISSION_DUTCH"), 262151, 130f);
	__LIB_10__::func_839(76, 42, "EXCONFED11", "RXCF1", "rcm_exconfed11", -1, 677.1235f, -1288.551f, 42.4063f, 0, joaat("BLIP_SCM_LENNY"), 262151, 120f);
	__LIB_10__::func_839(82, 45, "GANG01", "RGNG01", "rcm_gang01", -1, 3009.262f, 477.1921f, 40.8607f, 0, 0, 132323, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(83, 45, "GANG02", "RGNG02", "rcm_gang02", -1, 2974.441f, 474.3331f, 46.86f, 0, 0, 134489253, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(94, 51, "HOMEROB00", "RHMR0", "rcm_homerob00", -1, 1407.78f, 265.425f, 88.61228f, 0, joaat("BLIP_MISSION_HOSEA"), 1351687, 200f);
	__LIB_10__::func_839(97, 54, "MARY01", "RMARY1", "rcm_mary01", 98, -126.0832f, -38.3759f, 94.6333f, 0, joaat("BLIP_SCM_LETTER"), 67240027, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(98, 54, "MARY02", "RMARY2", "rcm_mary02", -1, -380.78f, 917.269f, 118.9613f, 0, joaat("BLIP_RC_OLD_FLAME"), 67240133, 36f);
	__LIB_10__::func_839(106, 58, "MOB01", "RMOB01", "rcm_mob01", -1, 2793.855f, -1169.53f, 46.924f, 0, joaat("BLIP_SCM_BRONTE"), 67109063, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(107, 58, "MOB02", "RMOB02", "rcm_mob02", -1, 2686.954f, -1122.447f, 49.7002f, 0, joaat("BLIP_SCM_BRONTE"), 67108935, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(108, 59, "MONROE11", "RMNR1", "rcm_monroe11", -1, 471.1853f, 2226.889f, 246.2259f, 0, joaat("BLIP_SCM_MONROE"), 2359303, 150f);
	__LIB_10__::func_839(112, 60, "MUDTOWN31", "RMUD31", "rcm_mudtown3_1", 112, -141.5388f, -57.201f, 93.9626f, 0, joaat("BLIP_MISSION_JOHN"), 131283, 100f);
	__LIB_10__::func_839(113, 60, "MUDTOWN32", "RMUD32", "rcm_mudtown3_2", 113, 505.0512f, 704.0245f, 115.0716f, 0, joaat("BLIP_MISSION_JOHN"), 274609, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(114, 60, "MUDTOWN33", "RMUD33", "rcm_mudtown3_3", -1, -144.0388f, -56.981f, 93.9626f, 0, joaat("BLIP_MISSION_JOHN"), 67240005, 100f);
	__LIB_10__::func_839(115, 62, "NATIVE1", "RNATV1", "rcm_native1", -1, 2531.1f, -1312.83f, 48.19f, joaat("CS_EVELYNMILLER"), joaat("BLIP_RC"), 67764227, 120f);
	__LIB_10__::func_839(116, 62, "NATIVE2", "RNATV2", "rcm_native2", -1, 223.26f, 512.19f, 125.45f, 0, joaat("BLIP_SCM_EAGLE_FLIES"), 1310725, 350f);
	__LIB_10__::func_839(120, 64, "PEARSON1", "RPRSN", "rcm_pearson1", -1, -1346.968f, 2402.061f, 306.5004f, 0, joaat("BLIP_SCM_PEARSON"), 262151, 120f);
	__LIB_10__::func_839(134, 68, "SADIE1", "RSAD1", "rcm_sadie11", -1, 677.3743f, -1251.831f, 43.0154f, 0, joaat("BLIP_SCM_PEARSON"), 262151, 130f);
	__LIB_10__::func_839(6, 4, "BANDP20", "RBNP20", "rcm_beau_and_penelope20", 7, 2340.914f, 1359.669f, 105.3503f, 0, joaat("BLIP_SCM_LETTER"), 2228234, 120f);
	__LIB_10__::func_839(7, 4, "BANDP21", "RBNP21", "rcm_beau_and_penelope21", -1, 895.2736f, -1866.43f, 42.6791f, 0, joaat("BLIP_SCM_PENELOPE"), 40108164, 120f);
	__LIB_10__::func_839(22, 19, "CALDERON1", "RCLDN1", "rcm_calderon1", 23, 2815.65f, -1222.53f, 46.57f, joaat("CS_BROTHERDORKINS"), joaat("BLIP_RC"), 35913794, 70f);
	__LIB_10__::func_839(23, 19, "CALDERON2", "RCLDN2", "rcm_calderon2", -1, 2819.028f, -1110.255f, 45.9487f, joaat("CS_SISTERCALDERON"), joaat("BLIP_SCM_DORKINS"), 40108100, 120f);
	__LIB_10__::func_839(24, 20, "CALDERON21", "RCLD21", "rcm_calderon21", 25, 2733.148f, -1248.815f, 48.8597f, joaat("CS_SISTERCALDERON"), joaat("BLIP_RC"), 2228290, 120f);
	__LIB_10__::func_839(25, 20, "CALDERON22", "RCLD22", "rcm_calderon22", -1, 2733.148f, -1248.815f, 48.8597f, 0, joaat("BLIP_SCM_CALDERON"), 6557892, 125f);
	__LIB_10__::func_839(26, 21, "CALLOWAY1", "RCAL11", "rcm_callaway1", -1, -240.2066f, 768.6583f, 117.085f, joaat("CS_JIMCALLOWAY"), joaat("BLIP_RC"), 1179714, 40f);
	__LIB_10__::func_839(27, 21, "CALLOWAYB", "RCAL1B", "rcm_callaway12", 28, -239.1001f, 770.5522f, 117.1001f, 0, joaat("BLIP_RC_CALLOWAY"), 131072, 40f);
	__LIB_10__::func_839(28, 21, "CALLOWAY2", "RCAL12", "rcm_callaway2", 29, 2857.948f, -1370.687f, 43.5575f, 0, joaat("BLIP_RC_CALLOWAY"), 131072, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(29, 21, "CALLOWAY3", "RCAL13", "rcm_callaway3", -1, 2907.656f, 1314.266f, 44.67463f, joaat("CS_ASBDEPUTY_01"), joaat("BLIP_RC_CALLOWAY"), 537133124, 36f);
	__LIB_10__::func_839(30, 22, "CHAINGANG1", "RBWCG1", "rcm_chain_gang1", 31, 1276.24f, -1389.17f, 79.86f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 1704002, 140f);
	__LIB_10__::func_839(31, 22, "CHAINGANG2", "RBWCG2", "rcm_chain_gang2", 32, 1311.78f, -1298.51f, 74.93f, 0, joaat("BLIP_RC_CHAIN_GANG"), 12528, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(32, 22, "CHAINGANG3", "RBWCG3", "rcm_chain_gang3", 33, 1215.95f, -1425.98f, 70.45f, 0, joaat("BLIP_RC_CHAIN_GANG"), 1310784, 100f);
	__LIB_10__::func_839(33, 22, "CHAINGANG4", "RBWCG4", "rcm_chain_gang4", 34, 902.15f, -384.86f, 88.3f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 1572928, 150f);
	__LIB_10__::func_839(34, 22, "CHAINGANG5", "RBWCG5", "rcm_chain_gang5", 35, 902.15f, -384.86f, 88.3f, 0, joaat("BLIP_RC_CHAIN_GANG"), 4320, 150f);
	__LIB_10__::func_839(35, 22, "CHAINGANG6", "RBWCG6", "rcm_chain_gang6", 36, 902.15f, -384.86f, 88.3f, 0, joaat("BLIP_RC_CHAIN_GANG"), 262208, 150f);
	__LIB_10__::func_839(36, 22, "CHAINGANG7", "RBWCG7", "rcm_chain_gang7", -1, -2459.21f, 838f, 145.37f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 538836996, 80f);
	__LIB_10__::func_839(38, 24, "CIGCARD1", "RCCIG", "rcm_collect_cigarette_cards1", -1, -343.5616f, -369.2671f, 87.0759f, joaat("CS_CIGCARDGUY"), joaat("BLIP_RC"), 72482822, (50f * 4f));
	__LIB_10__::func_839(39, 25, "DINOBONE11", "RCDIN1", "rcm_collect_dinosaur_bones11", -1, 122.7758f, -185.4978f, 116.4383f, joaat("CS_DINOBONESLADY"), joaat("BLIP_RC"), 68288642, (50f * 4f));
	__LIB_10__::func_839(40, 25, "DINOBONE12", "RCDIN2", "rcm_collect_dinosaur_bones12", -1, 197.275f, 985.9788f, 189.2538f, joaat("CS_DINOBONESLADY"), joaat("BLIP_RC_DEBORAH"), 608176132, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(43, 27, "EXOTICS1", "RCEXO1", "rcm_collect_exotics1", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC"), 68296706, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(44, 27, "EXOTICS2", "RCEXO2", "rcm_collect_exotics2", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(45, 27, "EXOTICS3", "RCEXO3", "rcm_collect_exotics3", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(46, 27, "EXOTICS4", "RCEXO4", "rcm_collect_exotics4", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(47, 27, "EXOTICS5", "RCEXO5", "rcm_collect_exotics5", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(48, 27, "EXOTICS6", "RCEXO6", "rcm_collect_exotics6", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 608315460, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(41, 26, "RAREFISH11", "RCFSH1", "rcm_collect_rare_fish1", -1, 337.3075f, -684.5404f, 41.8362f, joaat("CS_FISHCOLLECTOR"), joaat("BLIP_RC"), 68288642, (50f * 4f));
	__LIB_10__::func_839(42, 26, "RAREFISH12", "RCFSH2", "rcm_collect_rare_fish2", -1, 341.9155f, -665.392f, 41.8046f, joaat("CS_FISHCOLLECTOR"), joaat("BLIP_RC_JEREMY_GILL"), 541067652, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(49, 28, "ROCKFACE1", "RCRKF1", "rcm_collect_rock_faces1", -1, -2178.646f, -245.6886f, 191.1569f, joaat("CS_FRANCIS_SINCLAIR"), joaat("BLIP_RC"), 68288514, 100f);
	__LIB_10__::func_839(50, 28, "ROCKFACE2", "RCRKF2", "rcm_collect_rock_faces2", -1, -2173.926f, -247.408f, 191.8229f, joaat("CS_MRS_SINCLAIR"), joaat("BLIP_SCM_FRANCES"), 608307204, 100f);
	__LIB_10__::func_839(51, 29, "TAXIDERMY1", "RCTAX1", "rcm_collect_taxidermy1", -1, -1678.832f, -335.5439f, 172.9001f, joaat("CS_TAXIDERMIST"), joaat("BLIP_RC_HOBBS"), 68290882, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(52, 29, "TAXIDERMY2", "RCTAX2", "rcm_collect_taxidermy2", -1, -1638.497f, -1361.436f, 83.3966f, 0, joaat("BLIP_RC"), 608305412, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(53, 30, "CRACKPOT1", "RCKPT1", "rcm_crackpot1", 54, 2463.36f, -1372.69f, 44.3262f, joaat("CS_CRACKPOTINVENTOR"), joaat("BLIP_RC"), 1310786, 120f);
	__LIB_10__::func_839(54, 30, "CRACKPOT2", "RCKPT2", "rcm_crackpot2", 55, 2517.188f, 2289.349f, 176.3516f, joaat("CS_CRACKPOTINVENTOR"), joaat("BLIP_RC_CRACKPOT"), 262208, 300f);
	__LIB_10__::func_839(55, 30, "CRACKPOT3", "RCKPT3", "rcm_crackpot3", -1, 2517.188f, 2289.349f, 176.3516f, 0, 0, 536875092, 100f);
	__LIB_10__::func_839(56, 31, "CRAWLEY1", "RCRAW", "rcm_crawley1", -1, 2011.776f, -504.0132f, 40.983f, joaat("U_M_O_OLDCAJUN_01"), joaat("BLIP_RC"), 537921542, 150f);
	__LIB_10__::func_839(57, 32, "CREOLE1", "RCRLE", "rcm_creole1", -1, 1380.51f, -1337.51f, 77f, joaat("CS_CREOLEDOCTOR"), joaat("BLIP_RC"), 538181702, 120f);
	__LIB_10__::func_839(69, 40, "EDOWN21", "REDW21", "rcm_edith_down21", 70, 2935.405f, 1377.749f, 43.5814f, joaat("CS_EDITHDOWN"), joaat("BLIP_SCM_EDITH"), 37486786, 120f);
	__LIB_10__::func_839(70, 40, "EDOWN22", "REDW22", "rcm_edith_down22", -1, 2956.146f, 1340.49f, 43.8751f, joaat("CS_ARCHIEDOWN"), joaat("BLIP_SCM_EDITH"), 41156612, 60f);
	__LIB_10__::func_839(77, 43, "FORMYART1", "RFMA1", "rcm_for_my_art1", 78, 2794.64f, -1168.4f, 46.92f, 0, joaat("BLIP_RC"), 1179842, 36f);
	__LIB_10__::func_839(78, 43, "FORMYART2", "RFMA2", "rcm_for_my_art2", 79, 2738.72f, -1207.39f, 48.66f, 0, joaat("BLIP_RC_ART"), 1310784, 50f);
	__LIB_10__::func_839(79, 43, "FORMYART3", "RFMA3", "rcm_for_my_art3", 80, 2700.241f, -1187.552f, 55.0907f, 0, joaat("BLIP_RC_ART"), 262336, 150f);
	__LIB_10__::func_839(80, 43, "FORMYART4", "RFMA4", "rcm_for_my_art4", -1, 2739.74f, -1315.64f, 47.63f, joaat("CS_FRENCHARTIST"), joaat("BLIP_RC_ART"), 538706116, 120f);
	__LIB_10__::func_839(81, 44, "FUNDRAISER", "REFND", "rcm_fundraiser", -1, 2504.054f, -1152.946f, 48.26756f, 0, joaat("BLIP_RC"), 86519878, 120f);
	__LIB_10__::func_839(84, 46, "GUNSLINGER1", "RGUN11", "rcm_gunslinger1_1", 85, -62.69012f, -404.3738f, 69.91233f, joaat("CS_FAMOUSGUNSLINGER_01"), joaat("BLIP_RC_GUNSLINGER_1"), 1050634, 120f);
	__LIB_10__::func_839(85, 46, "GUNSLINGER12", "RGUN12", "rcm_gunslinger1_2", -1, -63.25864f, -404.9262f, 69.9287f, joaat("CS_FAMOUSGUNSLINGER_01"), joaat("BLIP_RC_GUNSLINGER_1"), 262340, 120f);
	__LIB_10__::func_839(86, 47, "GUNSLINGER2", "RGUN2", "rcm_gunslinger2_1", -1, -967.5845f, 2181.624f, 339.4473f, joaat("CS_FAMOUSGUNSLINGER_02"), joaat("BLIP_RC_GUNSLINGER_2"), 264398, 200f);
	__LIB_10__::func_839(87, 48, "GUNSLINGER3", "RGUN3", "rcm_gunslinger3_1", -1, 1231.35f, -1299.684f, 75.9034f, 0, joaat("BLIP_RC_GUNSLINGER_3"), 264398, 50f);
	__LIB_10__::func_839(88, 49, "GUNSLINGER51", "RGUN5", "rcm_gunslinger5_1", -1, 2492.992f, -420.529f, 43.78334f, joaat("CS_FAMOUSGUNSLINGER_05"), joaat("BLIP_RC_GUNSLINGER_5"), 1312846, 120f);
	__LIB_10__::func_839(89, 50, "HEREKITTY1", "RKTTY1", "rcm_here_kitty_kitty1", 90, 1604.317f, -262.3793f, 78.2036f, joaat("CS_RINGMASTER"), joaat("BLIP_RC"), 1179650, 250f);
	__LIB_10__::func_839(90, 50, "HEREKITTY2", "RKTTY2", "rcm_here_kitty_kitty2", 91, 1015.113f, 159.7295f, 103.0175f, 0, joaat("BLIP_RC_KITTY"), 262272, 250f);
	__LIB_10__::func_839(91, 50, "HEREKITTY3", "RKTTY3", "rcm_here_kitty_kitty3", 92, 1491.239f, -1118.537f, 55.39496f, 0, joaat("BLIP_RC_KITTY"), 1310720, 250f);
	__LIB_10__::func_839(92, 50, "HEREKITTY4", "RKTTY4", "rcm_here_kitty_kitty4", 93, 1408.014f, 280.6987f, 88.45465f, 0, joaat("BLIP_RC_KITTY"), 1310848, 200f);
	__LIB_10__::func_839(93, 50, "HEREKITTY5", "RKTTY5", "rcm_here_kitty_kitty5", -1, 1581.761f, -259.8209f, 79.8f, joaat("CS_RINGMASTER"), joaat("BLIP_RC_KITTY"), 537264132, 250f);
	__LIB_10__::func_839(95, 52, "HOMEROB01", "RHMRB", "rcm_homerob01", -1, 668.8008f, -1233.836f, 43.15567f, 0, joaat("BLIP_ROBBERY_HOME"), 23068678, 100f);
	__LIB_10__::func_839(99, 55, "MARY31", "RMARY3", "rcm_mary31", -1, 1905.66f, -1860.534f, 47.18359f, 0, joaat("BLIP_SCM_LETTER"), 6291530, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(101, 57, "MASON1", "RMASN1", "rcm_mason1", 102, -1365.9f, -726.54f, 91.08f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC"), 1310914, 120f);
	__LIB_10__::func_839(102, 57, "MASON2", "RMASN2", "rcm_mason2", 103, -1651.18f, 628.19f, 125.4f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 1310784, 120f);
	__LIB_10__::func_839(103, 57, "MASON3", "RMASN3", "rcm_mason3", 104, 1358.591f, 554.5364f, 87.3964f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 3407936, 200f);
	__LIB_10__::func_839(104, 57, "MASON4", "RMASN4", "rcm_mason4", 105, 2387.459f, -580.6672f, 41.0198f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 1310784, 120f);
	__LIB_10__::func_839(105, 57, "MASON5", "RMASN5", "rcm_mason5", -1, -231.24f, 226.84f, 94.4f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 538312708, 400f);
	__LIB_10__::func_839(109, 61, "MAYR1", "RMAYR1", "rcm_mr_mayor1", -1, 2401.393f, -1071.014f, 47.473f, joaat("CS_HENRILEMIUX"), joaat("BLIP_RC_HENRI"), 264258, 50f);
	__LIB_10__::func_839(110, 61, "MAYR2", "RMAYR2", "rcm_mr_mayor2", 111, 2401.393f, -1071.014f, 47.473f, joaat("CS_HENRILEMIUX"), joaat("BLIP_RC_HENRI"), 2112, 50f);
	__LIB_10__::func_839(111, 61, "MAYR3", "RMAYR3", "rcm_mr_mayor3", -1, 2401.393f, -1071.014f, 47.473f, 0, joaat("BLIP_RC_HENRI"), 537133188, 50f);
	__LIB_10__::func_839(117, 63, "OHBROTHER1", "ROBT1", "rcm_oh_brother1", 118, -323.86f, 794.53f, 116.89f, 0, joaat("BLIP_RC"), 1310786, 100f);
	__LIB_10__::func_839(118, 63, "OHBROTHER2", "ROBT2", "rcm_oh_brother2", 119, -303.77f, 817.93f, 117.41f, 0, joaat("BLIP_RC"), 1310784, 100f);
	__LIB_10__::func_839(119, 63, "OHBROTHER3", "ROBT3", "rcm_oh_brother3", -1, -1049.4f, 426.08f, 53.89f, 0, joaat("BLIP_RC"), 538181700, 120f);
	__LIB_10__::func_839(121, 65, "POISONEDWELL1", "RHNTN1", "rcm_poisoned_well1", 122, 2538.461f, 432.7961f, 64.0455f, joaat("RCSP_POISONEDWELL_MALES_01"), joaat("BLIP_RC"), 1835074, 120f);
	__LIB_10__::func_839(122, 65, "POISONEDWELL2", "RHNTN2", "rcm_poisoned_well2", 123, 2556.25f, 806.7f, 75.3f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), 262144, 200f);
	__LIB_10__::func_839(123, 65, "POISONEDWELL3", "RHNTN3", "rcm_poisoned_well3", 124, 2397.81f, 609.74f, 66.21f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), 12416, 120f);
	__LIB_10__::func_839(124, 65, "POISONEDWELL4", "RHNTN4", "rcm_poisoned_well4", 125, 2556.25f, 806.7f, 75.3f, joaat("CS_OBEDIAHHINTON"), joaat("BLIP_RC_OBEDIAH_HINTON"), 131072, 150f);
	__LIB_10__::func_839(125, 65, "POISONEDWELL5", "RHNTN5", "rcm_poisoned_well5", -1, 2281.98f, 1198.91f, 108.09f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), 538181636, 150f);
	__LIB_10__::func_839(127, 67, "LIGHTNING1", "RRTL1", "rcm_ride_the_lightning1", 128, 2829.053f, -1055.899f, 43.0369f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC"), 3801090, 60f);
	__LIB_10__::func_839(128, 67, "LIGHTNING2", "RRTL2", "rcm_ride_the_lightning2", -1, 1226.67f, -1295.04f, 75.9f, 0, joaat("BLIP_RC_LIGHTNING"), 2101376, 36f);
	__LIB_10__::func_839(129, 67, "LIGHTNING3", "RRTL3", "rcm_ride_the_lightning3", 130, 2536.865f, -275.3683f, 42.8264f, 0, joaat("BLIP_RC_LIGHTNING"), 2361472, 150f);
	__LIB_10__::func_839(130, 67, "LIGHTNING4", "RRTL4", "rcm_ride_the_lightning4", 131, 2507.133f, -1307.169f, 47.9537f, 0, joaat("BLIP_RC_LIGHTNING"), 2363520, 36f);
	__LIB_10__::func_839(131, 67, "LIGHTNING5", "RRTL5", "rcm_ride_the_lightning5", 132, 2829.053f, -1055.899f, 43.0369f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC_LIGHTNING"), 2752512, 60f);
	__LIB_10__::func_839(132, 67, "LIGHTNING6", "RRTL6", "rcm_ride_the_lightning6", 133, 1281.752f, 908.6993f, 126.8532f, 0, joaat("BLIP_RC_LIGHTNING"), 2359488, 300f);
	__LIB_10__::func_839(133, 67, "LIGHTNING7", "RRTL7", "rcm_ride_the_lightning7", -1, 2689.054f, -1120.174f, 49.6621f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC_LIGHTNING"), 540934148, 140f);
	__LIB_10__::func_839(135, 69, "SERIALKILLER1", "RSKLR", "rcm_serial_killer1", -1, -609.3224f, 521.8002f, 95.1998f, 0, joaat("BLIP_RC"), 546572422, 55f);
	__LIB_10__::func_839(136, 70, "SLAVE1", "RSLVC1", "rcm_slave_catcher1", 137, 1244.57f, -1275.52f, 74.96f, joaat("CS_SLAVECATCHER"), joaat("BLIP_RC"), 1179714, 200f);
	__LIB_10__::func_839(137, 70, "SLAVE2", "RSLVC2", "rcm_slave_catcher2", -1, 1264.612f, -404.1218f, 97.0883f, 0, joaat("BLIP_RC_SLAVE_CATCHER"), 537133124, 36f);
	__LIB_10__::func_839(138, 71, "STRAUSS11", "RSTR1", "rcm_strauss11", -1, 655.3615f, -1234.329f, 43.1254f, 0, joaat("BLIP_SCM_STRAUSS"), 6422598, 100f);
	__LIB_10__::func_839(139, 72, "STRAUSS21", "RSTR2", "rcm_strauss21", -1, 1970.765f, -1872.171f, 41.6262f, 0, joaat("BLIP_SCM_STRAUSS"), 6422598, 120f);
	__LIB_10__::func_839(140, 73, "STRAUSS31", "RSTR31", "rcm_strauss31", 141, 2327.984f, 1330.677f, 106.157f, 0, joaat("BLIP_SCM_STRAUSS"), 2228290, 100f);
	__LIB_10__::func_839(141, 73, "STRAUSS32", "RSTR32", "rcm_strauss32", 142, 2328.061f, 1329.368f, 106.1765f, 0, joaat("BLIP_SCM_STRAUSS"), 2101488, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(142, 73, "STRAUSS33", "RSTR33", "rcm_strauss33", -1, 2327.984f, 1330.677f, 106.157f, 0, joaat("BLIP_SCM_STRAUSS"), 6684748, 100f);
	__LIB_10__::func_839(143, 74, "THEODDFELLOWS1", "RODDF1", "rcm_the_odd_fellows1", 144, 2945.728f, 526.6201f, 45.84f, joaat("CS_ODDFELLOWSPINHEAD"), joaat("BLIP_RC"), 1835010, 60f);
	__LIB_10__::func_839(144, 74, "THEODDFELLOWS2", "RODDF2", "rcm_the_odd_fellows2", -1, 2312.786f, 27.78194f, 48.40265f, 0, joaat("BLIP_RC_ODD_FELLOWS"), 538181700, 140f);
	__LIB_10__::func_839(147, 77, "WARVET1", "RWARV1", "rcm_war_veteran1", 148, 1479.436f, 1335.166f, 161.3365f, joaat("CS_WARVET"), joaat("BLIP_RC"), 786498, 140f);
	__LIB_10__::func_839(148, 77, "WARVET2", "RWARV2", "rcm_war_veteran2", 149, 1698.457f, 1511.371f, 146.8702f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 786496, 200f);
	__LIB_10__::func_839(149, 77, "WARVET3", "RWARV3", "rcm_war_veteran3", 150, 1699.141f, 1508.696f, 146.8712f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 786496, 200f);
	__LIB_10__::func_839(150, 77, "WARVET4", "RWARV4", "rcm_war_veteran4", -1, 1698.457f, 1511.371f, 146.8702f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 537657412, 200f);
	__LIB_10__::func_839(11, 7, "BHDUEL1", "RBDUL", "rcm_bounty_duel1", -1, -2336.112f, 105.0412f, 221.6922f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 60f);
	__LIB_10__::func_839(12, 8, "BHEXCONFED1", "RBCON", "rcm_bounty_exconfed1", -1, 2505.874f, 286.573f, 71.9487f, joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"), joaat("BLIP_MISSION_BOUNTY"), 8653446, 120f);
	__LIB_10__::func_839(13, 9, "BHRANCHER1", "RBRAN", "rcm_bounty_rancher1", -1, 1647.412f, -608.9368f, 42.4184f, joaat("U_M_M_HTLRANCHERBOUNTY_01"), joaat("BLIP_MISSION_BOUNTY"), 8653446, 150f);
	__LIB_10__::func_839(153, 79, "BHTARGET3", "RBT03", "rcm_bh_laramie_sleeping", -1, -1947.647f, 427.8162f, 118.9041f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250f);
	__LIB_10__::func_839(14, 10, "BHTARGET5", "RBT05", "rcm_bh_wife_and_lover", -1, -1215.09f, 369.9232f, 64.0378f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 250f);
	__LIB_10__::func_839(154, 80, "BHTARGET12", "RBT12", "rcm_bh_camp_return", -1, 1425.841f, -2186.84f, 47.99936f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 250f);
	__LIB_10__::func_839(15, 11, "BHTARGET14", "RBT14", "rcm_bh_shack_escape", -1, 1361.01f, -2066.81f, 52.23f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 70f);
	__LIB_10__::func_839(16, 12, "BHTARGET15", "RBT15", "rcm_bh_sd_saloon", -1, 2794.52f, -1170.64f, 46.924f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 50f);
	__LIB_10__::func_839(17, 13, "BHTARGET18", "RBT18", "rcm_bh_skinner_brother", -1, -2000.8f, -1829.5f, 113.3f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 200f);
	__LIB_10__::func_839(18, 14, "BHTARGET20", "RBT20", "rcm_bh_skinner_search", -1, -1982.37f, -1430.89f, 115.58f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 200f);
	__LIB_10__::func_839(155, 15, "BHTARGET21", "RBT21", "rcm_bh_blackwater_hunt", -1, -799.8206f, -1232.503f, 42.552f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 175f);
	__LIB_10__::func_839(19, 16, "BHTARGET22", "RBT22", "rcm_bh_bandito_shack", -1, -5409f, -3655f, -22.2f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250f);
	__LIB_10__::func_839(20, 17, "BHTARGET23", "RBT23", "rcm_bh_bandito_mine", -1, -5970.842f, -3245.562f, -22.5793f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250f);
	__LIB_10__::func_839(1, 1, "ABIGAIL22", "RABI22", "rcm_abigail22", -1, -1606.873f, -1376.358f, 81.81185f, 0, joaat("BLIP_MISSION_JOHN"), 67143009, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(2, 2, "ABIGAIL31", "RABI3", "rcm_abigail31", -1, -1637.182f, -1363.268f, 83.4566f, 0, joaat("BLIP_SCM_ABIGAIL"), 262407, 120f);
	__LIB_10__::func_839(8, 5, "BEECHERS11", "RBCH11", "rcm_beechers11", 9, -814.331f, -1278.102f, 42.6377f, 0, joaat("BLIP_SCM_ANSEL_ATHERTON"), 67240259, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(9, 5, "BEECHERS12", "RBCH12", "rcm_beechers12", -1, -1635.695f, -1355.41f, 82.9339f, 0, joaat("BLIP_SCM_ANSEL_ATHERTON"), 262469, 200f);
	__LIB_10__::func_839(10, 6, "BEECHERS21", "RBCH21", "rcm_beechers21", -1, -1638.859f, -1359.027f, 82.9803f, 0, joaat("BLIP_SCM_UNCLE"), 262403, 250f);
	__LIB_10__::func_839(71, 41, "EVELYN1", "RMLLR1", "rcm_evelyn_miller1", 72, -2068.575f, -1063.067f, 134.9549f, joaat("CS_EVELYNMILLER"), joaat("BLIP_RC"), 1573314, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(72, 41, "EVELYN2", "RMLLR2", "rcm_evelyn_miller2", 73, -2374.59f, -1594.19f, 153.4694f, joaat("CS_EVELYNMILLER"), joaat("BLIP_SCM_EVELYN"), 1835328, 100f);
	__LIB_10__::func_839(73, 41, "EVELYN3", "RMLLR3", "rcm_evelyn_miller3", 74, -2373.404f, -1592.497f, 153.0315f, 0, joaat("BLIP_SCM_EVELYN"), 256, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(74, 41, "EVELYN4", "RMLLR4", "rcm_evelyn_miller4", 75, -2373.404f, -1592.497f, 153.0315f, 0, 0, 4592, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(75, 41, "EVELYN5", "RMLLR5", "rcm_evelyn_miller5", -1, -2373.404f, -1592.497f, 153.0315f, 0, 0, 671355188, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(96, 53, "JACK21", "RJCK2", "rcm_jack2", -1, -1629.71f, -1338.377f, 82.0174f, 0, joaat("BLIP_SCM_JACK"), 262407, 140f);
	__LIB_10__::func_839(100, 56, "MARYBETH1", "RMRYB", "rcm_marybeth1", -1, -171.3529f, 631.9009f, 113.0321f, 0, 0, 67240214, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(126, 66, "RAINSFALL1", "RRFA1", "rcm_rains_fall1", -1, 2937.5f, 1276.5f, 45.1f, 0, 0, 67240214, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(145, 75, "TILLY1", "RTLLY", "rcm_tilly1", -1, 2595.41f, -1198.08f, 52.23f, 0, 0, 67240214, 1112014848 /* Float: 50f */);
	__LIB_10__::func_839(151, 78, "HERBALISTCAMP1", "REHEC1", "rcm_herbalist_camp", 152, 556.271f, 172.08f, 133.3435f, 0, joaat("BLIP_RC"), 1048642, 250f);
	__LIB_10__::func_839(152, 78, "HERBALISTCAMP2", "REHEC2", "rcm_herbalist_camp", -1, 557.4186f, 170.2608f, 134.348f, 0, joaat("BLIP_RC_HERBALIST"), 536875076, 250f);
	__LIB_10__::func_839(146, 76, "TREASUREHUNTER1", "RETH", "rcm_treasure_hunter", -1, -586.4957f, -344.5864f, 81.4029f, joaat("CS_TREASUREHUNTER"), joaat("BLIP_RC"), 68190278, 200f);
	__LIB_9__::func_973(1, 12);
	__LIB_9__::func_973(23, 1);
	__LIB_9__::func_973(33, 24);
	__LIB_9__::func_973(36, 24);
	__LIB_9__::func_973(54, 24);
	__LIB_9__::func_973(55, 48);
	__LIB_9__::func_973(70, 4);
	__LIB_9__::func_973(72, 24);
	__LIB_9__::func_973(73, 24);
	__LIB_9__::func_973(78, 24);
	__LIB_9__::func_973(79, 24);
	__LIB_9__::func_973(80, 48);
	__LIB_9__::func_973(102, 48);
	__LIB_9__::func_973(103, 48);
	__LIB_9__::func_973(104, 48);
	__LIB_9__::func_973(105, 48);
	__LIB_9__::func_973(113, 1);
	__LIB_9__::func_973(118, 24);
	__LIB_9__::func_973(119, 24);
	__LIB_9__::func_973(122, 24);
	__LIB_9__::func_973(133, 24);
	__LIB_9__::func_973(148, 24);
	__LIB_9__::func_973(149, 24);
	__LIB_9__::func_973(150, 24);
	__LIB_10__::func_775(0, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(2, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(23, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(24, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(53, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(54, joaat("WEATHER_GROUP_THUNDERSTORM"), 1);
	__LIB_10__::func_775(59, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(71, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(72, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(69, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(81, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(89, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(91, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(92, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(93, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(101, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(102, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(103, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(104, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(105, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(117, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	__LIB_10__::func_775(118, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	__LIB_10__::func_775(119, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(115, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(133, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(134, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(144, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(145, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	__LIB_10__::func_775(146, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	__LIB_10__::func_775(147, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	if (Global_1879534 == 0)
	{
		__LIB_10__::func_776(2, (Global_1347702[2 /*49*/].f_16 + 50f));
		__LIB_10__::func_776(12, (Global_1347702[12 /*49*/].f_16 + 40f));
		__LIB_10__::func_776(13, (Global_1347702[13 /*49*/].f_16 + 40f));
		__LIB_10__::func_776(23, (Global_1347702[23 /*49*/].f_16 + 30f));
		__LIB_10__::func_776(32, (Global_1347702[32 /*49*/].f_16 + 30f));
		__LIB_10__::func_776(56, (Global_1347702[56 /*49*/].f_16 + 50f));
		__LIB_10__::func_776(54, (Global_1347702[54 /*49*/].f_16 + 50f));
		__LIB_10__::func_776(58, (Global_1347702[58 /*49*/].f_16 + 50f));
		__LIB_10__::func_776(63, (Global_1347702[63 /*49*/].f_16 + 40f));
		__LIB_10__::func_776(81, (Global_1347702[81 /*49*/].f_16 + 30f));
		__LIB_10__::func_776(151, 410f);
		__LIB_10__::func_776(152, 410f);
		__LIB_10__::func_776(90, (Global_1347702[90 /*49*/].f_16 + 25f));
		__LIB_10__::func_776(91, (Global_1347702[91 /*49*/].f_16 + 25f));
		__LIB_10__::func_776(96, (Global_1347702[96 /*49*/].f_16 + 50f));
		__LIB_10__::func_776(120, (Global_1347702[120 /*49*/].f_16 + 100f));
		__LIB_10__::func_776(123, (Global_1347702[123 /*49*/].f_16 + 50f));
		__LIB_10__::func_776(129, (Global_1347702[129 /*49*/].f_16 + 60f));
		__LIB_10__::func_776(132, (Global_1347702[132 /*49*/].f_16 + 60f));
		__LIB_10__::func_776(144, (Global_1347702[144 /*49*/].f_16 + 50f));
		__LIB_10__::func_777(3, 35f);
		__LIB_10__::func_777(4, 20f);
		__LIB_10__::func_777(11, 30f);
		__LIB_10__::func_777(13, 80f);
		__LIB_10__::func_777(12, 110f);
		__LIB_10__::func_777(153, 100f);
		__LIB_10__::func_777(14, 80f);
		__LIB_10__::func_777(154, 100f);
		__LIB_10__::func_777(15, 60f);
		__LIB_10__::func_777(17, 100f);
		__LIB_10__::func_777(18, 85f);
		__LIB_10__::func_777(155, 65f);
		__LIB_10__::func_777(19, 65f);
		__LIB_10__::func_777(20, 60f);
		__LIB_10__::func_777(26, 45f);
		__LIB_10__::func_777(30, 40f);
		__LIB_10__::func_777(32, 30f);
		__LIB_10__::func_777(33, 55f);
		__LIB_10__::func_777(36, 40f);
		__LIB_10__::func_777(38, 35f);
		__LIB_10__::func_777(39, 80f);
		__LIB_10__::func_777(43, 45f);
		__LIB_10__::func_777(41, 40f);
		__LIB_10__::func_777(49, 40f);
		__LIB_10__::func_777(51, 65f);
		__LIB_10__::func_777(53, 32f);
		__LIB_10__::func_777(56, 35f);
		__LIB_10__::func_777(57, 17f);
		__LIB_10__::func_777(62, 50f);
		__LIB_10__::func_777(65, 42f);
		__LIB_10__::func_777(69, 25f);
		__LIB_10__::func_777(70, 30f);
		__LIB_10__::func_777(71, 25f);
		__LIB_10__::func_777(72, 25f);
		__LIB_10__::func_777(77, 12f);
		__LIB_10__::func_777(78, 17f);
		__LIB_10__::func_777(80, 20f);
		__LIB_10__::func_777(84, 35f);
		__LIB_10__::func_777(86, 50f);
		__LIB_10__::func_777(88, 45f);
		__LIB_10__::func_777(89, 75f);
		__LIB_10__::func_777(90, 130f);
		__LIB_10__::func_777(91, 60f);
		__LIB_10__::func_777(92, 85f);
		__LIB_10__::func_777(94, 47f);
		__LIB_10__::func_777(101, 40f);
		__LIB_10__::func_777(102, 40f);
		__LIB_10__::func_777(103, 40f);
		__LIB_10__::func_777(104, 40f);
		__LIB_10__::func_777(105, 40f);
		__LIB_10__::func_777(106, 25f);
		__LIB_10__::func_777(107, 25f);
		__LIB_10__::func_777(116, 30f);
		__LIB_10__::func_777(117, 20f);
		__LIB_10__::func_777(118, 20f);
		__LIB_10__::func_777(119, 20f);
		__LIB_10__::func_777(121, 55f);
		__LIB_10__::func_777(123, 100f);
		__LIB_10__::func_777(125, 35f);
		__LIB_10__::func_777(127, 28f);
		__LIB_10__::func_777(129, __LIB_6__::func_707(13));
		__LIB_10__::func_777(132, 100f);
		__LIB_10__::func_777(133, 20f);
		__LIB_10__::func_777(135, 75f);
		__LIB_10__::func_777(136, 22f);
		__LIB_10__::func_777(143, 20f);
		__LIB_10__::func_777(144, 50f);
		__LIB_10__::func_777(151, 100f);
		__LIB_10__::func_777(146, 135f);
		__LIB_10__::func_778(0, (__LIB_0__::func_771(13) || __LIB_0__::func_771(14)));
		__LIB_10__::func_778(2, (__LIB_0__::func_771(13) || __LIB_0__::func_771(4)));
		__LIB_10__::func_778(10, (__LIB_0__::func_771(4) || __LIB_0__::func_771(7)));
		__LIB_10__::func_778(21, __LIB_0__::func_771(13));
		__LIB_10__::func_778(37, __LIB_0__::func_771(23));
		__LIB_10__::func_778(59, __LIB_0__::func_771(18));
		__LIB_10__::func_778(63, __LIB_0__::func_771(10));
		__LIB_10__::func_778(64, __LIB_0__::func_771(11));
		__LIB_10__::func_778(65, __LIB_0__::func_771(11));
		__LIB_10__::func_778(66, (__LIB_0__::func_771(0) || __LIB_0__::func_771(5)));
		__LIB_10__::func_778(67, (((__LIB_0__::func_771(0) || __LIB_0__::func_771(5)) || __LIB_0__::func_771(9)) || __LIB_0__::func_771(2)));
		__LIB_10__::func_778(68, (__LIB_0__::func_771(0) || __LIB_0__::func_771(7)));
		__LIB_10__::func_778(76, __LIB_0__::func_771(9));
		__LIB_10__::func_778(94, __LIB_0__::func_771(5));
		__LIB_10__::func_778(95, __LIB_0__::func_771(8));
		__LIB_10__::func_778(96, (__LIB_0__::func_771(14) || __LIB_0__::func_771(12)));
		__LIB_10__::func_778(112, (__LIB_0__::func_771(1) || __LIB_0__::func_771(8)));
		__LIB_10__::func_778(114, (__LIB_0__::func_771(1) || __LIB_0__::func_771(8)));
		__LIB_10__::func_778(116, __LIB_0__::func_771(26));
		__LIB_10__::func_778(120, __LIB_0__::func_771(17));
		__LIB_10__::func_778(134, (__LIB_0__::func_771(11) || __LIB_0__::func_771(17)));
		__LIB_10__::func_778(138, __LIB_0__::func_771(18));
		__LIB_10__::func_778(139, __LIB_0__::func_771(18));
		__LIB_10__::func_778(140, __LIB_0__::func_771(18));
		__LIB_10__::func_778(142, __LIB_0__::func_771(22));
		__LIB_10__::func_779(53, 1026);
		__LIB_10__::func_779(54, 128);
		__LIB_10__::func_779(56, 128);
		__LIB_10__::func_779(57, 1030);
		__LIB_10__::func_779(39, 1030);
		__LIB_10__::func_779(79, 1026);
		__LIB_10__::func_779(81, 8192);
		__LIB_10__::func_779(101, 1026);
		__LIB_10__::func_779(102, 1026);
		__LIB_10__::func_779(103, 1026);
		__LIB_10__::func_779(104, 1026);
		__LIB_10__::func_779(105, 1026);
		__LIB_10__::func_779(109, 128);
		__LIB_10__::func_779(110, 128);
		__LIB_10__::func_779(111, 128);
		__LIB_10__::func_779(122, 8);
		__LIB_10__::func_779(148, 1026);
		__LIB_10__::func_779(149, 1026);
		__LIB_10__::func_779(150, 1026);
		__LIB_10__::func_779(155, 640);
		__LIB_10__::func_779(128, 7);
		__LIB_10__::func_779(52, 7);
		__LIB_10__::func_779(71, 1026);
		__LIB_10__::func_780(6, 1f);
		__LIB_10__::func_780(22, 30f);
		__LIB_10__::func_780(26, 15f);
		__LIB_10__::func_780(27, 15f);
		__LIB_10__::func_780(30, 50f);
		__LIB_10__::func_780(32, 100f);
		__LIB_10__::func_780(33, 150f);
		__LIB_10__::func_780(34, 100f);
		__LIB_10__::func_780(36, 100f);
		__LIB_10__::func_780(41, 10f);
		__LIB_10__::func_780(53, 50f);
		__LIB_10__::func_780(54, 150f);
		__LIB_10__::func_780(58, 0f);
		__LIB_10__::func_780(59, 3f);
		__LIB_10__::func_780(61, 2f);
		__LIB_10__::func_780(76, 3f);
		__LIB_10__::func_780(81, 50f);
		__LIB_10__::func_780(84, 60f);
		__LIB_10__::func_780(85, 60f);
		__LIB_10__::func_780(89, 150f);
		__LIB_10__::func_780(90, 180f);
		__LIB_10__::func_780(91, 75f);
		__LIB_10__::func_780(93, 150f);
		__LIB_10__::func_780(95, 4.5f);
		__LIB_10__::func_780(97, 2f);
		__LIB_10__::func_780(101, 50f);
		__LIB_10__::func_780(103, 150f);
		__LIB_10__::func_780(112, 5f);
		__LIB_10__::func_780(113, 0f);
		__LIB_10__::func_780(114, 5f);
		__LIB_10__::func_780(115, 70f);
		__LIB_10__::func_780(116, 150f);
		__LIB_10__::func_780(134, 2f);
		__LIB_10__::func_780(0, 3f);
		__LIB_10__::func_780(120, 3f);
		__LIB_10__::func_780(138, 3f);
		__LIB_10__::func_780(139, 3f);
		__LIB_10__::func_780(140, 3f);
		__LIB_10__::func_780(142, 3f);
		__LIB_10__::func_780(147, 150f);
		__LIB_10__::func_780(117, 10f);
		__LIB_10__::func_780(118, 10f);
		__LIB_10__::func_780(151, 160f);
		__LIB_10__::func_780(152, 160f);
		__LIB_10__::func_780(146, 155f);
		__LIB_10__::func_780(121, 200f);
		__LIB_10__::func_780(15, 70f);
		__LIB_10__::func_780(155, 5f);
		__LIB_10__::func_780(20, 170f);
		__LIB_10__::func_780(13, 140f);
		__LIB_10__::func_780(17, 160f);
		__LIB_10__::func_780(12, 100f);
		__LIB_10__::func_780(126, 2f);
		__LIB_10__::func_780(145, 2f);
		__LIB_10__::func_780(14, 100f);
		__LIB_10__::func_781(22, 100f);
		__LIB_10__::func_781(23, 100f);
		__LIB_10__::func_781(62, 150f);
		__LIB_10__::func_781(68, 150f);
		__LIB_10__::func_781(65, 250f);
		__LIB_10__::func_781(106, 100f);
		__LIB_10__::func_781(107, 100f);
		__LIB_10__::func_781(115, 100f);
		__LIB_10__::func_781(116, 225f);
		__LIB_10__::func_781(151, 250f);
		__LIB_10__::func_781(155, 110f);
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
	return 1;
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar22;
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_40.f_4283 == iParam0)
	{
		iVar0 = __LIB_5__::func_824(__LIB_1__::func_953(iParam0));
		if (iVar0 != -1)
		{
			Global_40.f_6 = { Global_1395601.f_5[iVar0 /*28*/].f_2 };
		}
		__LIB_4__::func_253(__LIB_5__::func_866(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
		Global_40.f_4283.f_330 = -15;
		return;
	}
	__LIB_9__::func_127();
	switch (iParam0)
	{
		case 0:
		case 1:
			__LIB_5__::func_440("hso_post_caravan");
			__LIB_0__::func_804(-349064220);
			break;
		case 2:
			__LIB_5__::func_440("dewclm_post_caravan");
			__LIB_0__::func_804(1776302352);
			__LIB_0__::func_803(-349064220);
			break;
		case 3:
			__LIB_0__::func_804(-523522517);
			__LIB_0__::func_803(-349064220);
			__LIB_0__::func_803(1776302352);
			break;
		case 4:
		case 5:
		case 6:
			__LIB_0__::func_803(-349064220);
			__LIB_0__::func_803(1776302352);
			__LIB_0__::func_803(-523522517);
			break;
		case 7:
		case 8:
			__LIB_0__::func_803(-349064220);
			__LIB_0__::func_803(1776302352);
			__LIB_0__::func_803(-523522517);
			__LIB_0__::func_803(1591451572);
			break;
	}
	Global_1934266.f_66 = 1;
	__LIB_2__::func_758(__LIB_1__::func_953(iParam0), 0);
	switch (__LIB_0__::func_2())
	{
		case -1:
			__LIB_9__::func_144();
			__LIB_9__::func_128(iParam0);
			__LIB_0__::func_703(1, 18);
			__LIB_11__::func_374(iParam0);
			__LIB_11__::func_375(iParam0);
			Var2.f_11 = 1;
			iVar22 = 0;
			while (iVar22 < 10)
			{
				MISC::_COPY_MEMORY(&(Global_40.f_6563.f_274[iVar22 /*20*/]), &Var2, 20);
				iVar22++;
			}
			Global_40.f_6563.f_273 = 0;
			__LIB_0__::func_63(&(Global_1359489.f_25), 1, 1);
			Global_1359453 = 0;
			iVar1 = 0;
			while (iVar1 < 27)
			{
				__LIB_0__::func_176(iVar1, 16384, 1);
				iVar1++;
			}
			__LIB_4__::func_845(0, 14);
			__LIB_6__::func_32();
			__LIB_6__::func_261();
			Global_1357549.f_1497.f_8 |= 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			__LIB_4__::func_253(joaat("CSTAG_NEW_CAMP_FIRST_VISIT"), joaat("CSTP_NEXT_VISIT"), -1235532919, -1, 0, 1, 0);
			__LIB_4__::func_253(__LIB_5__::func_866(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
			break;
	}
}

void func_87()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_0__::func_30(Global_40.f_4237[iVar0 /*3*/]))
		{
			__LIB_6__::func_645(&(Global_40.f_4237[iVar0 /*3*/]));
		}
		iVar0++;
	}
}

void func_88()
{
	struct<4> Var0;
	if (__LIB_7__::func_511() >= 1 && __LIB_7__::func_511() < 6)
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	switch (__LIB_7__::func_511())
	{
		case 0:
			if (__LIB_10__::func_700())
			{
				if (!__LIB_0__::func_75(&(Global_0.f_9)))
				{
					__LIB_1__::func_283(&(Global_0.f_9), 0);
				}
			}
			else if (__LIB_0__::func_75(&(Global_0.f_9)))
			{
				__LIB_0__::func_37(&(Global_0.f_9));
			}
			if (__LIB_0__::func_75(&(Global_0.f_9)))
			{
				if (__LIB_0__::func_265(&(Global_0.f_9)) >= 10f)
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					__LIB_10__::func_701(1);
				}
			}
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PLAYER::FORCE_CLEANUP(2);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
				HUD::_HIDE_HUD_COMPONENT(-1679307491);
				Global_0.f_12 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
				}
				else
				{
					Global_0.f_12 = PED::_GET_LAST_MOUNT(Global_35);
					if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
					{
						if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Global_0.f_12, true, false)) > 50f)
						{
							Global_0.f_12 = 0;
						}
						else
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
						}
					}
				}
				Global_0.f_13 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					PED::_0xED00D72F81CF7278(Global_0.f_13, 0, 0);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, true);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 797.0328f, 1780.719f, 279.8931f, 6.2684f, true, false, true);
				__LIB_0__::func_703(0, -1);
				Global_0.f_8 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@fin3@arthurs_grave", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(Global_0.f_8);
				UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ARTHURS_GRAVE_SCENE"), true);
				__LIB_10__::func_701(2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_65(&Global_0, 3) || __LIB_0__::func_265(&(Global_0.f_9)) >= 15f)
			{
				__LIB_10__::func_701(3);
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_0.f_8, true, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Global_0.f_8, "JOHN", &Var0, false, 0, 2))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Var0, Var0.f_3.f_2, true, true, true, false);
					__LIB_10__::func_701(4);
				}
				else
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Global_0.f_8, &Var0, &(Var0.f_9), 2);
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Var0, Var0.f_3.f_2, true, true, true, false);
					__LIB_10__::func_701(4);
				}
			}
			break;
		case 4:
			if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX())) || __LIB_0__::func_265(&(Global_0.f_9)) >= 15f)
			{
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::_0x9587913B9E772D29(Global_0.f_12, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::_0x9587913B9E772D29(Global_0.f_13, 0);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_0.f_8, "JOHN", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(Global_0.f_8);
				__LIB_10__::func_701(5);
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Global_0.f_8, false))
			{
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
				HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
				if (__LIB_0__::func_898(932909855))
				{
					__LIB_1__::func_465(joaat("JOURNAL_ENTRY_100_PERCENT_HIGH"), 0);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_ENTRY_100_PERCENT_LOW"), 0);
				}
				__LIB_1__::func_199(0);
				__LIB_10__::func_701(6);
			}
			break;
		case 6:
			break;
	}
}

void func_89(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	Global_1347477.f_184 = -1;
	Global_1347477.f_185 = 0;
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	if (Global_1946804.f_1 == 1160113249)
	{
		__LIB_1__::func_633(&(Global_1946804.f_1378), 1105329772, &uVar0, 1, 0, 0, 0);
		Global_1946804.f_1378.f_1[27 /*3*/] = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
	}
	else
	{
		__LIB_1__::func_633(&(Global_1946804.f_1378), 2020890174, &uVar0, 1, 0, 0, 0);
		if (bParam1)
		{
			__LIB_1__::func_633(&(Global_1946804.f_1378), -1061007984, &uVar0, 1, 0, 0, 0);
		}
		Global_1946804.f_1378.f_1[27 /*3*/] = joaat("CLOTHING_SP_OFFHAND_000");
	}
	__LIB_10__::func_814(Global_40.f_7731[0 /*5*/], Global_40.f_7731[1 /*5*/], Global_40.f_7731[2 /*5*/]);
	__LIB_10__::func_826(Global_40.f_7748.f_1);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (!__LIB_0__::func_65(&(Global_1946804.f_1378.f_1[iVar1 /*3*/]), 2))
		{
		}
		else
		{
			Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
			uParam0->f_1[iVar1 /*3*/].f_2 = (uParam0->f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
			if (!__LIB_10__::func_813(__LIB_0__::func_158(iVar1, 1)))
			{
			}
			else
			{
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/] || uParam0->f_1[iVar1 /*3*/] == 0)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_1378.f_1[iVar1 /*3*/];
				}
				switch (__LIB_0__::func_158(iVar1, 1))
				{
					case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
					case joaat("MP_COMPONENT_TYPE_HAIR"):
					case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
					case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
						uParam0->f_1[iVar1 /*3*/].f_1 = Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1;
						break;
				}
			}
		}
		iVar1++;
	}
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	__LIB_1__::func_288(iVar0, iVar1, 0);
	return -2;
}

void func_91(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_1__::func_201(iVar0, iParam0))
		{
			__LIB_1__::func_288(iVar0, iParam0, 0);
		}
		iVar0++;
	}
}

void func_92(int iParam0)
{
	bool bVar0;
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (__LIB_10__::func_235(iParam0, 4))
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]);
	}
	else
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1);
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & 4096 != 0)
	{
		if (bVar0)
		{
			return;
		}
	}
	if (__LIB_10__::func_235(iParam0, 4))
	{
		if (!bVar0)
		{
			__LIB_10__::func_844(iParam0, &(Global_1392626[iParam0 /*32*/]), Global_1392626[iParam0 /*32*/].f_24);
		}
		MAP::_BLIP_SET_MODIFIER(Global_1392626[iParam0 /*32*/], 724623647);
	}
	else
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bVar0)
		{
			MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
		}
		__LIB_10__::func_844(iParam0, &(Global_1392626[iParam0 /*32*/].f_1), Global_1392626[iParam0 /*32*/].f_27);
		MAP::_BLIP_SET_MODIFIER(Global_1392626[iParam0 /*32*/].f_1, 724623647);
	}
	__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_9), 4096);
}

void func_93()
{
	int iVar0;
	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!__LIB_0__::func_20(iVar0))
		{
		}
		else
		{
			if (__LIB_0__::func_2() == -1)
			{
				Global_23118[iVar0 /*11*/].f_1 = -15;
			}
			else
			{
				Global_1058888.f_40615[iVar0 /*11*/].f_1 = -15;
			}
			__LIB_9__::func_90(__LIB_9__::func_28(iVar0));
			__LIB_0__::func_25(iVar0, 16777216);
			__LIB_10__::func_843(iVar0, 0, 350);
			__LIB_5__::func_496(iVar0, 0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_94(int iParam0)
{
	if (!__LIB_5__::func_219(iParam0))
	{
		return;
	}
	__LIB_1__::func_722(Global_1835011[iParam0 /*74*/].f_1);
}

void func_95(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
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
				__LIB_10__::func_841(iParam0, fParam5, iParam1, bParam2, 1);
				__LIB_5__::func_450(&(Global_1835011[iParam0 /*74*/]), 2);
			}
		}
	}
	else if ((bParam2 && !__LIB_5__::func_451(iParam0)) && !Global_43891)
	{
		__LIB_10__::func_841(iParam0, fParam5, iParam1, bParam2, 1);
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

int func_96()
{
	if (!__LIB_0__::func_65(&Global_0, 2))
	{
		if (Global_1572887.f_10)
		{
			__LIB_0__::func_380(&Global_0, 1);
			return 0;
		}
		if (!__LIB_0__::func_28())
		{
			__LIB_0__::func_380(&Global_0, 1);
			return 0;
		}
		if (__LIB_0__::func_6(__LIB_0__::func_298(0)))
		{
			return 0;
		}
		if (Global_1879534)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (__LIB_0__::func_1(Global_1935630, 2048) || __LIB_0__::func_13(38))
		{
			return 0;
		}
		if (MISC::_0x1B065A2BF7953815(0) == 1)
		{
			return 0;
		}
		if (SAVE::_0x3CF46F55C6585590())
		{
			return 0;
		}
		if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39))
		{
			return 0;
		}
		if (Global_40.f_7729 != Global_1905941)
		{
			return 0;
		}
		if (__LIB_0__::func_65(&Global_0, 16))
		{
			__LIB_0__::func_380(&Global_0, 16);
			return 0;
		}
		if (Global_1914319.f_18941.f_17)
		{
			return 0;
		}
		if (STREAMING::_0x99F92061EFE908BA())
		{
			return 0;
		}
		__LIB_10__::func_729(0);
	}
	if (SAVE::_0x3CF46F55C6585590())
	{
		return 0;
	}
	if (MISC::_0x1B065A2BF7953815(0) == 1)
	{
		return 0;
	}
	__LIB_1__::func_837(0, 0);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	Global_0.f_14 = 0;
	__LIB_0__::func_47(&Global_0, 4);
	__LIB_0__::func_380(&Global_0, 2);
	__LIB_0__::func_380(&Global_0, 32);
	__LIB_0__::func_380(&Global_0, 64);
	return 1;
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_11__::func_838(50);
			}
			else
			{
				__LIB_11__::func_838(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_11__::func_838(51);
			}
			else
			{
				__LIB_11__::func_838(49);
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
			__LIB_11__::func_838(24);
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

int func_98()
{
	return Global_43908;
}

void func_99(int iParam0)
{
	Global_1392040.f_6 = iParam0;
}

bool func_100()
{
	if (!__LIB_0__::func_644(8388608))
	{
		return false;
	}
	if (((PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		return true;
	}
	return false;
}

bool func_101(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0, true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(iParam0);
			}
			return false;
		}
	}
	return true;
}

void func_102(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_103(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_159, true))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_159));
	}
}

void func_104(var uParam0)
{
	uParam0->f_153 = 0;
	uParam0->f_154 = -1;
	uParam0->f_155 = 0;
	uParam0->f_156 = -1;
	uParam0->f_157 = 0;
	uParam0->f_158 = 0;
	uParam0->f_152 = 0;
	uParam0->f_159 = 0;
}

void func_105(var uParam0)
{
	bool bVar0;
	bVar0 = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_SET_OBJECT_BURN_SPEED(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, false);
		}
		if (uParam0->f_1)
		{
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, (uParam0->f_12 * 0.5f));
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, false);
			}
		}
	}
	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_12 = uParam0->f_21;
		}
		else
		{
			uParam0->f_12 = (((uParam0->f_12 * 15f) + uParam0->f_21) / 16f);
		}
		if (MISC::ABSF((uParam0->f_12 - uParam0->f_21)) < 0.0025f)
		{
			uParam0->f_12 = uParam0->f_21;
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, (uParam0->f_12 * 0.5f));
		}
	}
	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_13 = uParam0->f_22;
		}
		else
		{
			uParam0->f_13 = (((uParam0->f_13 * 12f) + uParam0->f_22) / 13f);
		}
		if (MISC::ABSF((uParam0->f_13 - uParam0->f_22)) < 0.0025f)
		{
			uParam0->f_13 = uParam0->f_22;
			OBJECT::_SET_OBJECT_BURN_OPACITY(*uParam0, uParam0->f_13);
		}
	}
	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else
		{
			uParam0->f_14 = (((uParam0->f_14 * 14f) + uParam0->f_23) / 15f);
		}
		if (MISC::ABSF((uParam0->f_14 - uParam0->f_23)) < 0.005f && !uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
		{
			OBJECT::_0xF49574E2332A8F06(*uParam0, (uParam0->f_14 * 0.33f));
		}
	}
	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_15 = uParam0->f_24;
		}
		else
		{
			uParam0->f_15 = (((uParam0->f_15 * 19f) + uParam0->f_24) / 20f);
		}
		if (MISC::ABSF((uParam0->f_15 - uParam0->f_24)) < 0.0025f)
		{
			uParam0->f_15 = uParam0->f_24;
			OBJECT::_SET_OBJECT_BURN_LEVEL(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), true);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_16, false);
		}
	}
	else if ((uParam0->f_16 != uParam0->f_25 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_16 = uParam0->f_25;
		}
		else
		{
			uParam0->f_16 = (((uParam0->f_16 * 15f) + uParam0->f_25) / 16f);
		}
		if (MISC::ABSF((uParam0->f_16 - uParam0->f_25)) < 0.0025f)
		{
			uParam0->f_16 = uParam0->f_25;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_16, false);
			}
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_17, false);
		}
	}
	else if ((uParam0->f_17 != uParam0->f_26 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_17 = uParam0->f_26;
		}
		else
		{
			uParam0->f_17 = (((uParam0->f_17 * 15f) + uParam0->f_26) / 16f);
		}
		if (MISC::ABSF((uParam0->f_17 - uParam0->f_26)) < 0.0025f)
		{
			uParam0->f_17 = uParam0->f_26;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, false);
			}
		}
	}
	if ((uParam0->f_18 != uParam0->f_27 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_18 = uParam0->f_27;
		}
		else
		{
			uParam0->f_18 = (((uParam0->f_18 * 19f) + uParam0->f_27) / 20f);
		}
		if (MISC::ABSF((uParam0->f_18 - uParam0->f_27)) < 0.0025f)
		{
			uParam0->f_18 = uParam0->f_27;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, false);
			}
		}
	}
	if ((uParam0->f_19 != uParam0->f_28 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_19 = uParam0->f_28;
		}
		else
		{
			uParam0->f_19 = (((uParam0->f_19 * 19f) + uParam0->f_28) / 20f);
		}
		if (MISC::ABSF((uParam0->f_19 - uParam0->f_28)) < 0.0025f)
		{
			uParam0->f_19 = uParam0->f_28;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smolder", uParam0->f_19, false);
			}
		}
	}
	if (uParam0->f_18 < 0f)
	{
		uParam0->f_18 = 0f;
	}
	if (uParam0->f_18 > 1f)
	{
		uParam0->f_18 = 1f;
	}
	if (uParam0->f_12 < 0f)
	{
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 > 1f)
	{
		uParam0->f_12 = 1f;
	}
	if (uParam0->f_11 < 0.5f)
	{
		uParam0->f_11 = 0.5f;
	}
	if (uParam0->f_11 > 1f)
	{
		uParam0->f_11 = 1f;
	}
	if (bVar0)
	{
		uParam0->f_35 = 0;
	}
}

void func_106(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 0.9f;
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0.9f;
			uParam0->f_24 = 0.99f;
			uParam0->f_25 = 1f;
			uParam0->f_26 = 0.75f;
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
		case 1:
			uParam0->f_20 = 0.66f;
			uParam0->f_21 = 0.66f;
			uParam0->f_22 = 0.6f;
			uParam0->f_23 = 0.5f;
			uParam0->f_24 = 0.88f;
			uParam0->f_25 = 0.66f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0.66f;
			uParam0->f_28 = 0f;
			break;
		case 2:
			uParam0->f_20 = 0.25f;
			uParam0->f_21 = 0.25f;
			uParam0->f_22 = 0.25f;
			uParam0->f_23 = 0.25f;
			uParam0->f_24 = 0.77f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.2f;
			uParam0->f_28 = 0f;
			break;
		case 3:
			uParam0->f_20 = 0.2f;
			uParam0->f_21 = 0.1f;
			uParam0->f_22 = 0.22f;
			uParam0->f_23 = 0.1f;
			uParam0->f_24 = 0.66f;
			uParam0->f_25 = 0.1f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.1f;
			uParam0->f_28 = 0f;
			break;
		case 4:
			uParam0->f_20 = 0.15f;
			uParam0->f_21 = 0.01f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.018f;
			uParam0->f_24 = 0.55f;
			uParam0->f_25 = 0.005f;
			uParam0->f_26 = 0.25f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0.6f;
			break;
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
		case 7:
			uParam0->f_20 = 0.4f;
			uParam0->f_21 = 0.2f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.02f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0f;
			break;
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0.06f;
			uParam0->f_22 = 0.1f;
			uParam0->f_23 = 0.01f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}
}

void func_107()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

int func_108()
{
	int iVar0;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	switch (iVar0)
	{
		case joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC"):
			return 9;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"):
			return 3;
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"):
			return 6;
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"):
			return 8;
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"):
			return 7;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COFFEE_ARTHUR"):
			return 1;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"):
			return 4;
		default:
			break;
	}
	return 0;
}

char* func_109(int iParam0)
{
	return "CAMPFIRE";
}

bool func_110(int iParam0, float fParam1)
{
	if (!PED::_0x68821369A2CEADD5(Global_35, iParam0))
	{
		PED::_0xD65FDC686A031C83(Global_35, iParam0, fParam1);
		PED::_0x6D07B371E9439019(Global_35);
		return false;
	}
	return true;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HAWK_01"):
		case joaat("A_C_CORMORANT_01"):
		case joaat("A_C_SONGBIRD_01"):
		case joaat("A_C_ORIOLE_01"):
		case joaat("A_C_ROBIN_01"):
		case joaat("A_C_ROSEATESPOONBILL_01"):
		case joaat("A_C_SPARROW_01"):
		case joaat("A_C_OWL_01"):
		case joaat("A_C_RAVEN_01"):
		case joaat("A_C_CRANEWHOOPING_01"):
		case joaat("A_C_REDFOOTEDBOOBY_01"):
		case joaat("A_C_CEDARWAXWING_01"):
		case joaat("A_C_SEAGULL_01"):
		case joaat("A_C_CROW_01"):
		case joaat("A_C_PIGEON"):
		case joaat("A_C_LOON_01"):
		case joaat("A_C_WOODPECKER_01"):
		case joaat("A_C_WOODPECKER_02"):
		case joaat("A_C_EGRET_01"):
		case joaat("A_C_HERON_01"):
		case joaat("A_C_VULTURE_01"):
		case joaat("A_C_CALIFORNIACONDOR_01"):
		case joaat("A_C_EAGLE_01"):
		case joaat("A_C_BLUEJAY_01"):
		case joaat("A_C_CARDINAL_01"):
			return joaat("CONSUMABLE_GAMEY_BIRD_COOKED");
		case joaat("A_C_ARMADILLO_01"):
		case joaat("A_C_SNAKEREDBOA_01"):
		case joaat("A_C_CHIPMUNK_01"):
		case joaat("A_C_POSSUM_01"):
		case joaat("A_C_SKUNK_01"):
		case joaat("A_C_BADGER_01"):
		case joaat("A_C_MUSKRAT_01"):
		case joaat("A_C_SNAKEWATER_01"):
		case joaat("A_C_FOX_01"):
		case joaat("A_C_COYOTE_01"):
		case joaat("A_C_SNAKE_01"):
		case joaat("A_C_BEAVER_01"):
		case joaat("A_C_SNAKEBLACKTAILRATTLE_01"):
		case joaat("A_C_RAT_01"):
		case joaat("A_C_RACCOON_01"):
		case joaat("A_C_SNAKEFERDELANCE_01"):
		case joaat("A_C_SQUIRREL_01"):
			return joaat("CONSUMABLE_STRING_MEAT_COOKED");
		case joaat("A_C_IGUANA_01"):
		case joaat("A_C_TURTLESEA_01"):
		case joaat("A_C_FROGBULL_01"):
		case joaat("A_C_IGUANADESERT_01"):
		case joaat("A_C_TURTLESNAPPING_01"):
		case joaat("A_C_TOAD_01"):
			return joaat("CONSUMABLE_HERPTILE_MEAT_COOKED");
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			return joaat("CONSUMABLE_GRITTY_FISH_MEAT_COOKED");
		case joaat("A_C_BIGHORNRAM_01"):
		case joaat("A_C_GOAT_01"):
		case joaat("A_C_SHEEP_01"):
			return joaat("CONSUMABLE_GRISTLY_MUTTON_COOKED");
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHMUSKIE_01_LG"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
			return joaat("CONSUMABLE_FLAKEY_FISH_COOKED");
		case joaat("A_C_CHICKEN_01"):
		case joaat("A_C_TURKEYWILD_01"):
		case joaat("A_C_TURKEY_01"):
		case joaat("A_C_TURKEY_02"):
		case joaat("A_C_GOOSECANADA_01"):
		case joaat("A_C_ROOSTER_01"):
		case joaat("A_C_PRAIRIECHICKEN_01"):
			return joaat("CONSUMABLE_PLUMP_BIRD_COOKED");
		case joaat("A_C_COW"):
		case joaat("A_C_BULL_01"):
		case joaat("A_C_OX_01"):
		case joaat("A_C_BUFFALO_01"):
			return joaat("CONSUMABLE_PRIME_BEEF_COOKED");
		case joaat("A_C_ELK_01"):
		case joaat("A_C_BUCK_01"):
		case joaat("A_C_MOOSE_01"):
		case joaat("A_C_DEER_01"):
		case joaat("A_C_PRONGHORN_01"):
			return joaat("CONSUMABLE_MATURE_VENISON_COOKED");
		case joaat("A_C_PIG_01"):
		case joaat("A_C_JAVELINA_01"):
		case joaat("A_C_BOAR_01"):
			return joaat("CONSUMABLE_TENDER_PORK_COOKED");
		case joaat("A_C_DUCK_01"):
		case joaat("A_C_RABBIT_01"):
		case joaat("A_C_PHEASANT_01"):
		case joaat("A_C_QUAIL_01"):
			return joaat("CONSUMABLE_GAME_MEAT_COOKED");
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
			return joaat("CONSUMABLE_SUCCULENT_FISH_COOKED");
		case joaat("A_C_PARROT_01"):
		case joaat("A_C_PELICAN_01"):
		case joaat("A_C_CAROLINAPARAKEET_01"):
			return joaat("CONSUMABLE_EXOTIC_BIRD_COOKED");
		case joaat("A_C_ALLIGATOR_01"):
		case joaat("A_C_ALLIGATOR_02"):
		case joaat("A_C_ALLIGATOR_03"):
		case joaat("A_C_WOLF"):
		case joaat("A_C_BEAR_01"):
		case joaat("A_C_WOLF_MEDIUM"):
		case joaat("A_C_WOLF_SMALL"):
		case joaat("A_C_COUGAR_01"):
		case joaat("A_C_BEARBLACK_01"):
		case joaat("A_C_PANTHER_01"):
			return joaat("CONSUMABLE_BIG_GAME_MEAT_COOKED");
		case joaat("A_C_CRAB_01"):
			return joaat("CONSUMABLE_CRUSTACEAN_MEAT_COOKED");
	}
	return 0;
}

bool func_112()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1911914.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_35, "player_crafting_active", bParam0);
}

void func_114(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_69, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_70, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_71, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_72, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));
	}
}

void func_115(int iParam0)
{
	Global_17504.f_1++;
	Global_17504.f_42[iParam0 /*8*/].f_2++;
	Global_1310750[iParam0 /*111*/].f_110 |= 1;
}

void func_116(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	Global_1310750.f_13321[iParam1 /*9*/] = iParam0;
	Global_1310750[iParam0 /*111*/].f_48 = 1;
}

void func_117(var uParam0)
{
	uParam0->f_18 = 1;
}

bool func_118(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, 1f, 1f, 1f);
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iVar0, *uParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (ENTITY::IS_ENTITY_A_PED(iVar4))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (iVar5 != Global_35)
			{
				if (PED::_GET_CARRIER_AS_PED(iVar5) != Global_35)
				{
					__LIB_0__::func_172(iVar0);
					return true;
				}
			}
		}
		iVar2++;
	}
	__LIB_0__::func_172(iVar0);
	return false;
}

bool func_119()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	if (((((iVar0 == joaat("RAIN") || iVar0 == joaat("SHOWER")) || iVar0 == joaat("SLEET")) || iVar0 == joaat("HURRICANE")) || iVar0 == joaat("THUNDERSTORM")) || iVar0 == joaat("THUNDER"))
	{
		return true;
	}
	iVar1 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	if (((((iVar1 == joaat("RAIN") || iVar1 == joaat("SHOWER")) || iVar1 == joaat("SLEET")) || iVar1 == joaat("HURRICANE")) || iVar1 == joaat("THUNDERSTORM")) || iVar1 == joaat("THUNDER"))
	{
		return true;
	}
	iVar2 = __LIB_1__::func_898();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return true;
	}
	return false;
}

void func_120(int iParam0, struct<7> Param1)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1224227.f_1[iVar0 /*9*/].f_1 == 1 || Global_1224227.f_1[iVar0 /*9*/].f_1 == 5)
			{
				Global_1224227.f_1[iVar0 /*9*/].f_2 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_121(int iParam0)
{
	return 0 == iParam0;
}

void func_122(var uParam0, char* sParam1)
{
	int iVar0;
	if (__LIB_0__::func_139(*uParam0))
	{
		iVar0 = __LIB_0__::func_17(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_TAG(Global_1945938[iVar0 /*18*/].f_3, sParam1);
		}
	}
}

bool func_123()
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.9f * 0.9f))
	{
		return true;
	}
	return false;
}

bool func_124(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4)
{
	PED::_0x6D07B371E9439019(Global_35);
	return TASK::_0x79197F7D2BB5E73A(uParam0, uParam1, sParam2, sParam3, sParam4, 0);
}

char* func_125()
{
	int iVar0;
	iVar0 = __LIB_2__::func_954();
	if (__LIB_0__::func_644(524288))
	{
		return "01Clear";
	}
	switch (iVar0)
	{
		case joaat("SANDSTORM"):
		case joaat("OVERCASTDARK"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			return "04Storm";
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("OVERCAST"):
		case joaat("FOG"):
		case joaat("SHOWER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
			return "03Clouds";
		case joaat("HIGHPRESSURE"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
		case joaat("SNOWCLEARING"):
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

void func_126(var uParam0)
{
	StringCopy(&(uParam0->f_17), "CAMP", 8);
}

bool func_127(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (__LIB_0__::func_192(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

float func_128(float fParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	bVar0 = fParam0 >= 0f;
	iVar1 = BUILTIN::FLOOR(BUILTIN::POW(10f, BUILTIN::TO_FLOAT(iParam1)));
	fVar2 = (fParam0 * IntToFloat(iVar1));
	if (bParam2)
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::CEIL(fVar2));
	}
	else
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fVar2));
	}
	fVar3 = (fVar2 / IntToFloat(iVar1));
	if (fVar3 < 0f && bVar0)
	{
		fVar3 = (fVar3 * -1f);
	}
	return fVar3;
}

bool func_129(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

bool func_130(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 183)
	{
		return true;
	}
	return false;
}

bool func_131(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return true;
	}
	return false;
}

void func_132(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		uParam0->f_69 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_69);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		uParam0->f_70 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_70);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		uParam0->f_71 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_71);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		uParam0->f_72 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_72);
	}
}

int func_133(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			return Global_1224227.f_1[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_134(var uParam0)
{
	uParam0->f_18 = 0;
}

void func_135(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_40))
	{
		uParam0->f_40 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40);
	}
	uParam0->f_76 = 600942249;
	uParam0->f_75 = 0;
	uParam0->f_74 = 0;
}

void func_136(var uParam0, bool bParam1)
{
	int iVar0;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(uParam0->f_9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

char* func_137(var uParam0)
{
	if (uParam0->f_57)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

void func_138(var uParam0)
{
	int iVar0;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_51);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[iVar0], "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[iVar0], "inUse", 0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", 0);
}

bool func_139(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

int func_140(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_65;
		case -732326901:
			return uParam0->f_68;
		case -1136843638:
			return uParam0->f_66;
		case 786205940:
			return uParam0->f_67;
		case -1141771998:
			return uParam0->f_69;
		case 364689687:
			return uParam0->f_70;
		case 414472632:
			return uParam0->f_63;
		case -842117252:
			return uParam0->f_71;
		case -1610298873:
			return uParam0->f_72;
		default:
			break;
	}
	return 0;
}

char* func_141(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_142(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

void func_145(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_39, cParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

char* func_146(var uParam0)
{
	return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
}

char* func_147(var uParam0)
{
	return "craft_trans_stow";
}

int func_148(int iParam0)
{
	struct<19> Var0;
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_149(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", 0);
}

int func_150(int iParam0)
{
	int iVar0;
	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return joaat("S_AMMO_9MM");
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return joaat("S_AMMO_45MM");
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return joaat("S_AMMO_RIFLE");
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return joaat("S_AMMO_REPEATER");
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return joaat("S_AMMO_SHOTGUN");
	}
	return 0;
}

Vector3 func_151(int iParam0)
{
	int iVar0;
	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

bool func_152(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return false;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return false;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_153(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_154(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 1064293907))
	{
		return 2;
	}
	else if (__LIB_0__::func_192(iParam0, -1218707194))
	{
		return 1;
	}
	else if (__LIB_0__::func_192(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_155(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (__LIB_0__::func_144(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

void func_156(int iParam0)
{
	__LIB_0__::func_375(*iParam0);
	*iParam0 = -1;
}

bool func_157(int iParam0)
{
	if (__LIB_0__::func_644(4096))
	{
		if (__LIB_0__::func_372(iParam0, 1697966752) != 337650881)
		{
			return false;
		}
	}
	else if (__LIB_0__::func_644(8192))
	{
		if (iParam0 != joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
		{
			return false;
		}
	}
	return true;
}

void func_158(int iParam0)
{
	Global_1935689.f_11 = iParam0;
}

void func_159(int iParam0)
{
	Global_1935689.f_10 = iParam0;
}

bool func_160()
{
	if ((__LIB_0__::func_27(Global_1935689.f_10186, 1) || __LIB_0__::func_27(Global_1935689.f_10186, 2)) || __LIB_0__::func_27(Global_1935689.f_10186, 4))
	{
		return true;
	}
	return false;
}

float func_161()
{
	if (__LIB_0__::func_1(Global_1935630, 2097152) || __LIB_0__::func_12() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

void func_162()
{
	if (__LIB_0__::func_144(joaat("WEAPON_KIT_BINOCULARS"), 0))
	{
		__LIB_3__::func_65(32);
	}
	if (__LIB_0__::func_144(joaat("WEAPON_KIT_CAMERA"), 0))
	{
		__LIB_3__::func_65(64);
	}
}

bool func_163()
{
	return (((!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")) && !Global_1898068.f_4) && !__LIB_7__::func_729()) && UIAPPS::_CAN_LAUNCH_APP_BY_HASH(joaat("FAST_TRAVEL_MENU")));
}

bool func_164(int iParam0)
{
	if (__LIB_0__::func_356(iParam0) == joaat("CONSUMABLE") && INVENTORY::_0x245D07651B1D183B(iParam0, 16777216))
	{
		return true;
	}
	return false;
}

void func_165(var uParam0, bool bParam1)
{
	__LIB_4__::func_517(0);
	if (bParam1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("CRAFTING"));
		}
	}
	else
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("CRAFTING"));
	}
	uParam0->f_58 = 0;
	__LIB_4__::func_226(8);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

int func_166(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return __LIB_9__::func_686(iVar0);
}

int func_167(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, iParam0, false))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) || __LIB_0__::func_237(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<2> func_168(int iParam0)
{
	return __LIB_0__::func_38(joaat("MADE"), iParam0);
}

struct<16> func_169(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	struct<16> Var0;
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { __LIB_0__::func_429(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	return Var0;
}

int func_170(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_586(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return joaat("P_REDEFLESHYMEAT01XB");
}

bool func_171()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_398(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (__LIB_0__::func_232(Global_35, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

bool func_172(var uParam0, bool bParam1)
{
	int iVar0;
	uParam0->f_58 = 1;
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("CRAFTING")))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1014850361))
		{
			__LIB_4__::func_517(1);
			__LIB_4__::func_229(8);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(joaat("CRAFTING"));
		if (iVar0 == 0)
		{
			__LIB_4__::func_229(8);
			__LIB_4__::func_517(1);
			__LIB_0__::func_597(0, -100);
			__LIB_0__::func_597(2, -100);
			__LIB_0__::func_597(1, -100);
			return true;
		}
	}
	return false;
}

void func_173(bool bParam0)
{
	int iVar0;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	iVar0 = __LIB_2__::func_825(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}
}

void func_174(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_139((*uParam0)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (__LIB_0__::func_139((*uParam2)[iVar1]))
				{
					if ((*uParam0)[iVar0] == (*uParam2)[iVar1])
					{
					}
				}
				iVar1++;
			}
			__LIB_1__::func_221((*uParam0)[iVar0], bParam1, 1);
		}
		iVar0++;
	}
}

int func_175(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (!NETWORK::_0x271F95E55C663B8B(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = bParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	__LIB_8__::func_986(uParam1, iParam0, Var1);
	return 1;
}

void func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = __LIB_9__::func_815(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == iParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else
			{
				__LIB_7__::func_642(iVar1, &iVar17, &uVar18, &iVar16, &uVar19);
				if (__LIB_2__::func_999(&iVar15, iVar1, iVar16, iVar17) && iVar15 == iParam0)
				{
					ENTITY::_DELETE_CARRIABLE(&iVar0);
				}
			}
		}
	}
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

void func_178(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == joaat("COST_TYPE_CRAFT") && Var1 != -489628648) && (Global_1911914.f_1579 || !__LIB_1__::func_114(iParam1, Var1, 1)))
				{
					Global_1911914[(uParam0->f_55 - 1) /*9*/].f_7++;
				}
			}
			else
			{
				Global_1911914[(uParam0->f_55 - 1) /*9*/].f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_179(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	iVar2 = __LIB_0__::func_372(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar2, 0) };
	if (__LIB_0__::func_778(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = __LIB_0__::func_374(iVar13, iVar0);
			if (__LIB_0__::func_144(iVar14, 0))
			{
				if (Global_1911914.f_1579 || !__LIB_1__::func_114(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
					Global_1911914[(uParam0->f_55 - 1) /*9*/].f_7++;
				}
			}
			iVar13++;
		}
		__LIB_0__::func_375(iVar0);
	}
}

int func_180(bool bParam0)
{
	if (!bParam0 && __LIB_0__::func_898(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(false, 0);
		LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), true, 0);
		return 0;
	}
	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

void func_181(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						iVar0 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/].f_2;
						if (__LIB_0__::func_83(iVar0))
						{
							if (__LIB_8__::func_617(iVar0))
							{
								__LIB_9__::func_983(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

char* func_182(int iParam0)
{
	if (__LIB_0__::func_644(524288))
	{
		return "0600_";
	}
	if (iParam0 == -1)
	{
		if (__LIB_4__::func_503(23, 2))
		{
			return "0000_";
		}
		else if (__LIB_4__::func_503(2, 5))
		{
			return "0300_";
		}
		else if (__LIB_4__::func_503(5, 8))
		{
			return "0600_";
		}
		else if (__LIB_4__::func_503(8, 11))
		{
			return "0900_";
		}
		else if (__LIB_4__::func_503(11, 14))
		{
			return "1200_";
		}
		else if (__LIB_4__::func_503(14, 17))
		{
			return "1500_";
		}
		else if (__LIB_4__::func_503(17, 20))
		{
			return "1800_";
		}
		else if (__LIB_4__::func_503(20, 23))
		{
			return "2100_";
		}
		else
		{
			return "1200_";
		}
	}
	switch (iParam0)
	{
		case 0:
			if (__LIB_1__::func_985())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (__LIB_1__::func_985())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (__LIB_1__::func_985())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (__LIB_1__::func_985())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

void func_183(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!__LIB_6__::func_338(471747275))
	{
		Global_40.f_4283.f_307.f_1 = (Global_40.f_4283.f_307.f_1 + iParam0);
		if (Global_40.f_4283.f_307.f_1 >= 3)
		{
			__LIB_6__::func_339(471747275);
		}
	}
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else if (__LIB_9__::func_823(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_185(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_1__::func_614(iParam0, bParam1, 0);
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

bool func_186(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (__LIB_0__::func_627(iVar0, 0))
		{
			if (BUILTIN::VDIST(__LIB_1__::func_440(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_187(float fParam0, bool bParam1)
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
			__LIB_1__::func_446(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		__LIB_7__::func_845(&fVar3, &fVar4);
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

bool func_188(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = __LIB_0__::func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = __LIB_1__::func_710(iParam1);
	if (iVar4 == -358215195)
	{
		*iParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*iParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*iParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*iParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*iParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*iParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*iParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_549(1868067663, &uVar0))
			{
				*iParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*iParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*iParam2 = 2143522536;
						return false;
					}
				}
			}
			*iParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_189(int iParam0, bool bParam1, bool bParam2)
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
		bParam1 = __LIB_3__::func_961(iParam0);
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

void func_190(int iParam0, bool bParam1, int iParam2)
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
				__LIB_7__::func_655(iParam0, __LIB_4__::func_816(iParam0), 0, 0);
			}
		}
		else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				__LIB_7__::func_655(iParam0, __LIB_1__::func_440(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
		}
	}
}

void func_191(int iParam0)
{
	struct<16> Var0;
	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	__LIB_9__::func_193(Var0, __LIB_10__::func_931(0, 15), 0, 0);
}

void func_192(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			__LIB_11__::func_106(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			__LIB_11__::func_106(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			__LIB_11__::func_106(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			__LIB_11__::func_106(43, 0, 0, joaat("EXOTIC_STAGE_01"), __LIB_1__::func_803(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			__LIB_11__::func_106(43, 0, 0, joaat("EXOTIC_STAGE_02"), __LIB_1__::func_803(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			__LIB_11__::func_106(43, 0, 0, joaat("EXOTIC_STAGE_03"), __LIB_1__::func_803(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			__LIB_11__::func_106(43, 0, 0, joaat("EXOTIC_STAGE_04"), __LIB_1__::func_803(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			__LIB_11__::func_106(43, 0, 0, joaat("EXOTIC_STAGE_05"), __LIB_1__::func_803(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_193(int iParam0)
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
	__LIB_11__::func_106(39, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_194(int iParam0)
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
	__LIB_11__::func_106(49, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_195(int iParam0, int iParam1)
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
						__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
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
						__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
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
						__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
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
						__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
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
						__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_196(int iParam0)
{
	if (__LIB_1__::func_510(32))
	{
		return;
	}
	__LIB_1__::func_511(32);
	if (__LIB_2__::func_365(Global_35))
	{
		Global_1935496.f_7 |= 1;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1);
	}
	if (__LIB_3__::func_996(Global_35))
	{
		Global_1935496.f_7 |= 2;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2);
	}
	if (__LIB_0__::func_491(Global_35, 713668775))
	{
		Global_1935496.f_7 |= 4;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4);
	}
	if (__LIB_1__::func_376(Global_35))
	{
		Global_1935496.f_7 |= 8;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8);
	}
	if (__LIB_11__::func_578(0, 1))
	{
		Global_1935496.f_7 |= 16;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16);
	}
	if (!__LIB_7__::func_814(0))
	{
		Global_1935496.f_7 |= 32;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32);
	}
	if (!__LIB_7__::func_815(0))
	{
		Global_1935496.f_7 |= 512;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 512);
	}
	if (!__LIB_7__::func_816(0))
	{
		Global_1935496.f_7 |= 8192;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8192);
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, true))
	{
		Global_1935496.f_7 |= 16384;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16384);
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		Global_1935496.f_7 |= 32768;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32768);
	}
	if (__LIB_0__::func_2() == 0 && PED::_0xB655DB7582AEC805(Global_35))
	{
		Global_1935496.f_7 |= 131072;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 131072);
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496.f_7 |= 256;
	}
	else if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1935496.f_7 |= 256;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 256);
	}
	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
	{
		Global_1935496.f_7 |= 1024;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1024);
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496.f_7 |= 4096;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4096);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || __LIB_0__::func_491(Global_35, 1369124074))
	{
		Global_1935496.f_7 |= 128;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 |= 33554432;
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL"))
		{
			Global_1935496.f_7 |= 67108864;
		}
		else
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 33554432);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496.f_7 |= 65536;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496.f_7 |= 64;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496.f_7 |= 1048576;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1048576);
	}
	if (__LIB_7__::func_826(iParam0, 0))
	{
		Global_1935496.f_7 |= 524288;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 524288);
	}
	if (__LIB_7__::func_827(iParam0, 0))
	{
		Global_1935496.f_7 |= 262144;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 262144);
	}
	if (__LIB_1__::func_869(Global_35))
	{
		Global_1935496.f_7 |= 4194304;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4194304);
	}
	if (__LIB_7__::func_593())
	{
		Global_1935496.f_7 |= 16777216;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (__LIB_0__::func_125(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("A_C_HORSEMULE_01"):
				case joaat("A_C_HORSEMULEPAINTED_01"):
				case joaat("A_C_DONKEY_01"):
					Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
					break;
				default:
					Global_1935496.f_7 |= 134217728;
					break;
			}
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 149557334))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
	}
	if (((((__LIB_0__::func_2() == -1 && __LIB_4__::func_635(32768)) || __LIB_7__::func_781()) || __LIB_9__::func_994()) || (__LIB_2__::func_776() && !__LIB_7__::func_770())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2097152);
	}
	else
	{
		Global_1935496.f_7 |= 2097152;
	}
	if (Global_1900073.f_17 && __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_FISHINGROD"))
	{
		Global_1935496.f_7 |= 8388608;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8388608);
	}
}

void func_197(int iParam0, int iParam1)
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
							__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
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
							__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
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
							__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
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
							__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
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
							__LIB_11__::func_106(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_198(int iParam0)
{
	if (__LIB_0__::func_356(iParam0) == joaat("EMOTE"))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iParam0, __LIB_4__::func_807(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			if (!Global_1392040.f_2)
			{
				__LIB_11__::func_578(1, 1);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("KIT_HANDHELD_CATALOG"):
			__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, 163043886 /* GXTEntry: "You are not allowed to use Handheld Catalogue at the moment." */, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

void func_199(int iParam0, var uParam1)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0], &(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar0]), 1);
		iVar0++;
	}
}

int func_200(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_10;
}

int func_201()
{
	return Global_1900383.f_378;
}

bool func_202(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return false;
	}
	if (FLOCK::_0x3B005FF0538ED2A9(iParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_203()
{
	return Global_1900372.f_5;
}

int func_204()
{
	return Global_1900372.f_1;
}

int func_205(int iParam0, int iParam1)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/];
}

void func_206(int iParam0)
{
	Global_1935689.f_18 = iParam0;
}

void func_207(int iParam0)
{
	Global_1900383.f_444.f_3 = iParam0;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
			return 50;
	}
	return 0;
}

void func_209(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, 7, iParam1);
}

Vector3 func_210(var uParam0)
{
	return uParam0->f_3.f_3;
}

void func_211(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(uParam0[iVar0], &(Global_40.f_1095.f_3054.f_3[iVar0]), 1);
		iVar0++;
	}
}

void func_212(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_1095.f_3054.f_3[iVar0]), uParam0[iVar0], 1);
		iVar0++;
	}
}

void func_213(int iParam0, var uParam1)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar0]), uParam1[iVar0], 1);
		iVar0++;
	}
}

void func_214(int iParam0, var uParam1)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*5*/], &(Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar0 /*5*/]), 5);
		iVar0++;
	}
}

void func_215(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(uParam0[iVar0 /*5*/], &(Global_40.f_1095.f_3054.f_61[iVar0 /*5*/]), 5);
		iVar0++;
	}
}

int func_216(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if ((*uParam0)[iVar1 /*5*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_217(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_1095.f_3054.f_61[iVar0 /*5*/]), uParam0[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_218(int iParam0, var uParam1)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar0 /*5*/]), uParam1[iVar0 /*5*/], 5);
		iVar0++;
	}
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_01");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_02");
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_03");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_04");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_05");
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_06");
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_07");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_08");
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_09");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_10");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_11");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_12");
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_13");
		default:
			break;
	}
	return 0;
}

void func_220(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_221(int iParam0)
{
	var uVar0[3];
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar0[iVar5] = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar5);
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar6 = uVar0[iVar5];
		if (iVar6 == 0)
		{
		}
		else
		{
			PED::_0x627F7F3A0C4C51FF(iParam0, uVar0[iVar5]);
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar4 = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar5);
		uVar7 = uVar4;
		iVar5++;
	}
}

var func_222(int iParam0)
{
	var uVar0;
	uVar0 = Global_1900383.f_393.f_8[iParam0];
	return uVar0;
}

void func_223(var uParam0)
{
	__LIB_0__::func_611(uParam0);
	__LIB_0__::func_19(uParam0, 0);
	__LIB_0__::func_115(uParam0, 0);
	__LIB_0__::func_612(uParam0, 0);
	__LIB_0__::func_613(uParam0, 0);
	__LIB_0__::func_614(uParam0, 0);
	__LIB_0__::func_615(uParam0, 0);
}

void func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = __LIB_11__::func_454();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, iVar0, 0);
	iVar1 = __LIB_9__::func_816();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, iVar1, 0);
	PED::_0xDE1B1907A83A1550(iParam0, 1f);
	PED::_0x345C9F993A8AB4A4(iParam0, 1f);
	PED::_0xEF5A3D2285D8924B(iParam0, 1f);
}

float func_225(int iParam0)
{
	int iVar0;
	float fVar1;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return 0f;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	fVar1 = __LIB_5__::func_985(iVar0);
	return fVar1;
}

void func_226(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_498(uParam2);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = 0;
		iVar1 = (iVar1 + (*uParam0)[iVar0]);
		iVar1 = (iVar1 + (*uParam1)[iVar0]);
		iVar1 = __LIB_0__::func_309(iVar1, 0, 10);
		(*uParam2)[iVar0] = iVar1;
		iVar0++;
	}
}

void func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/];
		if (__LIB_0__::func_144(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/].f_1;
			uVar5 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/].f_2;
			PED::_0xC412AA1C73111FE0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

bool func_228(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7)
{
	bool bVar0;
	var uVar1;
	float fVar2;
	bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bParam6)
	{
		if (__LIB_7__::func_432(vParam0 + Vector(0.2f, 0f, 0f)))
		{
			return false;
		}
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1f, 0f, 0f), &uVar1, false))
	{
		return false;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
	{
		return false;
	}
	if (bVar0)
	{
	}
	else
	{
		if (bParam7)
		{
			if (vParam0.z > (vParam3.z + 10f))
			{
				return false;
			}
		}
		fVar2 = BUILTIN::VDIST(vParam0, vParam3);
		if (fVar2 > 40f && fVar2 < 80f)
		{
			return true;
		}
	}
	return false;
}

void func_229(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!__LIB_8__::func_622(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = __LIB_12__::func_141(iParam1);
	sVar2 = __LIB_12__::func_142(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		if (iVar3 <= 20)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iParam0, sVar2, true, -1);
		}
		else
		{
			PED::_0xA6F67BEC53379A32(iParam0, sVar2);
		}
	}
}

void func_230()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 1;
	if (__LIB_0__::func_815(0) == 1)
	{
	}
	if (__LIB_0__::func_815(1) == 1)
	{
		iVar0++;
	}
	if (__LIB_0__::func_815(5) == 1)
	{
		iVar0++;
	}
	if (__LIB_0__::func_815(6) == 1)
	{
		iVar0++;
	}
	iVar0 = (iVar0 + __LIB_11__::func_991(0));
	iVar0 = (iVar0 + __LIB_11__::func_991(1));
	iVar1 = PED::_0x62DE46F061CAA468();
	if (iVar0 > iVar1)
	{
		iVar2 = (iVar0 - iVar1);
		PED::_0xF008E0BA1FE1D644(iVar2);
	}
	else if (iVar0 < iVar1)
	{
		iVar3 = (iVar1 - iVar0);
		PED::_0x7D4E70A67A651C71(iVar3);
	}
}

void func_231(int iParam0, float fParam1)
{
	char* sVar0;
	bool bVar1;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		case 1:
		case 2:
		case 3:
			return;
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 11:
		case 12:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 13:
		case 14:
		case 15:
			sVar0 = "HORSE_XP_FED";
			break;
		case 16:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 17:
		case 18:
		case 19:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 20:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
		case 10:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 21:
		case 22:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	__LIB_2__::func_368(sVar0, "ITEMTYPE_TEXTURES", joaat("TRANSACTION_HORSE_BOND"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

int func_232(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_265(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_233(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	int iVar0;
	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			__LIB_7__::func_438(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				__LIB_5__::func_730(&(iParam3->f_1), iParam5);
				if (!__LIB_0__::func_86(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, __LIB_0__::func_173(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_234(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return __LIB_7__::func_633(iParam0);
	}
	if (__LIB_7__::func_634(iParam0, iParam1))
	{
		return 0;
	}
	return __LIB_7__::func_680(iParam0, iParam1);
}

void func_235(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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
			iParam0 = __LIB_0__::func_934(iParam0);
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
		__LIB_3__::func_363(Global_40.f_11095.f_35);
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
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
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
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
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
		__LIB_3__::func_720(10, 1);
	}
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	Var0 = { __LIB_5__::func_96(iParam0) };
	Var5 = { __LIB_3__::func_0(iParam0, iParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		if (__LIB_0__::func_192(iParam1, -839724752) && __LIB_0__::func_774(iParam1, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam1);
			}
		}
		return 1;
	}
	return 0;
}

void func_237(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
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
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	iVar2 = __LIB_9__::func_812(iVar1);
	if (DECORATOR::DECOR_EXIST_ON(iVar0, "HorseGender"))
	{
		iVar3 = DECORATOR::DECOR_GET_INT(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = __LIB_5__::func_773(iVar0);
		DECORATOR::DECOR_SET_INT(iVar0, "HorseGender", iVar3);
	}
	__LIB_0__::func_811(iParam0, iVar1);
	__LIB_0__::func_810(iParam0, iVar2);
	__LIB_0__::func_812(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = MISC::GET_GAME_TIMER();
		iVar5 = __LIB_0__::func_23();
	}
	__LIB_11__::func_455(iParam0, iParam1);
	__LIB_11__::func_456(iParam0, iVar4);
	__LIB_11__::func_457(iParam0, iVar5);
	iVar6 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(iVar0, 7));
	__LIB_2__::func_226(iParam0, iVar6);
	__LIB_6__::func_144(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (__LIB_9__::func_368(iVar8, &iVar9))
		{
			iVar10 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, iVar9);
			__LIB_11__::func_459(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

int func_238(int iParam0, int iParam1)
{
	if (Global_1899528.f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	return Global_1899528.f_61.f_101[iParam1];
}

bool func_239(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*iParam0 = joaat("P_CHIPS_BLA01X");
			return true;
		case 1:
			*iParam0 = joaat("P_CHIPS_CAMP01X");
			return true;
		case 2:
			*iParam0 = joaat("P_CHIPS_GAR_KOR01X");
			return true;
		case 3:
			*iParam0 = joaat("P_CHIPS05X10_RHO");
			return true;
		case 4:
			*iParam0 = joaat("P_CHIPS_FLA01X");
			return true;
		case 5:
			*iParam0 = joaat("P_CHIPS_LA_BAS01X");
			return true;
		case 6:
			*iParam0 = joaat("P_CHIPS_OPI01X");
			return true;
		case 7:
			*iParam0 = joaat("P_CHIPS_VAL01X");
			return true;
		case 8:
			*iParam0 = joaat("P_CHIPS_VAL01X");
			return true;
		default:
			break;
	}
	return false;
	return false;
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1899528.f_61.f_1 = uParam0;
	if (iParam2 < 32)
	{
		Global_1899528.f_61.f_101[iParam2] = iParam1;
		Global_1899528.f_61.f_35[iParam2] = iParam3;
		Global_1899528.f_61.f_68[iParam2] = iParam4;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

int func_241(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	switch (iParam0)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 5;
			iVar0[2] = 10;
			iVar0[3] = 50;
			iVar0[4] = 100;
			iVar0[5] = 500;
			iVar11 = 6;
			iVar12 = 100;
			break;
		case 2:
		default:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 5;
			iVar0[3] = 10;
			iVar0[4] = 20;
			iVar0[5] = 50;
			iVar0[6] = 100;
			iVar0[7] = 200;
			iVar0[8] = 500;
			iVar11 = 9;
			iVar12 = 100;
			break;
	}
	iVar13 = (iVar11 - 1);
	while (iVar13 >= 0)
	{
		if ((iParam1 / iVar0[iVar13]) >= iVar12 && (iParam1 % iVar0[iVar13]) == 0)
		{
		}
		else
		{
			iVar13 = (iVar13 - 1);
		}
	}
	if (iVar13 < 0)
	{
		iVar13 = 0;
	}
	uVar14 = iVar0[iVar13];
	return uVar14;
}

bool func_242(var uParam0, char* sParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_11))
	{
		return false;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_11, MISC::GET_HASH_KEY(sParam1));
}

bool func_243(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("P_CARDSSPLIT01X_BLA");
			return true;
		case 1:
			*uParam0 = joaat("P_CARDSSPLIT01X_CAMP");
			return true;
		case 2:
			*uParam0 = joaat("P_CARDSSPLIT01X_GK");
			return true;
		case 3:
			*uParam0 = joaat("P_CARDSSPLIT01X_RHO");
			return true;
		case 4:
			*uParam0 = joaat("P_CARDSSPLIT01X_RRS");
			return true;
		case 5:
			*uParam0 = joaat("P_CARDSSPLIT01X_STD_LABASTILLE");
			return true;
		case 6:
			*uParam0 = joaat("P_CARDSSPLIT01X_STD_OPIUM");
			return true;
		case 7:
			*uParam0 = joaat("P_CARDSSPLIT01X_VAL");
			return true;
		case 8:
			*uParam0 = joaat("P_CARDSSPLIT01X_VAN");
			return true;
		default:
			break;
	}
	return false;
	return false;
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = 1f;
		}
		switch (iVar1)
		{
			case 0:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

void func_245(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 3);
			break;
		case 1:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 18);
			break;
		case 2:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 21);
			break;
		case 3:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 24);
			break;
		case 4:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 27);
			break;
		case 5:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 15);
			break;
		default:
			break;
	}
}

bool func_246(var uParam0, struct<2> Param1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_23)
	{
		if ((*uParam0)[iVar0 /*2*/] == Param1 && (uParam0[iVar0 /*2*/])->f_1 == Param1.f_1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_247(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
	}
	__LIB_7__::func_690(uParam0, uParam0->f_28);
}

int func_248(var uParam0, int iParam1)
{
	float fVar0;
	fVar0 = 1.5f;
	if (uParam0->f_1 == 2 || uParam0->f_1 == 0)
	{
		fVar0 = 2.5f;
	}
	return __LIB_7__::func_692(uParam0->f_3, fVar0, iParam1);
}

int func_249(var uParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_4)))
	{
		return 0;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
	{
		return 1;
	}
	if (!ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (bParam1)
	{
	}
	uParam0->f_2 = 0f;
	__LIB_7__::func_695(uParam0, 4);
	return 1;
}

int func_250(var uParam0)
{
	if (!__LIB_7__::func_694(uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(uParam0->f_11))
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_11))
	{
		return 0;
	}
	if (uParam0->f_16)
	{
		return 1;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_11))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0, float fParam1, int iParam2, var uParam3)
{
	float fVar0;
	if (!__LIB_1__::func_76(iParam0))
	{
		return 0;
	}
	if (!__LIB_7__::func_697(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	*uParam3 = (fParam1 + fVar0);
	if (*uParam3 > 360f)
	{
		*uParam3 = (*uParam3 - 360f);
	}
	if (*uParam3 < -360f)
	{
		*uParam3 = (*uParam3 + 360f);
	}
	return 1;
}

void func_252(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0)
		{
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			if (iVar0 == 0)
			{
				if (iParam0 <= __LIB_9__::func_944(iVar2) * 4)
				{
					iVar0 = 4;
					iVar1 = 0;
				}
				else if (iParam0 <= (__LIB_9__::func_944(iVar2) * 3 + __LIB_9__::func_944(iVar3) * 1))
				{
					iVar0 = 3;
					iVar1 = 1;
				}
				else if (iParam0 <= (__LIB_9__::func_944(iVar2) * 2 + __LIB_9__::func_944(iVar3) * 2))
				{
					iVar0 = 2;
					iVar1 = 2;
				}
				else if (iParam0 <= (__LIB_9__::func_944(iVar2) * 1 + __LIB_9__::func_944(iVar3) * 3))
				{
					iVar0 = 1;
					iVar1 = 3;
				}
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam1)[iVar4] = iVar2;
				}
				else
				{
					(*uParam1)[iVar4] = iVar3;
				}
				iVar4++;
			}
			iVar5 = __LIB_0__::func_259(iParam0, (iVar0 * __LIB_9__::func_944(iVar2)));
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar0);
					if (iVar4 < (iVar5 % iVar0))
					{
						(*uParam2)[iVar4]++;
					}
				}
				iVar4++;
			}
			iVar5 = (iParam0 - iVar5);
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 >= iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar1);
					if (iVar4 - iVar0) < (iVar5 % iVar1)
					{
						(*uParam2)[iVar4]++;
					}
				}
				iVar4++;
			}
		}
	}
}

int func_253(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	fVar0 = (BUILTIN::TO_FLOAT(__LIB_9__::func_944(iParam0)) / BUILTIN::TO_FLOAT(10));
	iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / fVar0));
	if (iParam2 != -1 && iVar1 > iParam2)
	{
		iVar1 = iParam2;
	}
	return iVar1;
}

bool func_254(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	uVar0 = 3;
	iVar4 = 0;
	if (__LIB_4__::func_890(iParam0))
	{
		return false;
	}
	__LIB_7__::func_710(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = (*uParam3)[iVar7];
		if (!__LIB_4__::func_891(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if ((*uParam3)[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam4)
		{
			iVar6 = (*uParam3)[iVar7];
			if (__LIB_4__::func_891(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam4)
				{
					if ((*uParam3)[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return false;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (__LIB_4__::func_891(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam4)
			{
				if ((*uParam3)[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam5 = iVar6;
					return true;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return false;
}

bool func_255(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	uVar0 = 3;
	iVar4 = 0;
	__LIB_7__::func_711(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = (*uParam2)[iVar7];
		if (!__LIB_4__::func_891(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if ((*uParam2)[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = (*uParam2)[iVar7];
			if (__LIB_4__::func_891(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if ((*uParam2)[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return false;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (__LIB_4__::func_891(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if ((*uParam2)[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam4 = iVar6;
					return true;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return false;
}

void func_256(int iParam0, var uParam1)
{
	iParam0->f_4 = uParam1;
	__LIB_1__::func_148(&(iParam0->f_1));
}

void func_257(var uParam0)
{
	__LIB_7__::func_716(uParam0, uParam0->f_11 + 1);
}

void func_258(var uParam0)
{
	__LIB_7__::func_717(uParam0, uParam0->f_3 + 1);
}

void func_259(var uParam0, int iParam1)
{
	uParam0->f_78 = iParam1;
}

void func_260(var uParam0, int iParam1)
{
	uParam0->f_80 = iParam1;
}

void func_261(var uParam0, int iParam1)
{
	uParam0->f_81 = iParam1;
}

void func_262(var uParam0, int iParam1)
{
	uParam0->f_100 = iParam1;
}

void func_263(var uParam0, int iParam1)
{
	uParam0->f_82 = iParam1;
}

void func_264(var uParam0, int iParam1)
{
	uParam0->f_83 = iParam1;
}

void func_265(var uParam0, int iParam1)
{
	uParam0->f_85 = iParam1;
}

void func_266(var uParam0, int iParam1)
{
	uParam0->f_86 = iParam1;
}

void func_267(var uParam0, int iParam1)
{
	uParam0->f_87 = iParam1;
}

void func_268(var uParam0, int iParam1)
{
	uParam0->f_88 = iParam1;
}

void func_269(var uParam0, int iParam1)
{
	uParam0->f_90 = iParam1;
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_91 = iParam1;
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_92 = iParam1;
}

void func_272(var uParam0, int iParam1)
{
	uParam0->f_93 = iParam1;
}

void func_273(var uParam0, int iParam1)
{
	uParam0->f_94 = iParam1;
}

void func_274(var uParam0, int iParam1)
{
	uParam0->f_98 = iParam1;
}

void func_275(var uParam0, int iParam1)
{
	uParam0->f_99 = iParam1;
}

void func_276(var uParam0, int iParam1)
{
	uParam0->f_102 = iParam1;
}

void func_277(var uParam0, int iParam1)
{
	uParam0->f_103 = iParam1;
}

void func_278(var uParam0, int iParam1)
{
	uParam0->f_104 = iParam1;
}

void func_279(var uParam0, int iParam1)
{
	uParam0->f_106 = iParam1;
}

void func_280(var uParam0, int iParam1)
{
	uParam0->f_109 = iParam1;
}

void func_281(var uParam0, int iParam1)
{
	uParam0->f_110 = iParam1;
}

void func_282(var uParam0)
{
	Call_Loc(uParam0->f_80);
}

bool func_283(var uParam0)
{
	Call_Loc(uParam0->f_108);
	return StackVal;
}

void func_284(var uParam0)
{
	Call_Loc(uParam0->f_84);
}

void func_285(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	else
	{
		Call_Loc(uParam0->f_106);
		uParam0->f_51 = 1;
	}
}

void func_286(var uParam0)
{
	if (uParam0->f_50)
	{
	}
	else
	{
		Call_Loc(uParam0->f_105);
		uParam0->f_50 = 1;
	}
}

bool func_287(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1899528.f_61.f_4))
	{
		return true;
	}
	return ANIMSCENE::_0xF94692EB9DC15D74(Global_1899528.f_61.f_4, 0);
}

void func_288(var uParam0)
{
	Call_Loc(uParam0->f_109);
}

void func_289(var uParam0)
{
	Call_Loc(uParam0->f_89);
	uParam0->f_52 = 1;
}

void func_290(var uParam0)
{
	Call_Loc(uParam0->f_110);
}

void func_291(var uParam0)
{
	if (!uParam0->f_51)
	{
	}
	else
	{
		Call_Loc(uParam0->f_107);
		uParam0->f_51 = 0;
	}
}

bool func_292(var uParam0, int iParam1)
{
	return *uParam0 == iParam1;
}

bool func_293(var uParam0)
{
	if (!*uParam0)
	{
	}
	else if (!CAM::_0xDD0B7C5AE58F721D("table_games_cam") || !STREAMING::HAS_MODEL_LOADED(joaat("P_COIN01X")))
	{
		return false;
	}
	return true;
}

int func_294(int iParam0, int iParam1)
{
	return (iParam1 / __LIB_12__::func_241(iParam0, iParam1));
}

int func_295()
{
	return Global_1899528.f_61.f_5;
}

bool func_296(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && uParam0->f_785[iParam1 /*52*/] != 0)
	{
		return true;
	}
	return false;
}

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1899528.f_61.f_1 = iParam0;
	if (iParam2 < 32)
	{
		Global_1899528.f_61.f_101[iParam2] = iParam1;
		Global_1899528.f_61.f_35[iParam2] = iParam3;
		Global_1899528.f_61.f_68[iParam2] = iParam4;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

int func_298(var uParam0)
{
	return uParam0->f_688;
}

void func_299(var uParam0)
{
	Global_1899528.f_61.f_5 = uParam0;
}

int func_300(var uParam0, int iParam1)
{
	return uParam0->f_785[iParam1 /*52*/].f_1;
}

int func_301(var uParam0, int iParam1)
{
	return uParam0->f_785[iParam1 /*52*/].f_4;
}

int func_302()
{
	return Global_1899528.f_61.f_2;
}

void func_303(var uParam0)
{
	if (uParam0->f_77 != 0)
	{
		_NAMESPACE77::_0x00A15B94CBA4F76F(uParam0->f_77);
		uParam0->f_77 = 0;
	}
}

void func_304(var uParam0)
{
	uParam0->f_777 = -1;
}

void func_305(var uParam0)
{
	uParam0->f_774 = -1;
	uParam0->f_780 = 0;
}

void func_306(var uParam0)
{
	uParam0->f_763 = -1;
}

void func_307(var uParam0)
{
	uParam0->f_784 = -1;
}

void func_308(var uParam0)
{
	uParam0->f_775 = -1;
}

void func_309(var uParam0)
{
	uParam0->f_781 = -1;
	uParam0->f_782 = -1;
	uParam0->f_783 = -1;
}

var func_310(var uParam0, int iParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, "clipset@", 64);
	StringConCat(&cVar0, &(uParam0->f_1175[iParam1 /*8*/]), 64);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_311(var uParam0, int iParam1, bool bParam2)
{
	char cVar0[64];
	StringCopy(&cVar0, "", 64);
	switch (iParam1)
	{
		case 0:
			StringCopy(&cVar0, "lightrig@poker_cards_generic", 64);
			break;
		case 1:
			StringCopy(&cVar0, "lightrig@poker_cards_generic_dark", 64);
			break;
		case 2:
			StringCopy(&cVar0, "lightrig@poker_cards_tumbleweed", 64);
			break;
		case 3:
			StringCopy(&cVar0, "lightrig@poker_cards_swanson_station", 64);
			break;
		default:
			StringCopy(&cVar0, "lightrig@poker_cards_generic", 64);
			break;
	}
	if (bParam2)
	{
		uParam0->f_774 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar0, 0, "plMain", false, true);
	}
	else
	{
		uParam0->f_774 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar0, 0, "plMain_noBlend", false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_774))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_774);
	}
}

int func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 5;
			return 1;
		case 1:
			*iParam1 = 4;
			return 1;
		case 2:
			*iParam1 = 0;
			return 1;
		case 3:
			*iParam1 = 7;
			return 1;
		case 4:
			*iParam1 = 1;
			return 1;
		case 5:
			*iParam1 = 6;
			return 1;
		case 6:
			*iParam1 = 2;
			return 1;
		case 7:
			*iParam1 = 8;
			return 1;
		case 8:
			*iParam1 = 3;
			return 1;
		default:
			break;
	}
	*iParam1 = 5;
	return 0;
}

bool func_313(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_774))
	{
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_774, true, false))
	{
		return true;
	}
	return false;
}

void func_314()
{
	MINIGAME::_0x0876326238914A3F();
}

void func_315(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_616[iParam1 /*9*/].f_8 != 7)
	{
		uParam0->f_616[iParam1 /*9*/].f_8 = 7;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar0 = uParam0->f_616[iParam1 /*9*/].f_5[iVar1];
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (bParam2)
				{
					if (ENTITY::_0x0B7CB1300CBFE19C(iVar0, 1))
					{
						TASK::STOP_ANIM_PLAYBACK(iVar0, 2, false);
					}
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(iVar0, true);
					PHYSICS::ACTIVATE_PHYSICS(iVar0);
					ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 4f);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_616[iParam1 /*9*/].f_5[iVar1]));
			}
			uParam0->f_616[iParam1 /*9*/].f_5[iVar1] = 0;
			iVar1++;
		}
	}
}

void func_316(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_671.f_11[iParam1]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_671.f_11[iParam1]));
		uParam0->f_671.f_11[iParam1] = 0;
	}
}

void func_317(var uParam0)
{
	MINIGAME::_0x3DF7EE3A76185108();
}

void func_318(var uParam0)
{
	if (uParam0->f_774 != -1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_774))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_774);
		}
		uParam0->f_774 = -1;
		uParam0->f_780 = 0;
	}
}

void func_319(var uParam0)
{
	if (uParam0->f_763 != -1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_763))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_763);
		}
		uParam0->f_763 = -1;
	}
}

void func_320(var uParam0)
{
	if (uParam0->f_784 != -1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_784))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_784);
		}
		uParam0->f_784 = -1;
	}
}

void func_321(var uParam0)
{
	if (uParam0->f_775 != -1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_775))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_775);
		}
		uParam0->f_775 = -1;
	}
}

void func_322(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_781))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_781);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_782))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_782);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_783))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_783);
	}
	uParam0->f_781 = -1;
	uParam0->f_782 = -1;
	uParam0->f_783 = -1;
}

void func_323(var uParam0)
{
	if (uParam0->f_777 != -1)
	{
		ANIMSCENE::_0x53CB3970BA02E3CC(uParam0->f_777);
		uParam0->f_777 = -1;
	}
}

void func_324(var uParam0)
{
	if (*uParam0)
	{
		*uParam0 = 0;
		CAM::_0x798BE43C9393632B("table_games_cam");
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_COIN01X"));
	}
}

void func_325(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_785[iParam1 /*52*/].f_46 = bParam2;
	if (bParam2)
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_785[iParam1 /*52*/], 0);
	}
	else if (PED::IS_PED_A_PLAYER(uParam0->f_785[iParam1 /*52*/]))
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_785[iParam1 /*52*/], 2);
	}
	else
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_785[iParam1 /*52*/], 1);
	}
}

void func_326(var uParam0, int iParam1)
{
	if (uParam0->f_785[iParam1 /*52*/].f_45)
	{
		uParam0->f_785[iParam1 /*52*/].f_45 = 0;
		ANIMSCENE::_0xBC781D24AA11F179(uParam0->f_785[iParam1 /*52*/]);
	}
}

void func_327(var uParam0, int iParam1)
{
	if (uParam0->f_785[iParam1 /*52*/].f_5 >= 2)
	{
	}
	else
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_785[iParam1 /*52*/]);
	}
}

void func_328(var uParam0, int iParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_785[iParam1 /*52*/].f_50))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_785[iParam1 /*52*/].f_50);
	}
	uParam0->f_785[iParam1 /*52*/].f_50 = -1;
}

void func_329(var uParam0, int iParam1)
{
	uParam0->f_785[iParam1 /*52*/] = 0;
	uParam0->f_785[iParam1 /*52*/].f_1 = 0;
	uParam0->f_785[iParam1 /*52*/].f_2 = 0;
	uParam0->f_785[iParam1 /*52*/].f_3 = 0;
	uParam0->f_785[iParam1 /*52*/].f_4 = 0;
	uParam0->f_785[iParam1 /*52*/].f_5 = 2;
	uParam0->f_785[iParam1 /*52*/].f_6 = -1;
	uParam0->f_785[iParam1 /*52*/].f_7 = 92;
	uParam0->f_785[iParam1 /*52*/].f_8 = 0;
	uParam0->f_785[iParam1 /*52*/].f_9 = 0;
	__LIB_0__::func_37(&(uParam0->f_785[iParam1 /*52*/].f_10));
	__LIB_0__::func_37(&(uParam0->f_785[iParam1 /*52*/].f_13));
	__LIB_0__::func_37(&(uParam0->f_785[iParam1 /*52*/].f_16));
	uParam0->f_785[iParam1 /*52*/].f_19 = 0;
	uParam0->f_785[iParam1 /*52*/].f_20 = 0;
	uParam0->f_785[iParam1 /*52*/].f_21 = 0;
	uParam0->f_785[iParam1 /*52*/].f_22 = 0;
	uParam0->f_785[iParam1 /*52*/].f_23 = 0;
	uParam0->f_785[iParam1 /*52*/].f_34 = 0;
	uParam0->f_785[iParam1 /*52*/].f_35 = 0;
	uParam0->f_785[iParam1 /*52*/].f_36 = 0;
	uParam0->f_785[iParam1 /*52*/].f_37 = 0;
	uParam0->f_785[iParam1 /*52*/].f_38 = 0;
	uParam0->f_785[iParam1 /*52*/].f_39 = 0;
	uParam0->f_785[iParam1 /*52*/].f_40 = 0;
	uParam0->f_785[iParam1 /*52*/].f_41 = 0;
	uParam0->f_785[iParam1 /*52*/].f_42 = 0;
	uParam0->f_785[iParam1 /*52*/].f_43 = 1;
	uParam0->f_785[iParam1 /*52*/].f_44 = 1;
	uParam0->f_785[iParam1 /*52*/].f_45 = 0;
	uParam0->f_785[iParam1 /*52*/].f_46 = 0;
	uParam0->f_785[iParam1 /*52*/].f_50 = -1;
	uParam0->f_785[iParam1 /*52*/].f_51 = 255;
}

void func_330(var uParam0, int iParam1)
{
	uParam0->f_616[iParam1 /*9*/][0 /*2*/] = { __LIB_9__::func_930() };
	uParam0->f_616[iParam1 /*9*/][1 /*2*/] = { __LIB_9__::func_930() };
	uParam0->f_616[iParam1 /*9*/].f_5[0] = 0;
	uParam0->f_616[iParam1 /*9*/].f_5[1] = 0;
	uParam0->f_616[iParam1 /*9*/].f_8 = 7;
}

void func_331(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_671[iVar0 /*2*/] = { __LIB_9__::func_930() };
		uParam0->f_671.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_332(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_73[iParam1 /*30*/].f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_333(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_73[iParam1 /*30*/][iVar0] = 0;
		uParam0->f_73[iParam1 /*30*/].f_5[iVar0] = 0;
		uParam0->f_73[iParam1 /*30*/].f_10[iVar0] = 0;
		uParam0->f_73[iParam1 /*30*/].f_15[iVar0] = 0;
		uParam0->f_73[iParam1 /*30*/].f_20[iVar0] = 0;
		uParam0->f_73[iParam1 /*30*/].f_25[iVar0] = 0f;
		iVar0++;
	}
}

void func_334(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_254[iParam1 /*30*/][iVar0] = 0;
		uParam0->f_254[iParam1 /*30*/].f_5[iVar0] = 0;
		uParam0->f_254[iParam1 /*30*/].f_10[iVar0] = 0;
		uParam0->f_254[iParam1 /*30*/].f_15[iVar0] = 0;
		uParam0->f_254[iParam1 /*30*/].f_20[iVar0] = 0;
		uParam0->f_254[iParam1 /*30*/].f_25[iVar0] = 0f;
		iVar0++;
	}
}

void func_335(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_435[iParam1 /*30*/][iVar0] = 0;
		uParam0->f_435[iParam1 /*30*/].f_5[iVar0] = 0;
		uParam0->f_435[iParam1 /*30*/].f_10[iVar0] = 0;
		uParam0->f_435[iParam1 /*30*/].f_15[iVar0] = 0;
		uParam0->f_435[iParam1 /*30*/].f_20[iVar0] = 0;
		uParam0->f_435[iParam1 /*30*/].f_25[iVar0] = 0f;
		iVar0++;
	}
}

void func_336(var uParam0)
{
	uParam0->f_688 = 0;
	uParam0->f_688.f_1 = 0;
	uParam0->f_688.f_2 = 0;
}

void func_337(var uParam0)
{
	uParam0->f_5 = 0f;
	uParam0->f_6 = *uParam0;
	uParam0->f_7 = 0;
}

bool func_338(var uParam0, int iParam1, int iParam2)
{
	return MISC::IS_BIT_SET(uParam0->f_785[iParam1 /*52*/].f_38, iParam2);
}

bool func_339(var uParam0)
{
	if (((((uParam0->f_42 == 0 || uParam0->f_42 == 1) || uParam0->f_42 == 2) || uParam0->f_42 == 3) || uParam0->f_42 == 4) || uParam0->f_42 == 5)
	{
		return true;
	}
	return false;
}

void func_340(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	if (MISC::IS_BIT_SET(uParam0->f_785[iParam1 /*52*/].f_38, iParam2))
	{
		uVar0 = uParam0->f_785[iParam1 /*52*/].f_8;
		MISC::CLEAR_BIT(&(uParam0->f_785[iParam1 /*52*/].f_38), iParam2);
	}
}

int func_341(struct<2> Param0)
{
	if (((Param0 >= 2 && Param0 <= 14) && Param0.f_1 >= 0) && Param0.f_1 <= 3)
	{
		return 1;
	}
	return 0;
}

bool func_342(var uParam0, int iParam1)
{
	if (uParam0->f_9 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_343(var uParam0, int iParam1)
{
	return uParam0->f_616[iParam1 /*9*/].f_8 != 7;
}

int func_344(var uParam0, int iParam1)
{
	return uParam0->f_616[iParam1 /*9*/].f_8;
}

int func_345(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 2;
}

void func_346(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_616[iParam1 /*9*/].f_8 != 7)
	{
		uParam0->f_616[iParam1 /*9*/].f_8 = 7;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_616[iParam1 /*9*/].f_5[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_616[iParam1 /*9*/].f_5[iVar0]));
			}
			uParam0->f_616[iParam1 /*9*/].f_5[iVar0] = 0;
			iVar0++;
		}
	}
}

int func_347(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@take_pot", 2, "PBL_TAKE_POT_A", false, true);
			break;
		case 1:
			iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@take_pot_camp", 2, "PBL_TAKE_POT_A", false, true);
			break;
		case 2:
			iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@fem_take_pot_camp", 2, "PBL_TAKE_POT_A", false, true);
			break;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
	switch (iParam1)
	{
		case 0:
			uParam0->f_781 = iVar0;
			break;
		case 1:
			uParam0->f_782 = iVar0;
			break;
		case 2:
			uParam0->f_783 = iVar0;
			break;
	}
	return 1;
}

char* func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Poker";
		case 1:
			return "PokerArthur";
		case 2:
			return "PokerArthurCamp";
		case 3:
			return "PokerJohn";
		case 4:
			return "PokerJohnCamp";
		default:
			break;
	}
	return "Poker";
}

void func_349(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam0->f_73[iVar0 /*30*/].f_20[iVar1] != 0)
			{
				if (uParam0->f_73[iVar0 /*30*/].f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_696;
				}
				else
				{
					fVar5 = uParam0->f_695;
				}
				uParam0->f_73[iVar0 /*30*/].f_25[iVar1] = (uParam0->f_73[iVar0 /*30*/].f_25[iVar1] + (MISC::GET_FRAME_TIME() / fVar5));
				fVar4 = uParam0->f_73[iVar0 /*30*/].f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (uParam0->f_73[iVar0 /*30*/].f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = __LIB_9__::func_231((1f - (2f * fVar4)), 0, 1065353216 /* Float: 1f */);
							fVar2 = __LIB_9__::func_231(((2f * fVar4) - 1f), 0, 1065353216 /* Float: 1f */);
							break;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_73[iVar0 /*30*/][iVar1], BUILTIN::ROUND((fVar2 * 255f)), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iVar0 /*30*/].f_15[iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_73[iVar0 /*30*/].f_15[iVar1], BUILTIN::ROUND((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_73[iVar0 /*30*/][iVar1], 255, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iVar0 /*30*/].f_15[iVar1]))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_73[iVar0 /*30*/].f_15[iVar1]));
					}
					uParam0->f_73[iVar0 /*30*/].f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam0->f_254[iVar0 /*30*/].f_20[iVar1] != 0)
			{
				if (uParam0->f_254[iVar0 /*30*/].f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_696;
				}
				else
				{
					fVar5 = uParam0->f_695;
				}
				uParam0->f_254[iVar0 /*30*/].f_25[iVar1] = (uParam0->f_254[iVar0 /*30*/].f_25[iVar1] + (MISC::GET_FRAME_TIME() / fVar5));
				fVar4 = uParam0->f_254[iVar0 /*30*/].f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (uParam0->f_254[iVar0 /*30*/].f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = __LIB_9__::func_231((1f - (2f * fVar4)), 0, 1065353216 /* Float: 1f */);
							fVar2 = __LIB_9__::func_231(((2f * fVar4) - 1f), 0, 1065353216 /* Float: 1f */);
							break;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_254[iVar0 /*30*/][iVar1], BUILTIN::ROUND((fVar2 * 255f)), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iVar0 /*30*/].f_15[iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_254[iVar0 /*30*/].f_15[iVar1], BUILTIN::ROUND((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_254[iVar0 /*30*/][iVar1], 255, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iVar0 /*30*/].f_15[iVar1]))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_254[iVar0 /*30*/].f_15[iVar1]));
					}
					uParam0->f_254[iVar0 /*30*/].f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam0->f_435[iVar0 /*30*/].f_20[iVar1] != 0)
			{
				if (uParam0->f_435[iVar0 /*30*/].f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_696;
				}
				else
				{
					fVar5 = uParam0->f_695;
				}
				uParam0->f_435[iVar0 /*30*/].f_25[iVar1] = (uParam0->f_435[iVar0 /*30*/].f_25[iVar1] + (MISC::GET_FRAME_TIME() / fVar5));
				fVar4 = uParam0->f_435[iVar0 /*30*/].f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (uParam0->f_435[iVar0 /*30*/].f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = __LIB_9__::func_231((1f - (2f * fVar4)), 0, 1065353216 /* Float: 1f */);
							fVar2 = __LIB_9__::func_231(((2f * fVar4) - 1f), 0, 1065353216 /* Float: 1f */);
							break;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_435[iVar0 /*30*/][iVar1], BUILTIN::ROUND((fVar2 * 255f)), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iVar0 /*30*/].f_15[iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_435[iVar0 /*30*/].f_15[iVar1], BUILTIN::ROUND((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_435[iVar0 /*30*/][iVar1], 255, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iVar0 /*30*/].f_15[iVar1]))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_435[iVar0 /*30*/].f_15[iVar1]));
					}
					uParam0->f_435[iVar0 /*30*/].f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_350(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (uParam0->f_14[iParam2] == iParam1 && iParam3 == 0)
	{
		if (MISC::IS_BIT_SET(uParam0->f_22, iParam2))
		{
			return true;
		}
	}
	uParam0->f_14[iParam2] = iParam1;
	MISC::SET_BIT(&(uParam0->f_22), iParam2);
	MISC::CLEAR_BIT(&(uParam0->f_23), iParam2);
	return true;
}

int func_351(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	else if (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iParam0) == 0)
	{
		return 1;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	else if (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iParam0) == 2)
	{
		return 1;
	}
	return 0;
}

int func_353(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = 0;
	if (fParam1 > 0.5f)
	{
		iVar0 = 1;
	}
	else if (fParam1 < -0.5f)
	{
		iVar0 = -1;
	}
	fVar1 = uParam0->f_2;
	if (MISC::ABSF(fParam1) < uParam0->f_4)
	{
		fVar1 = uParam0->f_1;
	}
	if (iVar0 != uParam0->f_7 || bParam2)
	{
		uParam0->f_5 = 0f;
		uParam0->f_6 = *uParam0;
		uParam0->f_7 = iVar0;
		return iVar0;
	}
	else if (iVar0 != 0)
	{
		uParam0->f_5 = (uParam0->f_5 + ((BUILTIN::TO_FLOAT(iVar0) * MISC::GET_FRAME_TIME()) * uParam0->f_6));
		if (MISC::ABSF(uParam0->f_5) >= 1f)
		{
			iVar2 = BUILTIN::ROUND(uParam0->f_5);
			uParam0->f_5 = 0f;
			uParam0->f_6 = (uParam0->f_6 * uParam0->f_3);
			if (uParam0->f_6 > fVar1)
			{
				uParam0->f_6 = fVar1;
			}
			return iVar2;
		}
	}
	return 0;
}

void func_354(bool bParam0)
{
	AUDIO::_STOP_SOUND_WITH_NAME("BET_AMOUNT", "HUD_POKER");
	if (bParam0)
	{
		AUDIO::PLAY_SOUND_FRONTEND("BET_MIN_MAX", "HUD_POKER", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("BET_AMOUNT", "HUD_POKER", true, 0);
	}
}

bool func_355(var uParam0, int iParam1)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_671.f_11[iParam1]);
}

void func_356(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_671.f_11[iParam1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_671.f_11[iParam1]));
		uParam0->f_671.f_11[iParam1] = 0;
	}
}

void func_357(var uParam0, int iParam1)
{
	if (uParam0->f_785[iParam1 /*52*/].f_45)
	{
	}
	else
	{
		uParam0->f_785[iParam1 /*52*/].f_45 = 1;
		ANIMSCENE::_0x99B2A2E3655DEAF1(uParam0->f_785[iParam1 /*52*/], "PokerSeatedNoCards");
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_785[iParam1 /*52*/], false);
		PED::SET_PED_CAN_RAGDOLL(uParam0->f_785[iParam1 /*52*/], true);
	}
}

int func_358(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_616[iParam1 /*9*/].f_5[iParam2];
}

void func_359(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	if (!MISC::IS_BIT_SET(uParam0->f_785[iParam1 /*52*/].f_38, iParam2))
	{
		uVar0 = uParam0->f_785[iParam1 /*52*/].f_8;
		MISC::SET_BIT(&(uParam0->f_785[iParam1 /*52*/].f_38), iParam2);
	}
}

struct<2> func_360(int iParam0, int iParam1)
{
	struct<2> Var0;
	Var0.f_1 = iParam0;
	Var0 = iParam1;
	return Var0;
}

bool func_361(var uParam0, struct<2> Param1, int iParam3)
{
	if (__LIB_4__::func_879(iParam3, Param1, uParam0->f_691, 0))
	{
		return true;
	}
	*iParam3 = uParam0->f_693;
	return false;
}

void func_362(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = fParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = iParam12;
	uParam0->f_24 = bParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

bool func_363(var uParam0, char* sParam1)
{
	if (!uParam0->f_42)
	{
		if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, sParam1))
		{
			uParam0->f_42 = 1;
		}
	}
	return (uParam0->f_42 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0));
}

bool func_364(var uParam0, int iParam1, char* sParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	iVar0 = uParam0->f_785[iParam1 /*52*/].f_4;
	iVar1 = uParam0->f_785[iParam1 /*52*/];
	if (!PED::IS_PED_INJURED(iVar1))
	{
		StringCopy(&cVar2, "clipset@", 64);
		StringConCat(&cVar2, &(uParam0->f_1175[iVar0 /*8*/]), 64);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, &cVar2, sParam2, 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar1, &cVar2, sParam2) < fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_365(var uParam0, int iParam1, bool bParam2)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_785[iParam1 /*52*/], joaat("INTERRUPTIBLE")))
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_785[iParam1 /*52*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_785[iParam1 /*52*/]))
		{
			return true;
		}
	}
	return false;
}

bool func_366(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_785[iParam1 /*52*/].f_40)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_785[iParam1 /*52*/], joaat("INTERRUPTIBLE")))
		{
			if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_785[iParam1 /*52*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_785[iParam1 /*52*/]))
			{
				return true;
			}
		}
	}
	return false;
}

void func_367(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_785[iParam1 /*52*/].f_4 = iParam2;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_785[iParam1 /*52*/]))
	{
		TASK::_0x615DC4A82E90BB48(uParam0->f_785[iParam1 /*52*/], uParam0->f_1208[iParam2], joaat("DEFAULT"));
	}
}

bool func_368(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_763))
	{
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_763, true, false))
	{
		return true;
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_763, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_763);
	}
	return false;
}

bool func_369(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_763))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_763, false);
}

bool func_370(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_763))
	{
		return false;
	}
	return (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_763) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_763, 0));
}

void func_371(var uParam0, int iParam1)
{
	if (!uParam0->f_785[iParam1 /*52*/].f_39)
	{
		uParam0->f_785[iParam1 /*52*/].f_39 = 1;
	}
}

int func_372(var uParam0, int iParam1)
{
	return uParam0->f_671.f_11[iParam1];
}

int func_373(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_254[iParam1 /*30*/][iParam2];
}

int func_374(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_42[iParam1 /*5*/][iParam2];
}

bool func_375(var uParam0, int iParam1, int iParam2)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iParam1 /*30*/][iParam2]);
}

int func_376(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_435[iParam1 /*30*/].f_10[iParam2];
}

int func_377(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_435[iParam1 /*30*/][iParam2];
}

bool func_378(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_785[iParam1 /*52*/], iParam2))
	{
		if ((!bParam3 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_785[iParam1 /*52*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_785[iParam1 /*52*/]))
		{
			return true;
		}
	}
	return false;
}

bool func_379(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = uParam0->f_781;
			break;
		case 1:
			iVar0 = uParam0->f_782;
			break;
		case 2:
			iVar0 = uParam0->f_783;
			break;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, true, false);
}

bool func_380(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_785[iParam1 /*52*/].f_50))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_785[iParam1 /*52*/].f_50, false);
}

bool func_381(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_785[iParam1 /*52*/].f_50))
	{
		return false;
	}
	return ANIMSCENE::_0x4822A65D5AF64E69(uParam0->f_785[iParam1 /*52*/].f_50) >= 1;
}

bool func_382(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_785[iParam1 /*52*/].f_50))
	{
		return false;
	}
	return ((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_785[iParam1 /*52*/].f_50) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_785[iParam1 /*52*/].f_50, 0)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_785[iParam1 /*52*/].f_50) > 0.99f);
}

bool func_383(var uParam0, int iParam1)
{
	return uParam0->f_785[iParam1 /*52*/].f_39;
}

bool func_384(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_775))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_775, true, false);
}

bool func_385(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_775))
	{
		return false;
	}
	return ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_775) >= 0.98f;
}

void func_386(var uParam0, int iParam1)
{
	if (!uParam0->f_785[iParam1 /*52*/].f_40)
	{
		uParam0->f_785[iParam1 /*52*/].f_40 = 1;
	}
}

void func_387(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_254[iParam1 /*30*/].f_10[iVar0];
		if (bParam3)
		{
			(*uParam2)[iVar0] = ((*uParam2)[iVar0] + uParam0->f_435[iParam1 /*30*/].f_10[iVar0]);
		}
		iVar0++;
	}
}

void func_388(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_616[iParam1 /*9*/].f_8 == 7)
	{
	}
	else
	{
		uParam0->f_616[iParam1 /*9*/].f_8 = iParam2;
	}
}

int func_389(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_390(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_391(var uParam0)
{
	if (*uParam0 == 0)
	{
	}
	else
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
		*uParam0 = 0;
	}
}

void func_392(var uParam0)
{
	if (uParam0->f_41 == 0)
	{
	}
	else if (uParam0->f_41 == 1)
	{
		uParam0->f_41 = 2;
	}
}

void func_393(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_785[iParam1 /*52*/].f_47 = iParam2;
}

bool func_394(var uParam0, int iParam1)
{
	return uParam0->f_785[iParam1 /*52*/].f_47 == 0;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_396(var uParam0, int iParam1)
{
	return uParam0->f_785[iParam1 /*52*/].f_5;
}

char* func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mood_normal_neutral";
		case 1:
			return "concentration_base";
		case 2:
			return "poker_face";
		default:
			break;
	}
	return "Unknown";
}

void func_398(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_785[iParam1 /*52*/].f_3 = iParam3;
	uParam0->f_785[iParam1 /*52*/].f_2 = iParam2;
}

void func_399(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iParam1 /*30*/].f_15[iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_73[iParam1 /*30*/].f_15[iParam2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iParam1 /*30*/][iParam2]))
	{
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
	}
	uParam0->f_73[iParam1 /*30*/].f_20[iParam2] = iParam3;
	uParam0->f_73[iParam1 /*30*/].f_15[iParam2] = uParam0->f_73[iParam1 /*30*/][iParam2];
	uParam0->f_73[iParam1 /*30*/].f_25[iParam2] = 0f;
	uParam0->f_73[iParam1 /*30*/][iParam2] = 0;
	uParam0->f_73[iParam1 /*30*/].f_5[iParam2] = 0;
	uParam0->f_73[iParam1 /*30*/].f_10[iParam2] = 0;
}

void func_400(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 3);
			break;
		case 1:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 18);
			break;
		case 2:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 21);
			break;
		case 3:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 24);
			break;
		case 4:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 27);
			break;
		case 5:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 15);
			break;
		default:
			break;
	}
}

int func_401(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam0->f_24 == uParam1->f_24)
	{
		iVar0 = 0;
		while (iVar0 < __LIB_0__::func_259(5, __LIB_0__::func_259(uParam0->f_23, uParam1->f_23)))
		{
			if ((*uParam0)[iVar0 /*2*/] > (*uParam1)[iVar0 /*2*/])
			{
				return 1;
			}
			else if ((*uParam0)[iVar0 /*2*/] < (*uParam1)[iVar0 /*2*/])
			{
				return -1;
			}
			iVar0++;
		}
		return 0;
	}
	if (uParam0->f_24 > uParam1->f_24)
	{
		return 1;
	}
	if (uParam0->f_24 < uParam1->f_24)
	{
		return -1;
	}
	return 0;
}

int func_402(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		iVar1 = (iVar1 + (*uParam0)[iVar0]);
		iVar0++;
	}
	return iVar1;
}

void func_403(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iParam1 /*30*/].f_15[iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_254[iParam1 /*30*/].f_15[iParam2]));
	}
	uParam0->f_254[iParam1 /*30*/].f_20[iParam2] = iParam3;
	uParam0->f_254[iParam1 /*30*/].f_15[iParam2] = uParam0->f_254[iParam1 /*30*/][iParam2];
	uParam0->f_254[iParam1 /*30*/].f_25[iParam2] = 0f;
	uParam0->f_254[iParam1 /*30*/][iParam2] = 0;
	uParam0->f_254[iParam1 /*30*/].f_5[iParam2] = 0;
	uParam0->f_254[iParam1 /*30*/].f_10[iParam2] = 0;
}

bool func_404(var uParam0, int iParam1, int iParam2)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iParam1 /*30*/][iParam2]);
}

void func_405(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iParam1 /*30*/].f_15[iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_435[iParam1 /*30*/].f_15[iParam2]));
	}
	uParam0->f_435[iParam1 /*30*/].f_20[iParam2] = iParam3;
	uParam0->f_435[iParam1 /*30*/].f_15[iParam2] = uParam0->f_435[iParam1 /*30*/][iParam2];
	uParam0->f_435[iParam1 /*30*/].f_25[iParam2] = 0f;
	uParam0->f_435[iParam1 /*30*/][iParam2] = 0;
	uParam0->f_435[iParam1 /*30*/].f_5[iParam2] = 0;
	uParam0->f_435[iParam1 /*30*/].f_10[iParam2] = 0;
}

int func_406(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_781;
		case 1:
			return uParam0->f_782;
		case 2:
			return uParam0->f_783;
	}
	return -1;
}

void func_407(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_254[iParam1 /*30*/].f_5[iVar0];
		iVar0++;
	}
}

void func_408(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_435[iParam1 /*30*/].f_5[iVar0];
		iVar0++;
	}
}

void func_409(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_435[iParam1 /*30*/].f_10[iVar0];
		iVar0++;
	}
}

void func_410(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_781 = -1;
			break;
		case 1:
			uParam0->f_782 = -1;
			break;
		case 2:
			uParam0->f_783 = -1;
			break;
	}
}

var func_411(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_254[iParam1 /*30*/].f_5[iParam2];
}

var func_412(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_254[iParam1 /*30*/].f_10[iParam2];
}

int func_413(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_435[iParam1 /*30*/].f_5[iParam2];
}

int func_414(int iParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	if (iParam0 == 0)
	{
	}
	else
	{
		iVar0 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iParam0);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iParam0), 64);
			*sParam2 = { *sParam1 };
			return 1;
		}
		if (iVar0 == 2)
		{
		}
		else if (iVar0 == 1)
		{
		}
	}
	StringCopy(sParam1, "avatar_generic", 64);
	StringCopy(sParam2, "minigames_hud", 64);
	return 0;
}

void func_415(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, sParam1);
}

void func_416(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, bParam1);
}

void func_417(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_8, sParam1);
}

void func_418(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_6, bParam1);
}

void func_419(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, !bParam1);
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 0:
			return 5;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

void func_421(var uParam0, int iParam1)
{
	struct<2> Var0;
	Var0 = 287982460;
	Var0.f_1 = iParam1;
	Var0.f_1.f_1 = 0;
	Var0.f_1.f_8.f_1 = 0;
	Var0.f_1.f_8 = 0;
	MINIGAME::_0xE1F365C4C8F259D8(Var0, &Var0, 11);
}

bool func_422(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(Global_1392915.f_121[iVar0 /*20*/].f_4, false);
}

var func_423(int iParam0)
{
	char cVar0[16];
	StringCopy(&cVar0, "#", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return __LIB_1__::func_569(cVar0);
}

bool func_424(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1835011[34 /*74*/].f_1);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

bool func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_17(iParam0);
	iVar1 = Global_1945938[iVar0 /*18*/].f_4;
	return (__LIB_1__::func_530(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

void func_426(var uParam0, int iParam1)
{
	__LIB_7__::func_736(uParam0, iParam1, "");
	__LIB_7__::func_737(uParam0, iParam1, "");
}

void func_427(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<34> Var3;
	char cVar41[64];
	iVar0 = uParam0->f_785[iParam1 /*52*/].f_4;
	iVar1 = uParam0->f_785[iParam1 /*52*/];
	if (MISC::IS_BIT_SET(iParam4, iVar0))
	{
		return;
	}
	fVar2 = 0f;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
	{
		fVar2 = TASK::_0x844CEEE428EA35B0(iVar1, "CurrentPhase");
	}
	if (ENTITY::_0x0B7CB1300CBFE19C(iParam3, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(iParam3, 2, true);
	}
	Var3.f_4 = 1065353216;
	Var3.f_5 = 1065353216;
	Var3.f_9 = 1065353216;
	Var3.f_10 = 1065353216;
	Var3.f_14 = 1065353216;
	Var3.f_15 = 1065353216;
	Var3.f_17 = 1040187392;
	Var3.f_18 = 1040187392;
	Var3.f_19 = -1;
	Var3.f_26 = -1082130432;
	StringCopy(&cVar41, "clipset@", 64);
	StringConCat(&cVar41, &(uParam0->f_1175[iVar0 /*8*/]), 64);
	Var3 = 1;
	Var3.f_1 = __LIB_1__::func_569(cVar41);
	Var3.f_2 = sParam2;
	Var3.f_3 = fVar2;
	Var3.f_20 = iParam5 | 16 | 4 | 2 | 256;
	Var3.f_22 = 1;
	Var3.f_4 = 1f;
	Var3.f_5 = 1f;
	Var3.f_10 = 0f;
	Var3.f_15 = 0f;
	Var3.f_23 = 0;
	Var3.f_19 = -1;
	Var3.f_16 = 0;
	Var3.f_17 = 0f;
	Var3.f_18 = 0f;
	Var3.f_33 = 1;
	Var3.f_27 = { uParam0->f_1137[iParam1 /*3*/] };
	Var3.f_30 = { uParam0->f_1156[iParam1 /*3*/] };
	TASK::PLAY_ENTITY_SCRIPTED_ANIM(iParam3, &Var3);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam3, true);
}

void func_428(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<34> Var2;
	char cVar40[64];
	iVar0 = uParam0->f_785[iParam1 /*52*/].f_4;
	iVar1 = uParam0->f_785[iParam1 /*52*/];
	iParam3 |= 16 | 4 | 256;
	if (ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	Var2.f_4 = 1065353216;
	Var2.f_5 = 1065353216;
	Var2.f_9 = 1065353216;
	Var2.f_10 = 1065353216;
	Var2.f_14 = 1065353216;
	Var2.f_15 = 1065353216;
	Var2.f_17 = 1040187392;
	Var2.f_18 = 1040187392;
	Var2.f_19 = -1;
	Var2.f_26 = -1082130432;
	StringCopy(&cVar40, "clipset@", 64);
	StringConCat(&cVar40, &(uParam0->f_1175[iVar0 /*8*/]), 64);
	Var2 = 1;
	Var2.f_1 = __LIB_1__::func_569(cVar40);
	Var2.f_2 = sParam2;
	Var2.f_3 = iParam6;
	Var2.f_20 = iParam3;
	Var2.f_22 = 1;
	Var2.f_4 = 1f;
	Var2.f_5 = 1f;
	Var2.f_10 = 0f;
	Var2.f_15 = 0f;
	Var2.f_23 = 1;
	Var2.f_19 = -1;
	Var2.f_16 = 0;
	Var2.f_17 = fParam4;
	Var2.f_18 = iParam5;
	Var2.f_33 = 1;
	Var2.f_27 = { uParam0->f_1137[iParam1 /*3*/] };
	Var2.f_30 = { uParam0->f_1156[iParam1 /*3*/] };
	TASK::TASK_SCRIPTED_ANIMATION(iVar1, &Var2);
	if (bParam7)
	{
		PED::_0x2208438012482A1A(iVar1, false, false);
	}
}

void func_429(int iParam0)
{
	var uVar0;
	var uVar1;
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(Global_1058888.f_42784[iParam0 /*12*/].f_2))
	{
		Global_1058888.f_42784[iParam0 /*12*/].f_2 = uVar0;
		return;
	}
	__LIB_9__::func_940(&(Global_1058888.f_42784[iParam0 /*12*/].f_10));
	__LIB_9__::func_941(iParam0, 1277358601, 1);
	__LIB_9__::func_942(iParam0, 0);
	HUD::REMOVE_MP_GAMER_TAG(&(Global_1058888.f_42784[iParam0 /*12*/].f_2));
	Global_1058888.f_42784[iParam0 /*12*/].f_2 = uVar1;
	Global_1058888.f_42784[iParam0 /*12*/].f_1 = 0;
	Global_1058888.f_42784[iParam0 /*12*/] = 0;
}

void func_430(int iParam0)
{
	if (!__LIB_9__::func_943(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1058888.f_42357.f_164), iParam0);
	}
}

int func_431(var uParam0, var uParam1)
{
	if (__LIB_12__::func_246(uParam0, *uParam1))
	{
		return 0;
	}
	if (uParam0->f_23 == 11)
	{
		return 0;
	}
	*(uParam0[uParam0->f_23 /*2*/]) = { *uParam1 };
	uParam0->f_23++;
	return 1;
}

void func_432(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	if (bParam4)
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127f));
	}
	else
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127f));
	}
	if (uParam0->f_29[2] != 0 || uParam0->f_29[3] != 0)
	{
	}
	if (uParam0->f_34 == uParam0->f_29[2] && uParam0->f_35 == uParam0->f_29[3])
	{
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = uParam0->f_29[2];
		uParam0->f_35 = uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
	}
	if (bParam2)
	{
		uParam0->f_13.f_2 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[2]) / 127f) * IntToFloat(uParam0->f_25));
		uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
		if (PAD::IS_LOOK_INVERTED())
		{
			uParam0->f_13 = ((BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127f) * IntToFloat(uParam0->f_26));
		}
		else
		{
			uParam0->f_13 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127f) * IntToFloat(uParam0->f_26));
		}
	}
	else
	{
		uParam0->f_13 = { 0f, 0f, 0f };
		uParam0->f_34 = 0;
		uParam0->f_35 = 0;
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	if (!__LIB_0__::func_138(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + MISC::GET_FRAME_TIME());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { __LIB_1__::func_367(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + __LIB_0__::func_251((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + __LIB_0__::func_251((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + __LIB_0__::func_251((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = __LIB_0__::func_251(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = __LIB_0__::func_251(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = __LIB_0__::func_251(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	if (bParam1)
	{
		if (bParam3)
		{
			if (BUILTIN::TO_FLOAT(uParam0->f_29[1]) < 0f)
			{
				uParam0->f_22 = (uParam0->f_22 + IntToFloat(BUILTIN::ROUND(((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128f) * uParam0->f_24))));
			}
		}
		else
		{
			uParam0->f_22 = (uParam0->f_22 + IntToFloat(BUILTIN::ROUND(((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128f) * uParam0->f_24))));
		}
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME()) * (2.5f / 0.65f)));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, 1, 0);
}

void func_433(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1835011[10 /*74*/].f_1);
	if (!MISC::IS_BIT_SET(iVar0, iParam0))
	{
		MISC::SET_BIT(&iVar0, iParam0);
		__LIB_1__::func_532(Global_1835011[10 /*74*/].f_1, iVar0);
	}
}

void func_434(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1835011[10 /*74*/].f_1);
	if (MISC::IS_BIT_SET(iVar0, iParam0))
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
		__LIB_1__::func_532(Global_1835011[10 /*74*/].f_1, iVar0);
	}
}

void func_435(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1835011[34 /*74*/].f_1);
	if (MISC::IS_BIT_SET(iVar0, iParam0))
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
		__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, iVar0);
		__LIB_7__::func_448(Global_1835011[34 /*74*/].f_1, 0);
	}
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_895(Global_1835011[34 /*74*/].f_1);
	iVar1 = __LIB_5__::func_297(Global_1835011[34 /*74*/].f_1);
	if (!MISC::IS_BIT_SET(iVar0, iParam0) || iVar1 != iParam1)
	{
		iVar2 = iVar0;
		MISC::SET_BIT(&iVar2, iParam0);
		__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, iVar2);
		__LIB_7__::func_448(Global_1835011[34 /*74*/].f_1, iParam1);
	}
}

void func_437(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 0 && iParam2 < 29)
	{
		Stack.Push(uParam0);
		Stack.Push(&(uParam0->f_785[iParam1 /*52*/]));
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_1243[uParam0->f_785[iParam1 /*52*/].f_8]);
	}
	uParam0->f_785[iParam1 /*52*/].f_8 = iParam2;
	uParam0->f_785[iParam1 /*52*/].f_9 = 0;
	__LIB_1__::func_148(&(uParam0->f_785[iParam1 /*52*/].f_10));
	__LIB_1__::func_148(&(uParam0->f_785[iParam1 /*52*/].f_13));
	uParam0->f_785[iParam1 /*52*/].f_19 = 0;
	uParam0->f_785[iParam1 /*52*/].f_20 = 0;
	uParam0->f_785[iParam1 /*52*/].f_21 = 0;
	uParam0->f_785[iParam1 /*52*/].f_22 = 0;
	uParam0->f_785[iParam1 /*52*/].f_23 = 0;
	uParam0->f_785[iParam1 /*52*/].f_38 = 0;
	uParam0->f_785[iParam1 /*52*/].f_39 = 0;
	uParam0->f_785[iParam1 /*52*/].f_40 = 0;
	uParam0->f_785[iParam1 /*52*/].f_41 = 0;
	uParam0->f_785[iParam1 /*52*/].f_42 = 0;
}

void func_438(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_785[iParam1 /*52*/].f_9 = iParam2;
	uParam0->f_785[iParam1 /*52*/].f_42 = 0;
	__LIB_1__::func_148(&(uParam0->f_785[iParam1 /*52*/].f_13));
}

void func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			__LIB_3__::func_720(6, 1);
			break;
		default:
			break;
	}
}

var func_440(int iParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, __LIB_10__::func_855(), 64);
	StringConCat(&cVar0, __LIB_10__::func_856(iParam0), 64);
	return __LIB_1__::func_569(cVar0);
}

void func_441(var uParam0, int iParam1)
{
	uParam0->f_42 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_43));
}

bool func_442(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_4__::func_865(uParam0->f_38);
	if (Global_1394141.f_1328)
	{
		return true;
	}
	if (__LIB_1__::func_77(uParam0->f_38, 262144))
	{
		return true;
	}
	if (!__LIB_1__::func_815(uParam0->f_38))
	{
		return true;
	}
	if (!__LIB_1__::func_224(uParam0->f_38))
	{
		return true;
	}
	if (BUILTIN::VDIST2(Global_36, uParam0->f_3.f_14) > (fVar0 * fVar0))
	{
		return true;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (Global_1899528.f_215 && !__LIB_1__::func_214(uParam0->f_37))
		{
			return true;
		}
	}
	if (uParam0->f_41 != -1)
	{
		if (__LIB_0__::func_21(uParam0->f_41, 4194304))
		{
			return true;
		}
		if (__LIB_0__::func_12() != uParam0->f_41)
		{
			return true;
		}
	}
	return false;
}

void func_443(var uParam0)
{
	switch (uParam0->f_54)
	{
		case 0:
		case 3:
			__LIB_1__::func_748(&(uParam0->f_55), 1, 1);
			break;
		case 1:
			if (!__LIB_0__::func_139(uParam0->f_55))
			{
				uParam0->f_55 = __LIB_1__::func_877("MG_LEAVE1", joaat("INPUT_MINIGAME_QUIT"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
			}
			if (__LIB_0__::func_139(uParam0->f_55))
			{
				__LIB_1__::func_382(uParam0->f_55, uParam0->f_57, 1);
				__LIB_4__::func_862(uParam0->f_55, joaat("INPUT_FRONTEND_PAUSE"));
			}
			break;
		case 2:
			if (!__LIB_0__::func_139(uParam0->f_55))
			{
				uParam0->f_55 = __LIB_1__::func_877("MG_LEAVE1", joaat("INPUT_MINIGAME_QUIT"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
			}
			if (__LIB_0__::func_139(uParam0->f_55))
			{
				__LIB_1__::func_382(uParam0->f_55, 1, 1);
				__LIB_4__::func_862(uParam0->f_55, joaat("INPUT_FRONTEND_PAUSE"));
			}
			break;
	}
}

int func_444()
{
	return joaat("S_M_M_PINLAW_01");
}

bool func_445(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return false;
	}
	return __LIB_0__::func_27(Global_40.f_9829[iParam0 /*4*/].f_2, iParam1);
}

int func_446(int iParam0)
{
	return iParam0->f_5;
}

void func_447(int iParam0, int iParam1)
{
	if (iParam0->f_5 != iParam1)
	{
		iParam0->f_5 = iParam1;
	}
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 3;
		case 5:
			return 3;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 3;
		case 9:
			return 3;
		case 10:
			return 3;
		case 11:
			return 3;
		case 12:
			return 3;
		case 13:
			return 3;
		case 14:
			return 3;
		case 15:
			return 3;
		default:
			break;
	}
	return 0;
}

bool func_449(int iParam0, int iParam1)
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_1935630.f_5)
		{
			if (iParam1 == 0)
			{
				return true;
			}
			fVar0 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
			if (fVar0 < 4f)
			{
				return true;
			}
		}
	}
	return false;
}

char* func_450(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return "BOU1_BOUNTY";
				case 1:
					return "BOU1AUD";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET5";
				case 1:
					return "BT05AUD";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "RBDU_TARGET";
				case 1:
					return "BDULAUD";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return "CAVANAUGH";
				case 1:
					return "BT03AUD";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return "RBRA_TARGET";
				case 1:
					return "BRANAUD";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET12";
				case 1:
					return "BT12AUD";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET14";
				case 1:
					return "BT14AUD";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return "RBCO_TARGET";
				case 1:
					return "BCONAUD";
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET15";
				case 1:
					return "BT15AUD";
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET20";
				case 1:
					return "BT20AUD";
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET18";
				case 1:
					return "BT18AUD";
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET21";
				case 1:
					return "BT21AUD";
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET22";
				case 1:
					return "BT22AUD";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET23";
				case 1:
					return "BT23AUD";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_451(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 9:
			return true;
	}
	return false;
}

bool func_452(int iParam0)
{
	if ((iParam0->f_7 == 4 || iParam0->f_7 == 13) || iParam0->f_7 == 11)
	{
		return true;
	}
	return false;
}

int func_453(int iParam0)
{
	switch (iParam0)
	{
		case joaat("U_M_M_BHT_BENEDICTALLBRIGHT"):
			return 2;
		case joaat("U_F_M_BHT_WIFE"):
			return 3;
		case joaat("U_M_M_BHT_STRAWBERRYDUEL"):
			return 4;
		case joaat("U_M_M_HTLRANCHERBOUNTY_01"):
			return 6;
		case joaat("U_M_M_BHT_SHACKESCAPE"):
			return 8;
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 9;
		case joaat("CS_ANTONYFOREMEN"):
			return 10;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
			return 11;
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 12;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
			return 14;
		case joaat("U_M_M_BHT_BANDITOMINE"):
			return 15;
		case joaat("U_M_M_BHT_LARAMIESLEEPING"):
			return 5;
		case joaat("U_M_M_BHT_EXCONFEDCAMPRETURN"):
			return 7;
		case joaat("U_M_M_BHT_BLACKWATERHUNT"):
			return 13;
		default:
			break;
	}
	return 1;
}

char* func_454(char* sParam0, char* sParam1)
{
	if (__LIB_0__::func_181())
	{
		return sParam0;
	}
	return sParam1;
}

bool func_455(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (iParam0->f_4 != __LIB_0__::func_12())
		{
			AUDIO::STOP_PED_SPEAKING(Global_35, false);
			return true;
		}
	}
	if (iParam0->f_71 && PED::IS_PED_INJURED(iParam0->f_3))
	{
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
		return true;
	}
	return false;
}

void func_456(int iParam0)
{
	if (iParam0->f_65 == 0)
	{
		__LIB_4__::func_901(*iParam0, 16);
	}
	else if (iParam0->f_65 == 1)
	{
		__LIB_4__::func_901(*iParam0, 32);
	}
	else if (iParam0->f_65 == 2)
	{
		__LIB_4__::func_901(*iParam0, 64);
	}
}

bool func_457(int iParam0, int iParam1)
{
	if (__LIB_5__::func_236(1))
	{
		return false;
	}
	switch (iParam0->f_7)
	{
		case 1:
			__LIB_1__::func_265(iParam0->f_3, "NPE_PRIS_GREET", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
			return true;
	}
	return false;
}

bool func_458(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = Global_1396116.f_98[iParam1 /*2*/];
	if (__LIB_2__::func_986(iVar0))
	{
		if (!__LIB_0__::func_491(iParam0, 518218985))
		{
			TASK::TASK_SMART_FLEE_COORD(iParam0, __LIB_9__::func_659(iVar0), 100f, -1, false, 1077936128);
		}
		return true;
	}
	return false;
}

void func_459(int iParam0)
{
	if (iParam0->f_8 == 3)
	{
		__LIB_2__::func_344(&(iParam0->f_3));
		__LIB_2__::func_480(&(iParam0->f_30), 0, 0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 448, false);
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
	}
}

bool func_460()
{
	if (((Local_14.f_7 == 11 || Local_14.f_7 == 13) || Local_14.f_7 == 12) || Local_14.f_7 == 9)
	{
		return true;
	}
	return false;
}

bool func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0->f_3);
		iVar1 = __LIB_12__::func_453(iVar0);
		if (iVar1 == 1)
		{
			return true;
		}
		else if (iVar1 != iParam0->f_7)
		{
			iParam0->f_7 = iVar1;
			return true;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
	return false;
}

Vector3 func_462(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	vector3 vVar1[24];
	sVar0 = "";
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BOU1_PERS1CELL";
						break;
					case 1:
						sVar0 = "BOU1_PERS1POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS1NEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BOU1_PERS2CELL";
						break;
					case 1:
						sVar0 = "BOU1_PERS2POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS2NEG";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						sVar0 = "BOU1_PERS3POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS3NEG";
						break;
				}
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL1";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT05_CELL1POSJ", "RBT05_CELL1POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT05_CELL1NEGJ", "RBT05_CELL1NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBT05_CELL1BPSJ", "RBT05_CELL1BPSA");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBT05_CELL1BNGJ", "RBT05_CELL1NEGA");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL2";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT05_CELL2POSJ", "RBT05_CELL2POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT05_CELL2NEGJ", "RBT05_CELL2NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBT05_CELL2BPSJ", "RBT05_CELL2BPSA");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBT05_CELL2BNGJ", "RBT05_CELL2BNGA");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL3";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT05_CELL3POSJ", "RBT05_CELL3POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT05_CELL3NEGJ", "RBT05_CELL3NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBT05_CELL3BPSJ", "RBT05_CELL3BPSA");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBT05_CELL3BNGJ", "RBT05_CELL3BNGA");
						break;
				}
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBDULCELL1POSJ", "RBDULCELL1POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBDULCELL1NEGJ", "RBDULCELL1NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBDULCELL2POSJ", "RBDULCELL2POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBDULCELL2NEGJ", "RBDULCELL2NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBDULCELL3POSJ", "RBDULCELL3POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBDULCELL3NEGJ", "RBDULCELL3NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL1";
						break;
					case 1:
						sVar0 = "RBT03_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL2";
						break;
					case 1:
						sVar0 = "RBT03_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL3";
						break;
					case 1:
						sVar0 = "RBT03_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL3NEGR";
						break;
				}
			}
			break;
		case 6:
			if (__LIB_10__::func_133(13, 8))
			{
				if (iParam1 == 0)
				{
					switch (iParam2)
					{
						case 0:
							sVar0 = "BRA_CELL1_FK";
							break;
						case 1:
							sVar0 = __LIB_12__::func_454("BRA_CELL1P_FK_J", "BRA_CELL1P_FK_A");
							break;
						case 2:
							sVar0 = __LIB_12__::func_454("BRA_CELL1N_FK_J", "BRA_CELL1N_FK_A");
							break;
						case 3:
							sVar0 = "BRA_CELL1PR_FK";
							break;
						case 5:
							sVar0 = "BRA_CELL1NR_FK";
							break;
					}
				}
				else if (iParam1 == 1)
				{
					switch (iParam2)
					{
						case 0:
							sVar0 = "BRA_CELL1_FK";
							break;
						case 1:
							sVar0 = __LIB_12__::func_454("BRA_CELL2P_FK_J", "BRA_CELL2P_FK_A");
							break;
						case 2:
							sVar0 = __LIB_12__::func_454("BRA_CELL2N_FK_J", "BRA_CELL2N_FK_A");
							break;
						case 3:
							sVar0 = "BRA_CELL2PR_FK";
							break;
						case 5:
							sVar0 = "BRA_CELL2NR_FK";
							break;
					}
				}
			}
			else if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BRA_CELL1_FA";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("BRA_CELL1P_FA_J", "BRA_CELL1P_FA_A");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("BRA_CELL1N_FA_J", "BRA_CELL1N_FA_A");
						break;
					case 3:
						sVar0 = "BRA_CELL1PR_FA";
						break;
					case 5:
						sVar0 = "BRA_CELL1NR_FA";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BRA_CELL1_FA";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("BRA_CELL2P_FA_J", "BRA_CELL2P_FA_A");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("BRA_CELL2N_FA_J", "BRA_CELL2N_FA_A");
						break;
					case 3:
						sVar0 = "BRA_CELL2PR_FA";
						break;
					case 5:
						sVar0 = "BRA_CELL2NR_FA";
						break;
				}
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL1";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT12CELL1POSJ", "RBT12CELL1POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT12CELL1NEGJ", "RBT12CELL1NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL2";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT12CELL2POSJ", "RBT12CELL2POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT12CELL2NEGJ", "RBT12CELL2NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL3";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT12CELL3POSJ", "RBT12CELL3POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT12CELL3NEGJ", "RBT12CELL3NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL3PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL3NREP";
						break;
				}
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT14_CELL1POSJ", "RBT14_CELL1POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT14_CELL1NEGJ", "RBT14_CELL1NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBT14_C1POSJRSP", "RBT14_C1POSARSP");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBT14_C1NEGJRSP", "RBT14_C1NEGARSP");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT14_CELL2POSJ", "RBT14_CELL2POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT14_CELL2NEGJ", "RBT14_CELL2NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBT14_C2POSJRSP", "RBT14_C2POSARSP");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBT14_C2NEGJRSP", "RBT14_C2NEGARSP");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBT14_CELL3POSJ", "RBT14_CELL3POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBT14_CELL3NEGJ", "RBT14_CELL3NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBT14_C3POSJRSP", "RBT14_C3POSARSP");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBT14_C3NEGJRSP", "RBT14_C3NEGARSP");
						break;
				}
			}
			break;
		case 9:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBCON_CELL1POSJ", "RBCON_CELL1POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBCON_CELL1NEGJ", "RBCON_CELL1NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBCONCELL1POSRJ", "RBCON_CELL1POSR");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBCONCELL1NEGRJ", "RBCON_CELL1NEGR");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBCON_CELL2POSJ", "RBCON_CELL2POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBCON_CELL2NEGJ", "RBCON_CELL2NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBCONCELL2POSRJ", "RBCON_CELL2POSR");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBCONCELL2NEGRJ", "RBCON_CELL2NEGR");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = __LIB_12__::func_454("RBCON_CELL3POSJ", "RBCON_CELL3POSA");
						break;
					case 2:
						sVar0 = __LIB_12__::func_454("RBCON_CELL3NEGJ", "RBCON_CELL3NEGA");
						break;
					case 3:
						sVar0 = __LIB_12__::func_454("RBCONCELL3POSRJ", "RBCON_CELL3POSR");
						break;
					case 5:
						sVar0 = __LIB_12__::func_454("RBCONCELL3NEGRJ", "RBCON_CELL3NEGR");
						break;
				}
			}
			break;
		case 10:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL1";
						break;
					case 1:
						sVar0 = "RBT15_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL2";
						break;
					case 1:
						sVar0 = "RBT15_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL3";
						break;
					case 1:
						sVar0 = "RBT15_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL3NEGR";
						break;
				}
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL1POS";
						break;
					case 2:
						sVar0 = "RBT20CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL1PNEG";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL2POS";
						break;
					case 2:
						sVar0 = "RBT20CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL2NREP";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL3POS";
						break;
					case 2:
						sVar0 = "RBT20CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL3PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL3NREP";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL1";
						break;
					case 1:
						sVar0 = "RBT18_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL2";
						break;
					case 1:
						sVar0 = "RBT18_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL3";
						break;
					case 1:
						sVar0 = "RBT18_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL3NEGR";
						break;
				}
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL1";
						break;
					case 1:
						sVar0 = "RBT21_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL1POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL1BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL1NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL1BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL2";
						break;
					case 1:
						sVar0 = "RBT21_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL2POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL2BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL2NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL2BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL3";
						break;
					case 1:
						sVar0 = "RBT21_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL3POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL3BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL3NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL3BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT22_CELL1";
						break;
					case 1:
						sVar0 = "RBT22_CELL1POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL1NEGJ";
						break;
					case 3:
						sVar0 = "RBT22_CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT22_CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT22_CELL2";
						break;
					case 1:
						sVar0 = "RBT22_CELL2POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL2NEGJ";
						break;
					case 3:
						sVar0 = "RBT22_CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT22_CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						sVar0 = "RBT22_CELL3POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL3NEGJ";
						break;
				}
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL1POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL1NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL2POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL2NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL13POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL3NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL3NEGR";
						break;
					case 4:
						sVar0 = "RBT23CELL3POS2J";
						break;
				}
			}
			break;
	}
	StringCopy(&cVar1, sVar0, 24);
	return cVar1;
}

bool func_463()
{
	if (((Local_47.f_7 == 11 || Local_47.f_7 == 13) || Local_47.f_7 == 12) || Local_47.f_7 == 9)
	{
		return true;
	}
	return false;
}

bool func_464(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_70))
	{
		__LIB_10__::func_101(iParam0->f_4, &(iParam0->f_70));
	}
	else if (!__LIB_1__::func_205(Global_35, iParam0->f_70, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_465(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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

void func_466()
{
	if (__LIB_12__::func_460() && Local_14.f_71)
	{
		__LIB_2__::func_753(Local_14.f_2, 0, 1, 0, 0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

Vector3 func_467()
{
	return -2370.027f, 472.4625f, 131.2446f;
}

int func_468()
{
	return 22;
}

char* func_469()
{
	return "shack_hungrybear1";
}

char* func_470(int iParam0)
{
	switch (iParam0)
	{
		case 885:
			return "WROBEL";
		case 714:
			return "RRCH1_Abe";
		default:
			break;
	}
	return "";
}

void func_471(var uParam0, int iParam1)
{
	__LIB_0__::func_516(&(uParam0->f_19), iParam1);
}

bool func_472(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!__LIB_2__::func_792(uParam0, 65536) && __LIB_0__::func_232(Global_35, iVar0, 1) > 25f)
		{
			__LIB_0__::func_82(1, 1, 0);
		}
		if (__LIB_11__::func_873(uParam0, bParam2))
		{
			if (__LIB_2__::func_793(__LIB_4__::func_850()))
			{
				__LIB_2__::func_794(__LIB_4__::func_850());
			}
			__LIB_2__::func_795(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (__LIB_2__::func_792(uParam0, 64))
		{
			return false;
		}
		if (__LIB_0__::func_232(Global_35, iVar0, 1) < 49f)
		{
			if (__LIB_4__::func_854(uParam0, iVar0))
			{
				__LIB_6__::func_687();
				if (bParam1)
				{
					if (!__LIB_11__::func_873(uParam0, bParam2))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_473(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 9:
			return true;
		case 11:
			return true;
		case 10:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 16:
			return true;
		default:
			break;
	}
	return false;
}

void func_474(int iParam0)
{
	Global_1395601.f_4 = (Global_1395601.f_4 - (Global_1395601.f_4 && iParam0));
}

int func_475(var uParam0)
{
	return uParam0->f_12;
}

void func_476()
{
	Global_1914319.f_16855.f_3 = 0;
}

bool func_477(int iParam0)
{
	return STREAMING::_0x8D56BDA343D9519F(__LIB_9__::func_28(iParam0));
}

var func_478()
{
	return Global_1914319.f_16855.f_3.f_7;
}

char* func_479()
{
	return "uiItemEnum";
}

int func_480(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_16855.f_3.f_16;
	}
	return Global_1914319.f_16855.f_3.f_10;
}

char* func_481()
{
	return "uiItemType";
}

char* func_482()
{
	return "uiPaletteOptionItemEnum";
}

bool func_483()
{
	return Global_1946804.f_978;
}

int func_484(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_30;
}

int func_485()
{
	int iVar0;
	iVar0 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID());
	return iVar0;
}

bool func_486(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (__LIB_0__::func_192(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_487(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1395601.f_5[iParam0 /*28*/].f_23))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1395601.f_5[iParam0 /*28*/].f_23, Global_36);
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 1156231582: /* GXTEntry: "Buzzed" */
			return -986108061;
		case joaat("CLOTHING_ITEM_HAIR_SWEPT_BACK"):
			return -1051664629;
		case -2120294484: /* GXTEntry: "Swept Back Fade" */
			return 1471627791;
		case -814448122: /* GXTEntry: "Left Parted" */
			return 1012091683;
		case 1279519416: /* GXTEntry: "Left Parted Fade" */
			return 282876023;
		case 933586678: /* GXTEntry: "Right Parted" */
			return 1334801974;
		case 1612093252: /* GXTEntry: "Right Parted Fade" */
			return -736147717;
		case 530132198: /* GXTEntry: "Middle Parted" */
			return -245303732;
		case -499492817: /* GXTEntry: "Middle Parted Fade" */
			return -1900633994;
		case -1392593303: /* GXTEntry: "Buzzed" */
			return -1511041621;
		case -2091943191: /* GXTEntry: "Left Parted" */
			return -193909113;
		case 1165676701: /* GXTEntry: "Left Parted Fade" */
			return -929316746;
		case 1380556716: /* GXTEntry: "Middle Parted" */
			return -1147723761;
		case -1140711191: /* GXTEntry: "Middle Parted Fade" */
			return 963009459;
		case -1189021969: /* GXTEntry: "Right Parted" */
			return 602337354;
		case 862555979: /* GXTEntry: "Right Parted Fade" */
			return -1471756535;
		case -674783297: /* GXTEntry: "Swept Back" */
			return -2017785881;
		case 279124309: /* GXTEntry: "Swept Back Fade" */
			return -827216318;
		default:
			break;
	}
	return 0;
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_BREED_AMERICANPAINT_OVERO"):
			return joaat("A_C_HORSE_AMERICANPAINT_OVERO");
		case joaat("HORSE_BREED_AMERICANPAINT_TOBIANO"):
			return joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
		case joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO"):
			return joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO");
		case joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
		case joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("HORSE_BREED_ANDALUSIAN_DARKBAY"):
			return joaat("A_C_HORSE_ANDALUSIAN_DARKBAY");
		case joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY"):
			return joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY");
		case joaat("HORSE_BREED_ANDALUSIAN_PERLINO"):
			return joaat("A_C_HORSE_ANDALUSIAN_PERLINO");
		case joaat("HORSE_BREED_APPALOOSA_BLANKET"):
			return joaat("A_C_HORSE_APPALOOSA_BLANKET");
		case joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET"):
			return joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
		case joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED"):
			return joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC");
		case joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD"):
			return joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD");
		case joaat("HORSE_BREED_APPALOOSA_LEOPARD"):
			return joaat("A_C_HORSE_APPALOOSA_LEOPARD");
		case joaat("HORSE_BREED_ARABIAN_BLACK"):
			return joaat("A_C_HORSE_ARABIAN_BLACK");
		case joaat("HORSE_BREED_ARABIAN_REDCHESTNUT"):
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT");
		case joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC"):
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC");
		case joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY"):
			return joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY");
		case joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE"):
			return joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC");
		case joaat("HORSE_BREED_ARABIAN_WHITE"):
			return joaat("A_C_HORSE_ARABIAN_WHITE");
		case joaat("HORSE_BREED_ARDENNES_BAYROAN"):
			return joaat("A_C_HORSE_ARDENNES_BAYROAN");
		case joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN"):
			return joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN");
		case joaat("HORSE_BREED_ARDENNES_IRONGREYROAN"):
			return joaat("A_C_HORSE_ARDENNES_IRONGREYROAN");
		case joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT"):
			return joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
		case joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT"):
			return joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
		case joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("HORSE_BREED_KENTUCKYSADDLE_BLACK"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
		case joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC");
		case joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("HORSE_BREED_KENTUCKYSADDLE_GREY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
		case joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
		case joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("HORSE_BREED_MORGAN_BAY"):
			return joaat("A_C_HORSE_MORGAN_BAY");
		case joaat("HORSE_BREED_MORGAN_BAYROAN"):
			return joaat("A_C_HORSE_MORGAN_BAYROAN");
		case joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT"):
			return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
		case joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT"):
			return joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC");
		case joaat("HORSE_BREED_MORGAN_PALOMINO"):
			return joaat("A_C_HORSE_MORGAN_PALOMINO");
		case joaat("HORSE_BREED_MUSTANG_GRULLODUN"):
			return joaat("A_C_HORSE_MUSTANG_GRULLODUN");
		case joaat("HORSE_BREED_MUSTANG_WILDBAY"):
			return joaat("A_C_HORSE_MUSTANG_WILDBAY");
		case joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("HORSE_BREED_NOKOTA_BLUEROAN"):
			return joaat("A_C_HORSE_NOKOTA_BLUEROAN");
		case joaat("HORSE_BREED_NOKOTA_WHITEROAN"):
			return joaat("A_C_HORSE_NOKOTA_WHITEROAN");
		case joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("HORSE_BREED_SHIRE_DARKBAY"):
			return joaat("A_C_HORSE_SHIRE_DARKBAY");
		case joaat("HORSE_BREED_SHIRE_LIGHTGREY"):
			return joaat("A_C_HORSE_SHIRE_LIGHTGREY");
		case joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL"):
			return joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
		case joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("HORSE_BREED_TENNESSEEWALKER_CHESTNUT"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		case joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC");
		case joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
		case joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN");
		case joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY"):
			return joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
		case joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY"):
			return joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
		case joaat("HORSE_BREED_THOROUGHBRED_BRINDLE"):
			return joaat("A_C_HORSE_THOROUGHBRED_BRINDLE");
		case joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("HORSE_BREED_TURKOMAN_DARKBAY"):
			return joaat("A_C_HORSE_TURKOMAN_DARKBAY");
		case joaat("HORSE_BREED_TURKOMAN_GOLD"):
			return joaat("A_C_HORSE_TURKOMAN_GOLD");
		case joaat("HORSE_BREED_TURKOMAN_SILVER"):
			return joaat("A_C_HORSE_TURKOMAN_SILVER");
		case joaat("HORSE_DONKEY"):
			return joaat("A_C_DONKEY_01");
		case joaat("HORSE_BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("HORSE_BREED_ARABIAN_GREY"):
			return joaat("A_C_HORSE_ARABIAN_GREY");
		case joaat("HORSE_BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("HORSE_BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("HORSE_BREED_MUSTANG_GOLDENDUN"):
			return joaat("A_C_HORSE_MUSTANG_GOLDENDUN");
		case joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
		case joaat("HORSE_BREED_SHIRE_RAVENBLACK"):
			return joaat("A_C_HORSE_SHIRE_RAVENBLACK");
		case -41062704:
			return joaat("A_C_HORSE_BUELL_WARVETS");
		case 887669186:
			return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
		case 2102774612:
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
		case -2011111190:
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
		case -535752499:
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
		case joaat("HORSE_BREED_MANGY_BACKUP"):
			return joaat("A_C_HORSE_MP_MANGY_BACKUP");
		default:
			break;
	}
	return 0;
}

void func_490(int iParam0, struct<8> Param1)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/] = { Param1 };
}

void func_491(int iParam0)
{
	__LIB_0__::func_7(&(Global_1914319.f_16855.f_3), iParam0);
}

int func_492()
{
	return 7;
}

void func_493(var uParam0)
{
	Global_1914319.f_16855.f_3.f_5 = uParam0;
}

void func_494(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319.f_16855.f_3.f_18 = Global_1914319.f_16855.f_3.f_14;
		Global_1914319.f_16855.f_3.f_14 = uParam0;
	}
	else
	{
		Global_1914319.f_16855.f_3.f_11 = Global_1914319.f_16855.f_3.f_8;
		Global_1914319.f_16855.f_3.f_8 = uParam0;
	}
}

int func_495(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	if (iParam0 != 0)
	{
		iVar0 = __LIB_0__::func_357(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < __LIB_0__::func_857(iParam0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

bool func_496(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
		case -1719060085:
		case -1632561800:
		case -1440373417:
		case -1423861687:
		case -839140560:
		case -497931013:
		case 81053684:
		case 172394747:
		case 461122406:
		case 502936876:
		case 562107429:
		case 684307653:
		case 688587926:
		case 698653232:
		case 1282123855:
		case 1477698721:
		case 1769055947:
		case 1868067663:
		case 2016058810:
		case 2047428024:
			return true;
		default:
			break;
	}
	return false;
}

void func_497(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = -1;
}

Vector3 func_498(int iParam0)
{
	return VOLUME::_GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3);
}

int func_499(vector3 vParam0)
{
	return BUILTIN::ROUND(BUILTIN::VDIST(Global_36, vParam0));
}

bool func_500(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0 /*5*/] == iParam1)
		{
			*uParam2 = { uParam0->f_1[iVar0 /*5*/] };
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_501(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Global_1914319.f_17042.f_70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_17042.f_70[iVar0]))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(Global_1914319.f_17042.f_70[iVar0]);
			iVar1 = __LIB_9__::func_812(iVar2);
			if (iVar1 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_502(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return -1;
	}
	if (!__LIB_0__::func_192(iParam0, -1227898937))
	{
		return -1;
	}
	if (__LIB_0__::func_192(iParam0, -958604072))
	{
		return 0;
	}
	else if (__LIB_0__::func_192(iParam0, -726894473))
	{
		return 1;
	}
	else if (__LIB_0__::func_192(iParam0, -1705966655))
	{
		return 2;
	}
	else if (__LIB_0__::func_192(iParam0, -1205780639))
	{
		return 3;
	}
	else if (__LIB_0__::func_192(iParam0, -825365342))
	{
		return 4;
	}
	else if (__LIB_0__::func_192(iParam0, -580548123))
	{
		return 5;
	}
	else if (__LIB_0__::func_192(iParam0, -1536419873))
	{
		return 6;
	}
	else if (__LIB_0__::func_192(iParam0, -1306610876))
	{
		return 7;
	}
	else if (__LIB_0__::func_192(iParam0, 149872887))
	{
		return 8;
	}
	else if (__LIB_0__::func_192(iParam0, 1252156801))
	{
		return 9;
	}
	else if (__LIB_0__::func_192(iParam0, -217500080))
	{
		return 10;
	}
	else if (__LIB_0__::func_192(iParam0, -515403059))
	{
		return 11;
	}
	else if (__LIB_0__::func_192(iParam0, 387251815))
	{
		return 12;
	}
	else if (__LIB_0__::func_192(iParam0, 90594058))
	{
		return 13;
	}
	return -1;
}

Vector3 func_503(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { uParam0->f_2[iParam1 /*3*/] };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
	{
		return vVar0;
	}
	return uParam0->f_2[iParam1 /*3*/];
}

void func_504(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 72, true);
	ENTITY::_0x18FF3110CF47115D(iParam0, 9, 1);
	PED::_0xAE6004120C18DF97(iParam0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, true);
	if (PED::_0x33FA048675821DA7(iParam0, 0))
	{
		PED::_0x2EB75FB86C41F026(iParam0, 0, 0);
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ALLY"));
}

int func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("HORSE_BLANKETS");
		case 1:
			return joaat("HORSE_REINS");
		case 2:
			return joaat("HORSE_SADDLES");
		case 3:
			return joaat("SADDLE_HORN");
		case 7:
			return joaat("SADDLE_STIRRUP");
		case 9:
			return joaat("HORSE_BEDROLLS");
		case 10:
			return joaat("HORSE_SADDLEBAGS");
		case 11:
			return joaat("HORSE_MANES");
		case 12:
			return joaat("HORSE_TAILS");
		case 13:
			return joaat("HORSE_GENITALS");
		default:
			break;
	}
	return -1;
}

int func_506(int iParam0, var uParam1)
{
	struct<4> Var0;
	if (!__LIB_0__::func_30(iParam0))
	{
		return 0;
	}
	Var0 = uParam1;
	Var0.f_2 = 192444604;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_507(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	struct<5> Var0;
	if (!__LIB_0__::func_30(iParam0))
	{
		return 0;
	}
	Var0 = uParam2;
	Var0.f_2 = 833374898;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1392893044;
		DATAFILE::_DATAFILE_GET_HASH(iParam3, &Var0);
		Var0.f_2 = 1214284824;
		DATAFILE::_DATAFILE_GET_INT(iParam4, &Var0);
	}
	else
	{
		return 0;
	}
	return 1;
}

char* func_508(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_FEWSPOTTED_PC"):
			return "BREED_APPALOOSA_FEWSPOTTED_PC";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_ARABIAN_REDCHESTNUT_PC"):
			return "BREED_ARABIAN_REDCHESTNUT_PC";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WARPEDBRINDLE_PC"):
			return "BREED_ARABIAN_WARPEDBRINDLE_PC";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return "BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_LIVERCHESTNUT_PC"):
			return "BREED_MORGAN_LIVERCHESTNUT_PC";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return "BREED_TENNESSEEWALKER_GOLDPALOMINO_PC";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

bool func_509(int iParam0)
{
	return __LIB_0__::func_857(iParam0) > 0;
}

bool func_510(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_356(iParam0);
	switch (iVar0)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("WEAPON_MOD"):
		case 1194991665:
			return true;
		default:
			break;
	}
	iVar1 = __LIB_0__::func_357(iParam0);
	switch (iVar1)
	{
		case -1307071228:
		case -791307532:
		case 1117585025:
		case 1147306508:
		case 1511828864:
			return true;
		default:
			break;
	}
	return false;
}

int func_511(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0 /*45*/] = iParam1;
	return 1;
}

int func_512(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	__LIB_0__::func_15(__LIB_0__::func_14(joaat("LIFETIME_MONEY_SPENT_IN_SHOPS")), iParam1);
	Global_20710[iVar0 /*45*/].f_43 = (Global_20710[iVar0 /*45*/].f_43 + iParam1);
	return 1;
}

int func_513(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0 /*45*/].f_44 = (Global_20710[iVar0 /*45*/].f_44 + iParam1);
	return 1;
}

void func_514(int iParam0, int iParam1, bool bParam2)
{
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, iParam1, 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_515(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
		case joaat("CONSUMABLE_HERB_HUMMINGBIRD_SAGE"):
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_HERB_SAGE"):
		case joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"):
		case joaat("CONSUMABLE_BEETS"):
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
		case joaat("CONSUMABLE_PEPPERMINT"):
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
		case joaat("CONSUMABLE_CORN"):
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
		case joaat("CONSUMABLE_HERB_BLACK_CURRANT"):
		case joaat("CONSUMABLE_HERB_AMERICAN_GINSENG"):
		case joaat("CONSUMABLE_HERB_GOLDEN_CURRANT"):
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
		case joaat("CONSUMABLE_HERB_RED_SAGE"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
		case joaat("CONSUMABLE_PEACH"):
		case joaat("CONSUMABLE_HERB_DESERT_SAGE"):
		case joaat("CONSUMABLE_CARROT"):
		case joaat("CONSUMABLE_HERB_OREGANO"):
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
		case joaat("CONSUMABLE_HERB_CURRANT"):
		case joaat("CONSUMABLE_PEAR"):
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
		case joaat("CONSUMABLE_HERB_GINSENG"):
		case joaat("CONSUMABLE_HAYCUBE"):
		case joaat("CONSUMABLE_APPLE"):
		case joaat("CONSUMABLE_HERB_ALASKAN_GINSENG"):
		case joaat("CONSUMABLE_CELERY"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return true;
	}
	return false;
}

bool func_516(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			return true;
	}
	return false;
}

bool func_517(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_HORSE_STIMULANT_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"):
			return true;
	}
	return false;
}

bool func_518(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"):
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			return true;
	}
	return false;
}

bool func_519(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"):
			return true;
	}
	return false;
}

bool func_520(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HORSE_CARE_PACKAGE"):
			return true;
	}
	return false;
}

bool func_521(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_HORSE_BRUSH"):
			return true;
	}
	return false;
}

int func_522()
{
	return Global_1900372.f_9;
}

int func_523(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return 779169510;
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_DONKEY_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_SHIRE_RAVENBLACK"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_WINTER02_01"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_EAGLEFLIES"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_BILL"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_CHARLES"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_DUTCH"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_HOSEA"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_JAVIER"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_JOHN"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_KAREN"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_KIERAN"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_LENNY"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_MICAH"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_SADIE"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_SEAN"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_UNCLE"):
			return 779169510;
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
			return 779169510;
		default:
			break;
	}
	return 779169510;
}

char* func_524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

char* func_525(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "COAT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "COAT_TOB";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "COAT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "COAT_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "COAT_PALDAP";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "COAT_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "COAT_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "COAT_LEOPBLANKET";
		case joaat("BREED_APPALOOSA_FEWSPOTTED_PC"):
			return "COAT_FEWSPOTTED";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "COAT_BRLEOP";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "COAT_LEOP";
		case joaat("BREED_ARABIAN_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_ARABIAN_REDCHESTNUT_PC"):
			return "COAT_REDCH";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "COAT_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WARPEDBRINDLE_PC"):
			return "COAT_WARPEDBRINDLE";
		case joaat("BREED_ARABIAN_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "COAT_STRAWR";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "COAT_IRONGREYR";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "COAT_BLONDCH";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "COAT_MEALYCH";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "COAT_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "COAT_CHOCR";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "COAT_PIETOB";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "COAT_DAPDARKGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return "COAT_BUTTERMILKBUCKSKIN";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "COAT_CHPIN";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "COAT_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "COAT_AMBCHA";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "COAT_SILVERDAPPINT";
		case joaat("BREED_MORGAN_BAY"):
			return "COAT_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_MORGAN_LIVERCHESTNUT_PC"):
			return "COAT_LIVERCH";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "COAT_PAL";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "COAT_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "COAT_TIGSTRBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "COAT_BLUER";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "COAT_WHITER";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "COAT_REVDAPR";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "COAT_LGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "COAT_BLACKRAB";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "COAT_CH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "COAT_DAPBAY";
		case joaat("BREED_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return "COAT_GOLDPALOMINO";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "COAT_FLAXR";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "COAT_BLBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "COAT_DAPGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "COAT_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "COAT_BLACKCH";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "COAT_REVDAPBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "COAT_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_DONKEY"):
			return "COAT_NONE";
		case joaat("BREED_MULE"):
			return "COAT_NONE";
		case joaat("BREED_MULE_PAINTED"):
			return "COAT_NONE";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "COAT_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "COAT_BLACKSNO";
		case joaat("BREED_ARABIAN_GREY"):
			return "COAT_GREY";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "COAT_LIVERCH";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "COAT_SABLECHAMP";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "COAT_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "COAT_MAHBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "COAT_RAVBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "COAT_CHEMGOLD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "COAT_SEALBR";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "COAT_BLANKET";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "COAT_BLUER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "COAT_BLACKRAB";
		case joaat("BREED_WINTER02_01"):
			return "COAT_SILVERBAY";
		case joaat("BREED_EAGLEFLIES"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_GANG_BILL"):
			return "COAT_BROWNR";
		case joaat("BREED_GANG_CHARLES"):
			return "COAT_GREYSNOWCAPSPOTTED";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "COAT_GREYROANSABINO";
		case joaat("BREED_GANG_DUTCH"):
			return "COAT_ALBINO";
		case joaat("BREED_GANG_HOSEA"):
			return "COAT_SILVER";
		case joaat("BREED_GANG_JAVIER"):
			return "COAT_GREYOVERO";
		case joaat("BREED_GANG_JOHN"):
			return "COAT_SILVERDARKBAY";
		case joaat("BREED_GANG_KAREN"):
			return "COAT_SMOKYBLACK";
		case joaat("BREED_GANG_KIERAN"):
			return "COAT_FLAXR";
		case joaat("BREED_GANG_LENNY"):
			return "COAT_LIGHTPALOMINO";
		case joaat("BREED_GANG_MICAH"):
			return "COAT_BLACK";
		case joaat("BREED_GANG_SADIE"):
			return "COAT_GOLDDAP";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "COAT_DARKBAYROAN";
		case joaat("BREED_GANG_SEAN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "COAT_BRLEOP";
		case joaat("BREED_GANG_UNCLE"):
			return "COAT_SABINO";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "COAT_FEWSPOTBUCKSKIN";
		case joaat("BREED_MANGY_BACKUP"):
			return "COAT_NONE";
		default:
			break;
	}
	return "";
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SHOP_BLK_GENERAL_STORE"):
			return 7;
		case joaat("SHOP_BLK_GUNSMITH"):
			return 8;
		case joaat("SHOP_BLK_BARBER"):
			return 9;
		case joaat("SHOP_BLK_TAILOR"):
			return 17;
		case joaat("SHOP_BLK_HORSE_SHOP"):
			return 13;
		case joaat("SHOP_BLK_POST_OFFICE"):
			return 14;
		case joaat("SHOP_BLK_TRAIN_STATION"):
			return 15;
		case joaat("SHOP_BLK_HORSE_FENCE_MP"):
			return 108;
		case joaat("SHOP_BLK_PHOTO_STUDIO"):
			return 12;
		case joaat("SHOP_BLK_NEWSPAPER_BOY"):
			return 16;
		case joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN"):
			return 106;
		case joaat("SHOP_BLK_COACH"):
			return 107;
		case joaat("SHOP_BLK_BANK"):
			return 6;
		case joaat("SHOP_BLK_BUTCHER"):
			return 10;
		case joaat("SHOP_BLK_BARTENDER"):
			return 11;
		case joaat("SHOP_EMR_GENERAL_STORE"):
			return 19;
		case joaat("SHOP_EMR_POST_OFFICE"):
			return 20;
		case joaat("SHOP_EMR_TRAIN_STATION"):
			return 21;
		case joaat("SHOP_EMR_FENCE"):
			return 18;
		case joaat("SHOP_EMR_HORSE_FENCE_MP"):
			return 105;
		case joaat("SHOP_LAG_BAIT_STORE"):
			return 22;
		case joaat("SHOP_LAG_HORSE_FENCE_MP"):
			return 118;
		case joaat("SHOP_SDN_BANK"):
			return 36;
		case joaat("SHOP_SDN_BARBER"):
			return 37;
		case joaat("SHOP_SDN_BUTCHER"):
			return 38;
		case joaat("SHOP_SDN_DOCTOR"):
			return 39;
		case joaat("SHOP_SDN_EXOTIC"):
			return 40;
		case joaat("SHOP_SDN_FENCE"):
			return 41;
		case joaat("SHOP_SDN_GENERAL_STORE"):
			return 42;
		case joaat("SHOP_SDN_GUNSMITH"):
			return 43;
		case joaat("SHOP_SDN_HORSE_SHOP"):
			return 44;
		case joaat("SHOP_SDN_POST_OFFICE"):
			return 45;
		case joaat("SHOP_SDN_TRAIN_STATION"):
			return 46;
		case joaat("SHOP_SDN_TAILOR"):
			return 47;
		case joaat("SHOP_SDN_HORSE_FENCE_MP"):
			return 111;
		case joaat("SHOP_SDN_TRAPPER"):
			return 55;
		case joaat("SHOP_SDN_MARKET"):
			return 48;
		case joaat("SHOP_SDN_FRENCH_MARKET01"):
			return 49;
		case -1673339528:
			return 50;
		case joaat("SHOP_SDN_BARTENDER_SLUM"):
			return 53;
		case joaat("SHOP_SDN_PHOTO_STUDIO"):
			return 54;
		case joaat("SHOP_SDN_NEWSPAPER_BOY"):
			return 51;
		case joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN"):
			return 109;
		case joaat("SHOP_SDN_COACH"):
			return 110;
		case joaat("SHOP_SDN_BARTENDER"):
			return 52;
		case joaat("SHOP_RGG_POST_OFFICE"):
			return 23;
		case joaat("SHOP_RGG_TRAIN_STATION"):
			return 24;
		case joaat("SHOP_RHO_GENERAL_STORE"):
			return 28;
		case joaat("SHOP_RHO_FENCE"):
			return 27;
		case joaat("SHOP_RHO_GUNSMITH"):
			return 29;
		case joaat("SHOP_RHO_POST_OFFICE"):
			return 30;
		case joaat("SHOP_RHO_BUTCHER"):
			return 26;
		case joaat("SHOP_RHO_TRAIN_STATION"):
			return 31;
		case joaat("SHOP_RHO_HORSE_FENCE_MP"):
			return 113;
		case joaat("SHOP_RHO_NEWSPAPER_BOY"):
			return 32;
		case joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN"):
			return 112;
		case joaat("SHOP_RHO_BANK"):
			return 25;
		case joaat("SHOP_RHO_BARTENDER"):
			return 33;
		case joaat("SHOP_STR_BUTCHER"):
			return 60;
		case joaat("SHOP_STR_GENERAL_STORE"):
			return 61;
		case joaat("SHOP_STR_WELCOME_CENTER"):
			return 62;
		case joaat("SHOP_STR_HORSE_SHOP"):
			return 63;
		case joaat("SHOP_STR_POST_OFFICE"):
			return 65;
		case joaat("SHOP_STR_HORSE_FENCE_MP"):
			return 115;
		case joaat("SHOP_STR_NEWSPAPER_BOY"):
			return 64;
		case joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN"):
			return 114;
		case joaat("SHOP_STR_BARTENDER"):
			return 66;
		case joaat("SHOP_VAL_DOCTOR"):
			return 73;
		case joaat("SHOP_VAL_GENERAL_STORE"):
			return 74;
		case joaat("SHOP_VAL_GUNSMITH"):
			return 75;
		case joaat("SHOP_VAL_BARBER"):
			return 69;
		case joaat("SHOP_VAL_POST_OFFICE"):
			return 77;
		case joaat("SHOP_VAL_HORSE_SHOP"):
			return 76;
		case joaat("SHOP_VAL_BARTENDER_KEANE"):
			return 71;
		case joaat("SHOP_VAL_BARTENDER_SLUM"):
			return 81;
		case joaat("SHOP_VAL_BUTCHER"):
			return 72;
		case joaat("SHOP_VAL_NEWSPAPER_BOY"):
			return 80;
		case joaat("SHOP_VAL_HOTEL"):
			return 79;
		case joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN"):
			return 102;
		case joaat("SHOP_VAL_COACH"):
			return 103;
		case joaat("SHOP_VAL_TRAIN_STATION"):
			return 78;
		case joaat("SHOP_VAL_HORSE_FENCE_MP"):
			return 104;
		case joaat("SHOP_VAL_BARTENDER"):
			return 70;
		case joaat("SHOP_VAL_BANK"):
			return 68;
		case joaat("SHOP_SCM_HORSE_SHOP"):
			return 35;
		case joaat("SHOP_ASB_NEWSPAPER_BOY"):
			return 1;
		case joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN"):
			return 120;
		case joaat("SHOP_ASB_GUNSMITH"):
			return 0;
		case joaat("SHOP_ASB_POST_OFFICE"):
			return 2;
		case joaat("SHOP_ASB_TRAIN_STATION"):
			return 3;
		case joaat("SHOP_ASB_HORSE_FENCE_MP"):
			return 121;
		case joaat("SHOP_VAN_POST_OFFICE"):
			return 86;
		case joaat("SHOP_VAN_TRAIN_STATION"):
			return 85;
		case joaat("SHOP_VAN_FENCE"):
			return 82;
		case joaat("SHOP_VAN_HORSE_FENCE_MP"):
			return 117;
		case joaat("SHOP_VAN_HORSE_SHOP"):
			return 84;
		case joaat("SHOP_VAN_BARTENDER"):
			return 83;
		case joaat("SHOP_VAN_COACH"):
			return 116;
		case joaat("SHOP_WAL_POST_OFFICE"):
			return 89;
		case joaat("SHOP_WAL_GENERAL_STORE"):
			return 87;
		case joaat("SHOP_WAL_TRAIN_STATION"):
			return 88;
		case joaat("SHOP_DYNAMIC"):
			return 101;
		case joaat("SHOP_WILDERNESS_SUPPLIES"):
			return 126;
		case joaat("SHOP_ANYWHERE_HANDHELD"):
			return 127;
		case joaat("SHOP_MAP_HORSE_FENCE_MP"):
			return 124;
		case joaat("SHOP_WEAPON_MOD_STORE"):
			return 149;
		case joaat("SHOP_CLOTHING"):
			return 150;
		case joaat("SHOP_CAMP_SHAVING"):
			return 151;
		case joaat("SHOP_WARDROBE"):
			return 152;
		case joaat("SHOP_BVH_DOCTOR"):
			return 128;
		case joaat("SHOP_BVH_GENERAL_STORE"):
			return 129;
		case joaat("SHOP_BVH_GUNSMITH"):
			return 130;
		case joaat("SHOP_BVH_HORSE_TRAINER"):
			return 131;
		case 1529797091:
			return 59;
		case joaat("SHOP_CLM_DOCTOR"):
			return 132;
		case joaat("SHOP_CLM_GENERAL_STORE"):
			return 133;
		case joaat("SHOP_CLM_GUNSMITH"):
			return 134;
		case joaat("SHOP_CLM_HORSE_TRAINER"):
			return 135;
		case 1388932648:
			return 57;
		case joaat("SHOP_HSO_DOCTOR"):
			return 137;
		case joaat("SHOP_HSO_GENERAL_STORE"):
			return 138;
		case joaat("SHOP_HSO_GUNSMITH"):
			return 139;
		case joaat("SHOP_HSO_HORSE_TRAINER"):
			return 140;
		case 878376253:
			return 56;
		case joaat("SHOP_LAK_DOCTOR"):
			return 141;
		case joaat("SHOP_LAK_GENERAL_STORE"):
			return 142;
		case joaat("SHOP_LAK_GUNSMITH"):
			return 143;
		case joaat("SHOP_LAK_HORSE_TRAINER"):
			return 144;
		case joaat("SHOP_SHB_DOCTOR"):
			return 145;
		case joaat("SHOP_SHB_GENERAL_STORE"):
			return 146;
		case joaat("SHOP_SHB_GUNSMITH"):
			return 147;
		case joaat("SHOP_SHB_HORSE_TRAINER"):
			return 148;
		case -2076086367:
			return 58;
		case joaat("SHOP_CLM_HORSE_FENCE"):
			return 136;
		case joaat("SHOP_BUT_HORSE_FENCE_MP"):
			return 122;
		case joaat("SHOP_CKT_HORSE_FENCE_MP"):
			return 119;
		case joaat("SHOP_AMD_GENERAL_STORE"):
			return 95;
		case joaat("SHOP_AMD_BARTENDER"):
			return 97;
		case joaat("SHOP_AMD_POST_OFFICE"):
			return 96;
		case joaat("SHOP_TBL_GENERAL_STORE"):
			return 90;
		case joaat("SHOP_TBL_BARTENDER"):
			return 93;
		case joaat("SHOP_TBL_GUNSMITH"):
			return 91;
		case joaat("SHOP_TBL_BUTCHER"):
			return 92;
		case joaat("SHOP_TBL_HORSE_SHOP"):
			return 94;
		case joaat("SHOP_RYC_FENCE"):
			return 98;
		case joaat("SHOP_THL_FENCE"):
			return 125;
		case joaat("SHOP_BEN_HORSE_FENCE_MP"):
			return 123;
		case joaat("SHOP_BEN_POST_OFFICE"):
			return 99;
		case joaat("SHOP_BEN_TRAIN_STATION"):
			return 100;
		case 548657065:
			return 4;
		case 243086140:
			return 5;
		case -305029900:
			return 34;
		case 1008537949:
			return 67;
		default:
			break;
	}
	return -1;
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 1878119008:
			return 1;
		case -763754001:
			return 2;
		case -2070667823:
			return 3;
		case 1913961621:
			return 4;
		case -1639875523:
			return 5;
		case 1152212868:
			return 6;
		case -896359939:
			return 7;
		case -1208666461:
			return 8;
		case -96404409:
			return 9;
		case -159753986:
			return 10;
		case 1515011454:
			return 11;
		case -1068752759:
			return 12;
		case joaat("FEATURE_FAST_TRAVEL"):
			return 13;
		case -191041521:
			return 14;
		case 1609230909:
			return 15;
		case -64180638:
			return 16;
		case 416734162:
			return 18;
		case -1848507003:
			return 19;
		case 320932611:
			return 20;
		case 185262785:
			return 21;
		case -732096723:
			return 22;
		case 258154979:
			return 23;
		case 582249717:
			return 24;
		case 2131612943:
			return 25;
		case 812697640:
			return 26;
		case -913024197:
			return 27;
		case 2001431814:
			return 28;
		case 1426881543:
			return 29;
		case -16211256:
			return 30;
		case -889486130:
			return 31;
		case joaat("FEATURE_HORSE_WHISTLE"):
			return 32;
		case -1240001687:
			return 33;
		case -971566626:
			return 34;
		case -1969635329:
			return 35;
		case 1041457841:
			return 36;
		case -1996662241:
			return 37;
		case 538842110:
			return 38;
		case -2026584235:
			return 39;
		case 1054604415:
			return 40;
		case -996833712:
			return 41;
		case -1855584096:
			return 42;
		case 289987979:
			return 43;
		case -1318177825:
			return 44;
		case -531885143:
			return 45;
		case 1800207473:
			return 46;
		case 800393418:
			return 47;
		case -1154683373:
			return 48;
		case -398701830:
			return 49;
		case -2079117324:
			return 50;
		case -368419713:
			return 51;
		case 1052011466:
			return 52;
		case 341220053:
			return 53;
		case -1446082848:
			return 54;
		case 368335242:
			return 55;
		case 673269589:
			return 56;
	}
	return 0;
}

int func_528(int iParam0)
{
	switch (iParam0)
	{
		case -135031081:
			return 0;
		case 687405277:
			return 1;
		case -1151230536:
			return 2;
		case -1114660332:
			return 3;
		case -808040799:
			return 4;
		case -464818293:
			return 5;
		case -2054573559:
			return 6;
		case -1799597970:
			return 7;
		case -1441891566:
			return 8;
		case 1337541877:
			return 9;
		case -43048862:
			return 10;
		case -199422530:
			return 11;
		case 568125757:
			return 12;
		case 411031171:
			return 13;
	}
	return -1;
}

int func_529(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (__LIB_8__::func_622(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
	}
	return 0;
}

bool func_530(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return true;
	}
	return false;
}

bool func_531(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return true;
	}
	return false;
}

bool func_532(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_PEPPERMINT"):
		case joaat("CONSUMABLE_SUGARCUBE"):
			return true;
	}
	return false;
}

int func_533(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (__LIB_9__::func_368(iParam1, &iVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	return 0;
}

void func_534(int iParam0)
{
	Global_1900383.f_444.f_9 = iParam0;
}

int func_535(int iParam0)
{
	return 20;
}

void func_536(int iParam0, int iParam1, float fParam2)
{
	fParam2 = __LIB_0__::func_251(fParam2, 0f, 1E+09f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_2 = fParam2;
}

int func_537()
{
	return Global_1900383.f_421;
}

void func_538(int iParam0)
{
	Global_1900383.f_421 = iParam0;
}

char* func_539(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "HORSE_CLASS_RACEWORK";
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "HORSE_CLASS_WARWORK";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "HORSE_CLASS_RACEWAR";
	}
	return "HORSE_CLASS_MULTI";
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_STYLE_OUTFIT_AMDSHOP_001_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_AMDSHOP_002_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_BLCKSHOP_001_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_BLCKSHOP_002_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_RHDSHOP_001_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_RHDSHOP_002_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_SDSHOP_001_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_SDSHOP_002_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_STRSHOP_001_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_STRSHOP_002_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_TBLSHOP_001_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_TBLSHOP_002_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_VALSHOP_001_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_VALSHOP_002_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_WALSHOP_001_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
			break;
		case joaat("CLOTHING_STYLE_OUTFIT_NEW_WALSHOP_002_H"):
			iParam0 = joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
			break;
	}
	return iParam0;
}

void func_541(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	fParam1 = (fParam1 * 0.01f);
	iVar1 = ENTITY::GET_ENTITY_HEALTH(iParam0);
	iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false);
	iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(iVar2)));
	iVar3 = iVar0;
	if ((iVar1 + iVar0) > iVar2)
	{
		iVar3 = (iVar2 - iVar1);
	}
	iVar4 = (iVar1 + iVar3);
	ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar4, 0);
}

void func_542(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	if (__LIB_8__::func_622(iParam1, &iVar0))
	{
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iVar0, fParam2, false);
	}
}

void func_543(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	fParam1 = (fParam1 * 0.01f);
	fVar1 = PED::_GET_PED_STAMINA(iParam0);
	fVar2 = PED::_GET_PED_MAX_STAMINA(iParam0);
	fVar0 = (fVar2 * fParam1);
	fVar3 = fVar0;
	if ((fVar1 + fVar0) > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	fVar4 = (fVar1 + fVar3);
	PED::_CHARGE_PED_STAMINA(iParam0, fVar3);
}

void func_544()
{
	Global_1900383.f_404 = 0;
	Global_1900383.f_404.f_1 = { 0f, 0f, 0f };
	Global_1900383.f_404.f_4 = 0f;
	Global_1900383.f_404.f_5 = 0;
	Global_1900383.f_404.f_6 = 0;
}

bool func_545(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_DONKEY_01"):
			return true;
	}
	return false;
}

bool func_546(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSEMULE_01"):
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return true;
	}
	return false;
}

bool func_547(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_POTENT_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"):
			return true;
	}
	return false;
}

int func_548()
{
	return Global_1900383.f_404;
}

void func_549(int iParam0)
{
	Global_1900383.f_404 = iParam0;
}

void func_550(vector3 vParam0)
{
	Global_1900383.f_404.f_1 = { vParam0 };
}

int func_551()
{
	return Global_1900383.f_404.f_6;
}

void func_552(int iParam0)
{
	Global_1900383.f_404.f_6 = iParam0;
}

bool func_553(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = PED::_0xF103823FFE72BB49(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	*uParam1 = iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(iVar0))
	{
		return false;
	}
	if (fParam2 > 0f)
	{
		fVar1 = __LIB_0__::func_665(iParam0, iVar0, 0, 1);
		if (fVar1 > fParam2)
		{
			return false;
		}
	}
	return true;
}

void func_554(int iParam0)
{
	Global_1900383.f_418.f_1 = iParam0;
}

int func_555(int iParam0)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return __LIB_1__::func_976();
	}
	switch (iParam0)
	{
		case 4:
			return 607173790;
		case 0:
			return -1849681615;
		case 2:
			return 102652153;
		default:
			break;
	}
	return __LIB_1__::func_976();
}

void func_556(int iParam0)
{
	__LIB_0__::func_7(&(Global_1395601.f_3), iParam0);
}

bool func_557(int iParam0)
{
	return __LIB_0__::func_1(Global_1914319.f_16855.f_3, iParam0);
}

bool func_558(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_10__::func_792(iParam0, &iVar0))
	{
		return false;
	}
	*iParam1 = Global_1946804.f_1497.f_1[__LIB_0__::func_161(iVar0, 1) /*3*/];
	return true;
}

int func_559(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false, false))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iParam2) != *iParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam1, iParam2))
		{
			if (iParam3 && __LIB_2__::func_424(*uParam1))
			{
				iParam2 = __LIB_2__::func_425(*uParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*iParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*iParam0, *uParam1, iParam2);
	}
	return 1;
}

void func_560(int iParam0)
{
	int iVar0;
	char* sVar1;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	sVar1 = __LIB_0__::func_67(__LIB_5__::func_978(iParam0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_PROMPT_NAME(iVar0, sVar1);
	}
}

void func_561(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_30(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_381(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!__LIB_0__::func_239(&(Global_40.f_9910[iVar0 /*6*/]), 4))
	{
		return;
	}
	else
	{
		__LIB_3__::func_728(&(Global_40.f_9910[iVar0 /*6*/]), 4);
		__LIB_0__::func_240(&(Global_40.f_9910[iVar0 /*6*/]), 8);
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(0, 17);
		}
	}
}

int func_562(int iParam0)
{
	if (!__LIB_4__::func_661(iParam0))
	{
		return -1;
	}
	return Global_40.f_7731[iParam0 /*5*/];
}

var func_563(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return __LIB_0__::func_67(Global_1888801[iParam0 /*35*/].f_22);
}

int func_564(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = iParam2;
	iVar1 = __LIB_1__::func_921(iParam1);
	if (iVar1 != -1 && iVar1 < 25)
	{
		iVar2 = __LIB_9__::func_927(&(Global_20710[iVar1 /*45*/].f_2), iParam0, iParam1);
		if (iVar2 >= 0)
		{
			iVar0 = (iVar0 + Global_20710[iVar1 /*45*/].f_2[iVar2 /*4*/].f_2);
		}
	}
	iVar3 = __LIB_9__::func_927(&(Global_20710.f_1126), iParam0, iParam1);
	if (iVar3 >= 0)
	{
		iVar0 = (iVar0 - Global_20710.f_1126[iVar3 /*4*/].f_2);
	}
	return iVar0;
}

void func_565(int iParam0, int iParam1)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	Global_40.f_9479[iParam0 /*4*/] = iParam1;
}

bool func_566(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	switch (iParam1)
	{
		case 1:
			if ((__LIB_0__::func_192(iParam0, -537818634) || __LIB_0__::func_192(iParam0, -458578204)) && !__LIB_0__::func_192(iParam0, -1242251796))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == joaat("AMMO"))
			{
				if (__LIB_0__::func_192(iParam0, -1588156645))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == joaat("WEAPON"))
			{
				return true;
			}
			else if (iVar0 == joaat("AMMO"))
			{
				if (__LIB_0__::func_192(iParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if (__LIB_12__::func_164(iParam0) || __LIB_0__::func_372(iParam0, -1636519629) == -701492487)
			{
				return true;
			}
			break;
		case 4:
			if (__LIB_0__::func_192(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (__LIB_0__::func_192(iParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_567(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	__LIB_2__::func_998(iVar0, &iVar2, &uVar3, &iVar1, &uVar4);
	if (__LIB_2__::func_999(&uVar5, iVar0, iVar1, iVar2))
	{
	}
	return uVar5;
}

int func_568(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 121;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1;
		if (MISC::GET_HASH_KEY(__LIB_3__::func_185(iVar2)) == iParam0)
		{
			return iVar2;
		}
		iVar1++;
	}
	return -1;
}

int func_569(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_4__::func_810(iVar0))
		{
			if (MISC::GET_HASH_KEY(__LIB_10__::func_276(iVar0)) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_570(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return __LIB_12__::func_129(iParam0);
}

int func_571(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!__LIB_12__::func_152(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

void func_572(int iParam0)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar0 = PED::_0x33FA048675821DA7(iParam0, 3);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 1);
	}
	__LIB_4__::func_382(iParam0, 0f, 0);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 0);
	}
}

void func_573(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_12__::func_205(iParam0, iParam1);
	__LIB_11__::func_459(iParam0, iParam1, (iVar0 + iParam2));
}

bool func_574(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (__LIB_5__::func_985(iParam0) == 0f)
	{
		return true;
	}
	return false;
}

void func_575(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = __LIB_0__::func_309(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/] = iParam2;
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	__LIB_9__::func_820(iVar0, iParam1, __LIB_11__::func_884(iParam0, iParam1));
	__LIB_12__::func_229(iVar0, iParam1);
}

bool func_576(int iParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	var uVar22;
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_280(iParam0, &uVar22, &Var0, iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		if (__LIB_1__::func_429(iParam0, &Var0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_577()
{
	if (!__LIB_1__::func_25(Global_1835011[15 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_578()
{
	if (__LIB_1__::func_614(joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"), 0, 0) == 0)
	{
		return false;
	}
	if (__LIB_1__::func_614(joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"), 0, 0) == 0)
	{
		return false;
	}
	if (__LIB_1__::func_614(joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"), 0, 0) == 0)
	{
		return false;
	}
	if (__LIB_1__::func_614(joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"), 0, 0) == 0)
	{
		return false;
	}
	if (__LIB_1__::func_614(joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"), 0, 0) == 0)
	{
		return false;
	}
	if (__LIB_1__::func_614(joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"), 0, 0) == 0)
	{
		return false;
	}
	return true;
}

int func_579(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
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
					__LIB_2__::func_998(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					__LIB_2__::func_999(&iVar0, iVar9, iVar5, iVar6);
					if (!__LIB_0__::func_144(iVar0, 0))
					{
						iVar0 = __LIB_5__::func_797(iVar2);
					}
				}
				else
				{
					iVar0 = __LIB_5__::func_797(iVar2);
				}
				if (iVar0 == iParam1)
				{
					PED::_0xED00D72F81CF7278(iVar2, 0, 0);
					if (bParam3)
					{
						__LIB_8__::func_932(iVar2);
						ENTITY::_DELETE_CARRIABLE(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iParam2;
}

void func_580(bool bParam0)
{
	if (__LIB_0__::func_28())
	{
		if (__LIB_5__::func_846() == 0)
		{
			bParam0 = false;
		}
		if (__LIB_5__::func_846() == 7)
		{
			if ((((((__LIB_5__::func_219(61) || __LIB_5__::func_219(62)) || __LIB_5__::func_219(63)) || __LIB_5__::func_219(64)) || __LIB_5__::func_219(65)) || __LIB_5__::func_219(66)) || __LIB_5__::func_219(67))
			{
				bParam0 = false;
			}
		}
	}
	if (bParam0)
	{
		__LIB_4__::func_226(1073741824 /* Float: 2f */);
	}
	else
	{
		__LIB_4__::func_229(1073741824 /* Float: 2f */);
	}
}

int func_581(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!__LIB_11__::func_816(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_582(int iParam0)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 64))
	{
		return false;
	}
	if (__LIB_7__::func_852(iParam0))
	{
		return true;
	}
	if (__LIB_5__::func_353(iParam0))
	{
		if (__LIB_9__::func_242(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_583(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_28())
	{
		return true;
	}
	if (__LIB_3__::func_222(iParam0))
	{
		if (iParam0 == __LIB_0__::func_12())
		{
			return false;
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_ZERO"))
		{
			if ((((((((iParam0 == 22 || iParam0 == 38) || iParam0 == 37) || iParam0 == 117) || iParam0 == 127) || iParam0 == 115) || iParam0 == 110) || iParam0 == 120) || iParam0 == 126)
			{
				return false;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_THREE"))
		{
			if (iParam0 == 37 && !__LIB_1__::func_187(9))
			{
				return false;
			}
		}
		switch (iParam0)
		{
			case 4:
			case 9:
			case 71:
			case 79:
			case 98:
				if (!bParam1)
				{
					return false;
				}
				if (__LIB_0__::func_61() != iParam0)
				{
					return false;
				}
				break;
			case 43:
				if (!bParam1)
				{
					return false;
				}
				break;
		}
		if (__LIB_1__::func_898() == 8)
		{
			if (__LIB_1__::func_897(iParam0, 1))
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
	return false;
}

void func_584(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_40.f_7731[0 /*5*/];
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7731[1 /*5*/];
	}
	if (iParam3 == -1)
	{
		iParam3 = Global_40.f_7731[2 /*5*/];
	}
	__LIB_0__::func_191();
	__LIB_10__::func_814(iParam1, iParam2, iParam3);
	if ((iParam1 == 0 && iParam2 == 0) && iParam3 == 0)
	{
		__LIB_12__::func_72(iParam0, joaat("MPC_MOD_HEAD_SUPER_CLEAN_SHAVE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	else
	{
		__LIB_12__::func_72(iParam0, joaat("BASE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	if (bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			__LIB_1__::func_452(1, 64, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(1, 64, 1, iParam0, 0);
		}
	}
	__LIB_0__::func_245(1);
}

void func_585(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
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
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0);
	iVar2 = 0;
	while (iVar2 < 57)
	{
		iVar3 = __LIB_6__::func_678(iVar2, 1);
		iVar4 = iVar3;
		if (!__LIB_0__::func_144(iVar4, 0))
		{
		}
		else
		{
			iVar5 = (*uParam1)[iVar2];
			if (iVar5 <= 0)
			{
			}
			else
			{
				iVar6 = __LIB_12__::func_236(iVar1, iVar4, iVar5);
			}
		}
		iVar2++;
	}
}

void func_586(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_932(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		__LIB_8__::func_984(iParam0, 1);
	}
	else
	{
		__LIB_8__::func_971(iParam0, 1);
	}
	__LIB_10__::func_816(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (__LIB_1__::func_905(iVar0) == iParam0)
		{
			__LIB_12__::func_60(iVar0, 0);
		}
		iVar0++;
	}
}

int func_587(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_12__::func_160())
	{
		iVar0 = __LIB_12__::func_185(iParam1, 0);
	}
	else
	{
		iVar0 = __LIB_1__::func_614(iParam1, bParam2, 0);
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

void func_588()
{
	__LIB_0__::func_8(&Global_1935630, 4096);
	__LIB_11__::func_181();
	__LIB_0__::func_145(0, 0);
	__LIB_11__::func_435();
	__LIB_0__::func_322(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	__LIB_0__::func_320(0);
	Global_1310720.f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720.f_4 = 0;
	Global_1310720.f_6 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_8 = 1;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	__LIB_1__::func_954(0);
	__LIB_10__::func_28(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_0__::func_267(1);
	__LIB_12__::func_180(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");
	}
}

void func_589(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	__LIB_11__::func_319(iParam0, 0);
}

void func_590()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (__LIB_0__::func_5(Global_40.f_450[iVar0]))
		{
			if (Global_1347702[Global_40.f_450[iVar0] /*49*/].f_14 & 2 != 0)
			{
				__LIB_12__::func_190(Global_40.f_450[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

bool func_591(int iParam0)
{
	if ((((((((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty") || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		return false;
	}
	return true;
}

int func_592(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 1;
	}
	return 0;
}

bool func_593(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, "scripted_loot_only")) && DECORATOR::DECOR_GET_BOOL(iParam0, "scripted_loot_only"))
	{
		return true;
	}
	return false;
}

int func_594(float fParam0)
{
	int iVar0;
	float fVar1;
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	fVar1 = (fVar1 + fParam0);
	if (fVar1 > 0.75f)
	{
		iVar0 = joaat("MONEY_BILLSTACK");
	}
	else if (fVar1 > 0.5f)
	{
		iVar0 = joaat("MONEY_MONEYCLIP");
	}
	else if (fVar1 > 0.25f)
	{
		iVar0 = joaat("MONEY_COINPURSE");
	}
	else
	{
		iVar0 = joaat("MONEY_COIN");
	}
	return iVar0;
}

int func_595(int iParam0)
{
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	return 0;
}

void func_596(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	iVar0 = OBJECT::_0x250EBB11E81A10BE(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (__LIB_0__::func_1(OBJECT::_0x2BF1953C0C21AC88(iVar0), 1))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "loot_empty", true);
		return;
	}
	OBJECT::_0x7D4411D6736CD295(iVar0, &Var1);
	if (Var1 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_money", Var1);
	}
	if (Var1.f_2 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", Var1.f_1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", Var1.f_2);
	}
	if (Var1.f_4 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", Var1.f_3);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", Var1.f_4);
	}
	if (Var1.f_6 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", Var1.f_5);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", Var1.f_6);
	}
	if (Var1.f_8 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", Var1.f_7);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", Var1.f_8);
	}
	if (Var1.f_9 != 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", Var1.f_9);
	}
}

void func_597(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "chest_open", true);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("CHESTS_LOOTED")), 1);
	}
	else
	{
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("CHESTS_SEARCHED")), 1);
	}
}

void func_598(int iParam0)
{
	Local_5 = iParam0->f_1;
}

bool func_599()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		return true;
	}
	return false;
}

void func_600()
{
	struct<2> Var0;
	Var0 = 1;
	Var0.f_1 = joaat("WEAPON_FISHINGROD");
	HUD::_0x8A59D44189AF2BC5(&Var0, 1646793768);
}

int func_601(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -589165916;
		case 1:
			return joaat("HAI_HUNTING_02");
		case 2:
			return joaat("HAI_FISHING_01");
		case 3:
			return joaat("HAI_FISHING_02");
		case 4:
			return joaat("HAI_FIVE_FINGER_FILLET_01");
		case 5:
			return joaat("HAI_HUNTING_06");
		case 6:
			return joaat("HAI_DOMINOES_01");
		case 7:
			return joaat("HAI_COACH_ROBBERY_01");
		case 8:
			return joaat("HAI_COACH_ROBBERY_02");
		case 9:
			return joaat("HAI_FIVE_FINGER_FILLET_02");
		case 10:
			return joaat("HAI_BANK_ROBBERY_01");
		case 11:
			return joaat("HAI_COACH_ROBBERY_03");
		case 12:
			return joaat("HAI_COACH_ROBBERY_04");
		case 13:
			return joaat("HAI_RUSTLING_02");
		case 14:
			return joaat("HAI_HOME_ROBBERY_01");
		case 15:
			return 2061320468;
		case 16:
			return -709866131;
		case 17:
			return -1348173149;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_602(int iParam0)
{
	if (PED::_0x5C16855277819BBF() >= iParam0)
	{
		return true;
	}
	return false;
}

float func_603(int iParam0)
{
	return (Global_1347702[iParam0 /*49*/].f_18 / 2f);
}

int func_604(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	if ((Global_1327590.f_19685 == 0 || iParam0 == 1) || iParam0 == 20)
	{
		Global_1327590.f_19685 = iParam0;
		Global_1327590.f_19684 = iParam1;
		return 1;
	}
	return 0;
}

bool func_605()
{
	return __LIB_0__::func_30(UIFEED::_0xC17F69E1418CD11F(4));
}

void func_606(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	iVar0 = __LIB_7__::func_371(*uParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, __LIB_7__::func_371(*uParam0), iParam1, sParam2, bParam3, bParam5, false);
		if (bParam4)
		{
			UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
			Global_1359489.f_361.f_194 = __LIB_0__::func_425("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, MISC::GET_HASH_KEY(__LIB_0__::func_558(uParam0->f_3)), joaat("PLAYER_MENU"), "INPUT_FEED_INTERACT_GENERIC", joaat("SP_MISSIONS"), 5000, 0, 0, 0, 0, 1, 1);
		}
	}
}

bool func_607(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/] == 3;
}

void func_608(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	fVar0 = *fParam0;
	fVar1 = *fParam1;
	*fParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*fParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

int func_609(int iParam0)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return 0;
	}
	return Global_1347702[iParam0 /*49*/].f_15;
}

bool func_610(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, float fParam5)
{
	if (!bParam4)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_11__::func_154())
		{
			return true;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (fParam1 == -1f)
	{
		fParam1 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		fParam2 = (fParam2 * fParam2);
		if (fParam5 != -1f)
		{
			fParam5 = (fParam5 * fParam5);
		}
	}
	if (fParam1 < fParam2)
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		return iParam3;
	}
	else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		return true;
	}
	else if (fParam5 != -1f && fParam1 >= fParam5)
	{
		if (PED::_0x164CECC59E70DF86(iParam0, 75f))
		{
			return false;
		}
	}
	else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		return false;
	}
	return true;
}

bool func_611(int iParam0)
{
	return __LIB_1__::func_672(iParam0, 32);
}

bool func_612(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19574)
	{
		if (__LIB_9__::func_893(iVar0) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_613(int iParam0, bool bParam1, float fParam2)
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
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_0__::func_45(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_0__::func_45(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_0__::func_45(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_0__::func_45(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_0__::func_45(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_0__::func_45(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_0__::func_45(sVar1, 10000, 0, 0, 0, 1);
		}
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 512);
	}
}

bool func_614(int iParam0, int iParam1)
{
	return __LIB_11__::func_166(iParam0, iParam1);
}

void func_615()
{
	char* sVar0;
	var uVar1;
	if (Global_40.f_11184[0] != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		if (!__LIB_1__::func_650())
		{
			Global_40.f_11184[0] = joaat("UPGRADE_FSH_BAIT_NONE");
			sVar0 = __LIB_1__::func_925(__LIB_1__::func_72(joaat("UPGRADE_FSH_BAIT_NONE")), joaat("COLOR_PURE_WHITE"));
			uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Fishing");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar1, "LureName", sVar0);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar1, "LureCount", "");
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar1, "LureTexture", -973584697);
		}
	}
}

void func_616(int iParam0)
{
	if (iParam0 == 1)
	{
		__LIB_8__::func_666(16);
	}
	else
	{
		__LIB_8__::func_675(16);
	}
}

void func_617(int iParam0)
{
	if (iParam0 == 1)
	{
		__LIB_8__::func_666(256);
	}
	else
	{
		__LIB_8__::func_675(256);
	}
}

void func_618()
{
	__LIB_8__::func_666(1024);
	__LIB_8__::func_675(512);
}

bool func_619(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489.f_12) || (bParam5 && Global_1359489.f_13 < 8))
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(Global_1360165[iParam0 /*1157*/].f_126))
			{
				PERSCHAR::_0x49A8C2CD97815215(Global_1360165[iParam0 /*1157*/].f_126);
			}
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, 0);
				Global_1359489.f_13++;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x0CADC3A977997472(Global_1360165[iParam0 /*1157*/].f_126, 0);
			}
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_725(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = __LIB_8__::func_931(iVar0, vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_0x7B204F88F6C3D287(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
		if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			return false;
		}
		Global_1359489.f_12 = 1;
		__LIB_0__::func_213(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_620(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	__LIB_3__::func_149(iParam0, __LIB_8__::func_887(iParam1));
	if (__LIB_0__::func_858(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam1)))
	{
		PED::_0x931B241409216C1F(__LIB_0__::func_271(iParam1), iParam0, 0);
		PED::_0xED1C764997A86D5A(__LIB_0__::func_271(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		__LIB_0__::func_288(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (__LIB_0__::func_858(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
	__LIB_1__::func_434(iParam1, __LIB_0__::func_858(iParam1, 8192), __LIB_0__::func_858(iParam1, 16384), 1);
}

void func_621(int iParam0)
{
	if (__LIB_0__::func_474(179))
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_36 != joaat("BLIP_RC"))
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return;
	}
	else if (__LIB_4__::func_826(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37) && MAP::IS_BLIP_ON_MINIMAP(Global_1347702[iParam0 /*49*/].f_37)) && BUILTIN::VDIST2(__LIB_1__::func_440(iParam0), Global_36) < 10000f) && __LIB_2__::func_623())
	{
		__LIB_5__::func_473(179, Global_1347702[iParam0 /*49*/].f_37, 0);
	}
}

void func_622(int iParam0)
{
	if (__LIB_0__::func_474(180))
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_36 != joaat("BLIP_RC"))
	{
		return;
	}
	else if (!__LIB_4__::func_826(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37) && MAP::IS_BLIP_ON_MINIMAP(Global_1347702[iParam0 /*49*/].f_37)) && __LIB_2__::func_623())
	{
		__LIB_5__::func_473(180, Global_1347702[iParam0 /*49*/].f_37, 0);
	}
}

void func_623(int iParam0)
{
	if (iParam0 == 1)
	{
		__LIB_8__::func_666(2);
	}
	else
	{
		__LIB_8__::func_675(2);
	}
}

void func_624(int iParam0)
{
	if (iParam0 == 1)
	{
		__LIB_8__::func_666(64);
	}
	else
	{
		__LIB_8__::func_675(64);
	}
}

void func_625()
{
	if (!__LIB_1__::func_650())
	{
		__LIB_8__::func_666(1);
	}
}

bool func_626(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
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
			if (__LIB_2__::func_833(uParam2, iParam0))
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
					if (__LIB_2__::func_878(iParam0, uParam2))
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

void func_627(int iParam0)
{
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 16);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			__LIB_9__::func_240(iParam0, __LIB_1__::func_440(iParam0), 1, 0);
		}
		else
		{
			__LIB_5__::func_241(iParam0);
		}
	}
	else
	{
		__LIB_9__::func_830(iParam0, 0);
	}
}

void func_628()
{
	int iVar0;
	int iVar1;
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (__LIB_5__::func_240(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Global_1347702)
		{
			if (__LIB_0__::func_5(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iVar1 /*49*/].f_37))
				{
					__LIB_9__::func_830(iVar1, 0);
					__LIB_9__::func_240(iVar1, __LIB_1__::func_440(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_629(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			__LIB_1__::func_832(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			__LIB_1__::func_832(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			__LIB_1__::func_832(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_01"), __LIB_1__::func_803(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_02"), __LIB_1__::func_803(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_03"), __LIB_1__::func_803(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_04"), __LIB_1__::func_803(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_05"), __LIB_1__::func_803(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_630(int iParam0)
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
	__LIB_1__::func_832(39, 0, 0, 0, 0, 0, -1, 0);
	__LIB_10__::func_706(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_631(int iParam0)
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
	__LIB_1__::func_832(49, 0, 0, 0, 0, 0, -1, 0);
	__LIB_10__::func_706(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_632(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_633(int iParam0, int iParam1)
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 30, 1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 37, 1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 50, 1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_634(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_1__::func_804(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_1__::func_832(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_635(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_1__::func_804(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_636(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	__LIB_11__::func_14(iParam0, 1, iParam1, 1, 32);
	if (bParam2 && __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 1024))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 1024);
	}
	if (__LIB_5__::func_353(iParam0))
	{
		__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		__LIB_11__::func_576(iParam0, 1);
	}
}

bool func_637(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*iParam0 = __LIB_4__::func_720(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return false;
	}
	else if (iVar11 == 1)
	{
		return false;
	}
	else if (iVar11 == 2)
	{
		if (!__LIB_0__::func_272(*iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_638(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 || iParam1);
}

bool func_639(var uParam0, int iParam1)
{
	return (uParam0->f_173 && iParam1) != 0;
}

int func_640(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_21))
	{
		Global_1347702[iParam0 /*49*/].f_21 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_21))
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_22))
	{
		Global_1347702[iParam0 /*49*/].f_22 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_22))
	{
		return 1;
	}
	return 0;
}

void func_642(var uParam0)
{
	if (uParam0->f_748 == -1)
	{
		if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			uParam0->f_748 = 5;
		}
	}
	if (uParam0->f_748 > 0)
	{
		PED::_0xED9582B3DA8F02B4(uParam0->f_748);
	}
}

void func_643(var uParam0, int iParam1)
{
	if (uParam0->f_175 != iParam1)
	{
		uParam0->f_175 = iParam1;
	}
}

int func_644(var uParam0)
{
	return uParam0->f_175;
}

int func_645(var uParam0)
{
	return uParam0->f_169;
}

void func_646(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_176)
	{
		uParam0->f_176 = iParam1;
	}
}

bool func_647(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return true;
}

bool func_648(var uParam0)
{
	return uParam0->f_781;
}

int func_649(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1347702[uParam0->f_174 /*49*/].f_22))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Global_1347702[uParam0->f_174 /*49*/].f_22))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_1347702[uParam0->f_174 /*49*/].f_22));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_0xBC781D24AA11F179(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	return 1;
}

void func_650(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_22))
	{
		ITEMSET::DESTROY_ITEMSET(Global_1347702[iParam0 /*49*/].f_22);
		Global_1347702[iParam0 /*49*/].f_23 = 0;
	}
}

void func_651(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_21))
	{
		ITEMSET::DESTROY_ITEMSET(Global_1347702[iParam0 /*49*/].f_21);
	}
}

void func_652(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_2603);
		VOLUME::_DELETE_VOLUME(uParam0->f_2603);
	}
}

void func_653(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_2604);
		VOLUME::_DELETE_VOLUME(uParam0->f_2604);
	}
}

void func_654(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = Global_1347702[iParam0 /*49*/].f_35;
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 == 1)
	{
		__LIB_0__::func_7(&(Global_1347702[iVar0 /*49*/].f_13), 8);
	}
	else
	{
		__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_13), 8);
	}
}

bool func_655(var uParam0, int iParam1)
{
	return (uParam0->f_1560 && iParam1) != 0;
}

void func_656(var uParam0, float fParam1)
{
	uParam0->f_741 = fParam1;
}

void func_657(var uParam0, float fParam1)
{
	uParam0->f_742 = fParam1;
}

void func_658(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_659(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

int func_660(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if ((*uParam0)[iVar0 /*3*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_661(var uParam0)
{
	return uParam0->f_168;
}

void func_662(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_0xC805EB785824F712(bParam0);
	LAW::_0x710448D44A64C213(bParam0);
}

int func_663(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_22))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(Global_1347702[iParam0 /*49*/].f_22);
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (fParam1 > (100f * 100f))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 > 3)
	{
		iVar1 = 3;
	}
	while (iVar2 <= iVar1)
	{
		iVar3 = Global_1347702[iParam0 /*49*/].f_23;
		iVar10 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Global_1347702[iParam0 /*49*/].f_22);
		iVar4 = iVar10;
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = iVar4;
				iVar11 = EVENT::_0xAD17A18215DD23D6(iVar5, 1, 0);
				if (iVar11 > 0 && iVar11 <= 2000)
				{
					iVar12 = EVENT::_0x796EECFF0C6D39BE(iVar5, 1, 0);
					if (iVar12 != joaat("EVENT_SHOT_FIRED") || Global_1935630.f_44 != joaat("WEAPON_LASSO"))
					{
						return 1;
					}
				}
				if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar7, joaat("WEAPON_THROWN_DYNAMITE"), 10f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar7, joaat("WEAPON_THROWN_MOLOTOV"), 10f, true))
				{
					return 1;
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = iVar4;
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar6, Global_35, 1, 1))
				{
					return 1;
				}
			}
		}
		iVar2++;
		Global_1347702[iParam0 /*49*/].f_23++;
		if (Global_1347702[iParam0 /*49*/].f_23 >= iVar0)
		{
			Global_1347702[iParam0 /*49*/].f_23 = 0;
		}
	}
	if (Global_1945917.f_6 >= 0 && (MISC::GET_GAME_TIMER() - Global_1945917.f_6) <= 1000)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_1945917.f_1) && ENTITY::IS_ENTITY_A_PED(Global_1945917.f_1)) && ITEMSET::IS_IN_ITEMSET(Global_1945917.f_1, Global_1347702[iParam0 /*49*/].f_22))
		{
			return 1;
		}
	}
	return 0;
}

void func_664(int iParam0, float fParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_13 & 32768 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 != joaat("BLIP_RC"))
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 2 == 0)
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	if (fParam1 < (Global_1347702[iParam0 /*49*/].f_18 * Global_1347702[iParam0 /*49*/].f_18))
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -211388321);
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
	}
}

struct<8> func_665(var uParam0)
{
	return uParam0->f_350;
}

void func_666(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((__LIB_0__::func_755(&(uParam0->f_482[iVar0 /*16*/]), 1048576) && __LIB_0__::func_755(&(uParam0->f_482[iVar0 /*16*/]), 4)) && !__LIB_0__::func_755(&(uParam0->f_482[iVar0 /*16*/]), 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_482[iVar0 /*16*/]));
			return;
		}
		iVar0++;
	}
}

void func_667(var uParam0)
{
	int iVar0;
	if (uParam0->f_749 == -1)
	{
		if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			uParam0->f_749 = 15;
		}
	}
	if (uParam0->f_749 >= 0)
	{
		if (uParam0->f_749 < PED::_0x62DE46F061CAA468())
		{
			iVar0 = (PED::_0x62DE46F061CAA468() - uParam0->f_749);
			PED::_0x7D4E70A67A651C71(iVar0);
		}
		else if (uParam0->f_749 > PED::_0x62DE46F061CAA468())
		{
			PED::_0xED9582B3DA8F02B4(uParam0->f_749);
		}
	}
	uParam0->f_748 = -1;
}

void func_668()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DETONATE"), false);
}

void func_669(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

bool func_670(var uParam0)
{
	if (uParam0->f_1666)
	{
		return false;
	}
	return uParam0->f_1665;
}

struct<2> func_671(int iParam0)
{
	char cVar0[16];
	int iVar2;
	MemCopy(&cVar0, {Global_1347702[iParam0 /*49*/].f_3}, 2);
	if (!(__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 2) && __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4)))
	{
		iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0);
		StringCopy(&cVar0, HUD::_0xD8402B858F4DDD88(&cVar0, (iVar2 - 1)), 16);
	}
	return cVar0;
}

void func_672(int iParam0, int iParam1)
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
}

bool func_673(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_2573)))
		{
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_2573)))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_674(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 65:
		case 68:
		case 76:
			return true;
		default:
			break;
	}
	return false;
}

struct<8> func_675(int iParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, "script@timelapse@", 64);
	StringConCat(&cVar0, &(Global_1347702[iParam0 /*49*/].f_3), 64);
	StringConCat(&cVar0, "_timelapse", 64);
	return cVar0;
}

void func_676(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_350), sParam1, 64);
}

void func_677(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_348);
	}
}

float func_678(var uParam0)
{
	return uParam0->f_339;
}

void func_679(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_348, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_366[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &(uParam0->f_366[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &(uParam0->f_366[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_348, &(uParam0->f_366[iVar0 /*9*/]));
		}
		uParam0->f_366[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

float func_680(var uParam0)
{
	return uParam0->f_338;
}

bool func_681(var uParam0, int iParam1)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_776.f_1), &(uParam0->f_776));
}

bool func_682(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_776));
}

bool func_683(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_776));
}

void func_684(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_776);
	uParam0->f_776 = 0;
	uParam0->f_782 = 0;
}

int func_685(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) * 1000f));
}

void func_686(var uParam0, int iParam1)
{
	uParam0->f_1560 = (uParam0->f_1560 - (uParam0->f_1560 && iParam1));
}

bool func_687(var uParam0, int iParam1)
{
	return (uParam0->f_1562.f_1 && iParam1) != 0;
}

bool func_688(var uParam0, int iParam1)
{
	return (uParam0->f_343 && iParam1) != 0;
}

int func_689(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_348) * 1000f));
}

bool func_690(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_348, 0))
	{
		if (__LIB_0__::func_84(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_348) && __LIB_0__::func_84(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_691(var uParam0, int iParam1)
{
	uParam0->f_1579 = iParam1;
}

bool func_692(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_371[iVar0 /*18*/].f_17 == 1 && uParam0->f_371[iVar0 /*18*/].f_2 == 4) && uParam0->f_371[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_693(var uParam0, int iParam1)
{
	uParam0->f_1560 = (uParam0->f_1560 || iParam1);
}

void func_694(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1817);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1817);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_695(var uParam0, int iParam1)
{
	return (uParam0->f_1561 && iParam1) != 0;
}

void func_696(var uParam0)
{
	uParam0->f_1561 = 0;
}

bool func_697(var uParam0)
{
	if (uParam0->f_1580 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_912[uParam0->f_1580 /*41*/].f_1, 0) < uParam0->f_912[uParam0->f_1580 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_912[uParam0->f_1580 /*41*/].f_14 >= uParam0->f_912[uParam0->f_1580 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_698(var uParam0)
{
	if (uParam0->f_1580 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_912[uParam0->f_1580 /*41*/].f_1, 0) < uParam0->f_912[uParam0->f_1580 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_912[uParam0->f_1580 /*41*/].f_15 >= uParam0->f_912[uParam0->f_1580 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_699(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_371[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_700(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_CLIP_SET(*uParam0);
		__LIB_0__::func_7(&(uParam0->f_1), 1);
	}
}

struct<8> func_701(var uParam0)
{
	return uParam0->f_358;
}

struct<4> func_702(var uParam0)
{
	return uParam0->f_344;
}

bool func_703(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_M_Y_NBXSTREETKIDS_SLUMS_01"):
		case joaat("RE_PUBLICHANGING_TEENS_01"):
		case joaat("U_M_Y_SHACKSTARVINGKID_01"):
		case joaat("A_M_Y_SDSTREETKIDS_SLUMS_02"):
		case joaat("RE_LOSTDOG_TEENS_01"):
		case joaat("RE_TAUNTING_01"):
		case joaat("A_M_Y_NBXSTREETKIDS_01"):
		case joaat("S_M_Y_NEWSPAPERBOY_01"):
		case joaat("U_M_Y_CAJHOMESTEAD_01"):
		case joaat("MES_MARSTON6_TEENS_01"):
		case joaat("RE_SKIPPINGSTONES_TEENS_01"):
		case joaat("MSP_MOB1_TEENS_01"):
		case joaat("MBH_RHODESRANCHER_TEENS_01"):
		case joaat("CS_JACKMARSTON"):
		case joaat("U_F_Y_BRAITHWAITESSECRET_01"):
		case joaat("A_M_Y_UNICORPSE_01"):
			return true;
		default:
			break;
	}
	return false;
}

void func_704(var uParam0, char[16] cParam1)
{
	uParam0->f_344 = { cParam1 };
}

Vector3 func_705(var uParam0)
{
	return uParam0->f_406;
}

void func_706(var uParam0, vector3 vParam1)
{
	uParam0->f_406 = { vParam1 };
}

void func_707(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_708(var uParam0)
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
	uParam0->f_355 = { Var1 };
	StringCopy(&(uParam0->f_355), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		uParam0->f_371[iVar0 /*18*/] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1418)
	{
		uParam0->f_1418[iVar0 /*10*/] = { Var76 };
		iVar0++;
	}
	uParam0->f_1579 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		uParam0->f_912[iVar0 /*41*/] = { Var35 };
		uParam0->f_1241[iVar0 /*22*/] = { Var86 };
		iVar0++;
	}
	uParam0->f_1580 = -1;
	uParam0->f_1661 = { Global_36 };
	uParam0->f_1664 = 0;
	uParam0->f_1665 = 0;
	uParam0->f_1584 = -1;
	uParam0->f_1585 = -1f;
	uParam0->f_1560 = 0;
	uParam0->f_1562 = 0;
	uParam0->f_1562.f_1 = 0;
	uParam0->f_1799 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
	}
}

void func_709(var uParam0, int iParam1)
{
	uParam0->f_1562.f_1 = (uParam0->f_1562.f_1 || iParam1);
}

void func_710(var uParam0, int iParam1)
{
	uParam0->f_1561 = (uParam0->f_1561 || iParam1);
}

void func_711(var uParam0, int iParam1)
{
	uParam0->f_1561 = (uParam0->f_1561 - (uParam0->f_1561 && iParam1));
}

void func_712(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_912[iParam1 /*41*/].f_28 = 1;
		uParam0->f_1580 = iParam1;
		uParam0->f_1584 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1665 = 1;
	}
}

void func_713(var uParam0, int iParam1)
{
	uParam0->f_1562.f_1 = (uParam0->f_1562.f_1 - (uParam0->f_1562.f_1 && iParam1));
}

int func_714(var uParam0)
{
	if (uParam0->f_1581 < 0 || uParam0->f_371[uParam0->f_1581 /*18*/].f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1418[uParam0->f_371[uParam0->f_1581 /*18*/].f_4 /*10*/].f_8;
}

void func_715(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_348, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_348, sParam1, iParam2, iParam3);
}

int func_716(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_717(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_718(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 27)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_719(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_720(var uParam0)
{
	return uParam0->f_409;
}

float func_721(var uParam0)
{
	return uParam0->f_412;
}

bool func_722(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_723(var uParam0)
{
	struct<8> Var0;
	uParam0->f_358 = { Var0 };
}

void func_724(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_366[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

bool func_725(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_371[iVar0 /*18*/].f_2 && uParam0->f_371[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_726(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_912[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[iVar0 /*41*/].f_22)) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_912[iVar0 /*41*/].f_22), sParam1)) && __LIB_0__::func_164(&(uParam0->f_912[iVar0 /*41*/]), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_727(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_371[iParam1 /*18*/].f_17 == 0 && __LIB_0__::func_78(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_371[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_371[iParam1 /*18*/].f_17 == 1 && __LIB_0__::func_78(uParam0) > 3) && __LIB_0__::func_78(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

bool func_728(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_371[iVar0 /*18*/] == iParam1)
		{
			if (__LIB_0__::func_84(&(uParam0->f_371[iVar0 /*18*/]), 4))
			{
				return true;
			}
			if (uParam0->f_371[iVar0 /*18*/].f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_729(var uParam0, int iParam1)
{
	uParam0->f_1785.f_1 = 0;
	uParam0->f_1785.f_3 = iParam1;
}

bool func_730(var uParam0, int iParam1)
{
	bool bVar0;
	uParam0->f_1785.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1785.f_1), &(uParam0->f_1785));
	return bVar0;
}

bool func_731(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	uParam0->f_1785.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_1785));
	return bVar0;
}

bool func_732(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1785.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_FLOAT(uParam2, &(uParam0->f_1785));
	return uVar0;
}

bool func_733(var uParam0, int iParam1, char[4] cParam2)
{
	var uVar0;
	uParam0->f_1785.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_1785));
	return uVar0;
}

bool func_734(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	uParam0->f_1785.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, &(uParam0->f_1785));
	return bVar0;
}

var func_735(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1785.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &(uParam0->f_1785));
	return uVar0;
}

bool func_736(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_371[iVar0 /*18*/].f_2 == 9 && uParam0->f_371[iVar0 /*18*/].f_4 == iParam1) && !__LIB_0__::func_129(&(uParam0->f_1418[iParam1 /*10*/]), 32)) && ((uParam0->f_371[iVar0 /*18*/].f_1 == 0 && !__LIB_0__::func_84(&(uParam0->f_371[iVar0 /*18*/]), 512)) || __LIB_0__::func_84(&(uParam0->f_371[iVar0 /*18*/]), 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_737(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_371[iParam1 /*18*/].f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_371[iParam1 /*18*/].f_3 == uParam0->f_3[iVar0 /*13*/].f_3)
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

bool func_738(var uParam0)
{
	if (__LIB_0__::func_13(32768) && __LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 8192))
	{
		return true;
	}
	return false;
}

void func_739(var uParam0)
{
	if (uParam0->f_171 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		MAP::DISPLAY_RADAR(true);
	}
	uParam0->f_171 = 0;
	uParam0->f_747 = 0;
	__LIB_0__::func_37(&(uParam0->f_2588));
}

int func_740(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!__LIB_0__::func_131(uParam0[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_741(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (__LIB_0__::func_58(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_742(var uParam0, bool bParam1)
{
	var uVar0;
	if (bParam1 || !__LIB_0__::func_1(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {__LIB_0__::func_632(uParam0->f_174)}, 8);
		__LIB_4__::func_561(&uVar0, 15000, 0, 0, 0, 1);
		__LIB_0__::func_7(&(uParam0->f_172), 16384);
	}
}

void func_743(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_0__::func_755(uParam1[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 1:
				case 2:
					if ((uParam1[iVar0 /*16*/])->f_9 == 5)
					{
						__LIB_1__::func_388(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if ((uParam1[iVar0 /*16*/])->f_9 == 3)
					{
						__LIB_1__::func_388(uParam1[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_744(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_745(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_3, 3))
	{
		switch (uParam0->f_1)
		{
			case 2:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
				{
					TASK::REMOVE_WAYPOINT_RECORDING(*uParam0);
				}
				break;
			case 1:
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				}
				break;
		}
		uParam0->f_3 = 0;
	}
}

void func_746(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_ANIM_DICT(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_747(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_CLIP_SET(*uParam0);
		uParam0->f_1 = 0;
	}
}

bool func_748(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (iParam1 == 7)
	{
		if (uParam0->f_177 == 10)
		{
			iVar0 = uParam0->f_750;
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			iVar0 = uParam0->f_749;
		}
		else
		{
			iVar0 = uParam0->f_748;
		}
	}
	else if (iParam1 == 1)
	{
		iVar0 = uParam0->f_748;
	}
	else if (iParam1 == 2)
	{
		iVar0 = uParam0->f_749;
	}
	else if (iParam1 == 4)
	{
		iVar0 = uParam0->f_750;
	}
	if (__LIB_12__::func_602(iVar0))
	{
		return true;
	}
	return false;
}

bool func_749(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (fParam1 <= (__LIB_12__::func_603(iParam0) * __LIB_12__::func_603(iParam0)))
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_21))
		{
			iVar0 = ITEMSET::GET_ITEMSET_SIZE(Global_1347702[iParam0 /*49*/].f_21);
			if (iVar0 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar0)
				{
					iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1347702[iParam0 /*49*/].f_21);
					iVar5 = iVar4;
					if (ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar5))
						{
							iVar1++;
							iVar6 = iVar5;
							if (ENTITY::IS_ENTITY_DEAD(iVar6))
							{
							}
							else
							{
								if (!PED::_0x5102307CE88798EB(iVar6))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(iVar6);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(iVar6))
								{
								}
								else
								{
									bVar3 = true;
								}
								else
								{
									iVar2++;
								}
								if (iVar1 > 0)
								{
									if (!bVar3)
									{
										return false;
									}
								}
								iVar2 = 0;
								while (iVar2 < iVar0)
								{
									iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1347702[iParam0 /*49*/].f_21);
									iVar8 = iVar7;
									if (((ENTITY::DOES_ENTITY_EXIST(iVar8) && ENTITY::IS_ENTITY_A_PED(iVar8)) && !ENTITY::IS_ENTITY_DEAD(iVar8)) && PED::_0x5102307CE88798EB(iVar8))
									{
										PED::_0x3088634CF8C819CF(iVar8);
									}
									iVar2++;
								}
								return true;
								Jump @310; //curOff = 292
								if (fParam1 < 10f)
								{
									return true;
								}
								Jump @317; //curOff = 310
								return true;
								return false;
							}
						}
					}
				}
			}
		}
	}
}

void func_750(var uParam0, char* sParam1)
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
			MemCopy(&(uParam0->f_344), {__LIB_0__::func_98("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_344), {__LIB_0__::func_98("cutscene@", sParam1, 1, 63)}, 4);
	}
	__LIB_0__::func_88(uParam0, 8192);
}

Vector3 func_751(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	switch (uParam0->f_912[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_912[iParam1 /*41*/].f_4 - uParam0->f_912[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { __LIB_0__::func_173(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_912[iParam1 /*41*/].f_1 + uParam0->f_912[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_912[iParam1 /*41*/].f_1 + uParam0->f_912[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!__LIB_0__::func_86(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_912[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_912[iParam1 /*41*/].f_7, true))
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
			if (uParam0->f_912[iParam1 /*41*/].f_13 < uParam0->f_912[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_912[iParam1 /*41*/].f_12 + (uParam0->f_912[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_912[iParam1 /*41*/].f_12 + uParam0->f_912[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_912[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_912[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_912[iParam1 /*41*/].f_11 + 5f))) };
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

bool func_752(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_753(var uParam0)
{
	__LIB_0__::func_200(&(uParam0->f_1800));
}

int func_754(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_371[iVar0 /*18*/].f_17 == 2 && __LIB_0__::func_84(&(uParam0->f_371[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_755(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_348, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_756(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_776, iVar0, __LIB_0__::func_480(iVar0));
		iVar0++;
	}
}

void func_757(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), iParam2);
		}
		iVar0++;
	}
}

void func_758(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_759(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 27)
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

void func_760(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_12)
		{
			__LIB_4__::func_653(&(uParam0->f_3[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

void func_761(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 103)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1785, iVar0, __LIB_4__::func_667(iVar0));
		iVar0++;
	}
}

bool func_762(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		uParam0->f_1817 = ITEMSET::CREATE_ITEMSET(true);
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
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
					{
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
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

void func_763(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_172(uParam0->f_1529[iVar0 /*15*/].f_12);
		iVar0++;
	}
}

void func_764(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1529[iVar0 /*15*/].f_11)
		{
			__LIB_0__::func_172(uParam0->f_1529[iVar0 /*15*/].f_12);
			switch (uParam0->f_1529[iVar0 /*15*/].f_9)
			{
				case 0:
					uParam0->f_1529[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_1529[iVar0 /*15*/], uParam0->f_1529[iVar0 /*15*/].f_6, uParam0->f_1529[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1529[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1529[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_1529[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_1529[iVar0 /*15*/], uParam0->f_1529[iVar0 /*15*/].f_6, uParam0->f_1529[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1529[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1529[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

bool func_765(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar12;
	int iVar13;
	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_371[iVar12 /*18*/].f_17 == 1 && uParam0->f_371[iVar12 /*18*/].f_2 == 9) && uParam0->f_371[iVar12 /*18*/].f_4 >= 0) && uParam0->f_371[iVar12 /*18*/] == iParam1)
		{
			iVar13 = uParam0->f_1418[uParam0->f_371[iVar12 /*18*/].f_4 /*10*/].f_8;
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

bool func_766()
{
	int iVar0;
	iVar0 = __LIB_0__::func_298(0);
	if ((__LIB_0__::func_6(iVar0) && __LIB_0__::func_700(iVar0) == 8) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iVar0) /*49*/].f_12, 131072))
	{
		return true;
	}
	return false;
}

int func_767(var uParam0)
{
	if (uParam0->f_174 == __LIB_10__::func_698())
	{
		return __LIB_4__::func_513();
	}
	return -1;
}

void func_768(var uParam0)
{
	__LIB_1__::func_582(1, &(uParam0->f_2605.f_482));
}

bool func_769(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_64(0);
	if (iVar0 == 11)
	{
		iVar1 = __LIB_12__::func_601(__LIB_0__::func_872(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == joaat("HAI_FIVE_FINGER_FILLET_01") || iVar1 == joaat("HAI_FIVE_FINGER_FILLET_02")) || iVar1 == joaat("HAI_DOMINOES_01"))
			{
				iVar2 = __LIB_1__::func_953(Global_40.f_4283);
				if (__LIB_0__::func_20(iVar2) && iVar2 == Global_1347702[uParam0->f_174 /*49*/].f_27)
				{
					return true;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = __LIB_1__::func_785(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (__LIB_0__::func_20(Global_1894899.f_2) && Global_1894899.f_2 == __LIB_1__::func_953(Global_40.f_4283))
				{
					return true;
				}
			}
		}
	}
	if (__LIB_0__::func_58(uParam0, iParam1))
	{
		return true;
	}
	return false;
}

void func_770()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_31(iVar0))
		{
			__LIB_0__::func_288(iVar0, 30, 1);
		}
		iVar0++;
	}
}

bool func_771()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_393))
	{
		__LIB_0__::func_989();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, 0);
	__LIB_0__::func_149(-1);
	__LIB_0__::func_148(3);
	return true;
}

void func_772(int iParam0, char* sParam1, bool bParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_958(iParam8, sParam1, sParam4, sParam5, sParam6, sParam7);
	if (bParam2 == 1)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	__LIB_5__::func_238(iParam0, sParam1, sVar0, fParam3);
}

void func_773(int iParam0, int iParam1, int iParam2, int iParam3)
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
		HUD::_0xC9CAEAEEC1256E54(724769646);
	}
	if (iParam3 == 0)
	{
		__LIB_3__::func_807();
	}
}

void func_774(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_1765));
}

void func_775(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0 /*13*/].f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[iVar0 /*13*/].f_4)))
			{
				__LIB_0__::func_928(&(uParam0->f_1667), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), &(uParam0->f_3[iVar0 /*13*/].f_4), 0);
			}
		}
		iVar0++;
	}
}

void func_776(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	var uVar0;
	var uVar7;
	int iVar14;
	float fVar15;
	__LIB_4__::func_672(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35))), (2f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35))), 0f);
	__LIB_4__::func_672(&uVar7, 1f, vParam3, (-2f * BUILTIN::SIN(fParam6)), (2f * BUILTIN::COS(fParam6)), 0f);
	if (MISC::ABSF(uParam0->f_912[iParam1 /*41*/].f_12) == MISC::ABSF(uParam0->f_912[iParam1 /*41*/].f_13))
	{
		if (MISC::ABSF(uParam0->f_912[iParam1 /*41*/].f_12) >= 90f)
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
		fVar15 = (uParam0->f_912[iParam1 /*41*/].f_12 - uParam0->f_912[iParam1 /*41*/].f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if (uParam0->f_912[iParam1 /*41*/].f_12 < uParam0->f_912[iParam1 /*41*/].f_13)
		{
			fVar15 = (uParam0->f_912[iParam1 /*41*/].f_12 + MISC::ABSF(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_912[iParam1 /*41*/].f_13 + MISC::ABSF(fVar15));
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
	*uParam7 = { uParam0->f_912[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar15) * (uParam0->f_912[iParam1 /*41*/].f_11 / 2f)), (BUILTIN::SIN(fVar15) * (uParam0->f_912[iParam1 /*41*/].f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(uParam2[iVar14 /*3*/]) = { __LIB_4__::func_792(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / BUILTIN::TO_FLOAT(5))) };
		iVar14++;
	}
}

void func_777(var uParam0)
{
	__LIB_4__::func_228(uParam0);
	__LIB_1__::func_401(uParam0, 1);
	__LIB_2__::func_828(uParam0, 1);
	__LIB_1__::func_398(uParam0, 1);
	__LIB_2__::func_829(uParam0, 1);
	__LIB_1__::func_402(uParam0, 1);
	__LIB_1__::func_403(uParam0, 1);
	__LIB_2__::func_830(uParam0, 1);
	__LIB_1__::func_413(uParam0, 0);
}

bool func_778(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	if (Global_1347702[iParam0 /*49*/].f_12 & 32768 != 0)
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 2 == 0)
	{
		return false;
	}
	if (!bParam3)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1347702[iParam0 /*49*/].f_29[iVar0] > -1 && Global_1347702[iParam0 /*49*/].f_29[iVar0] < 27)
		{
			if (Global_40.f_4942[Global_1347702[iParam0 /*49*/].f_29[iVar0] /*60*/].f_59 != 0)
			{
				if (Global_40.f_4942[Global_1347702[iParam0 /*49*/].f_29[iVar0] /*60*/].f_59 != Global_1347702[iParam0 /*49*/].f_15)
				{
					return false;
				}
			}
			else if (__LIB_0__::func_273(Global_1347702[iParam0 /*49*/].f_29[iVar0], 16, 1))
			{
				if (iParam1 == 0)
				{
					return false;
				}
				else if (!__LIB_1__::func_22(Global_1347702[iParam0 /*49*/].f_29[iVar0]))
				{
					return false;
				}
			}
			if (bParam4 && __LIB_0__::func_1(Global_1935630, 4096))
			{
			}
			else if (__LIB_0__::func_287(Global_1347702[iParam0 /*49*/].f_29[iVar0], 44, 0) && iParam2 == 1)
			{
			}
			else if (!__LIB_12__::func_610(__LIB_0__::func_167(Global_1347702[iParam0 /*49*/].f_29[iVar0]), -1f, 10f, 1, 1, 40f))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_779(var uParam0, vector3 vParam1)
{
	if (!__LIB_0__::func_86(vParam1))
	{
		uParam0->f_206.f_5 = { vParam1 };
	}
	else
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
}

bool func_780(int iParam0, vector3 vParam1, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	__LIB_1__::func_694(iParam0, vParam1, 0, uParam5, bParam6, fParam7, fParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_75(uParam4))
	{
		if (fVar4 <= fParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_1__::func_283(uParam4, 0);
			}
		}
	}
	else if (bParam10 && fVar4 > fParam8)
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

void func_781(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		if (uParam0->f_741 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {Global_1347702[uParam0->f_174 /*49*/].f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopMoveRestrict", 64);
		vVar8 = { uParam0->f_741, uParam0->f_741, uParam0->f_741 };
		uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_1__::func_440(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_2603, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_782(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		if (uParam0->f_742 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {Global_1347702[uParam0->f_174 /*49*/].f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopSpawnRestrict", 64);
		vVar8 = { uParam0->f_742, uParam0->f_742, uParam0->f_742 };
		uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_1__::func_440(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_2604, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

bool func_783(var uParam0, int iParam1)
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
	if ((__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 0, 0)) && !__LIB_0__::func_274(&(uParam0->f_912[iParam1 /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_912[iParam1 /*41*/]), 64))
	{
		return true;
	}
	return false;
}

void func_784(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_22(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = __LIB_0__::func_167(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	__LIB_1__::func_774(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_745(iParam0);
}

void func_785(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (__LIB_4__::func_637(&(uParam0->f_1529[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!__LIB_0__::func_1(uParam0->f_1529[iParam1 /*15*/].f_10, 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_5__::func_386(uParam0->f_1799, 0);
					__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_1529[iParam1 /*15*/].f_10, 256))
			{
				if (!__LIB_4__::func_795())
				{
					__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!__LIB_4__::func_790())
			{
				__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
			}
			break;
	}
}

int func_786(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_6(iParam0))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	iVar4 = 1;
	if (iVar0 == 1)
	{
		iVar5 = __LIB_0__::func_76(iParam0);
		if (iVar5 == 23)
		{
			iVar4 = 1;
			iVar1 = 134;
			bVar3 = false;
			iVar2 = 0;
			if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			bVar3 = false;
			if (__LIB_0__::func_627(134, 0) && __LIB_5__::func_543(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
			if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 16)
		{
			iVar4 = 1;
			if (__LIB_9__::func_6(134, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (__LIB_9__::func_6(138, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 46)
		{
			if (__LIB_1__::func_187(58))
			{
				iVar4 = 1;
				iVar1 = 140;
				if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
				return iVar4;
			}
			else
			{
				return 1;
			}
		}
		else if (iVar5 == 17)
		{
			iVar4 = 1;
			iVar1 = 134;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (__LIB_1__::func_187(5) && __LIB_1__::func_185(12))
			{
				iVar1 = 21;
				if (__LIB_9__::func_6(iVar1, 1, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar5 == 15)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 59;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar5 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar5 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar5 == 10)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if ((__LIB_1__::func_25(Global_1835011[11 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1)) && __LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 59;
			iVar2 = 0;
			if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar6 = __LIB_0__::func_76(iParam0);
		if (iVar6 == 0)
		{
			iVar4 = 1;
			if (__LIB_3__::func_751(15))
			{
				if (__LIB_10__::func_994(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 97;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 2)
		{
			iVar1 = 96;
		}
		else if (iVar6 == 61)
		{
			iVar4 = 1;
			if (__LIB_3__::func_751(15))
			{
				if (__LIB_10__::func_994(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (__LIB_3__::func_751(9))
			{
				if (__LIB_10__::func_994(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (!__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1))
			{
				iVar1 = 63;
				iVar2 = 0;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
			if (__LIB_9__::func_6(iVar1, iVar2, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 62)
		{
			iVar4 = 1;
			if (__LIB_3__::func_751(15))
			{
				if (__LIB_10__::func_994(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (__LIB_3__::func_751(9))
			{
				if (__LIB_10__::func_994(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 112;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 63;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar6 == 76)
		{
			iVar1 = 134;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
		}
		else if (iVar6 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar6 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar6 == 97)
		{
			iVar4 = 1;
			if (__LIB_1__::func_25(Global_1835011[6 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[13 /*74*/].f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar6 == 114)
		{
			if (__LIB_1__::func_25(Global_1835011[9 /*74*/].f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar6 == 134)
		{
			iVar4 = 1;
			iVar1 = 95;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
	}
	if (iVar1 == -1)
	{
		return 1;
	}
	if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_787(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			VOLUME::_0x748C5F51A18CB8F0(0);
			__LIB_11__::func_834(iParam0, 1, 1, iParam1, 32);
			VOLUME::_0x748C5F51A18CB8F0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (__LIB_0__::func_5(Global_40.f_450[iVar1]))
				{
					Global_40.f_450[iVar0] = Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

void func_788(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				__LIB_12__::func_634(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				__LIB_12__::func_635(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

bool func_789(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*uParam0 = __LIB_4__::func_720(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return false;
	}
	else if (iVar11 == 1)
	{
		return false;
	}
	else if (iVar11 == 2)
	{
		if (!__LIB_0__::func_272(*uParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_790(int iParam0)
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
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
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
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
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
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
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
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_1__::func_825(-518019409, 1, 752097756);
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
			__LIB_1__::func_881();
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

void func_791(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_792(var uParam0)
{
	return iLocal_47;
}

bool func_793(var uParam0)
{
	if (__LIB_0__::func_13(32768))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 134217728))
	{
		return true;
	}
	return false;
}

void func_794(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_12__::func_644(uParam0);
	if (uParam0->f_750 == -1)
	{
		if (iVar0 == 1 || iVar0 == 0)
		{
			uParam0->f_750 = uParam0->f_749;
		}
		else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			uParam0->f_750 = uParam0->f_748;
		}
	}
	if (uParam0->f_750 >= 0)
	{
		iVar1 = PED::_0x62DE46F061CAA468();
		if (uParam0->f_750 < iVar1)
		{
			iVar2 = (iVar1 - uParam0->f_750);
			PED::_0x7D4E70A67A651C71(iVar2);
		}
		else if (uParam0->f_750 > PED::_0x62DE46F061CAA468())
		{
			PED::_0xED9582B3DA8F02B4(uParam0->f_750);
		}
	}
	uParam0->f_748 = -1;
	uParam0->f_749 = -1;
}

void func_795(int* iParam0)
{
	struct<367> Var0;
	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

int func_796(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0 /*3*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*3*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_797(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_12__::func_671(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(&Var0))
		{
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&Var0))
			{
				return false;
			}
		}
	}
	return true;
}

void func_798(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 134217728))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 134217728);
	}
}

int func_799()
{
	return Global_1572864.f_10;
}

void func_800(var uParam0)
{
	if (__LIB_12__::func_639(uParam0, 4))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_641);
	}
}

bool func_801(var uParam0)
{
	if (__LIB_12__::func_639(uParam0, 8))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_642);
		if (StackVal)
		{
			return true;
		}
		return false;
	}
	else
	{
		Stack.Push(!__LIB_12__::func_688(&(uParam0->f_206), 4));
		Stack.Push(&(uParam0->f_206));
		Call_Loc(uParam0->f_206.f_342);
		if (StackVal || StackVal)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_802(var uParam0)
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
	iVar0 = uParam0->f_1584;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_912[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_912[iVar0 /*41*/].f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_912[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_912[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1771);
		if (bVar4)
		{
			vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1771) };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_912[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_912[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_912[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798))
			{
				__LIB_12__::func_693(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1798 == iVar9)
			{
				__LIB_12__::func_693(uParam0, 65536);
				return;
			}
		}
		__LIB_12__::func_686(uParam0, 65536);
	}
}

void func_803()
{
	struct<6> Var0;
	int iVar6;
	Var0.f_2 = -1;
	iVar6 = 0;
	while (iVar6 < 5)
	{
		Global_43806[iVar6 /*6*/] = { Var0 };
		iVar6++;
	}
	Global_43837 = 0;
}

void func_804(int iParam0)
{
	if (iLocal_48 != iParam0)
	{
		iLocal_48 = iParam0;
	}
}

int func_805(var uParam0)
{
	switch (uParam0->f_752)
	{
		case 0:
			return joaat("CHAL_CTX_CHECKPOINT_1");
		case 1:
			return joaat("CHAL_CTX_CHECKPOINT_2");
		case 2:
			return joaat("CHAL_CTX_CHECKPOINT_3");
		case 3:
			return joaat("CHAL_CTX_CHECKPOINT_4");
		case 4:
			return joaat("CHAL_CTX_CHECKPOINT_5");
		case 5:
			return joaat("CHAL_CTX_CHECKPOINT_6");
		case 6:
			return joaat("CHAL_CTX_CHECKPOINT_7");
		case 7:
			return joaat("CHAL_CTX_CHECKPOINT_8");
		case 8:
			return joaat("CHAL_CTX_CHECKPOINT_9");
		case 9:
			return joaat("CHAL_CTX_CHECKPOINT_10");
		case 10:
			return joaat("CHAL_CTX_CHECKPOINT_11");
		case 11:
			return joaat("CHAL_CTX_CHECKPOINT_12");
		case 12:
			return joaat("CHAL_CTX_CHECKPOINT_13");
		case 13:
			return joaat("CHAL_CTX_CHECKPOINT_14");
		case 14:
			return joaat("CHAL_CTX_CHECKPOINT_15");
		case 15:
			return joaat("CHAL_CTX_CHECKPOINT_16");
		case 16:
			return joaat("CHAL_CTX_CHECKPOINT_17");
		case 17:
			return joaat("CHAL_CTX_CHECKPOINT_18");
		case 18:
			return joaat("CHAL_CTX_CHECKPOINT_19");
		case 19:
			return joaat("CHAL_CTX_CHECKPOINT_20");
		case 20:
			return joaat("CHAL_CTX_CHECKPOINT_21");
		case 21:
			return joaat("CHAL_CTX_CHECKPOINT_22");
		case 22:
			return joaat("CHAL_CTX_CHECKPOINT_23");
		case 23:
			return joaat("CHAL_CTX_CHECKPOINT_24");
		case 24:
			return joaat("CHAL_CTX_CHECKPOINT_25");
	}
	return 0;
}

void func_806(var uParam0)
{
	if (__LIB_12__::func_639(uParam0, 2))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_640);
	}
}

int func_807(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 4;
	}
	return 0;
}

int func_808(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_LAMP35X");
		case 1:
			return joaat("P_LAMPWALL03X");
		case 2:
			return joaat("P_LAMPWALL03X");
		case 3:
			return 0;
		case 4:
			return joaat("P_LIGHTBULB01X");
	}
	return 0;
}

Vector3 func_809(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2553.688f, -1306.052f, 49.97987f;
				case 1:
					return 2539.203f, -1306.098f, 49.9794f;
				case 2:
					return 2539.188f, -1291.61f, 49.97276f;
				case 3:
					return 2543.014f, -1290.244f, 49.95035f;
				case 4:
					return 2549.863f, -1290.254f, 50.00306f;
				case 5:
					return 2553.694f, -1291.636f, 49.96515f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2698.354f, -1347.851f, 48.38391f;
				case 1:
					return 2702.992f, -1353.339f, 48.37968f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -777.252f, -1367.02f, 44.965f;
				case 1:
					return -780.828f, -1366.866f, 45.282f;
				case 2:
					return -777.252f, -1358.225f, 44.965f;
				case 3:
					return -780.85f, -1358.394f, 45.282f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_810(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = ENTITY::_0x6F3068258A499E52(iParam1, vParam2, 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_1))
	{
		*uParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_1));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	uParam0->f_2 = 1f;
	return true;
}

int func_811(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 13;
		case 2:
			return 10;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

int func_812(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_STAGESHELLLIGHT01X");
		case 1:
			return joaat("P_BULB_G_STAGE01X");
		case 2:
			return joaat("P_BULB_G_STAGE01X");
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

Vector3 func_813(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2550.559f, -1306.926f, 48.30644f;
				case 1:
					return 2549.975f, -1306.784f, 48.30579f;
				case 2:
					return 2549.373f, -1306.661f, 48.27742f;
				case 3:
					return 2548.778f, -1306.565f, 48.3292f;
				case 4:
					return 2548.191f, -1306.501f, 48.33652f;
				case 5:
					return 2547.599f, -1306.461f, 48.33248f;
				case 6:
					return 2547.012f, -1306.439f, 48.3321f;
				case 7:
					return 2546.379f, -1306.432f, 48.32198f;
				case 8:
					return 2545.83f, -1306.439f, 48.32955f;
				case 9:
					return 2545.216f, -1306.474f, 48.32186f;
				case 10:
					return 2544.61f, -1306.53f, 48.32782f;
				case 11:
					return 2544.018f, -1306.617f, 48.31695f;
				case 12:
					return 2543.43f, -1306.736f, 48.32981f;
				case 13:
					return 2542.867f, -1306.884f, 48.33492f;
				case 14:
					return 2542.276f, -1307.063f, 48.32477f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				case 10:
					return 2701.173f, -1350.579f, 47.846f;
				case 11:
					return 2700.92f, -1350.285f, 47.846f;
				case 12:
					return 2700.691f, -1349.987f, 47.846f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
	return 0f, 0f, 0f;
}

int func_814(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 2;
	}
	return 0;
}

int func_815(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_LAMPWALL04X");
		case 1:
			return joaat("P_NAPOLEONLIGHT01X");
		case 2:
			return joaat("P_NAPOLEONLIGHT01X");
		case 3:
			return 0;
		case 4:
			return joaat("P_LAMPWALL04X");
	}
	return 0;
}

Vector3 func_816(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2548.641f, -1292.548f, 53.95758f;
				case 1:
					return 2544.289f, -1292.548f, 53.96331f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2691.054f, -1352.816f, 52.59f;
				case 1:
					return 2696.695f, -1359.527f, 52.59f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2688.867f, -1354.651f, 53.697f;
				case 1:
					return 2694.49f, -1361.375f, 53.697f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -783.34f, -1367.153f, 45.388f;
				case 1:
					return -783.939f, -1360.04f, 45.325f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_817(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("P_STAGESHELLLIGHT_LONG01X");
				case 1:
					return joaat("P_STAGESHELLLIGHT_RED01X");
				case 2:
					return joaat("P_STAGESHELLLIGHT_RED01X");
				default:
					break;
			}
			break;
		case 1:
		case 2:
			return joaat("P_BULB_G_01X");
		case 3:
			break;
		case 4:
			break;
	}
	return 0;
}

Vector3 func_818(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.694f, -1306.438f, 48.21665f;
				case 1:
					return 2551.421f, -1308.492f, 48.21665f;
				case 2:
					return 2541.836f, -1308.431f, 48.21665f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2697.828f, -1347.849f, 48.061f;
				case 1:
					return 2697.828f, -1347.854f, 48.89f;
				case 2:
					return 2697.827f, -1347.856f, 49.633f;
				case 3:
					return 2697.825f, -1347.853f, 50.458f;
				case 4:
					return 2697.889f, -1347.932f, 51.201f;
				case 5:
					return 2698.051f, -1348.127f, 52.013f;
				case 6:
					return 2698.298f, -1348.42f, 52.674f;
				case 7:
					return 2698.682f, -1348.865f, 53.307f;
				case 8:
					return 2699.068f, -1349.323f, 53.747f;
				case 9:
					return 2699.578f, -1349.924f, 54.096f;
				case 10:
					return 2700.049f, -1350.493f, 54.234f;
				case 11:
					return 2700.6f, -1351.151f, 54.236f;
				case 12:
					return 2701.085f, -1351.721f, 54.095f;
				case 13:
					return 2701.579f, -1352.32f, 53.744f;
				case 14:
					return 2701.959f, -1352.784f, 53.318f;
				case 15:
					return 2702.34f, -1353.231f, 52.683f;
				case 16:
					return 2702.584f, -1353.52f, 52.034f;
				case 17:
					return 2702.747f, -1353.716f, 51.212f;
				case 18:
					return 2702.814f, -1353.797f, 50.457f;
				case 19:
					return 2702.818f, -1353.797f, 49.618f;
				case 20:
					return 2702.819f, -1353.797f, 48.896f;
				case 21:
					return 2702.817f, -1353.803f, 48.036f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
	return 0f, 0f, 0f;
}

int func_819(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 22;
		case 2:
			return 22;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

float func_820(var uParam0)
{
	float fVar0;
	fVar0 = 0f;
	return fVar0;
}

float func_821(var uParam0)
{
	float fVar0;
	fVar0 = 5f;
	return fVar0;
}

int func_822(var uParam0)
{
	int iVar0;
	iVar0 = 10;
	return iVar0;
}

float func_823(var uParam0)
{
	float fVar0;
	fVar0 = 1f;
	return fVar0;
}

float func_824(var uParam0)
{
	float fVar0;
	fVar0 = 3f;
	return fVar0;
}

float func_825(var uParam0)
{
	float fVar0;
	fVar0 = 0.3f;
	return fVar0;
}

void func_826(var uParam0, int iParam1)
{
	uParam0->f_343 = (uParam0->f_343 || iParam1);
}

void func_827(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { __LIB_12__::func_665(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_348, sParam1);
	}
}

void func_828(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	__LIB_0__::func_172(uParam0->f_1771);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1771 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630.f_12)
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1771, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_12__::func_686(uParam0, 1048576);
	__LIB_12__::func_686(uParam0, 2097152);
}

void func_829(var uParam0)
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
	__LIB_0__::func_172(uParam0->f_1771);
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
	uParam0->f_1771 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1771, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_12__::func_693(uParam0, 2097152);
	__LIB_12__::func_686(uParam0, 1048576);
}

void func_830(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_12__::func_734(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (__LIB_12__::func_734(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_12__::func_734(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_12__::func_734(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_12__::func_734(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

void func_831(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_12__::func_655(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_912[iVar0 /*41*/].f_29)
		{
			uParam0->f_912[iVar0 /*41*/].f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_912[iVar0 /*41*/].f_1, -uParam0->f_1784, uParam0->f_1781) };
			vVar1 = { uParam0->f_912[iVar0 /*41*/].f_7 - uParam0->f_912[iVar0 /*41*/].f_1 };
			vVar1 = { vVar1 + uParam0->f_1781 };
			uParam0->f_912[iVar0 /*41*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_912[iVar0 /*41*/].f_1, -uParam0->f_1784, vVar1) };
			uParam0->f_912[iVar0 /*41*/].f_12 = (uParam0->f_912[iVar0 /*41*/].f_12 + uParam0->f_1784);
			uParam0->f_912[iVar0 /*41*/].f_13 = (uParam0->f_912[iVar0 /*41*/].f_13 + uParam0->f_1784);
			if (uParam0->f_912[iVar0 /*41*/].f_12 > 180f)
			{
				uParam0->f_912[iVar0 /*41*/].f_12 = (-180f + (MISC::ABSF(uParam0->f_912[iVar0 /*41*/].f_12) - 180f));
			}
			else if (uParam0->f_912[iVar0 /*41*/].f_12 < -180f)
			{
				uParam0->f_912[iVar0 /*41*/].f_12 = (180f - (MISC::ABSF(uParam0->f_912[iVar0 /*41*/].f_12) - 180f));
			}
			if (uParam0->f_912[iVar0 /*41*/].f_13 > 180f)
			{
				uParam0->f_912[iVar0 /*41*/].f_13 = (-180f + (MISC::ABSF(uParam0->f_912[iVar0 /*41*/].f_13) - 180f));
			}
			else if (uParam0->f_912[iVar0 /*41*/].f_13 < -180f)
			{
				uParam0->f_912[iVar0 /*41*/].f_13 = (180f - (MISC::ABSF(uParam0->f_912[iVar0 /*41*/].f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1529[iVar0 /*15*/].f_11)
		{
			uParam0->f_1529[iVar0 /*15*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1529[iVar0 /*15*/], -uParam0->f_1784, uParam0->f_1781) };
			uParam0->f_1529[iVar0 /*15*/].f_6.f_2 = (uParam0->f_1529[iVar0 /*15*/].f_6.f_2 + uParam0->f_1784);
		}
		iVar0++;
	}
	__LIB_12__::func_686(uParam0, 8388608);
}

void func_832(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if ((uParam0[iVar0 /*5*/])->f_1 != 0 && ENTITY::_0x1FF441D7954F8709((uParam0[iVar0 /*5*/])->f_1))
		{
			ENTITY::_0xD2B9C78537ED5759((uParam0[iVar0 /*5*/])->f_1);
		}
		iVar0++;
	}
}

void func_833(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false, bParam8);
}

int func_834(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!__LIB_0__::func_49(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @166; //curOff = 151
		}
		iVar1++;
	}
	if (!__LIB_0__::func_49(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

Vector3 func_835(var uParam0)
{
	if (__LIB_12__::func_655(uParam0, 8))
	{
		return uParam0->f_912[uParam0->f_1580 /*41*/].f_7;
	}
	if (uParam0->f_1584 >= 0)
	{
		return uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
	}
	return 0f, 0f, 0f;
}

void func_836(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2));
				if (__LIB_12__::func_655(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
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

void func_837(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_177)
	{
		__LIB_12__::func_646(uParam0, uParam0->f_177);
		uParam0->f_177 = iParam1;
	}
}

bool func_838(var uParam0)
{
	struct<8> Var0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_751, true, false))
		{
			return true;
		}
	}
	else
	{
		Var0 = { __LIB_12__::func_675(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return false;
}

void func_839(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_348, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_366[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_366[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_350 };
			uParam0->f_366[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	__LIB_12__::func_676(uParam0, sParam1);
	__LIB_12__::func_677(uParam0, 2097152, 1);
	__LIB_0__::func_88(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

bool func_840(var uParam0, char* sParam1, int iParam2)
{
	if (__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	if (__LIB_4__::func_623(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (__LIB_4__::func_623(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && __LIB_12__::func_645(uParam0) == -1)
		{
			return true;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((__LIB_4__::func_623(sParam1) == 9 || __LIB_4__::func_623(sParam1) == 12) || __LIB_4__::func_623(sParam1) == 13) && __LIB_0__::func_755(sParam1, 8))
		{
			return true;
		}
		return false;
	}
	switch (__LIB_4__::func_623(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return __LIB_12__::func_670(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!__LIB_0__::func_755(sParam1, 8))
			{
				__LIB_0__::func_324(sParam1, 8);
			}
			break;
	}
	return false;
}

void func_841(var uParam0)
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
		__LIB_12__::func_677(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	__LIB_12__::func_677(uParam0, 16, 1);
}

struct<2> func_842(int iParam0)
{
	struct<2> Var0;
	char* sVar2;
	int iVar3;
	Var0 = { __LIB_12__::func_671(iParam0) };
	sVar2 = __LIB_0__::func_628(&Var0);
	iVar3 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar2);
	sVar2 = HUD::_0x806862E5D266CF38(sVar2, 1, iVar3);
	StringCopy(&Var0, sVar2, 16);
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

int func_843(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_844(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		__LIB_12__::func_700(uParam0);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

struct<8> func_845(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_12__::func_701(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { __LIB_0__::func_134() };
	}
	return Var0;
}

void func_846(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_0__::func_137() };
	__LIB_12__::func_676(uParam0, &Var0);
}

bool func_847(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if ((uParam0->f_177 == 6 && __LIB_12__::func_645(uParam0) == -1) || __LIB_12__::func_639(uParam0, 64))
			{
				return true;
			}
			break;
		case 8:
			return uParam0->f_177 == 6;
		case 2:
			return uParam0->f_177 == 2;
		case 3:
			return uParam0->f_177 == 9;
		case 4:
			return __LIB_12__::func_670(&(uParam0->f_753));
		case 5:
			return uParam0->f_177 == 8;
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
	}
	return false;
}

bool func_848(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	bool bVar0;
	if (iParam2 == -1)
	{
		if (__LIB_12__::func_682(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (__LIB_12__::func_682(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (__LIB_12__::func_682(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (__LIB_12__::func_682(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (__LIB_12__::func_682(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (__LIB_12__::func_682(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (__LIB_12__::func_682(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*iParam5 == 1 || *iParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_784) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (__LIB_12__::func_682(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (__LIB_12__::func_682(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_849(var uParam0, int iParam1)
{
	if (__LIB_0__::func_84(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "ExportCamera") && iParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_348))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

void func_850(var uParam0)
{
	bool bVar0;
	if (!__LIB_12__::func_655(uParam0, 134217728))
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
			__LIB_12__::func_693(uParam0, 134217728);
		}
	}
}

bool func_851(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_1581 < 0)
	{
		return true;
	}
	switch (uParam0->f_371[uParam0->f_1581 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_0__::func_265(&(uParam0->f_1768)) >= 15f)
			{
				__LIB_12__::func_693(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1664)
			{
				if (__LIB_0__::func_265(&(uParam0->f_1768)) >= 15f)
				{
					__LIB_12__::func_693(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_12__::func_714(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_12__::func_714(uParam0), false))
				{
					uParam0->f_1664 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_12__::func_714(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_12__::func_714(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_12__::func_714(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_0__::func_265(&(uParam0->f_1768)) >= 15f;
	}
	return false;
}

void func_852(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_12__::func_715(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
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

void func_853(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 0, 1, 0)))
						{
							if (!__LIB_12__::func_722(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 1, 1, 0)))
						{
							if (!__LIB_12__::func_722(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
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

void func_854(var uParam0)
{
	StringCopy(&(uParam0->f_344), "", 32);
	__LIB_12__::func_723(uParam0);
	__LIB_0__::func_487(uParam0, 0f, 0f, 0f);
	__LIB_12__::func_724(uParam0);
}

void func_855(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_1584 < 0)
	{
		return;
	}
	if ((uParam0->f_1795 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797)) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_1797))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_1797, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || __LIB_0__::func_94(iVar2, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1) < __LIB_0__::func_94(iVar1, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1))
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
		if (!__LIB_12__::func_655(uParam0, 8192))
		{
			if (__LIB_0__::func_94(iVar1, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1) <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_17 + 5f) || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 5f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 5f);
				}
			}
			else if ((!__LIB_1__::func_533(512) || __LIB_4__::func_635(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
			}
		}
	}
}

bool func_856(var uParam0)
{
	if (uParam0->f_1584 < 0)
	{
		return false;
	}
	if (__LIB_12__::func_655(uParam0, 33554432))
	{
		return false;
	}
	if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 2) && uParam0->f_1793)
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1771) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1772))
	{
		return true;
	}
	if (__LIB_12__::func_655(uParam0, 65536))
	{
		return true;
	}
	return false;
}

int func_857(var uParam0, int iParam1)
{
	if (uParam0->f_371[iParam1 /*18*/].f_1 > uParam0->f_1579)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2))
	{
	}
	if (uParam0->f_1579 < 0 || uParam0->f_1579 > 6)
	{
		return 0;
	}
	if (uParam0->f_371[iParam1 /*18*/].f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_371[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		return 1;
	}
	if (!__LIB_12__::func_655(uParam0, 4096) && uParam0->f_1792)
	{
		return 0;
	}
	if (Global_1430231.f_4)
	{
		return 0;
	}
	if (uParam0->f_371[iParam1 /*18*/] != uParam0->f_1580)
	{
		return 0;
	}
	if (__LIB_0__::func_78(uParam0) > 3 && uParam0->f_371[iParam1 /*18*/] != uParam0->f_1580)
	{
		return 0;
	}
	if ((((__LIB_0__::func_78(uParam0) > 3 && uParam0->f_371[iParam1 /*18*/].f_17 == 1) && __LIB_4__::func_576(uParam0) != 11) && __LIB_12__::func_692(uParam0, uParam0->f_1580)) && uParam0->f_371[iParam1 /*18*/].f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_371[iParam1 /*18*/].f_2 == 9 && uParam0->f_371[iParam1 /*18*/].f_4 >= 0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, __LIB_0__::func_731(Global_35)))
		{
			if (__LIB_0__::func_129(&(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/]), 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_129(&(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/]), 8))
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

bool func_858(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1418[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1418[iVar0 /*10*/]), 2)) && !__LIB_0__::func_129(&(uParam0->f_1418[iVar0 /*10*/]), 16)) && __LIB_12__::func_736(uParam0, iVar0))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[iVar0 /*10*/].f_8))
			{
				uParam0->f_1418[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1418[iVar0 /*10*/]), 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
				return false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1418[iVar0 /*10*/].f_8, false))
			{
				return false;
			}
			if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout"))
			{
				__LIB_4__::func_647(&(uParam0->f_1418[iVar0 /*10*/]), 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
			__LIB_4__::func_647(&(uParam0->f_1418[iVar0 /*10*/]), 16);
		}
		iVar0++;
	}
	return true;
}

void func_859(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1418[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1418[iVar0 /*10*/]), 2))
		{
			iVar1 = 0;
			if (__LIB_12__::func_736(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1418[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1418[iVar0 /*10*/]), iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, __LIB_0__::func_166(), 64);
	StringCopy(&(Var2.f_8), __LIB_4__::func_616(), 64);
	uParam0->f_1604 = { Var2 };
	uParam0->f_1627 = { Var2 };
	if (!__LIB_12__::func_687(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(__LIB_0__::func_166());
		__LIB_12__::func_709(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1241[iVar0 /*22*/].f_2), __LIB_0__::func_166()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1241[iVar0 /*22*/].f_2)))
			{
				CAM::_0x6A4D224FC7643941(&(uParam0->f_1241[iVar0 /*22*/].f_2));
				uParam0->f_1241[iVar0 /*22*/].f_21 = 1;
			}
		}
		iVar0++;
	}
}

void func_860(var uParam0)
{
	__LIB_12__::func_763(uParam0);
	__LIB_12__::func_764(uParam0);
}

void func_861(var uParam0, int iParam1)
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
	__LIB_0__::func_172(uParam0->f_1771);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1778 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1778 * FtoV(__LIB_4__::func_634(iParam1)) };
	uParam0->f_1771 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1771, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_12__::func_693(uParam0, 1048576);
	__LIB_12__::func_686(uParam0, 2097152);
}

void func_862(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_12__::func_734(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_12__::func_734(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_12__::func_734(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_12__::func_734(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (__LIB_12__::func_734(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (__LIB_12__::func_734(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (__LIB_12__::func_734(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (__LIB_12__::func_734(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (__LIB_12__::func_734(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (__LIB_12__::func_734(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (__LIB_12__::func_734(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (__LIB_12__::func_734(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (__LIB_12__::func_734(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (__LIB_12__::func_734(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

void func_863(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 > fParam1 && uParam0->f_2 > uParam0->f_3)
		{
			fVar1 = (fParam3 - fParam2);
			fVar0 = (fVar1 / fParam3);
			uParam0->f_2 = __LIB_0__::func_667(fParam1, uParam0->f_4, fVar0);
			if (uParam0->f_2 < fParam1)
			{
				uParam0->f_2 = fParam1;
			}
		}
		fVar2 = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
		OBJECT::_0xF49574E2332A8F06(*uParam0, fVar2);
	}
}

void func_864(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 < fParam1 && uParam0->f_2 < uParam0->f_4)
		{
			fVar0 = (fParam2 / fParam3);
			uParam0->f_2 = __LIB_0__::func_667(uParam0->f_3, fParam1, fVar0);
			if (uParam0->f_2 > fParam1)
			{
				uParam0->f_2 = fParam1;
			}
			fVar1 = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
			OBJECT::_0xF49574E2332A8F06(*uParam0, fVar1);
		}
	}
}

void func_865(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	vector3 vVar0;
	if (bParam2)
	{
		TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, *(uParam3[0 /*3*/]), 1), 0);
	}
	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	if (__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/]), 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_40, 0);
	}
	else
	{
		vVar0 = { __LIB_12__::func_737(uParam0, iParam1) };
		if (!__LIB_0__::func_86(vVar0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
	}
}

void func_866(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;
	vVar0 = { __LIB_12__::func_737(uParam0, iParam1) };
	if (!__LIB_0__::func_86(vVar0))
	{
		if (bParam2)
		{
			TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, vParam3, 1), 0);
		}
		fVar3 = __LIB_0__::func_152(vParam3, vVar0, 1);
		if (__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar3 = uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_40;
		}
		if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 256))
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
		if (!__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/]), 4) && !__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/]), 2))
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
		if (__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar5 = uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_40;
		}
		fVar5 = (fVar5 % 360f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

void func_867(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_12__::func_660(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_12__::func_740(&(uParam0->f_41));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_41[iVar0 /*3*/] = iParam1;
	uParam0->f_41[iVar0 /*3*/].f_2 = (uParam0->f_41[iVar0 /*3*/].f_2 || iParam2);
	if (__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 8192);
	}
}

void func_868(bool bParam0)
{
	__LIB_12__::func_662(bParam0);
	__LIB_0__::func_267(bParam0);
}

void func_869(var uParam0)
{
	__LIB_12__::func_743(1, &(uParam0->f_2605.f_482));
}

void func_870(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (__LIB_0__::func_1(uParam0->f_41[iVar0 /*3*/].f_2, iParam1))
		{
			__LIB_12__::func_672(uParam0->f_41[iVar0 /*3*/].f_2, iParam1);
			if (uParam0->f_41[iVar0 /*3*/].f_2 == 0 || !__LIB_0__::func_1(uParam0->f_41[iVar0 /*3*/].f_2, iParam2))
			{
				__LIB_12__::func_744(&(uParam0->f_41[iVar0 /*3*/]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_0__::func_1(uParam0->f_117[iVar0 /*5*/].f_4, iParam1))
		{
			__LIB_12__::func_672(uParam0->f_117[iVar0 /*5*/].f_4, iParam1);
			if (uParam0->f_117[iVar0 /*5*/].f_4 == 0 || !__LIB_0__::func_1(uParam0->f_117[iVar0 /*5*/].f_4, iParam2))
			{
				__LIB_12__::func_745(&(uParam0->f_117[iVar0 /*5*/]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_0__::func_1((uParam0[iVar0 /*3*/])->f_2, iParam1))
		{
			__LIB_12__::func_672((uParam0[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0[iVar0 /*3*/])->f_2 == 0 || !__LIB_0__::func_1((uParam0[iVar0 /*3*/])->f_2, iParam2))
			{
				__LIB_12__::func_746(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_1(uParam0->f_28[iVar0 /*3*/].f_2, iParam1))
		{
			__LIB_12__::func_672(uParam0->f_28[iVar0 /*3*/].f_2, iParam1);
			if (uParam0->f_28[iVar0 /*3*/].f_2 == 0 || !__LIB_0__::func_1(uParam0->f_28[iVar0 /*3*/].f_2, iParam2))
			{
				__LIB_12__::func_747(&(uParam0->f_28[iVar0 /*3*/]));
			}
		}
		iVar0++;
	}
}

bool func_871(var uParam0)
{
	if (uParam0->f_174 == __LIB_10__::func_698())
	{
		return true;
	}
	return false;
}

void func_872(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (iParam1 != -15)
	{
		iVar0 = iParam1;
	}
	Global_20710.f_1630[iParam0] = iVar0;
	__LIB_6__::func_78(iParam0, 8);
}

Vector3 func_873(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	MemCopy(&uVar0, {__LIB_12__::func_702(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_349))
	{
		uParam0->f_349 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), 0, 0, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_349, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_349, __LIB_0__::func_731(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_349, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_349);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

bool func_874(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	uParam0->f_781 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_776);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return true;
		}
		if (!bParam4)
		{
			uParam0->f_776 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_776 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_782 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_776);
	if (!uParam0->f_782)
	{
		if (!bParam4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	__LIB_12__::func_756(uParam0);
	uParam0->f_776.f_2 = 0;
	uParam0->f_789 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_776));
	uParam0->f_776.f_2 = 12;
	uParam0->f_791 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_776));
	uParam0->f_782 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	if (bParam3)
	{
		return false;
	}
	return true;
}

void func_875(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	__LIB_0__::func_928(&(uParam0->f_643), iParam1, sParam2, bParam3);
}

bool func_876(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	return __LIB_1__::func_104(&(uParam0->f_643), cVar0, 0, -1, bParam2, 0);
}

void func_877(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[iVar0 /*10*/].f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout")) && !uParam0->f_1665)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout", true);
					}
				}
				else if (__LIB_12__::func_655(uParam0, 32768) && __LIB_0__::func_129(&(uParam0->f_1418[iVar0 /*10*/]), 128))
				{
					__LIB_4__::func_712(uParam0->f_1418[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_878(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	if (__LIB_12__::func_655(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1584 < 0 || uParam0->f_1584 >= 8)
	{
		return false;
	}
	if (!uParam0->f_912[uParam0->f_1584 /*41*/].f_29)
	{
		return false;
	}
	if (!__LIB_12__::func_655(uParam0, 4096) && uParam0->f_1792)
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (uParam0->f_912[uParam0->f_1584 /*41*/].f_29)
	{
		if (uParam0->f_912[uParam0->f_1584 /*41*/] == 0)
		{
			vVar3 = { uParam0->f_912[uParam0->f_1584 /*41*/].f_4 - uParam0->f_912[uParam0->f_1584 /*41*/].f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (__LIB_4__::func_788(&vVar0, uParam0->f_1661, Global_36, vVar6, uParam0->f_912[uParam0->f_1584 /*41*/].f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_912[uParam0->f_1584 /*41*/].f_1)
				{
					if (vVar0.x > uParam0->f_912[uParam0->f_1584 /*41*/].f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_912[uParam0->f_1584 /*41*/].f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_1)
					{
						if (vVar0.y > uParam0->f_912[uParam0->f_1584 /*41*/].f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_912[uParam0->f_1584 /*41*/].f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_2 + uParam0->f_912[uParam0->f_1584 /*41*/].f_10)) || (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 2) && (uParam0->f_1793 || uParam0->f_1795)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1584;
					return true;
				}
			}
		}
		else if (__LIB_12__::func_655(uParam0, 8))
		{
			*iParam1 = uParam0->f_1580;
			return true;
		}
	}
	return false;
}

void func_879(var uParam0)
{
	int iVar0;
	if (!uParam0->f_1793)
	{
		if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 8192) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 65536) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
		{
			if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
			{
				__LIB_4__::func_774(uParam0->f_912[uParam0->f_1580 /*41*/].f_7);
			}
		}
	}
	if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16) && (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 65536))
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
		__LIB_12__::func_774(uParam0, 1);
	}
	else if ((!__LIB_12__::func_692(uParam0, uParam0->f_1580) && !__LIB_12__::func_695(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		__LIB_12__::func_774(uParam0, 3);
	}
	else
	{
		__LIB_12__::func_774(uParam0, 6);
	}
}

void func_880(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_12__::func_655(uParam0, 64) && __LIB_0__::func_81(uParam0) != 0)
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
				__LIB_12__::func_693(uParam0, 256);
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
				__LIB_12__::func_693(uParam0, 256);
			}
		}
	}
	else
	{
		__LIB_4__::func_791(0);
		__LIB_4__::func_791(1);
	}
}

void func_881(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56, false);
	}
	__LIB_12__::func_710(uParam0, 4);
	HUD::_HIDE_HUD_COMPONENT(-1679307491);
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if ((__LIB_0__::func_81(uParam0) == 0 && uParam0->f_1580 >= 0) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		__LIB_12__::func_709(uParam0, 64);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	__LIB_3__::func_739(0);
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(0);
	}
}

bool func_882(var uParam0)
{
	if (__LIB_12__::func_639(uParam0, 64))
	{
		return false;
	}
	if ((__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 65536) && !__LIB_0__::func_1(uParam0->f_172, 1024)) && !__LIB_9__::func_138(uParam0->f_174))
	{
		return true;
	}
	return false;
}

void func_883(var uParam0, char* sParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;
	__LIB_12__::func_772(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (bParam2 || !__LIB_5__::func_352(sParam1))
	{
		__LIB_1__::func_422(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

bool func_884(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		__LIB_12__::func_739(uParam0);
		return true;
	}
	switch (uParam0->f_171)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				__LIB_12__::func_773(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return true;
			}
			break;
		case 1:
			__LIB_12__::func_773(0, 1, 1, 1);
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				__LIB_12__::func_739(uParam0);
				return true;
			}
			break;
	}
	return false;
}

int func_885(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 64) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, iParam6, fParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (__LIB_12__::func_703(iParam1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
			ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 179, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 270583);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_0__::func_7(&(uParam0->f_172), 64);
		}
	}
	return iVar0;
}

void func_886(vector3 vParam0, float fParam3, bool bParam4)
{
	if (__LIB_10__::func_921(vParam0, fParam3))
	{
		__LIB_5__::func_113(1, bParam4);
	}
}

bool func_887(var uParam0)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(Global_1347702[uParam0->f_174 /*49*/].f_24, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		if (!__LIB_0__::func_163(Global_35, -982327190))
		{
			TASK::TASK_STAND_STILL(Global_35, 2200);
			__LIB_1__::func_283(&(uParam0->f_2588), 1);
		}
		if (TASK::IS_PED_STILL(Global_35) || __LIB_0__::func_264(&(uParam0->f_2588)) > 2f)
		{
			__LIB_0__::func_37(&(uParam0->f_2588));
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2588)))
		{
			__LIB_1__::func_283(&(uParam0->f_2588), 1);
		}
		else if (__LIB_0__::func_264(&(uParam0->f_2588)) > 5f)
		{
			__LIB_0__::func_37(&(uParam0->f_2588));
			if (__LIB_0__::func_163(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 1f, 7500, 0.25f, 0, 40000f);
		}
		if (__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

void func_888(var uParam0)
{
	__LIB_12__::func_708(uParam0);
	__LIB_0__::func_19(uParam0, 0);
	uParam0->f_1 = 0;
	__LIB_4__::func_782();
}

void func_889(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_12__::func_655(uParam0, 512))
	{
		return;
	}
	if (__LIB_0__::func_264(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

void func_890(var uParam0, var uParam1, var uParam2, float fParam3)
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
	if (uParam0->f_1793)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1794, 214, true);
	}
	if (uParam0->f_1792 && __LIB_12__::func_655(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (__LIB_0__::func_1(uParam1, 262144) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	__LIB_4__::func_706(&iVar1, uParam2);
	__LIB_4__::func_794(&(uParam0->f_1800), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!__LIB_12__::func_655(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	__LIB_4__::func_614();
	__LIB_12__::func_710(uParam0, 1);
}

void func_891(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
	iVar0 = __LIB_12__::func_716(uParam0, iParam1);
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
		iVar1 = __LIB_12__::func_717(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			__LIB_12__::func_718(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_12__::func_719(uParam0);
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

bool func_892(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
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
	if (!__LIB_12__::func_752(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, sParam2))
		{
			__LIB_12__::func_757(uParam0, iParam1, 4);
			return true;
		}
		else if (iParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, sParam2))
		{
			__LIB_12__::func_757(uParam0, iParam1, 4);
			return true;
		}
	}
	return false;
}

void func_893(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == __LIB_0__::func_659()) || bParam5)
		{
			__LIB_0__::func_693();
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && __LIB_1__::func_99(Global_1946804.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = __LIB_0__::func_223(Global_40.f_7729);
				Global_1946804.f_1378 = __LIB_0__::func_223(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = __LIB_3__::func_134(iVar0);
	}
	if (iParam3 && iVar1)
	{
		__LIB_1__::func_42(iParam0, 0, 6);
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 1);
	}
	__LIB_0__::func_245(0);
}

void func_894(var uParam0)
{
	__LIB_12__::func_777(uParam0);
}

void func_895(var uParam0)
{
	if (__LIB_12__::func_674(uParam0->f_174))
	{
		__LIB_2__::func_268(262144, 5, 0, 1);
		__LIB_1__::func_980(720f, 1, 0);
	}
}

bool func_896(var uParam0)
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
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[iVar0 /*10*/].f_8))
		{
			if (!__LIB_0__::func_129(&(uParam0->f_1418[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1418[iVar0 /*10*/].f_8, false))
				{
					__LIB_5__::func_124(uParam0, uParam0->f_1418[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
					bVar1 = false;
					__LIB_4__::func_647(&(uParam0->f_1418[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1418[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_912[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_912[iVar0 /*41*/].f_19));
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_912[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (__LIB_12__::func_687(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_2)) && uParam0->f_1241[iVar0 /*22*/].f_21) && !CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1241[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_86(uParam0->f_1781) || uParam0->f_1784 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1418[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1784, uParam0->f_1781) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1784);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1418[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_897(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	if (!__LIB_12__::func_783(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_912[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_912[iParam1 /*41*/].f_12) * uParam0->f_912[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_912[iParam1 /*41*/].f_12) * uParam0->f_912[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_912[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_912[iParam1 /*41*/].f_13) * uParam0->f_912[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_912[iParam1 /*41*/].f_13) * uParam0->f_912[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_912[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_912[iParam1 /*41*/].f_12) * uParam0->f_912[iParam1 /*41*/].f_11) + uParam0->f_912[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_912[iParam1 /*41*/].f_12) * uParam0->f_912[iParam1 /*41*/].f_11) + uParam0->f_912[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_912[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_912[iParam1 /*41*/].f_13) * uParam0->f_912[iParam1 /*41*/].f_11) + uParam0->f_912[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_912[iParam1 /*41*/].f_13) * uParam0->f_912[iParam1 /*41*/].f_11) + uParam0->f_912[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1793 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1771)) && __LIB_0__::func_266(uParam0->f_1794, uParam0->f_912[iParam1 /*41*/].f_1, uParam0->f_912[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_1771) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1771) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1794), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1794), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1794), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1794), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_912[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_912[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_912[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_912[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_912[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_912[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_912[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_912[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
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
	*fParam8 = __LIB_0__::func_152(uParam0->f_912[iParam1 /*41*/].f_1, vVar0, 0);
	if (*fParam8 < uParam0->f_912[iParam1 /*41*/].f_12)
	{
		*fParam8 = (*fParam8 + 360f);
	}
	if (uParam0->f_912[iParam1 /*41*/].f_13 < uParam0->f_912[iParam1 /*41*/].f_12)
	{
		*fParam9 = (uParam0->f_912[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*fParam9 = uParam0->f_912[iParam1 /*41*/].f_13;
	}
	if (*fParam8 < *fParam9)
	{
		vVar42 = { uParam0->f_912[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1772 = { vVar42 + Vector(0f, (BUILTIN::COS(*fParam8) * uParam0->f_912[iParam1 /*41*/].f_11), (BUILTIN::SIN(*fParam8) * uParam0->f_912[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_1775 = { vVar42 + Vector(0f, ((BUILTIN::COS(*fParam8) * uParam0->f_912[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*fParam8) * uParam0->f_912[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

void func_898(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
	{
		return;
	}
	else if (__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
		{
			if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN")))
			{
				__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN"));
			}
			__LIB_1__::func_766(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			if (iVar1 < iVar0)
			{
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_899(int iParam0)
{
	__LIB_12__::func_628();
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

void func_900(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_11__::func_869(iParam0);
}

void func_901(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_409 = { vParam1 };
	uParam0->f_412 = iParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_12__::func_677(uParam0, 2048, 1);
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

int func_902(var uParam0, var uParam1)
{
	if (uParam1->f_1580 < 0 || uParam1->f_1580 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_912[uParam1->f_1580 /*41*/].f_30)))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &(uParam1->f_912[uParam1->f_1580 /*41*/].f_30)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &(uParam1->f_912[uParam1->f_1580 /*41*/].f_30)))
			{
				__LIB_12__::func_839(uParam0, &(uParam1->f_912[uParam1->f_1580 /*41*/].f_30));
				__LIB_0__::func_88(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

void func_903(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_366[iVar0 /*9*/])))
		{
			__LIB_12__::func_827(uParam0, &(uParam0->f_366[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { __LIB_0__::func_137() };
	__LIB_12__::func_827(uParam0, &Var1);
	Var1 = { __LIB_12__::func_845(uParam0) };
	__LIB_12__::func_827(uParam0, &Var1);
}

bool func_904(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_12__::func_665(uParam0) };
	Var8 = { __LIB_12__::func_845(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

void func_905(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 32))
	{
		if (__LIB_12__::func_655(uParam0, 8))
		{
			*uParam2 = { uParam0->f_912[uParam0->f_1580 /*41*/].f_1 + __LIB_0__::func_173(Global_36 - uParam0->f_912[uParam0->f_1580 /*41*/].f_1) };
			if (!__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_912[uParam0->f_1580 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_912[uParam0->f_1580 /*41*/].f_40;
			}
		}
		else
		{
			*uParam2 = { uParam0->f_912[uParam0->f_1584 /*41*/].f_1 + __LIB_0__::func_173(Global_36 - uParam0->f_912[uParam0->f_1584 /*41*/].f_1) };
			if (!__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_40;
			}
		}
	}
	else
	{
		*uParam2 = { __LIB_12__::func_835(uParam0) };
		if (__LIB_12__::func_655(uParam0, 8))
		{
			if (!__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_912[uParam0->f_1580 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_912[uParam0->f_1580 /*41*/].f_40;
			}
		}
		else if (!__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 2))
		{
			*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1);
		}
		else
		{
			*fParam3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_40;
		}
	}
}

void func_906(var uParam0)
{
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		if (Global_1310720.f_6)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_1879534 && __LIB_12__::func_738(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		__LIB_12__::func_837(uParam0, 1);
	}
}

void func_907(var uParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_12__::func_671(uParam0->f_174) };
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&Var0))
	{
		HUD::_TEXT_DATABASE_DELETE(&Var0);
	}
	Var0 = { __LIB_12__::func_842(uParam0->f_174) };
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&Var0))
	{
		HUD::_TEXT_DATABASE_DELETE(&Var0);
	}
}

void func_908(var uParam0, char* sParam1)
{
	struct<2> Var0;
	Var0 = { __LIB_12__::func_671(uParam0->f_174) };
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&Var0))
	{
		HUD::_TEXT_DATABASE_REQUEST(&Var0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			StringCopy(&(uParam0->f_2573), sParam1, 16);
		}
		else
		{
			uParam0->f_2573 = { __LIB_12__::func_842(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_2573)))
	{
		HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_2573));
	}
}

void func_909(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_12__::func_845(uParam0) };
	__LIB_12__::func_676(uParam0, &Var0);
}

bool func_910(var uParam0, char* sParam1, int iParam2)
{
	if (__LIB_0__::func_755(sParam1, 2))
	{
		return false;
	}
	if (__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return false;
	}
	if ((__LIB_4__::func_623(sParam1) == 9 || __LIB_4__::func_623(sParam1) == 12) || __LIB_4__::func_623(sParam1) == 13)
	{
		if (!__LIB_0__::func_755(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				__LIB_0__::func_324(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return true;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return __LIB_12__::func_847(uParam0, __LIB_4__::func_623(sParam1));
	}
	return false;
}

bool func_911(var uParam0, char* sParam1, int iParam2)
{
	if (!__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	if (__LIB_0__::func_755(sParam1, 2))
	{
		return false;
	}
	if (iParam2 > sParam1->f_13)
	{
		return true;
	}
	if ((__LIB_4__::func_624(sParam1) == 9 || __LIB_4__::func_624(sParam1) == 12) || __LIB_4__::func_624(sParam1) == 13)
	{
		if (!__LIB_0__::func_755(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				__LIB_0__::func_324(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return true;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return __LIB_12__::func_847(uParam0, __LIB_4__::func_624(sParam1));
	}
	return false;
}

void func_912(var uParam0, var uParam1)
{
	struct<8> Var0;
	if (__LIB_12__::func_655(uParam1, 32768))
	{
		Var0 = { __LIB_12__::func_845(uParam0) };
		__LIB_12__::func_839(uParam0, &Var0);
		if (__LIB_12__::func_655(uParam1, 131072))
		{
			__LIB_0__::func_88(uParam0, 268435456);
			if (__LIB_0__::func_86(uParam0->f_409))
			{
				uParam0->f_409 = { __LIB_12__::func_751(uParam1, uParam1->f_1580) };
			}
			if (__LIB_0__::func_86(uParam0->f_406))
			{
				uParam0->f_406 = { __LIB_12__::func_751(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), false);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (__LIB_12__::func_655(uParam1, 268435456))
		{
			__LIB_0__::func_7(&(uParam0->f_404), 16384);
		}
	}
	else if (__LIB_12__::func_655(uParam1, 524288))
	{
		__LIB_0__::func_88(uParam0, 67108864);
		__LIB_12__::func_686(uParam1, 524288);
	}
	if (__LIB_12__::func_687(uParam1, 128))
	{
		__LIB_0__::func_88(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && __LIB_0__::func_274(&(uParam1->f_912[uParam1->f_1580 /*41*/]), 256))
		{
			__LIB_0__::func_7(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_913(var uParam0)
{
	if ((!__LIB_0__::func_84(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_348, false))
	{
		__LIB_12__::func_755(uParam0);
		__LIB_12__::func_852(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_348, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_348);
		}
		__LIB_0__::func_88(uParam0, 32768);
	}
}

void func_914(var uParam0)
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
	iVar0 = uParam0->f_1584;
	if (iVar0 >= 0 && !__LIB_12__::func_695(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[iVar0 /*41*/].f_1, true) <= uParam0->f_912[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1588 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1588), __LIB_1__::func_569(uParam0->f_1241[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1588.f_8), __LIB_1__::func_569(uParam0->f_1241[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1588)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1588.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1241[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1241[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_1800), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_912[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1241[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 27)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1241[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1241[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798) || iVar26 != uParam0->f_1798))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
											__LIB_12__::func_709(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1241[iVar0 /*22*/].f_18 != 0f || uParam0->f_1241[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1241[iVar0 /*22*/].f_18, 0f, uParam0->f_1241[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1241[iVar0 /*22*/].f_18 != 0f || uParam0->f_1241[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_912[iVar0 /*41*/].f_1, 1), uParam0->f_1241[iVar0 /*22*/].f_18, 0f, uParam0->f_1241[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_912[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_912[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1588));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_12__::func_709(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1604.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1604.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1604.f_22 != bVar30);
								uParam0->f_1604.f_16 = iVar23;
								uParam0->f_1604.f_17 = { vVar20 };
								uParam0->f_1604.f_20 = fVar27;
								uParam0->f_1604.f_21 = fVar28;
								uParam0->f_1604.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1604 = { uParam0->f_1588 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1604));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1627.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1627.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1627.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1627.f_21 != bVar30);
								uParam0->f_1627.f_16 = iVar23;
								uParam0->f_1627.f_17 = { vVar20 };
								uParam0->f_1627.f_20 = !bVar31;
								uParam0->f_1627.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1627 = { uParam0->f_1588 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1627));
								}
							}
							Jump @1464; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
							}
							StringCopy(&(uParam0->f_1588), "", 64);
							StringCopy(&(uParam0->f_1588.f_8), "", 64);
							__LIB_12__::func_711(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

void func_915(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1771))
	{
		if (!bParam1)
		{
			__LIB_12__::func_828(uParam0);
		}
		else if (bParam2)
		{
			__LIB_12__::func_829(uParam0);
		}
		else
		{
			__LIB_12__::func_861(uParam0, uParam0->f_1794);
		}
	}
	else
	{
		if (!__LIB_12__::func_655(uParam0, 1048576) && bParam1)
		{
			__LIB_12__::func_861(uParam0, uParam0->f_1794);
		}
		else if (!__LIB_12__::func_655(uParam0, 2097152) && bParam2)
		{
			__LIB_12__::func_829(uParam0);
		}
		else if ((__LIB_12__::func_655(uParam0, 1048576) && !bParam1) || (__LIB_12__::func_655(uParam0, 2097152) && !bParam2))
		{
			__LIB_12__::func_828(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1778 * FtoV(__LIB_4__::func_634(uParam0->f_1794)) };
			if (!__LIB_0__::func_175(vVar0, VOLUME::_GET_VOLUME_SCALE(uParam0->f_1771), 1056964608 /* Float: 0.5f */, 1) && !__LIB_0__::func_86(vVar0))
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_1771, vVar0);
			}
		}
	}
}

void func_916(var uParam0)
{
	int iVar0;
	__LIB_12__::func_775(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_912[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[iVar0 /*41*/].f_22)) && __LIB_12__::func_725(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_912[iVar0 /*41*/]), 1))
			{
				if (!__LIB_12__::func_726(uParam0, &(uParam0->f_912[iVar0 /*41*/].f_22)))
				{
					__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_912[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

bool func_917(var uParam0, char* sParam1, int iParam2)
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
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1785);
	if (!bVar0)
	{
		uParam0->f_1785 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_1785);
	if (!bVar1)
	{
		return false;
	}
	__LIB_12__::func_761(uParam0);
	__LIB_0__::func_19(uParam0, iParam2);
	if (__LIB_12__::func_655(uParam0, 16384))
	{
		__LIB_12__::func_708(uParam0);
	}
	Var2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		__LIB_12__::func_729(uParam0, iVar18);
		if (__LIB_12__::func_730(uParam0, 0))
		{
			if (__LIB_12__::func_731(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_912[iVar16 /*41*/].f_27 = 0;
					__LIB_12__::func_732(uParam0, 1, &(uParam0->f_912[iVar16 /*41*/].f_1));
					__LIB_12__::func_732(uParam0, 2, &(uParam0->f_912[iVar16 /*41*/].f_1.f_1));
					__LIB_12__::func_732(uParam0, 3, &(uParam0->f_912[iVar16 /*41*/].f_1.f_2));
					__LIB_12__::func_732(uParam0, 4, &(uParam0->f_912[iVar16 /*41*/].f_11));
					__LIB_12__::func_732(uParam0, 5, &(uParam0->f_912[iVar16 /*41*/].f_12));
					__LIB_12__::func_732(uParam0, 6, &(uParam0->f_912[iVar16 /*41*/].f_13));
					__LIB_12__::func_732(uParam0, 7, &(uParam0->f_912[iVar16 /*41*/].f_4));
					__LIB_12__::func_732(uParam0, 8, &(uParam0->f_912[iVar16 /*41*/].f_4.f_1));
					__LIB_12__::func_732(uParam0, 9, &(uParam0->f_912[iVar16 /*41*/].f_4.f_2));
					__LIB_12__::func_732(uParam0, 10, &(uParam0->f_912[iVar16 /*41*/].f_7));
					__LIB_12__::func_732(uParam0, 11, &(uParam0->f_912[iVar16 /*41*/].f_7.f_1));
					__LIB_12__::func_732(uParam0, 12, &(uParam0->f_912[iVar16 /*41*/].f_7.f_2));
					__LIB_12__::func_732(uParam0, 13, &(uParam0->f_912[iVar16 /*41*/].f_10));
					__LIB_12__::func_732(uParam0, 14, &(uParam0->f_912[iVar16 /*41*/].f_14));
					__LIB_12__::func_732(uParam0, 15, &(uParam0->f_912[iVar16 /*41*/].f_15));
					if (__LIB_12__::func_731(uParam0, 16, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/] = iVar17;
					}
					__LIB_12__::func_732(uParam0, 19, &(uParam0->f_912[iVar16 /*41*/].f_16));
					__LIB_12__::func_732(uParam0, 20, &(uParam0->f_912[iVar16 /*41*/].f_17));
					__LIB_12__::func_732(uParam0, 31, &(uParam0->f_912[iVar16 /*41*/].f_18));
					if (__LIB_12__::func_733(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_912[iVar16 /*41*/].f_19), {Var20}, 3);
					}
					if (__LIB_12__::func_733(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_912[iVar16 /*41*/].f_22), {Var20}, 3);
					}
					__LIB_12__::func_731(uParam0, 23, &(uParam0->f_912[iVar16 /*41*/].f_25));
					__LIB_12__::func_862(uParam0, &(uParam0->f_912[iVar16 /*41*/].f_27));
					if (__LIB_12__::func_733(uParam0, 35, &(uParam0->f_912[iVar16 /*41*/].f_30)))
					{
					}
					if (__LIB_12__::func_731(uParam0, 39, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_912[iVar16 /*41*/].f_39 = 1;
					}
					if (__LIB_12__::func_732(uParam0, 40, &(uParam0->f_912[iVar16 /*41*/].f_40)))
					{
						__LIB_4__::func_639(&(uParam0->f_912[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[iVar16 /*41*/].f_30)))
					{
						uParam0->f_912[iVar16 /*41*/].f_30 = { __LIB_0__::func_137() };
					}
					uParam0->f_912[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_1791 == -1 || uParam0->f_912[uParam0->f_1791 /*41*/].f_17 < uParam0->f_912[iVar16 /*41*/].f_17)
					{
						uParam0->f_1791 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_912[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_912[iVar18 /*41*/].f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1796 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_912[iVar18 /*41*/].f_29)
		{
			if (!__LIB_1__::func_410(vVar29, uParam0->f_912[iVar18 /*41*/].f_1, 5f, 1))
			{
				uParam0->f_1796 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 45))
				{
					if (__LIB_12__::func_731(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 2);
							__LIB_12__::func_733(uParam0, 46, &(uParam0->f_1418[iVar16 /*10*/]));
							if (__LIB_12__::func_734(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 1);
								}
							}
							if (__LIB_12__::func_731(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 27)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 50))
				{
					if (__LIB_12__::func_731(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					__LIB_12__::func_731(uParam0, 43, &(Var2.f_3));
					if (__LIB_12__::func_733(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					__LIB_12__::func_732(uParam0, 53, &(Var2.f_8));
					if (__LIB_12__::func_731(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					__LIB_12__::func_734(uParam0, 55, &(Var2.f_11));
					__LIB_12__::func_734(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (__LIB_12__::func_762(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 27)
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
								__LIB_12__::func_693(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			__LIB_12__::func_729(uParam0, iVar18);
			if (__LIB_12__::func_730(uParam0, 82))
			{
				if (__LIB_12__::func_733(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_355), {Var20}, 4);
				}
				__LIB_12__::func_733(uParam0, 84, &(uParam0->f_355.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355.f_4)))
				{
					if (uParam0->f_355.f_15 == 1)
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_134() };
					}
					else if (uParam0->f_355.f_15 == 2)
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_137() };
					}
					else
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_137() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 57))
				{
					if (__LIB_12__::func_731(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_371[iVar16 /*18*/].f_8 = 0;
							__LIB_12__::func_731(uParam0, 58, &(uParam0->f_371[iVar16 /*18*/]));
							if (__LIB_12__::func_731(uParam0, 59, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_1 = __LIB_4__::func_650(iVar17);
							}
							if (__LIB_12__::func_731(uParam0, 60, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_2 = __LIB_4__::func_651(iVar17);
							}
							__LIB_12__::func_731(uParam0, 61, &(uParam0->f_371[iVar16 /*18*/].f_3));
							__LIB_12__::func_732(uParam0, 67, &(uParam0->f_371[iVar16 /*18*/].f_10));
							__LIB_12__::func_732(uParam0, 70, &(uParam0->f_371[iVar16 /*18*/].f_11));
							__LIB_12__::func_732(uParam0, 68, &(uParam0->f_371[iVar16 /*18*/].f_9));
							__LIB_12__::func_731(uParam0, 72, &(uParam0->f_371[iVar16 /*18*/].f_5));
							__LIB_12__::func_732(uParam0, 77, &(uParam0->f_371[iVar16 /*18*/].f_12));
							__LIB_12__::func_731(uParam0, 78, &(uParam0->f_371[iVar16 /*18*/].f_13));
							__LIB_12__::func_731(uParam0, 79, &(uParam0->f_371[iVar16 /*18*/].f_14));
							if (__LIB_12__::func_731(uParam0, 73, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_17 = iVar17;
							}
							if (__LIB_12__::func_731(uParam0, 75, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							__LIB_12__::func_732(uParam0, 80, &(uParam0->f_371[iVar16 /*18*/].f_15));
							if (__LIB_12__::func_734(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (__LIB_12__::func_734(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 512;
								}
							}
							if (__LIB_12__::func_734(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (__LIB_12__::func_734(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (__LIB_12__::func_734(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (__LIB_12__::func_734(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (__LIB_12__::func_734(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (__LIB_12__::func_734(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (__LIB_12__::func_734(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_371[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_371[iVar16 /*18*/].f_4 = uParam0->f_371[iVar16 /*18*/].f_3;
								uParam0->f_371[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_371[iVar16 /*18*/].f_16 = uParam0->f_371[iVar16 /*18*/].f_2;
							uParam0->f_371[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1790 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 85))
				{
					__LIB_12__::func_731(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						__LIB_12__::func_734(uParam0, 87, &(uParam0->f_1241[iVar18 /*22*/]));
						__LIB_12__::func_733(uParam0, 96, &(uParam0->f_1241[iVar18 /*22*/].f_2));
						__LIB_12__::func_733(uParam0, 97, &(uParam0->f_1241[iVar18 /*22*/].f_10));
						__LIB_12__::func_732(uParam0, 93, &(uParam0->f_1241[iVar18 /*22*/].f_18));
						__LIB_12__::func_732(uParam0, 94, &(uParam0->f_1241[iVar18 /*22*/].f_19));
						__LIB_12__::func_731(uParam0, 95, &(uParam0->f_1241[iVar18 /*22*/].f_20));
						uParam0->f_1241[iVar18 /*22*/].f_1 = 0;
						__LIB_12__::func_830(uParam0, &(uParam0->f_1241[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 98))
				{
					if (__LIB_12__::func_731(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1529[iVar16 /*15*/].f_10 = 0;
							__LIB_12__::func_735(uParam0, 99, &(uParam0->f_1529[iVar16 /*15*/]));
							__LIB_12__::func_735(uParam0, 100, &(uParam0->f_1529[iVar16 /*15*/].f_6));
							__LIB_12__::func_735(uParam0, 101, &(uParam0->f_1529[iVar16 /*15*/].f_3));
							if (__LIB_12__::func_731(uParam0, 102, &iVar17))
							{
								uParam0->f_1529[iVar16 /*15*/].f_9 = iVar17;
							}
							__LIB_12__::func_862(uParam0, &(uParam0->f_1529[iVar16 /*15*/].f_10));
							uParam0->f_1529[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1785);
			__LIB_12__::func_693(uParam0, 1);
			__LIB_12__::func_693(uParam0, 16384);
			__LIB_12__::func_831(uParam0);
			return true;
		}
	}
}

void func_918(var uParam0, int iParam1)
{
	if (__LIB_12__::func_661(uParam0) == iParam1)
	{
		return;
	}
	__LIB_12__::func_870(uParam0, uParam0->f_168, iParam1);
	uParam0->f_168 = iParam1;
	__LIB_0__::func_8(&(uParam0->f_172), 8192);
}

bool func_919(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (__LIB_0__::func_131(&(uParam0->f_41[iVar1 /*3*/])))
		{
			if (__LIB_0__::func_1(uParam0->f_41[iVar1 /*3*/].f_2, iParam1))
			{
				if (!__LIB_4__::func_693(&(uParam0->f_41[iVar1 /*3*/])))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (__LIB_0__::func_132(&(uParam0->f_117[iVar1 /*5*/])))
		{
			if (__LIB_0__::func_1(uParam0->f_117[iVar1 /*5*/].f_4, iParam1))
			{
				if (!__LIB_4__::func_694(&(uParam0->f_117[iVar1 /*5*/])))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (__LIB_0__::func_132(uParam0[iVar1 /*3*/]))
		{
			if (__LIB_0__::func_1((uParam0[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!__LIB_4__::func_695(uParam0[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (__LIB_0__::func_132(&(uParam0->f_28[iVar1 /*3*/])))
		{
			if (__LIB_0__::func_1(uParam0->f_28[iVar1 /*3*/].f_2, iParam1))
			{
				if (!__LIB_12__::func_844(&(uParam0->f_28[iVar1 /*3*/])))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!__LIB_12__::func_797(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!__LIB_12__::func_673(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!__LIB_12__::func_748(uParam0, iParam1))
	{
		iVar0 = 0;
	}
	if (uParam0->f_177 == 2 && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (iParam1 == 2)
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 32))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_920(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	if (!bParam4 && !uParam0->f_782)
	{
		if (!__LIB_12__::func_874(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_783)
	{
		iVar20 = uParam0->f_790;
		while (iVar20 <= (uParam0->f_789 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			if (__LIB_12__::func_681(uParam0, 0))
			{
				if (__LIB_12__::func_848(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (__LIB_12__::func_682(uParam0, 1, &iVar0))
					{
					}
					if (__LIB_12__::func_683(uParam0, 3, &cVar2))
					{
					}
					if (__LIB_12__::func_682(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (__LIB_12__::func_682(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (__LIB_12__::func_682(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (__LIB_12__::func_682(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (__LIB_12__::func_682(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!__LIB_1__::func_321(uParam0, &cVar2, uParam0->f_785))
							{
								*(uParam0[uParam0->f_785 /*16*/]) = { cVar2 };
								__LIB_0__::func_324(uParam0[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							uParam0->f_241[uParam0->f_786 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_241[uParam0->f_786 /*16*/]), 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							uParam0->f_482[uParam0->f_787 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_482[uParam0->f_787 /*16*/]), 1048576);
							if (!bVar19 && __LIB_0__::func_755(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_482[uParam0->f_787 /*16*/]));
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!__LIB_1__::func_321(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							uParam0->f_739[uParam0->f_788 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_739[uParam0->f_788 /*16*/]), 1048576);
							uParam0->f_788++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_790 = iVar20 + 1;
				uParam0->f_781 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_783 = 1;
	}
	if (!__LIB_12__::func_648(uParam0) && uParam0->f_791 > 0)
	{
		iVar20 = uParam0->f_792;
		while (iVar20 <= (uParam0->f_791 - 1))
		{
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			iVar22 = 0;
			if (__LIB_12__::func_681(uParam0, 12))
			{
				if (__LIB_12__::func_682(uParam0, 13, &iVar0))
				{
				}
				if (__LIB_12__::func_682(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_772[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_792 = iVar20 + 1;
				uParam0->f_781 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_781 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	uParam0->f_783 = 0;
	uParam0->f_784 = 1;
	if (!bParam4)
	{
		__LIB_12__::func_684(uParam0);
	}
	return true;
}

bool func_921(var uParam0)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(uParam0->f_206.f_5, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		__LIB_0__::func_37(&(uParam0->f_2588));
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2588)))
		{
			__LIB_1__::func_283(&(uParam0->f_2588), 1);
		}
		else if (__LIB_0__::func_264(&(uParam0->f_2588)) > 5f)
		{
			__LIB_0__::func_37(&(uParam0->f_2588));
			if (__LIB_0__::func_163(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, uParam0->f_206.f_5, 1f, 7500, 0.25f, 0, 40000f);
		}
		if (__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

int func_922(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (__LIB_12__::func_878(uParam0, &iVar0))
	{
		__LIB_12__::func_712(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_923(var uParam0)
{
	uParam0->f_1581 = -1;
	__LIB_12__::func_691(uParam0, 0);
	__LIB_0__::func_115(uParam0, 3);
	__LIB_12__::func_774(uParam0, 0);
	__LIB_0__::func_37(&(uParam0->f_1765));
	__LIB_12__::func_860(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1768));
}

int func_924(var uParam0)
{
	vector3 vVar0;
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		STREAMING::REQUEST_MODEL(Global_1347702[uParam0->f_174 /*49*/].f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(Global_1347702[uParam0->f_174 /*49*/].f_28))
		{
			return 0;
		}
		vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
		__LIB_3__::func_618(vVar0, 2.5f, 1, 0, 0, 0, 0);
		PERSISTENCE::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 524288))
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = __LIB_12__::func_885(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = __LIB_12__::func_885(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43) && !PED::IS_PED_INJURED(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43, true, true);
		}
		return 1;
	}
	return 0;
}

bool func_925(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 512))
	{
		if (!__LIB_12__::func_887(uParam0))
		{
			return false;
		}
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 128);
		if (__LIB_12__::func_838(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			__LIB_0__::func_7(&(uParam0->f_172), 512);
		}
		return false;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1024);
		__LIB_0__::func_8(&(uParam0->f_172), 256);
		return true;
	}
	return false;
}

void func_926(var uParam0)
{
	__LIB_12__::func_888(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	__LIB_0__::func_8(&(uParam0->f_172), 262144);
	__LIB_0__::func_8(&(uParam0->f_172), 524288);
	__LIB_0__::func_8(&(uParam0->f_172), 1048576);
}

void func_927(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_12__::func_752(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_348))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
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
	if (__LIB_0__::func_1(uParam0->f_405, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		__LIB_3__::func_120();
	}
}

void func_928(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar19;
	int iVar20;
	vector3 vVar21;
	if (uParam0->f_371[iParam2 /*18*/].f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_371[iParam2 /*18*/].f_4;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[iVar0 /*10*/].f_8))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1418[iVar0 /*10*/].f_8, true, false))
		{
			__LIB_5__::func_124(uParam0, uParam0->f_1418[iVar0 /*10*/].f_8);
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1418[iVar0 /*10*/].f_8, &vVar1, &vVar4, 2);
			if (__LIB_0__::func_129(&(uParam0->f_1418[iVar0 /*10*/]), 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1418[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (__LIB_0__::func_152(vVar1, Global_36, 1) - __LIB_0__::func_152(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1418[iVar0 /*10*/].f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1418[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_371[iParam2 /*18*/].f_17 != 0)
			{
				if ((__LIB_0__::func_78(uParam0) > 3 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 32768))
				{
					__LIB_12__::func_880(uParam0, 1);
				}
				if (uParam0->f_1795)
				{
					if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 128))
					{
					}
					else
					{
						__LIB_12__::func_693(uParam0, 131072);
						return;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[iVar0 /*10*/].f_8, false))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1418[iVar0 /*10*/].f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1418[iVar0 /*10*/].f_8, "b_PlayerArthur", !__LIB_0__::func_181(), false);
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
				if (uParam0->f_371[iParam2 /*18*/].f_17 == 0)
				{
					__LIB_4__::func_647(&(uParam0->f_1418[iVar0 /*10*/]), 128);
					if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout"))
					{
						__LIB_4__::func_712(uParam0->f_1418[iVar0 /*10*/].f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1418[iVar0 /*10*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1418[iVar0 /*10*/].f_8, false);
			}
			if (__LIB_0__::func_84(&(uParam0->f_371[iParam2 /*18*/]), 4))
			{
				uParam0->f_1581 = iParam2;
				if (((((__LIB_0__::func_81(uParam0) == 0 && !CAM::_0x81DCFD13CF39920E()) && uParam0->f_371[iParam2 /*18*/].f_17 == 1) && uParam0->f_371[iParam2 /*18*/] < 8) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 32768)) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 524288))
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_12__::func_709(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 27)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && uParam0->f_3[iVar20 /*13*/].f_8 > 0f) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar20 /*13*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar20 /*13*/].f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1418[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_371[iParam2 /*18*/].f_17 != 0) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 32768))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1418[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar21, false, 0, 2) && !__LIB_0__::func_86(vVar21))
				{
					__LIB_12__::func_881(uParam0, 0);
				}
			}
			uParam0->f_371[iParam2 /*18*/].f_7 = 1;
		}
	}
}

void func_929(var uParam0)
{
	if (!__LIB_12__::func_858(uParam0))
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 4194304))
	{
		__LIB_12__::func_859(uParam0);
		__LIB_12__::func_693(uParam0, 4194304);
	}
	if (__LIB_12__::func_896(uParam0))
	{
		__LIB_12__::func_759(uParam0);
		__LIB_12__::func_760(uParam0);
		__LIB_0__::func_115(uParam0, 2);
	}
}

void func_930(int iParam0)
{
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 16);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			__LIB_9__::func_240(iParam0, __LIB_1__::func_440(iParam0), 1, 0);
		}
		else
		{
			__LIB_5__::func_241(iParam0);
		}
	}
	else
	{
		__LIB_11__::func_382(iParam0, 0);
	}
}

void func_931()
{
	int iVar0;
	int iVar1;
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (__LIB_5__::func_240(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Global_1347702)
		{
			if (__LIB_0__::func_5(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iVar1 /*49*/].f_37))
				{
					__LIB_11__::func_382(iVar1, 0);
					__LIB_9__::func_240(iVar1, __LIB_1__::func_440(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

float func_932(var uParam0, int iParam1)
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
	switch (uParam0->f_912[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[iParam1 /*41*/].f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[iParam1 /*41*/].f_4, true);
			vVar0 = { uParam0->f_912[iParam1 /*41*/].f_4 - uParam0->f_912[iParam1 /*41*/].f_1 };
			if (__LIB_4__::func_788(&vVar3, uParam0->f_912[iParam1 /*41*/].f_1, uParam0->f_912[iParam1 /*41*/].f_4, vVar0, Global_36))
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
			if (Global_36.f_2 >= uParam0->f_912[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_912[iParam1 /*41*/].f_1.f_2 + uParam0->f_912[iParam1 /*41*/].f_10))
			{
				__LIB_12__::func_897(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[iParam1 /*41*/].f_1, true) - uParam0->f_912[iParam1 /*41*/].f_11);
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

void func_933(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1529[iVar2 /*15*/].f_11 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1529[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1794) && !uParam0->f_1529[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1794, uParam0->f_1529[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1794, 1);
				uParam0->f_1529[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1583 != 0 || __LIB_12__::func_655(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_1583 = 0;
					__LIB_12__::func_686(uParam0, 33554432);
				}
				bVar3 = __LIB_0__::func_1(uParam0->f_1529[iVar2 /*15*/].f_10, 131072);
				if (__LIB_0__::func_393(Global_35, uParam0->f_1529[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_1529[iVar2 /*15*/].f_10, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						__LIB_4__::func_636();
					}
					__LIB_12__::func_785(uParam0, iVar2, iVar0, bVar3);
				}
				else if (__LIB_4__::func_637(&(uParam0->f_1529[iVar2 /*15*/])) != 0)
				{
					__LIB_12__::func_785(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_1529[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_1584 >= 0)
				{
					if (((__LIB_0__::func_94(Global_35, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1) > uParam0->f_912[uParam0->f_1584 /*41*/].f_17 && __LIB_0__::func_393(uParam0->f_1794, uParam0->f_1529[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_1583 != 0) || __LIB_12__::func_655(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (__LIB_3__::func_869(Global_35, &(uParam0->f_1583), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_1583 = 0;
							__LIB_12__::func_686(uParam0, 33554432);
						}
						else
						{
							__LIB_12__::func_693(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

void func_934(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_852(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, iParam1, 1, 0);
		}
	}
}

void func_935(int iParam0, int iParam1, int iParam2)
{
	__LIB_12__::func_787(iParam0, iParam2);
	if (__LIB_5__::func_353(iParam0))
	{
		__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		if (__LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15))
		{
			__LIB_1__::func_559(Global_1347702[iParam0 /*49*/].f_15, 0, 2);
		}
	}
}

bool func_936(var uParam0)
{
	if (__LIB_12__::func_639(uParam0, 64) && __LIB_12__::func_639(uParam0, 128))
	{
		return true;
	}
	return false;
}

void func_937(var uParam0, int iParam1)
{
	uParam0->f_169 = iParam1;
}

void func_938(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
}

int func_939(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, var uParam10, float fParam11)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { __LIB_2__::func_66(vParam0, vParam3, uParam10) };
	vVar4 = { __LIB_2__::func_67(vParam0, vParam3, uParam10) };
	__LIB_0__::func_568(vParam6, fParam9, fParam11);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, fParam11, 15);
	return iVar0;
}

void func_940(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 80, true);
}

bool func_941(var uParam0, var uParam1, float fParam2)
{
	if (uParam0->f_174 == 0)
	{
		*uParam1 = { -113.0969f, -14.9349f, 94.8701f };
		*fParam2 = 56.4207f;
		return true;
	}
	else if (uParam0->f_174 == 4)
	{
		*uParam1 = { 1806.195f, -1328.567f, 43.0724f };
		*fParam2 = 91.3185f;
		return true;
	}
	else if (uParam0->f_174 == 5)
	{
		*uParam1 = { 1856.699f, -1366.228f, 41.2656f };
		*fParam2 = 159.0652f;
		return true;
	}
	else if (uParam0->f_174 == 7)
	{
		*uParam1 = { 908.7505f, -1888.202f, 44.0737f };
		*fParam2 = 329.4764f;
		return true;
	}
	else if (uParam0->f_174 == 29)
	{
		*uParam1 = { 2909.472f, 1300.147f, 43.9991f };
		*fParam2 = 159.0195f;
		return true;
	}
	else if (uParam0->f_174 == 37)
	{
		*uParam1 = { 693.9227f, -1232.351f, 43.3829f };
		*fParam2 = 155.794f;
		return true;
	}
	else if (uParam0->f_174 == 63)
	{
		*uParam1 = { -113.0928f, -15.9552f, 94.8926f };
		*fParam2 = 60.1353f;
		return true;
	}
	else if (uParam0->f_174 == 66)
	{
		*uParam1 = { -113.6921f, -15.0526f, 94.8966f };
		*fParam2 = 69.5475f;
		return true;
	}
	else if (uParam0->f_174 == 67)
	{
		*uParam1 = { 706.3759f, -1229.356f, 44.233f };
		*fParam2 = 63.3502f;
		return true;
	}
	else if (uParam0->f_174 == 68)
	{
		*uParam1 = { 2283.99f, -747.7861f, 41.9686f };
		*fParam2 = 296.8778f;
		return true;
	}
	else if (uParam0->f_174 == 72)
	{
		*uParam1 = { -2386.151f, -1604.111f, 153.685f };
		*fParam2 = 57.0863f;
		return true;
	}
	else if (uParam0->f_174 == 76)
	{
		*uParam1 = { 663.2621f, -1229.741f, 43.3717f };
		*fParam2 = 159.7486f;
		return true;
	}
	else if (uParam0->f_174 == 94)
	{
		*uParam1 = { 1394.119f, 261.6678f, 88.4583f };
		*fParam2 = 7.4363f;
		return true;
	}
	else if (uParam0->f_174 == 108)
	{
		*uParam1 = { 483.0396f, 2216.721f, 246.1245f };
		*fParam2 = 75.3573f;
		return true;
	}
	else if (uParam0->f_174 == 121)
	{
		*uParam1 = { 2541.51f, 461.3247f, 63.8567f };
		*fParam2 = 238.4178f;
		return true;
	}
	else if (uParam0->f_174 == 135)
	{
		*uParam1 = { -592.4033f, 521.3978f, 96.3144f };
		*fParam2 = 359.9994f;
		return true;
	}
	else if (uParam0->f_174 == 149)
	{
		*uParam1 = { 1689.982f, 1545.109f, 145.2769f };
		*fParam2 = 36.437f;
		return true;
	}
	else if (uParam0->f_174 == 150)
	{
		*uParam1 = { 1691.655f, 1544.381f, 146.85f };
		*fParam2 = 246.4583f;
		return true;
	}
	return false;
}

void func_942(int* iParam0, int iParam1)
{
	__LIB_1__::func_561(&(iParam0->f_22));
	iParam0->f_25 = iParam1;
}

void func_943(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_409 = { vParam1 };
	uParam0->f_412 = fParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_12__::func_677(uParam0, 2048, 1);
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

void func_944(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	if (!__LIB_0__::func_116(sParam1))
	{
		return;
	}
	StringCopy(&cVar0, sParam1, 24);
	MemCopy(&(uParam0->f_2581), {cVar0}, 4);
	if (bParam2)
	{
		__LIB_0__::func_7(&(uParam0->f_172), 262144);
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
	}
}

void func_945(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_805(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	SCRIPTS::_0x50B72A754EE64A71(iVar0);
}

void func_946(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_805(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	SCRIPTS::_0x7D654266025E921B(iVar0);
}

void func_947(var uParam0, int iParam1)
{
	uParam0->f_341 = iParam1;
	__LIB_12__::func_826(uParam0, 2);
}

void func_948(var uParam0, int iParam1)
{
	uParam0->f_342 = iParam1;
	__LIB_12__::func_826(uParam0, 4);
}

void func_949(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		__LIB_12__::func_744(&(uParam0->f_41[iVar0 /*3*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_12__::func_745(&(uParam0->f_117[iVar0 /*5*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		__LIB_12__::func_746(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_12__::func_747(&(uParam0->f_28[iVar0 /*3*/]));
		iVar0++;
	}
	__LIB_12__::func_907(uParam0);
}

void func_950(var uParam0, char* sParam1)
{
	if (((!__LIB_0__::func_84(uParam0, 32) || __LIB_12__::func_904(uParam0)) || __LIB_0__::func_84(uParam0, 268435456)) && !__LIB_0__::func_84(uParam0, 65536))
	{
		__LIB_0__::func_7(&(uParam0->f_404), 256);
	}
}

int func_951(int* iParam0, var uParam1)
{
	int iVar0;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || __LIB_3__::func_63()) || __LIB_3__::func_64()) || __LIB_1__::func_499())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_2__::func_259(&(iParam0->f_46));
	}
	if (__LIB_0__::func_899(&(iParam0->f_46)) && !__LIB_3__::func_514(&(iParam0->f_46), 0.25f))
	{
		__LIB_3__::func_102(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_952(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_2__::func_259(&(iParam1->f_18));
			return 0;
		}
		else if (__LIB_0__::func_899(&(iParam1->f_18)))
		{
			__LIB_1__::func_561(&(iParam1->f_18));
			return 0;
		}
	}
	if (!__LIB_0__::func_899(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return __LIB_10__::func_924(&(iParam1->f_18), fParam2);
	return 1;
}

void func_953(int iParam0, bool bParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	__LIB_1__::func_561(&(iParam0->f_18));
	if (bParam1)
	{
		iParam0->f_21 = 0;
		iParam0->f_25 = 0f;
		iParam0->f_26 = 30f;
		iParam0->f_27 = 1.25f;
		iParam0->f_29 = 10f;
		iParam0->f_30 = 50f;
		iParam0->f_31 = 30f;
		iParam0->f_32 = 21f;
		iParam0->f_33 = 20f;
		iParam0->f_34 = 5f;
		iParam0->f_28 = 0;
		iParam0->f_60 = 0;
		iParam0->f_57 = { 0f, 0f, 0f };
		iParam0->f_55 = 0;
		__LIB_1__::func_561(&(iParam0->f_22));
		__LIB_1__::func_561(&(iParam0->f_37));
		__LIB_1__::func_561(&(iParam0->f_40));
		__LIB_1__::func_561(&(iParam0->f_43));
		__LIB_1__::func_561(&(iParam0->f_49));
		__LIB_1__::func_561(&(iParam0->f_52));
		__LIB_6__::func_737(iParam0);
		__LIB_3__::func_97(iParam0);
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			MAP::REMOVE_BLIP(&(iParam0->f_56));
		}
	}
}

void func_954(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_1(uParam0->f_172, 32))
	{
		return;
	}
	if (uParam0->f_2605.f_785 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_785)
		{
			if (__LIB_0__::func_755(&(uParam0->f_2605[iVar0 /*16*/]), 1048576))
			{
				if (__LIB_12__::func_910(uParam0, &(uParam0->f_2605[iVar0 /*16*/]), iParam1))
				{
					__LIB_4__::func_972(&(uParam0->f_2605[iVar0 /*16*/]));
				}
				else if (__LIB_12__::func_911(uParam0, &(uParam0->f_2605[iVar0 /*16*/]), iParam1))
				{
					__LIB_5__::func_29(&(uParam0->f_2605[iVar0 /*16*/]));
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_786 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_786)
		{
			if (__LIB_0__::func_755(&(uParam0->f_2605.f_241[iVar0 /*16*/]), 1048576))
			{
				if (__LIB_12__::func_840(uParam0, &(uParam0->f_2605.f_241[iVar0 /*16*/]), iParam1))
				{
					__LIB_4__::func_990(&(uParam0->f_2605.f_241[iVar0 /*16*/]));
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_787 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_787)
		{
			if (__LIB_0__::func_755(&(uParam0->f_2605.f_482[iVar0 /*16*/]), 1048576))
			{
				if (__LIB_12__::func_840(uParam0, &(uParam0->f_2605.f_482[iVar0 /*16*/]), iParam1))
				{
					if (__LIB_1__::func_388(&(uParam0->f_2605.f_482[iVar0 /*16*/]), 0))
					{
						if (__LIB_0__::func_755(&(uParam0->f_2605.f_482[iVar0 /*16*/]), 4))
						{
							__LIB_12__::func_666(&(uParam0->f_2605));
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_955()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_31(iVar0) && __LIB_1__::func_22(iVar0))
		{
			__LIB_0__::func_288(iVar0, 56, 1);
		}
		iVar0++;
	}
	__LIB_4__::func_89(&(Global_1359489.f_40), 1);
}

void func_956(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	__LIB_0__::func_224(uParam0);
	iVar0 = __LIB_0__::func_225(uParam0, iParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = __LIB_1__::func_435(iParam1);
		}
		iVar0 = __LIB_0__::func_226(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = __LIB_0__::func_227(uParam0);
		}
		else
		{
			Var1.f_10 = joaat("WEAPON_UNARMED");
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = __LIB_0__::func_227(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0 /*13*/].f_2 = iParam1;
	uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
	{
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	__LIB_12__::func_693(uParam0, 2);
}

void func_957(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_12__::func_891(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_958(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	__LIB_12__::func_713(uParam0, 4);
	if (__LIB_12__::func_917(uParam0, &uParam1, iParam5))
	{
		__LIB_0__::func_115(uParam0, 1);
	}
}

void func_959(int iParam0)
{
	if (MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (MISC::IS_BIT_SET(iParam0->f_21, 3))
		{
			__LIB_3__::func_28(iParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		__LIB_4__::func_89(&(iParam0->f_22), 0);
		if (iParam0->f_25 == 0f || __LIB_3__::func_514(&(iParam0->f_22), iParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 5);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_HIDE_HUD_COMPONENT(724769646);
			if (!MISC::IS_BIT_SET(iParam0->f_21, 4))
			{
				MISC::SET_BIT(&(iParam0->f_21), 4);
			}
		}
	}
}

bool func_960(int* iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM_IN_AIR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			__LIB_1__::func_561(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) && !__LIB_0__::func_163(Global_35, 716706914)) && !__LIB_0__::func_163(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_4__::func_89(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = __LIB_4__::func_118(&(iParam0->f_52)) >= 1.5f;
		if ((!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) || bVar0)
		{
			__LIB_1__::func_561(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

int func_961(int iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 8))
	{
		return 1;
	}
	__LIB_3__::func_65(64);
	if (MISC::IS_BIT_SET(iParam0->f_21, 14))
	{
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && __LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA"))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 14);
			MISC::CLEAR_BIT(&(iParam0->f_21), 15);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && __LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA")) && !__LIB_0__::func_163(Global_35, 716706914)) && !__LIB_0__::func_163(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_4__::func_89(&(iParam0->f_49), 0);
			MISC::SET_BIT(&(iParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		bVar0 = __LIB_4__::func_118(&(iParam0->f_49)) >= 1.5f;
		if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || bVar0)
		{
			__LIB_1__::func_26(0);
			__LIB_1__::func_561(&(iParam0->f_49));
			MISC::SET_BIT(&(iParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

int func_962(int iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 10))
	{
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	if (MISC::IS_BIT_SET(iParam0->f_21, 12))
	{
		if (Global_1357517)
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 12);
			MISC::CLEAR_BIT(&(iParam0->f_21), 13);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		if (Global_1357517)
		{
			Global_1357516 = 0;
		}
		__LIB_4__::func_89(&(iParam0->f_40), 0);
		MISC::SET_BIT(&(iParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		bVar0 = __LIB_4__::func_118(&(iParam0->f_40)) >= 1.5f;
		if (!Global_1357517 || bVar0)
		{
			__LIB_1__::func_561(&(iParam0->f_40));
			MISC::SET_BIT(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

void func_963(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	if (uParam0->f_168 == 0)
	{
		return;
	}
	if (__LIB_12__::func_919(uParam0, uParam0->f_168))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 8192);
	}
}

bool func_964(var uParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(Global_1347702[uParam0->f_174 /*49*/].f_1), 64);
	if (__LIB_12__::func_920(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 32);
		return true;
	}
	return false;
}

int func_965(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_12__::func_687(uParam0, 4))
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
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (__LIB_4__::func_682())
	{
		__LIB_12__::func_686(uParam0, 512);
		__LIB_12__::func_709(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (__LIB_0__::func_164(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_912[uParam0->f_1580 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	__LIB_4__::func_782();
	__LIB_12__::func_877(uParam0, 1, 0);
	__LIB_12__::func_836(uParam0);
	if (__LIB_12__::func_655(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	__LIB_12__::func_709(uParam0, 4);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1771))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1771);
	}
	if (__LIB_12__::func_687(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		CAM::_0x798BE43C9393632B(__LIB_0__::func_166());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1241[iVar0 /*22*/].f_2), __LIB_0__::func_166())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1241[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1241[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1241[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (__LIB_12__::func_655(uParam0, 524288) || iParam1 == 1)
	{
		__LIB_3__::func_120();
	}
	if (__LIB_12__::func_687(uParam0, 16))
	{
		if (__LIB_0__::func_81(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
		}
	}
	__LIB_4__::func_613();
	if (__LIB_12__::func_687(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797))
	{
		if (!__LIB_12__::func_655(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
		}
	}
	__LIB_12__::func_753(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1817);
	}
	return 1;
}

void func_966(var uParam0, bool bParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
	{
		if (!ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_206.f_348, 0))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_206.f_348, false))
			{
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_206.f_348, true, false))
			{
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_206.f_348, true))
			{
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_206.f_348);
		}
	}
	if (bParam1)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	__LIB_0__::func_8(&(uParam0->f_172), 1);
	__LIB_0__::func_8(&(uParam0->f_172), 16);
	__LIB_0__::func_8(&(uParam0->f_172), 2048);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		__LIB_12__::func_841(&(uParam0->f_206));
	}
	__LIB_12__::func_795(&(uParam0->f_206));
	__LIB_12__::func_926(uParam0);
}

void func_967(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_693(Global_1347702[uParam0->f_174 /*49*/].f_15);
	if (__LIB_0__::func_318(iVar0))
	{
		__LIB_4__::func_997(iVar0, iParam1);
	}
}

void func_968(int iParam0, vector3 vParam1, float fParam4)
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
		__LIB_9__::func_830(iParam0, 0);
		__LIB_9__::func_240(iParam0, vParam1, 1, 0);
	}
}

void func_969(int iParam0, int iParam1, int iParam2)
{
	__LIB_11__::func_576(iParam0, iParam2);
	if (__LIB_5__::func_353(iParam0))
	{
		__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		if (__LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15))
		{
			__LIB_1__::func_559(Global_1347702[iParam0 /*49*/].f_15, 0, 2);
		}
	}
}

void func_970(var uParam0, int iParam1, bool bParam2)
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
	if (!__LIB_12__::func_655(uParam0, 65536))
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
	if (!__LIB_12__::func_655(uParam0, 4096) && uParam0->f_1792)
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_12__::func_914(uParam0);
	__LIB_12__::func_915(uParam0, uParam0->f_1793, uParam0->f_1795);
	__LIB_12__::func_855(uParam0);
	if (uParam0->f_1796 && !uParam0->f_1795)
	{
		if (((((uParam0->f_1791 >= 0 && uParam0->f_912[uParam0->f_1791 /*41*/].f_17 > 0f) && uParam0->f_1584 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, (uParam0->f_912[uParam0->f_1791 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_12__::func_655(uParam0, 33554432)) && !__LIB_12__::func_655(uParam0, 4))
		{
			__LIB_12__::func_933(uParam0, uParam0->f_1793);
			return;
		}
	}
	if (!__LIB_12__::func_655(uParam0, 4))
	{
		if (__LIB_12__::func_856(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1580 = uParam0->f_1584;
				__LIB_12__::func_693(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_12__::func_933(uParam0, uParam0->f_1793);
		}
		if (uParam0->f_912[uParam0->f_1586 /*41*/].f_29)
		{
			fVar0 = __LIB_12__::func_932(uParam0, uParam0->f_1586);
			if (fVar0 < 0f || (uParam0->f_1793 && fVar0 < 1f))
			{
				uParam0->f_1584 = uParam0->f_1586;
				if (!bParam2)
				{
					uParam0->f_1580 = uParam0->f_1586;
					__LIB_12__::func_693(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1585 == -1f || fVar0 <= uParam0->f_1585) || uParam0->f_1586 == uParam0->f_1584)
				{
					if (uParam0->f_1586 != uParam0->f_1584)
					{
					}
					uParam0->f_1584 = uParam0->f_1586;
					uParam0->f_1585 = fVar0;
					__LIB_12__::func_693(uParam0, 16);
					if (((!__LIB_12__::func_655(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, true) < (uParam0->f_912[uParam0->f_1584 /*41*/].f_11 + 5f))
					{
						__LIB_12__::func_916(uParam0);
						__LIB_12__::func_693(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1584 == uParam0->f_1586)
			{
				__LIB_12__::func_686(uParam0, 16);
			}
		}
		if (uParam0->f_1586 + 1 >= 8)
		{
			uParam0->f_1586 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1586 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_912[iVar2 /*41*/].f_29)
				{
					uParam0->f_1586 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1586 = 0;
			}
		}
		if (uParam0->f_1584 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 2) && uParam0->f_1793)
		{
			return;
		}
	}
	if (__LIB_12__::func_655(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1);
		if (uParam0->f_1793 && fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_912[uParam0->f_1584 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_2 + uParam0->f_912[uParam0->f_1584 /*41*/].f_10))
			{
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1795 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1797) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
			}
		}
		else if ((uParam0->f_1793 && fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1794))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1794, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1793 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1794) > 1.25f) || __LIB_12__::func_655(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775) && __LIB_12__::func_932(uParam0, uParam0->f_1584) < 10000f) && __LIB_12__::func_655(uParam0, 16)) || __LIB_12__::func_655(uParam0, 4))
		{
			if (!__LIB_12__::func_655(uParam0, 4))
			{
				__LIB_12__::func_693(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_912[uParam0->f_1584 /*41*/].f_7, uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1582 = 0;
				__LIB_12__::func_686(uParam0, 4);
			}
		}
	}
	else if (__LIB_12__::func_655(uParam0, 4))
	{
		__LIB_12__::func_686(uParam0, 4);
	}
}

int func_971(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0 /*5*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*5*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_972(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_366[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_366[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_973(var uParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 301, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 315, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 178, bParam1);
}

void func_974(var uParam0)
{
	_NAMESPACE29::_0x0EABF182FBB63D72(uParam0, 6, 1);
}

void func_975(var uParam0)
{
	if (uParam0->f_171 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		MAP::DISPLAY_RADAR(true);
	}
	uParam0->f_171 = 0;
	uParam0->f_747 = 0;
	__LIB_1__::func_561(&(uParam0->f_2588));
}

int func_976(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*5*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_977(var uParam0, int iParam1)
{
	uParam0->f_340 = iParam1;
	__LIB_12__::func_826(uParam0, 1);
}

bool func_978(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { __LIB_12__::func_845(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_979(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_1581 < 0)
	{
		return true;
	}
	switch (uParam0->f_371[uParam0->f_1581 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_1__::func_583(&(uParam0->f_1768)) >= 15f)
			{
				__LIB_12__::func_693(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1664)
			{
				if (__LIB_1__::func_583(&(uParam0->f_1768)) >= 15f)
				{
					__LIB_12__::func_693(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_12__::func_714(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_12__::func_714(uParam0), false))
				{
					uParam0->f_1664 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_12__::func_714(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_12__::func_714(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_12__::func_714(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_1__::func_583(&(uParam0->f_1768)) >= 15f;
	}
	return false;
}

void func_980(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0f, 0f, 0f };
	__LIB_3__::func_49(iParam0, iParam3, 0);
	__LIB_3__::func_50(uParam1, iParam2);
	__LIB_12__::func_942(iParam0, iParam4);
	if (!MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::SET_BIT(&(iParam0->f_21), 0);
	}
	if (fParam5 > -1f)
	{
		__LIB_3__::func_52(iParam0, fParam5);
	}
	if (iParam6 == 1)
	{
		__LIB_1__::func_471(iParam0, 17);
	}
	if (iParam7 == 1)
	{
		__LIB_1__::func_471(iParam0, 16);
	}
	if (iParam8 == 1)
	{
		__LIB_1__::func_471(iParam0, 15);
	}
	if (iParam9 == 1)
	{
		__LIB_1__::func_471(iParam0, 13);
	}
	if (iParam10 == 1)
	{
		__LIB_1__::func_471(iParam0, 12);
	}
	if (iParam11 == 1)
	{
		__LIB_1__::func_471(iParam0, 11);
	}
	if (iParam12 == 1)
	{
		__LIB_1__::func_471(iParam0, 8);
	}
	if (iParam13 == 1)
	{
		__LIB_1__::func_471(iParam0, 10);
	}
	if (iParam14 == 1)
	{
		__LIB_1__::func_471(iParam0, 9);
	}
	if (iParam15 == 1)
	{
		__LIB_1__::func_471(iParam0, 18);
	}
	if (iParam16 == 1)
	{
		__LIB_1__::func_471(iParam0, 20);
	}
	if (iParam17 == 1)
	{
		__LIB_1__::func_471(iParam0, 19);
	}
}

void func_981(var uParam0, int iParam1)
{
	__LIB_12__::func_947(&(uParam0->f_206), iParam1);
}

void func_982(var uParam0, int iParam1)
{
	__LIB_12__::func_948(&(uParam0->f_206), iParam1);
}

void func_983(var uParam0)
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
	iVar0 = uParam0->f_1584;
	if (iVar0 >= 0 && !__LIB_12__::func_695(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[iVar0 /*41*/].f_1, true) <= uParam0->f_912[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1588 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1588), __LIB_1__::func_569(uParam0->f_1241[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1588.f_8), __LIB_1__::func_569(uParam0->f_1241[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1588)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1588.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1241[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1241[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_1800), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_912[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1241[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 27)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1241[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1241[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798) || iVar26 != uParam0->f_1798))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
											__LIB_12__::func_709(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1241[iVar0 /*22*/].f_18 != 0f || uParam0->f_1241[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1241[iVar0 /*22*/].f_18, 0f, uParam0->f_1241[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1241[iVar0 /*22*/].f_18 != 0f || uParam0->f_1241[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_912[iVar0 /*41*/].f_1, 1), uParam0->f_1241[iVar0 /*22*/].f_18, 0f, uParam0->f_1241[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_912[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_912[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1241[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1588));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_12__::func_709(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1604.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1604.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1604.f_22 != bVar30);
								uParam0->f_1604.f_16 = iVar23;
								uParam0->f_1604.f_17 = { vVar20 };
								uParam0->f_1604.f_20 = fVar27;
								uParam0->f_1604.f_21 = fVar28;
								uParam0->f_1604.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1604 = { uParam0->f_1588 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1604));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1627.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1627.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1627.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1627.f_21 != bVar30);
								uParam0->f_1627.f_16 = iVar23;
								uParam0->f_1627.f_17 = { vVar20 };
								uParam0->f_1627.f_20 = !bVar31;
								uParam0->f_1627.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1627 = { uParam0->f_1588 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1627));
								}
							}
							Jump @1466; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
							}
							StringCopy(&(uParam0->f_1588), "", 64);
							StringCopy(&(uParam0->f_1588.f_8), "", 64);
							__LIB_12__::func_711(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

void func_984(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_2__::func_259(&(uParam0->f_1765));
}

void func_985(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_748(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_12__::func_953(iParam0, 0);
		}
	}
}

bool func_986(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
		uParam0->f_415++;
		if (uParam0->f_415 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_12__::func_750(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_12__::func_873(uParam0) };
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
		if ((fVar3 >= __LIB_12__::func_678(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				__LIB_1__::func_436();
				uParam0->f_433 = 0;
			}
			__LIB_12__::func_679(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			__LIB_12__::func_841(uParam0);
			__LIB_12__::func_677(uParam0, 128, 1);
			__LIB_12__::func_677(uParam0, 256, 1);
			__LIB_12__::func_677(uParam0, 4096, 1);
			__LIB_12__::func_677(uParam0, 32768, 1);
			__LIB_12__::func_677(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_12__::func_680(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (__LIB_12__::func_680(uParam0) >= __LIB_12__::func_678(uParam0))
				{
				}
				Var4 = { __LIB_12__::func_665(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_12__::func_846(uParam0);
				}
				Var4 = { __LIB_12__::func_665(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
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
		__LIB_12__::func_913(uParam0);
		if (!uParam0->f_433)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_348, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_12__::func_845(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_366[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_366[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_366[iVar14 /*9*/].f_8)
						{
							uParam0->f_366[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &(uParam0->f_366[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &(uParam0->f_366[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15))
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
			__LIB_12__::func_677(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_987(var uParam0)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(Global_1347702[uParam0->f_174 /*49*/].f_24, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		if (!__LIB_0__::func_163(Global_35, -982327190))
		{
			TASK::TASK_STAND_STILL(Global_35, 2200);
			__LIB_4__::func_89(&(uParam0->f_2588), 1);
		}
		if (TASK::IS_PED_STILL(Global_35) || __LIB_4__::func_118(&(uParam0->f_2588)) > 2f)
		{
			__LIB_1__::func_561(&(uParam0->f_2588));
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	else
	{
		if (!__LIB_0__::func_899(&(uParam0->f_2588)))
		{
			__LIB_4__::func_89(&(uParam0->f_2588), 1);
		}
		else if (__LIB_4__::func_118(&(uParam0->f_2588)) > 5f)
		{
			__LIB_1__::func_561(&(uParam0->f_2588));
			if (__LIB_0__::func_163(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 1f, 7500, 0.25f, 0, 40000f);
		}
		if (__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

void func_988(var uParam0, char* sParam1, var uParam2)
{
	struct<8> Var0;
	char cVar8[32];
	__LIB_12__::func_806(uParam2);
	if (!__LIB_0__::func_84(uParam0, 301989888))
	{
		__LIB_12__::func_902(uParam0, &(uParam2->f_753));
	}
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_404, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_12__::func_845(uParam0) };
		__LIB_12__::func_839(uParam0, &Var0);
	}
	__LIB_12__::func_950(uParam0, sParam1);
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
	__LIB_12__::func_704(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_12__::func_679(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_12__::func_688(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_340);
	}
	__LIB_12__::func_903(uParam0);
	__LIB_12__::func_852(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_348);
	Global_43800 = uParam0->f_348;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_989(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_12__::func_655(uParam0, 512))
	{
		return;
	}
	if (__LIB_4__::func_118(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

void func_990(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	__LIB_12__::func_905(uParam0, iParam1, &vVar1, &fVar0);
	__LIB_12__::func_881(uParam0, __LIB_0__::func_1(uParam0->f_1241[uParam0->f_371[iParam1 /*18*/] /*22*/].f_1, 8));
	__LIB_2__::func_259(&(uParam0->f_1765));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
	if (uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!__LIB_12__::func_765(uParam0, uParam0->f_371[iParam1 /*18*/]))
		{
			__LIB_4__::func_639(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/]), 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}
	__LIB_4__::func_774(vVar1);
	if (uParam0->f_371[iParam1 /*18*/].f_15 < 1f)
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, uParam0->f_371[iParam1 /*18*/].f_15);
		__LIB_12__::func_709(uParam0, 32);
	}
	if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 16))
	{
		__LIB_12__::func_776(uParam0, uParam0->f_371[iParam1 /*18*/], &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(vVar4[iVar24 /*3*/]);
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_12__::func_865(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_12__::func_866(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

void func_991(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 20))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 20);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 0);
	}
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	__LIB_6__::func_790(iParam0, &iParam1, 0);
	__LIB_1__::func_480(&iParam1);
	__LIB_12__::func_953(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		__LIB_3__::func_28(iParam0, 0);
	}
	__LIB_3__::func_110(iParam0);
	__LIB_3__::func_96(iParam0, iParam1);
	__LIB_6__::func_737(iParam0);
	__LIB_3__::func_97(iParam0);
}

void func_992(int iParam0, int iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_9__::func_912(iParam0, iParam1);
	fVar0 = __LIB_5__::func_439(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_12__::func_951(iParam1, uParam2);
		__LIB_12__::func_961(iParam1);
		__LIB_12__::func_962(iParam1);
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
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
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
			if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
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
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_5__::func_439(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_993(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_22(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = __LIB_0__::func_167(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	__LIB_9__::func_203(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_745(iParam0);
}

void func_994(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_5 = bParam6;
	uParam0->f_6 = iParam9;
	uParam0->f_7 = iParam10;
	uParam0->f_8 = iParam12;
	if (__LIB_0__::func_2() != -1)
	{
		__LIB_10__::func_915(!bParam5);
		__LIB_10__::func_916(!bParam6);
		__LIB_12__::func_886(vParam1, fParam4, 1);
		Var0.f_12 = 255;
		Var0.f_13 = 255;
		Var0.f_3 = 51;
		__LIB_9__::func_193(Var0, __LIB_10__::func_931(0, 15), 0, 0);
		return;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
		__LIB_0__::func_105(1);
		iVar16 = __LIB_1__::func_447(vParam1, 1);
		if (bParam8)
		{
			if ((__LIB_1__::func_972(iVar16) == 1 || __LIB_1__::func_972(iVar16) == 2) || iVar16 == __LIB_1__::func_953(Global_40.f_4283))
			{
				__LIB_1__::func_971(0);
			}
		}
		if (!bParam7)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
		}
		if (bParam11)
		{
			iVar17 = ITEMSET::CREATE_ITEMSET(true);
			bVar18 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar17);
			iVar19 = 0;
			iVar19 = 0;
			while (iVar19 < ITEMSET::GET_ITEMSET_SIZE(iVar17))
			{
				iVar20 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar19, iVar17);
				iVar21 = MISC::_GET_ENTITY_FROM_ITEM(iVar20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar21))
				{
					PED::_0xED00D72F81CF7278(iVar21, 0, 1);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar21))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar21, true, true);
					}
					ENTITY::DELETE_ENTITY(&iVar21);
					bVar18 = true;
				}
				iVar19++;
			}
			if (bVar18 && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				PED::_0x2208438012482A1A(Global_35, false, false);
			}
			ITEMSET::DESTROY_ITEMSET(iVar17);
		}
		PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, true, true, false, false);
	}
}

bool func_995(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	if (bParam5)
	{
		if (__LIB_0__::func_562(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || __LIB_1__::func_128(5))
	{
		if (__LIB_0__::func_978(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_979(vParam0);
	if (bParam6)
	{
		iVar1 = __LIB_1__::func_447(vParam0, 1);
		if (__LIB_0__::func_730(iVar1) || __LIB_0__::func_980(iVar0, 1))
		{
			return false;
		}
	}
	if (!__LIB_1__::func_769(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_744())
	{
		if (__LIB_0__::func_981(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam8))
	{
		if (!__LIB_1__::func_129(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == __LIB_1__::func_447(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!__LIB_1__::func_460(iParam3, iParam4))
	{
		return false;
	}
	if (__LIB_0__::func_982(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_563(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_28())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (__LIB_8__::func_724(vParam0, iParam10) || __LIB_1__::func_624(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

void func_996(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = __LIB_11__::func_131(uParam0->f_174);
			if ((Global_1347702[uParam0->f_174 /*49*/].f_36 != joaat("BLIP_RC") || __LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				__LIB_9__::func_240(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		__LIB_12__::func_664(uParam0->f_174, fVar3);
		__LIB_12__::func_968(uParam0->f_174, vVar0, fVar3);
		__LIB_12__::func_621(uParam0->f_174);
		__LIB_12__::func_622(uParam0->f_174);
	}
}

void func_997(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;
	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			__LIB_12__::func_945(uParam0);
		}
		uParam0->f_752 = iParam9;
		__LIB_12__::func_946(uParam0);
	}
	if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
	{
		__LIB_0__::func_869(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((__LIB_4__::func_513() == iParam9 && __LIB_12__::func_799() == iParam10) && !__LIB_0__::func_138(Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (__LIB_4__::func_513() != iParam9 && !__LIB_0__::func_138(Global_1347394, 0f, 0f, 0f))
	{
		__LIB_0__::func_304(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	__LIB_10__::func_251(Global_1347702[uParam0->f_174 /*49*/].f_15, Var0, Var4, iParam9, iParam10);
}

void func_998(var uParam0)
{
	struct<367> Var0;
	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(uParam0, &Var0, 434);
}

void func_999()
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		if (PED::_IS_PED_CARRYING(Global_35))
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::_0xED00D72F81CF7278(iVar0, 0, 0);
				PED::SET_PED_TO_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 10000, 10000, 0, false, false, false);
			}
		}
	}
}
