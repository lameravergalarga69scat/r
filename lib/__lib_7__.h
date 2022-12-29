void func_0(var uParam0, int iParam1)
{
	if (uParam0->f_107[iParam1 /*113*/].f_32.f_22 != 0)
	{
		PED::_0xD65FDC686A031C83(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_32.f_22, 10f);
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> Var1;
	iVar0 = uParam0->f_107[iParam1 /*113*/].f_5;
	Var1 = { uParam0->f_107[iParam1 /*113*/].f_32 };
	if (Var1.f_10)
	{
		if (__LIB_0__::func_86(Var1.f_5))
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, Var1.f_2, 0, false, MISC::GET_HASH_KEY(Var1.f_3), uParam0->f_107[iParam1 /*113*/].f_32.f_11, uParam0->f_107[iParam1 /*113*/].f_32.f_12);
		}
		else
		{
			if (Var1.f_9)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var1.f_5, &(Var1.f_5.f_2), false);
			}
			TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, Var1.f_2, Var1.f_5, Var1.f_8, 0, false, true, Var1.f_3, uParam0->f_107[iParam1 /*113*/].f_32.f_11, uParam0->f_107[iParam1 /*113*/].f_32.f_12);
		}
	}
	else
	{
		if (Var1.f_9)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1.f_5, &(Var1.f_5.f_2), false);
		}
		TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, Var1.f_2, Var1.f_5, Var1.f_8, 0, true, false, Var1.f_3, -1f, false);
	}
	if (Var1.f_14 && Var1.f_10)
	{
		PED::_0x2208438012482A1A(iVar0, false, false);
	}
	return 1;
}

int func_2(var uParam0, int iParam1)
{
	TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uParam0->f_107[iParam1 /*113*/].f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false), 1.5f, 0, false, false, true, false);
	return 1;
}

Vector3 func_3(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -94.237f, 8.692f, 92.338f;
		case 2:
			return -84.312f, -45.81f, 94.899f;
		case 3:
			return -113.989f, -55.759f, 93.496f;
		case 4:
			return -143.42f, -60.643f, 93.919f;
		case 5:
			return -163.931f, -43.684f, 92.846f;
		case 6:
			return -177.77f, -15.71f, 93.24f;
		case 7:
			return -170.947f, -4.843f, 92.321f;
		case 8:
			return -161.544f, -7.315f, 94.235f;
		case 9:
			return -146.678f, 8.577f, 91.809f;
		case 10:
			return -134.212f, 8.827f, 92.911f;
		case 11:
			return 656.64f, -1176.682f, 44.842f;
		case 12:
			return 673.481f, -1214.576f, 44.693f;
		case 13:
			return 706.966f, -1217.705f, 44.392f;
		case 14:
			return 721.689f, -1231.874f, 44.018f;
		case 15:
			return 725.07f, -1283.583f, 40.983f;
		case 16:
			return 682.755f, -1294.328f, 41.382f;
		case 17:
			return 663.265f, -1294.419f, 40.818f;
		case 18:
			return 622.825f, -1239.264f, 40.581f;
		case 19:
			return 615.845f, -1225.746f, 40.577f;
		case 20:
			return 619.659f, -1204.304f, 40.856f;
		case 21:
			return 635.034f, -1200.382f, 45.856f;
		case 22:
			return 1870.081f, -1844.099f, 41.549f;
		case 23:
			return 1887.662f, -1830.493f, 41.753f;
		case 24:
			return 1907.54f, -1821.734f, 40.839f;
		case 25:
			return 1924.761f, -1866.922f, 40.691f;
		case 26:
			return 1932.487f, -1887.342f, 40.695f;
		case 27:
			return 1909.35f, -1902.705f, 40.716f;
		case 28:
			return 1900.716f, -1905.509f, 41.056f;
		case 29:
			return 1877.415f, -1893.42f, 41.828f;
		case 30:
			return 1853.654f, -1884.278f, 40.895f;
		case 31:
			return 1846.628f, -1874.025f, 41.24f;
		case 32:
			return 1844.923f, -1858.723f, 41.698f;
		case 33:
			return 1849.307f, -1849.839f, 41.6f;
		case 34:
			return 2373.933f, 1330.852f, 105.6879f;
		case 35:
			return 2330.508f, 1336.256f, 105.783f;
		case 36:
			return 2352.173f, 1340.317f, 104.0373f;
		case 37:
			return 2325.463f, 1368.067f, 103.0485f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_4(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	if (!uParam0->f_107[iParam1 /*113*/].f_32.f_20)
	{
		return;
	}
	iVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_21;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar1];
		if (iVar2 >= 0 && iVar2 < uParam0->f_1711)
		{
			if (!uParam0->f_1711[iVar2 /*15*/].f_7)
			{
			}
			else
			{
				iVar3 = uParam0->f_1711[iVar2 /*15*/].f_10;
				sVar4 = uParam0->f_1711[iVar2 /*15*/].f_12;
				if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					TASK::_0x8360C47380B6F351(iVar0, iVar3, sVar4, 1);
				}
			}
		}
		iVar1++;
	}
}

void func_5(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if ((MISC::GET_FRAME_COUNT() % iParam2) == 0)
	{
		if (iParam3 >= 0 && iParam3 < uParam0->f_107)
		{
			if (__LIB_0__::func_31(uParam0->f_107[iParam3 /*113*/].f_1))
			{
			}
		}
	}
}

void func_6(var uParam0, var uParam1)
{
	uParam0->f_13 = uParam1;
	__LIB_0__::func_268(&(uParam0->f_10), 0f);
}

void func_7(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		return;
	}
	__LIB_0__::func_203(uParam0->f_107[iParam1 /*113*/].f_5);
	TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_107[iParam1 /*113*/].f_5);
	__LIB_0__::func_202(uParam0->f_107[iParam1 /*113*/].f_5, 1);
}

void func_8(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		__LIB_6__::func_891(uParam0->f_107[iVar0 /*113*/].f_5);
		iVar0++;
	}
}

void func_9(var uParam0, int iParam1)
{
	if (!uParam0->f_107[iParam1 /*113*/].f_8.f_20)
	{
		if (__LIB_0__::func_264(&(uParam0->f_107[iParam1 /*113*/].f_8.f_17)) >= uParam0->f_107[iParam1 /*113*/].f_8.f_15)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_8.f_23))
			{
				if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_23))
				{
					TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_23, uParam0->f_107[iParam1 /*113*/].f_8.f_2, 0, true, false, uParam0->f_107[iParam1 /*113*/].f_8.f_1, uParam0->f_107[iParam1 /*113*/].f_8.f_16, -1f, false);
					__LIB_0__::func_37(&(uParam0->f_107[iParam1 /*113*/].f_8.f_17));
					uParam0->f_107[iParam1 /*113*/].f_8.f_20 = 1;
				}
			}
		}
	}
	else if (!__LIB_0__::func_163(uParam0->f_107[iParam1 /*113*/].f_5, -76381094))
	{
		uParam0->f_107[iParam1 /*113*/].f_8.f_14 = 0;
	}
}

bool func_10(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar1 /*113*/].f_5))
		{
		}
		else
		{
			fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_107[iVar1 /*113*/].f_5, 1, 1);
			if (fVar0 > fParam2)
			{
			}
			else
			{
				if (fVar0 < fParam1)
				{
					return true;
				}
				if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_107[iVar1 /*113*/].f_5))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

bool func_11(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		return true;
	}
	if ((uParam0->f_107[iParam1 /*113*/].f_32.f_49 < 0f || uParam0->f_107[iParam1 /*113*/].f_32.f_50 < 0f) || uParam0->f_107[iParam1 /*113*/].f_32.f_51 < 0f)
	{
		return true;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_107[iParam1 /*113*/].f_32.f_52)))
	{
		__LIB_0__::func_268(&(uParam0->f_107[iParam1 /*113*/].f_32.f_52), 0f);
	}
	fVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_49;
	fVar1 = uParam0->f_107[iParam1 /*113*/].f_32.f_50;
	fVar2 = uParam0->f_107[iParam1 /*113*/].f_32.f_51;
	fVar3 = __LIB_0__::func_264(&(uParam0->f_107[iParam1 /*113*/].f_32.f_52));
	if (fVar3 > fVar2)
	{
		return true;
	}
	fVar4 = (fVar0 - ((fVar3 / fVar2) * (fVar0 - fVar1)));
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_107[iParam1 /*113*/].f_5, fVar4);
	return false;
}

var func_12()
{
	return (((((((((__LIB_0__::func_771(3) || __LIB_0__::func_771(5)) || __LIB_0__::func_771(2)) || __LIB_0__::func_771(1)) || __LIB_0__::func_771(9)) || __LIB_0__::func_771(6)) || __LIB_0__::func_771(17)) || __LIB_0__::func_771(8)) || __LIB_0__::func_771(21)) || __LIB_0__::func_771(4));
}

void func_13(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (uParam0->f_4)
	{
		bVar0 = true;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (__LIB_0__::func_31(uParam0->f_107[iVar1 /*113*/].f_1))
		{
			__LIB_0__::func_707(uParam0->f_107[iVar1 /*113*/].f_1, 0, 0, bVar0);
		}
		iVar1++;
	}
}

bool func_14(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (__LIB_1__::func_22(uParam0->f_107[iVar0 /*113*/].f_1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_15(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_33)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_33[iVar0]))
		{
		}
		else
		{
			__LIB_1__::func_544(uParam0->f_33[iVar0]);
			VOLUME::_DELETE_VOLUME(uParam0->f_33[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
		{
		}
		else
		{
			if (uParam0->f_36[iVar0 /*5*/].f_2)
			{
				POPULATION::_0x74C2B3DC0B294102(uParam0->f_36[iVar0 /*5*/]);
			}
			if (PED::_0x91A5F9CBEBB9D936(uParam0->f_36[iVar0 /*5*/].f_4))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_36[iVar0 /*5*/].f_4, false);
			}
			VOLUME::_DELETE_VOLUME(uParam0->f_36[iVar0 /*5*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_67[iVar0]))
		{
		}
		else
		{
			VOLUME::_DELETE_VOLUME(uParam0->f_67[iVar0]);
		}
		iVar0++;
	}
}

int func_16(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!__LIB_0__::func_29(uParam0->f_107[iVar0 /*113*/].f_2))
		{
		}
		else if (!__LIB_0__::func_122(uParam0->f_107[iVar0 /*113*/].f_2))
		{
		}
		else
		{
			__LIB_2__::func_753(uParam0->f_107[iVar0 /*113*/].f_2, 0, 1, 0, 0);
		}
		iVar0++;
	}
	return 1;
}

void func_17(int iParam0, int iParam1)
{
	__LIB_6__::func_86(iParam0);
	__LIB_1__::func_446(&(Global_1327590.f_11465[iParam0 /*10*/].f_5), 0, iParam1, 0, 0, 0, 0, 0);
}

void func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_23();
	__LIB_1__::func_446(&iVar0, 0, Global_1327590.f_19622[iParam0 /*14*/].f_11, 0, 0, 0, 0, 0);
	iVar1 = __LIB_0__::func_23();
	__LIB_1__::func_446(&iVar1, 0, Global_1327590.f_19622[iParam0 /*14*/].f_12, 0, 0, 0, 0, 0);
	iVar2 = Global_1327590.f_19622[iParam0 /*14*/].f_9;
	__LIB_1__::func_446(&iVar2, 0, Global_1327590.f_19622[iParam0 /*14*/].f_10, 0, 0, 0, 0, 0);
	if (__LIB_1__::func_110(iVar2, iVar0, 0))
	{
		if (__LIB_1__::func_110(iVar2, iVar1, 0))
		{
			Global_1327590.f_19622[iParam0 /*14*/].f_9 = iVar1;
		}
		else
		{
			Global_1327590.f_19622[iParam0 /*14*/].f_9 = iVar2;
		}
	}
	else
	{
		Global_1327590.f_19622[iParam0 /*14*/].f_9 = iVar0;
	}
	Global_1327590.f_19622[iParam0 /*14*/].f_10 = (Global_1327590.f_19622[iParam0 /*14*/].f_10 + Global_1327590.f_19622[iParam0 /*14*/].f_13);
}

bool func_19(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (__LIB_4__::func_635(33554432))
			{
				return false;
			}
			if ((Global_1395601.f_4 && Global_1395601.f_4 ^ 256) != 0)
			{
				return false;
			}
			if (__LIB_1__::func_533(4))
			{
				return false;
			}
			if (__LIB_2__::func_765(2, 1))
			{
				return false;
			}
			if (__LIB_6__::func_934())
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		iVar1 = uParam0->f_107[iVar0 /*113*/].f_2;
		if (!__LIB_0__::func_29(iVar1))
		{
		}
		else if (__LIB_0__::func_122(iVar1))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(iVar1)))
			{
				__LIB_1__::func_940(iVar1, 1);
				return false;
			}
			uParam0->f_107[iVar0 /*113*/].f_5 = __LIB_2__::func_965(iVar1, 0, 0, 1, 1, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_21(int iParam0, struct<8> Param1, int iParam9)
{
	int iVar0;
	var uVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return 0;
	}
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_59(iParam0);
	if (iVar0 != 0 && __LIB_6__::func_88(iParam0))
	{
		Global_1360165[iParam0 /*1157*/].f_39 = { Param1 };
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, &Param1);
		__LIB_0__::func_288(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			uVar1 = __LIB_0__::func_23();
			__LIB_1__::func_446(&uVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0 /*60*/].f_46 = uVar1;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0 /*60*/].f_46 = -15;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 0;
		}
		Global_1360165[iParam0 /*1157*/].f_56 = 1;
		return 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
			Global_1360165[iParam0 /*1157*/].f_1152 = iParam1;
			Global_1360165[iParam0 /*1157*/].f_1153 = iVar1;
		}
		return;
	}
	if (bVar0)
	{
		Global_40.f_4942[iParam0 /*60*/].f_42 = iParam1;
		Global_40.f_4942[iParam0 /*60*/].f_43 = iVar1;
	}
	else
	{
		Global_40.f_4942[iParam0 /*60*/].f_44 = iParam1;
		if (bParam5)
		{
			Global_40.f_4942[iParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[iParam0 /*60*/].f_43 = -15;
		}
	}
}

bool func_23(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return false;
	}
	if (!bParam2)
	{
		if (__LIB_1__::func_531(iParam0, iParam1, 0))
		{
			return false;
		}
	}
	if (iParam3 == -1)
	{
		Global_1360165[iParam0 /*1157*/].f_140 = (Global_1360165[iParam0 /*1157*/].f_140 || iParam1);
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_141 = (Global_1360165[iParam0 /*1157*/].f_141 || iParam1);
		Global_1360165[iParam0 /*1157*/].f_142 = Global_1899515;
		__LIB_1__::func_446(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return true;
}

void func_24(char* sParam0, var uParam1, var uParam2, int iParam3)
{
	StringCopy(&(Global_1327590.f_19727), sParam0, 32);
	Global_1327590.f_19727.f_4 = uParam1;
	Global_1327590.f_19727.f_5 = uParam2;
	Global_1327590.f_19727.f_6 = Global_1899515;
	__LIB_1__::func_446(&(Global_1327590.f_19727.f_6), 0, iParam3, 0, 0, 0, 0, 0);
}

void func_25(int iParam0, int iParam1)
{
	__LIB_6__::func_87(iParam0);
	__LIB_1__::func_446(&(Global_1327590.f_19692[iParam0]), 0, iParam1, 0, 0, 0, 0, 0);
}

void func_26(var uParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (!__LIB_1__::func_22(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
		{
			if (PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 60f);
				__LIB_0__::func_288(uParam0->f_107[iVar0 /*113*/].f_1, 68, 1);
				__LIB_1__::func_774(uParam0->f_107[iVar0 /*113*/].f_1, 0, 0, 0, fVar1, 1, 1, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!uParam0->f_107[iVar0 /*113*/].f_104)
		{
		}
		else if (!STREAMING::IS_MODEL_VALID(uParam0->f_107[iVar0 /*113*/].f_3))
		{
		}
		else
		{
			uParam0->f_107[iVar0 /*113*/].f_5 = __LIB_1__::func_545(uParam0->f_107[iVar0 /*113*/].f_3, uParam0->f_23, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

int func_28()
{
	if (Global_1935689.f_10165 & 128 != 0)
	{
		return 1;
	}
	if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_DONATED_FOOD"), 1))
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_OPEN_CASHBOX")) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
	{
		return 1;
	}
	if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_DONATED_MONEY"), 1))
	{
		return 1;
	}
	return 0;
}

int func_30(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1711)
	{
		return 0;
	}
	return uParam0->f_1711[iParam1 /*15*/].f_10;
}

int func_31(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (uParam0->f_107[iVar0 /*113*/])
		{
		}
		else
		{
			uParam0->f_107[iVar0 /*113*/] = 1;
			uParam0->f_107[iVar0 /*113*/].f_3 = iParam1;
			uParam0->f_107[iVar0 /*113*/].f_4 = sParam2;
			uParam0->f_107[iVar0 /*113*/].f_104 = 1;
			uParam0->f_106++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_32(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	char cVar1[64];
	iVar0 = 0;
	while (iVar0 < uParam0->f_2051)
	{
		if (uParam0->f_2051[iVar0 /*6*/] >= 0)
		{
		}
		else
		{
			StringCopy(&cVar1, sParam2, 64);
			uParam0->f_2051[iVar0 /*6*/] = iParam1;
			MemCopy(&(uParam0->f_2051[iVar0 /*6*/].f_1), {cVar1}, 4);
			uParam0->f_2051[iVar0 /*6*/].f_5 = iParam3;
			uParam0->f_2049++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_33(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	iVar0 = uParam0->f_2051[iParam1 /*6*/];
	if (iVar0 < 0)
	{
		return 0;
	}
	Var1 = { uParam0->f_2051[iParam1 /*6*/].f_1 };
	iVar5 = uParam0->f_1984[iVar0];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar5))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar5, true, false))
	{
		return 0;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iVar5, &Var1))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iVar5, &Var1))
	{
		return 0;
	}
	uParam0->f_2050 = iParam1;
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar5, &Var1, bParam2);
	return 1;
}

void func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2268))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			iVar1 = __LIB_6__::func_952(uParam0, iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar1, uParam0->f_2268, 0f);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2269))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_2269, true, true);
	}
}

bool func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(__LIB_6__::func_952(uParam0, iVar1)))
		{
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(__LIB_6__::func_952(uParam0, iVar1)))
		{
			iVar0 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar1 /*15*/]))
		{
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1711[iVar1 /*15*/].f_10))
		{
		}
		else if (uParam0->f_1711[iVar1 /*15*/].f_5)
		{
			iVar0 = 0;
			if (uParam0->f_1711[iVar1 /*15*/].f_8)
			{
				vVar2 = { __LIB_6__::func_972(uParam0, uParam0->f_1711[iVar1 /*15*/].f_1) };
			}
			else
			{
				vVar2 = { uParam0->f_1711[iVar1 /*15*/].f_1 };
			}
			if (uParam0->f_1711[iVar1 /*15*/].f_9 == 0)
			{
				uParam0->f_1711[iVar1 /*15*/].f_9 = ENTITY::_0x6F3068258A499E52(uParam0->f_1711[iVar1 /*15*/], vVar2, 15);
			}
			if (uParam0->f_1711[iVar1 /*15*/].f_9 != 0)
			{
				if (ENTITY::_0x1FF441D7954F8709(uParam0->f_1711[iVar1 /*15*/].f_9))
				{
					iVar0 = ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_1711[iVar1 /*15*/].f_9);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				uParam0->f_1711[iVar1 /*15*/].f_10 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1711[iVar1 /*15*/].f_10))
			{
			}
			else
			{
				if ((MISC::GET_FRAME_COUNT() % 60) == 0)
				{
				}
				return false;
			}
		}
		iVar1++;
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
	{
		if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			return false;
		}
	}
	return true;
}

bool func_37(int iParam0)
{
	if (Global_1327590.f_19744 == -1)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		if (__LIB_6__::func_943(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_38(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false))
	{
		return 0;
	}
	return 1;
}

int func_39(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
	return 1;
}

bool func_40(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar0) < fParam2)
	{
		return false;
	}
	return true;
}

void func_41(var uParam0, int iParam1)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iParam1 /*113*/].f_32.f_23)))
	{
		PED::_0xAAB050DA48B57978(uParam0->f_107[iParam1 /*113*/].f_5, &(uParam0->f_107[iParam1 /*113*/].f_32.f_23), uParam0->f_107[iParam1 /*113*/].f_32.f_27, -1, 4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iParam1 /*113*/].f_32.f_28)))
	{
		PED::_0x89F5E7ADECCCB49C(uParam0->f_107[iParam1 /*113*/].f_5, &(uParam0->f_107[iParam1 /*113*/].f_32.f_28));
	}
	fVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_35;
	if (fVar0 > 0f)
	{
		__LIB_6__::func_991(uParam0->f_107[iParam1 /*113*/].f_1, fVar0);
	}
}

void func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2268))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			iVar1 = __LIB_6__::func_952(uParam0, iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar1, 0f);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2269))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_2269, false, true);
	}
}

int func_43(int iParam0)
{
	return MISC::GET_HASH_KEY(__LIB_6__::func_953(iParam0));
}

bool func_44(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_6__::func_954(uParam0))
	{
		return false;
	}
	return true;
}

void func_45(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	uParam0->f_23 = { __LIB_6__::func_970(iParam1) + Vector(fParam4, fParam3, fParam2) };
	uParam0->f_26 = { __LIB_6__::func_971(iParam1) };
}

int func_46(var uParam0, vector3 vParam1, float fParam4, vector3 vParam5, int iParam8, bool bParam9)
{
	int iVar0;
	if (bParam9)
	{
		vParam1 = { __LIB_6__::func_972(uParam0, vParam1) };
		fParam4 = __LIB_6__::func_973(uParam0, fParam4);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_33)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_33[iVar0]))
		{
			uParam0->f_33[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam8, vParam1, 0f, 0f, fParam4, vParam5, "volBlockContent");
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_47(var uParam0, vector3 vParam1, float fParam4, vector3 vParam5, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
{
	int iVar0;
	if (bParam10)
	{
		vParam1 = { __LIB_6__::func_972(uParam0, vParam1) };
		fParam4 = __LIB_6__::func_973(uParam0, fParam4);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
		{
			uParam0->f_36[iVar0 /*5*/] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam8, vParam1, 0f, 0f, fParam4, vParam5, "volBlockPeds");
			uParam0->f_36[iVar0 /*5*/].f_1 = iParam9;
			uParam0->f_36[iVar0 /*5*/].f_2 = iParam11;
			uParam0->f_36[iVar0 /*5*/].f_3 = iParam12;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_48(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_6__::func_974(iParam1);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (uParam0->f_107[iVar0 /*113*/])
		{
		}
		else
		{
			uParam0->f_107[iVar0 /*113*/] = 1;
			uParam0->f_107[iVar0 /*113*/].f_1 = iParam1;
			uParam0->f_107[iVar0 /*113*/].f_4 = sParam2;
			uParam0->f_106++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_49(var uParam0)
{
	float fVar0;
	int iVar1;
	fVar0 = 0.8f;
	if (uParam0->f_5)
	{
		fVar0 = 0.4f;
	}
	else if (uParam0->f_4)
	{
		fVar0 = 0.7f;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar1 /*113*/].f_100 == 0f)
		{
			__LIB_6__::func_975(uParam0, iVar1, fVar0);
		}
		iVar1++;
	}
}

void func_50(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_107[iVar0 /*113*/].f_3))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(uParam0->f_107[iVar0 /*113*/].f_3, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(uParam0->f_1711[iVar0 /*15*/], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1967[iVar0 /*4*/]))
		{
		}
		else
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_1967[iVar0 /*4*/], 1, 0);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29));
			__LIB_7__::func_5(uParam0, "Pinned interior", 1, -1);
		}
	}
}

bool func_51(var uParam0, int iParam1)
{
	if (uParam0->f_107[iParam1 /*113*/].f_8.f_22 && uParam0->f_107[iParam1 /*113*/].f_8 != 4)
	{
		if (!PED::_IS_PED_USING_SCENARIO_HASH(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_1))
		{
			__LIB_7__::func_5(uParam0, "Is ped in enter scenario - FALSE - not using scenario type", 60, iParam1);
			return false;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_107[iParam1 /*113*/].f_5, 0))
		{
			__LIB_7__::func_5(uParam0, "Is ped in enter scenario - FALSE - not active in scenario", 60, iParam1);
			return false;
		}
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false), uParam0->f_107[iParam1 /*113*/].f_8.f_3) > 5f)
		{
			__LIB_7__::func_5(uParam0, "Is ped in enter scenario - FALSE - too far from enter position", 60, iParam1);
			return false;
		}
		return true;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_8.f_23))
	{
		__LIB_7__::func_5(uParam0, "Is ped in enter scenario - FALSE - scenario does not exist", 60, iParam1);
		return false;
	}
	if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_23))
	{
		__LIB_7__::func_5(uParam0, "Is ped in enter scenario - FALSE - not using scenario point", 60, iParam1);
		return false;
	}
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_107[iParam1 /*113*/].f_5, 0))
	{
		__LIB_7__::func_5(uParam0, "Is ped in enter scenario - FALSE - not active in scenario", 60, iParam1);
		return false;
	}
	return true;
}

void func_52(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		__LIB_6__::func_985(uParam0, iVar0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
		{
		}
		else
		{
			if (uParam0->f_36[iVar0 /*5*/].f_3)
			{
				uParam0->f_36[iVar0 /*5*/].f_4 = PED::_0x4C39C95AE5DB1329(uParam0->f_36[iVar0 /*5*/], 0, 2);
			}
			iVar0++;
		}
	}
}

void func_53(var uParam0)
{
	if (uParam0->f_1976.f_5)
	{
		uParam0->f_1976.f_6 = PROPSET::_CREATE_PROPSET_2(uParam0->f_1976, __LIB_6__::func_972(uParam0, uParam0->f_1976.f_1), 1, __LIB_6__::func_973(uParam0, uParam0->f_1976.f_4), 3f, false, true);
	}
}

void func_54(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!uParam0->f_4)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar2 /*113*/].f_5))
			{
			}
			else if (__LIB_0__::func_86(uParam0->f_107[iVar2 /*113*/].f_96))
			{
			}
			else
			{
				iVar0 = __LIB_6__::func_987(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iVar2 /*113*/].f_5, true, false));
				iVar1 = __LIB_6__::func_987(uParam0->f_107[iVar2 /*113*/].f_96);
				if (iVar0 || iVar1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_107[iVar2 /*113*/].f_5, uParam0->f_107[iVar2 /*113*/].f_96, false, true, true);
				}
			}
			iVar2++;
		}
	}
}

void func_55(int iParam0, bool bParam1)
{
	if (!__LIB_6__::func_990(iParam0))
	{
		return;
	}
	if (bParam1)
	{
	}
	Global_32074.f_4[iParam0 /*4*/].f_3 = bParam1;
}

int func_56(int iParam0)
{
	if (!__LIB_6__::func_990(iParam0))
	{
		return -1;
	}
	return Global_1327590.f_23[iParam0 /*17*/].f_1;
}

void func_57(var uParam0)
{
	int iVar0;
	float fVar1;
	if (!uParam0->f_2270 || !uParam0->f_2274)
	{
		return;
	}
	iVar0 = __LIB_6__::func_952(uParam0, uParam0->f_2271);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
	{
		fVar1 = (uParam0->f_2272 * uParam0->f_2272);
	}
	else
	{
		fVar1 = (uParam0->f_2273 * uParam0->f_2273);
	}
	if (uParam0->f_2275)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < fVar1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			ANIMSCENE::FADE_ANIM_SCENE_AUDIO_IN(uParam0->f_2046, 10f);
			if (__LIB_0__::func_113())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2046, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2046, "JOHN", Global_35, 0);
			}
			uParam0->f_2275 = 0;
		}
	}
	else if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) > fVar1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(uParam0->f_2046, 10f);
		if (__LIB_0__::func_113())
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2046, "ARTHUR", Global_35);
		}
		else
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2046, "JOHN", Global_35);
		}
		uParam0->f_2275 = 1;
	}
}

bool func_58(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = __LIB_6__::func_992(iParam0);
	fVar1 = __LIB_6__::func_993(iParam0);
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (fVar1 > fVar0)
	{
		if (IntToFloat(iVar2) >= fVar0 && IntToFloat(iVar2) < fVar1)
		{
			return true;
		}
	}
	else if (IntToFloat(iVar2) >= fVar0 || IntToFloat(iVar2) < fVar1)
	{
		return true;
	}
	return false;
}

bool func_59(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1984)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1984[iVar1]))
		{
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1984[iVar1], true, false))
		{
		}
		else
		{
			iVar0 = 0;
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_1984[iVar1], true))
			{
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1984[iVar1], false))
			{
				__LIB_7__::func_5(uParam0, "Metadata not loaded", 20, -1);
			}
			else if (ANIMSCENE::_0x9E036D5204FFBBC8(uParam0->f_1984[iVar1], 0) > 2)
			{
				__LIB_7__::func_5(uParam0, "Audio load stress is too high", 20, -1);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1984[iVar1]);
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_60(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	bool bVar7;
	int iVar8;
	iVar0 = 1;
	iVar8 = 0;
	while (iVar8 < uParam0->f_2051)
	{
		iVar1 = uParam0->f_2051[iVar8 /*6*/];
		if (iVar1 < 0)
		{
		}
		else
		{
			Var2 = { uParam0->f_2051[iVar8 /*6*/].f_1 };
			bVar7 = uParam0->f_2051[iVar8 /*6*/].f_5;
			iVar6 = uParam0->f_1984[iVar1];
			if (!bVar7)
			{
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar6))
			{
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar6, true, false))
				{
					return false;
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iVar6, &Var2))
				{
				}
				else
				{
					iVar0 = 0;
					if (ANIMSCENE::_0x0DF57F86FE71DBE5(iVar6, &Var2))
					{
					}
					else if (ANIMSCENE::_0x9E036D5204FFBBC8(iVar6, &Var2) > 2)
					{
						__LIB_7__::func_5(uParam0, "Audio load stress is too high", 20, -1);
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iVar6, &Var2);
					}
				}
			}
		}
		iVar8++;
	}
	return iVar0;
}

bool func_61(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iVar0, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return false;
	}
	return true;
}

bool func_62(var uParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = (uParam0->f_2256 * uParam0->f_2256);
	fVar1 = (uParam0->f_2252 * uParam0->f_2252);
	fVar2 = (uParam0->f_2253 * uParam0->f_2253);
	if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_107[iParam1 /*113*/].f_3, vParam2, true))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_107[iParam1 /*113*/].f_109)))
		{
			__LIB_0__::func_268(&(uParam0->f_107[iParam1 /*113*/].f_109), 0f);
		}
	}
	else
	{
		__LIB_0__::func_37(&(uParam0->f_107[iParam1 /*113*/].f_109));
	}
	fVar3 = BUILTIN::VDIST2(Global_36, vParam2);
	if (fVar3 > fVar0)
	{
		return true;
	}
	if (fVar3 < fVar1)
	{
		__LIB_7__::func_5(uParam0, "Create - Player is too close to the start location", 200, iParam1);
		return false;
	}
	if (fVar3 > fVar2)
	{
		fVar4 = uParam0->f_2255;
	}
	else
	{
		fVar4 = __LIB_6__::func_996(fVar3, fVar1, fVar2, uParam0->f_2254, uParam0->f_2255);
	}
	if (__LIB_0__::func_264(&(uParam0->f_107[iParam1 /*113*/].f_109)) < fVar4)
	{
		__LIB_7__::func_5(uParam0, "Create - Start location is on screen or has been on screen recently", 200, iParam1);
		return false;
	}
	return true;
}

bool func_63(var uParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	fVar0 = (uParam0->f_2261 * uParam0->f_2261);
	fVar1 = (uParam0->f_2257 * uParam0->f_2257);
	fVar2 = (uParam0->f_2258 * uParam0->f_2258);
	if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_107[iParam1 /*113*/].f_106)))
		{
			__LIB_0__::func_268(&(uParam0->f_107[iParam1 /*113*/].f_106), 0f);
		}
	}
	else
	{
		__LIB_0__::func_37(&(uParam0->f_107[iParam1 /*113*/].f_106));
	}
	fVar3 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false));
	if (fVar3 > fVar0)
	{
		return true;
	}
	if (fVar3 < fVar1)
	{
		__LIB_7__::func_5(uParam0, "Create - Player is too close to ped", 200, iParam1);
		return false;
	}
	if (fVar3 > fVar2)
	{
		fVar4 = uParam0->f_2260;
	}
	else
	{
		fVar4 = __LIB_6__::func_996(fVar3, fVar1, fVar2, uParam0->f_2259, uParam0->f_2260);
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_0__::func_78(uParam0) == 8)
	{
		iVar5 = __LIB_6__::func_987(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false));
		iVar6 = __LIB_6__::func_987(uParam0->f_107[iParam1 /*113*/].f_96);
		if (iVar5 != iVar6)
		{
			__LIB_7__::func_5(uParam0, "Create - Halving the virtual speed because of indoors/outdoors warping", 200, iParam1);
			fVar4 = (fVar4 / 2f);
		}
	}
	fVar7 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false), vParam2);
	fVar8 = (__LIB_0__::func_264(&(uParam0->f_107[iParam1 /*113*/].f_106)) * fVar4);
	fVar9 = (fVar8 * fVar8);
	if (fVar9 < fVar7)
	{
		__LIB_7__::func_5(uParam0, "Create - Ped is on screen or has been on screen recently", 200, iParam1);
		return false;
	}
	return true;
}

bool func_64(var uParam0, int iParam1)
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_8.f_23))
	{
		return false;
	}
	__LIB_7__::func_7(uParam0, iParam1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_107[iParam1 /*113*/].f_5, false, true);
	TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_23, uParam0->f_107[iParam1 /*113*/].f_8.f_2, 0, false, true, 0, false, -1f, false);
	PED::_0x2208438012482A1A(uParam0->f_107[iParam1 /*113*/].f_5, false, false);
	return true;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> Var1;
	int iVar65;
	vector3 vVar66;
	float fVar69;
	bool bVar70;
	bool bVar71;
	iVar0 = uParam0->f_107[iParam1 /*113*/].f_5;
	Var1 = { uParam0->f_107[iParam1 /*113*/].f_32 };
	if (Var1.f_15 >= 0 && Var1.f_15 < 17)
	{
		iVar65 = uParam0->f_1711[Var1.f_15 /*15*/].f_10;
		if (ENTITY::DOES_ENTITY_EXIST(iVar65))
		{
			vVar66 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
			fVar69 = ENTITY::GET_ENTITY_HEADING(iVar65);
			if (__LIB_0__::func_86(Var1.f_5))
			{
				Var1.f_5 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar65, vVar66) };
			}
			if (Var1.f_8 == 0f)
			{
				Var1.f_8 = (ENTITY::GET_ENTITY_HEADING(iVar0) - fVar69);
			}
			uParam0->f_107[iParam1 /*113*/].f_32.f_21 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar65, Var1.f_2, Var1.f_5, Var1.f_8, 0, 0, 0);
		}
	}
	else
	{
		if (__LIB_0__::func_86(Var1.f_5))
		{
			Var1.f_5 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		}
		if (Var1.f_8 == 0f)
		{
			Var1.f_8 = ENTITY::GET_ENTITY_HEADING(iVar0);
		}
		if (Var1.f_9)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1.f_5, &(Var1.f_5.f_2), false);
		}
		uParam0->f_107[iParam1 /*113*/].f_32.f_21 = TASK::CREATE_SCENARIO_POINT(Var1.f_2, Var1.f_5, Var1.f_8, 0, 0, 0);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_32.f_21))
	{
		__LIB_6__::func_982(&(uParam0->f_107[iParam1 /*113*/].f_32.f_21), 1, uParam0->f_107[iParam1 /*113*/].f_32.f_13);
		bVar71 = Var1.f_10;
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_12 && bVar71)
		{
			bVar70 = true;
		}
		__LIB_7__::func_4(uParam0, iParam1);
		TASK::_TASK_USE_SCENARIO_POINT(iVar0, uParam0->f_107[iParam1 /*113*/].f_32.f_21, Var1.f_3, 0, !bVar71, bVar71, 0, false, uParam0->f_107[iParam1 /*113*/].f_32.f_11, bVar70);
		if (Var1.f_14 && Var1.f_10)
		{
			PED::_0x2208438012482A1A(iVar0, false, false);
		}
		return 1;
	}
	return 0;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> Var1;
	bool bVar65;
	iVar0 = uParam0->f_107[iParam1 /*113*/].f_5;
	Var1 = { uParam0->f_107[iParam1 /*113*/].f_32 };
	if (__LIB_0__::func_86(Var1.f_5))
	{
		Var1.f_5 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	}
	if (Var1.f_9)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var1.f_5, &(Var1.f_5.f_2), false);
	}
	uParam0->f_107[iParam1 /*113*/].f_32.f_21 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Var1.f_5, Var1.f_2, 1f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_32.f_21))
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_12 && Var1.f_10)
		{
			bVar65 = true;
		}
		__LIB_7__::func_4(uParam0, iParam1);
		TASK::_TASK_USE_SCENARIO_POINT(iVar0, uParam0->f_107[iParam1 /*113*/].f_32.f_21, Var1.f_3, 0, !Var1.f_10, Var1.f_10, Var1.f_2, false, uParam0->f_107[iParam1 /*113*/].f_32.f_11, bVar65);
		if (Var1.f_14 && Var1.f_10)
		{
			PED::_0x2208438012482A1A(iVar0, false, false);
		}
		return 1;
	}
	return 0;
}

void func_67(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (uParam0->f_1711[iVar0 /*15*/].f_9 != 0)
		{
			if (ENTITY::_0x1FF441D7954F8709(uParam0->f_1711[iVar0 /*15*/].f_9))
			{
				ENTITY::_0xD2B9C78537ED5759(uParam0->f_1711[iVar0 /*15*/].f_9);
			}
		}
		iVar1 = uParam0->f_1711[iVar0 /*15*/].f_10;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
		{
		}
		else if (uParam0->f_1711[iVar0 /*15*/].f_6 || (__LIB_6__::func_951(uParam0) && !uParam0->f_1711[iVar0 /*15*/].f_5))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29));
			__LIB_7__::func_5(uParam0, "Unpinned interior", 1, -1);
		}
	}
}

void func_68(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!bParam2)
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_62)
		{
			return;
		}
	}
	if (uParam0->f_107[iParam1 /*113*/].f_32.f_55 == 0)
	{
		uParam0->f_107[iParam1 /*113*/].f_32.f_62 = 1;
		return;
	}
	iVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_59;
	if (iVar0 <= 0 || iVar0 > 600)
	{
		return;
	}
	iVar1 = iVar0 * 1000;
	iVar2 = (iVar1 / 4000);
	if (iVar2 <= 0)
	{
		return;
	}
	switch (uParam0->f_107[iParam1 /*113*/].f_32.f_55)
	{
		case 1:
			if (!__LIB_0__::func_75(&(uParam0->f_107[iParam1 /*113*/].f_32.f_56)) || __LIB_0__::func_264(&(uParam0->f_107[iParam1 /*113*/].f_32.f_56)) > 1f)
			{
				iVar3 = __LIB_6__::func_956(uParam0->f_107[iParam1 /*113*/].f_1);
				if (iVar3 == 0)
				{
					return;
				}
				iVar4 = iVar2 + 5;
				while (iVar4 >= 60)
				{
					iVar5++;
					iVar4 = (iVar4 - 60);
				}
				if (PED::_0xCB86D3E3E3708901(iVar3, uParam0->f_1690, iVar5, iVar4, 0))
				{
					__LIB_0__::func_268(&(uParam0->f_107[iParam1 /*113*/].f_32.f_56), 0f);
				}
			}
			if (!__LIB_0__::func_75(&(uParam0->f_1693)) || __LIB_0__::func_264(&(uParam0->f_1693)) > 1f)
			{
				if (__LIB_0__::func_113())
				{
					iVar3 = joaat("ARTHUR");
				}
				else
				{
					iVar3 = joaat("JOHN");
				}
				iVar6 = iVar2;
				while (iVar6 >= 60)
				{
					iVar7++;
					iVar6 = (iVar6 - 60);
				}
				if (PED::_0xCB86D3E3E3708901(iVar3, uParam0->f_1691, iVar7, iVar6, 0))
				{
					__LIB_0__::func_268(&(uParam0->f_1693), 0f);
				}
			}
			break;
		case 2:
			if (uParam0->f_1696)
			{
				PED::_0xE737D5F14304A2EC(uParam0->f_107[iParam1 /*113*/].f_5, PLAYER::PLAYER_ID(), iVar1);
			}
			break;
		case 3:
			PED::_0x19173C3F15367B54(uParam0->f_107[iParam1 /*113*/].f_5, PLAYER::PLAYER_ID(), iVar1);
			PED::_0x5708EDD71B50C008(uParam0->f_107[iParam1 /*113*/].f_5, PLAYER::PLAYER_ID(), iVar1);
			break;
	}
	uParam0->f_107[iParam1 /*113*/].f_32.f_62 = 1;
}

bool func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_8.f_1 == 0)
		{
		}
		else
		{
			if (__LIB_0__::func_86(uParam0->f_107[iVar0 /*113*/].f_8.f_3))
			{
				uParam0->f_107[iVar0 /*113*/].f_8.f_3 = { uParam0->f_107[iVar0 /*113*/].f_96 };
			}
			if (uParam0->f_107[iVar0 /*113*/].f_8.f_6 == 0f)
			{
				uParam0->f_107[iVar0 /*113*/].f_8.f_6 = uParam0->f_107[iVar0 /*113*/].f_99;
			}
			iVar1 = uParam0->f_107[iVar0 /*113*/].f_8.f_7;
			vVar2 = { uParam0->f_107[iVar0 /*113*/].f_8.f_3 };
			fVar5 = uParam0->f_107[iVar0 /*113*/].f_8.f_6;
			if (uParam0->f_107[iVar0 /*113*/].f_8.f_8)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &(vVar2.f_2), false);
			}
			if (uParam0->f_107[iVar0 /*113*/].f_8 == 4)
			{
				uParam0->f_107[iVar0 /*113*/].f_8.f_23 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar2, uParam0->f_107[iVar0 /*113*/].f_8.f_1, 1f, 0, false);
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
				{
					return false;
				}
			}
			else if (!uParam0->f_107[iVar0 /*113*/].f_8.f_22)
			{
				if (iVar1 < 0)
				{
					uParam0->f_107[iVar0 /*113*/].f_8.f_23 = TASK::CREATE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_8.f_1, vVar2, fVar5, 0, 0, 0);
					__LIB_6__::func_982(&(uParam0->f_107[iVar0 /*113*/].f_8.f_23), 1, 0);
				}
				else
				{
					iVar6 = uParam0->f_1711[iVar1 /*15*/].f_10;
					if (ENTITY::DOES_ENTITY_EXIST(iVar6))
					{
						vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar6, vVar2) };
						fVar5 = (fVar5 - ENTITY::GET_ENTITY_HEADING(iVar6));
						uParam0->f_107[iVar0 /*113*/].f_8.f_23 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_1711[iVar1 /*15*/].f_10, uParam0->f_107[iVar0 /*113*/].f_8.f_1, vVar2, fVar5, 0, 0, 0);
						__LIB_6__::func_982(&(uParam0->f_107[iVar0 /*113*/].f_8.f_23), 1, 0);
					}
				}
			}
			if (uParam0->f_107[iVar0 /*113*/].f_8.f_14)
			{
				__LIB_1__::func_283(&(uParam0->f_107[iVar0 /*113*/].f_8.f_17), 0);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = __LIB_0__::func_271(iVar1);
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_36)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
				{
				}
				else if (iVar1 == __LIB_6__::func_983(uParam0->f_36[iVar0 /*5*/].f_1))
				{
				}
				else if (ENTITY::IS_ENTITY_IN_VOLUME(iVar2, uParam0->f_36[iVar0 /*5*/], false, 0))
				{
					return false;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	if (uParam0->f_2250)
	{
		iVar1 = 0;
		while (iVar1 < 27)
		{
			iVar3 = __LIB_0__::func_177(iVar1);
			if (ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < uParam0->f_36)
				{
					if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
					{
					}
					else if (iVar1 == __LIB_6__::func_983(uParam0->f_36[iVar0 /*5*/].f_1))
					{
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_36[iVar0 /*5*/], false, 0))
					{
						return false;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 7)
		{
			if (!(iVar4 == 0 || iVar4 == 1))
			{
			}
			else
			{
				iVar3 = __LIB_0__::func_398(iVar4);
				iVar0 = 0;
				while (iVar0 < uParam0->f_36)
				{
					if ((VOLUME::_DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]) && !ENTITY::IS_ENTITY_DEAD(iVar3)) && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_36[iVar0 /*5*/], false, 0))
					{
						return false;
					}
					iVar0++;
				}
			}
			iVar4++;
		}
	}
	uParam0->f_2249 = 1;
	return true;
}

bool func_71(var uParam0)
{
	float fVar0;
	float fVar1;
	fVar0 = uParam0->f_2263;
	fVar1 = uParam0->f_2264;
	if (__LIB_0__::func_317() == 3)
	{
		if (__LIB_3__::func_291(Global_35, 1))
		{
			fVar0 = 5f;
			fVar1 = 8f;
		}
	}
	if (__LIB_7__::func_10(uParam0, fVar0, fVar1))
	{
		return true;
	}
	return false;
}

bool func_72(var uParam0)
{
	float fVar0;
	if (uParam0->f_14)
	{
		return false;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_10)))
	{
		return false;
	}
	if (uParam0->f_13 < 0)
	{
		return false;
	}
	if (__LIB_6__::func_949(uParam0) == 4)
	{
		if (__LIB_6__::func_994() != 0)
		{
			__LIB_2__::func_113(&(uParam0->f_10));
		}
		else
		{
			__LIB_2__::func_112(&(uParam0->f_10));
		}
	}
	fVar0 = __LIB_0__::func_264(&(uParam0->f_10));
	if (fVar0 > IntToFloat(uParam0->f_13))
	{
		return true;
	}
	return false;
}

int func_73(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	iVar6 = __LIB_1__::func_994(vVar0, vVar3.x, iParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_74(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		return false;
	}
	if (!__LIB_1__::func_22(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return false;
	}
	if (uParam0->f_4)
	{
		if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_107[iParam1 /*113*/].f_5, joaat("EVENT_DAMAGE")))
		{
			__LIB_7__::func_5(uParam0, "Responding to Damage Event", 15, -1);
			return false;
		}
		if (__LIB_6__::func_997(uParam0, iParam1))
		{
			return true;
		}
		if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
		{
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
			{
				return true;
			}
		}
		return false;
	}
	if (__LIB_6__::func_997(uParam0, iParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_107[iParam1 /*113*/].f_5, -1))
	{
		if (!__LIB_0__::func_163(uParam0->f_107[iParam1 /*113*/].f_5, 1435919172))
		{
			return true;
		}
	}
	return false;
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	if (uParam0->f_107[iParam1 /*113*/].f_1 == 12)
	{
		return 0;
	}
	fVar6 = 100f;
	switch (__LIB_0__::func_317())
	{
		case 1:
			iVar0 = 1;
			iVar1 = 10;
			break;
		case 2:
			iVar0 = 11;
			iVar1 = 21;
			break;
		case 3:
			iVar0 = 22;
			iVar1 = 33;
			break;
		case 6:
			iVar0 = 34;
			iVar1 = 37;
			break;
		default:
			return 0;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		vVar3 = { __LIB_7__::func_3(iVar2) };
		iVar8 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar3, joaat("WORLD_CAMP_VIG_EXIT_TG"), 1f, 1, false);
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar8))
		{
		}
		else
		{
			fVar9 = uParam0->f_107[iParam1 /*113*/].f_32.f_8;
			if (fVar9 == 0f)
			{
				fVar9 = ENTITY::GET_ENTITY_HEADING(uParam0->f_107[iParam1 /*113*/].f_5);
			}
			vVar10 = { __LIB_1__::func_660(fVar9) };
			vVar13 = { __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false), vVar3, 1065353216 /* Float: 1f */) };
			fVar16 = MISC::ABSF((vVar10.x - vVar13.x));
			fVar17 = MISC::ABSF((vVar10.y - vVar13.y));
			fVar18 = (fVar16 + fVar17);
			if (fVar18 < fVar6)
			{
				fVar6 = fVar18;
				iVar7 = iVar8;
			}
		}
		iVar2++;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar7))
	{
		return 0;
	}
	iVar19 = 0;
	if (uParam0->f_107[iParam1 /*113*/].f_32.f_2 != 0)
	{
		iVar19 = uParam0->f_107[iParam1 /*113*/].f_32.f_2;
	}
	TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_107[iParam1 /*113*/].f_5, iVar7, 0, 0, true, false, iVar19, false, -1f, false);
	return 1;
}

void func_76(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_107)
	{
		return;
	}
	if (uParam0->f_107[iParam1 /*113*/].f_112)
	{
		return;
	}
	if (!__LIB_0__::func_31(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return;
	}
	__LIB_3__::func_90(uParam0->f_107[iParam1 /*113*/].f_1, __LIB_6__::func_955(uParam0->f_7));
	__LIB_0__::func_707(uParam0->f_107[iParam1 /*113*/].f_1, 1, 1, 0);
	__LIB_0__::func_290(uParam0->f_107[iParam1 /*113*/].f_1, 45, 1);
	__LIB_0__::func_290(uParam0->f_107[iParam1 /*113*/].f_1, 46, 1);
	uParam0->f_107[iParam1 /*113*/].f_112 = 1;
}

bool func_77(var uParam0)
{
	int iVar0;
	if (__LIB_6__::func_951(uParam0))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return true;
	}
	if (Global_1935630.f_12)
	{
		return true;
	}
	if (!__LIB_6__::func_969())
	{
		return true;
	}
	if (__LIB_0__::func_1(Global_1935630, 16384))
	{
		return true;
	}
	if (__LIB_6__::func_933(2))
	{
		return true;
	}
	if (!uParam0->f_3)
	{
		if (__LIB_6__::func_933(1))
		{
			return true;
		}
	}
	if (uParam0->f_4)
	{
		if (!__LIB_7__::func_19(1))
		{
			return true;
		}
	}
	if (Global_1357549.f_1614 || __LIB_4__::func_635(4))
	{
		return true;
	}
	if (Global_18)
	{
		return true;
	}
	if (__LIB_3__::func_77(uParam0->f_22))
	{
		if (!uParam0->f_3 && !Global_1327590.f_19736)
		{
			return true;
		}
	}
	else
	{
		uParam0->f_22 = __LIB_0__::func_23();
		__LIB_1__::func_446(&(uParam0->f_22), 0, 0, 1, 0, 0, 0, 0);
	}
	if (__LIB_0__::func_91())
	{
		if (!Global_1327590.f_19735 && !uParam0->f_8)
		{
			return true;
		}
	}
	if (__LIB_0__::func_296(1030, 1, 1))
	{
		if (!Global_1327590.f_19734 && !uParam0->f_8)
		{
			return true;
		}
	}
	else if (uParam0->f_8)
	{
		uParam0->f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else
		{
			if (__LIB_1__::func_302(uParam0->f_107[iVar0 /*113*/].f_1, 2048))
			{
				return true;
			}
			if (__LIB_6__::func_949(uParam0) < 5)
			{
				if (__LIB_0__::func_287(uParam0->f_107[iVar0 /*113*/].f_1, 29, 1) || __LIB_1__::func_217(uParam0->f_107[iVar0 /*113*/].f_1))
				{
					return true;
				}
				if (!uParam0->f_3)
				{
					if (__LIB_0__::func_699(uParam0->f_107[iVar0 /*113*/].f_1) && !__LIB_1__::func_22(uParam0->f_107[iVar0 /*113*/].f_1))
					{
						__LIB_7__::func_17(__LIB_4__::func_576(uParam0), 30);
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_78(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_40)))
		{
		}
		else
		{
			__LIB_7__::func_21(uParam0->f_107[iVar0 /*113*/].f_1, uParam0->f_107[iVar0 /*113*/].f_32.f_40, -1);
		}
		iVar0++;
	}
}

void func_79(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else
		{
			if (uParam0->f_107[iVar0 /*113*/].f_32.f_32 > -1)
			{
				if (uParam0->f_107[iVar0 /*113*/].f_32.f_32 == 0)
				{
					if (__LIB_0__::func_78(uParam0) == 0)
					{
						uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 5;
						if (uParam0->f_107[iVar0 /*113*/].f_1 == 10)
						{
							uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 7;
						}
					}
					else if (__LIB_0__::func_78(uParam0) == 6)
					{
						if (uParam0->f_107[iVar0 /*113*/].f_1 != 24 && uParam0->f_107[iVar0 /*113*/].f_1 != 25)
						{
							uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 6;
						}
					}
				}
				uVar1 = uParam0->f_107[iVar0 /*113*/].f_32.f_32;
				iVar2 = uParam0->f_107[iVar0 /*113*/].f_32.f_33;
				iVar3 = uParam0->f_107[iVar0 /*113*/].f_32.f_34;
				if (iVar2 == 0 && iVar3 == 0)
				{
					iVar2 = 0;
					iVar3 = 30;
				}
				__LIB_7__::func_22(uParam0->f_107[iVar0 /*113*/].f_1, uVar1, iVar3, iVar2, 0, 0, 1);
			}
			fVar4 = uParam0->f_107[iVar0 /*113*/].f_32.f_35;
			if (fVar4 > 0f)
			{
				__LIB_6__::func_991(uParam0->f_107[iVar0 /*113*/].f_1, fVar4);
				__LIB_7__::func_22(uParam0->f_107[iVar0 /*113*/].f_1, 3, 0, 1, 0, 0, 1);
			}
		}
		iVar0++;
	}
}

void func_80(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	iVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_36;
	if (iVar0 < 0)
	{
		return;
	}
	sVar1 = uParam0->f_107[iParam1 /*113*/].f_32.f_37;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	uVar2 = uParam0->f_107[iParam1 /*113*/].f_5;
	uVar3 = uParam0->f_107[iVar0 /*113*/].f_5;
	iVar4 = uParam0->f_107[iParam1 /*113*/].f_32.f_38;
	__LIB_7__::func_24(sVar1, uVar2, uVar3, iVar4);
}

void func_81(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_31(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return;
	}
	__LIB_7__::func_25(uParam0->f_107[iParam1 /*113*/].f_1, uParam0->f_107[iParam1 /*113*/].f_32.f_39);
}

int func_82(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	iVar0 = -1;
	fVar1 = 250000f;
	uVar2 = __LIB_7__::func_12();
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (__LIB_6__::func_998(uParam0, iVar3))
		{
		}
		else if (__LIB_4__::func_576(uParam0) == 355)
		{
			if (iVar3 == 5)
			{
				if (uParam0->f_3)
				{
					if (!__LIB_1__::func_185(15))
					{
					}
					else if ((bParam1 && !__LIB_5__::func_995(iVar3)) || (!bParam1 && __LIB_5__::func_995(iVar3)))
					{
					}
					else if (!__LIB_1__::func_307(iVar3, 0, 0))
					{
					}
					else if (Global_1360165[iVar3 /*1157*/].f_62 == -289447566)
					{
					}
					else if (__LIB_1__::func_531(iVar3, __LIB_6__::func_955(uParam0->f_7), 1))
					{
					}
					else if (__LIB_0__::func_51(&uVar2, __LIB_0__::func_771(iVar3)))
					{
						iVar4 = __LIB_0__::func_271(iVar3);
						if (ENTITY::IS_ENTITY_DEAD(iVar4))
						{
							iVar0 = iVar3;
						}
						else
						{
							fVar5 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar4, true, false), uParam0->f_29);
							if (bParam2)
							{
								if (fVar5 > 400f)
								{
								}
								else if (!__LIB_0__::func_31(iVar0))
								{
									iVar0 = iVar3;
								}
								else if (fVar5 < fVar1)
								{
									fVar1 = fVar5;
									iVar0 = iVar3;
								}
								iVar3++;
								if (!__LIB_0__::func_31(iVar0))
								{
									return -1;
								}
								if (!__LIB_7__::func_23(iVar0, __LIB_6__::func_955(uParam0->f_7), 0, -1))
								{
									return -1;
								}
								return iVar0;
							}
						}
					}
				}
			}
		}
	}
}

int func_83(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, sParam2, bParam3, false);
	return 1;
}

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0;
	}
	if (__LIB_7__::func_40(uParam0, iParam1, 1f))
	{
		return 1;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iVar0))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (!__LIB_7__::func_61(uParam0, iVar0))
		{
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1984[iVar0], vParam1, vParam4, 2);
		}
		iVar0++;
	}
}

void func_86(var uParam0)
{
	struct<4> Var0;
	int iVar12;
	if (!__LIB_7__::func_61(uParam0, 0))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar12 /*113*/].f_5))
		{
		}
		else
		{
			if (!STREAMING::IS_MODEL_VALID(uParam0->f_107[iVar12 /*113*/].f_3))
			{
				if (__LIB_0__::func_31(uParam0->f_107[iVar12 /*113*/].f_1))
				{
					uParam0->f_107[iVar12 /*113*/].f_3 = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_59(uParam0->f_107[iVar12 /*113*/].f_1));
				}
				else if (__LIB_0__::func_29(uParam0->f_107[iVar12 /*113*/].f_2))
				{
					uParam0->f_107[iVar12 /*113*/].f_3 = __LIB_2__::func_929(uParam0->f_107[iVar12 /*113*/].f_2);
				}
				else if (__LIB_0__::func_31(uParam0->f_107[iVar12 /*113*/].f_7))
				{
					uParam0->f_107[iVar12 /*113*/].f_3 = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_725(uParam0->f_107[iVar12 /*113*/].f_7, 1));
				}
			}
			if (!__LIB_0__::func_86(uParam0->f_107[iVar12 /*113*/].f_96))
			{
			}
			else
			{
				if (uParam0->f_2051[0 /*6*/] == 0)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1984[0], uParam0->f_107[iVar12 /*113*/].f_4, &Var0, true, &(uParam0->f_2051[0 /*6*/].f_1), 2);
				}
				else
				{
					ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1984[0], uParam0->f_107[iVar12 /*113*/].f_4, &Var0, false, 0, 2);
				}
				uParam0->f_107[iVar12 /*113*/].f_96 = { Var0 };
				uParam0->f_107[iVar12 /*113*/].f_99 = Var0.f_3.f_2;
			}
		}
		iVar12++;
	}
}

bool func_87(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	bVar0 = true;
	iVar1 = 1;
	bVar2 = false;
	iVar3 = 0;
	while (iVar3 < uParam0->f_106)
	{
		bVar0 = true;
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar3 /*113*/].f_5))
		{
		}
		else if (uParam0->f_107[iVar3 /*113*/].f_105)
		{
		}
		else if (__LIB_7__::func_51(uParam0, iVar3))
		{
		}
		else if (uParam0->f_107[iVar3 /*113*/].f_8.f_22)
		{
			iVar1 = 0;
		}
		else if (uParam0->f_107[iVar3 /*113*/].f_8.f_14)
		{
			__LIB_7__::func_9(uParam0, iVar3);
			if (uParam0->f_107[iVar3 /*113*/].f_8.f_21)
			{
				iVar1 = 0;
			}
			else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_107[iVar3 /*113*/].f_5, -1))
			{
				if (uParam0->f_107[iVar3 /*113*/].f_1 != 14)
				{
					__LIB_7__::func_5(uParam0, "Create ped check - Ped is in an animscene", 30, iVar3);
					iVar1 = 0;
				}
				else
				{
					vVar4 = { uParam0->f_107[iVar3 /*113*/].f_96 };
					if (__LIB_0__::func_86(vVar4))
					{
						__LIB_7__::func_5(uParam0, "Start location is zero?", 10, iVar3);
					}
					else
					{
						if (!__LIB_7__::func_62(uParam0, iVar3, vVar4))
						{
							iVar1 = 0;
							bVar0 = false;
						}
						if (!__LIB_7__::func_63(uParam0, iVar3, vVar4))
						{
							iVar1 = 0;
							bVar0 = false;
						}
						if (!bVar0)
						{
						}
						else if (!bVar2 && uParam0->f_2251 <= 0)
						{
							if (__LIB_7__::func_64(uParam0, iVar3))
							{
								bVar2 = true;
								iVar1 = 0;
								bVar0 = false;
							}
						}
					}
				}
				iVar3++;
				if (bVar2)
				{
					uParam0->f_2251++;
				}
				else if (uParam0->f_2251 >= 1)
				{
					uParam0->f_2251 = 0;
				}
				return iVar1;
			}
		}
	}
}

void func_88(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (!__LIB_7__::func_61(uParam0, iVar0))
		{
		}
		else
		{
			if (bParam1)
			{
				if (__LIB_0__::func_181())
				{
					__LIB_6__::func_984(Global_35, uParam0->f_1984[iVar0], "JOHN");
				}
				else
				{
					__LIB_6__::func_984(Global_35, uParam0->f_1984[iVar0], "ARTHUR");
				}
			}
			iVar1 = 0;
			while (iVar1 < uParam0->f_106)
			{
				__LIB_6__::func_984(uParam0->f_107[iVar1 /*113*/].f_5, uParam0->f_1984[iVar0], uParam0->f_107[iVar1 /*113*/].f_4);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_89(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1711[iVar0 /*15*/].f_13))
			{
				iVar1 = uParam0->f_1711[iVar0 /*15*/].f_14;
				iVar2 = __LIB_6__::func_952(uParam0, iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar2))
					{
						uParam0->f_1711[iVar0 /*15*/].f_10 = PED::_0x4D0D2E3D8BC000EB(iVar2, uParam0->f_1711[iVar0 /*15*/].f_13, 1);
					}
				}
			}
			if (!uParam0->f_1711[iVar0 /*15*/].f_5 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_1711[iVar0 /*15*/].f_10))
			{
				if (uParam0->f_1711[iVar0 /*15*/].f_8)
				{
					vVar3 = { __LIB_6__::func_972(uParam0, uParam0->f_1711[iVar0 /*15*/].f_1) };
				}
				else
				{
					vVar3 = { uParam0->f_1711[iVar0 /*15*/].f_1 };
				}
				uParam0->f_1711[iVar0 /*15*/].f_10 = OBJECT::CREATE_OBJECT(uParam0->f_1711[iVar0 /*15*/], vVar3, false, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1711[iVar0 /*15*/].f_10))
			{
			}
			else
			{
				iVar6 = 0;
				while (iVar6 < uParam0->f_1984)
				{
					if (!__LIB_7__::func_61(uParam0, iVar6))
					{
					}
					else
					{
						__LIB_6__::func_986(uParam0->f_1711[iVar0 /*15*/].f_10, uParam0->f_1984[iVar6], uParam0->f_1711[iVar0 /*15*/].f_4);
					}
					iVar6++;
				}
			}
		}
		iVar0++;
	}
}

void func_90(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1967[iVar1 /*4*/]))
		{
		}
		else
		{
			iVar0 = uParam0->f_1967[iVar1 /*4*/].f_1;
			if (iVar0 < 0 || iVar0 >= uParam0->f_106)
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_1967[iVar1 /*4*/], 0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_1967[iVar1 /*4*/], true, 0, false, false);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_1967[iVar1 /*4*/], 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				}
				uParam0->f_1967[iVar1 /*4*/].f_3 = WEAPON::_0x6CA484C9A7377E4F(uParam0->f_107[iVar0 /*113*/].f_5, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1967[iVar1 /*4*/].f_3))
				{
				}
				else
				{
					iVar2 = 0;
					while (iVar2 < uParam0->f_1984)
					{
						if (!__LIB_7__::func_61(uParam0, iVar2))
						{
						}
						else
						{
							__LIB_6__::func_986(uParam0->f_1967[iVar1 /*4*/].f_3, uParam0->f_1984[iVar2], uParam0->f_1967[iVar1 /*4*/].f_2);
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_91(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if ((uParam0->f_107[iVar0 /*113*/].f_32.f_60 > 0f && !uParam0->f_107[iVar0 /*113*/].f_32.f_62) && __LIB_7__::func_40(uParam0, uParam0->f_107[iVar0 /*113*/].f_32.f_61, uParam0->f_107[iVar0 /*113*/].f_32.f_60))
		{
			__LIB_7__::func_68(uParam0, iVar0, 0);
			__LIB_0__::func_707(uParam0->f_107[iVar0 /*113*/].f_1, 1, 1, 0);
		}
		iVar0++;
	}
}

bool func_92(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5))
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_107[iVar0 /*113*/].f_5, 256, true);
		}
		iVar0++;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		__LIB_7__::func_5(uParam0, "Shared Idle - Screen is faded out", 1, -1);
		return false;
	}
	if (uParam0->f_2262)
	{
		return true;
	}
	if (__LIB_7__::func_71(uParam0))
	{
		return true;
	}
	return false;
}

void func_93(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_72)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_33)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_33[iVar0]))
			{
				if (iVar0 == 0 && uParam0->f_32 > 0f)
				{
					uParam0->f_33[iVar0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_29, 0f, 0f, 0f, uParam0->f_32, uParam0->f_32, 5f, "Block Content");
				}
			else
			{
				}
				else
				{
					__LIB_7__::func_73(uParam0->f_33[iVar0], 0, 1, 0, 2048, 0, -1082130432 /* Float: -1f */);
					iVar0++;
				}
				if (!uParam0->f_71)
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_36)
					{
						if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_36[iVar1 /*5*/]))
						{
							if (iVar1 == 0 && !uParam0->f_4)
							{
								uParam0->f_36[iVar1 /*5*/] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLCYLINDER"), uParam0->f_29, 0f, 0f, 0f, 3f, 3f, 2f, "Block Peds");
								uParam0->f_36[iVar1 /*5*/].f_2 = 1;
							}
						else
						{
							}
							else
							{
								if (uParam0->f_36[iVar1 /*5*/].f_2)
								{
									POPULATION::_0xB56D41A694E42E86(uParam0->f_36[iVar1 /*5*/], 272352, 0, 0, -1, uParam0->f_36[iVar1 /*5*/].f_1, 16);
								}
								iVar1++;
							}
						}
					}
				}
			}
		}
	}
}

int func_94(var uParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		__LIB_7__::func_76(uParam0, iVar0);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_7))
		{
			if (!__LIB_0__::func_212(uParam0->f_107[iVar0 /*113*/].f_7))
			{
			}
			else
			{
				__LIB_1__::func_463(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_7, 1, 0, 0);
				Jump @294; //curOff = 110
				if (__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
				{
					if (uParam0->f_107[iVar0 /*113*/].f_32.f_55 == 1)
					{
						__LIB_7__::func_68(uParam0, iVar0, 1);
					}
					if (!__LIB_1__::func_22(uParam0->f_107[iVar0 /*113*/].f_1))
					{
					}
					else if (TASK::_0x9FF5F9B24E870748(uParam0->f_107[iVar0 /*113*/].f_5) && !__LIB_6__::func_951(uParam0))
					{
						fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 60f);
						__LIB_0__::func_288(uParam0->f_107[iVar0 /*113*/].f_1, 68, 1);
						__LIB_1__::func_774(uParam0->f_107[iVar0 /*113*/].f_1, 0, 0, 0, fVar1, 1, 1, 0, 0, 0, 0);
					}
					else
					{
						__LIB_1__::func_774(uParam0->f_107[iVar0 /*113*/].f_1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
				}
			}
			iVar0++;
			return 1;
		}
	}
}

bool func_95(var uParam0)
{
	if (__LIB_6__::func_949(uParam0) >= 5)
	{
		return false;
	}
	if (uParam0->f_9)
	{
		return true;
	}
	if (!uParam0->f_3)
	{
		if (!__LIB_7__::func_58(uParam0->f_2))
		{
			return true;
		}
	}
	if (__LIB_7__::func_72(uParam0))
	{
		return true;
	}
	if (uParam0->f_6)
	{
		if (__LIB_7__::func_28() || __LIB_7__::func_29())
		{
			if (__LIB_6__::func_949(uParam0) == 4)
			{
				if (__LIB_7__::func_35(uParam0))
				{
					return true;
				}
				else
				{
					__LIB_7__::func_5(uParam0, "Player just donated - waiting for peds to be offscreen to abort", 30, -1);
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	__LIB_7__::func_41(uParam0, iParam1);
	__LIB_7__::func_80(uParam0, iParam1);
	__LIB_6__::func_999(uParam0, iParam1);
	__LIB_7__::func_0(uParam0, iParam1);
	__LIB_7__::func_68(uParam0, iParam1, 0);
	__LIB_7__::func_81(uParam0, iParam1);
	if ((uParam0->f_1696 || uParam0->f_5) || uParam0->f_1697)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 30000);
		PED::_0x15F4732C357B1D6D(uParam0->f_107[iParam1 /*113*/].f_5, PLAYER::PLAYER_ID(), 9);
		PED::_DISABLE_AMBIENT_LOOK_AT_REQUESTS(uParam0->f_107[iParam1 /*113*/].f_5, iVar0);
	}
	if (uParam0->f_5 || uParam0->f_1698)
	{
		PED::_0x633F83B301C87994(uParam0->f_107[iParam1 /*113*/].f_5, 122);
	}
	switch (uParam0->f_107[iParam1 /*113*/].f_32.f_1)
	{
		case 1:
			return __LIB_7__::func_75(uParam0, iParam1);
		case 2:
			return __LIB_7__::func_1(uParam0, iParam1);
		case 3:
			return __LIB_7__::func_65(uParam0, iParam1);
		case 4:
			return __LIB_7__::func_66(uParam0, iParam1);
		case 5:
			return __LIB_7__::func_2(uParam0, iParam1);
		default:
			break;
	}
	return 1;
}

bool func_97(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_7__::func_30(uParam0, iLocal_16)))
	{
		ENTITY::FREEZE_ENTITY_POSITION(__LIB_7__::func_30(uParam0, iLocal_16), true);
	}
	__LIB_7__::func_33(uParam0, iLocal_15, 1);
	return true;
}

bool func_98(var uParam0)
{
	__LIB_7__::func_83(uParam0, iLocal_14, "BoolLoop", 1);
	return true;
}

int func_99(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_6__::func_988(iParam1))
	{
		return 0;
	}
	if (!__LIB_7__::func_61(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	uParam0->f_2046 = iVar0;
	if (uParam0->f_2015[iParam1])
	{
		if (__LIB_7__::func_37(__LIB_4__::func_576(uParam0)))
		{
		}
		uParam0->f_1696 = 1;
		__LIB_6__::func_989(__LIB_4__::func_576(uParam0));
	}
	else if (__LIB_6__::func_943(__LIB_4__::func_576(uParam0)))
	{
		__LIB_6__::func_944();
	}
	if (uParam0->f_2270)
	{
		uParam0->f_2274 = 0;
		uParam0->f_2275 = 0;
		if ((__LIB_0__::func_113() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "ARTHUR")) || (__LIB_0__::func_181() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "JOHN")))
		{
			uParam0->f_2274 = 1;
		}
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1984)
		{
			if (iVar1 == iParam1)
			{
			}
			else if (__LIB_7__::func_38(uParam0, iVar1) || __LIB_7__::func_84(uParam0, iVar1))
			{
				__LIB_7__::func_39(uParam0, iVar1);
			}
			iVar1++;
		}
	}
	return 1;
}

bool func_100(var uParam0)
{
	__LIB_7__::func_85(uParam0, uParam0->f_23, uParam0->f_26);
	__LIB_7__::func_86(uParam0);
	if (!__LIB_7__::func_69(uParam0))
	{
		return false;
	}
	__LIB_7__::func_6(uParam0, uParam0->f_19);
	return true;
}

bool func_101(var uParam0)
{
	if (uParam0->f_2248)
	{
		return true;
	}
	if (!uParam0->f_71)
	{
		if (!uParam0->f_2249)
		{
			if (!__LIB_7__::func_70(uParam0))
			{
				return false;
			}
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		uParam0->f_2248 = 1;
		return true;
	}
	if (!__LIB_7__::func_87(uParam0))
	{
		return false;
	}
	return true;
}

void func_102(var uParam0, struct<6> Param1)
{
	int iVar0;
	int iVar1;
	uParam0->f_2 = Param1;
	*uParam0 = Param1.f_1;
	uParam0->f_2248 = Param1.f_2;
	uParam0->f_3 = Param1.f_3;
	uParam0->f_1 = __LIB_0__::func_317();
	uParam0->f_29 = { __LIB_5__::func_977(uParam0->f_2) };
	uParam0->f_32 = __LIB_6__::func_945(uParam0->f_2);
	uParam0->f_4 = __LIB_6__::func_946(uParam0->f_2);
	uParam0->f_5 = __LIB_6__::func_947(uParam0->f_2);
	uParam0->f_7 = Param1.f_4;
	uParam0->f_8 = Param1.f_5;
	if (__LIB_6__::func_948(uParam0->f_2))
	{
		uParam0->f_2265 = 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		uParam0->f_107[iVar0 /*113*/].f_1 = -1;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			uParam0->f_107[iVar0 /*113*/].f_32.f_16[iVar1] = -1;
			uParam0->f_107[iVar0 /*113*/].f_8.f_9[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_22 = __LIB_0__::func_23();
	__LIB_1__::func_446(&(uParam0->f_22), 0, 0, 1, 0, 0, 0, 0);
	MISC::_0xDA4D8EB04E8E2928(__LIB_7__::func_43(uParam0->f_2));
}

bool func_103(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_104(var uParam0)
{
	if (uParam0->f_106 <= 0 || uParam0->f_106 > 14)
	{
		return false;
	}
	PED::_0xED9582B3DA8F02B4(uParam0->f_106);
	__LIB_7__::func_93(uParam0);
	__LIB_7__::func_49(uParam0);
	__LIB_6__::func_960(uParam0);
	__LIB_7__::func_50(uParam0);
	__LIB_6__::func_961(uParam0);
	__LIB_6__::func_962(uParam0);
	__LIB_7__::func_6(uParam0, uParam0->f_17);
	return true;
}

bool func_105(var uParam0)
{
	__LIB_7__::func_67(uParam0);
	__LIB_6__::func_937(uParam0);
	__LIB_6__::func_938(uParam0);
	__LIB_6__::func_939(uParam0);
	__LIB_6__::func_940(uParam0);
	__LIB_6__::func_941(uParam0);
	__LIB_6__::func_942(uParam0);
	__LIB_7__::func_15(uParam0);
	__LIB_7__::func_42(uParam0);
	__LIB_7__::func_94(uParam0);
	__LIB_7__::func_16(uParam0);
	if (__LIB_6__::func_943(__LIB_4__::func_576(uParam0)))
	{
		__LIB_6__::func_944();
	}
	return true;
}

bool func_106(var uParam0)
{
	if (__LIB_7__::func_77(uParam0))
	{
		__LIB_6__::func_950(uParam0);
		return true;
	}
	if (__LIB_7__::func_95(uParam0))
	{
		if (__LIB_6__::func_949(uParam0) == 4 && !uParam0->f_2262)
		{
			if (!__LIB_6__::func_957(uParam0) || uParam0->f_16)
			{
				uParam0->f_2262 = 1;
				return false;
			}
		}
		__LIB_7__::func_26(uParam0);
		uParam0->f_9 = 1;
		return true;
	}
	return false;
}

void func_107(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	uParam0->f_107[iParam1 /*113*/].f_8 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_8.f_1 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_8.f_2 = sParam4;
	uParam0->f_107[iParam1 /*113*/].f_8.f_7 = iParam5;
	uParam0->f_107[iParam1 /*113*/].f_8.f_8 = iParam6;
}

void func_108(var uParam0, int iParam1, float fParam2)
{
	if (fParam2 == -2f)
	{
		fParam2 = __LIB_6__::func_995(1101004800 /* Float: 20f */, 1123024896 /* Float: 120f */);
	}
	else if (fParam2 < 0f)
	{
		fParam2 = -1f;
	}
	uParam0->f_107[iParam1 /*113*/].f_32.f_4 = fParam2;
}

bool func_109(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_100(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_110(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_101(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_111(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
			__LIB_0__::func_288(uParam0->f_107[iVar0 /*113*/].f_1, 46, 1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (__LIB_7__::func_51(uParam0, iVar0))
			{
			}
			else if (uParam0->f_2047 >= 0 && uParam0->f_2047 < uParam0->f_1984)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1984[uParam0->f_2047]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1984[uParam0->f_2047], uParam0->f_107[iVar0 /*113*/].f_4))
					{
						__LIB_7__::func_7(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	__LIB_7__::func_27(uParam0);
	__LIB_7__::func_88(uParam0, 1);
	__LIB_6__::func_963(uParam0);
	__LIB_7__::func_8(uParam0);
	__LIB_6__::func_964(uParam0, 1073741824 /* Float: 2f */);
	__LIB_7__::func_52(uParam0);
	__LIB_7__::func_13(uParam0);
	__LIB_7__::func_89(uParam0);
	__LIB_7__::func_90(uParam0);
	__LIB_7__::func_53(uParam0);
	__LIB_6__::func_965(uParam0);
	__LIB_7__::func_78(uParam0);
	if (uParam0->f_15)
	{
		__LIB_7__::func_6(uParam0, uParam0->f_20);
	}
	else
	{
		__LIB_6__::func_966(uParam0);
	}
	if (uParam0->f_2047 >= 0)
	{
		__LIB_7__::func_54(uParam0);
		__LIB_7__::func_99(uParam0, uParam0->f_2047, 1);
	}
	else if (uParam0->f_2248)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				__LIB_7__::func_7(uParam0, iVar0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_107[iVar0 /*113*/].f_5, false, true);
				TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23, uParam0->f_107[iVar0 /*113*/].f_8.f_2, 0, false, true, 0, false, -1f, false);
				PED::_0x2208438012482A1A(uParam0->f_107[iVar0 /*113*/].f_5, false, false);
			}
			iVar0++;
		}
	}
	return true;
}

bool func_112(var uParam0)
{
	int iVar0;
	if (!uParam0->f_2265)
	{
		__LIB_7__::func_55(uParam0->f_2, 1);
	}
	iVar0 = __LIB_7__::func_56(__LIB_4__::func_576(uParam0));
	__LIB_7__::func_18(iVar0);
	Global_1327590.f_19622[iVar0 /*14*/].f_5++;
	Global_1327590.f_19622[iVar0 /*14*/].f_7++;
	if (uParam0->f_5)
	{
		__LIB_6__::func_967();
	}
	__LIB_0__::func_37(&(uParam0->f_10));
	__LIB_7__::func_79(uParam0);
	if (uParam0->f_2048 >= 0)
	{
		__LIB_7__::func_99(uParam0, uParam0->f_2048, 1);
	}
	__LIB_7__::func_34(uParam0);
	MISC::_0xB08C4FA25BC29DB9(__LIB_7__::func_43(uParam0->f_2));
	return true;
}

void func_113(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	if (!__LIB_0__::func_31(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return;
	}
	if (!__LIB_1__::func_22(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return;
	}
	if (bParam3)
	{
		bVar0 = __LIB_7__::func_96(uParam0, iParam1);
	}
	if (bParam2)
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_1 == 1)
		{
			if (uParam0->f_107[iParam1 /*113*/].f_32.f_4 <= 0f)
			{
				uParam0->f_107[iParam1 /*113*/].f_32.f_4 = __LIB_6__::func_995(100f, 140f);
			}
		}
		__LIB_7__::func_76(uParam0, iParam1);
		if (bVar0 && uParam0->f_107[iParam1 /*113*/].f_32.f_4 != 0f)
		{
			__LIB_1__::func_774(uParam0->f_107[iParam1 /*113*/].f_1, 0, 0, 0, uParam0->f_107[iParam1 /*113*/].f_32.f_4, 1, 1, 0, 0, 1, 0);
		}
		else
		{
			__LIB_1__::func_774(uParam0->f_107[iParam1 /*113*/].f_1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
	}
}

bool func_114(var uParam0)
{
	if (__LIB_0__::func_58(uParam0))
	{
		return true;
	}
	if (__LIB_7__::func_106(uParam0))
	{
		return true;
	}
	if (__LIB_6__::func_951(uParam0))
	{
		return true;
	}
	return false;
}

bool func_115(var uParam0)
{
	AUDIO::_0x531A78D6BF27014B("DOG_FOLEY_AMB_CAMP_SOUNDS");
	return true;
}

void func_116(var uParam0, vector3 vParam1, vector3 vParam4)
{
	uParam0->f_23 = { vParam1 };
	uParam0->f_26 = { vParam4 };
}

bool func_117(var uParam0)
{
	__LIB_7__::func_83(uParam0, iLocal_15, "b_breakout", 1);
	return true;
}

bool func_118(var uParam0)
{
	__LIB_7__::func_33(uParam0, iLocal_16, 1);
	__LIB_7__::func_99(uParam0, iLocal_15, 1);
	return true;
}

int func_119(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_32.f_63)
		{
		}
		else if (uParam0->f_107[iVar0 /*113*/].f_32 && !uParam0->f_107[iVar0 /*113*/].f_32.f_48)
		{
		}
		else
		{
			if (!uParam0->f_107[iVar0 /*113*/].f_32)
			{
				if (__LIB_7__::func_74(uParam0, iVar0))
				{
					if (uParam0->f_107[iVar0 /*113*/].f_32.f_48)
					{
						__LIB_0__::func_707(uParam0->f_107[iVar0 /*113*/].f_1, 1, 1, 0);
						__LIB_7__::func_113(uParam0, iVar0, 0, 1);
					}
					else
					{
						__LIB_7__::func_113(uParam0, iVar0, 1, 1);
					}
					uParam0->f_107[iVar0 /*113*/].f_32 = 1;
				}
			}
			if (uParam0->f_107[iVar0 /*113*/].f_32 && uParam0->f_107[iVar0 /*113*/].f_32.f_48)
			{
				if (__LIB_7__::func_11(uParam0, iVar0))
				{
					__LIB_7__::func_113(uParam0, iVar0, 1, 0);
					uParam0->f_107[iVar0 /*113*/].f_32.f_48 = 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_107)
	{
		return -1;
	}
	return uParam0->f_107[iParam1 /*113*/].f_1;
}

Vector3 func_121(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 39:
							return -1316.64f, 2435.93f, 309.05f;
						case 244:
							return -1316.64f, 2435.93f, 309.05f;
						case 295:
							return -1316.64f, 2435.93f, 309.05f;
						case 296:
							return -1316.64f, 2435.93f, 309.05f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 20:
					switch (iParam2)
					{
						case 292:
							return -111.499f, -41.452f, 94.73f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 204:
							return -139.33f, -17.66f, 95.09f;
						case 286:
							return -139.333f, -17.664f, 95.089f;
						default:
							break;
					}
					break;
				case 17:
					switch (iParam2)
					{
						case 257:
							return -140.557f, -22.673f, 95.083f;
						case 259:
							return -140.557f, -22.673f, 95.083f;
						case 266:
							return -137.48f, -19.61f, 95.09f;
						case 504:
							return -137.49f, -19.61f, 95.09f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 9:
					switch (iParam2)
					{
						case 204:
							return 681.71f, -1253.43f, 43.02f;
						default:
							break;
					}
					break;
				case 17:
					switch (iParam2)
					{
						case 257:
							return 676.398f, -1252.692f, 43.005f;
						case 259:
							return 676.398f, -1252.692f, 43.005f;
						case 504:
							return 679.88f, -1255.25f, 43.02f;
						case 2:
							return 676.4f, -1252.69f, 43.01f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 9:
					switch (iParam2)
					{
						case 204:
							return 1881.23f, -1860.95f, 41.81f;
						default:
							break;
					}
					break;
				case 17:
					switch (iParam2)
					{
						case 257:
							return 1876.121f, -1860.593f, 41.789f;
						case 259:
							return 1876.121f, -1860.593f, 41.789f;
						case 504:
							return 1879.62f, -1862.96f, 41.81f;
						case 2:
							return 1876.12f, -1860.59f, 41.79f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 13:
					switch (iParam2)
					{
						case 37:
							return 2345.66f, 1350.94f, 105.12f;
						default:
							break;
					}
					break;
				case 0:
					switch (iParam2)
					{
						case 353:
							return 2360.71f, 1375.69f, 106.04f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 65:
							return 2351.12f, 1344.36f, 104.675f;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 13:
					switch (iParam2)
					{
						case 648:
							return -1640.02f, -1360.09f, 83.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 646:
							return -1661.53f, -1338.87f, 83.48f;
						default:
							break;
					}
					break;
			}
	}
	if (bParam3)
	{
	}
	return 0f, 0f, 0f;
}

struct<4> func_122(vector3 vParam0, float fParam3)
{
	struct<4> Var0;
	Var0 = { vParam0 };
	Var0.f_3 = fParam3;
	return Var0;
}

bool func_123(var uParam0)
{
	if (!__LIB_7__::func_118(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_111(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_124(var uParam0)
{
	if (!__LIB_7__::func_117(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_112(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_125(var uParam0)
{
	if (!__LIB_7__::func_115(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_105(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_126(var uParam0)
{
	if (__LIB_6__::func_943(__LIB_4__::func_576(uParam0)))
	{
		__LIB_3__::func_807();
		__LIB_6__::func_968();
		PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		if (!__LIB_1__::func_533(4))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		}
	}
	__LIB_7__::func_57(uParam0);
	__LIB_7__::func_119(uParam0);
	__LIB_7__::func_91(uParam0);
	if (!__LIB_7__::func_14(uParam0))
	{
		return false;
	}
	if (__LIB_6__::func_948(__LIB_4__::func_576(uParam0)))
	{
		__LIB_7__::func_17(__LIB_4__::func_576(uParam0), uParam0->f_2266);
	}
	return true;
}

void func_127(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_1 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_2 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_3 = sParam4;
	uParam0->f_107[iParam1 /*113*/].f_32.f_15 = iParam5;
	uParam0->f_107[iParam1 /*113*/].f_32.f_9 = iParam6;
	uParam0->f_107[iParam1 /*113*/].f_32.f_11 = iParam8;
	uParam0->f_107[iParam1 /*113*/].f_32.f_12 = iParam9;
	__LIB_7__::func_108(uParam0, iParam1, fParam7);
}

bool func_128(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_126(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

void func_129(var uParam0, int iParam1)
{
	uParam0->f_2262 = iParam1;
}

bool func_130(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_105(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_131(var uParam0)
{
	__LIB_7__::func_33(uParam0, iLocal_17, 1);
	return true;
}

bool func_132(var uParam0)
{
	__LIB_7__::func_83(uParam0, iLocal_16, "BOOL_BASE_LOOP", 1);
	return true;
}

bool func_133(var uParam0)
{
	__LIB_7__::func_83(uParam0, iLocal_14, "Breakout", 1);
	return true;
}

bool func_134(var uParam0)
{
	return STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SMOKE"), false);
}

bool func_135(var uParam0)
{
	if (!__LIB_7__::func_131(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_111(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_136(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_112(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

void func_137(var uParam0, int iParam1, char* sParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		uParam0->f_107[iParam1 /*113*/].f_32.f_22 = MISC::GET_HASH_KEY(sParam2);
	}
}

bool func_138(var uParam0)
{
	__LIB_7__::func_33(uParam0, iLocal_16, 1);
	return true;
}

void func_139(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	uParam0->f_1711[iParam2 /*15*/].f_11 = sParam3;
	uParam0->f_1711[iParam2 /*15*/].f_12 = iParam5;
	uParam0->f_1711[iParam2 /*15*/].f_7 = iParam4;
	if (uParam0->f_1711[iParam2 /*15*/].f_7)
	{
		uParam0->f_107[iParam1 /*113*/].f_32.f_20 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar0] >= 0)
		{
		}
		else
		{
			uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar0] = iParam2;
			return;
		}
		iVar0++;
	}
}

void func_140(int iParam0)
{
	__LIB_6__::func_638(__LIB_6__::func_552(), iParam0);
}

bool func_141(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_111(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

int func_142(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else
		{
			uParam0->f_1711[iVar0 /*15*/] = iParam1;
			uParam0->f_1711[iVar0 /*15*/].f_1 = { vParam2 };
			uParam0->f_1711[iVar0 /*15*/].f_4 = iParam5;
			uParam0->f_1711[iVar0 /*15*/].f_5 = iParam6;
			uParam0->f_1711[iVar0 /*15*/].f_6 = iParam7;
			uParam0->f_1711[iVar0 /*15*/].f_8 = iParam8;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		fParam2 = __LIB_6__::func_973(uParam0, fParam2);
	}
	uParam0->f_107[iParam1 /*113*/].f_32.f_8 = fParam2;
}

void func_144(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_48 = 1;
	uParam0->f_107[iParam1 /*113*/].f_32.f_49 = fParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_50 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_51 = iParam4;
}

void func_145(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2263 = fParam1;
	uParam0->f_2264 = fParam2;
}

void func_146(var uParam0, char* sParam1)
{
	StringCopy(&(uParam0->f_2232), sParam1, 32);
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_32 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_33 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_34 = iParam4;
	StringCopy(&(uParam0->f_107[iParam1 /*113*/].f_32.f_23), sParam5, 32);
	StringCopy(&(uParam0->f_107[iParam1 /*113*/].f_32.f_28), sParam6, 32);
}

bool func_148(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	if (__LIB_7__::func_40(uParam0, iParam1, 1f))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iVar0))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		return true;
	}
	return false;
}

void func_149(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1690 = iParam1;
	uParam0->f_1691 = iParam2;
}

void func_150(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = 0;
		iParam2 = 0;
		while (iParam2 < uParam0->f_106)
		{
			uParam0->f_107[iParam2 /*113*/].f_32.f_60 = fParam3;
			uParam0->f_107[iParam2 /*113*/].f_32.f_61 = iParam1;
			iParam2++;
		}
	}
	else
	{
		uParam0->f_107[iParam2 /*113*/].f_32.f_60 = fParam3;
		uParam0->f_107[iParam2 /*113*/].f_32.f_61 = iParam1;
	}
}

void func_151(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_55 = iParam2;
	if (iParam3 < 0)
	{
		switch (iParam2)
		{
			case 1:
				uParam0->f_107[iParam1 /*113*/].f_32.f_59 = 45;
				break;
			case 2:
				uParam0->f_107[iParam1 /*113*/].f_32.f_59 = 60;
				break;
			case 3:
				uParam0->f_107[iParam1 /*113*/].f_32.f_59 = 120;
				break;
		}
	}
	else
	{
		uParam0->f_107[iParam1 /*113*/].f_32.f_59 = iParam3;
	}
}

bool func_152()
{
	return MISC::IS_BIT_SET(Global_1357549.f_1893, 0);
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_1 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_2 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_3 = iParam4;
	uParam0->f_107[iParam1 /*113*/].f_32.f_15 = iParam5;
	uParam0->f_107[iParam1 /*113*/].f_32.f_9 = iParam6;
	uParam0->f_107[iParam1 /*113*/].f_32.f_11 = iParam8;
	uParam0->f_107[iParam1 /*113*/].f_32.f_12 = iParam9;
	__LIB_7__::func_108(uParam0, iParam1, fParam7);
}

int func_154(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_6__::func_988(iParam1))
	{
		return 0;
	}
	if (!__LIB_7__::func_61(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	uParam0->f_2046 = iVar0;
	if (uParam0->f_2015[iParam1])
	{
		if (__LIB_7__::func_37(__LIB_4__::func_576(uParam0)))
		{
		}
		uParam0->f_1696 = 1;
		__LIB_6__::func_989(__LIB_4__::func_576(uParam0));
	}
	else if (__LIB_6__::func_943(__LIB_4__::func_576(uParam0)))
	{
		__LIB_6__::func_944();
	}
	if (uParam0->f_2270)
	{
		uParam0->f_2274 = 0;
		uParam0->f_2275 = 0;
		if ((__LIB_0__::func_113() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "ARTHUR")) || (__LIB_0__::func_181() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "JOHN")))
		{
			uParam0->f_2274 = 1;
		}
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1984)
		{
			if (iVar1 == iParam1)
			{
			}
			else if (__LIB_7__::func_38(uParam0, iVar1) || __LIB_7__::func_148(uParam0, iVar1))
			{
				__LIB_7__::func_39(uParam0, iVar1);
			}
			iVar1++;
		}
	}
	return 1;
}

bool func_155()
{
	int iVar0;
	int iVar1;
	if (!TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return false;
	}
	iVar0 = TASK::_0x05A0100EA714DB68(Global_35, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return false;
	}
	if (((iVar1 == joaat("P_MUGCOFFEE01X") || iVar1 == joaat("P_BOTTLEJD01X")) || iVar1 == joaat("P_BOTTLEBEER01A")) || iVar1 == joaat("P_BOWL04X_STEW"))
	{
		return false;
	}
	return true;
}

int func_156(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10, int iParam11)
{
	int iVar0;
	vector3 vVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
	}
	vVar1 = { __LIB_6__::func_972(uParam0, vParam1) };
	iVar0 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam11, vVar1, uParam0->f_26 + vParam4, vParam7);
	return iVar0;
}

bool func_157(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
			__LIB_0__::func_288(uParam0->f_107[iVar0 /*113*/].f_1, 46, 1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (__LIB_7__::func_51(uParam0, iVar0))
			{
			}
			else if (uParam0->f_2047 >= 0 && uParam0->f_2047 < uParam0->f_1984)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1984[uParam0->f_2047]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1984[uParam0->f_2047], uParam0->f_107[iVar0 /*113*/].f_4))
					{
						__LIB_7__::func_7(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	__LIB_7__::func_27(uParam0);
	__LIB_7__::func_88(uParam0, 1);
	__LIB_6__::func_963(uParam0);
	__LIB_7__::func_8(uParam0);
	__LIB_6__::func_964(uParam0, 1073741824 /* Float: 2f */);
	__LIB_7__::func_52(uParam0);
	__LIB_7__::func_13(uParam0);
	__LIB_7__::func_89(uParam0);
	__LIB_7__::func_90(uParam0);
	__LIB_7__::func_53(uParam0);
	__LIB_6__::func_965(uParam0);
	__LIB_7__::func_78(uParam0);
	if (uParam0->f_15)
	{
		__LIB_7__::func_6(uParam0, uParam0->f_20);
	}
	else
	{
		__LIB_6__::func_966(uParam0);
	}
	if (uParam0->f_2047 >= 0)
	{
		__LIB_7__::func_54(uParam0);
		__LIB_7__::func_154(uParam0, uParam0->f_2047, 1);
	}
	else if (uParam0->f_2248)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				__LIB_7__::func_7(uParam0, iVar0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_107[iVar0 /*113*/].f_5, false, true);
				TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23, uParam0->f_107[iVar0 /*113*/].f_8.f_2, 0, false, true, 0, false, -1f, false);
				PED::_0x2208438012482A1A(uParam0->f_107[iVar0 /*113*/].f_5, false, false);
			}
			iVar0++;
		}
	}
	return true;
}

bool func_158(var uParam0)
{
	int iVar0;
	if (!uParam0->f_2265)
	{
		__LIB_7__::func_55(uParam0->f_2, 1);
	}
	iVar0 = __LIB_7__::func_56(__LIB_4__::func_576(uParam0));
	__LIB_7__::func_18(iVar0);
	Global_1327590.f_19622[iVar0 /*14*/].f_5++;
	Global_1327590.f_19622[iVar0 /*14*/].f_7++;
	if (uParam0->f_5)
	{
		__LIB_6__::func_967();
	}
	__LIB_0__::func_37(&(uParam0->f_10));
	__LIB_7__::func_79(uParam0);
	if (uParam0->f_2048 >= 0)
	{
		__LIB_7__::func_154(uParam0, uParam0->f_2048, 1);
	}
	__LIB_7__::func_34(uParam0);
	MISC::_0xB08C4FA25BC29DB9(__LIB_7__::func_43(uParam0->f_2));
	return true;
}

int func_159(var uParam0, vector3 vParam1, float fParam4, vector3 vParam5, int iParam8, bool bParam9)
{
	int iVar0;
	if (bParam9)
	{
		vParam1 = { __LIB_6__::func_972(uParam0, vParam1) };
		fParam4 = __LIB_6__::func_973(uParam0, fParam4);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_67[iVar0]))
		{
		}
		else
		{
			uParam0->f_67[iVar0] = VOLUME::_0x0EB78C2B156635B1(iParam8, vParam1, 0f, 0f, fParam4, vParam5);
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_67[iVar0]))
			{
				__LIB_6__::func_985(uParam0, iVar0, 0);
				return iVar0;
			}
			else
			{
				return -1;
			}
		}
		iVar0++;
	}
	return -1;
}

struct<10> func_160(var uParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	float fVar1;
	struct<10> Var2;
	fVar0 = __LIB_6__::func_973(uParam0, (fParam4 + (fParam6 * 90f)));
	fVar1 = __LIB_6__::func_973(uParam0, (fParam4 - (fParam7 * 90f)));
	Var2 = { __LIB_6__::func_972(uParam0, vParam1) };
	Var2.f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, fVar0, 0f, fParam5, 0f) };
	Var2.f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, fVar1, 0f, fParam5, 0f) };
	Var2.f_9 = fParam5;
	return Var2;
}

bool func_161(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (__LIB_7__::func_37(iParam0))
	{
		return false;
	}
	if (bParam1 && !__LIB_6__::func_943(iParam0))
	{
		if (PED::_0x94132D7C8D3575C4(Global_35))
		{
			return false;
		}
		if (AUDIO::_0x54B187F111D9C6F8(Global_35, 1))
		{
			return false;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	if (PED::_0x6FB76442469ABD68(Global_35) >= 0.5f)
	{
		return false;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		return false;
	}
	if (__LIB_1__::func_533(1048576))
	{
		return false;
	}
	if (__LIB_7__::func_155())
	{
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		iVar1 = iVar0;
		if ((iVar1 != joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC") && iVar1 != joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE")) && iVar1 != joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC"))
		{
			return false;
		}
	}
	if (__LIB_7__::func_152())
	{
		return false;
	}
	if (Global_1359489.f_361.f_59)
	{
		return false;
	}
	return true;
}

bool func_162(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_158(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_163(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, bool bParam12)
{
	if (bParam11)
	{
		if (!__LIB_7__::func_161(__LIB_4__::func_576(uParam0), 1))
		{
			return false;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Param1, true) > Param1.f_9)
	{
		return false;
	}
	if (!__LIB_0__::func_195(Param1, Param1.f_6, Global_36))
	{
		return false;
	}
	if (__LIB_0__::func_195(Param1, Param1.f_3, Global_36))
	{
		return false;
	}
	if (bParam12)
	{
		if (MISC::ABSF((Param1.f_2 - Global_36.f_2)) > 2f)
		{
			return false;
		}
	}
	return true;
}

bool func_164(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_157(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

int func_165(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = "HORSE";
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (uParam0->f_107[iVar0 /*113*/])
		{
		}
		else
		{
			uParam0->f_107[iVar0 /*113*/] = 1;
			uParam0->f_107[iVar0 /*113*/].f_7 = iParam1;
			uParam0->f_107[iVar0 /*113*/].f_4 = sParam2;
			uParam0->f_107[iVar0 /*113*/].f_6 = iParam3;
			uParam0->f_106++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_166(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10, int iParam11)
{
	var uVar0;
	vector3 vVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
	}
	vVar1 = { __LIB_6__::func_972(uParam0, vParam1) };
	uVar0 = VOLUME::_0x0EB78C2B156635B1(iParam11, vVar1, uParam0->f_26 + vParam4, vParam7);
	return uVar0;
}

void func_167(var uParam0)
{
	uParam0->f_71 = 1;
}

void func_168(var uParam0)
{
	uParam0->f_72 = 1;
}

bool func_169(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false))
	{
		return false;
	}
	return true;
}

struct<4> func_170(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 13:
					switch (iParam2)
					{
						case 25:
							return __LIB_7__::func_122(-118.03f, -18.2f, 95.02f, -3.346f);
						case 40:
							return __LIB_7__::func_122(-149.27f, -15.95f, 95.81f, -131.956f);
						case 157:
							return __LIB_7__::func_122(-122.51f, -9.14f, 95.15f, 146.424f);
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 58:
							return __LIB_7__::func_122(-125.07f, -5.97f, 95.05f, -89.324f);
						default:
							break;
					}
					break;
				case 0:
					switch (iParam2)
					{
						case 92:
							return __LIB_7__::func_122(-106.99f, -27.31f, 94.84f, 74.634f);
						case 540:
							return __LIB_7__::func_122(-135.134f, -32.453f, 95.083f, 56.987f);
						case 546:
							return __LIB_7__::func_122(-135.134f, -32.453f, 95.083f, 56.987f);
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 142:
							return __LIB_7__::func_122(-153.06f, -37.09f, 94.23f, 128.151f);
						case 164:
							return __LIB_7__::func_122(-113.14f, -78.17f, 88.38f, -170.967f);
						case 477:
							return __LIB_7__::func_122(-130.61f, -50.59f, 94.06f, 128.312f);
						default:
							break;
					}
					break;
				case 14:
					switch (iParam2)
					{
						case 27:
							return __LIB_7__::func_122(-109.14f, -26.35f, 94.76f, -146.542f);
						case 40:
							return __LIB_7__::func_122(-149.2f, -19.18f, 95.19f, 102.112f);
						case 157:
							return __LIB_7__::func_122(-148.64f, -1.18f, 93.44f, 38.258f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 218:
							return __LIB_7__::func_122(-147.02f, -35.96f, 94.47f, 73.9f);
						case 443:
							return __LIB_7__::func_122(-112.39f, -43.74f, 94.73f, 34.92427f);
						default:
							break;
					}
					break;
				case 20:
					switch (iParam2)
					{
						case 173:
							return __LIB_7__::func_122(-151.78f, -22.46f, 95.09f, 81.009f);
						case 290:
							return __LIB_7__::func_122(-130.61f, -50.59f, 94.06f, 128.312f);
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 201:
							return __LIB_7__::func_122(-148.87f, -51.6f, 94.34f, 130.64f);
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 216:
							return __LIB_7__::func_122(-118.76f, -26.04f, 94.8f, -141.14f);
						case 221:
							return __LIB_7__::func_122(-120.27f, -28.48f, 94.8f, -93.81f);
						default:
							break;
					}
					break;
				case 17:
					switch (iParam2)
					{
						case 56:
							return __LIB_7__::func_122(-171.278f, -19.139f, 94.684f, 160.447f);
						case 487:
							return __LIB_7__::func_122(-141.333f, -39.88f, 95.004f, -140.963f);
						default:
							break;
					}
					break;
				case 11:
					switch (iParam2)
					{
						case 188:
							return __LIB_7__::func_122(-155.278f, -38.1596f, 94.635f, -87.522f);
						default:
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 142:
							return __LIB_7__::func_122(-106.99f, -27.31f, 94.84f, 74.634f);
						case 290:
							return __LIB_7__::func_122(-106.99f, -27.31f, 94.84f, 74.634f);
						case 487:
							return __LIB_7__::func_122(-139.311f, -28.879f, 95.587f, -52.583f);
						default:
							break;
					}
					break;
				case 18:
					switch (iParam2)
					{
						case 310:
							return __LIB_7__::func_122(-172.36f, -25.27f, 95.38f, 93.351f);
						default:
							break;
					}
					break;
				case 19:
					switch (iParam2)
					{
						case 170:
							return __LIB_7__::func_122(-117.78f, -18.196f, 95.015f, 9.737f);
						case 254:
							return __LIB_7__::func_122(-164.38f, -18.32f, 95.37f, 92.539f);
						case 175:
						case 177:
							return __LIB_7__::func_122(-98.99f, -39.14f, 95.28f, 112.713f);
						default:
							break;
					}
					break;
				case 21:
					switch (iParam2)
					{
						case 316:
							return __LIB_7__::func_122(-128.02f, -36.59f, 94.82f, -110.343f);
						case 615:
							return __LIB_7__::func_122(-150.965f, -61.974f, 89.353f, 165.978f);
						case 616:
							return __LIB_7__::func_122(-150.965f, -61.974f, 89.353f, 165.978f);
						case 457:
							return __LIB_7__::func_122(-139.33f, -57.6f, 93.86f, 160.544f);
						default:
							break;
					}
					break;
				case 22:
					switch (iParam2)
					{
						case 185:
							return __LIB_7__::func_122(-106.99f, -27.31f, 94.84f, 74.634f);
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 336:
							return __LIB_7__::func_122(-122.82f, -6.313f, 94.991f, -48.9f);
						case 269:
							return __LIB_7__::func_122(-159.93f, -42.05f, 93.76f, 98.147f);
						case 424:
							return __LIB_7__::func_122(-172.11f, -13.51f, 93.45f, 34.837f);
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 13:
					switch (iParam2)
					{
						case 25:
							return __LIB_7__::func_122(654.94f, -1256.64f, 42.67f, 129.742f);
						case 38:
							return __LIB_7__::func_122(677.55f, -1279.71f, 43.41f, -142.525f);
						default:
							break;
					}
					break;
				case 12:
					switch (iParam2)
					{
						case 5:
							return __LIB_7__::func_122(645.82f, -1236.07f, 42.32f, 65f);
						default:
							break;
					}
					break;
				case 0:
					switch (iParam2)
					{
						case 92:
							return __LIB_7__::func_122(703.9f, -1237.73f, 44.18f, 51.01f);
						case 76:
							return __LIB_7__::func_122(654.59f, -1282.91f, 41.32f, 132.898f);
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 142:
							return __LIB_7__::func_122(649.91f, -1261.03f, 42.65f, 92.832f);
						case 477:
							return __LIB_7__::func_122(670.22f, -1276.68f, 43.29f, 113.238f);
						default:
							break;
					}
					break;
				case 14:
					switch (iParam2)
					{
						case 27:
							return __LIB_7__::func_122(650.62f, -1273.69f, 41.78f, 99.149f);
						case 38:
							return __LIB_7__::func_122(684.49f, -1284.38f, 42.77f, -158.065f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 218:
							return __LIB_7__::func_122(649.33f, -1276.62f, 41.36f, 124.1f);
						case 289:
							return __LIB_7__::func_122(682.8f, -1253.94f, 43.04f, 107.447f);
						default:
							break;
					}
					break;
				case 20:
					switch (iParam2)
					{
						case 170:
							return __LIB_7__::func_122(688.207f, -1256.28f, 43.5197f, -67.9f);
						case 173:
							return __LIB_7__::func_122(672.82f, -1271.79f, 42.98f, -173.039f);
						case 290:
							return __LIB_7__::func_122(669.9f, -1213.05f, 45.02f, 121.099f);
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 201:
							return __LIB_7__::func_122(631.93f, -1228.61f, 41.7f, 127.978f);
						case 217:
							return __LIB_7__::func_122(717.11f, -1217.31f, 44.05f, -33.324f);
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 214:
							return __LIB_7__::func_122(618.66f, -1257.75f, 40.78f, 126.53f);
						case 221:
							return __LIB_7__::func_122(663.51f, -1273.61f, 42.97f, 141.02f);
						default:
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 142:
							return __LIB_7__::func_122(670.22f, -1276.68f, 43.29f, 113.238f);
						case 288:
							return __LIB_7__::func_122(691.36f, -1214.86f, 44.23f, -22.149f);
						case 290:
							return __LIB_7__::func_122(703.9f, -1237.73f, 44.18f, 51.01f);
						default:
							break;
					}
					break;
				case 18:
					switch (iParam2)
					{
						case 310:
							return __LIB_7__::func_122(676.125f, -1287.68f, 42.938f, 167.717f);
						default:
							break;
					}
					break;
				case 19:
					switch (iParam2)
					{
						case 170:
							return __LIB_7__::func_122(689.1f, -1252.44f, 43.439f, -75.102f);
						case 254:
							return __LIB_7__::func_122(628.05f, -1241.85f, 41.16f, 130.067f);
						case 175:
						case 177:
							return __LIB_7__::func_122(640.72f, -1254.7f, 41.92f, 110.088f);
						default:
							break;
					}
					break;
				case 21:
					switch (iParam2)
					{
						case 316:
							return __LIB_7__::func_122(674.46f, -1237.18f, 43.16f, 76.42f);
						case 615:
							return __LIB_7__::func_122(675.37f, -1287.5f, 42.91f, 165.617f);
						case 616:
							return __LIB_7__::func_122(675.37f, -1287.5f, 42.91f, 165.617f);
						case 457:
							return __LIB_7__::func_122(690.72f, -1258.74f, 43.79f, 56.182f);
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 336:
							return __LIB_7__::func_122(677.104f, -124.35f, 44.601f, 51.3f);
						case 269:
							return __LIB_7__::func_122(653.23f, -1235.68f, 43.02f, 86.32f);
						case 424:
							return __LIB_7__::func_122(705.43f, -1245.3f, 44.09f, -65.409f);
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 13:
					switch (iParam2)
					{
						case 41:
							return __LIB_7__::func_122(1899.95f, -1844.97f, 41.32f, 180f);
						default:
							break;
					}
					break;
				case 12:
					switch (iParam2)
					{
						case 5:
							return __LIB_7__::func_122(1863.569f, -1849.036f, 41.959f, 50f);
						default:
							break;
					}
					break;
				case 0:
					switch (iParam2)
					{
						case 92:
							return __LIB_7__::func_122(1905.95f, -1876.79f, 40.88f, -179.632f);
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 485:
							return __LIB_7__::func_122(1912.31f, -1888.57f, 40.62f, -148.285f);
						case 477:
							return __LIB_7__::func_122(1866.18f, -1888.59f, 41.39f, 147.384f);
						default:
							break;
					}
					break;
				case 14:
					switch (iParam2)
					{
						case 155:
							return __LIB_7__::func_122(1855.495f, -1893.908f, 40.506f, 116.1f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 218:
							return __LIB_7__::func_122(1869.36f, -1852.01f, 41.95f, 42.24f);
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 272:
							return __LIB_7__::func_122(1905.95f, -1876.79f, 40.88f, -179.632f);
						default:
							break;
					}
					break;
				case 20:
					switch (iParam2)
					{
						case 173:
							return __LIB_7__::func_122(1885.29f, -1894.4f, 41.68f, 50.657f);
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 201:
							return __LIB_7__::func_122(1854f, -1888.26f, 40.55f, 109.724f);
						default:
							break;
					}
					break;
				case 15:
					switch (iParam2)
					{
						case 248:
							return __LIB_7__::func_122(1860.14f, -1837.88f, 41.5f, 41.498f);
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 221:
							return __LIB_7__::func_122(1868.95f, -1888.11f, 41.58f, 146.42f);
						default:
							break;
					}
					break;
				case 10:
					switch (iParam2)
					{
						case 43:
							return __LIB_7__::func_122(1866.18f, -1888.59f, 41.39f, 147.384f);
						default:
							break;
					}
					break;
				case 18:
					switch (iParam2)
					{
						case 310:
							return __LIB_7__::func_122(1877.91f, -1827.77f, 41.61f, -51.932f);
						default:
							break;
					}
					break;
				case 19:
					switch (iParam2)
					{
						case 175:
						case 254:
							return __LIB_7__::func_122(1905.239f, -1871.898f, 41.551f, -131.277f);
						case 268:
							return __LIB_7__::func_122(1860.14f, -1837.88f, 41.5f, 41.498f);
						default:
							break;
					}
					break;
				case 21:
					switch (iParam2)
					{
						case 316:
							return __LIB_7__::func_122(1869.53f, -1875.52f, 41.89f, -83.15f);
						case 615:
							return __LIB_7__::func_122(1909.769f, -1910.183f, 40.754f, -162.028f);
						case 616:
							return __LIB_7__::func_122(1909.769f, -1910.183f, 40.754f, -162.028f);
						case 457:
							return __LIB_7__::func_122(1877.12f, -1888.84f, 41.7f, -36.481f);
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 336:
							return __LIB_7__::func_122(1878.54f, -1894.45f, 41.817f, -137.2f);
						case 269:
							return __LIB_7__::func_122(1845.27f, -1872.56f, 41.42f, 82.963f);
						case 424:
							return __LIB_7__::func_122(1908.81f, -1826.66f, 41.02f, -48.921f);
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 17:
					switch (iParam2)
					{
						case 302:
							return __LIB_7__::func_122(2254.207f, -758.049f, 41.762f, -28.48f);
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 84:
							return __LIB_7__::func_122(2356.37f, 1379.24f, 105.37f, 12.593f);
						case 123:
							return __LIB_7__::func_122(2360.71f, 1375.69f, 106.04f, 85.031f);
						case 124:
							return __LIB_7__::func_122(2357.7f, 1396.42f, 104.98f, 42.63f);
						case 226:
							return __LIB_7__::func_122(2348.12f, 1347.56f, 105.02f, 159.24f);
						default:
							break;
					}
					break;
				case 14:
					switch (iParam2)
					{
						case 156:
							return __LIB_7__::func_122(2329.663f, 1347.464f, 104.5794f, 155.2611f);
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 37:
							return __LIB_7__::func_122(2326.06f, 1344.5f, 104.21f, 112.313f);
						case 156:
							return __LIB_7__::func_122(2330.225f, 1345.275f, 104.7174f, 21.2991f);
						default:
							break;
					}
					break;
				case 20:
					switch (iParam2)
					{
						case 173:
							return __LIB_7__::func_122(2352.16f, 1343.49f, 104.56f, 162.478f);
						case 182:
							return __LIB_7__::func_122(2337f, 1367.75f, 105.13f, 60.064f);
						case 306:
							return __LIB_7__::func_122(2352.16f, 1343.49f, 104.56f, 162.478f);
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 226:
							return __LIB_7__::func_122(2378.44f, 1349.21f, 105.13f, -113.4f);
						default:
							break;
					}
					break;
				case 18:
					switch (iParam2)
					{
						case 303:
							return __LIB_7__::func_122(2366.35f, 1366.12f, 105.27f, 110.44f);
						default:
							break;
					}
					break;
				case 19:
					switch (iParam2)
					{
						case 254:
							return __LIB_7__::func_122(2370.91f, 1355.93f, 105.66f, 126.211f);
						case 330:
							return __LIB_7__::func_122(1860.14f, -1837.88f, 41.5f, 41.498f);
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 340:
							return __LIB_7__::func_122(2331.62f, 1353.21f, 104.12f, 58.443f);
						case 424:
							return __LIB_7__::func_122(2334.45f, 1359.9f, 105.26f, 99.018f);
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 7:
					switch (iParam2)
					{
						case 655:
							return __LIB_7__::func_122(-1540.54f, -1453.27f, 93.63f, -70.618f);
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 669:
							return __LIB_7__::func_122(-1603.036f, -1408.744f, 80.9423f, 69.6409f);
						default:
							break;
					}
					break;
			}
			break;
	}
	if (bParam3)
	{
	}
	return __LIB_7__::func_122(0f, 0f, 0f, 0f);
}

void func_171(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	switch (iParam2)
	{
		case 4:
			uParam0->f_107[iParam1 /*113*/].f_32.f_5 = { __LIB_7__::func_121(__LIB_0__::func_78(uParam0), __LIB_7__::func_120(uParam0, iParam1), __LIB_4__::func_576(uParam0), 1) };
			break;
		default:
			Var0 = { __LIB_7__::func_170(__LIB_0__::func_78(uParam0), __LIB_7__::func_120(uParam0, iParam1), __LIB_4__::func_576(uParam0), 1) };
			uParam0->f_107[iParam1 /*113*/].f_32.f_5 = { Var0 };
			uParam0->f_107[iParam1 /*113*/].f_32.f_8 = Var0.f_3;
			break;
	}
	uParam0->f_107[iParam1 /*113*/].f_32.f_10 = iParam3;
}

void func_172(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_63 = iParam2;
}

int func_173(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_6__::func_988(iParam1))
	{
		return 0;
	}
	if (!__LIB_7__::func_61(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	uParam0->f_2046 = iVar0;
	if (uParam0->f_2015[iParam1])
	{
		if (__LIB_7__::func_37(__LIB_4__::func_576(uParam0)))
		{
		}
		uParam0->f_1696 = 1;
		__LIB_6__::func_989(__LIB_4__::func_576(uParam0));
	}
	else if (__LIB_6__::func_943(__LIB_4__::func_576(uParam0)))
	{
		__LIB_6__::func_944();
	}
	if (uParam0->f_2270)
	{
		uParam0->f_2274 = 0;
		uParam0->f_2275 = 0;
		if ((__LIB_0__::func_113() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "ARTHUR")) || (__LIB_0__::func_181() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "JOHN")))
		{
			uParam0->f_2274 = 1;
		}
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1984)
		{
			if (iVar1 == iParam1)
			{
			}
			else if (__LIB_7__::func_169(uParam0, iVar1) || __LIB_7__::func_148(uParam0, iVar1))
			{
				__LIB_7__::func_39(uParam0, iVar1);
			}
			iVar1++;
		}
	}
	return 1;
}

void func_174(bool bParam0)
{
	int iVar0;
	Global_40.f_7748.f_3 = 1;
	iVar0 = __LIB_0__::func_23();
	__LIB_1__::func_446(&iVar0, 0, 0, 0, __LIB_0__::func_55(bParam0, 5, 2), 0, 0, 0);
	if (__LIB_1__::func_110(iVar0, Global_40.f_7748, 1))
	{
		Global_40.f_7748 = iVar0;
	}
}

bool func_175(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_LOADED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

void func_176(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else
		{
			if (uParam0->f_107[iVar0 /*113*/].f_32.f_32 > -1)
			{
				if (uParam0->f_107[iVar0 /*113*/].f_32.f_32 == 0)
				{
					if (__LIB_0__::func_78(uParam0) == 0)
					{
						uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 5;
						if (uParam0->f_107[iVar0 /*113*/].f_1 == 10)
						{
							uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 7;
						}
					}
					else if (__LIB_0__::func_78(uParam0) == 6)
					{
						if (uParam0->f_107[iVar0 /*113*/].f_1 != 24 && uParam0->f_107[iVar0 /*113*/].f_1 != 25)
						{
							uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 6;
						}
					}
				}
				iVar1 = uParam0->f_107[iVar0 /*113*/].f_32.f_32;
				iVar2 = uParam0->f_107[iVar0 /*113*/].f_32.f_33;
				iVar3 = uParam0->f_107[iVar0 /*113*/].f_32.f_34;
				if (iVar2 == 0 && iVar3 == 0)
				{
					iVar2 = 0;
					iVar3 = 30;
				}
				__LIB_7__::func_22(uParam0->f_107[iVar0 /*113*/].f_1, iVar1, iVar3, iVar2, 0, 0, 1);
			}
			fVar4 = uParam0->f_107[iVar0 /*113*/].f_32.f_35;
			if (fVar4 > 0f)
			{
				__LIB_6__::func_991(uParam0->f_107[iVar0 /*113*/].f_1, fVar4);
				__LIB_7__::func_22(uParam0->f_107[iVar0 /*113*/].f_1, 3, 0, 1, 0, 0, 1);
			}
		}
		iVar0++;
	}
}

bool func_177(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
			__LIB_0__::func_288(uParam0->f_107[iVar0 /*113*/].f_1, 46, 1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (__LIB_7__::func_51(uParam0, iVar0))
			{
			}
			else if (uParam0->f_2047 >= 0 && uParam0->f_2047 < uParam0->f_1984)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1984[uParam0->f_2047]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1984[uParam0->f_2047], uParam0->f_107[iVar0 /*113*/].f_4))
					{
						__LIB_7__::func_7(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	__LIB_7__::func_27(uParam0);
	__LIB_7__::func_88(uParam0, 1);
	__LIB_6__::func_963(uParam0);
	__LIB_7__::func_8(uParam0);
	__LIB_6__::func_964(uParam0, 1073741824 /* Float: 2f */);
	__LIB_7__::func_52(uParam0);
	__LIB_7__::func_13(uParam0);
	__LIB_7__::func_89(uParam0);
	__LIB_7__::func_90(uParam0);
	__LIB_7__::func_53(uParam0);
	__LIB_6__::func_965(uParam0);
	__LIB_7__::func_78(uParam0);
	if (uParam0->f_15)
	{
		__LIB_7__::func_6(uParam0, uParam0->f_20);
	}
	else
	{
		__LIB_6__::func_966(uParam0);
	}
	if (uParam0->f_2047 >= 0)
	{
		__LIB_7__::func_54(uParam0);
		__LIB_7__::func_173(uParam0, uParam0->f_2047, 1);
	}
	else if (uParam0->f_2248)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				__LIB_7__::func_7(uParam0, iVar0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_107[iVar0 /*113*/].f_5, false, true);
				TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23, uParam0->f_107[iVar0 /*113*/].f_8.f_2, 0, false, true, 0, false, -1f, false);
				PED::_0x2208438012482A1A(uParam0->f_107[iVar0 /*113*/].f_5, false, false);
			}
			iVar0++;
		}
	}
	return true;
}

void func_178(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_3 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
}

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_7 = iParam1;
	uParam0->f_8 = iParam2;
	uParam0->f_9 = iParam3;
	uParam0->f_10 = iParam4;
	uParam0->f_12 = iParam5;
	uParam0->f_13 = iParam6;
	uParam0->f_14 = iParam7;
	uParam0->f_11 = iParam5;
}

void func_181(var uParam0, char* sParam1)
{
	uParam0->f_17 = sParam1;
}

void func_182(var uParam0, char* sParam1)
{
	uParam0->f_18 = sParam1;
}

bool func_183(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	iVar0 = uParam0->f_2051[iParam1 /*6*/];
	if (iVar0 < 0)
	{
		return false;
	}
	Var1 = { uParam0->f_2051[iParam1 /*6*/].f_1 };
	iVar5 = uParam0->f_1984[iVar0];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar5))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar5, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iVar5, &Var1))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iVar5, &Var1))
	{
		return false;
	}
	uParam0->f_2050 = iParam1;
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar5, &Var1, bParam2);
	return true;
}

var func_184()
{
	int iVar0;
	var uVar1;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &uVar1, 1, 0))
	{
		return uVar1;
	}
	if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &uVar1) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return uVar1;
}

int func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1984)
	{
		return -1;
	}
	return uParam0->f_1984[iParam1];
}

bool func_186(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0))
		{
			if (!HUD::_0x3CF96E16265B7DC8(sParam0))
			{
				HUD::_TEXT_DATABASE_REQUEST(sParam0);
			}
			return false;
		}
	}
	return true;
}

void func_187(var uParam0)
{
	__LIB_6__::func_989(uParam0->f_2);
}

void func_188(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_11 = iParam1;
	uParam0->f_14 = iParam2;
}

int func_189(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	iVar0 = uParam0->f_2051[iParam1 /*6*/];
	if (iVar0 < 0)
	{
		return 0;
	}
	Var1 = { uParam0->f_2051[iParam1 /*6*/].f_1 };
	iVar5 = uParam0->f_1984[iVar0];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar5))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar5, true, false))
	{
		return 0;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iVar5, &Var1))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iVar5, &Var1))
	{
		return 0;
	}
	ANIMSCENE::_0xAE6ADA8FE7E84ACC(iVar5, &Var1);
	return 1;
}

bool func_190(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_6__::func_988(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0) || ANIMSCENE::_IS_ANIM_SCENE_LOADING(iVar0, true))
	{
		return false;
	}
	ANIMSCENE::RESET_ANIM_SCENE(iVar0, 0);
	ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
	return true;
}

void func_191(var uParam0, var uParam1)
{
	if (HUD::_TEXT_DATABASE_HAS_LOADED("CAMC5AU"))
	{
		HUD::_TEXT_DATABASE_DELETE("CAMC5AU");
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED("CPGENAU"))
	{
		HUD::_TEXT_DATABASE_DELETE("CPGENAU");
	}
	OBJECT::_0xCAAF2BCCFEF37F77(__LIB_7__::func_30(uParam0, uParam1->f_1), 4);
}

bool func_192(var uParam0)
{
	if (__LIB_0__::func_264(&(uParam0->f_23)) > 13f)
	{
		return true;
	}
	return false;
}

bool func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	Var7 = { __LIB_0__::func_38(joaat("KILLS"), joaat("ANIMAL")) };
	STATS::STAT_ID_GET_INT(&Var7, &iVar0);
	Var7 = { __LIB_0__::func_14(joaat("ANIMALS_LONG_LOOTED")) };
	STATS::STAT_ID_GET_INT(&Var7, &iVar1);
	Var7 = joaat("SKINNED");
	Var7.f_1 = joaat("SMALL_ANIMALS");
	STATS::STAT_ID_GET_INT(&Var7, &iVar2);
	Var7.f_1 = joaat("MEDIUM_ANIMALS");
	STATS::STAT_ID_GET_INT(&Var7, &iVar3);
	Var7.f_1 = joaat("LARGE_ANIMALS");
	STATS::STAT_ID_GET_INT(&Var7, &iVar4);
	iVar5 = ((iVar2 + iVar3) + iVar4);
	if (iVar1 > iVar5)
	{
		iVar6 = (iVar0 - iVar5);
	}
	else
	{
		iVar6 = (iVar0 - iVar1);
	}
	if (iVar6 >= iParam0)
	{
		return true;
	}
	return false;
}

bool func_194(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_647(joaat("NUM_INNOCENT_PEDS_PUNCHED"));
	if (iVar0 == 0)
	{
		return false;
	}
	return iVar0 >= iParam0;
}

bool func_195(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_647(joaat("NUM_PEDS_ANTAGONIZED"));
	if (iVar0 == 0)
	{
		return false;
	}
	return iVar0 >= iParam0;
}

int func_196(var uParam0)
{
	if (!__LIB_7__::func_175(uParam0->f_18))
	{
	}
	return 1;
}

int func_197(var uParam0)
{
	if (!__LIB_7__::func_175(uParam0->f_17))
	{
	}
	return 1;
}

int func_198()
{
	if (!__LIB_7__::func_175("CAMC5_RETURN"))
	{
	}
	return 1;
}

void func_199(var uParam0)
{
	__LIB_1__::func_148(&(uParam0->f_23));
}

var func_200(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_2051)
	{
		return "";
	}
	return __LIB_0__::func_67(uParam0->f_2051[iParam1 /*6*/].f_1);
}

bool func_201(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	iVar0 = uParam0->f_2051[iParam1 /*6*/];
	if (iVar0 < 0)
	{
		return false;
	}
	Var1 = { uParam0->f_2051[iParam1 /*6*/].f_1 };
	iVar5 = uParam0->f_1984[iVar0];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar5))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar5, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iVar5, &Var1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iVar5, &Var1))
	{
		return false;
	}
	if (ANIMSCENE::_0x9E036D5204FFBBC8(iVar5, &Var1) > 2)
	{
		__LIB_7__::func_5(uParam0, "Audio load stress is too high", 20, -1);
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iVar5, &Var1);
	return true;
}

void func_202(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (!__LIB_0__::func_139(*iParam0))
	{
		*iParam0 = __LIB_2__::func_403("GREET_ACC", joaat("INPUT_INTERACT_LOCKON_POS"), __LIB_6__::func_952(uParam2, *uParam3), 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_4__::func_12(*iParam0, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(__LIB_6__::func_952(uParam2, *uParam3)), 0, 1);
	}
	if (!__LIB_0__::func_139(*iParam1))
	{
		*iParam1 = __LIB_2__::func_403("GREET_REJ", joaat("INPUT_INTERACT_LOCKON_NEG"), __LIB_6__::func_952(uParam2, *uParam3), 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_4__::func_12(*iParam1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(__LIB_6__::func_952(uParam2, *uParam3)), 0, 1);
	}
}

void func_203(var uParam0)
{
	__LIB_0__::func_268(&(uParam0->f_23), 0f);
	__LIB_2__::func_113(&(uParam0->f_23));
}

bool func_204(var uParam0)
{
	int iVar0;
	if (!uParam0->f_2265)
	{
		__LIB_7__::func_55(uParam0->f_2, 1);
	}
	iVar0 = __LIB_7__::func_56(__LIB_4__::func_576(uParam0));
	__LIB_7__::func_18(iVar0);
	Global_1327590.f_19622[iVar0 /*14*/].f_5++;
	Global_1327590.f_19622[iVar0 /*14*/].f_7++;
	if (uParam0->f_5)
	{
		__LIB_6__::func_967();
	}
	__LIB_0__::func_37(&(uParam0->f_10));
	__LIB_7__::func_176(uParam0);
	if (uParam0->f_2048 >= 0)
	{
		__LIB_7__::func_173(uParam0, uParam0->f_2048, 1);
	}
	__LIB_7__::func_34(uParam0);
	MISC::_0xB08C4FA25BC29DB9(__LIB_7__::func_43(uParam0->f_2));
	return true;
}

void func_205()
{
	if (CAM::_0x927B810E43E99932(&Local_63) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 72439833))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_63);
		bLocal_59 = false;
	}
}

void func_206(int iParam0)
{
	iLocal_50 = iParam0;
}

void func_207()
{
	TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_95, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, true, false, 0, false, -1f, false);
}

void func_208()
{
	if (!bLocal_59)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (!CAM::_0x927B810E43E99932(&Local_63))
			{
				CAM::_0xB8B207C34285E978(&Local_63);
			}
			if (CAM::_0x927B810E43E99932(&Local_63))
			{
				CAM::_0xAC77757C05DE9E5A(&Local_63);
				bLocal_59 = true;
			}
		}
	}
}

void func_209(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_5;
	uParam1->f_19 = 1;
	uParam1->f_20 = 1;
	if (__LIB_7__::func_190(uParam0, iVar0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], "ARTHUR", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], "crate02", __LIB_7__::func_30(uParam0, uParam1->f_3), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], "crate15", __LIB_7__::func_30(uParam0, uParam1->f_1), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], uParam0->f_107[*uParam1 /*113*/].f_4, __LIB_6__::func_952(uParam0, *uParam1), 0);
		if (uParam1->f_2 > -1)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], "BOOK", __LIB_7__::func_30(uParam0, uParam1->f_2), 0);
		}
	}
}

void func_210(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_4;
	uParam1->f_19 = 1;
	uParam1->f_21 = 1;
	if (__LIB_7__::func_190(uParam0, iVar0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], "ARTHUR", Global_35, 0);
	}
}

void func_211(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_6;
	uParam1->f_19 = 1;
	uParam1->f_22 = 1;
	if (__LIB_7__::func_190(uParam0, iVar0))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_67(uParam1->f_15)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], "Female", __LIB_6__::func_952(uParam0, *uParam1), 0);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], &(uParam1->f_15), __LIB_6__::func_952(uParam0, *uParam1), 0);
		}
		if (uParam1->f_2 > -1)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1984[iVar0], "BOOK", __LIB_7__::func_30(uParam0, uParam1->f_2), 0);
		}
	}
}

bool func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_940();
	iVar1 = __LIB_0__::func_647(joaat("KILLS"));
	if (iVar1 == 0)
	{
		return false;
	}
	if (iVar0 >= iParam0)
	{
		return true;
	}
	return false;
}

int func_213(char* sParam0, int iParam1, char* sParam2)
{
	vector3 vVar0;
	var uVar3;
	vVar0 = { __LIB_1__::func_344(sParam0) };
	uVar3 = 24;
	__LIB_0__::func_928(&uVar3, Global_35, "ARTHUR", 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			__LIB_0__::func_928(&uVar3, iParam1, sParam2, 0);
		}
	}
	if (!__LIB_2__::func_813(&uVar3, vVar0, 0, -1, 1, 0))
	{
	}
	return 1;
}

bool func_214(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (uParam1->f_21)
	{
		iVar1 = uParam1->f_8;
		iVar0 = uParam1->f_7;
		while (iVar0 <= iVar1)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(__LIB_7__::func_185(uParam0, uParam1->f_4), __LIB_7__::func_200(uParam0, iVar0)) && !__LIB_7__::func_201(uParam0, iVar0))
			{
				return false;
			}
			iVar0++;
		}
		uParam1->f_21 = 0;
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1984[uParam1->f_4], uParam0->f_23, uParam0->f_26, 2);
	}
	if (uParam1->f_20)
	{
		iVar3 = uParam1->f_14;
		iVar2 = uParam1->f_11;
		while (iVar2 <= iVar3)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(__LIB_7__::func_185(uParam0, uParam1->f_5), __LIB_7__::func_200(uParam0, iVar2)) && !__LIB_7__::func_201(uParam0, iVar2))
			{
				return false;
			}
			iVar2++;
		}
		uParam1->f_20 = 0;
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1984[uParam1->f_5], uParam0->f_23, uParam0->f_26, 2);
	}
	if (uParam1->f_22)
	{
		iVar5 = uParam1->f_10;
		iVar4 = uParam1->f_9;
		while (iVar4 <= iVar5)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(__LIB_7__::func_185(uParam0, uParam1->f_6), __LIB_7__::func_200(uParam0, iVar4)) && !__LIB_7__::func_201(uParam0, iVar4))
			{
				return false;
			}
			iVar4++;
		}
		uParam1->f_22 = 0;
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1984[uParam1->f_6], uParam0->f_23, uParam0->f_26, 2);
	}
	return true;
}

bool func_215(var uParam0)
{
	__LIB_7__::func_173(uParam0, iLocal_19, 1);
	__LIB_7__::func_183(uParam0, iLocal_27, 1);
	__LIB_6__::func_984(__LIB_6__::func_952(uParam0, iLocal_18), uParam0->f_1984[iLocal_23], "Female");
	__LIB_7__::func_202(&iLocal_52, &iLocal_53, uParam0, &uLocal_99);
	return true;
}

bool func_216(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_204(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

void func_217(var uParam0, int iParam1)
{
	uParam0->f_1697 = iParam1;
}

int func_218(var uParam0, var uParam1)
{
	if (!__LIB_7__::func_186("CAMC5AU"))
	{
		return 0;
	}
	if (!__LIB_7__::func_186("CPGENAU"))
	{
		return 0;
	}
	__LIB_7__::func_213("CAMC5_RETURN", 0, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_17))
	{
		__LIB_7__::func_213(uParam0->f_17, __LIB_0__::func_271(uParam1->f_107[*uParam0 /*113*/].f_1), uParam1->f_107[*uParam0 /*113*/].f_4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_18))
	{
		__LIB_7__::func_213(uParam0->f_18, __LIB_0__::func_271(uParam1->f_107[*uParam0 /*113*/].f_1), uParam1->f_107[*uParam0 /*113*/].f_4);
	}
	return 1;
}

void func_219(var uParam0, var uParam1)
{
	if (uParam1->f_19)
	{
		if (__LIB_7__::func_214(uParam0, uParam1))
		{
			uParam1->f_19 = 0;
		}
	}
}

void func_220()
{
	if (CAM::_0x927B810E43E99932(&Local_62) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 72439833))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_62);
		bLocal_58 = false;
	}
}

void func_221(int iParam0)
{
	iLocal_49 = iParam0;
}

void func_222()
{
	TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_94, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, true, false, 0, false, -1f, false);
}

void func_223()
{
	if (!bLocal_58)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (!CAM::_0x927B810E43E99932(&Local_62))
			{
				CAM::_0xB8B207C34285E978(&Local_62);
			}
			if (CAM::_0x927B810E43E99932(&Local_62))
			{
				CAM::_0xAC77757C05DE9E5A(&Local_62);
				bLocal_58 = true;
			}
		}
	}
}

bool func_224(var uParam0)
{
	__LIB_7__::func_173(uParam0, iLocal_19, 1);
	__LIB_7__::func_33(uParam0, iLocal_27, 1);
	__LIB_6__::func_984(__LIB_6__::func_952(uParam0, iLocal_18), uParam0->f_1984[iLocal_23], "Female");
	__LIB_7__::func_202(&iLocal_51, &iLocal_52, uParam0, &uLocal_98);
	return true;
}

int func_225(var uParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(&Local_62))
	{
		return 0;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_CAMP_FIRE_SEAT_BENCH"), false))
	{
		return 0;
	}
	return __LIB_7__::func_218(&uLocal_98, uParam0);
}

void func_226(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_35 = iParam2;
}

void func_227(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_8.f_22 = iParam2;
}

bool func_228(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		return false;
	}
	return true;
}

void func_229(var uParam0, int iParam1)
{
	__LIB_7__::func_153(uParam0, iParam1, 0, 0, 0, -1, 0, 0f, 1065353216 /* Float: 1f */, 1);
}

void func_230(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	uParam0->f_2252 = fParam1;
	uParam0->f_2253 = fParam2;
	uParam0->f_2254 = fParam3;
	uParam0->f_2255 = fParam4;
}

void func_231(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	uParam0->f_2257 = fParam1;
	uParam0->f_2258 = fParam2;
	uParam0->f_2259 = fParam3;
	uParam0->f_2260 = fParam4;
}

void func_232(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_48 = 1;
	uParam0->f_107[iParam1 /*113*/].f_32.f_49 = fParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_50 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_51 = fParam4;
}

void func_233(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	if (bParam7)
	{
		vParam2 = { __LIB_6__::func_972(uParam0, vParam2) };
		fParam5 = __LIB_6__::func_973(uParam0, fParam5);
	}
	uParam0->f_107[iParam1 /*113*/].f_8.f_3 = { vParam2 };
	uParam0->f_107[iParam1 /*113*/].f_8.f_6 = fParam5;
	uParam0->f_107[iParam1 /*113*/].f_8.f_13 = iParam6;
}

bool func_234(var uParam0)
{
	if (__LIB_7__::func_148(uParam0, iLocal_16))
	{
		if (__LIB_7__::func_163(uParam0, Local_20, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_18, 1);
		}
		else
		{
			__LIB_7__::func_154(uParam0, iLocal_17, 1);
		}
	}
	return true;
}

void func_235(var uParam0, int iParam1, char* sParam2)
{
	StringCopy(&(uParam0->f_107[iParam1 /*113*/].f_32.f_40), sParam2, 64);
}

int func_236(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, bool bParam12)
{
	if (bParam11)
	{
		if (!__LIB_7__::func_161(__LIB_4__::func_576(uParam0), 1))
		{
			return 0;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Param1, true) > Param1.f_9)
	{
		return 0;
	}
	if (!__LIB_0__::func_195(Param1, Param1.f_6, Global_36))
	{
		return 0;
	}
	if (__LIB_0__::func_195(Param1, Param1.f_3, Global_36))
	{
		return 0;
	}
	if (bParam12)
	{
		if (MISC::ABSF((Param1.f_2 - Global_36.f_2)) > 2f)
		{
			return 0;
		}
	}
	return 1;
}

void func_237(var uParam0, int iParam1)
{
	__LIB_7__::func_127(uParam0, iParam1, 0, 0, 0, -1, 0, 0f, 1065353216 /* Float: 1f */, 1);
}

void func_238(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_27)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_27[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(uParam0->f_27[iVar0]);
		}
		iVar0++;
	}
}

void func_239(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	Global_1327590.f_19745 = iParam1;
}

char* func_240(var uParam0)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return "CAMP_VIGNETTE_WNT_BOUNDS";
		default:
			break;
	}
	return "";
}

void func_241(var uParam0, var uParam1)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			uParam1->f_27[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -1356.74f, 2440.951f, 308.8f, 7.308f, 5.926f, 5f, 5f, 5f, 69.616f, "GENERAL_QUARTERS_1");
			uParam1->f_27[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -1349.611f, 2445.329f, 308.8f, 3.76f, 3.622f, 5f, 5f, 5f, 69.616f, "GENERAL_QUARTERS_2");
			break;
		case 1:
			uParam1->f_27[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -131.457f, -31.609f, 94.924f, 0f, 0f, 85f, 4.5f, 5f, 5f, "WNT_DUTCH_TENT_1");
			uParam1->f_27[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -132.42f, -28.228f, 94.924f, 0f, 0f, 85f, 2f, 2f, 5f, "WNT_DUTCH_TENT_2");
			uParam1->f_27[2] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -126.046f, -39.791f, 94.924f, 0f, 0f, 80f, 5f, 4.5f, 5f, "WNT_PLAYER_TENT");
			uParam1->f_27[3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -117.82f, -35.863f, 94.924f, 0f, 0f, 56.75f, 3.5f, 4.4f, 5f, "WNT_JOHN_TENT");
			uParam1->f_27[4] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -110.929f, -39.134f, 94.924f, 0f, 0f, 85f, 3.5f, 4f, 5f, "WNT_LADY_WAGON_1");
			uParam1->f_27[5] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -110.504f, -42.683f, 94.924f, 0f, 0f, 85f, 3.5f, 3f, 5f, "WNT_LADY_WAGON_2");
			uParam1->f_27[6] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -140.221f, -40.756f, 94.924f, 0f, 0f, 115f, 3f, 1.5f, 5f, "WNT_CAMPFIRE_1");
			uParam1->f_27[7] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -141.648f, -44.26f, 94.924f, 0f, 0f, 140f, 4.5f, 2.5f, 5f, "WNT_CAMPFIRE_2");
			uParam1->f_27[8] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -145.175f, -39.756f, 94.924f, 0f, 0f, 85f, 4f, 2.5f, 5f, "WNT_CAMPFIRE_3");
			uParam1->f_27[9] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -148.718f, -24.323f, 94.924f, 0f, 0f, 75f, 6f, 3f, 5f, "WNT_STRAUSS_WAGON");
			uParam1->f_27[10] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -144.047f, -18.212f, 94.924f, 0f, 0f, 60f, 4f, 3.5f, 5f, "WNT_CHUCK_WAGON_1");
			uParam1->f_27[11] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -137.028f, -19.478f, 94.924f, 0f, 0f, 60f, 3f, 3f, 5f, "WNT_CHUCK_WAGON_2");
			uParam1->f_27[12] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -133.374f, -18.438f, 94.924f, 0f, 0f, 105.663f, 2.2f, 1.3f, 5f, "WNT_COOKFIRE");
			uParam1->f_27[13] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -148.68f, -14.678f, 94.924f, 0f, 0f, 35f, 5f, 2.5f, 5f, "WNT_ABIGAIL_TENT");
			break;
		case 2:
			uParam1->f_27[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 653.709f, -1253.339f, 45.2f, 0f, 0f, 126.056f, 4.5f, 5f, 5f, "WNT_DUTCH_TENT_1");
			uParam1->f_27[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 650.737f, -1251.475f, 45.24f, 0f, 0f, 126.239f, 2f, 2f, 5f, "WNT_DUTCH_TENT_2");
			uParam1->f_27[2] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 652.91f, -1243.816f, 45.2f, 0f, 0f, 54.097f, 5f, 4.5f, 5f, "WNT_PLAYER_TENT");
			uParam1->f_27[3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 660.752f, -1257.137f, 45.2f, 0f, 0f, -14.333f, 3.5f, 4.4f, 5f, "WNT_JOHN_TENT");
			uParam1->f_27[4] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 673.322f, -1267.199f, 45.2f, 0f, 0f, 15.711f, 3.5f, 4f, 5f, "WNT_LADY_WAGON_1");
			uParam1->f_27[5] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 676.873f, -1265.955f, 44.86f, 0f, 0f, 54.144f, 3.5f, 3f, 5f, "WNT_LADY_WAGON_2");
			uParam1->f_27[6] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 683.68f, -1245.894f, 45.2f, 0f, 0f, 153.581f, 3f, 1.5f, 5f, "WNT_CAMPFIRE_1");
			uParam1->f_27[7] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 685.768f, -1241.24f, 45.2f, 0f, 0f, 165.528f, 4.5f, 2.5f, 5f, "WNT_CAMPFIRE_2");
			uParam1->f_27[8] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 657.282f, -1232.855f, 45.2f, 0f, 0f, 42.203f, 6f, 3f, 5f, "WNT_STRAUSS_WAGON");
			uParam1->f_27[9] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 678.782f, -1249.457f, 45.2f, 0f, 0f, 99.797f, 4f, 3.5f, 5f, "WNT_CHUCK_WAGON_1");
			uParam1->f_27[10] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 680.141f, -1255.832f, 45.2f, 0f, 0f, 71.759f, 3f, 3f, 5f, "WNT_CHUCK_WAGON_2");
			uParam1->f_27[11] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 672.364f, -1259.783f, 45.2f, 0f, 0f, -45.375f, 2.3f, 1.3f, 5f, "WNT_COOKFIRE");
			uParam1->f_27[12] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 691.919f, -1254.024f, 45.2f, 0f, 0f, -158.132f, 3.5f, 4f, 5f, "WNT_LADY_TENT_1");
			uParam1->f_27[13] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 690.28f, -1259.008f, 45.2f, 0f, 0f, 54.144f, 3.5f, 3f, 5f, "WNT_LADY_TENT_2");
			break;
		case 3:
			uParam1->f_27[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1879.171f, -1881.171f, 42.6f, 0f, 0f, 66.712f, 4f, 7.5f, 5f, "WNT_LADY_WAGON");
			uParam1->f_27[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1865.958f, -1857.144f, 42.6f, 0f, 0f, 99.118f, 3f, 1.5f, 5f, "WNT_CAMPFIRE_1");
			uParam1->f_27[2] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1863.306f, -1859.917f, 42.6f, 0f, 0f, 121.02f, 4.5f, 2.5f, 5f, "WNT_CAMPFIRE_2");
			uParam1->f_27[3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1861.717f, -1855.102f, 42.6f, 0f, 0f, 66.685f, 4f, 2.5f, 5f, "WNT_CAMPFIRE_3");
			uParam1->f_27[4] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1888.304f, -1881.163f, 42.6f, 0f, 0f, 26.864f, 6f, 3f, 5f, "WNT_STRAUSS_WAGON");
			uParam1->f_27[5] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1879.129f, -1856.475f, 42.6f, 0f, 0f, 103.047f, 4f, 3.5f, 5f, "WNT_CHUCK_WAGON_1");
			uParam1->f_27[6] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1880.233f, -1863.478f, 42.6f, 0f, 0f, 73.775f, 3f, 3f, 5f, "WNT_CHUCK_WAGON_2");
			uParam1->f_27[7] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1876.86f, -1869.999f, 42.6f, 0f, 0f, 163.854f, 2.2f, 1.3f, 5f, "WNT_COOKFIRE");
			uParam1->f_27[8] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 1882.543f, -1834.444f, 42.6f, 0f, 0f, -3.292f, 5f, 5f, 5f, "WNT_GAZEEBO");
			break;
		case 6:
			uParam1->f_27[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2359.64f, 1376.435f, 105.8f, 0f, 0f, 154.866f, 4.5f, 5f, 5f, "WNT_DUTCH_TENT");
			uParam1->f_27[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2340.284f, 1359.111f, 105.8f, 0f, 0f, 86.664f, 5f, 4.5f, 5f, "WNT_PLAYER_TENT");
			uParam1->f_27[2] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2343.436f, 1350.497f, 105.8f, 0f, 0f, 120.833f, 3.5f, 4.4f, 5f, "WNT_JOHN_TENT");
			uParam1->f_27[3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2354.84f, 1345.535f, 105.8f, 0f, 0f, 41.998f, 4f, 5f, 5f, "WNT_LADY_WAGON");
			uParam1->f_27[4] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2350.886f, 1362.857f, 105.8f, 0f, 0f, 115f, 3f, 1.5f, 5f, "WNT_CAMPFIRE");
			uParam1->f_27[5] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2364.035f, 1359.838f, 105.8f, 0f, 0f, 88.613f, 6f, 3f, 5f, "WNT_STRAUSS_WAGON");
			uParam1->f_27[6] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2362.68f, 1352.385f, 105.8f, 0f, 0f, 13.785f, 4f, 3.5f, 5f, "WNT_CHUCK_WAGON_1");
			uParam1->f_27[7] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2371.549f, 1350.817f, 105.8f, 0f, 0f, 60f, 3f, 3f, 5f, "WNT_CHUCK_WAGON_2");
			uParam1->f_27[8] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2379.415f, 1348.709f, 105.8f, 0f, 0f, 67.998f, 2.2f, 1.3f, 5f, "WNT_COOKFIRE");
			break;
	}
}

void func_242(var uParam0, var uParam1)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			break;
		case 1:
			uParam1->f_44[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -131.457f, -31.609f, 94.924f, 0f, 0f, 85f, 4.5f, 5f, 5f, "WNT_PLAYER_UNAVAILABLE_DUTCH_TENT");
			uParam1->f_44[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), -126.046f, -39.791f, 94.924f, 0f, 0f, 80f, 5f, 4.5f, 5f, "WNT_PLAYER_UNAVAILABLE_PLAYER_TENT");
			break;
		case 2:
			uParam1->f_44[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 653.709f, -1253.339f, 45.2f, 0f, 0f, 126.056f, 4.5f, 5f, 5f, "WNT_PLAYER_UNAVAILABLE_DUTCH_TENT");
			uParam1->f_44[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 652.91f, -1243.816f, 45.2f, 0f, 0f, 54.097f, 5f, 4.5f, 5f, "WNT_PLAYER_UNAVAILABLE_PLAYER_TENT");
			break;
		case 3:
			break;
		case 6:
			uParam1->f_44[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2359.64f, 1376.435f, 105.8f, 0f, 0f, 154.866f, 4.5f, 5f, 5f, "WNT_PLAYER_UNAVAILABLE_DUTCH_TENT");
			uParam1->f_44[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLBOX"), 2340.284f, 1359.111f, 105.8f, 0f, 0f, 86.664f, 5f, 4.5f, 5f, "WNT_PLAYER_UNAVAILABLE_PLAYER_TENT");
			break;
	}
}

void func_243(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam1->f_43)
	{
		return;
	}
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED"), true) != 1)
	{
		return;
	}
	TASK::_0xA052608A12559BBB(iVar0, &(uParam1->f_27));
	uParam1->f_43 = 1;
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_245(var uParam0)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			return -1344.645f, 2427.717f, 306.6736f;
		case 1:
			return -138.7686f, -27.4923f, 95.0878f;
		case 2:
			return 668.68f, -1249.79f, 43.13f;
		case 3:
			return 1887.15f, -1860.83f, 41.93f;
		case 6:
			return 2353.84f, 1347.03f, 104.92f;
		case 8:
			return -1636.9f, -1378.8f, 83.9129f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_246(var uParam0, int iParam1)
{
	uParam0->f_47.f_1 = iParam1;
}

void func_247(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_163(iVar0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		TASK::_0xDF94844D474F31E5(iVar0);
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_248(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	__LIB_1__::func_727(iVar0, 0);
}

void func_249(var uParam0, var uParam1)
{
	if (!uParam1->f_7)
	{
		return;
	}
	__LIB_2__::func_962(&(uParam1->f_10));
}

void func_250(var uParam0, var uParam1)
{
	if (!uParam1->f_7)
	{
		return;
	}
	__LIB_1__::func_731(&(uParam1->f_10));
}

void func_251(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!uParam1->f_7)
	{
		return;
	}
	if (TASK::_0x916B8E075ABC8B4E(Global_35, 1))
	{
		return;
	}
	__LIB_6__::func_762(&(uParam1->f_10), iVar0);
}

void func_252(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	if (uParam1->f_73 <= 0)
	{
		return;
	}
	if (uParam1->f_6 > 0f)
	{
		fVar0 = uParam1->f_6;
	}
	else
	{
		fVar0 = 1f;
	}
	iVar1 = 0;
	while (iVar1 < uParam1->f_73)
	{
		iVar2 = uParam1->f_54[iVar1 /*6*/].f_2;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else
		{
			fVar3 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iVar2, true, false));
			if (fVar3 < uParam1->f_54[iVar1 /*6*/].f_3)
			{
				if (PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), uParam1->f_54[iVar1 /*6*/].f_5))
				{
					fVar4 = uParam1->f_54[iVar1 /*6*/].f_4;
					fVar5 = uParam1->f_54[iVar1 /*6*/].f_3;
					fVar6 = ((fVar3 - fVar4) / (fVar5 - fVar4));
					fVar0 = __LIB_0__::func_649(__LIB_0__::func_646(fVar6, fVar0), 0f);
				}
			}
		}
		iVar1++;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, fVar0);
}

var func_253(var uParam0, var uParam1)
{
	char cVar0[64];
	switch (uParam1->f_47)
	{
		case 1:
			StringCopy(&cVar0, "WNT_INTERRUPT_REGULAR", 64);
			break;
		case 2:
			StringCopy(&cVar0, "WNT_INTERRUPT_COMPASSIONATE", 64);
			break;
		case 3:
			StringCopy(&cVar0, "WNT_INTERRUPT_AGGRESSIVE", 64);
			break;
		case 4:
			StringCopy(&cVar0, "WNT_INTERRUPT_NAGGED", 64);
			break;
		case 5:
			StringCopy(&cVar0, "WNT_INTERRUPT_JOKED", 64);
			break;
	}
	return __LIB_1__::func_569(cVar0);
}

char* func_254(var uParam0, var uParam1)
{
	char cVar0[64];
	switch (uParam1->f_47)
	{
		case 1:
			StringCopy(&cVar0, "WNT_INTERRUPT_REPONSE_REGULAR", 64);
			break;
		case 2:
			StringCopy(&cVar0, "WNT_INTERRUPT_REPONSE_COMPASSIONATE", 64);
			break;
		case 3:
			StringCopy(&cVar0, "WNT_INTERRUPT_REPONSE_AGGRESSIVE", 64);
			break;
		case 4:
			StringCopy(&cVar0, "WNT_INTERRUPT_REPONSE_NAGGED", 64);
			break;
		case 5:
			if (uParam0->f_107[*uParam1 /*113*/].f_1 == 19)
			{
				StringCopy(&cVar0, "WNT_INTERRUPT_REPONSE_JOKED", 64);
			}
			else
			{
				StringCopy(&cVar0, "WNT_INTERRUPT_REPONSE_JOKING", 64);
			}
			break;
	}
	return __LIB_1__::func_569(cVar0);
}

void func_255(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_398(7);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (bParam0)
	{
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iVar0, 50, 2, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iVar0, 49, 2, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iVar0, 11, 2, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iVar0, 5, 2, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iVar0, 33, 2, bParam0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 419, bParam0);
}

bool func_256(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam1->f_47 == 0)
	{
		return false;
	}
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	uParam1->f_47.f_2 = 0;
	PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &(uParam1->f_47.f_2), 0, 0);
	if (uParam1->f_47.f_2 == 0)
	{
		__LIB_1__::func_748(&(uParam1->f_47.f_3), 1, 1);
		return false;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_47.f_2) != iVar0)
	{
		__LIB_1__::func_748(&(uParam1->f_47.f_3), 1, 1);
		return false;
	}
	if (!__LIB_0__::func_139(uParam1->f_47.f_3))
	{
		uParam1->f_47.f_3 = __LIB_2__::func_403("INTERACT_WNT_DISMISS", joaat("INPUT_INTERACT_LOCKON_NEG"), iVar0, 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_4__::func_12(uParam1->f_47.f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		if (__LIB_0__::func_572(uParam1->f_47.f_3, 0))
		{
			__LIB_1__::func_221(uParam1->f_47.f_3, 0, 1);
		}
		return false;
	}
	if (__LIB_4__::func_863(uParam1->f_47.f_3, 1))
	{
		__LIB_1__::func_221(uParam1->f_47.f_3, 1, 1);
	}
	if (__LIB_1__::func_732(uParam1->f_47.f_3, 1))
	{
		__LIB_1__::func_221(uParam1->f_47.f_3, 0, 1);
		return true;
	}
	return false;
}

void func_257(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	__LIB_2__::func_966(Global_35, iVar0, 1, 1, 1, 0, 0, 1, 0, 1, 1);
	if (uParam1->f_6 > 0f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, uParam1->f_6);
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		if (!TASK::_0x916B8E075ABC8B4E(Global_35, 1))
		{
			TASK::_0xE7FA07624574B79A(Global_35, iVar0, 1, 1, 120f, -1, 0, 0, 1);
		}
	}
	else if (TASK::_0x916B8E075ABC8B4E(Global_35, 1))
	{
		TASK::_0x541E5B41DCA45828(Global_35, 1, 1);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 175, false);
	PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
}

void func_258(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_107[*uParam1 /*113*/].f_101))
	{
		vVar1 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_107[*uParam1 /*113*/].f_101) };
		if (PED::IS_PED_ON_MOUNT(Global_35) && vVar1.x < 1.4f)
		{
			vVar1.x = 1.4f;
			vVar1.f_1 = 1.4f;
			VOLUME::_SET_VOLUME_SCALE(uParam0->f_107[*uParam1 /*113*/].f_101, vVar1);
		}
		else if (vVar1.x > uParam0->f_107[*uParam1 /*113*/].f_100)
		{
			vVar1.x = uParam0->f_107[*uParam1 /*113*/].f_100;
			vVar1.f_1 = vVar1.x;
			VOLUME::_SET_VOLUME_SCALE(uParam0->f_107[*uParam1 /*113*/].f_101, vVar1);
		}
	}
	__LIB_2__::func_966(iVar0, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	PED::SET_PED_RESET_FLAG(iVar0, 202, true);
}

void func_259(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, char* sParam5)
{
	int iVar0;
	uParam0->f_1711[iParam2 /*15*/].f_11 = sParam3;
	uParam0->f_1711[iParam2 /*15*/].f_12 = sParam5;
	uParam0->f_1711[iParam2 /*15*/].f_7 = iParam4;
	if (uParam0->f_1711[iParam2 /*15*/].f_7)
	{
		uParam0->f_107[iParam1 /*113*/].f_32.f_20 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar0] >= 0)
		{
		}
		else
		{
			uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar0] = iParam2;
			return;
		}
		iVar0++;
	}
}

void func_260(var uParam0, var uParam1)
{
	char* sVar0;
	if (!uParam1->f_8)
	{
		return;
	}
	sVar0 = __LIB_7__::func_240(uParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sVar0);
}

bool func_261(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_78(uParam0) == 0)
	{
		return false;
	}
	iVar0 = __LIB_7__::func_120(uParam0, *uParam1);
	if (!__LIB_0__::func_31(iVar0))
	{
		return false;
	}
	iVar1 = __LIB_0__::func_271(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	return __LIB_7__::func_244(iVar1);
}

void func_262(var uParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	vector3 vVar2;
	if (!uParam1->f_8)
	{
		return;
	}
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	sVar1 = __LIB_7__::func_240(uParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	vVar2 = { __LIB_7__::func_245(uParam0) };
	if (__LIB_0__::func_86(vVar2))
	{
		return;
	}
	PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iVar0, sVar1, vVar2, 0, sVar1);
}

void func_263(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, bool bParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		Var0.f_5 = iParam20;
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, uParam6, uParam7, uParam9, iParam10, iParam11, iParam12, iParam13);
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

void func_264(var uParam0, var uParam1)
{
	int iVar0;
	struct<27> Var1;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	Var1.f_4 = 1065353216;
	Var1.f_5 = 1065353216;
	Var1.f_9 = 1065353216;
	Var1.f_10 = 1065353216;
	Var1.f_14 = 1065353216;
	Var1.f_15 = 1065353216;
	Var1.f_17 = 1040187392;
	Var1.f_18 = 1040187392;
	Var1.f_19 = -1;
	Var1.f_26 = -1082130432;
	__LIB_3__::func_887(Global_35, iVar0, &Var1, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	__LIB_7__::func_255(1);
}

void func_265(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (TASK::_0x916B8E075ABC8B4E(Global_35, 1))
	{
		TASK::_0x541E5B41DCA45828(Global_35, 1, 1);
	}
	__LIB_7__::func_255(0);
	__LIB_1__::func_726(Global_35, 0);
}

bool func_266(var uParam0)
{
	int iVar0;
	if (!uParam0->f_2265)
	{
		__LIB_7__::func_55(uParam0->f_2, 1);
	}
	iVar0 = __LIB_7__::func_56(__LIB_4__::func_576(uParam0));
	__LIB_7__::func_18(iVar0);
	Global_1327590.f_19622[iVar0 /*14*/].f_5++;
	Global_1327590.f_19622[iVar0 /*14*/].f_7++;
	if (uParam0->f_5)
	{
		__LIB_6__::func_967();
	}
	__LIB_0__::func_37(&(uParam0->f_10));
	__LIB_7__::func_79(uParam0);
	if (uParam0->f_2048 >= 0)
	{
		__LIB_7__::func_173(uParam0, uParam0->f_2048, 1);
	}
	__LIB_7__::func_34(uParam0);
	MISC::_0xB08C4FA25BC29DB9(__LIB_7__::func_43(uParam0->f_2));
	return true;
}

void func_267(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	switch (uParam1->f_47.f_1)
	{
		case 0:
			if (__LIB_7__::func_256(uParam0, uParam1))
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
				if (__LIB_0__::func_113())
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "ARTHUR"))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2046, "ARTHUR", Global_35);
					}
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "JOHN"))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2046, "JOHN", Global_35);
				}
				if (uParam0->f_2 == 456)
				{
					__LIB_1__::func_265(Global_35, "WNT_INTERRUPT_NAGGED", -417894478, iVar0, 1, 0, 5, 1);
					__LIB_7__::func_246(uParam1, 2);
					return;
				}
				__LIB_1__::func_265(Global_35, __LIB_7__::func_253(uParam0, uParam1), -417894478, iVar0, 1, 0, 0, 1);
				__LIB_0__::func_268(&(uParam1->f_47.f_4), 0f);
				__LIB_7__::func_246(uParam1, 1);
			}
			break;
		case 1:
			if (__LIB_3__::func_135(&(uParam1->f_47.f_4)) >= 500)
			{
				__LIB_7__::func_172(uParam0, *uParam1, 1);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iVar0, 0);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2046))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2046, false))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_2046, true);
					}
				}
				__LIB_0__::func_37(&(uParam1->f_47.f_4));
				__LIB_7__::func_246(uParam1, 2);
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (uParam0->f_2 == 456)
				{
					if (__LIB_0__::func_139(uParam1->f_47.f_3))
					{
						__LIB_1__::func_748(&(uParam1->f_47.f_3), 0, 1);
					}
					__LIB_7__::func_246(uParam1, 3);
					return;
				}
				__LIB_1__::func_265(iVar0, __LIB_7__::func_254(uParam0, uParam1), -417894478, Global_35, 1, 0, 0, 1);
				__LIB_7__::func_113(uParam0, *uParam1, 1, 1);
				if (__LIB_0__::func_139(uParam1->f_47.f_3))
				{
					__LIB_1__::func_748(&(uParam1->f_47.f_3), 1, 1);
				}
				__LIB_7__::func_246(uParam1, 3);
			}
			break;
	}
}

int func_268(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1703)))
	{
		return 0;
	}
	return 1;
}

bool func_269(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

bool func_270(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (iVar0 == uParam0->f_1702)
		{
		}
		else if (__LIB_1__::func_22(uParam0->f_107[iVar0 /*113*/].f_1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_271(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1967)
	{
		if (WEAPON::IS_WEAPON_VALID(uParam0->f_1967[iVar0 /*4*/]))
		{
		}
		else
		{
			uParam0->f_1967[iVar0 /*4*/].f_1 = iParam1;
			uParam0->f_1967[iVar0 /*4*/] = iParam2;
			uParam0->f_1967[iVar0 /*4*/].f_2 = sParam3;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_272(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

void func_273(var uParam0, var uParam1)
{
	int iVar0;
	struct<27> Var1;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	Var1.f_4 = 1065353216;
	Var1.f_5 = 1065353216;
	Var1.f_9 = 1065353216;
	Var1.f_10 = 1065353216;
	Var1.f_14 = 1065353216;
	Var1.f_15 = 1065353216;
	Var1.f_17 = 1040187392;
	Var1.f_18 = 1040187392;
	Var1.f_19 = -1;
	Var1.f_26 = -1082130432;
	__LIB_7__::func_263(iVar0, Global_35, &Var1, -1082130432 /* Float: -1f */, 0, 0, uParam1->f_4, uParam1->f_5, 1, uParam1->f_26, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
}

int func_274(var uParam0, var uParam1)
{
	__LIB_7__::func_265(uParam0, uParam1);
	__LIB_7__::func_248(uParam0, uParam1);
	__LIB_7__::func_249(uParam0, uParam1);
	__LIB_7__::func_260(uParam0, uParam1);
	__LIB_7__::func_239(uParam1, 0);
	return 1;
}

bool func_275(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_177(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

int func_276(var uParam0, var uParam1)
{
	if (__LIB_0__::func_78(uParam1))
	{
		__LIB_7__::func_257(uParam0, uParam1);
		__LIB_7__::func_258(uParam0, uParam1);
		__LIB_7__::func_251(uParam0, uParam1);
		__LIB_7__::func_243(uParam0, uParam1);
		__LIB_7__::func_252(uParam0, uParam1);
		__LIB_7__::func_267(uParam0, uParam1);
	}
	return 1;
}

void func_277(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	__LIB_7__::func_172(uParam0, iParam1, 1);
	uParam0->f_1699 = 0;
	uParam0->f_1702 = iParam1;
	uParam0->f_1701 = iParam3;
	StringCopy(&(uParam0->f_1703), sParam2, 32);
	uParam0->f_1709 = iParam4;
}

int func_278(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1703)))
	{
		return 1;
	}
	if (uParam0->f_1699 > 0)
	{
		if (__LIB_6__::func_943(__LIB_4__::func_576(uParam0)))
		{
			if (__LIB_7__::func_270(uParam0))
			{
				__LIB_6__::func_944();
			}
		}
	}
	iVar0 = __LIB_6__::func_952(uParam0, uParam0->f_1702);
	Var1 = { uParam0->f_1703 };
	switch (uParam0->f_1699)
	{
		case 0:
			if (__LIB_7__::func_74(uParam0, uParam0->f_1702))
			{
				__LIB_7__::func_113(uParam0, uParam0->f_1702, 0, 1);
				uParam0->f_1699++;
			}
			break;
		case 1:
			uParam0->f_1707 = __LIB_1__::func_877("INTERACT_INSULT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_2__::func_369(uParam0->f_1707, iVar0, 0, 1, -1);
			if (uParam0->f_1709)
			{
				uParam0->f_1708 = __LIB_1__::func_877("INTERACT_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_2__::func_369(uParam0->f_1708, iVar0, 0, 1, -1);
			}
			uParam0->f_1700 = (MISC::GET_GAME_TIMER() + uParam0->f_1701);
			uParam0->f_1699++;
			break;
		case 2:
			if (__LIB_1__::func_732(uParam0->f_1707, 1) || __LIB_1__::func_732(uParam0->f_1708, 1))
			{
				__LIB_1__::func_748(&(uParam0->f_1707), 1, 1);
				__LIB_1__::func_748(&(uParam0->f_1708), 1, 1);
				PED::_0x19173C3F15367B54(iVar0, PLAYER::PLAYER_ID(), 120000);
				PED::_0x5708EDD71B50C008(iVar0, PLAYER::PLAYER_ID(), 120000);
				uParam0->f_1699++;
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_1700)
			{
				__LIB_1__::func_748(&(uParam0->f_1707), 1, 1);
				__LIB_1__::func_748(&(uParam0->f_1708), 1, 1);
				PED::_0x19173C3F15367B54(iVar0, PLAYER::PLAYER_ID(), 120000);
				PED::_0x5708EDD71B50C008(iVar0, PLAYER::PLAYER_ID(), 120000);
				uParam0->f_1699 = 99;
			}
			break;
		case 3:
			StringConCat(&Var1, "_GREET", 32);
			__LIB_7__::func_269(Global_35, &Var1, 0, iVar0, 1, 0, 0, 1);
			uParam0->f_1699++;
			break;
		case 4:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				StringConCat(&Var1, "_RESPONSE", 32);
				__LIB_7__::func_269(iVar0, &Var1, 0, Global_35, 1, 0, 0, 1);
				uParam0->f_1699++;
			}
			break;
		case 5:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
			{
				StringConCat(&Var1, "_CLOSER", 32);
				__LIB_7__::func_269(Global_35, &Var1, 0, iVar0, 1, 0, 0, 1);
				uParam0->f_1699++;
			}
			break;
		case 6:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
			{
				uParam0->f_1699 = 99;
			}
			break;
		case 99:
			StringCopy(&(uParam0->f_1703), "", 32);
			return 1;
		default:
			uParam0->f_1699 = 99;
			break;
	}
	return 0;
}

void func_279(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2270 = 1;
	uParam0->f_2271 = iParam1;
	uParam0->f_2272 = iParam2;
	uParam0->f_2273 = iParam3;
}

void func_280(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_105 = iParam2;
}

bool func_281(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_266(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

void func_282(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_8 = iParam2;
}

bool func_283(char[4] cParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(cParam0) && AUDIO::_0x1ECC76792F661CF5(cParam0))
	{
		return true;
	}
	return false;
}

int func_284(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	iVar0 = uParam0->f_2051[iParam1 /*6*/];
	if (iVar0 < 0)
	{
		return 0;
	}
	Var1 = { uParam0->f_2051[iParam1 /*6*/].f_1 };
	iVar5 = uParam0->f_1984[iVar0];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar5))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar5, true, false))
	{
		return 0;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iVar5, &Var1))
	{
		return 0;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iVar5, &Var1))
	{
		return 0;
	}
	if (ANIMSCENE::_0x9E036D5204FFBBC8(iVar5, &Var1) > 2)
	{
		__LIB_7__::func_5(uParam0, "Audio load stress is too high", 20, -1);
		return 0;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iVar5, &Var1);
	return 1;
}

void func_285(var uParam0)
{
	vector3 vVar0;
	vVar0 = { Global_36 };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1984[iLocal_21], vVar0, 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 2);
}

bool func_286(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	iVar0 = uParam0->f_2051[iParam1 /*6*/];
	if (iVar0 < 0)
	{
		return false;
	}
	Var1 = { uParam0->f_2051[iParam1 /*6*/].f_1 };
	iVar5 = uParam0->f_1984[iVar0];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar5))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iVar5, &Var1))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(iVar5, &Var1);
}

bool func_287(var uParam0)
{
	return __LIB_7__::func_163(uParam0, Local_17, 1, 0);
}

void func_288(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam2 <= 0 || iParam2 > 600)
	{
		return;
	}
	iVar0 = __LIB_6__::func_956(iParam1);
	iVar1 = BUILTIN::ROUND(((1000f * IntToFloat(iParam2)) / 4000f));
	iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) / 60f));
	iVar1 = (iVar1 % 60);
	if (PED::_0xCB86D3E3E3708901(iVar0, uParam0->f_1690, iVar2, iVar1, 0))
	{
	}
}

float func_289(var uParam0)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 8:
			return 800f;
		default:
			break;
	}
	return 0f;
}

bool func_290(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (uParam1->f_73 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_73)
	{
		iVar1 = uParam1->f_54[iVar0 /*6*/].f_2;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iVar1, true, false)) < uParam1->f_54[iVar0 /*6*/].f_4)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_291(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = iParam2;
		Var0.f_4 = iParam4;
		Var0.f_7 = iParam3;
		Var0.f_9 = iParam5;
		Var0.f_10 = iParam6;
		return MISC::_0xFDF38E2B711BF78E(&Var0, 17);
	}
	return false;
}

void func_292(var uParam0, var uParam1)
{
	int iVar0;
	struct<27> Var1;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	Var1.f_4 = 1065353216;
	Var1.f_5 = 1065353216;
	Var1.f_9 = 1065353216;
	Var1.f_10 = 1065353216;
	Var1.f_14 = 1065353216;
	Var1.f_15 = 1065353216;
	Var1.f_17 = 1040187392;
	Var1.f_18 = 1040187392;
	Var1.f_19 = -1;
	Var1.f_26 = -1082130432;
	__LIB_3__::func_898(iVar0, Global_35, &Var1, -1082130432 /* Float: -1f */, 0, 0, uParam1->f_4, uParam1->f_5, 1, uParam1->f_26, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
}

int func_293(var uParam0, var uParam1)
{
	if (__LIB_0__::func_78(uParam1))
	{
		__LIB_7__::func_274(uParam0, uParam1);
	}
	__LIB_7__::func_238(uParam1);
	__LIB_7__::func_247(uParam0, uParam1);
	return 1;
}

bool func_294(var uParam0)
{
	return __LIB_7__::func_163(uParam0, Local_20, 1, 0);
}

void func_295(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_48 = 1;
	uParam0->f_107[iParam1 /*113*/].f_32.f_49 = fParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_50 = fParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_51 = iParam4;
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_1 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_2 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_3 = sParam4;
	uParam0->f_107[iParam1 /*113*/].f_32.f_15 = iParam5;
	uParam0->f_107[iParam1 /*113*/].f_32.f_9 = iParam6;
	uParam0->f_107[iParam1 /*113*/].f_32.f_11 = fParam8;
	uParam0->f_107[iParam1 /*113*/].f_32.f_12 = iParam9;
	__LIB_7__::func_108(uParam0, iParam1, fParam7);
}

void func_297(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	uParam0->f_1711[iParam2 /*15*/].f_13 = sParam3;
	uParam0->f_1711[iParam2 /*15*/].f_14 = iParam1;
}

void func_298(var uParam0, char* sParam1)
{
	uParam0->f_2268 = sParam1;
}

int func_299(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_78(uParam0) == 0)
	{
		return 0;
	}
	iVar0 = __LIB_7__::func_120(uParam0, *uParam1);
	if (!__LIB_0__::func_31(iVar0))
	{
		return 0;
	}
	iVar1 = __LIB_0__::func_271(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	return __LIB_7__::func_244(iVar1);
}

bool func_300(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = 60;
	if (bParam2)
	{
		iVar0 = 1;
	}
	if (__LIB_6__::func_206(14) || __LIB_6__::func_206(15))
	{
		bVar1 = true;
	}
	if (BUILTIN::VDIST2(Global_36, __LIB_7__::func_245(uParam0)) > __LIB_7__::func_289(uParam0))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player out of bounds", iVar0, -1);
		return false;
	}
	if (__LIB_3__::func_291(Global_35, 1))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player is inside", iVar0, -1);
		return false;
	}
	if (bParam2)
	{
		iVar2 = __LIB_6__::func_952(uParam0, *uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			__LIB_7__::func_5(uParam0, "Walk and talk - Companion walking over - ped does not exist?", 60, *uParam1);
			return false;
		}
		if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > (uParam1->f_3 + 25f))
		{
			__LIB_7__::func_5(uParam0, "Walk and talk - Companion walking over - ignoring player availability checks because distance is far", 60, *uParam1);
			return true;
		}
	}
	if (!__LIB_7__::func_161(__LIB_4__::func_576(uParam0), !bVar1))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player is unavailable (manager)", iVar0, -1);
		return false;
	}
	if (!bVar1)
	{
		if (VOLUME::_0xAA9EE2AAFC717623(Global_36, 0, 0, 4))
		{
			if (uParam0->f_7 >= 8)
			{
				if (!VOLUME::_0xAA9EE2AAFC717623(Global_36, 0, 2048, 0))
				{
					__LIB_7__::func_5(uParam0, "Walk and talk - Player in lock volume (mission)", iVar0, -1);
					return false;
				}
			}
			else
			{
				__LIB_7__::func_5(uParam0, "Walk and talk - Player in lock volume", iVar0, -1);
				return false;
			}
		}
	}
	if (Global_1357517)
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player is using their journal", iVar0, -1);
		return false;
	}
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SATCHEL")))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player is using their satchel", iVar0, -1);
		return false;
	}
	if (!bVar1)
	{
		if (BUILTIN::VDIST2(Global_36, __LIB_5__::func_907(__LIB_0__::func_78(uParam0))) <= 4f)
		{
			__LIB_7__::func_5(uParam0, "Walk and talk - Player is near the tithing box / ledger", iVar0, -1);
			return false;
		}
		if (BUILTIN::VDIST2(Global_36, __LIB_5__::func_913(__LIB_0__::func_78(uParam0))) <= 4f)
		{
			__LIB_7__::func_5(uParam0, "Walk and talk - Player is near the donate food station", iVar0, -1);
			return false;
		}
	}
	if (__LIB_4__::func_635(8192))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player is using the tithing box or ledger", iVar0, -1);
		return false;
	}
	if (__LIB_1__::func_533(1048576))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player is in the Pearson crafting menus", iVar0, -1);
		return false;
	}
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_44[iVar3]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_44[iVar3], true, 0))
			{
				__LIB_7__::func_5(uParam0, "Walk and talk - Player in unavailable volume", iVar0, -1);
				return false;
			}
		}
		iVar3++;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player is mounted", iVar0, -1);
		return false;
	}
	if (!bVar1)
	{
		if (CAM::_0x74F1D22EFA71FAB8())
		{
			__LIB_7__::func_5(uParam0, "Walk and talk - Player is in cinematic (idle?) cam", iVar0, -1);
			return false;
		}
	}
	if (__LIB_7__::func_290(uParam0, uParam1))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Player is close to avoid ped", iVar0, -1);
		return false;
	}
	return true;
}

bool func_301(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 60;
	if (bParam2)
	{
		iVar0 = 1;
	}
	if (__LIB_6__::func_206(14) || __LIB_6__::func_206(15))
	{
		return true;
	}
	iVar1 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::_IS_PED_CARRYING(iVar1))
	{
		__LIB_7__::func_5(uParam0, "Walk and talk - Companion is carrying something", iVar0, *uParam1);
		return false;
	}
	if (!bParam2)
	{
		if (__LIB_7__::func_291(iVar1, Global_35, 16, -1, 0, 0, 5))
		{
			__LIB_7__::func_5(uParam0, "Walk and talk - A companion has been recently insulted", iVar0, *uParam1);
			return false;
		}
	}
	return true;
}

int func_302(var uParam0, var uParam1)
{
	__LIB_7__::func_264(uParam0, uParam1);
	__LIB_7__::func_292(uParam0, uParam1);
	__LIB_7__::func_250(uParam0, uParam1);
	__LIB_7__::func_262(uParam0, uParam1);
	__LIB_7__::func_239(uParam1, 1);
	uParam1->f_43 = 0;
	return 1;
}

void func_303(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_107[iParam1 /*113*/].f_8 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_8.f_1 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_8.f_2 = iParam4;
	uParam0->f_107[iParam1 /*113*/].f_8.f_7 = iParam5;
	uParam0->f_107[iParam1 /*113*/].f_8.f_8 = iParam6;
}

bool func_304(var uParam0)
{
	if (__LIB_7__::func_148(uParam0, iLocal_17))
	{
		if (__LIB_7__::func_163(uParam0, Local_22, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_18, 1);
		}
		else if (__LIB_7__::func_163(uParam0, Local_32, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_19, 1);
		}
		else if (__LIB_7__::func_163(uParam0, Local_42, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_20, 1);
		}
		else
		{
			__LIB_7__::func_154(uParam0, iLocal_21, 1);
		}
	}
	if ((__LIB_7__::func_148(uParam0, iLocal_18) || __LIB_7__::func_148(uParam0, iLocal_19)) || __LIB_7__::func_148(uParam0, iLocal_20))
	{
		__LIB_7__::func_154(uParam0, iLocal_21, 1);
	}
	return true;
}

int func_305(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 17)
	{
		return 0;
	}
	iVar0 = uParam0->f_1711[iParam1 /*15*/].f_10;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	return 1;
}

bool func_306(var uParam0)
{
	if (__LIB_7__::func_268(uParam0) && __LIB_7__::func_278(uParam0))
	{
		__LIB_7__::func_113(uParam0, iLocal_14, 1, 0);
	}
	return true;
}

bool func_307(var uParam0)
{
	return __LIB_7__::func_236(uParam0, Local_15, 1, 0);
}

void func_308(var uParam0, int iParam1, float fParam2, float fParam3)
{
	uParam0->f_2270 = 1;
	uParam0->f_2271 = iParam1;
	uParam0->f_2272 = fParam2;
	uParam0->f_2273 = fParam3;
}

bool func_309(var uParam0)
{
	if (!__LIB_7__::func_307(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

int func_310(var uParam0, var uParam1)
{
	__LIB_7__::func_264(uParam0, uParam1);
	__LIB_7__::func_273(uParam0, uParam1);
	__LIB_7__::func_250(uParam0, uParam1);
	__LIB_7__::func_262(uParam0, uParam1);
	__LIB_7__::func_239(uParam1, 1);
	uParam1->f_43 = 0;
	return 1;
}

bool func_311(var uParam0)
{
	__LIB_7__::func_293(uParam0, &uLocal_18);
	return true;
}

void func_312(var uParam0, int iParam1)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_32 = -1;
}

bool func_313(var uParam0)
{
	return __LIB_1__::func_205(Global_35, iLocal_17, 1, 0);
}

int func_314()
{
	return Global_1327590.f_10.f_10;
}

bool func_315(var uParam0)
{
	if (!__LIB_7__::func_294(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_316(var uParam0)
{
	if (__LIB_7__::func_148(uParam0, iLocal_16))
	{
		if (__LIB_7__::func_163(uParam0, Local_19, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_18, 1);
		}
		else
		{
			__LIB_7__::func_154(uParam0, iLocal_17, 1);
		}
	}
	return true;
}

void func_317(var uParam0, int iParam1)
{
	uParam0->f_2250 = iParam1;
}

int func_318(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_6__::func_988(iParam1))
	{
		return 0;
	}
	if (!__LIB_7__::func_61(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	uParam0->f_2046 = iVar0;
	if (uParam0->f_2015[iParam1])
	{
		if (__LIB_7__::func_37(__LIB_4__::func_576(uParam0)))
		{
		}
		uParam0->f_1696 = 1;
		__LIB_6__::func_989(__LIB_4__::func_576(uParam0));
	}
	else if (__LIB_6__::func_943(__LIB_4__::func_576(uParam0)))
	{
		__LIB_6__::func_944();
	}
	if (uParam0->f_2270)
	{
		uParam0->f_2274 = 0;
		uParam0->f_2275 = 0;
		if ((__LIB_0__::func_113() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "ARTHUR")) || (__LIB_0__::func_181() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "JOHN")))
		{
			uParam0->f_2274 = 1;
		}
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1984)
		{
			if (iVar1 == iParam1)
			{
			}
			else if (__LIB_7__::func_169(uParam0, iVar1) || __LIB_7__::func_84(uParam0, iVar1))
			{
				__LIB_7__::func_39(uParam0, iVar1);
			}
			iVar1++;
		}
	}
	return 1;
}

int func_319(var uParam0)
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")))
	{
		PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(10, 0));
		PERSCHAR::_0xD4B614179BCD0654(__LIB_1__::func_179(10, 0));
		__LIB_6__::func_950(uParam0);
		return 1;
	}
	return 0;
}

void func_320(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (!__LIB_1__::func_22(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else
		{
			__LIB_7__::func_113(uParam0, iVar0, 1, 1);
		}
		iVar0++;
	}
}

bool func_321(var uParam0)
{
	if (__LIB_7__::func_148(uParam0, iLocal_16))
	{
		if (__LIB_7__::func_163(uParam0, Local_22, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_18, 1);
		}
		else if (__LIB_7__::func_163(uParam0, Local_32, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_19, 1);
		}
		else
		{
			__LIB_7__::func_154(uParam0, iLocal_17, 1);
		}
	}
	return true;
}

bool func_322(var uParam0)
{
	if (__LIB_7__::func_148(uParam0, iLocal_15))
	{
		if (__LIB_7__::func_163(uParam0, Local_20, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_17, 1);
		}
		else if (__LIB_7__::func_163(uParam0, Local_30, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_18, 1);
		}
		else
		{
			__LIB_7__::func_154(uParam0, iLocal_16, 1);
		}
	}
	if ((__LIB_7__::func_148(uParam0, iLocal_16) || __LIB_7__::func_148(uParam0, iLocal_17)) || __LIB_7__::func_148(uParam0, iLocal_18))
	{
		__LIB_7__::func_154(uParam0, iLocal_19, 1);
	}
	return true;
}

void func_323(var uParam0, int iParam1, float fParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_35 = fParam2;
}

void func_324()
{
	int iVar0;
	int iVar1;
	iVar0 = joaat("DISCOVERABLE_NAME_CLEET_GOON");
	iVar1 = joaat("DISCOVERABLE_NAME_JOE_GOON");
	if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, iVar0))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, iVar0);
	}
	if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, iVar1))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, iVar1);
	}
}

bool func_325(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_7__::func_30(uParam0, iLocal_17)))
	{
		ENTITY::SET_ENTITY_COORDS(__LIB_7__::func_30(uParam0, iLocal_17), 2353.81f, 1373.03f, 105.131f, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(__LIB_7__::func_30(uParam0, iLocal_17), 0f, 0f, 17.515f, 2, true);
	}
	return true;
}

bool func_326(var uParam0)
{
	STREAMING::_0x66BC28E50E85270E(uLocal_30);
	return true;
}

bool func_327(var uParam0)
{
	if (!bLocal_31)
	{
		uLocal_30 = STREAMING::_0xB223249B7798EEED(__LIB_6__::func_952(uParam0, iLocal_15), joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"), 5, joaat("PROP_HUMAN_SLEEP_BED_PILLOW_MALE_B"));
		bLocal_31 = true;
	}
	return STREAMING::_0xA0AE7653E8181725(uLocal_30);
}

void func_328(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_14 = iParam2;
}

bool func_329(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2046))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
	{
		return false;
	}
	if (ANIMSCENE::_0x73616E64696C616E(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4, 1, 0))
	{
		return true;
	}
	return false;
}

void func_330(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_48 = 1;
	uParam0->f_107[iParam1 /*113*/].f_32.f_49 = fParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_50 = fParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_51 = fParam4;
}

bool func_331(var uParam0)
{
	if (__LIB_7__::func_148(uParam0, iLocal_16))
	{
		if (__LIB_7__::func_163(uParam0, Local_20, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_18, 1);
		}
		else if (__LIB_7__::func_163(uParam0, Local_30, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_19, 1);
		}
		else
		{
			__LIB_7__::func_154(uParam0, iLocal_17, 1);
		}
	}
	return true;
}

bool func_332(var uParam0)
{
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
	return true;
}

bool func_333(var uParam0)
{
	int iVar0;
	if (!uParam0->f_2265)
	{
		__LIB_7__::func_55(uParam0->f_2, 1);
	}
	iVar0 = __LIB_7__::func_56(__LIB_4__::func_576(uParam0));
	__LIB_7__::func_18(iVar0);
	Global_1327590.f_19622[iVar0 /*14*/].f_5++;
	Global_1327590.f_19622[iVar0 /*14*/].f_7++;
	if (uParam0->f_5)
	{
		__LIB_6__::func_967();
	}
	__LIB_0__::func_37(&(uParam0->f_10));
	__LIB_7__::func_176(uParam0);
	if (uParam0->f_2048 >= 0)
	{
		__LIB_7__::func_99(uParam0, uParam0->f_2048, 1);
	}
	__LIB_7__::func_34(uParam0);
	MISC::_0xB08C4FA25BC29DB9(__LIB_7__::func_43(uParam0->f_2));
	return true;
}

bool func_334(var uParam0)
{
	if (__LIB_7__::func_148(uParam0, iLocal_15))
	{
		if (__LIB_7__::func_163(uParam0, Local_20, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_16, 1);
		}
		else
		{
			__LIB_7__::func_154(uParam0, iLocal_17, 1);
		}
	}
	return true;
}

bool func_335(var uParam0)
{
	if (!__LIB_7__::func_326(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_105(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_336(var uParam0)
{
	return __LIB_7__::func_236(uParam0, Local_16, 1, 0);
}

bool func_337(var uParam0)
{
	if (__LIB_6__::func_997(uParam0, iLocal_15))
	{
		__LIB_7__::func_113(uParam0, iLocal_15, 1, 1);
	}
	return true;
}

bool func_338(var uParam0)
{
	__LIB_7__::func_173(uParam0, iLocal_20, 1);
	return true;
}

bool func_339(var uParam0)
{
	if (__LIB_7__::func_148(uParam0, iLocal_15))
	{
		if (__LIB_7__::func_163(uParam0, Local_19, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_17, 1);
		}
		else if (__LIB_7__::func_163(uParam0, Local_29, 1, 0))
		{
			__LIB_7__::func_154(uParam0, iLocal_18, 1);
		}
		else
		{
			__LIB_7__::func_154(uParam0, iLocal_16, 1);
		}
	}
	return true;
}

bool func_340(var uParam0)
{
	__LIB_0__::func_172(iLocal_18);
	return true;
}

int func_341(var uParam0, int iParam1, vector3 vParam2, char* sParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else
		{
			uParam0->f_1711[iVar0 /*15*/] = iParam1;
			uParam0->f_1711[iVar0 /*15*/].f_1 = { vParam2 };
			uParam0->f_1711[iVar0 /*15*/].f_4 = sParam5;
			uParam0->f_1711[iVar0 /*15*/].f_5 = bParam6;
			uParam0->f_1711[iVar0 /*15*/].f_6 = iParam7;
			uParam0->f_1711[iVar0 /*15*/].f_8 = iParam8;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_342(var uParam0, char* sParam1)
{
	uParam0->f_2269 = sParam1;
}

int func_343(int iParam0, struct<8> Param1, int iParam9)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return 0;
	}
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_59(iParam0);
	if (iVar0 != 0 && __LIB_6__::func_88(iParam0))
	{
		Global_1360165[iParam0 /*1157*/].f_39 = { Param1 };
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, &Param1);
		__LIB_0__::func_288(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0 /*60*/].f_46 = iVar1;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0 /*60*/].f_46 = -15;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 0;
		}
		Global_1360165[iParam0 /*1157*/].f_56 = 1;
		return 1;
	}
	return 0;
}

void func_344(var uParam0, float fParam1, int iParam2)
{
	uParam0->f_2263 = fParam1;
	uParam0->f_2264 = iParam2;
}

void func_345(int iParam0, bool bParam1)
{
	char* sVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	sVar0 = "HorseMission";
	if (bParam1)
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, bParam1);
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_REMOVE(iParam0, sVar0);
	}
}

void func_346(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (!__LIB_7__::func_61(uParam0, iVar0))
		{
		}
		else
		{
			__LIB_6__::func_986(iParam1, uParam0->f_1984[iVar0], sParam2);
		}
		iVar0++;
	}
}

bool func_347(var uParam0)
{
	if (__LIB_7__::func_268(uParam0) && __LIB_7__::func_278(uParam0))
	{
		__LIB_7__::func_113(uParam0, iLocal_15, 1, 0);
	}
	return true;
}

bool func_348()
{
	if ((__LIB_6__::func_206(0) || __LIB_6__::func_206(1)) || __LIB_6__::func_206(2))
	{
		return true;
	}
	return false;
}

bool func_349(var uParam0)
{
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_CAMP_SEAT_CHAIR_STEW"), false))
	{
		return false;
	}
	return true;
}

bool func_350(var uParam0)
{
	GRAPHICS::_0xBB6C707F20D955D4(120f);
	return true;
}

void func_351(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_6__::func_952(uParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

bool func_352(var uParam0)
{
	return __LIB_7__::func_236(uParam0, Local_18, 1, 0);
}

bool func_353(var uParam0)
{
	ENTITY::_0x669655FFB29EF1A9(__LIB_7__::func_30(uParam0, iLocal_17), 0, "Stew_Fill", 1f);
	ENTITY::_0x669655FFB29EF1A9(__LIB_7__::func_30(uParam0, iLocal_18), 0, "Stew_Fill", 1f);
	return true;
}

bool func_354(var uParam0)
{
	ENTITY::_0x669655FFB29EF1A9(__LIB_7__::func_30(uParam0, iLocal_21), 0, "Stew_Fill", 1f);
	return true;
}

int func_355(var uParam0, bool bParam1, char* sParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (uParam0->f_107[iVar0 /*113*/])
		{
		}
		else
		{
			if (bParam1)
			{
				uParam0->f_107[iVar0 /*113*/].f_103 = 1;
			}
			else
			{
				uParam0->f_107[iVar0 /*113*/].f_102 = 1;
			}
			uParam0->f_107[iVar0 /*113*/] = 1;
			uParam0->f_107[iVar0 /*113*/].f_4 = sParam2;
			uParam0->f_106++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_356(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_17 = iParam1;
	uParam0->f_18 = iParam2;
	uParam0->f_19 = iParam3;
	uParam0->f_20 = iParam4;
}

void func_357(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_15 = iParam1;
	uParam0->f_16 = iParam2;
}

bool func_358(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!__LIB_7__::func_161(__LIB_4__::func_576(uParam0), 1))
		{
			return false;
		}
	}
	return __LIB_1__::func_205(Global_35, *iParam1, 1, 0);
}

bool func_359(var uParam0)
{
	__LIB_7__::func_173(uParam0, iLocal_19, 1);
	return true;
}

int func_360(var uParam0)
{
	return __LIB_0__::func_317();
}

void func_361(var uParam0)
{
	*uParam0 = Global_1946804.f_2776;
	uParam0->f_1 = Global_1946804.f_2776.f_1;
	uParam0->f_8 = Global_1946804.f_2776.f_8;
	uParam0->f_2 = Global_1946804.f_2776.f_2;
	uParam0->f_3[0] = Global_1946804.f_2776.f_3[0];
	uParam0->f_3[1] = Global_1946804.f_2776.f_3[1];
	uParam0->f_3[2] = Global_1946804.f_2776.f_3[2];
	uParam0->f_3[3] = Global_1946804.f_2776.f_3[3];
	uParam0->f_9 = Global_1946804.f_2776.f_9;
	uParam0->f_10 = Global_1946804.f_2776.f_10;
	uParam0->f_11 = Global_1946804.f_2776.f_11;
	uParam0->f_12 = 0;
}

bool func_362(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	if (!__LIB_0__::func_51(uParam1, 2))
	{
		iVar1 = PED::_GET_METAPED_TYPE(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (uParam1->f_1.f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar1, uParam1->f_1.f_1[iVar0 /*3*/], 0, 0, 0);
				uParam1->f_135[uParam1->f_134 /*2*/].f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		__LIB_0__::func_7(uParam1, 2);
	}
	return __LIB_3__::func_128(iParam0, uParam1);
}

void func_363(var uParam0)
{
	if (uParam0->f_1 == 0)
	{
		return;
	}
	__LIB_0__::func_155(32768);
	__LIB_0__::func_860(1108822547);
	Global_1946804.f_2776 = *uParam0;
	Global_1946804.f_2776.f_1 = uParam0->f_1;
	Global_1946804.f_2776.f_8 = uParam0->f_8;
	Global_1946804.f_2776.f_2 = uParam0->f_2;
	Global_1946804.f_2776.f_3[0] = uParam0->f_3[0];
	Global_1946804.f_2776.f_3[1] = uParam0->f_3[1];
	Global_1946804.f_2776.f_3[2] = uParam0->f_3[2];
	Global_1946804.f_2776.f_3[3] = uParam0->f_3[3];
	Global_1946804.f_2776.f_9 = uParam0->f_9;
	Global_1946804.f_2776.f_10 = uParam0->f_10;
	Global_1946804.f_2776.f_11 = uParam0->f_11;
	Global_1946804.f_2776.f_12 = 1;
	Global_1946804.f_2776.f_13 = PED::_0x3FCBB5FCFD968698(Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], 0);
}

bool func_364(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !__LIB_6__::func_659(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (__LIB_0__::func_156(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			__LIB_0__::func_968(1108822547);
		}
		else
		{
			__LIB_0__::func_860(1108822547);
		}
	}
	__LIB_1__::func_183(uParam0, 0, 0);
	__LIB_0__::func_245(iParam5);
	return true;
}

void func_365(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_1 = iParam2;
}

bool func_366(var uParam0)
{
	return __LIB_7__::func_358(uParam0, &iLocal_18, 1);
}

bool func_367(var uParam0)
{
	if (!__LIB_7__::func_366(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_368(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vVar0 = { uParam0->f_23 };
	fVar3 = uParam0->f_26.f_2;
	fVar4 = (((vParam1.x - vVar0.x) * BUILTIN::COS(fVar3)) + ((vParam1.y - vVar0.y) * BUILTIN::SIN(fVar3)));
	fVar5 = ((-(vParam1.x - vVar0.x) * BUILTIN::SIN(fVar3)) + ((vParam1.y - vVar0.y) * BUILTIN::COS(fVar3)));
	fVar6 = (vParam1.z - vVar0.z);
	return fVar4, fVar5, fVar6;
}

bool func_369(var uParam0)
{
	if (!__LIB_7__::func_352(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

void func_370(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_6__::func_952(uParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::DELETE_PED(&iVar0);
	}
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("IRBLPM");
		case 2:
			return joaat("IRCHEF");
		case 3:
			return joaat("IRCHMS");
		case 4:
			return joaat("IRCHOL");
		case 5:
			return joaat("IRDTPI");
		case 6:
			return joaat("IRHOBK");
		case 7:
			return joaat("IRHOGN");
		case 8:
			return joaat("IRJKPD");
		case 9:
			return joaat("IRJKTH");
		case 10:
			return joaat("IRJVOL");
		case 11:
			return joaat("IRKIBR");
		case 12:
			return joaat("IRLNPW");
		case 13:
			return joaat("IRMBFP");
		case 14:
			return joaat("IRMLPM");
		case 15:
			return joaat("IRPRRB");
		case 16:
			return joaat("IRPRNC");
		case 17:
			return joaat("IRSDHM");
		case 18:
			return joaat("IRSNWH");
		case 19:
			return joaat("IRSUSE");
		case 20:
			return joaat("IRTLNL");
		case 21:
			return joaat("IRUNRM");
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_372(int iParam0, int iParam1)
{
	Global_40.f_6563[iParam0 /*27*/].f_24 = iParam1;
}

void func_373()
{
	int iVar0;
	iVar0 = Global_1359489.f_361.f_1 + 1;
	if (iVar0 > 10)
	{
		return;
	}
	Global_1359489.f_361.f_1++;
}

void func_374()
{
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_PED_SMALL")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_PED_SMALL"));
	}
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_PED_MEDIUM")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_PED_MEDIUM"));
	}
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_PED_LARGE")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_PED_LARGE"));
	}
}

void func_375(int iParam0, float fParam1)
{
	struct<6> Var0;
	MISC::_0x94FCADCF9F0C368E(iParam0);
	Var0.f_3 = 4;
	Var0 = joaat("PROVISION_JACKS_THIMBLE");
	Var0.f_1 = fParam1;
	Var0.f_5 = 1;
	Var0.f_4 = 0;
	MISC::_0xAF3A84C7DE6A1DC5(iParam0, &Var0);
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("MISSION_IRBLPM");
		case 2:
			return joaat("MISSION_IRCHEF");
		case 3:
			return joaat("MISSION_IRCHMS");
		case 4:
			return joaat("MISSION_IRCHOL");
		case 5:
			return joaat("MISSION_IRDTPI");
		case 6:
			return joaat("MISSION_IRHOBK");
		case 7:
			return joaat("MISSION_IRHOGN");
		case 8:
			return joaat("MISSION_IRJKPD");
		case 9:
			return joaat("MISSION_IRJKTH");
		case 10:
			return joaat("MISSION_IRJVOL");
		case 11:
			return joaat("MISSION_IRKIBR");
		case 12:
			return joaat("MISSION_IRLNPW");
		case 13:
			return joaat("MISSION_IRMBFP");
		case 14:
			return joaat("MISSION_IRMLPM");
		case 15:
			return joaat("MISSION_IRPRRB");
		case 16:
			return joaat("MISSION_IRPRNC");
		case 17:
			return joaat("MISSION_IRSDHM");
		case 18:
			return joaat("MISSION_IRSNWH");
		case 19:
			return joaat("MISSION_IRSUSE");
		case 20:
			return joaat("MISSION_IRTLNL");
		case 21:
			return joaat("MISSION_IRUNRM");
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("IRBLPM_D");
		case 2:
			return joaat("IRCHEF_D");
		case 3:
			return joaat("IRCHMS_D");
		case 4:
			return joaat("IRCHOL_D");
		case 5:
			return joaat("IRDTPI_D");
		case 6:
			return joaat("IRHOBK_D");
		case 7:
			return joaat("IRHOGN_D");
		case 8:
			return joaat("IRJKPD_D");
		case 9:
			return joaat("IRJKTH_D");
		case 10:
			return joaat("IRJVOL_D");
		case 11:
			return joaat("IRKIBR_D");
		case 12:
			return joaat("IRLNPW_D");
		case 13:
			return joaat("IRMBFP_D");
		case 14:
			return joaat("IRMLPM_D");
		case 15:
			return joaat("IRPRRB_D");
		case 16:
			return joaat("IRPRNC_D");
		case 17:
			return joaat("IRSDHM_D");
		case 18:
			return joaat("IRSNWH_D");
		case 19:
			return joaat("IRSUSE_D");
		case 20:
			return joaat("IRTLNL_D");
		case 21:
			return joaat("IRUNRM_D");
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_378(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	char* sVar1;
	iVar0 = iParam0;
	if (iParam1 == 0)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, sParam2);
	}
	else
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, iParam1);
	}
	StringCopy(&(Global_1359489.f_361.f_258[iVar0 /*6*/].f_2), sVar1, 32);
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 10:
		case 11:
		case 18:
			return 761950088 /* GXTEntry: "Bring ~1~ ~2~ ~3~" */;
		case 5:
			return -1131986109 /* GXTEntry: "Find Dutch a pipe." */;
		case 6:
			return 1756591705 /* GXTEntry: "Find Hosea another crime novel." */;
		case 8:
			return 2110897046;
		case 9:
			return 1947074040 /* GXTEntry: "Find Jack a thimble." */;
		case 12:
			return 361762491 /* GXTEntry: "Find Lenny a pocket watch." */;
		case 13:
			return 542329524 /* GXTEntry: "Find Mary-Beth a fountain pen." */;
		case 14:
			return -918949028 /* GXTEntry: "Find Molly a pocket mirror." */;
		case 16:
			return -407171189 /* GXTEntry: "Find Pearson a naval compass." */;
		case 15:
			return -1303018308 /* GXTEntry: "Bring Pearson a rabbit." */;
		case 17:
			return -1427069925 /* GXTEntry: "Find Sadie a harmonica." */;
		case 19:
			return -1950223422 /* GXTEntry: "Find Susan 2 Creeping Thyme, Oregano, or Wild Mint." */;
		case 20:
			return 364912121 /* GXTEntry: "Find Tilly a necklace." */;
		case 21:
			return -2103092431 /* GXTEntry: "Find Uncle Whiskey, Milkweed, Peppermint, Pomade, and a skunk." */;
		default:
			break;
	}
	return 0;
}

var func_380(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

void func_381(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	StringCopy(&(uParam0->f_12), "script@vignette@ITM@Handover@item_handover", 64);
	switch (iParam1)
	{
		case 1:
			uParam0->f_1 = joaat("CONSUMABLE_HAIR_GREASE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 3;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMBILLA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMBILLA2", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"));
			uParam0->f_23 = joaat("CIR_BILL_POMADE");
			break;
		case 3:
			uParam0->f_1 = joaat("CONSUMABLE_MOONSHINE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_CHAMOONR1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_CHAMOONR2", 24);
			uParam0->f_22 = joaat("W_SP_BOWARROW_FIRE");
			uParam0->f_23 = joaat("CIR_CHARLES_MOONSHINE");
			break;
		case 2:
			uParam0->f_1 = joaat("PROVISION_EAGLE_FEATHER");
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CABCH_ITMCHRA1", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_HORSE_REVIVER"));
			break;
		case 4:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMCHRB1", 24);
			uParam0->f_22 = joaat("S_INV_ARROWAMMO01P");
			uParam0->f_23 = joaat("CIR_CHARLES_OLEANDER");
			break;
		case 5:
			uParam0->f_1 = joaat("PROVISION_COMP_DUTCH_PIPE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 0;
			uParam0->f_4 = 0;
			uParam0->f_5 = 3;
			uParam0->f_20 = 495;
			StringCopy(&(uParam0->f_12), "", 64);
			break;
		case 6:
			uParam0->f_1 = joaat("DOCUMENT_BOOK_SHREW");
			uParam0->f_2 = 1;
			uParam0->f_3 = 5;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMHOSA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMHOSA2", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_PREDATOR_BAIT"));
			uParam0->f_23 = joaat("CIR_HOSEA_BOOK");
			break;
		case 7:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_GINSENG");
			uParam0->f_2 = 2;
			uParam0->f_3 = 5;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMHOSA1", 24);
			StringCopy(&(uParam0->f_9), "CALCM_ITMHOSA2", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_POTENT_MEDICINE"));
			uParam0->f_23 = joaat("CIR_HOSEA_GINSENG");
			break;
		case 8:
			uParam0->f_1 = joaat("DOCUMENT_BOOK_BLACK_HEART_LADY");
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMJCKA2", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_CHOCOLATE_BAR"));
			uParam0->f_23 = joaat("CIR_JACK_PENNY_DREADFUL");
			break;
		case 9:
			uParam0->f_1 = joaat("PROVISION_JACKS_THIMBLE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMJCKA1", 24);
			break;
		case 10:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 2;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_ITMJAVA1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_ITMJAVA2", 24);
			uParam0->f_22 = joaat("P_KNIVESBUNDLE02P");
			uParam0->f_23 = joaat("CIR_JAVIER_OLEANDER");
			break;
		case 11:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
			uParam0->f_2 = 2;
			uParam0->f_3 = 10;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMKIEA1", 24);
			StringCopy(&(uParam0->f_9), "CALCM_ITMKIEA2", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_HORSE_STIMULANT"));
			uParam0->f_23 = joaat("CIR_KIERAN_BURDOCK_ROOT");
			break;
		case 12:
			uParam0->f_1 = joaat("PROVISION_POCKET_WATCH_SILVER");
			uParam0->f_2 = 1;
			uParam0->f_3 = 9;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMLENA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMLENA2", 24);
			uParam0->f_22 = joaat("P_TNT01X");
			break;
		case 13:
			uParam0->f_1 = joaat("PROVISION_MARYS_FOUNTAIN_PEN");
			uParam0->f_2 = 1;
			uParam0->f_3 = 15;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_MB_ITEM", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("PROVISION_GOLDRING"));
			break;
		case 14:
			uParam0->f_1 = joaat("PROVISION_MOLLYS_POCKET_MIRROR");
			uParam0->f_2 = 1;
			uParam0->f_3 = 16;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMMOLA1", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_CIGAR"));
			uParam0->f_23 = joaat("CIR_MOLLY_POCKET_MIRROR");
			break;
		case 15:
			uParam0->f_2 = 1;
			uParam0->f_3 = 17;
			uParam0->f_4 = 0;
			uParam0->f_5 = 1;
			StringCopy(&(uParam0->f_6), "CAHSO_ITMPRSA1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_ITMPRSA2", 24);
			StringCopy(&(uParam0->f_12), "", 64);
			break;
		case 16:
			uParam0->f_1 = joaat("PROVISION_PEARSONS_NAVAL_COMPASS");
			uParam0->f_2 = 1;
			uParam0->f_3 = 17;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMPRSA1", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_RUM"));
			uParam0->f_23 = joaat("CIR_PEARSON_NAVAL_COMPASS");
			break;
		case 17:
			uParam0->f_1 = joaat("PROVISION_SADIES_HARMONICA");
			uParam0->f_2 = 1;
			uParam0->f_3 = 11;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMSADA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMSADA2", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("KIT_GUN_OIL"));
			uParam0->f_23 = joaat("CIR_SADIE_HARMONICA");
			break;
		case 18:
			uParam0->f_1 = joaat("CONSUMABLE_WHISKEY");
			uParam0->f_2 = 1;
			uParam0->f_3 = 8;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_SEAN_ITM", 24);
			uParam0->f_22 = joaat("P_THROW_MOLOTOV01");
			uParam0->f_23 = joaat("CIR_SEAN_WHISKEY");
			break;
		case 19:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_OREGANO");
			uParam0->f_2 = 2;
			uParam0->f_3 = 19;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMSUS1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMSUS2", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_POTENT_TONIC"));
			uParam0->f_23 = joaat("CIR_SUSAN_SEASONING");
			break;
		case 20:
			uParam0->f_1 = joaat("PROVISION_NECKLACE_SILVER");
			uParam0->f_2 = 1;
			uParam0->f_3 = 22;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMTLL", 24);
			uParam0->f_22 = __LIB_3__::func_586(joaat("CONSUMABLE_MEDICINE"));
			uParam0->f_23 = joaat("CIR_TILLY_NECKLACE");
			break;
		case 21:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_MILKWEED");
			uParam0->f_2 = 1;
			uParam0->f_3 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CABCH_ITMUNCA1", 24);
			StringCopy(&(uParam0->f_9), "CABCH_ITMUNCA2", 24);
			break;
	}
}

void func_382(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	iVar0 = __LIB_7__::func_371(*uParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, __LIB_7__::func_371(*uParam0), iParam1, sParam2, bParam3, bParam5, false);
		if (bParam4)
		{
			UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
			Global_1359489.f_361.f_194 = __LIB_7__::func_380("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, MISC::GET_HASH_KEY(__LIB_0__::func_558(uParam0->f_3)), joaat("PLAYER_MENU"), "INPUT_FEED_INTERACT_GENERIC", joaat("SP_MISSIONS"), 5000, 0, 0, 0, 0, 1, 1);
		}
	}
}

bool func_383(var uParam0)
{
	__LIB_7__::func_173(uParam0, iLocal_15, 1);
	return true;
}

void func_384(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			if (__LIB_3__::func_347(joaat("PROVISION_JACKS_THIMBLE"), 0, 0) < 1)
			{
				__LIB_7__::func_374();
				__LIB_7__::func_375(joaat("REWARD_PED_SMALL"), 0.68f);
				__LIB_7__::func_375(joaat("REWARD_PED_MEDIUM"), 0.68f);
				__LIB_7__::func_375(joaat("REWARD_PED_LARGE"), 0.68f);
			}
			break;
	}
}

void func_385(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	uParam0->f_1976 = iParam1;
	uParam0->f_1976.f_1 = { vParam2 };
	uParam0->f_1976.f_4 = fParam5;
	uParam0->f_1976.f_5 = 1;
}

int func_386(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, iParam1, false, false);
	if (iVar1 == 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return 0;
	}
	iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam2, iVar0);
	iVar3 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar2);
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
	return iVar3;
}

void func_387(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_7__::func_371(*uParam0);
	iVar1 = __LIB_7__::func_376(*uParam0);
	iVar2 = MISC::GET_HASH_KEY(__LIB_0__::func_558(uParam0->f_3));
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(8, iVar0, __LIB_1__::func_546(__LIB_0__::func_317()), 1307979820 /* GXTEntry: "Camp Item Request" */, __LIB_7__::func_377(*uParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, iVar0, iVar2, 1997120069);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, iVar0, iVar1, joaat("SP_MISSIONS_22"));
		if (*uParam0 == 21)
		{
			__LIB_7__::func_378(1, joaat("CONSUMABLE_WHISKEY"), 0);
			__LIB_7__::func_378(2, joaat("CONSUMABLE_PEPPERMINT"), 0);
			__LIB_7__::func_378(3, joaat("CONSUMABLE_HERB_MILKWEED"), 0);
			__LIB_7__::func_378(4, joaat("CONSUMABLE_HAIR_GREASE"), 0);
			__LIB_7__::func_378(5, 0, joaat("AT_SKUNK"));
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if (iVar3 == 0)
				{
				}
				else
				{
					__LIB_7__::func_382(uParam0, iVar3, &(Global_1359489.f_361.f_258[iVar3 /*6*/].f_2), 0, 1, 1);
				}
				iVar3++;
			}
		}
	}
}

void func_388(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_40)))
		{
		}
		else
		{
			__LIB_7__::func_343(uParam0->f_107[iVar0 /*113*/].f_1, uParam0->f_107[iVar0 /*113*/].f_32.f_40, -1);
		}
		iVar0++;
	}
}

void func_389()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_6__::func_544();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_390(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	var uVar4;
	iVar0 = __LIB_7__::func_379(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 761950088)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, uParam0->f_1);
		MISC::_INT_TO_STRING(uParam0->f_2, "%i", &uVar4);
		sVar3 = __LIB_1__::func_925(&uVar4, joaat("COLOR_PURE_WHITE"));
		sVar2 = __LIB_1__::func_464(uParam0->f_3, 0);
		__LIB_7__::func_382(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::_CREATE_VAR_STRING(168, iVar0, sVar2, sVar3, sVar1), 0, bParam1, 0);
	}
	else
	{
		__LIB_7__::func_382(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0), 0, bParam1, 0);
	}
}

int func_391(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_858(iParam0, 256))
	{
		return 1;
	}
	if (!__LIB_0__::func_272(iParam1, 256))
	{
		return 0;
	}
	PED::_0xA2F8B3B5FEDFC100(iParam1, __LIB_0__::func_859(iParam0));
	PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
	__LIB_0__::func_213(iParam0, 256, 0);
	return 1;
}

int func_392(var uParam0)
{
	return __LIB_7__::func_319(uParam0);
}

int func_393(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			Global_40.f_6563[iVar0 /*27*/].f_24 = 2;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/].f_24 != 0)
		{
		}
		else
		{
			__LIB_7__::func_381(&(Global_40.f_6563[iVar0 /*27*/]), iParam0);
			__LIB_7__::func_384(iParam0);
			if (bParam2)
			{
				__LIB_7__::func_387(&(Global_40.f_6563[iVar0 /*27*/]));
				if (!__LIB_0__::func_474(172))
				{
					__LIB_1__::func_240(172, 0);
				}
				__LIB_7__::func_390(&(Global_40.f_6563[iVar0 /*27*/]), 0);
			}
			__LIB_7__::func_372(iVar0, 1);
			__LIB_7__::func_373();
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CAMP_REQUESTS_STARTED")), 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_394(var uParam0)
{
	if (!__LIB_7__::func_163(uParam0, Local_17, 1, 0))
	{
		__LIB_1__::func_281(&iLocal_28, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_14)))
		{
			MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_14));
		}
		bLocal_27 = false;
		return false;
	}
	if (!bLocal_27)
	{
		MISC::_0x870708A6E147A9AD(__LIB_6__::func_952(uParam0, iLocal_14), "", 6f, 0, 0, 0, 0, 0, 0, -1);
		bLocal_27 = true;
	}
	iLocal_29 = 0;
	PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iLocal_29, 0, 0);
	if (iLocal_29 == 0)
	{
		__LIB_1__::func_281(&iLocal_28, 1, 1);
		return false;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_29) != __LIB_6__::func_952(uParam0, iLocal_14))
	{
		__LIB_1__::func_281(&iLocal_28, 1, 1);
		return false;
	}
	if (!__LIB_0__::func_139(iLocal_28))
	{
		iLocal_28 = __LIB_2__::func_403("INTERACT_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), __LIB_6__::func_952(uParam0, iLocal_14), 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_4__::func_12(iLocal_28, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(__LIB_6__::func_952(uParam0, iLocal_14)), 0, 1);
	}
	if (__LIB_1__::func_732(iLocal_28, 1))
	{
		return true;
	}
	return false;
}

void func_395(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	uParam0->f_107[iParam1 /*113*/].f_96 = { vParam2 };
	uParam0->f_107[iParam1 /*113*/].f_99 = fParam5;
}

void func_396(var uParam0, int iParam1)
{
	uParam0->f_2248 = iParam1;
}

int func_397(var uParam0, var uParam1)
{
	if (__LIB_7__::func_299(uParam0, uParam1))
	{
		__LIB_7__::func_17(__LIB_4__::func_576(uParam0), 60);
		return 0;
	}
	uParam0->f_4 = 1;
	__LIB_3__::func_675(uParam1, 264);
	__LIB_7__::func_241(uParam0, uParam1);
	__LIB_7__::func_242(uParam0, uParam1);
	return 1;
}

int func_398(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_7__::func_299(uParam0, uParam1))
	{
		__LIB_7__::func_17(__LIB_4__::func_576(uParam0), 60);
		return 0;
	}
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iVar0, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 264, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
	return 1;
}

bool func_399(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	PED::SET_PED_RESET_FLAG(iVar0, 202, true);
	fVar1 = uParam0->f_107[*uParam1 /*113*/].f_32.f_35;
	if (fVar1 > 0f)
	{
		if (!PED::_0x50F124E6EF188B22(iVar0) || PED::_0x6FB76442469ABD68(iVar0) < (fVar1 - 0.25f))
		{
			PED::_0x406CCF555B04FAD3(iVar0, 1, fVar1);
		}
		PED::SET_PED_RESET_FLAG(iVar0, 333, true);
	}
	__LIB_7__::func_243(uParam0, uParam1);
	if (!__LIB_0__::func_163(iVar0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
			if (!__LIB_7__::func_300(uParam0, uParam1, 0))
			{
				return false;
			}
			if (!__LIB_7__::func_301(uParam0, uParam1, 0))
			{
				return false;
			}
			TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iVar0, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 264, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
		}
		return false;
	}
	if (!__LIB_7__::func_300(uParam0, uParam1, 1) || !__LIB_7__::func_301(uParam0, uParam1, 1))
	{
		if (uParam1->f_9)
		{
			if (!__LIB_0__::func_163(iVar0, 258748395))
			{
				TASK::TASK_PERSISTENT_CHARACTER(iVar0);
			}
		}
		else
		{
			__LIB_6__::func_950(uParam0);
		}
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		return false;
	}
	if (PED::_0x7F9B9791D4CB71F6(iVar0, Global_35, 0, 0) != 1)
	{
		return false;
	}
	if (!PED::IS_PED_FACING_PED(iVar0, Global_35, 100f))
	{
		return false;
	}
	return BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) <= uParam1->f_3;
}

bool func_400(var uParam0)
{
	__LIB_3__::func_459(__LIB_7__::func_30(uParam0, iLocal_20), 0);
	return true;
}

int func_401(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = -1;
	fVar1 = 250000f;
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (iVar2 == 12 || iVar2 == 14)
		{
		}
		else if (__LIB_6__::func_998(uParam0, iVar2))
		{
		}
		else if (!__LIB_1__::func_307(iVar2, 0, 0))
		{
		}
		else if (Global_1360165[iVar2 /*1157*/].f_62 == -289447566)
		{
		}
		else if (__LIB_1__::func_531(iVar2, __LIB_6__::func_955(uParam0->f_7), 1))
		{
		}
		else
		{
			iVar3 = __LIB_0__::func_271(iVar2);
			if (ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
			else
			{
				fVar4 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), uParam0->f_29);
				if (fVar4 < fVar1)
				{
					iVar0 = iVar2;
					fVar1 = fVar4;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

bool func_402(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_6__::func_952(uParam0, *uParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!__LIB_7__::func_300(uParam0, uParam1, 0))
	{
		return false;
	}
	if (!__LIB_7__::func_301(uParam0, uParam1, 0))
	{
		return false;
	}
	fVar1 = uParam0->f_107[*uParam1 /*113*/].f_32.f_35;
	if (fVar1 > 0f)
	{
		if (!PED::_0x50F124E6EF188B22(iVar0) || PED::_0x6FB76442469ABD68(iVar0) < (fVar1 - 0.25f))
		{
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1))
			{
				if (!TASK::_0x0C3CB2E600C8977D(iVar0, 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
					{
						__LIB_7__::func_5(uParam0, "Walk and Talk - Waiting for companion to be offscreen to make them drunk", 30, *uParam1);
						return false;
					}
				}
			}
			PED::_0x406CCF555B04FAD3(iVar0, 1, fVar1);
		}
		PED::SET_PED_RESET_FLAG(iVar0, 333, true);
	}
	return BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) <= uParam1->f_2;
}

bool func_403(var uParam0)
{
	if (!__LIB_7__::func_311(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_105(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_404(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_78(uParam1))
	{
		return false;
	}
	if (__LIB_7__::func_272(__LIB_6__::func_952(uParam0, *uParam1), 108239393))
	{
		return true;
	}
	return false;
}

void func_405(var uParam0, int iParam1)
{
	uParam0->f_47 = iParam1;
}

void func_406(var uParam0, float fParam1)
{
	uParam0->f_6 = fParam1;
}

void func_407(var uParam0, int iParam1)
{
	uParam0->f_9 = iParam1;
}

void func_408(int iParam0, var uParam1)
{
	if (Global_1357549.f_1483 >= 25)
	{
		Global_1357549.f_1483 = 0;
	}
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = uParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483++;
}

void func_409(int iParam0, var uParam1)
{
	if (Global_1357549.f_1406 >= 50)
	{
		return;
	}
	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = uParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403++;
	Global_1357549.f_1406++;
}

bool func_410(int iParam0)
{
	return __LIB_5__::func_244(iParam0);
}

bool func_411(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (__LIB_1__::func_394(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	return false;
}

int func_412()
{
	if (!__LIB_4__::func_265(29))
	{
		return 29;
	}
	if (!__LIB_4__::func_265(43))
	{
		return 43;
	}
	if (!__LIB_4__::func_265(61))
	{
		return 61;
	}
	if (!__LIB_4__::func_265(73))
	{
		return 73;
	}
	return -1;
}

bool func_413(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
		{
			__LIB_0__::func_288(uParam0->f_107[iVar0 /*113*/].f_1, 46, 1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (__LIB_7__::func_51(uParam0, iVar0))
			{
			}
			else if (uParam0->f_2047 >= 0 && uParam0->f_2047 < uParam0->f_1984)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1984[uParam0->f_2047]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1984[uParam0->f_2047], uParam0->f_107[iVar0 /*113*/].f_4))
					{
						__LIB_7__::func_7(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	__LIB_7__::func_27(uParam0);
	__LIB_7__::func_88(uParam0, 1);
	__LIB_6__::func_963(uParam0);
	__LIB_7__::func_8(uParam0);
	__LIB_6__::func_964(uParam0, 1073741824 /* Float: 2f */);
	__LIB_7__::func_52(uParam0);
	__LIB_7__::func_13(uParam0);
	__LIB_7__::func_89(uParam0);
	__LIB_7__::func_90(uParam0);
	__LIB_7__::func_53(uParam0);
	__LIB_6__::func_965(uParam0);
	__LIB_7__::func_388(uParam0);
	if (uParam0->f_15)
	{
		__LIB_7__::func_6(uParam0, uParam0->f_20);
	}
	else
	{
		__LIB_6__::func_966(uParam0);
	}
	if (uParam0->f_2047 >= 0)
	{
		__LIB_7__::func_54(uParam0);
		__LIB_7__::func_173(uParam0, uParam0->f_2047, 1);
	}
	else if (uParam0->f_2248)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				__LIB_7__::func_7(uParam0, iVar0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_107[iVar0 /*113*/].f_5, false, true);
				TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23, uParam0->f_107[iVar0 /*113*/].f_8.f_2, 0, false, true, 0, false, -1f, false);
				PED::_0x2208438012482A1A(uParam0->f_107[iVar0 /*113*/].f_5, false, false);
			}
			iVar0++;
		}
	}
	return true;
}

bool func_414(var uParam0)
{
	return __LIB_7__::func_402(uParam0, &uLocal_18);
}

bool func_415(var uParam0)
{
	return __LIB_7__::func_398(uParam0, &uLocal_18);
}

bool func_416(var uParam0)
{
	return __LIB_7__::func_399(uParam0, &uLocal_18);
}

bool func_417(var uParam0)
{
	if (!__LIB_7__::func_414(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_101(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_418(var uParam0)
{
	if (!__LIB_7__::func_304(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_126(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

int func_419(var uParam0)
{
	__LIB_7__::func_45(uParam0, 148, 0, 0, 0);
	return 1;
}

int func_420(var uParam0)
{
	__LIB_7__::func_45(uParam0, 81, 0, 0, 0);
	return 1;
}

int func_421(var uParam0)
{
	__LIB_7__::func_45(uParam0, 208, 0, 0, 0);
	return 1;
}

void func_422(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_13 = iParam2;
}

void func_423(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (__LIB_6__::func_520(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[0 /*63*/]), 0, 1))
	{
		return;
	}
	if (__LIB_6__::func_520(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[1 /*63*/]), 0, 1))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = __LIB_6__::func_15(&(Global_40.f_4283.f_440[0 /*63*/]));
		}
		return;
	}
	__LIB_6__::func_260(&(Global_40.f_4283.f_440));
	__LIB_6__::func_520(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[1 /*63*/]), 0, 1);
}

int func_424(var uParam0)
{
	__LIB_7__::func_45(uParam0, 168, 0, 0, 0);
	return 1;
}

int func_425(var uParam0)
{
	__LIB_7__::func_45(uParam0, 96, 0, 0, 0);
	return 1;
}

void func_426()
{
	ENTITY::REMOVE_MODEL_HIDE(1399.447f, -844.6359f, 64.8634f, 5f, joaat("P_RUSSLINGGATELOCK02X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(1399.883f, -847.0065f, 65.6747f, 1f, joaat("P_CS_CHAINLINK01X"), 0);
}

bool func_427(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
	}
	return false;
}

bool func_428(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_76, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_76, 4);
		__LIB_0__::func_25(iLocal_76, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_6__::func_929(iLocal_76);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_76);
		__LIB_2__::func_819(iLocal_76);
		__LIB_2__::func_755(iLocal_76);
		if (!__LIB_2__::func_756(iLocal_76, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

bool func_429(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if ((!__LIB_0__::func_1(uParam0->f_3, 32768) && __LIB_6__::func_624(uParam0->f_1, &fVar1)) && __LIB_6__::func_930(uParam0->f_1, 0, &fVar0))
	{
		fVar2 = __LIB_3__::func_992();
		if ((__LIB_3__::func_992() - fVar1) >= fVar0)
		{
			__LIB_1__::func_581(&(uParam0->f_3), 32768);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_3, 32768))
	{
		return true;
	}
	return false;
}

void func_430()
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!__LIB_7__::func_428(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_431(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(__LIB_0__::func_559(iParam3)))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(iParam3), true, 0))
	{
		return 0;
	}
	if (bParam8)
	{
		vVar1 = { __LIB_6__::func_619(iParam1) };
		if (!__LIB_0__::func_86(vVar1))
		{
			if (__LIB_1__::func_989(vVar1, 1, 776, 0))
			{
				return 0;
			}
		}
	}
	if ((bParam6 && __LIB_0__::func_296(128, 0, 1)) && !iParam1 == 64)
	{
		return 0;
	}
	if (iParam7 && __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return 0;
	}
	uParam0->f_1 = iParam1;
	uParam0->f_5 = __LIB_1__::func_293(__LIB_3__::func_574(iParam1), 0, 3, __LIB_3__::func_575(iParam1));
	__LIB_6__::func_674(&(uParam0->f_5), &(uParam0->f_3));
	if (!__LIB_0__::func_1(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 8))
	{
		iVar0 = 8;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 16))
	{
		iVar0 = 16;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 32))
	{
		iVar0 = 32;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 64))
	{
		iVar0 = 64;
	}
	if (iParam1 == 32768)
	{
		if (!__LIB_7__::func_429(uParam0))
		{
			return 0;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_3, iVar0))
	{
		if (__LIB_0__::func_1(uParam0->f_3, 2))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
			{
				SCRIPTS::REQUEST_SCRIPT(sParam5);
				if (SCRIPTS::HAS_SCRIPT_LOADED(sParam5))
				{
					uParam0->f_52 = { __LIB_6__::func_620(iParam1) };
					uParam0->f_5 = __LIB_1__::func_293(__LIB_3__::func_574(iParam1), 0, 3, __LIB_3__::func_575(iParam1));
					*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sParam5, uParam0, 59, 1024);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam5);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_432(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
		{
			return true;
		}
	}
	return false;
}

int func_433(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;
	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			__LIB_4__::func_416(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

var func_434(var uParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(uParam0, vParam1, fParam4, iParam5, uParam6, iParam7);
}

void func_435(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_59(iParam0);
	if (!__LIB_0__::func_30(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_287(iParam0, 17, 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_39)))
		{
			PERSCHAR::_0x187D65F3AEC5D679(iVar0, &(Global_1360165[iParam0 /*1157*/].f_39));
		}
		else
		{
			__LIB_0__::func_290(iParam0, 17, 0);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_40.f_4942[iParam0 /*60*/].f_51)))
	{
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, &(Global_40.f_4942[iParam0 /*60*/].f_51));
	}
}

bool func_436(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(__LIB_0__::func_177(iParam0), false);
		if (iVar0 != 0 && iVar0 != Global_1360165[iParam0 /*1157*/])
		{
			return true;
		}
	}
	return false;
}

bool func_437(int iParam0, int iParam1, int iParam2)
{
	return __LIB_1__::func_374(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), iParam2);
}

void func_438(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!__LIB_0__::func_86(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 16384);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80f - 40f) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, __LIB_5__::func_732(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, __LIB_5__::func_732(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, __LIB_5__::func_732(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, __LIB_5__::func_732(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, __LIB_5__::func_732(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, __LIB_5__::func_732(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, __LIB_5__::func_732(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, __LIB_5__::func_732(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, __LIB_5__::func_732(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, __LIB_5__::func_732(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, __LIB_5__::func_732(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, __LIB_5__::func_732(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, __LIB_5__::func_732(50f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, __LIB_5__::func_732(75f, 95f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, __LIB_5__::func_732(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, __LIB_5__::func_732(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, __LIB_5__::func_732(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

bool func_439()
{
	return __LIB_4__::func_635(32768);
}

void func_440(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	fVar0 = (fParam9 / 2f);
	fVar1 = (fParam10 / 2f);
	switch (iParam2)
	{
		case 0:
			vVar5 = { __LIB_0__::func_173(vParam6 - vParam3) };
			vVar8 = { __LIB_3__::func_744(vVar5, 0f, 0f, 1f) };
			*(uParam0[0 /*3*/]) = { vParam3 + __LIB_3__::func_857(0f, 0f, 0f, fParam11, 0.1f) };
			*(uParam0[1 /*3*/]) = { vParam3 + vVar8 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + __LIB_3__::func_857(0f, 0f, 0f, fParam11, 0.1f) };
			*(uParam0[2 /*3*/]) = { vParam3 - vVar8 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + __LIB_3__::func_857(0f, 0f, 0f, fParam11, 0.1f) };
			*(uParam1[0 /*3*/]) = { vVar5 };
			*(uParam1[1 /*3*/]) = { vVar5 };
			*(uParam1[2 /*3*/]) = { vVar5 };
			break;
		case 1:
			vVar2 = { __LIB_3__::func_858() };
			*(uParam1[0 /*3*/]) = { __LIB_0__::func_173(vVar2) };
			*(uParam1[1 /*3*/]) = { -*(uParam1[0 /*3*/]) };
			*(uParam0[0 /*3*/]) = { vParam3 - *(uParam1[0 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + __LIB_3__::func_857(0f, 0f, 0f, fParam11, 0.1f) };
			*(uParam0[1 /*3*/]) = { vParam3 - *(uParam1[1 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + __LIB_3__::func_857(0f, 0f, 0f, fParam11, 0.1f) };
			break;
		case 2:
			vVar2 = { __LIB_3__::func_858() };
			*(uParam1[0 /*3*/]) = { __LIB_0__::func_173(vVar2) };
			__LIB_3__::func_802(&vVar2, &(vVar2.f_1), 120f);
			*(uParam1[1 /*3*/]) = { __LIB_0__::func_173(vVar2) };
			__LIB_3__::func_802(&vVar2, &(vVar2.f_1), 120f);
			*(uParam1[2 /*3*/]) = { __LIB_0__::func_173(vVar2) };
			*(uParam0[0 /*3*/]) = { vParam3 - *(uParam1[0 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + __LIB_3__::func_857(0f, 0f, 0f, fParam11, 0.1f) };
			*(uParam0[1 /*3*/]) = { vParam3 - *(uParam1[1 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + __LIB_3__::func_857(0f, 0f, 0f, fParam11, 0.1f) };
			*(uParam0[2 /*3*/]) = { vParam3 - *(uParam1[2 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + __LIB_3__::func_857(0f, 0f, 0f, fParam11, 0.1f) };
			break;
	}
}

bool func_441(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	return PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_748(iParam0, 0));
}

int func_442(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_288(iParam0, 43, 1);
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iParam1) && PED::_0xF103823FFE72BB49(iVar0) == __LIB_0__::func_271(iParam0))
	{
		PED::_0xBCC76708E5677E1D(iVar0, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != __LIB_0__::func_271(iParam0))
	{
		return 0;
	}
	iVar2 = PED::_0xF103823FFE72BB49(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		iVar3 = __LIB_4__::func_656(iVar2);
		if (__LIB_0__::func_31(iVar3))
		{
			if (iVar3 != iParam0)
			{
				return 0;
			}
		}
		else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
		{
			return 0;
		}
		else if (PED::_IS_MOUNT_SEAT_FREE(iParam1, -1))
		{
			PED::_0xBCC76708E5677E1D(iParam1, 0);
		}
		else
		{
			return 0;
		}
	}
	bVar4 = __LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0);
	if (bParam3 || bVar4)
	{
		if (bVar4)
		{
			PED::_0x931B241409216C1F(__LIB_0__::func_271(iParam0), iParam1, 0);
			PED::_0xED1C764997A86D5A(__LIB_0__::func_271(iParam0), iParam1);
		}
	}
	else
	{
		__LIB_0__::func_288(iParam0, 38, 1);
	}
	__LIB_1__::func_547(iParam1, iParam0);
	Global_1360165[iParam0 /*1157*/].f_70 = iParam1;
	Global_1360165[iParam0 /*1157*/].f_124 = 0;
	return 1;
}

bool func_443(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	vVar0 = { __LIB_1__::func_546(__LIB_0__::func_317()) };
	fVar3 = __LIB_1__::func_496();
	if (__LIB_1__::func_410(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, fVar3, 0))
	{
		return true;
	}
	return false;
}

void func_444(int iParam0, bool bParam1, var uParam2)
{
	if (!__LIB_0__::func_30(*uParam2))
	{
		uParam2->f_1 = -15;
		return;
	}
	if (!__LIB_6__::func_787(iParam0, *uParam2, bParam1))
	{
		if (!uParam2->f_2)
		{
			if (__LIB_6__::func_836(iParam0, *uParam2, bParam1))
			{
			}
		}
	}
	if (uParam2->f_1 == -15 || (uParam2->f_1 != -15 && !__LIB_3__::func_77(uParam2->f_1)))
	{
		return;
	}
	__LIB_6__::func_821(iParam0, *uParam2, bParam1);
}

void func_445(var uParam0)
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
	iVar0 = uParam0->f_1688;
	if (iVar0 >= 0 && !__LIB_5__::func_142(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, true) <= uParam0->f_1016[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1692 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1692), __LIB_0__::func_67(uParam0->f_1345[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1692.f_8), __LIB_0__::func_67(uParam0->f_1345[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1692)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1692.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1345[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1345[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_1904), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1016[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1345[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 35)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1345[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1345[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902) || iVar26 != uParam0->f_1902))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
											__LIB_4__::func_765(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1345[iVar0 /*22*/].f_18 != 0f || uParam0->f_1345[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1345[iVar0 /*22*/].f_18, 0f, uParam0->f_1345[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1345[iVar0 /*22*/].f_18 != 0f || uParam0->f_1345[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, 1), uParam0->f_1345[iVar0 /*22*/].f_18, 0f, uParam0->f_1345[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_1016[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_1016[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1692));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_4__::func_765(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1708.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1708.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1708.f_22 != bVar30);
								uParam0->f_1708.f_16 = iVar23;
								uParam0->f_1708.f_17 = { vVar20 };
								uParam0->f_1708.f_20 = fVar27;
								uParam0->f_1708.f_21 = fVar28;
								uParam0->f_1708.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1708 = { uParam0->f_1692 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1708));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1731.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1731.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1731.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1731.f_21 != bVar30);
								uParam0->f_1731.f_16 = iVar23;
								uParam0->f_1731.f_17 = { vVar20 };
								uParam0->f_1731.f_20 = !bVar31;
								uParam0->f_1731.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1731 = { uParam0->f_1692 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1731));
								}
							}
							Jump @1466; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
							}
							StringCopy(&(uParam0->f_1692), "", 64);
							StringCopy(&(uParam0->f_1692.f_8), "", 64);
							__LIB_5__::func_150(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

void func_446(int iParam0, bool bParam1)
{
	vector3 vVar0[24];
	if (!CAM::IS_SCREEN_FADED_OUT() && !__LIB_2__::func_27(iParam0, 4))
	{
		if (__LIB_0__::func_265(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		__LIB_1__::func_148(&(iParam0->f_2896));
		if ((__LIB_0__::func_296(0, 0, 1) && !__LIB_2__::func_27(iParam0, 65536)) && !__LIB_3__::func_919(iParam0->f_2889, 1024))
		{
			return;
		}
	}
	if (__LIB_2__::func_27(iParam0, 128))
	{
		return;
	}
	if (__LIB_2__::func_27(iParam0, 134217728))
	{
		if (!__LIB_2__::func_27(iParam0, 16777216))
		{
			__LIB_4__::func_778(iParam0, 16);
			if (__LIB_5__::func_132(iParam0))
			{
				__LIB_6__::func_924(iParam0);
			}
			__LIB_5__::func_410(iParam0, 16777216);
		}
		cVar0 = { __LIB_4__::func_681(*iParam0) };
		if (__LIB_5__::func_518(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!__LIB_3__::func_919(iParam0->f_2889, 128))
			{
				__LIB_1__::func_109(iParam0->f_2889, 128);
			}
		}
		else if (__LIB_3__::func_919(iParam0->f_2889, 128))
		{
			__LIB_4__::func_728(iParam0->f_2889, 128);
		}
	}
}

void func_447(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 35)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_475[iParam1 /*18*/]), 4) && uParam0->f_475[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_475[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_475[iParam1 /*18*/]), 64) && __LIB_5__::func_158(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_475[iParam1 /*18*/].f_3 >= 0 && uParam0->f_475[iParam1 /*18*/].f_5 >= 0) && uParam0->f_475[iParam1 /*18*/].f_3 != uParam0->f_475[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_475[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_5__::func_612(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_448(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_0__::func_476(iParam0, iParam1);
}

void func_449(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && __LIB_1__::func_614(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				__LIB_4__::func_463(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_450(int iParam0)
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
					if (!__LIB_1__::func_707(iVar0, 1, 0))
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
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_3__::func_427(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
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
			__LIB_7__::func_389();
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

void func_451()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_LT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_RT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_ACTION"), false);
}

bool func_452(int iParam0)
{
	return __LIB_0__::func_1(Global_1935496.f_27, iParam0);
}

bool func_453()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return false;
	}
	return true;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WB_DISCO_CEREMONIAL_HATCHET"):
			return -261997819;
		case joaat("WB_DISCO_AXE_IN_TREE"):
			return 870958936;
		case joaat("WB_DISCO_AZTEC_MASK"):
			return 677950956;
		case joaat("WB_DISCO_BLACK_SHEEP"):
			return -35775921;
		case joaat("WB_DISCO_BOAT_IN_TREE"):
			return -1084929085;
		case joaat("WB_DISCO_BOOTS_NOTE_RANGE"):
			return 2135153015;
		case joaat("WB_DISCO_CIV_WAR_FORT"):
			return 1347913620;
		case joaat("WB_DISCO_CIV_WAR_KNIFE"):
			return -599506500;
		case joaat("WB_DISCO_CORPSE_PIT"):
			return -1568839185;
		case joaat("WB_DISCO_DEAD_CIV_WAR"):
			return 1937333853;
		case joaat("WB_DISCO_DREAMCATCHERS"):
			return -321841939;
		case joaat("WB_DISCO_EASEL"):
			return 1034793488;
		case joaat("WB_DISCO_FACE_IN_CLIFF"):
			return -2009137002;
		case joaat("WB_DISCO_FOSSILIZED_MAN"):
			return -1646022773;
		case joaat("WB_DISCO_GIANT_REMAINS"):
			return -1787770845;
		case joaat("WB_DISCO_GRAVE"):
			return -1761578407;
		case joaat("WB_DISCO_ARTHUR_GRAVE"):
			return 404434344;
		case joaat("WB_DISCO_KILL_ZONE"):
			return 503180747;
		case joaat("WB_DISCO_HIDDEN_TUNNEL"):
			return 308500632;
		case joaat("WB_DISCO_LOVE_MESSAGE"):
			return 74587361;
		case joaat("WB_DISCO_METEORITE"):
			return -709811179;
		case joaat("WB_DISCO_MICAH_CAMP"):
			return 118535038;
		case joaat("WB_DISCO_OLD_WORLD_SCRIPT"):
			return -1609238411;
		case joaat("WB_DISCO_PHONOGRAPH_HOUSE"):
			return -1614148516;
		case joaat("WB_DISCO_PILE_SKULLS"):
			return 173549940;
		case joaat("WB_DISCO_PIRATE_KNIFE"):
			return 1424723727;
		case joaat("WB_DISCO_POWDER_KEG"):
			return -1308658310;
		case joaat("WB_DISCO_REGISTER_ROCK"):
			return -1761189332;
		case joaat("WB_DISCO_SCARECROW_1"):
			return -1420566543;
		case joaat("WB_DISCO_SCARECROW_2"):
			return -1208846034;
		case joaat("WB_DISCO_SCARECROW_3"):
			return 1048086072;
		case joaat("WB_DISCO_SCARECROW_4"):
			return 939555152;
		case joaat("WB_DISCO_STONEHENGE"):
			return -161804536;
		case joaat("WB_DISCO_SUN_DIAL"):
			return -30872859;
		case joaat("WB_DISCO_SWAMP_HAND"):
			return 1519228573;
		case joaat("WB_DISCO_TREE_STRUCK"):
			return -1505275983;
		case joaat("WB_DISCO_VAMPIRE_CLUES"):
			return -890175011;
		case joaat("WB_DISCO_VIKING_GEAR"):
			return 733338689;
		case joaat("WB_DISCO_WHALE_BONE"):
			return -986176781;
		case joaat("WB_DISCO_BUCK_CARCASS"):
			return -1824429070;
		case joaat("WB_DISCO_BRUSH_FIRE"):
			return 1734766691;
		case joaat("WB_DISCO_FLATTENED_CABIN"):
			return -920971071;
		case joaat("WB_DISCO_OBELISK"):
			return -979575591;
		case joaat("WB_DISCO_WHISKEY_TREE"):
			return 464413478;
		case joaat("WB_DISCO_CIRCUS_WAGON"):
			return 657666087;
		case joaat("WB_DISCO_LIGHTNING_TREES"):
			return -715636193;
		case joaat("WB_DISCO_SERPENT_MOUND"):
			return -607940493;
		case joaat("WB_DISCO_DEAD_MINER"):
			return 425000526;
		case joaat("WB_DISCO_OLD_FIREPIT"):
			return -544327665;
		case joaat("WB_DISCO_FLYING_MACHINE"):
			return -1053108445;
		case joaat("WB_DISCO_OLD_GRAVESTONES"):
			return 230001763;
		case joaat("WB_DISCO_STRANGE_STATUES"):
			return 2000209669;
		case joaat("WB_DISCO_BROKEN_WAGONS"):
			return -1859023693;
		case joaat("WB_DISCO_BRA_SECRET"):
			return 1861313914;
		case joaat("WB_DISCO_BRAITH_3"):
			return -2108030724;
		case joaat("WB_DISCO_CRASHED_AIRSHIP"):
			return 58958195;
		case joaat("WB_DISCO_UTE_WICKUP"):
			return -1891628345;
		case joaat("WB_DISCO_WITCHES_CAULDRON"):
			return 1464664327;
		case joaat("WB_DISCO_OLD_DIRTY_CABIN"):
			return -654238687;
		case joaat("WB_DISCO_SPERM_WHALE"):
			return 1986618633;
		case joaat("WB_DISCO_FIRE_LOOKOUT_TOWER"):
			return 918206817;
		case joaat("WB_DISCO_BATS_IN_BARN"):
			return -2008558277;
		case joaat("WB_DISCO_HORNET_NESTS"):
			return -834293086;
		case joaat("WB_DISCO_BANK_STAGECOACH"):
			return 1335921989;
		case joaat("WB_DISCO_PAGAN_RITUAL"):
			return -739986731;
		case joaat("WB_DISCO_MAMMOTH"):
			return -148407339;
		case joaat("WB_DISCO_UTOPIAN_COLONY"):
			return -1960242214;
		case joaat("WB_DISCO_WAGON_CIRCLE"):
			return 1187689415;
		case joaat("WB_DISCO_METEOR_HOUSE"):
			return 1673499939;
		case joaat("WB_DISCO_WATER_DIVINER"):
			return -1177787273;
		case joaat("WB_DISCO_DEAD_CHINESE_TRAVELLER"):
			return 1342653896;
		case joaat("WB_DISCO_DEAD_SNAKE"):
			return -1714262909;
		case joaat("WB_DISCO_DESERT_WAGON"):
			return -1283611369;
		case joaat("WB_DISCO_MEDITATING_MONK"):
			return -415839138;
		case joaat("WB_DISCO_PIG_MASK"):
			return -763376358;
		case joaat("WB_DISCO_CAT_MASK"):
			return 1801731633;
		case joaat("WB_DISCO_RAM_MASK"):
			return 1490223565;
		case joaat("WB_DISCO_ANCIENT_SEALED_CLAY_URN"):
			return -1427565340;
		case joaat("WB_DISCO_TRADING_POST"):
			return -232974724;
		case joaat("WB_DISCO_TRAIL_TREES"):
			return -1272862985;
		case joaat("WB_DISCO_MAIL_TRUCK"):
			return -1061274876;
		case joaat("WB_DISCO_WHISPERING_TREES"):
			return 221420861;
		case joaat("WB_DISCO_CIV_WAR_BATTLEFIELD"):
			return 1535254161;
		case joaat("WB_DISCO_ABANDONED_MISSION"):
			return 683269210;
		case joaat("WB_DISCO_ANCIENT_ARROW_HEADS"):
			return 373034311;
		case joaat("WB_DISCO_ANCIENT_TOMAHAWK"):
			return 2072029413;
		case joaat("WB_DISCO_ANCIENT_URN"):
			return -1427565340;
		case joaat("WB_DISCO_DEAD_CHAIN_GANG"):
			return -499529359;
		case joaat("WB_DISCO_DEFACED_GRAVE"):
			return -780455182;
		case joaat("WB_DISCO_DERAILED_TRAIN"):
			return -2019711818;
		case joaat("WB_DISCO_DONKEY_LADY"):
			return -1636964661;
		case joaat("WB_DISCO_FACTORY_IN_SWAMP"):
			return 1154568952;
		case joaat("WB_DISCO_FROZEN_SETTLER"):
			return 2134589549;
		case joaat("WB_DISCO_DEAD_TOWN"):
			return -1109016944;
		case joaat("WB_DISCO_OBJECT_IN_TREE"):
			return 1124200691;
		case joaat("WB_DISCO_PIRATE_RUM"):
			return -357364973;
		case joaat("WB_DISCO_RUNAWAY_CORPSE"):
			return -641229542;
		case joaat("WB_DISCO_SHEEP_GUY"):
			return -777592153;
		case joaat("WB_DISCO_SHRINE"):
			return -1859413640;
		case joaat("WB_DISCO_POTS_TREE"):
			return -1686810506;
		case joaat("WB_DISCO_DEAD_BEAR"):
			return 2072069278;
		case joaat("WB_DISCO_OLD_FIREPLACE"):
			return 1120968795;
		case joaat("WB_DISCO_GRAVESTONE_TREE"):
			return -409986722;
		case joaat("WB_DISCO_ABANDONED_FURNITURE"):
			return -1882503209;
		case joaat("WB_DISCO_EARLY_SETTLERS"):
			return 1431862613;
		case joaat("WB_DISCO_RAILROAD_GRAVESTONE"):
			return -657632;
		case joaat("WB_DISCO_ABANDONED_CHURCH"):
			return -1958832660;
		case joaat("WB_DISCO_ABANDONED_WELL"):
			return -1481450947;
		case joaat("WB_DISCO_HERMIT_WOMAN"):
			return 1982045664;
		case joaat("WB_DISCO_INDIAN_BURIAL"):
			return -849582265;
		case joaat("WB_DISCO_BURNED_SETTLEMENT"):
			return 149709049;
		case joaat("WB_DISCO_FRANKENSTEIN_BOOK"):
			return 1284679164;
		case joaat("WB_DISCO_ROPE_BRIDGE"):
			return -1923503631;
		case joaat("WB_DISCO_PIRATE_SKELETON"):
			return -1144800837;
		case joaat("WB_DISCO_GRAYS_SECRET"):
			return -1887999095;
		case joaat("WB_DISCO_TREE_TRUNK_BOAT"):
			return -1457751321;
		case joaat("WB_DISCO_CONESTOGA_WAGON"):
			return 1187917501;
		case joaat("WB_DISCO_TREE_HOUSE"):
			return 1091556515;
		case joaat("WB_DISCO_GEYSER"):
			return 1351526287;
		case joaat("WB_DISCO_ABANDONED_OIL_WELL"):
			return -1300082860;
		case joaat("WB_DISCO_GHOST_TRAIN"):
			return 397377585;
		case joaat("WB_DISCO_METEOR_SHOWER"):
			return -777150535;
		case joaat("WB_DISCO_DESERTED_FARM"):
			return -919236330;
		case joaat("WB_DISCO_CATTLE_CARCASSES"):
			return -968854939;
		case joaat("WB_DISCO_BROKEN_BRIDGE"):
			return 1519472817;
		case joaat("WB_DISCO_ABANDONED_TRADING_POST"):
			return 247563739;
		case joaat("WB_DISCO_QUARRY"):
			return -1848895400;
		case joaat("WB_DISCO_ROADSIDE_BROTHEL"):
			return -2060865802;
		case joaat("WB_DISCO_LIGHTNING_ALLEY"):
			return -1841331114;
		case joaat("WB_DISCO_OVERTURNED_HEARSE"):
			return 949011950;
		case joaat("WB_DISCO_DESERT_SKELETONS"):
			return 1505050944;
		case joaat("WB_DISCO_FACE_TREES"):
			return -1243267511;
		case joaat("WB_DISCO_ALCHEMIST"):
			return 233600584;
		case joaat("WB_DISCO_JESUIT_MISSIONARY"):
			return 429544447;
		case joaat("WB_DISCO_MOUNTAIN_CLIMB"):
			return 1833243216;
		case joaat("WB_DISCO_BLACK_FLOWER"):
			return -1494823099;
		case joaat("WB_DISCO_ONE_ROOM_CHURCH"):
			return 921081956;
		case joaat("WB_DISCO_TREASURE_MAP_HALVES"):
			return 513110082;
		case joaat("WB_DISCO_STUFFED_GORILLA"):
			return -490142739;
		case joaat("WB_DISCO_OLD_RAILROAD_CAMP"):
			return 330993088;
		case joaat("WB_DISCO_BIRD_NEST"):
			return 435290930;
		case joaat("WB_DISCO_BARREL_RIDER"):
			return -1287911066;
		case joaat("WB_DISCO_DEAD_MICAH"):
			return -1240932004;
		case joaat("WB_DISCO_WAGON_CHEST"):
			return -1829339703;
		default:
			break;
	}
	return 0;
}

void func_455(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_6.f_10));
	}
}

void func_456(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 6, 0);
	}
}

bool func_457(int iParam0)
{
	switch (iParam0)
	{
		case -1891628345:
		case -1859413640:
		case -1761578407:
		case -849582265:
		case -780455182:
		case -739986731:
		case -641229542:
		case -499529359:
		case -657632:
		case 230001763:
		case 404434344:
		case 429544447:
		case 683269210:
		case 921081956:
		case 949011950:
		case 1861313914:
		case 2072029413:
			return true;
	}
	return false;
}

void func_458(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
}

int func_459(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
		case -2060865802:
			return 116;
		case -2019711818:
			return 9;
		case -2009137002:
			return 34;
		case -2008558277:
			return 59;
		case -1960242214:
			return 125;
		case -1958832660:
			return 49;
		case -1923503631:
			return 117;
		case -1891628345:
			return 124;
		case -1887999095:
			return 89;
		case -1882503209:
			return 50;
		case -1859413640:
			return 28;
		case -1859023693:
			return 64;
		case -1848895400:
			return 113;
		case -1841331114:
			return 94;
		case -1829339703:
			return 141;
		case -1824429070:
			return 66;
		case -1787770845:
			return 16;
		case -1761578407:
			return 17;
		case -1761189332:
			return 115;
		case -1714262909:
			return 76;
		case -1686810506:
			return 112;
		case -1646022773:
			return 13;
		case -1636964661:
			return 10;
		case -1614148516:
			return 48;
		case -1609238411:
			return 21;
		case -1568839185:
			return 6;
		case -1505275983:
			return 31;
		case -1494823099:
			return 61;
		case -1481450947:
			return 53;
		case -1457751321:
			return 123;
		case -1427565340:
			return 47;
		case -1420566543:
			return 23;
		case -1308658310:
			return 45;
		case -1300082860:
			return 51;
		case -1287911066:
			return 2;
		case -1283611369:
			return 78;
		case -1272862985:
			return 139;
		case -1243267511:
			return 81;
		case -1240932004:
			return 140;
		case -1208846034:
			return 24;
		case -1177787273:
			return 127;
		case -1144800837:
			return 111;
		case -1109016944:
			return 15;
		case -1084929085:
			return 4;
		case -1061274876:
			return 96;
		case -1053108445:
			return 84;
		case -986176781:
			return 25;
		case -979575591:
			return 103;
		case -968854939:
			return 68;
		case -920971071:
			return 83;
		case -919236330:
			return 79;
		case -890175011:
			return 137;
		case -849582265:
			return 92;
		case -834293086:
			return 91;
		case -780455182:
			return 8;
		case -777592153:
			return 3;
		case -777150535:
			return 100;
		case -763376358:
			return 55;
		case -739986731:
			return 110;
		case -715636193:
			return 95;
		case -709811179:
			return 20;
		case -654238687:
			return 104;
		case -641229542:
			return 46;
		case -607940493:
			return 118;
		case -599506500:
			return 38;
		case -544327665:
			return 106;
		case -499529359:
			return 74;
		case -490142739:
			return 130;
		case -415839138:
			return 98;
		case -409986722:
			return 88;
		case -357364973:
			return 44;
		case -321841939:
			return 11;
		case -261997819:
			return 37;
		case -232974724:
			return 135;
		case -161804536:
			return 29;
		case -148407339:
			return 97;
		case -35775921:
			return 40;
		case -30872859:
			return 30;
		case -657632:
			return 114;
		case 0:
			return 143;
		case 58958195:
			return 72;
		case 74587361:
			return 35;
		case 118535038:
			return 101;
		case 149709049:
			return 67;
		case 173549940:
			return 22;
		case 221420861:
			return 132;
		case 230001763:
			return 107;
		case 233600584:
			return 54;
		case 247563739:
			return 52;
		case 308500632:
			return 136;
		case 330993088:
			return 131;
		case 373034311:
			return 0;
		case 397377585:
			return 87;
		case 404434344:
			return 18;
		case 425000526:
			return 75;
		case 429544447:
			return 93;
		case 435290930:
			return 60;
		case 464413478:
			return 128;
		case 503180747:
			return 19;
		case 513110082:
			return 121;
		case 657666087:
			return 70;
		case 677950956:
			return 142;
		case 683269210:
			return 134;
		case 733338689:
			return 32;
		case 870958936:
			return 1;
		case 918206817:
			return 82;
		case 921081956:
			return 108;
		case 939555152:
			return 27;
		case 949011950:
			return 109;
		case 1034793488:
			return 33;
		case 1048086072:
			return 26;
		case 1091556515:
			return 122;
		case 1120968795:
			return 105;
		case 1124200691:
			return 43;
		case 1154568952:
			return 12;
		case 1187689415:
			return 126;
		case 1187917501:
			return 71;
		case 1284679164:
			return 85;
		case 1335921989:
			return 58;
		case 1342653896:
			return 69;
		case 1347913620:
			return 5;
		case 1351526287:
			return 86;
		case 1424723727:
			return 39;
		case 1431862613:
			return 80;
		case 1464664327:
			return 129;
		case 1490223565:
			return 57;
		case 1505050944:
			return 77;
		case 1519228573:
			return 42;
		case 1519472817:
			return 63;
		case 1535254161:
			return 133;
		case 1673499939:
			return 99;
		case 1734766691:
			return 65;
		case 1801731633:
			return 56;
		case 1833243216:
			return 102;
		case 1861313914:
			return 62;
		case 1937333853:
			return 7;
		case 1982045664:
			return 90;
		case 1986618633:
			return 119;
		case 2000209669:
			return 120;
		case 2072029413:
			return 36;
		case 2072069278:
			return 73;
		case 2134589549:
			return 14;
		case 2135153015:
			return 41;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

Vector3 func_460(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return 827.9519f, 1925.23f, 258.7208f;
			}
			else if (iParam1 == 1)
			{
				return 832.673f, 1922.286f, 258.7208f;
			}
			else if (iParam1 == 2)
			{
				return 829.6969f, 1926.987f, 258.7208f;
			}
			else if (iParam1 == 3)
			{
				return 832.1583f, 1926.718f, 258.7208f;
			}
			else if (iParam1 == 4)
			{
				return 828.2374f, 1922.771f, 258.7208f;
			}
			else if (iParam1 == 5)
			{
				return 830.3385f, 1921.46f, 258.7208f;
			}
			else if (iParam1 == 6)
			{
				return 833.4829f, 1924.626f, 258.7208f;
			}
			else if (iParam1 == 7)
			{
				return 830.591f, 1924.07f, 258.795f;
			}
			else if (iParam1 == 11)
			{
				return -160.9032f, 1599.633f, 180.2413f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1280505101;
		case 1:
			return 437457038;
		case 2:
			return 787823186;
		case 3:
			return -22914651;
		case 4:
			return -207797345;
		case 5:
			return 152333965;
		case 6:
			return -705591224;
		case 7:
			return -307775564;
		case 8:
			return -1166159519;
		case 9:
			return -164804701;
		case 10:
			return -1562042092;
		case 11:
			return -1717629304;
		case 12:
			return -1669917636;
		case 13:
			return -884608551;
		case 14:
			return -1143188730;
		case 15:
			return 1856092306;
		case 16:
			return 1445824426;
		case 17:
			return -2082446577;
		case 18:
			return 2030128465;
		case 19:
			return -597126414;
		default:
			break;
	}
	return 0;
}

int func_462(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -780455182:
			return 1614617630;
		case -1287911066:
			return -617882357;
		case -1636964661:
			return 1599532233;
		case -1646022773:
			return -65357919;
		case 2134589549:
			return 2004715705;
		case -1109016944:
			return -1451193020;
		case 308500632:
			return 1553391542;
		case -709811179:
			return 317656811;
		case -1609238411:
			return 1910189712;
		case -986176781:
			return -1896654834;
		case -161804536:
			return -126421233;
		case -2009137002:
			return -440810089;
		case 1519228573:
			return -703551507;
		case -1614148516:
			return -1705330644;
		case -1958832660:
			return -245016475;
		case -1300082860:
			return 1529964155;
		case 247563739:
			return 325616917;
		case 1861313914:
			return 1067266077;
		case 1734766691:
			return 1292039078;
		case 657666087:
			return -1721762433;
		case 58958195:
			return 712585684;
		case -1243267511:
			return -1482291365;
		case -1053108445:
			return -1576735250;
		case 1982045664:
			return -1173476934;
		case -849582265:
			return 2097588565;
		case 429544447:
			return -159963867;
		case -148407339:
			return -1155213091;
		case -415839138:
			return 979428630;
		case 1673499939:
			return -720689005;
		case -979575591:
			return 463289412;
		case 921081956:
			return 731487006;
		case -739986731:
			return 371066;
		case -1761189332:
			return 270899202;
		case -607940493:
			return 894739389;
		case 1986618633:
			return -2113673964;
		case -1891628345:
			return -804420153;
		case -1960242214:
			return 1747567809;
		case -232974724:
			return -792295257;
		case 1535254161:
			return -452661064;
		case -1505275983:
			return 387715582;
		case 1284679164:
			return -1245190585;
		case -1787770845:
			return 422665644;
		case -1887999095:
			return -95543768;
		case 1034793488:
			return 120200140;
		case 2000209669:
			switch (iParam1)
			{
				case 11:
					return -615993722;
				default:
					break;
			}
			return -866955093;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 493724241;
				case 1:
					return 1378917331;
				case 2:
					return -1267048347;
				case 3:
					return 1840337620;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_463(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case -321841939:
				return joaat("JOURNAL_DISC_DREAMCATCHER_MAP_AR");
			case -1958832660:
				return joaat("JOURNAL_DISC_ABANDONED_CHURCH_AR");
			case 247563739:
				return joaat("JOURNAL_DISC_ABANDONED_TRADING_POST_AR");
			case -1300082860:
				return joaat("JOURNAL_DISC_OIL_WELL_AR");
			case -1287911066:
				return joaat("JOURNAL_DISC_BARREL_RIDER_AR");
			case 1861313914:
				return joaat("JOURNAL_DISC_BRAITHWAITE_SECRET_AR");
			case 1734766691:
				return joaat("JOURNAL_DISC_BRUSH_FIRE_AR");
			case 657666087:
				return joaat("JOURNAL_DISC_CIRCUS_WAGONS_AR");
			case 1535254161:
				return joaat("JOURNAL_DISC_CIVIL_WAR_AR");
			case 58958195:
				return joaat("JOURNAL_DISC_CRASHED_AIRSHIP_AR");
			case -1109016944:
				return joaat("JOURNAL_DISC_DEAD_TOWN_AR");
			case -780455182:
				return joaat("JOURNAL_DISC_DEFACED_GRAVE_AR");
			case -1636964661:
				return joaat("JOURNAL_DISC_DONKEY_LADY_AR");
			case -2009137002:
				return joaat("JOURNAL_DISC_FACE_CLIFF_AR");
			case -1243267511:
				return joaat("JOURNAL_DISC_FACE_TREES_AR");
			case -1053108445:
				return joaat("JOURNAL_DISC_FLYING_MACHINE_AR");
			case -1646022773:
				return joaat("JOURNAL_DISC_FOSSILISED_MAN_AR");
			case 1284679164:
				return joaat("JOURNAL_DISC_FRANKENSTEIN_AR");
			case 2134589549:
				return joaat("JOURNAL_DISC_FROZEN_SETTLER_AR");
			case -1787770845:
				return joaat("JOURNAL_DISC_GIANT_REMAINS_AR");
			case -1887999095:
				return joaat("JOURNAL_DISC_GRAYS_SECRET_AR");
			case 1519228573:
				return joaat("JOURNAL_DISC_HAND_SWAMP_AR");
			case 1982045664:
				return joaat("JOURNAL_DISC_HERMIT_WOMAN_AR");
			case 308500632:
				return joaat("JOURNAL_DISC_HIDDEN_TUNNEL_AR");
			case -849582265:
				return joaat("JOURNAL_DISC_INDIAN_BURIAL_AR");
			case 429544447:
				return joaat("JOURNAL_DISC_JESUIT_AR");
			case -148407339:
				return joaat("JOURNAL_DISC_MAMMOTH_AR");
			case -415839138:
				return joaat("JOURNAL_DISC_MEDITATING_MONK_AR");
			case -709811179:
				return joaat("JOURNAL_DISC_METEORITE_AR");
			case 1673499939:
				return joaat("JOURNAL_DISC_METEOR_HOUSE_AR");
			case -979575591:
				return joaat("JOURNAL_DISC_OBELISK_AR");
			case -1609238411:
				return joaat("JOURNAL_DISC_OLD_SCRIPTS_AR");
			case 921081956:
				return joaat("JOURNAL_DISC_ONE_ROOM_CHURCH_AR");
			case -739986731:
				return joaat("JOURNAL_DISC_PAGAN_RITUAL_AR");
			case 1034793488:
				return joaat("JOURNAL_DISC_PAINTING_CABIN_AR");
			case -1614148516:
				return joaat("JOURNAL_DISC_PHONOGRAPH_AR");
			case -1761189332:
				return joaat("JOURNAL_DISC_REGISTER_ROCK_AR");
			case -607940493:
				return joaat("JOURNAL_DISC_SERPENT_MOUND_AR");
			case 1986618633:
				return joaat("JOURNAL_DISC_SPERM_WHALE_AR");
			case -161804536:
				return joaat("JOURNAL_DISC_STONEHENGE_AR");
			case 2000209669:
				if (iParam2 == 11)
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_PAINTING_AR");
				}
				else
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_AR");
				}
				break;
			case -232974724:
				return joaat("JOURNAL_DISC_TRADING_POST_AR");
			case -1272862985:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_01_AR");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_02_AR");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_03_AR");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_04_AR");
				}
				break;
			case -1891628345:
				return joaat("JOURNAL_DISC_UTE_WICKIUP");
			case -1960242214:
				return joaat("JOURNAL_DISC_COLONY_AR");
			case -1505275983:
				return joaat("JOURNAL_DISC_WARPED_TREE_AR");
			case -890175011:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP2_AR");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP1_AR");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP5_AR");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP4_AR");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP3_AR");
				}
				break;
			case -986176781:
				return joaat("JOURNAL_DISC_WHALE_BONE_AR");
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -321841939:
				return joaat("JOURNAL_DISC_DREAMCATCHER_MAP_JN");
			case -1958832660:
				return joaat("JOURNAL_DISC_ABANDONED_CHURCH_JN");
			case 247563739:
				return joaat("JOURNAL_DISC_ABANDONED_TRADING_POST_JN");
			case -1300082860:
				return joaat("JOURNAL_DISC_OIL_WELL_JN");
			case 677950956:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_1_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_2_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_3_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_4_JN");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_5_JN");
				}
				else if (iParam2 == 5)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_6_JN");
				}
				break;
			case -1287911066:
				return joaat("JOURNAL_DISC_BARREL_RIDER_JN");
			case 1734766691:
				return joaat("JOURNAL_DISC_BRUSH_FIRE_JN");
			case 657666087:
				return joaat("JOURNAL_DISC_CIRCUS_WAGONS_JN");
			case 1535254161:
				return joaat("JOURNAL_DISC_CIVIL_WAR_JN");
			case 58958195:
				return joaat("JOURNAL_DISC_CRASHED_AIRSHIP_JN");
			case -1109016944:
				return joaat("JOURNAL_DISC_DEAD_TOWN_JN");
			case -780455182:
				return joaat("JOURNAL_DISC_DEFACED_GRAVE_JN");
			case -1636964661:
				return joaat("JOURNAL_DISC_DONKEY_LADY_JN");
			case -2009137002:
				return joaat("JOURNAL_DISC_FACE_CLIFF_JN");
			case -1243267511:
				return joaat("JOURNAL_DISC_FACE_TREES_JN");
			case -1053108445:
				return joaat("JOURNAL_DISC_FLYING_MACHINE_JN");
			case -1646022773:
				return joaat("JOURNAL_DISC_FOSSILISED_MAN_JN");
			case 1284679164:
				return joaat("JOURNAL_DISC_FRANKENSTEIN_JN");
			case 2134589549:
				return joaat("JOURNAL_DISC_FROZEN_SETTLER_JN");
			case -1787770845:
				return joaat("JOURNAL_DISC_GIANT_REMAINS_JN");
			case -1887999095:
				return joaat("JOURNAL_DISC_GRAYS_SECRET_JN");
			case 1519228573:
				return joaat("JOURNAL_DISC_HAND_SWAMP_JN");
			case 1982045664:
				return joaat("JOURNAL_DISC_HERMIT_WOMAN_JN");
			case 308500632:
				return joaat("JOURNAL_DISC_HIDDEN_TUNNEL_JN");
			case -849582265:
				return joaat("JOURNAL_DISC_INDIAN_BURIAL_JN");
			case 429544447:
				return joaat("JOURNAL_DISC_JESUIT_JN");
			case -148407339:
				return joaat("JOURNAL_DISC_MAMMOTH_JN");
			case -415839138:
				return joaat("JOURNAL_DISC_MEDITATING_MONK_JN");
			case -709811179:
				return joaat("JOURNAL_DISC_METEORITE_JN");
			case 1673499939:
				return joaat("JOURNAL_DISC_METEOR_HOUSE_JN");
			case -979575591:
				return joaat("JOURNAL_DISC_OBELISK_JN");
			case -1609238411:
				return joaat("JOURNAL_DISC_OLD_SCRIPTS_JN");
			case 921081956:
				return joaat("JOURNAL_DISC_ONE_ROOM_CHURCH_JN");
			case -739986731:
				return joaat("JOURNAL_DISC_PAGAN_RITUAL_JN");
			case 1034793488:
				return joaat("JOURNAL_DISC_PAINTING_CABIN_JN");
			case -1614148516:
				return joaat("JOURNAL_DISC_PHONOGRAPH_JN");
			case -1761189332:
				return joaat("JOURNAL_DISC_REGISTER_ROCK_JN");
			case -607940493:
				return joaat("JOURNAL_DISC_SERPENT_MOUND_JN");
			case 1986618633:
				return joaat("JOURNAL_DISC_SPERM_WHALE_JN");
			case -161804536:
				return joaat("JOURNAL_DISC_STONEHENGE_JN");
			case 2000209669:
				if (iParam2 == 11)
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_PAINTING_JN");
				}
				else
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_JN");
				}
				break;
			case -232974724:
				return joaat("JOURNAL_DISC_TRADING_POST_JN");
			case -1272862985:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_01_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_02_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_03_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_04_JN");
				}
				break;
			case -1891628345:
				return joaat("JOURNAL_DISC_UTE_WICKIUP_JN");
			case -1960242214:
				return joaat("JOURNAL_DISC_COLONY_JN");
			case -1505275983:
				return joaat("JOURNAL_DISC_WARPED_TREE_JN");
			case -986176781:
				return joaat("JOURNAL_DISC_WHALE_BONE_JN");
			case -890175011:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP2_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP1_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP5_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP4_JN");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP3_JN");
				}
				break;
			default:
				break;
		}
	}
	return 0;
}

int func_464()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_1(Global_40.f_8863.f_154, 2048))
	{
		iVar0++;
	}
	if (__LIB_0__::func_1(Global_40.f_8863.f_154, 4096))
	{
		iVar0++;
	}
	if (__LIB_0__::func_1(Global_40.f_8863.f_154, 8192))
	{
		iVar0++;
	}
	if (__LIB_0__::func_1(Global_40.f_8863.f_154, 16384))
	{
		iVar0++;
	}
	if (__LIB_0__::func_1(Global_40.f_8863.f_154, 32768))
	{
		iVar0++;
	}
	return iVar0;
}

int func_465(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar6 = { VOLUME::_GET_VOLUME_ROTATION(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return 1;
}

bool func_466(int iParam0)
{
	switch (iParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1861313914:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
	}
	return false;
}

Vector3 func_467(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 1268.29f, -386.947f, 88.4659f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 2255.46f, -753.712f, 42.5807f;
				case 1:
					return 2255.29f, -753.756f, 42.8407f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 2545.93f, 800.34f, 77.013f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 2286.46f, -727.94f, 42.98f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -5151.3f, -2118.4f, 13f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1123.43f, 430.557f, 95.3598f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3338.99f, -2501.585f, 1.926f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return -2334.66f, 102.11f, 221.988f;
				case 1:
					return -2351.106f, 111.0932f, 217f;
				case 2:
					return -2351.33f, 110.337f, 216.825f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2367.9f, 124.4f, 215.94f;
				case 1:
					return -2366.67f, 124.726f, 215.914f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return -1619.97f, 1353.525f, 356.399f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 2383.35f, 1695.3f, 96.018f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 2442.855f, 287.212f, 66.39f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 2195.15f, -554.37f, 41.02f;
				case 1:
					return 2195.38f, -554.33f, 41.02f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 365.9631f, -16.5072f, 99.3002f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 1068.42f, -2024.7f, 49.25f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1581.16f, -1383.19f, 55.3f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return -2311.151f, -2380.23f, 64.66f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 1139.765f, 464.21f, 98.375f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 2685.89f, 70.2216f, 58.3001f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 180.217f, 1304.7f, 178.603f;
				case 1:
					return 180.267f, 1304.62f, 178.607f;
				case 2:
					return 180.387f, 1304.79f, 178.601f;
				case 3:
					return 180.397f, 1304.7f, 178.605f;
				case 4:
					return 180.437f, 1304.66f, 178.599f;
				default:
					break;
			}
			break;
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return -2530.628f, 1173.581f, 225.1708f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 3029.425f, 1775.791f, 83.79f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return -4394.6f, -2159.37f, 47.498f;
					case 1:
						return -4394.685f, -2159.115f, 47.5059f;
					case 2:
						return -4394.76f, -2159.05f, 47.498f;
					case 3:
						return -4394.446f, -2159.219f, 47.523f;
					case 4:
						return -4394.639f, -2159.254f, 47.499f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 2811.864f, 996.6885f, 53.9353f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return -161.8621f, 1734.902f, 170.799f;
				case 1:
					return -161.862f, 1734.9f, 170.687f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 2289.75f, 2081.3f, 199.581f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 494.1373f, -301.9945f, 147.9723f;
				case 1:
					return 494.1373f, -301.9945f, 147f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2343.751f, -2181.372f, 73.3274f;
				case 1:
					return -2343.751f, -2181.372f, 73.3274f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -5886.735f, -2762.121f, -5.0027f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.28f, 1997.81f, 166.918f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 2316.89f, 1072.69f, 94.409f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return -1019.89f, 1692.11f, 244.105f;
				case 1:
					return -988.1135f, 1692.075f, 243.3826f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2904.945f, -254.221f, 187.3f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 830.571f, 1924.11f, 258.798f;
				case 1:
					return 830.641f, 1924.09f, 258.798f;
				case 2:
					return 830.611f, 1924.12f, 258.825f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.56f, -2669.16f, 42.2f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 398.28f, -1267.89f, 40.737f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 2443.16f, 290.578f, 66.5052f;
				default:
					break;
			}
			break;
		case -1614148516:
			switch (iParam1)
			{
				case 0:
					return 2307.592f, -330.3333f, 41.6732f;
				default:
					break;
			}
			break;
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return -5854.019f, -3745.071f, -25.5216f;
				case 1:
					return -5854.012f, -3744.898f, -25.519f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.43f, -1769.6f, 52.5869f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return -1530.689f, -308.1162f, 141.4804f;
				case 1:
					return -1532.051f, -308.3718f, 141.5067f;
				case 2:
					return -1530.594f, -308.8933f, 141.4845f;
				default:
					break;
			}
			break;
		case -1891628345:
			switch (iParam1)
			{
				case 0:
					return -2694.601f, -1500.248f, 150.5708f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1755.078f, -1623.864f, 90.579f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1259.735f, 1294.358f, 216.0961f;
				case 1:
					return 1259.735f, 1294.358f, 216.0961f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 2385.799f, 1696.725f, 95.7555f;
				case 1:
					return 2385.81f, 1696.69f, 95.7678f;
				default:
					break;
			}
			break;
		case -1761578407:
			switch (iParam1)
			{
				case 0:
					return 1735.312f, -1894.472f, 44.5668f;
				default:
					break;
			}
			break;
		case 247563739:
			switch (iParam1)
			{
				case 0:
					return 2448.58f, 2097.729f, 172.2719f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -232974724:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_468(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR_I";
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_GRAVE_HOSEA_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_LENNY_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY_I";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN_I";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN_I";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE_I";
			}
			break;
		case -1243267511:
			return "DISC_VOL_FACE_TREES_I";
		case 1535254161:
			return "DISC_VOL_CIV_WAR_I";
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND_I";
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMP_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMP_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMP_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMP_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMP_CLUES_5_I";
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUES_5_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUES_6_I";
			}
			break;
	}
	return "";
}

bool func_469()
{
	if (PED::_IS_PED_HOGTIED(Global_35))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTYING(Global_35))
	{
		return false;
	}
	if (PED::_IS_PED_LASSOED(Global_35))
	{
		return false;
	}
	if (PED::_0xEF3A8772F085B4AA(Global_35))
	{
		return false;
	}
	if (!PED::_GET_LASSO_TARGET(Global_35) == 0)
	{
		return false;
	}
	if (PED::_0x226CF9B159E38F42(Global_35))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return false;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_470()
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		return false;
	}
	return true;
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 683269210:
			return 993246734;
		case -1300082860:
			return -1212881551;
		case 247563739:
			return 1352537560;
		case 149709049:
			return 2021420613;
		case 1347913620:
			return 460210291;
		case -1109016944:
			return -2011320133;
		case -919236330:
			return 539572870;
		case 918206817:
			return -1262808306;
		case -920971071:
			return 1582457845;
		case 1673499939:
			return 1195199040;
		case -654238687:
			return 2056389698;
		case -2060865802:
			return -1988847961;
		case -232974724:
			return -942443338;
		case -1960242214:
			return 66159563;
		case 1464664327:
			return 387869270;
		case -1240932004:
			return -875696111;
		default:
			break;
	}
	return 0;
}

bool func_472(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

bool func_473(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_3, 1))
	{
		return true;
	}
	return false;
}

bool func_474(var uParam0)
{
	switch (*uParam0)
	{
		case -544327665:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 4))
				{
					return true;
				}
			}
			break;
		case 2000209669:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 16384))
				{
					return true;
				}
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 2048))
				{
					return true;
				}
			}
			break;
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 8388608))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 16777216))
				{
					return true;
				}
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 512))
				{
					return true;
				}
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 32768))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 2097152))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_153, 4194304))
				{
					return true;
				}
			}
			break;
		case 404434344:
			if (__LIB_0__::func_1(Global_40.f_8863.f_154, 1))
			{
				return true;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 1024))
				{
					return true;
				}
			}
			break;
		case -321841939:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 2048))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 12)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 13)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 14)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 32768))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 15)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 16)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 17)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 18)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 19)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_148, 1048576))
				{
					return true;
				}
			}
			break;
		case 870958936:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_149, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_149, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_149, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_149, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_149, 16))
				{
					return true;
				}
			}
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 1))
					{
						return true;
					}
					break;
				case 1:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 2))
					{
						return true;
					}
					break;
				case 2:
					if (((((__LIB_0__::func_1(Global_40.f_8863.f_150, 4) && __LIB_0__::func_1(Global_40.f_8863.f_150, 8)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 16)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 32)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 64)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 128))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 2048))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 32768))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 2097152))
				{
					return true;
				}
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_152, 2097152))
				{
					return true;
				}
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_475(var uParam0)
{
	if (__LIB_0__::func_567(uParam0->f_6.f_8, 1))
	{
		return true;
	}
	return false;
}

void func_476(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, 1710353528, 0);
	}
}

int func_477()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = __LIB_0__::func_668(iVar0);
		if (__LIB_0__::func_1(Global_40.f_8863.f_148, iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_478()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar1 = __LIB_0__::func_668(iVar0);
		if (!__LIB_0__::func_1(Global_40.f_8863.f_148, iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_479()
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		return false;
	}
	if (__LIB_1__::func_376(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return false;
	}
	if (PED::_IS_PED_FALLING_2(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		return false;
	}
	return true;
}

bool func_480(bool bParam0)
{
	if (PED::_IS_PED_CARRYING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_481(int iParam0)
{
	return __LIB_7__::func_452(iParam0);
}

bool func_482()
{
	if (__LIB_2__::func_365(Global_35) && !Global_1392040.f_2)
	{
		return false;
	}
	if (__LIB_3__::func_996(Global_35) && !Global_1392040.f_2)
	{
		return false;
	}
	return true;
}

bool func_483()
{
	if (__LIB_0__::func_898(932909855))
	{
		return true;
	}
	return false;
}

bool func_484()
{
	if (__LIB_0__::func_898(2051822093))
	{
		return true;
	}
	return false;
}

void func_485(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_6.f_8))
	{
		__LIB_1__::func_748(&(uParam0->f_6.f_8), 1, 1);
	}
	__LIB_1__::func_148(&(uParam0->f_6.f_5));
	if (__LIB_0__::func_1(uParam0->f_3, 2))
	{
		__LIB_1__::func_993(&(uParam0->f_3), 2);
	}
}

void func_486(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	__LIB_6__::func_670(__LIB_0__::func_23(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

int func_487(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_7__::func_463(iParam0, 1, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	iVar0 = __LIB_7__::func_463(iParam0, 0, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_488(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char* sVar9;
	if (__LIB_7__::func_457(*uParam0))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
		{
			switch (*uParam0)
			{
				case 683269210:
					vVar0 = { -5576.82f, -2583.934f, -9.541f };
					vVar3 = { 0f, 0f, 30.534f };
					vVar6 = { 13.524f, 10.157f, 15.906f };
					sVar9 = "DLAM_Attack";
					break;
				case 2072029413:
					vVar0 = { 808.518f, 2299.105f, 250.32f };
					vVar3 = { 0f, 0f, 21.51f };
					vVar6 = { 5f, 4f, 9f };
					sVar9 = "DLAT_Attack";
					break;
				case -849582265:
					vVar0 = { -2587.832f, -81.85f, 166.262f };
					vVar3 = { 0f, 0f, 9.056f };
					vVar6 = { 52.076f, 56.679f, 16.103f };
					sVar9 = "DLIB_Attack";
					break;
				case 1861313914:
					vVar0 = { 894.559f, -1969.353f, 43.7f };
					vVar3 = { 0f, 0f, 51.997f };
					vVar6 = { 4.5f, 4.5f, 6f };
					sVar9 = "DLBS_Attack";
					break;
				case -641229542:
					vVar0 = { 1750.836f, -2091.653f, 40.941f };
					vVar3 = { 0f, 0f, -30.078f };
					vVar6 = { 2.215f, 3.182f, 2.394f };
					sVar9 = "DLRC_Attack";
					break;
				case -499529359:
					vVar0 = { 2285.546f, 97.363f, 49.583f };
					vVar3 = { 0f, 0f, -30.998f };
					vVar6 = { 7.132f, 4.645f, 4.596f };
					sVar9 = "DLDCG_Attack";
					break;
				case -780455182:
					vVar0 = { -988.307f, 1692.387f, 243.864f };
					vVar3 = { 0f, 0f, 0f };
					vVar6 = { 4.673f, 3.887f, 3.06f };
					sVar9 = "DLDG_Attack";
					break;
				case 429544447:
					vVar0 = { -6314.771f, -3467f, -11.247f };
					vVar3 = { 0f, 0f, 32.675f };
					vVar6 = { 2.852f, 3.164f, 3.06f };
					sVar9 = "DLJM_Attack";
					break;
				case 230001763:
					vVar0 = { 2133.283f, 145.452f, 75.745f };
					vVar3 = { 0f, 0f, 58.303f };
					vVar6 = { 17.167f, 17.176f, 9.904f };
					sVar9 = "DLOG_Attack";
					break;
				case 921081956:
					vVar0 = { 2415.271f, -738.691f, 41f };
					vVar3 = { 0f, 0f, 89.245f };
					vVar6 = { 6.662f, 6.841f, 12.231f };
					sVar9 = "DLORC_Attack";
					break;
				case 949011950:
					vVar0 = { -2341.024f, -2180.015f, 70f };
					vVar3 = { 0f, 0f, 123.618f };
					vVar6 = { 7.322f, 10.134f, 10.231f };
					sVar9 = "DLOH_Attack";
					break;
				case -739986731:
					vVar0 = { -2905.353f, -254.294f, 186.571f };
					vVar3 = { 0f, 0f, 129.763f };
					vVar6 = { 7.64f, 7.534f, 4f };
					sVar9 = "DLPR_Attack";
					break;
				case -657632:
					vVar0 = { 2684.651f, 71.256f, 59f };
					vVar3 = { 0f, 0f, 111.493f };
					vVar6 = { 4.343f, 3.084f, 3.303f };
					sVar9 = "DLRG_Attack";
					break;
				case -1761578407:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case 404434344:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case -1891628345:
					vVar0 = { -2694.572f, -1500.398f, 150f };
					vVar3 = { 0f, 0f, 1.841f };
					vVar6 = { 16.663f, 12.967f, 11.141f };
					sVar9 = "DLUW_Attack";
					break;
				case -1859413640:
					vVar0 = { 2195.32f, -554.613f, 40.995f };
					vVar3 = { 0f, 0f, -74.605f };
					vVar6 = { 1.691f, 1.755f, 2.318f };
					sVar9 = "DLSW_Attack";
					break;
			}
			uParam0->f_2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, sVar9);
		}
	}
}

bool func_489(var uParam0)
{
	struct<7> Var0;
	vector3 vVar7;
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		__LIB_7__::func_465(*uParam0, &Var0);
		if (FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, Var0, Var0.f_3, Var0.f_6) == __LIB_0__::func_57(Global_35))
		{
			return true;
		}
		else if (MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, true))
		{
			vVar7 = { 0f, 0f, 0f };
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(Global_35, &vVar7))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar7, Var0, Var0.f_3, Var0.f_6, false, true))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_490(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_7__::func_459(iParam0, 1);
	return (iVar0 >= 0 && iVar0 < 143);
}

void func_491(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (*uParam0 == 404434344)
	{
		vVar0 = { 796.1158f, 1777.652f, 281.4886f };
		vVar3 = { 0f, 0f, -74.42887f };
		vVar6 = { 2.5f, 3f, 5f };
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, __LIB_7__::func_468(uParam0));
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 796.1158f, 1777.652f, 281.4886f };
			vVar3 = { 0f, 0f, -74.42887f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { -1279.247f, 2896.268f, 386.576f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 2)
		{
			vVar0 = { 2576.871f, -628.9302f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2578.758f, -629.6465f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 673.9809f, -974.8455f, 54.0894f };
			vVar3 = { 0f, 0f, -23.06569f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -1305.871f, 2468.329f, 309.4034f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 6)
		{
			vVar0 = { 1734.58f, -1895.353f, 45.189f };
			vVar3 = { 0f, 0f, -41.82871f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 7)
		{
			vVar0 = { 2155.717f, 794.849f, 156.1776f };
			vVar3 = { 0f, 0f, 280f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 8)
		{
			vVar0 = { 512.7686f, 1932.379f, 199.7092f };
			vVar3 = { 0f, 0f, -2.622487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, __LIB_7__::func_468(uParam0));
		}
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == 1535254161) || *uParam0 == -607940493)
	{
		if (*uParam0 == -1243267511)
		{
			vVar0 = { -2691.41f, -407.6143f, 146.533f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 5f, 5f, 5f };
		}
		else if (*uParam0 == 1535254161)
		{
			vVar0 = { 1503.231f, -1819.476f, 56.89473f };
			vVar3 = { 0f, 0f, 31.7625f };
			vVar6 = { 44.60546f, 27.38259f, 6f };
		}
		else if (*uParam0 == -607940493)
		{
			vVar0 = { 2704.939f, 435.9636f, 91.37785f };
			vVar3 = { 0f, 0f, -54.20028f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			if (*uParam0 == -607940493)
			{
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, __LIB_7__::func_468(uParam0));
			}
			else
			{
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, __LIB_7__::func_468(uParam0));
			}
		}
	}
	else if (*uParam0 == -890175011)
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 2825.817f, -1322.569f, 45.7557f };
			vVar3 = { 0f, 0f, -40.04137f };
			vVar6 = { 1.479112f, 3.339972f, 8.648747f };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { 2736.975f, -1340.535f, 46.51682f };
			vVar3 = { 0f, 0f, -44.91362f };
			vVar6 = { 1.006241f, 1.334083f, 4.408258f };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2773.553f, -1183.345f, 48.74084f };
			vVar3 = { 0f, 0f, -23.65903f };
			vVar6 = { 1.282358f, 0.740535f, 5.648747f };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 2821.369f, -1229.302f, 46.5088f };
			vVar3 = { 0f, 0f, -34.54109f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, __LIB_7__::func_468(uParam0));
		}
	}
	else if (*uParam0 == 677950956)
	{
		if (uParam0->f_4 == 1)
		{
			vVar0 = { -781.6985f, -1321.918f, 42.8842f };
			vVar3 = { 0f, 0f, -90.32019f };
			vVar6 = { 3.080742f, 6.954088f, 8.648747f };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -816.7859f, -1313.109f, 44.64705f };
			vVar3 = { 0f, 0f, -89.95428f };
			vVar6 = { 2.607229f, 7.43211f, 4.408258f };
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, __LIB_7__::func_468(uParam0));
		}
	}
}

bool func_492(int iParam0)
{
	int iVar0;
	iVar0 = PED::GET_MOUNT(Global_35);
	if (!__LIB_0__::func_396(Global_35))
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam0, 16) && !__LIB_7__::func_472(iVar0, 0))
	{
		return false;
	}
	return true;
}

bool func_493(var uParam0)
{
	switch (*uParam0)
	{
		case -1300082860:
			if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 3f, 1, 1))
			{
				return true;
			}
			break;
		case -890175011:
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

Vector3 func_494(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1122.582f, 430.9633f, 96.2455f;
				case 1:
					return 1123.024f, 430.963f, 95.7573f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2339.886f, -2176.59f, 71.4468f;
				case 1:
					return -2337.024f, -2179.854f, 71.9464f;
				case 2:
					return -2343.997f, -2181.427f, 70.977f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3339.953f, -2500.892f, 1.8466f;
				default:
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -2334.939f, 903.981f, 157.7555f;
				case 1:
					return -2334.179f, 904.0247f, 157.8905f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2366.936f, 124.0762f, 216.8527f;
				default:
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return -3815.849f, -2982.679f, -5.7608f;
				default:
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 2793.436f, 855.1691f, 71.7447f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.37f, -1769.114f, 51.5788f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.266f, -2671.288f, 41.17608f;
				case 1:
					return -1411.035f, -2671.661f, 41.17608f;
				case 2:
					return -1411.408f, -2672.634f, 41.1746f;
				case 3:
					return -1413.048f, -2671.595f, 41.1746f;
				case 4:
					return -1412.823f, -2670.672f, 41.1746f;
				case 5:
					return -1412.741f, -2672.306f, 41.1746f;
				case 6:
					return -1413.745f, -2671.585f, 41.1746f;
				case 7:
					return -1412.558f, -2671.803f, 41.1746f;
				case 8:
					return -1412.088f, -2671.957f, 41.1746f;
				case 9:
					return -1412.338f, -2671.517f, 41.1746f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 368.6882f, -13.6098f, 108.217f;
				default:
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return -328.35f, -147.69f, 52.62f;
				case 1:
					return -328.35f, -147.69f, 52.62f;
				default:
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -2261.68f, -1433.048f, 138.7403f;
				case 1:
					return -2261.088f, -1434.147f, 138.5787f;
				case 2:
					return -2261.852f, -1433.882f, 138.6091f;
				case 3:
					return -2261.244f, -1434.466f, 138.7101f;
				case 4:
					return -2261.025f, -1432.579f, 138.68f;
				case 5:
					return -2260.271f, -1432.243f, 138.9447f;
				case 6:
					return -2260.379f, -1433.973f, 138.763f;
				case 7:
					return -2259.772f, -1432.779f, 138.7855f;
				case 8:
					return -2262.282f, -1433.536f, 138.7945f;
				case 9:
					return -2259.818f, -1433.147f, 138.9421f;
				default:
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 1750.49f, -2091.79f, 40.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.028f, 1996.19f, 168.2534f;
				case 1:
					return 2475.049f, 1998.073f, 168.2685f;
				case 2:
					return 2474.894f, 1999.316f, 168.2582f;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 1026.078f, 1575.433f, 360.6882f;
				case 1:
					return 1080.511f, 1659.407f, 372.3716f;
				default:
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -4859.858f, -2421.918f, 7.61f;
				case 1:
					return -4757.666f, -2424.231f, 8.0423f;
				case 2:
					return -4756.033f, -2420.065f, 7.9381f;
				case 3:
					return -4757.72f, -2419.863f, 7.8109f;
				default:
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return 546.5995f, 1794.07f, 127.9608f;
				default:
					break;
			}
			break;
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -5419.692f, -3655.095f, -20f;
				case 1:
					return -5419.692f, -3651.995f, -20f;
				case 2:
					return -5419.692f, -3653.495f, -20f;
				case 3:
					return -5419.792f, -3655.34f, -17.72f;
				case 4:
					return -5419.792f, -3654.34f, -17.72f;
				case 5:
					return -5429.492f, -3655.095f, -20f;
				case 6:
					return -5429.492f, -3653.61f, -20f;
				default:
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return 894.7463f, -1969.915f, 44.5785f;
				case 1:
					return 1047.956f, -1880.671f, 45.402f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -1330.84f, -88.9414f, 97.5094f;
				case 1:
					return -1332.349f, -87.4579f, 97.4614f;
				case 2:
					return -1330.415f, -89.829f, 97.5879f;
				default:
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return -3714.425f, -3602.42f, 45.4395f;
				case 1:
					return -3712.339f, -3602.567f, 44.9224f;
				case 2:
					return -3716.815f, -3604.644f, 44.6678f;
				case 3:
					return -3716.111f, -3602.837f, 46.7136f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1741.339f, -1624.245f, 89.9356f;
				case 1:
					return -1755.518f, -1624.026f, 90.635f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1217.047f, 2002.68f, 319.2006f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -6314.926f, -3466.984f, -10.575f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return 2023.15f, -1708.104f, 40.5575f;
				default:
					break;
			}
			break;
		case -1714262909:
			switch (iParam1)
			{
				case 0:
					return 1763.535f, -560.0701f, 46.6156f;
				default:
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return 1245.788f, 1152.984f, 151.5137f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2905.723f, -254.32f, 186.8714f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 1010.224f, -1764.319f, 46.4285f;
				default:
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return -2222.461f, -618.8527f, 135.3655f;
				case 1:
					return -2222.735f, -616.4194f, 135.0682f;
				default:
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return 1772.332f, -1360.154f, 44.1704f;
				default:
					break;
			}
			break;
		case 1982045664:
			switch (iParam1)
			{
				case 0:
					return -2532.369f, 1173.309f, 225.1319f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1256.994f, 1257.913f, 171.0152f;
				default:
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 2518.04f, 564.7737f, 70.937f;
				case 1:
					return 2519.439f, 562.9084f, 70.9917f;
				default:
					break;
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (__LIB_7__::func_483())
					{
						return 792.7722f, 1776.509f, 281.5611f;
					}
					else if (__LIB_7__::func_484())
					{
						return 794.3322f, 1778.012f, 280.3784f;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return -1497.558f, 1251.074f, 313.1244f;
				default:
					break;
			}
			break;
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_495(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

int func_496()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = __LIB_0__::func_668(iVar0);
		if (__LIB_0__::func_1(__LIB_0__::func_669(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_497(int iParam0, int iParam1)
{
	if (!__LIB_7__::func_490(iParam0))
	{
		return false;
	}
	return (Global_40.f_8863[__LIB_7__::func_459(iParam0, 1)] && iParam1) != 0;
}

void func_498(int iParam0, int iParam1)
{
	if (!__LIB_7__::func_490(iParam0))
	{
		return;
	}
	Global_40.f_8863[__LIB_7__::func_459(iParam0, 1)] = (Global_40.f_8863[__LIB_7__::func_459(iParam0, 1)] || iParam1);
}

bool func_499(int iParam0)
{
	int iVar0;
	int iVar1;
	if (PED::_0x1D46B417F926D34D(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				return false;
		}
		if ((!__LIB_0__::func_27(iParam0, 16) && !PED::IS_PED_ON_MOUNT(Global_35)) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == Global_35)
		{
			return false;
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!__LIB_7__::func_492(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_500(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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
		__LIB_3__::func_720(10, 1);
	}
}

void func_501(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_7__::func_450(iParam0);
}

int func_502(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -261997819:
			return joaat("PICKUP_WEAPON_MELEE_ANCIENT_HATCHET");
		case 2072029413:
			return joaat("PICKUP_WEAPON_THROWN_TOMAHAWK_ANCIENT");
		case 425000526:
			return joaat("PICKUP_WEAPON_MELEE_KNIFE_MINER");
		case 733338689:
			return joaat("PICKUP_WEAPON_MELEE_HATCHET_VIKING");
		case -599506500:
			return joaat("PICKUP_WEAPON_MELEE_KNIFE_CIVIL_WAR");
		case 1424723727:
			return joaat("PICKUP_WEAPON_MELEE_BROKEN_SWORD");
		case 1187689415:
			return joaat("PICKUP_WEAPON_SINGLE_ARROW");
		case 513110082:
			return joaat("PICKUP_WEAPON_REVOLVER_SCHOFIELD_GOLDEN");
		case 2072069278:
			return joaat("PICKUP_WEAPON_MELEE_KNIFE_BEAR");
		case -1240932004:
			return joaat("PICKUP_WEAPON_REVOLVER_DOUBLEACTION_MICAH");
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return joaat("PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT");
				case 1:
					return joaat("PICKUP_WEAPON_MELEE_HATCHET_HEWING");
				case 2:
					return joaat("PICKUP_WEAPON_MELEE_HATCHET_HUNTER");
				case 3:
					return joaat("PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
				case 4:
					return joaat("PICKUP_WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
				default:
					break;
			}
			break;
	}
	return joaat("PICKUP_CUSTOM_SCRIPT");
}

Vector3 func_503(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -261997819:
			return -2588.29f, -93.565f, 167.61f;
		case 2072029413:
			return 808.621f, 2299.72f, 251.43f;
		case 425000526:
			return -2367.267f, 124.251f, 216.25f;
		case 733338689:
			return 2378.344f, 1687.092f, 95.406f;
		case -599506500:
			return 2446.8f, 290.5534f, 67.249f;
		case 1424723727:
			return 2152.94f, -1647.566f, 41.22f;
		case 513110082:
			return -4394.59f, -2159.13f, 47.51f;
		case 2072069278:
			return -2333.5f, 904.52f, 157.39f;
		case -1240932004:
			return -1498.01f, 1251.11f, 313.1f;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -1518.59f, 533.08f, 102.17f;
				case 1:
					return 1251.912f, 1165.28f, 150.0559f;
				case 2:
					return 2450.56f, 295.432f, 69.77f;
				case 3:
					return 2939.745f, 1422.05f, 45.06f;
				case 4:
					return 1972.995f, 1193.078f, 171.39f;
				default:
					break;
			}
			break;
		case 1187689415:
			switch (iParam1)
			{
				case 0:
					return -4587.193f, -2905.12f, -17.048f;
				case 1:
					return -4587.294f, -2905.708f, -17.239f;
				case 2:
					return -4587.391f, -2906.739f, -18.052f;
				case 3:
					return -4587.547f, -2907.744f, -18.05f;
				case 4:
					return -4587.42f, -2906.782f, -17.7f;
				case 5:
					return -4587.257f, -2906.639f, -18.052f;
				case 6:
					return -4587.304f, -2905.708f, -17.4f;
				case 7:
					return -4586.647f, -2910.855f, -17.212f;
				case 8:
					return -4585.916f, -2911.216f, -17.174f;
				case 9:
					return -4585.063f, -2911.622f, -17.679f;
				case 10:
					return -4584.339f, -2912.104f, -17.25f;
				case 11:
					return -4578.494f, -2906.926f, -17.843f;
				case 12:
					return -4578.637f, -2906.571f, -17.622f;
				case 13:
					return -4579.098f, -2905.573f, -17.374f;
				case 14:
					return -4579.32f, -2905.219f, -17.182f;
				case 15:
					return -4579.203f, -2905.305f, -17.263f;
				case 16:
					return -4579.212f, -2905.34f, -17.814f;
				case 17:
					return -4579.466f, -2905.34f, -17.814f;
				case 18:
					return -4579.286f, -2905.159f, -17.047f;
				case 19:
					return -4582.325f, -2902.774f, -17.303f;
				case 20:
					return -4582.924f, -2902.892f, -17.19f;
				case 21:
					return -4583.114f, -2902.857f, -17.264f;
				case 22:
					return -4583.964f, -2902.846f, -17.452f;
				case 23:
					return -4584.25f, -2902.846f, -17.452f;
				case 24:
					return -4584.875f, -2902.983f, -17.161f;
				case 25:
					return -4583.506f, -2908.181f, -18.329f;
				case 26:
					return -4585.07f, -2907.85f, -17.752f;
				case 27:
					return -4583.453f, -2905.564f, -18.192f;
				case 28:
					return -4582.923f, -2905.564f, -18.052f;
				case 29:
					return -4579.606f, -2907.844f, -17.995f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_504(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -261997819:
			return 90f, 0f, 90f;
		case 2072029413:
			return 90f, 90f, 15f;
		case 425000526:
			return 180f, 0f, -75f;
		case 733338689:
			return 90f, 0f, 0f;
		case -599506500:
			return -88.98f, 179.087f, 84.344f;
		case 1424723727:
			return 0f, -180f, -45f;
		case 513110082:
			return 85.548f, 2.5f, -213.718f;
		case 2072069278:
			return 10f, 120f, -90f;
		case -1240932004:
			return 95f, 1f, -90f;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return 61.619f, 90f, 0f;
				case 1:
					return -3.810202f, 107.6488f, -74.03042f;
				case 2:
					return -0.500274f, 100.8485f, -150.5197f;
				case 3:
					return 5.459759f, 110.1288f, -48.05038f;
				case 4:
					return 0f, 103f, 46.23f;
				default:
					break;
			}
			break;
		case 1187689415:
			switch (iParam1)
			{
				case 0:
					return -37.818f, 53.906f, -130.345f;
				case 1:
					return -8.56f, 62.259f, -105.296f;
				case 2:
					return -13.446f, 23.014f, -97.164f;
				case 3:
					return -8.56f, 62.259f, -105.296f;
				case 4:
					return -171.402f, 35.692f, 84.396f;
				case 5:
					return 4.618f, 149.374f, -73.049f;
				case 6:
					return -8.56f, 62.259f, -82.994f;
				case 7:
					return -27.425f, 53.226f, -60.111f;
				case 8:
					return -45.451f, 21.768f, -58.815f;
				case 9:
					return -56.331f, 36.756f, -80.348f;
				case 10:
					return -17.416f, 47.165f, -27.809f;
				case 11:
					return -36.161f, 44.38f, 67.587f;
				case 12:
					return -27.218f, 46.355f, 81.004f;
				case 13:
					return -27.218f, 46.355f, 81.004f;
				case 14:
					return -14.257f, 43.951f, 74.951f;
				case 15:
					return -28.903f, 48.441f, 73.874f;
				case 16:
					return -41.057f, 43.138f, 86.532f;
				case 17:
					return -8.856f, -52.929f, 131.499f;
				case 18:
					return -37.857f, 35.937f, 84.612f;
				case 19:
					return -20.811f, 40.799f, 165.466f;
				case 20:
					return -43.985f, 34.145f, 148.431f;
				case 21:
					return -56.443f, 32.913f, 146.922f;
				case 22:
					return -71.981f, 42.679f, 155.987f;
				case 23:
					return -57.427f, 33.942f, 152.594f;
				case 24:
					return -25.488f, 58.05f, -173.866f;
				case 25:
					return -56.451f, -30.396f, 106.864f;
				case 26:
					return -60.238f, -32.993f, 104.798f;
				case 27:
					return 68.817f, -141.339f, -79.397f;
				case 28:
					return -67.125f, 33.397f, 75.813f;
				case 29:
					return 15.27f, -174.558f, 87.363f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_505(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 5f, 0f, 213f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
				case 1:
					return 20f, 88.84f, -94.66f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 65f, 0f, 90f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, -42f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return 25f, 0f, -75f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 155f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -95f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -144.36f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -35.981f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return -10f, 0f, 33f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, 0f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 1.24f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 12f;
				case 1:
					return 180f, 0f, 108f;
				case 2:
					return 180f, 0f, 208f;
				case 3:
					return 0f, 0f, 30f;
				case 4:
					return 180f, 0f, 35f;
				default:
					break;
			}
			break;
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -45f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -110f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -49.418f;
					case 1:
						return 0f, 0f, -33.718f;
					case 2:
						return 0f, 0f, -26.718f;
					case 3:
						return 0f, 0f, -41.7187f;
					case 4:
						return 0f, 0f, -33.718f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 90f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 105f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 121.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -90f, 0f, 90f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return 30f, 5f, 99f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 169f;
				case 1:
					return 0f, 0f, 169f;
				case 2:
					return 0f, 0f, 169f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 116f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -55f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 90f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return -10f, 90f, 30f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1891628345:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1494823099:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 657666087:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_506(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!uParam0->f_6[iParam7] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam7]))
		{
			(*uParam0)[iParam7] = OBJECT::CREATE_OBJECT(uParam0->f_6[iParam7], vParam1, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS((*uParam0)[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION((*uParam0)[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

int func_507(var uParam0)
{
	switch (*uParam0)
	{
		case -763376358:
			return joaat("CLOTHING_ITEM_MASK_PIG_001");
		case -739986731:
			return joaat("CLOTHING_ITEM_SKULLMASK_MR1_001_1");
		case 1801731633:
			return joaat("CLOTHING_ITEM_SKULLMASK_MR1_002_1");
		case 1490223565:
			return joaat("CLOTHING_ITEM_SKULLMASK_MR1_000_1");
		case -1144800837:
			return joaat("CLOTHING_ITEM_PZ_HAT_PIRATE_01");
		case 1342653896:
			return joaat("CLOTHING_SP_CHINESE_LABOR_HAT_000_1");
		case 1124200691:
			return joaat("CLOTHING_SP_CIVIL_WAR_HAT_000_1");
		case 2134589549:
			return joaat("CLOTHING_SP_CONQUISTADOR_HAT_000_1");
		case 425000526:
			return joaat("CLOTHING_SP_DEAD_MINER_HAT_000_1");
		case -1420566543:
			return joaat("CLOTHING_SP_SCARECROW_01_HAT_000_1");
		case -1208846034:
			return joaat("CLOTHING_SP_SCARECROW_02_HAT_000_1");
		case 1048086072:
			return joaat("CLOTHING_SP_SCARECROW_03_HAT_000_1");
		case 939555152:
			return joaat("CLOTHING_SP_SCARECROW_04_HAT_000_1");
		case -657632:
			return joaat("CLOTHING_SP_CHINESE_LABOR_HAT_000_1");
		case 733338689:
			return joaat("CLOTHING_SP_VIKING_HAT_000_1");
		case 2135153015:
			return joaat("CLOTHING_ITEM_SP_VALSHERIFF_HAT_000");
		default:
			break;
	}
	return 0;
}

int func_508(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -2108030724:
			return joaat("PROVISION_CATHERINES_NECKLACE");
		case -777592153:
		case -35775921:
			return joaat("PROVISION_GOLDRING");
		case 425000526:
		case 464413478:
			return joaat("PROVISION_GOLD_NUGGET");
		case -161804536:
			return joaat("PROVISION_DISCO_VIKING_COMB");
		case -1177787273:
			return joaat("PROVISION_JEWELRYBAG_SM");
		case -709811179:
		case 1673499939:
			return joaat("PROVISION_ASTEROID_CHUNK");
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_RING_PLATINUM");
				case 1:
					return joaat("PROVISION_DISCO_ANCIENT_NECKLACE");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_509(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -641229542:
			return joaat("DOCUMENT_DISCO_RUNAWAY_LETTER");
		case 1937333853:
			return joaat("DOCUMENT_DISCO_DEAD_SOLDIER_LETTER");
		case -1300082860:
			return joaat("DOCUMENT_DISCO_ABANDONED_OILDRILL_LETTER");
		case 429544447:
			return joaat("DOCUMENT_DISCO_LETTER_JESUIT");
		case 1347913620:
			return joaat("DOCUMENT_CWFORT_JOURNAL");
		case -2009137002:
			return joaat("DOCUMENT_DISCO_FACE_IN_CLIFF_LETTER");
		case -780455182:
			return joaat("DOCUMENT_DISCO_GRAVE_NEWSCLIP");
		case 2135153015:
			return joaat("DOCUMENT_DISCO_BOOTS_LETTER");
		case 1342653896:
			return joaat("DOCUMENT_LETTER_CHINESE_TRAVELLER");
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return joaat("DOCUMENT_NOTE_FRANKENSTEIN_1");
				case 1:
					return joaat("DOCUMENT_NOTE_FRANKENSTEIN_2");
				case 2:
					return joaat("DOCUMENT_NOTE_FRANKENSTEIN_3");
				case 3:
					return joaat("DOCUMENT_NOTE_FRANKENSTEIN_4");
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_1");
				case 1:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_2");
				case 2:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_3");
				case 3:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_4");
				case 4:
					return joaat("DOCUMENT_DISCO_MAIL_WAGON_5");
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 925382142 /* GXTEntry: "Micah Newspaper Scrap" */;
				case 1:
					return -1411632109 /* GXTEntry: "Blackwater Ledger Scrap" */;
				case 2:
					return joaat("DOCUMENT_DUTCH_BURNED_POSTER");
				default:
					break;
			}
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return joaat("DOCUMENT_DISCO_MAP_HALF_1");
						case 1:
							return joaat("DOCUMENT_DISCO_MAP_HALF_2");
						case 2:
							return joaat("DOCUMENT_DISCO_MAP_FULL");
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return joaat("DOCUMENT_DISCO_MAP_HALF_1");
						case 1:
							return joaat("DOCUMENT_DISCO_MAP_HALF_2");
						case 2:
							return joaat("DOCUMENT_DISCO_MAP_FULL");
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_01");
						case 4:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_02");
						case 5:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_03");
						case 6:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_04");
						case 7:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_05");
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_510(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -261997819:
			return joaat("WEAPON_MELEE_ANCIENT_HATCHET");
		case 2072029413:
			return joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
		case 425000526:
			return joaat("WEAPON_MELEE_KNIFE_MINER");
		case 733338689:
			return joaat("WEAPON_MELEE_HATCHET_VIKING");
		case -599506500:
			return joaat("WEAPON_MELEE_KNIFE_CIVIL_WAR");
		case 1424723727:
			return joaat("WEAPON_MELEE_BROKEN_SWORD");
		case 513110082:
			return joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN");
		case 2072069278:
			return joaat("WEAPON_MELEE_KNIFE_BEAR");
		case -1240932004:
			return joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH");
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
				case 1:
					return joaat("WEAPON_MELEE_HATCHET_HEWING");
				case 2:
					return joaat("WEAPON_MELEE_HATCHET_HUNTER");
				case 3:
					return joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
				case 4:
					return joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_511()
{
	return Global_0.f_7;
}

void func_512(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_6[iVar0], false);
		}
		iVar0++;
	}
}

int func_513(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1887999095:
			return joaat("UI_LETTER_GRBR");
		case -780455182:
			return joaat("UI_DOC_SKATENEWSP");
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return joaat("UI_NOTE_FRANKENSTEIN_1");
				case 1:
					return joaat("UI_NOTE_FRANKENSTEIN_2");
				case 2:
					return joaat("UI_NOTE_FRANKENSTEIN_3");
				case 3:
					return joaat("UI_NOTE_FRANKENSTEIN_4");
				default:
					break;
			}
			break;
		default:
			break;
	}
	return -1;
}

bool func_514(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_515(var uParam0)
{
	if (!PED::_0xB0B2C6D170B0E8E5(*uParam0))
	{
		return false;
	}
	return true;
}

void func_516(var uParam0)
{
	if (PED::_0xB0B2C6D170B0E8E5(*uParam0))
	{
		PED::_0x13E7320C762F0477(*uParam0);
	}
}

char* func_517(var uParam0)
{
	switch (*uParam0)
	{
		case -763376358:
			return "DISCO_MASK_AM";
		case -739986731:
			return "DISCO_MASK_PR";
		case 1801731633:
			return "DISCO_MASK_CAT";
		case 1490223565:
			return "DISCO_MASK_RAM";
		case 733338689:
		case 2134589549:
			return "DISCO_HELMET";
		default:
			break;
	}
	return "";
}

void func_518(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2 && (!Global_1415419.f_9721[iVar0 /*8*/].f_3 || bParam0))
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1415419.f_9721[iVar0 /*8*/].f_1, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1415419.f_9721[iVar0 /*8*/].f_1, 523);
			}
		}
		iVar0++;
	}
}

void func_519()
{
	if (Global_1415419.f_16 != -1)
	{
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
		Global_1415419.f_16 = -1;
		Global_1415419.f_17 = -1;
		Global_1415419.f_2 = 0;
		Global_1415419.f_18 = 0;
		Global_1415419.f_9758 = 0;
		Global_1415419.f_9759 = 0;
		Global_1415419.f_9 = { 0f, 0f, 0f };
		Global_1415419.f_12 = { 0f, 0f, 0f };
	}
}

void func_520(var uParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam2]))
	{
		if (bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0[iParam2]);
		}
		else
		{
			OBJECT::DELETE_OBJECT(uParam0[iParam2]);
		}
	}
}

void func_521(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[iVar0]);
		}
		iVar0++;
	}
}

int func_522(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -431554783;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 1325742934;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 1057717101;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return -342606109;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -987312756;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 847068642;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 495167306;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return -1025649252;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 599826636;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1106445381;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 553630040;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 614938185;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -1822543706;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 2102872632;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 1472702644;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return -431554783;
}

float func_523(var uParam0)
{
	switch (*uParam0)
	{
		case 2134589549:
			return 0.6f;
		default:
			break;
	}
	return 0f;
}

bool func_524(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, float fParam10)
{
	if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam8]))
	{
		(*uParam0)[iParam8] = PED::_0x9641A9A20310F6B8(iParam1, vParam2, vParam5, 1, fParam9, fParam10);
		if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam8]))
		{
			ENTITY::SET_ENTITY_COORDS((*uParam0)[iParam8], vParam2, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION((*uParam0)[iParam8], vParam5, 2, true);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY((*uParam0)[iParam8], false);
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_525(int iParam0, vector3 vParam1)
{
	switch (iParam0)
	{
		case 58:
		case 124:
		case 132:
		case 168:
		case 176:
		case 187:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
			return true;
		default:
			break;
	}
	if (MISC::ABSF((Global_36.f_2 - vParam1.z)) > 30f)
	{
		return false;
	}
	return true;
}

void func_526(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar11;
	var uVar14;
	Var0 = Global_1415419;
	Var0.f_1 = Global_1415419.f_19[iParam0 /*12*/].f_10;
	Var0.f_2 = -641542860;
	Var0.f_3 = __LIB_5__::func_673(Global_1415419.f_9756);
	Global_1415419.f_19[iParam0 /*12*/].f_8 = -1;
	Global_1415419.f_19[iParam0 /*12*/].f_9 = -1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		uVar14 = Var0.f_1;
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			if (Global_1415419.f_9717 >= 960)
			{
			}
			else
			{
				Var0.f_2 = 1696282352;
				Var0.f_3 = iVar6;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
				{
					Var0.f_2 = -1119853910;
					if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar8, &Var0))
					{
						if (Global_1415419.f_19[iParam0 /*12*/].f_8 == -1)
						{
							Global_1415419.f_19[iParam0 /*12*/].f_8 = Global_1415419.f_9717;
						}
						Global_1415419.f_2996[Global_1415419.f_9717 /*7*/] = { vVar8 };
						Global_1415419.f_19[iParam0 /*12*/].f_9 = Global_1415419.f_9717;
					}
				else
				{
					}
					else
					{
						Var0.f_2 = -1983241935;
						if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar11, &Var0))
						{
							Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_3 = { vVar11 };
						}
						Var0.f_2 = -143463129;
						if (DATAFILE::_DATAFILE_GET_INT(&uVar7, &Var0))
						{
							Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_6 = uVar7;
						}
						else
						{
							Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_6 = 0;
						}
						Global_1415419.f_9717++;
						Var0.f_1 = uVar14;
					}
					iVar6++;
					__LIB_0__::func_8(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 8);
					__LIB_0__::func_8(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 1);
					__LIB_0__::func_8(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 2);
				}
			}
		}
	}
}

float func_527(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 64:
			fVar0 = 175f;
			break;
		case 37:
			fVar0 = 175f;
			break;
		case 199:
			fVar0 = 50f;
			break;
		case 52:
			return 200f;
		case 47:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 600f;
			}
			else
			{
				return 300f;
			}
			break;
		case 7:
		case 15:
		case 28:
		case 40:
		case 44:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 600f;
			}
			else
			{
				return 150f;
			}
			break;
		default:
			if (__LIB_1__::func_923())
			{
				switch (__LIB_0__::func_12())
				{
					case 92:
						fVar0 = 175f;
						break;
					case 26:
						fVar0 = 150f;
						break;
					case 76:
						fVar0 = 150f;
						break;
					case 120:
						fVar0 = 150f;
						break;
					case 82:
						fVar0 = 150f;
						break;
					default:
						fVar0 = 80f;
						break;
				}
			}
			else
			{
				fVar0 = 175f;
			}
			break;
	}
	return fVar0;
}

float func_528(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 64:
			fVar0 = 100f;
			break;
		case 37:
			fVar0 = 100f;
			break;
		case 199:
			fVar0 = 20f;
			break;
		default:
			if (__LIB_1__::func_923())
			{
				switch (__LIB_0__::func_12())
				{
					case 92:
						fVar0 = 16f;
						break;
					case 76:
						fVar0 = 16f;
						break;
					case 26:
						fVar0 = 16f;
						break;
					case 82:
						fVar0 = 16f;
						break;
					default:
						fVar0 = 25f;
						break;
				}
			}
			else
			{
				fVar0 = 50f;
			}
			break;
	}
	return fVar0;
}

void func_529(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (!__LIB_0__::func_139(iParam1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam1);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		if ((!*uParam0 == -890175011 && !*uParam0 == 677950956) && !*uParam0 == -1308658310)
		{
			if (bParam3)
			{
				__LIB_1__::func_683(&uVar1, 12);
			}
			else
			{
				__LIB_1__::func_683(&uVar1, 8);
			}
		}
		if ((*uParam0 == 1861313914 || *uParam0 == -1308658310) || *uParam0 == -415839138)
		{
			if (__LIB_7__::func_497(*uParam0, 16))
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 2;
			}
		}
		else
		{
			iVar2 = 0;
		}
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, iVar2, 1, 1710353528, sParam2, uVar1);
	}
}

bool func_530(int iParam0)
{
	return __LIB_7__::func_497(iParam0, 2);
}

void func_531(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		__LIB_1__::func_148(&(iParam0->f_1));
	}
}

void func_532(int iParam0)
{
	if (!__LIB_7__::func_497(iParam0, 32))
	{
		__LIB_7__::func_498(iParam0, 32);
		TELEMETRY::_0xF5EAD898EF387E73(iParam0);
		if (__LIB_7__::func_466(iParam0))
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("DISCOVERABLE_FOUND")), 1);
		}
	}
}

bool func_533(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	bool bVar0;
	int iVar1[3];
	var uVar5;
	float fVar7;
	if (fParam3 == -1f)
	{
		bVar0 = BUILTIN::VDIST2(Global_36, vParam0);
	}
	else
	{
		bVar0 = fParam3;
	}
	if (bVar0 > bParam6)
	{
		return false;
	}
	if (bVar0 < bParam7)
	{
		return false;
	}
	if (!bParam5)
	{
		if (iParam8 != 34)
		{
			uVar5 = 1;
			if (!bParam4)
			{
				iVar1[0] = 4;
				iVar1[1] = 16384;
			}
			else
			{
				iVar1[0] = 4;
				iVar1[1] = 16384;
				iVar1[2] = 8;
			}
			if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar5, &iVar1, 0))
			{
				return false;
			}
		}
		if (__LIB_1__::func_923())
		{
			if (bParam4)
			{
				fVar7 = 3f;
			}
			else
			{
				fVar7 = 60f;
			}
		}
		else if (((iParam8 == 15 || iParam8 == 7) || iParam8 == 28) || iParam8 == 34)
		{
			fVar7 = 3f;
		}
		else
		{
			fVar7 = 100f;
		}
		if (VOLUME::_0x769BB7626B8CDB06(vParam0, fVar7, 0, 8, 0))
		{
			return false;
		}
		if (__LIB_2__::func_863(vParam0, fVar7))
		{
			return false;
		}
		if (__LIB_2__::func_864(vParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_534(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 1))
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
		if (TASK::_IS_PED_DUELLING(Global_35))
		{
			return false;
		}
	}
	if (TASK::IS_PED_BEING_ARRESTED(Global_35))
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 2) && !__LIB_7__::func_469())
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 4) && !__LIB_7__::func_479())
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 128) && !__LIB_7__::func_482())
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 2048) && !__LIB_7__::func_480(0))
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 32) && !__LIB_7__::func_499(iParam1))
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 64) && !__LIB_7__::func_470())
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 256) && CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam1, 512))
	{
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_27(iParam1, 1024))
	{
		if (PED::IS_PED_IN_COVER(Global_35, false, true))
		{
			return false;
		}
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		return false;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return false;
	}
	else if (__LIB_0__::func_491(Global_35, 1369124074))
	{
		return false;
	}
	else if (__LIB_0__::func_491(Global_35, 713668775))
	{
		return false;
	}
	return true;
}

void func_535(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_23();
	__LIB_1__::func_446(&iVar0, 0, iParam1, iParam2, iParam3, iParam4, 0, 0);
	iVar1 = -1;
	if (__LIB_4__::func_312(iParam0, &iVar1))
	{
		if (__LIB_4__::func_132(iVar1) == iParam0)
		{
			__LIB_4__::func_133(iVar1, iParam0);
			__LIB_4__::func_134(iVar1, iVar0);
			return;
		}
	}
	else if (iVar1 > -1)
	{
		__LIB_4__::func_133(iVar1, iParam0);
		__LIB_4__::func_134(iVar1, iVar0);
		return;
	}
}

bool func_536(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (*iParam1 == 0)
	{
		*iParam1 = ENTITY::_0x6F3068258A499E52(uParam2->f_6[iParam3], __LIB_7__::func_467(uParam0, iParam3), iParam4);
	}
	else if (ENTITY::_0x1FF441D7954F8709(*iParam1) && !ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
	{
		(*uParam2)[iParam3] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*iParam1));
		if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[iParam3]))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
	{
		return true;
	}
	return false;
}

int func_537(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 == 1)
	{
		switch (iParam0)
		{
			case -321841939:
				return joaat("JOURNAL_DISC_DREAMCATCHER_MAP_AR");
			case -1958832660:
				return joaat("JOURNAL_DISC_ABANDONED_CHURCH_AR");
			case 247563739:
				return joaat("JOURNAL_DISC_ABANDONED_TRADING_POST_AR");
			case -1300082860:
				return joaat("JOURNAL_DISC_OIL_WELL_AR");
			case -1287911066:
				return joaat("JOURNAL_DISC_BARREL_RIDER_AR");
			case 1861313914:
				return joaat("JOURNAL_DISC_BRAITHWAITE_SECRET_AR");
			case 1734766691:
				return joaat("JOURNAL_DISC_BRUSH_FIRE_AR");
			case 657666087:
				return joaat("JOURNAL_DISC_CIRCUS_WAGONS_AR");
			case 1535254161:
				return joaat("JOURNAL_DISC_CIVIL_WAR_AR");
			case 58958195:
				return joaat("JOURNAL_DISC_CRASHED_AIRSHIP_AR");
			case -1109016944:
				return joaat("JOURNAL_DISC_DEAD_TOWN_AR");
			case -780455182:
				return joaat("JOURNAL_DISC_DEFACED_GRAVE_AR");
			case -1636964661:
				return joaat("JOURNAL_DISC_DONKEY_LADY_AR");
			case -2009137002:
				return joaat("JOURNAL_DISC_FACE_CLIFF_AR");
			case -1243267511:
				return joaat("JOURNAL_DISC_FACE_TREES_AR");
			case -1053108445:
				return joaat("JOURNAL_DISC_FLYING_MACHINE_AR");
			case -1646022773:
				return joaat("JOURNAL_DISC_FOSSILISED_MAN_AR");
			case 1284679164:
				return joaat("JOURNAL_DISC_FRANKENSTEIN_AR");
			case 2134589549:
				return joaat("JOURNAL_DISC_FROZEN_SETTLER_AR");
			case -1787770845:
				return joaat("JOURNAL_DISC_GIANT_REMAINS_AR");
			case -1887999095:
				return joaat("JOURNAL_DISC_GRAYS_SECRET_AR");
			case 1519228573:
				return joaat("JOURNAL_DISC_HAND_SWAMP_AR");
			case 1982045664:
				return joaat("JOURNAL_DISC_HERMIT_WOMAN_AR");
			case 308500632:
				return joaat("JOURNAL_DISC_HIDDEN_TUNNEL_AR");
			case -849582265:
				return joaat("JOURNAL_DISC_INDIAN_BURIAL_AR");
			case 429544447:
				return joaat("JOURNAL_DISC_JESUIT_AR");
			case -148407339:
				return joaat("JOURNAL_DISC_MAMMOTH_AR");
			case -415839138:
				return joaat("JOURNAL_DISC_MEDITATING_MONK_AR");
			case -709811179:
				return joaat("JOURNAL_DISC_METEORITE_AR");
			case 1673499939:
				return joaat("JOURNAL_DISC_METEOR_HOUSE_AR");
			case -979575591:
				return joaat("JOURNAL_DISC_OBELISK_AR");
			case -1609238411:
				return joaat("JOURNAL_DISC_OLD_SCRIPTS_AR");
			case 921081956:
				return joaat("JOURNAL_DISC_ONE_ROOM_CHURCH_AR");
			case -739986731:
				return joaat("JOURNAL_DISC_PAGAN_RITUAL_AR");
			case 1034793488:
				return joaat("JOURNAL_DISC_PAINTING_CABIN_AR");
			case -1614148516:
				return joaat("JOURNAL_DISC_PHONOGRAPH_AR");
			case -1761189332:
				return joaat("JOURNAL_DISC_REGISTER_ROCK_AR");
			case -607940493:
				return joaat("JOURNAL_DISC_SERPENT_MOUND_AR");
			case 1986618633:
				return joaat("JOURNAL_DISC_SPERM_WHALE_AR");
			case -161804536:
				return joaat("JOURNAL_DISC_STONEHENGE_AR");
			case 2000209669:
				if (iParam2 == 11)
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_PAINTING_AR");
				}
				else
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_AR");
				}
				break;
			case -232974724:
				return joaat("JOURNAL_DISC_TRADING_POST_AR");
			case -1272862985:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_01_AR");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_02_AR");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_03_AR");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_04_AR");
				}
				break;
			case -1891628345:
				return joaat("JOURNAL_DISC_UTE_WICKIUP");
			case -1960242214:
				return joaat("JOURNAL_DISC_COLONY_AR");
			case -1505275983:
				return joaat("JOURNAL_DISC_WARPED_TREE_AR");
			case -890175011:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP2_AR");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP1_AR");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP5_AR");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP4_AR");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP3_AR");
				}
				break;
			case -986176781:
				return joaat("JOURNAL_DISC_WHALE_BONE_AR");
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -321841939:
				return joaat("JOURNAL_DISC_DREAMCATCHER_MAP_JN");
			case -1958832660:
				return joaat("JOURNAL_DISC_ABANDONED_CHURCH_JN");
			case 247563739:
				return joaat("JOURNAL_DISC_ABANDONED_TRADING_POST_JN");
			case -1300082860:
				return joaat("JOURNAL_DISC_OIL_WELL_JN");
			case 677950956:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_1_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_2_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_3_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_4_JN");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_5_JN");
				}
				else if (iParam2 == 5)
				{
					return joaat("JOURNAL_TOWN_SECRET_AZTEC_6_JN");
				}
				break;
			case -1287911066:
				return joaat("JOURNAL_DISC_BARREL_RIDER_JN");
			case 1734766691:
				return joaat("JOURNAL_DISC_BRUSH_FIRE_JN");
			case 657666087:
				return joaat("JOURNAL_DISC_CIRCUS_WAGONS_JN");
			case 1535254161:
				return joaat("JOURNAL_DISC_CIVIL_WAR_JN");
			case 58958195:
				return joaat("JOURNAL_DISC_CRASHED_AIRSHIP_JN");
			case -1109016944:
				return joaat("JOURNAL_DISC_DEAD_TOWN_JN");
			case -780455182:
				return joaat("JOURNAL_DISC_DEFACED_GRAVE_JN");
			case -1636964661:
				return joaat("JOURNAL_DISC_DONKEY_LADY_JN");
			case -2009137002:
				return joaat("JOURNAL_DISC_FACE_CLIFF_JN");
			case -1243267511:
				return joaat("JOURNAL_DISC_FACE_TREES_JN");
			case -1053108445:
				return joaat("JOURNAL_DISC_FLYING_MACHINE_JN");
			case -1646022773:
				return joaat("JOURNAL_DISC_FOSSILISED_MAN_JN");
			case 1284679164:
				return joaat("JOURNAL_DISC_FRANKENSTEIN_JN");
			case 2134589549:
				return joaat("JOURNAL_DISC_FROZEN_SETTLER_JN");
			case -1787770845:
				return joaat("JOURNAL_DISC_GIANT_REMAINS_JN");
			case -1887999095:
				return joaat("JOURNAL_DISC_GRAYS_SECRET_JN");
			case 1519228573:
				return joaat("JOURNAL_DISC_HAND_SWAMP_JN");
			case 1982045664:
				return joaat("JOURNAL_DISC_HERMIT_WOMAN_JN");
			case 308500632:
				return joaat("JOURNAL_DISC_HIDDEN_TUNNEL_JN");
			case -849582265:
				return joaat("JOURNAL_DISC_INDIAN_BURIAL_JN");
			case 429544447:
				return joaat("JOURNAL_DISC_JESUIT_JN");
			case -148407339:
				return joaat("JOURNAL_DISC_MAMMOTH_JN");
			case -415839138:
				return joaat("JOURNAL_DISC_MEDITATING_MONK_JN");
			case -709811179:
				return joaat("JOURNAL_DISC_METEORITE_JN");
			case 1673499939:
				return joaat("JOURNAL_DISC_METEOR_HOUSE_JN");
			case -979575591:
				return joaat("JOURNAL_DISC_OBELISK_JN");
			case -1609238411:
				return joaat("JOURNAL_DISC_OLD_SCRIPTS_JN");
			case 921081956:
				return joaat("JOURNAL_DISC_ONE_ROOM_CHURCH_JN");
			case -739986731:
				return joaat("JOURNAL_DISC_PAGAN_RITUAL_JN");
			case 1034793488:
				return joaat("JOURNAL_DISC_PAINTING_CABIN_JN");
			case -1614148516:
				return joaat("JOURNAL_DISC_PHONOGRAPH_JN");
			case -1761189332:
				return joaat("JOURNAL_DISC_REGISTER_ROCK_JN");
			case -607940493:
				return joaat("JOURNAL_DISC_SERPENT_MOUND_JN");
			case 1986618633:
				return joaat("JOURNAL_DISC_SPERM_WHALE_JN");
			case -161804536:
				return joaat("JOURNAL_DISC_STONEHENGE_JN");
			case 2000209669:
				if (iParam2 == 11)
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_PAINTING_JN");
				}
				else
				{
					return joaat("JOURNAL_DISC_STRANGE_STATUES_JN");
				}
				break;
			case -232974724:
				return joaat("JOURNAL_DISC_TRADING_POST_JN");
			case -1272862985:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_01_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_02_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_03_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_DISCOVER_TRAIL_TREES_TREE_04_JN");
				}
				break;
			case -1891628345:
				return joaat("JOURNAL_DISC_UTE_WICKIUP_JN");
			case -1960242214:
				return joaat("JOURNAL_DISC_COLONY_JN");
			case -1505275983:
				return joaat("JOURNAL_DISC_WARPED_TREE_JN");
			case -986176781:
				return joaat("JOURNAL_DISC_WHALE_BONE_JN");
			case -890175011:
				if (iParam2 == 0)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP2_JN");
				}
				else if (iParam2 == 1)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP1_JN");
				}
				else if (iParam2 == 2)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP5_JN");
				}
				else if (iParam2 == 3)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP4_JN");
				}
				else if (iParam2 == 4)
				{
					return joaat("JOURNAL_TOWN_SECRET_VAMP3_JN");
				}
				break;
			default:
				break;
		}
	}
	return 0;
}

bool func_538(char* sParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (bParam4)
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
			}
			else
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, true);
			}
			return true;
		}
	}
	return false;
}

char* func_539(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1284679164:
			return "van_farmhouse_monster";
		case -1494823099:
			return "scr_shack_jewlerybox";
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return "m05_mine_collapse_rocks";
				case 1:
					return "m05_mine_explosive";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_540(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!uParam0->f_12[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_12[iVar0], false);
		}
		iVar0++;
	}
}

bool func_541(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!uParam0->f_12[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

char* func_542(var uParam0)
{
	switch (*uParam0)
	{
		case 2000209669:
			return "Strange_Statues_Sounds";
		case -1614148516:
			return "inworld_music_wax_cylinder_swamp_boat";
		case 657666087:
			return "fortune_teller_soundset";
		default:
			break;
	}
	return "";
}

char* func_543(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return "button_press";
			}
			else if (iParam1 == 1)
			{
				return "statue_door_open";
			}
			break;
		case -1614148516:
			switch ((Global_40.f_8863.f_146 % 4))
			{
				case 0:
					return "1";
				case 1:
					return "2";
				case 2:
					return "3";
				case 3:
					return "4";
				default:
					break;
			}
			break;
		case 657666087:
			if (iParam1 == 0)
			{
				return "fortune_teller";
			}
			if (iParam1 == 1)
			{
				return "punch_fortune_teller";
			}
			break;
	}
	return "";
}

int func_544(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1427565340:
			switch (iParam1)
			{
				case 1:
					return joaat("PROVISION_DISCO_SHRUNKEN_HEAD");
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return joaat("CONSUMABLE_WHISKEY");
				case 1:
					return joaat("CONSUMABLE_APPLE");
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_GOLDBAR_LARGE");
				case 1:
					return joaat("PROVISION_GOLDBAR_LARGE");
				case 2:
					return joaat("PROVISION_GOLDBAR_LARGE");
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_DISCO_ARROWHEAD_02");
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_DISCO_FERTILITY_STATUE");
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_545(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case -321841939:
			sVar0 = "DISCO_DREAM";
			break;
		default:
			break;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("DISCO_DREAM");
	}
	return 0;
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("DISCO_DRM_DESC");
	}
	return 0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("DISCO_DC_FOUND");
	}
	return 0;
}

int func_549(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("DISCO_DRM_OBJ");
	}
	return 0;
}

char* func_550(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "TOAST_DREAMCATCHER";
				case 1:
					return "MISSION_COLLECTDREAM";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_551(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "hud_toasts";
				case 1:
					return "SP_MISSIONS_13";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_552(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "DISCO_DRM_CHECK1";
				case 1:
					return "DISCO_DRM_CHECK2";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_553(var uParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iParam2]))
	{
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_1[iParam2]));
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_1[iParam2]));
		}
	}
}

float func_554(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return -12.03f;
				case 1:
					return -22.89f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
				case 1:
					return -97.7f;
				case 2:
					return 130.42f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -90f;
				default:
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -46.21f;
				case 1:
					return 135.66f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 72.28f;
				default:
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return 132.16f;
				default:
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 186.76f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 43.65f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -96.76f;
				case 1:
					return 120.75f;
				case 2:
					return 0f;
				case 3:
					return 30f;
				case 4:
					return 60f;
				case 5:
					return -15f;
				case 6:
					return -30f;
				case 7:
					return -60f;
				case 8:
					return -120f;
				case 9:
					return 15f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return -174f;
				default:
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				default:
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -98.66f;
				case 1:
					return 3.79f;
				case 2:
					return -93.21f;
				case 3:
					return -72.99f;
				case 4:
					return 130.68f;
				case 5:
					return 117.29f;
				case 6:
					return -133f;
				case 7:
					return -86.34f;
				case 8:
					return 93.9f;
				case 9:
					return 110.42f;
				default:
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 162.86f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -19.53f;
				case 1:
					return 133.99f;
				case 2:
					return -105.95f;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 175f;
				default:
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -167.58f;
				case 1:
					return 0f;
				case 2:
					return 117.57f;
				case 3:
					return 179.95f;
				default:
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return -86.12f;
				default:
					break;
			}
			break;
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -90f;
				case 1:
					return -90f;
				case 2:
					return -90f;
				case 3:
					return -90f;
				case 4:
					return -90f;
				case 5:
					return 90f;
				case 6:
					return 90f;
				default:
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return -38.1f;
				case 1:
					return 56.97f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -2.39f;
				case 1:
					return -38.07f;
				case 2:
					return -132.4f;
				default:
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return 59.57f;
				case 1:
					return 180f;
				case 2:
					return 180f;
				case 3:
					return -170.06f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -115.63f;
				case 1:
					return 280.0316f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 349.2461f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 180f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return -75.35f;
				default:
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return -26.24f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -90.47f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 175.4f;
				default:
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
				case 1:
					return 0f;
				default:
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return -99.19f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 142.69f;
				case 1:
					return 165.69f;
				default:
					break;
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (__LIB_7__::func_483())
					{
						return 275f;
					}
					else if (__LIB_7__::func_484())
					{
						return 275f;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return 150.68f;
				default:
					break;
			}
			break;
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return 0f;
}

bool func_555(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_195(vParam1, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, 0f, fParam5, 0f), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
	{
		return false;
	}
	return true;
}

void func_556(int iParam0)
{
	__LIB_7__::func_498(iParam0, 2);
	__LIB_7__::func_532(iParam0);
}

void func_557(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_603(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[0], iParam2);
}

void func_558(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!uParam0->f_12[iParam5] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iParam5]))
		{
			uParam0->f_1[iParam5] = __LIB_1__::func_545(uParam0->f_12[iParam5], vParam1, fParam4, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1[iParam5]))
			{
				if (bParam6)
				{
					ENTITY::_0x9587913B9E772D29(uParam0->f_1[iParam5], 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1[iParam5], true);
				TASK::TASK_STAND_STILL(uParam0->f_1[iParam5], -1);
				if (!bParam7)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1[iParam5], false);
				}
				*uParam0++;
			}
		}
		else
		{
			*uParam0++;
		}
	}
	else
	{
		*uParam0++;
	}
}

bool func_559(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_139(uParam0->f_6.f_8))
		{
			return true;
		}
		if (__LIB_7__::func_493(uParam0))
		{
			return true;
		}
		if (!__LIB_7__::func_534(uParam0, 0))
		{
			return true;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return true;
		}
		if ((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -1243267511) || *uParam0 == -607940493) || *uParam0 == 1535254161)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) || !__LIB_1__::func_374(Global_35, uParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6.f_1 + 0.5f) || !__LIB_1__::func_374(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (__LIB_7__::func_493(uParam0))
		{
			return false;
		}
		if (!__LIB_7__::func_534(uParam0, 0))
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return false;
		}
		if ((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -1243267511) || *uParam0 == -607940493) || *uParam0 == 1535254161)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) && __LIB_1__::func_374(Global_35, uParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6.f_1 && __LIB_1__::func_374(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	return false;
}

char* func_560(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@deadman_and_sheep@pose";
						case 3:
							return "pl_base";
						default:
							break;
					}
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@overturned_hearse@overturned_hearse";
						case 3:
							return "pl_Overturned_Hearse";
						default:
							break;
					}
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_chinese_traveler@dead_chinese_traveler";
						case 3:
							return "pl_dead_chinese_traveler";
						default:
							break;
					}
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_bear@pose";
						default:
							break;
					}
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_miner@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "";
						case 1:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@donkey_lady@donkey_lady";
						case 3:
							return "pl_donkey_lady";
						default:
							break;
					}
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_soldier@dead_soldier";
						case 3:
							return "pl_Action";
						default:
							break;
					}
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_abandoned_oil_drill@pose";
						default:
							break;
					}
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@burned_settlement@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_pit@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_of_slave@dead";
						default:
							break;
					}
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@meteor_house@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@water_diviner@water_diviner";
						case 3:
							return "pl_water_diviner";
						default:
							break;
					}
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@barrel_rider@barrel_rider";
						default:
							break;
					}
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@buck_carcasses@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@lightning_alley@lightning_alley";
						default:
							break;
					}
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@circuswagon@circuswagon";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return "mech_melee@unarmed@_male@_ambient@_healthy@_noncombat";
						case 1:
							return "att_sucker_punch_dist_close_v1";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "s_lev_des_mission";
						case 1:
							return "s_fortuneteller01x";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 2:
							return "lightrig@misc@discoverable_circus_wagon";
						case 3:
							return "plMain";
						default:
							break;
					}
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							if (__LIB_1__::func_185(59))
							{
								return "script@beat@wilderness@discoverables@braithwaites_secret_endless_summer@braithwaites_secret_endless_summer";
							}
							else
							{
								return "script@ambient@discoverables@braithwaites@secret";
							}
							break;
						case 3:
							if (__LIB_1__::func_185(59))
							{
								return "";
							}
							else
							{
								return "pb_intial_visit_a";
							}
							break;
					}
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@meditating_monk@main";
						case 3:
							return "pbl_base_a";
						default:
							break;
					}
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@jesuit_missionary@pose";
						case 3:
							return "pl_jesuit_missionary";
						default:
							break;
					}
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@roadside_brothel@roadside_brothel";
						case 3:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@swamp_freak@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@flattened_cabin@flattened_cabin";
						case 3:
							return "pl_DeadCorpse";
						default:
							break;
					}
					break;
			}
			break;
		case -1761578407:
			if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script_common@grieving@player@unarmed@upper";
							case 1:
								return "intro";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_common@grieving@player@unarmed@upper";
						case 1:
							return "intro";
						default:
							break;
					}
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@pagan_ritual@pagan_ritual";
						case 3:
							return "pl_pagan_pose";
						default:
							break;
					}
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_amb@discoverables@strange_statues@push_button";
						case 1:
							return "push_button_short";
						default:
							break;
					}
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@braithwaitesburnedcorpse@braithwaitesburnedcorpse";
						case 3:
							return "pl_deadPose";
						default:
							break;
					}
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					if (!__LIB_7__::func_530(*uParam0))
					{
						switch (iParam2)
						{
							case 2:
								return "script@beat@wilderness@discoverables@conestoga_wagon@conestoga_wagon";
							default:
								break;
						}
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@Conestoga_Wagon@SlideCamera";
						case 3:
							return "pl_ACTION";
						default:
							break;
					}
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@grayssecret@grayssecret";
						case 3:
							return "pl_deadPose";
						default:
							break;
					}
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@wilderness_chest_3@wilderness_chest_3";
						default:
							break;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_micah@dead_micah";
						case 3:
							return "pl_micah";
						default:
							break;
					}
					break;
			}
			break;
		case -2008558277:
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -654238687:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -35775921:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1464664327:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return "";
}

int func_561(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_7__::func_537(iParam0, 1, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	iVar0 = __LIB_7__::func_537(iParam0, 0, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_562(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -415839138:
			switch (*iParam1)
			{
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
					return true;
			}
			break;
		case 1535254161:
			switch (*iParam1)
			{
				case joaat("THUNDER"):
				case joaat("THUNDERSTORM"):
					return true;
			}
			break;
		case 397377585:
			switch (*iParam1)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
					return true;
			}
			break;
		default:
			break;
	}
	return false;
}

void func_563(var uParam0, char* sParam1)
{
	if (ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, sParam1);
	}
}

void func_564(var uParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) && !ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam1, true);
					}
				}
			}
		}
	}
}

void func_565(var uParam0, int iParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iParam1]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE((*uParam0)[iParam1]);
	}
}

void func_566(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!uParam0->f_12[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12[iVar0]);
		}
		iVar0++;
	}
}

char* func_567(var uParam0)
{
	switch (*uParam0)
	{
		case 657666087:
			return "FTELLAU";
		case 1673499939:
			return "DSMEHAU";
		case -415839138:
			return "DMONKAU";
		default:
			break;
	}
	return "";
}

void func_568(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = -1;
}

bool func_569(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_41(iVar0);
	switch (*uParam0)
	{
		case -415839138:
			if (iVar1 > 9 && iVar1 < 16)
			{
				return true;
			}
			break;
		case 1535254161:
			if (iVar1 >= 0 && iVar1 <= 4)
			{
				return true;
			}
			else if (iVar1 >= 23 && iVar1 <= 24)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

void func_570(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		__LIB_7__::func_553(uParam0, bParam1, iVar0);
		iVar0++;
	}
}

void func_571(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (!__LIB_0__::func_139(iParam1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam1);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		if ((!*uParam0 == -890175011 && !*uParam0 == 677950956) && !*uParam0 == -1308658310)
		{
			if (bParam3)
			{
				__LIB_1__::func_581(&uVar1, 12);
			}
			else
			{
				__LIB_1__::func_581(&uVar1, 8);
			}
		}
		if ((*uParam0 == 1861313914 || *uParam0 == -1308658310) || *uParam0 == -415839138)
		{
			if (__LIB_7__::func_497(*uParam0, 16))
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 2;
			}
		}
		else
		{
			iVar2 = 0;
		}
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, iVar2, 1, 1710353528, sParam2, uVar1);
	}
}

void func_572(var uParam0)
{
	if (!__LIB_0__::func_139(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (__LIB_7__::func_530(*uParam0))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (__LIB_7__::func_474(uParam0))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
		{
			uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
		}
		else
		{
			uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
		}
		__LIB_1__::func_522(uParam0->f_6.f_8, 13, 1, 1);
		__LIB_7__::func_476(uParam0->f_6.f_8);
	}
}

char* func_573(var uParam0)
{
	if (*uParam0 == 404434344)
	{
		if (__LIB_7__::func_530(*uParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (__LIB_7__::func_474(uParam0))
		{
			if (uParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -890175011)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == -321841939)
	{
		return "DISCO_DREAM";
	}
	else if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
	{
		if (*uParam0 == -1958832660)
		{
			return "DISCO_AC";
		}
		else if (*uParam0 == -1300082860)
		{
			return "DISCO_AW";
		}
		else if (*uParam0 == 247563739)
		{
			return "DISCO_ATP";
		}
		else if (*uParam0 == -1287911066)
		{
			return "DISCO_BR";
		}
		else if (*uParam0 == 1861313914)
		{
			return "DISCO_BS";
		}
		else if (*uParam0 == 1734766691)
		{
			return "DISCO_FIRE";
		}
		else if (*uParam0 == 657666087)
		{
			return "DISCO_CW";
		}
		else if (*uParam0 == 1535254161)
		{
			return "DISCO_CWB";
		}
		else if (*uParam0 == 58958195)
		{
			return "DISCO_CA";
		}
		else if (*uParam0 == -1109016944)
		{
			return "DISCO_DT";
		}
		else if (*uParam0 == -780455182)
		{
			return "DISCO_DG";
		}
		else if (*uParam0 == -1636964661)
		{
			return "DISCO_DL";
		}
		else if (*uParam0 == -2009137002)
		{
			return "DISCO_FIC";
		}
		else if (*uParam0 == -1243267511)
		{
			return "DISCO_FT";
		}
		else if (*uParam0 == -1053108445)
		{
			return "DISCO_FLY";
		}
		else if (*uParam0 == -1646022773)
		{
			return "DISCO_FO";
		}
		else if (*uParam0 == 1284679164)
		{
			return "DISCO_FR";
		}
		else if (*uParam0 == 2134589549)
		{
			return "DISCO_FS";
		}
		else if (*uParam0 == -1787770845)
		{
			return "DISCO_GM";
		}
		else if (*uParam0 == -1887999095)
		{
			return "DISCO_GS";
		}
		else if (*uParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*uParam0 == 1982045664)
		{
			return "DISCO_HW";
		}
		else if (*uParam0 == 308500632)
		{
			return "DISCO_HT";
		}
		else if (*uParam0 == -849582265)
		{
			return "DISCO_IB";
		}
		else if (*uParam0 == 429544447)
		{
			return "DISCO_JM";
		}
		else if (*uParam0 == -148407339)
		{
			return "DISCO_MA";
		}
		else if (*uParam0 == -415839138)
		{
			return "DISCO_MONK";
		}
		else if (*uParam0 == 1673499939)
		{
			return "DISCO_MH";
		}
		else if (*uParam0 == -709811179)
		{
			return "DISCO_MT";
		}
		else if (*uParam0 == -979575591)
		{
			return "DISCO_OB";
		}
		else if (*uParam0 == -1609238411)
		{
			return "DISCO_OWS";
		}
		else if (*uParam0 == 921081956)
		{
			return "DISCO_ORC";
		}
		else if (*uParam0 == -739986731)
		{
			return "DISCO_PR";
		}
		else if (*uParam0 == 1034793488)
		{
			return "DISCO_PIC";
		}
		else if (*uParam0 == -1614148516)
		{
			return "DISCO_PH";
		}
		else if (*uParam0 == -1761189332)
		{
			return "DISCO_RR";
		}
		else if (*uParam0 == -607940493)
		{
			return "DISCO_SM";
		}
		else if (*uParam0 == 1986618633)
		{
			return "DISCO_SW";
		}
		else if (*uParam0 == -161804536)
		{
			return "DISCO_ST";
		}
		else if (*uParam0 == 2000209669)
		{
			return "DISCO_SS";
		}
		else if (*uParam0 == -232974724)
		{
			return "DISCO_TP";
		}
		else if (*uParam0 == -1272862985)
		{
			return "DISCO_TT";
		}
		else if (*uParam0 == -1891628345)
		{
			return "DISCO_UTE";
		}
		else if (*uParam0 == -1960242214)
		{
			return "DISCO_UCB";
		}
		else if (*uParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*uParam0 == -986176781)
		{
			return "DISCO_WB";
		}
		else if (*uParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*uParam0 == -986176781 || *uParam0 == 1986618633) || *uParam0 == -1787770845) || *uParam0 == -148407339)
	{
		return "DISCO_BONES";
	}
	else if ((((((*uParam0 == -1958832660 || *uParam0 == 921081956) || *uParam0 == 247563739) || *uParam0 == -232974724) || *uParam0 == -1300082860) || *uParam0 == -979575591) || *uParam0 == 1673499939)
	{
		return "DISCO_STRUCT";
	}
	else if (*uParam0 == -780455182)
	{
		return "DISCO_GRAVE";
	}
	else if (*uParam0 == -2009137002)
	{
		return "DISCO_SCULPT";
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == -1272862985) || *uParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*uParam0 == -1646022773 || *uParam0 == 1284679164) || *uParam0 == 2134589549) || *uParam0 == -1887999095) || *uParam0 == 1519228573) || *uParam0 == -1287911066) || *uParam0 == -1636964661) || *uParam0 == 429544447) || *uParam0 == -739986731)
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*uParam0 == -1109016944 || *uParam0 == 1535254161) || *uParam0 == -849582265) || *uParam0 == -161804536) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -607940493) || *uParam0 == 308500632) || *uParam0 == 1734766691) || *uParam0 == -415839138) || *uParam0 == 1982045664)
	{
		return "DISCO_SITE";
	}
	else if (*uParam0 == -1614148516)
	{
		return "DISCO_DEVICE";
	}
	else if ((*uParam0 == -1761189332 || *uParam0 == -1609238411) || *uParam0 == -709811179)
	{
		return "DISCO_ROCK";
	}
	else if ((*uParam0 == 58958195 || *uParam0 == -1053108445) || *uParam0 == 657666087)
	{
		return "DISCO_WRECK";
	}
	else if (*uParam0 == 1861313914)
	{
		if (__LIB_1__::func_185(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (uParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

bool func_574(var uParam0, struct<10> Param1, var uParam11)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Param1.f_10, Param1, Param1.f_3, Param1.f_6, Param1.f_9);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_575(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	iVar1 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	if (__LIB_7__::func_562(uParam0, &iVar0))
	{
		return true;
	}
	return false;
}

char* func_576(var uParam0)
{
	if (*uParam0 == 404434344)
	{
		if (__LIB_7__::func_530(*uParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (__LIB_7__::func_474(uParam0))
		{
			if (uParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -890175011)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == -321841939)
	{
		return "DISCO_DREAM";
	}
	else if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
	{
		if (*uParam0 == -1958832660)
		{
			return "DISCO_AC";
		}
		else if (*uParam0 == -1300082860)
		{
			return "DISCO_AW";
		}
		else if (*uParam0 == 247563739)
		{
			return "DISCO_ATP";
		}
		else if (*uParam0 == -1287911066)
		{
			return "DISCO_BR";
		}
		else if (*uParam0 == 1861313914)
		{
			return "DISCO_BS";
		}
		else if (*uParam0 == 1734766691)
		{
			return "DISCO_FIRE";
		}
		else if (*uParam0 == 657666087)
		{
			return "DISCO_CW";
		}
		else if (*uParam0 == 1535254161)
		{
			return "DISCO_CWB";
		}
		else if (*uParam0 == 58958195)
		{
			return "DISCO_CA";
		}
		else if (*uParam0 == -1109016944)
		{
			return "DISCO_DT";
		}
		else if (*uParam0 == -780455182)
		{
			return "DISCO_DG";
		}
		else if (*uParam0 == -1636964661)
		{
			return "DISCO_DL";
		}
		else if (*uParam0 == -2009137002)
		{
			return "DISCO_FIC";
		}
		else if (*uParam0 == -1243267511)
		{
			return "DISCO_FT";
		}
		else if (*uParam0 == -1053108445)
		{
			return "DISCO_FLY";
		}
		else if (*uParam0 == -1646022773)
		{
			return "DISCO_FO";
		}
		else if (*uParam0 == 1284679164)
		{
			return "DISCO_FR";
		}
		else if (*uParam0 == 2134589549)
		{
			return "DISCO_FS";
		}
		else if (*uParam0 == -1787770845)
		{
			return "DISCO_GM";
		}
		else if (*uParam0 == -1887999095)
		{
			return "DISCO_GS";
		}
		else if (*uParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*uParam0 == 1982045664)
		{
			return "DISCO_HW";
		}
		else if (*uParam0 == 308500632)
		{
			return "DISCO_HT";
		}
		else if (*uParam0 == -849582265)
		{
			return "DISCO_IB";
		}
		else if (*uParam0 == 429544447)
		{
			return "DISCO_JM";
		}
		else if (*uParam0 == -148407339)
		{
			return "DISCO_MA";
		}
		else if (*uParam0 == -415839138)
		{
			return "DISCO_MONK";
		}
		else if (*uParam0 == 1673499939)
		{
			return "DISCO_MH";
		}
		else if (*uParam0 == -709811179)
		{
			return "DISCO_MT";
		}
		else if (*uParam0 == -979575591)
		{
			return "DISCO_OB";
		}
		else if (*uParam0 == -1609238411)
		{
			return "DISCO_OWS";
		}
		else if (*uParam0 == 921081956)
		{
			return "DISCO_ORC";
		}
		else if (*uParam0 == -739986731)
		{
			return "DISCO_PR";
		}
		else if (*uParam0 == 1034793488)
		{
			return "DISCO_PIC";
		}
		else if (*uParam0 == -1614148516)
		{
			return "DISCO_PH";
		}
		else if (*uParam0 == -1761189332)
		{
			return "DISCO_RR";
		}
		else if (*uParam0 == -607940493)
		{
			return "DISCO_SM";
		}
		else if (*uParam0 == 1986618633)
		{
			return "DISCO_SW";
		}
		else if (*uParam0 == -161804536)
		{
			return "DISCO_ST";
		}
		else if (*uParam0 == 2000209669)
		{
			return "DISCO_SS";
		}
		else if (*uParam0 == -232974724)
		{
			return "DISCO_TP";
		}
		else if (*uParam0 == -1272862985)
		{
			return "DISCO_TT";
		}
		else if (*uParam0 == -1891628345)
		{
			return "DISCO_UTE";
		}
		else if (*uParam0 == -1960242214)
		{
			return "DISCO_UCB";
		}
		else if (*uParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*uParam0 == -986176781)
		{
			return "DISCO_WB";
		}
		else if (*uParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*uParam0 == -986176781 || *uParam0 == 1986618633) || *uParam0 == -1787770845) || *uParam0 == -148407339)
	{
		return "DISCO_BONES";
	}
	else if ((((((*uParam0 == -1958832660 || *uParam0 == 921081956) || *uParam0 == 247563739) || *uParam0 == -232974724) || *uParam0 == -1300082860) || *uParam0 == -979575591) || *uParam0 == 1673499939)
	{
		return "DISCO_STRUCT";
	}
	else if (*uParam0 == -780455182)
	{
		return "DISCO_GRAVE";
	}
	else if (*uParam0 == -2009137002)
	{
		return "DISCO_SCULPT";
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == -1272862985) || *uParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*uParam0 == -1646022773 || *uParam0 == 1284679164) || *uParam0 == 2134589549) || *uParam0 == -1887999095) || *uParam0 == 1519228573) || *uParam0 == -1287911066) || *uParam0 == -1636964661) || *uParam0 == 429544447) || *uParam0 == -739986731)
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*uParam0 == -1109016944 || *uParam0 == 1535254161) || *uParam0 == -849582265) || *uParam0 == -161804536) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -607940493) || *uParam0 == 308500632) || *uParam0 == 1734766691) || *uParam0 == -415839138) || *uParam0 == 1982045664)
	{
		return "DISCO_SITE";
	}
	else if (*uParam0 == -1614148516)
	{
		return "DISCO_DEVICE";
	}
	else if ((*uParam0 == -1761189332 || *uParam0 == -1609238411) || *uParam0 == -709811179)
	{
		return "DISCO_ROCK";
	}
	else if ((*uParam0 == 58958195 || *uParam0 == -1053108445) || *uParam0 == 657666087)
	{
		return "DISCO_WRECK";
	}
	else if (*uParam0 == 1861313914)
	{
		if (__LIB_2__::func_410(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (uParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

char* func_577(var uParam0)
{
	switch (*uParam0)
	{
		case 221420861:
			return "AZ_Whispering_Trees_Discoverable";
		case 1535254161:
			return "AZ_scarlett_meadows_bulger_glade_battlefield_memories_01";
		case 1982045664:
			return "AZ_Disco_Hermit_Woman_Shack";
		default:
			break;
	}
	return "";
}

int func_578()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_27(Global_40.f_8863.f_154, 2048))
	{
		iVar0++;
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_154, 4096))
	{
		iVar0++;
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_154, 8192))
	{
		iVar0++;
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_154, 16384))
	{
		iVar0++;
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_154, 32768))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_579(int iParam0)
{
	return __LIB_0__::func_27(Global_1935496.f_27, iParam0);
}

bool func_580(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_3, 1))
	{
		return true;
	}
	return false;
}

bool func_581(var uParam0)
{
	switch (*uParam0)
	{
		case -544327665:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 4))
				{
					return true;
				}
			}
			break;
		case 2000209669:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 16384))
				{
					return true;
				}
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 2048))
				{
					return true;
				}
			}
			break;
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 8388608))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 16777216))
				{
					return true;
				}
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 512))
				{
					return true;
				}
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 32768))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 2097152))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_153, 4194304))
				{
					return true;
				}
			}
			break;
		case 404434344:
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1))
			{
				return true;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1024))
				{
					return true;
				}
			}
			break;
		case -321841939:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 2048))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 12)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 13)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 14)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 32768))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 15)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 16)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 17)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 18)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 19)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_148, 1048576))
				{
					return true;
				}
			}
			break;
		case 870958936:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_149, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_149, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_149, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_149, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_149, 16))
				{
					return true;
				}
			}
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					if (__LIB_0__::func_27(Global_40.f_8863.f_150, 1))
					{
						return true;
					}
					break;
				case 1:
					if (__LIB_0__::func_27(Global_40.f_8863.f_150, 2))
					{
						return true;
					}
					break;
				case 2:
					if (((((__LIB_0__::func_27(Global_40.f_8863.f_150, 4) && __LIB_0__::func_27(Global_40.f_8863.f_150, 8)) && __LIB_0__::func_27(Global_40.f_8863.f_150, 16)) && __LIB_0__::func_27(Global_40.f_8863.f_150, 32)) && __LIB_0__::func_27(Global_40.f_8863.f_150, 64)) && __LIB_0__::func_27(Global_40.f_8863.f_150, 128))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 2048))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 32768))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 2097152))
				{
					return true;
				}
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_152, 2097152))
				{
					return true;
				}
			}
			break;
		default:
			break;
	}
	return false;
}

int func_582()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = __LIB_0__::func_668(iVar0);
		if (__LIB_0__::func_27(Global_40.f_8863.f_148, iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_583()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar1 = __LIB_0__::func_668(iVar0);
		if (!__LIB_0__::func_27(Global_40.f_8863.f_148, iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_584(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	STREAMING::REQUEST_MODEL(iParam1, false);
	if (STREAMING::HAS_MODEL_LOADED(iParam1) && !ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = __LIB_1__::func_545(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bParam6, 0, 0, 0, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

void func_585(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
	}
}

bool func_586(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		*uParam1 = 0;
		return true;
	}
	if (!*uParam1 && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam5, sParam3, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		*uParam1 = 1;
	}
	return false;
}

void func_587(var uParam0, int iParam1)
{
	ENTITY::_0x18FF3110CF47115D(*uParam0, 2, iParam1);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 3, iParam1);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 7, iParam1);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 9, iParam1);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 10, iParam1);
}

void func_588(var uParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 1048575;
		PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, iVar0);
	}
}

bool func_589(int iParam0)
{
	return __LIB_7__::func_579(iParam0);
}

void func_590(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_6.f_8))
	{
		__LIB_1__::func_748(&(uParam0->f_6.f_8), 1, 1);
	}
	__LIB_1__::func_148(&(uParam0->f_6.f_5));
	if (__LIB_0__::func_27(uParam0->f_3, 2))
	{
		__LIB_1__::func_993(&(uParam0->f_3), 2);
	}
}

void func_591(var uParam0)
{
	if (!__LIB_0__::func_139(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (__LIB_7__::func_530(*uParam0))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (__LIB_7__::func_581(uParam0))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
		{
			uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
		}
		else
		{
			uParam0->f_6.f_8 = __LIB_2__::func_403("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
		}
		__LIB_1__::func_522(uParam0->f_6.f_8, 13, 1, 1);
		__LIB_7__::func_476(uParam0->f_6.f_8);
	}
}

char* func_592(var uParam0)
{
	if (*uParam0 == 404434344)
	{
		if (__LIB_7__::func_530(*uParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (__LIB_7__::func_581(uParam0))
		{
			if (uParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -890175011)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == -321841939)
	{
		return "DISCO_DREAM";
	}
	else if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
	{
		if (*uParam0 == -1958832660)
		{
			return "DISCO_AC";
		}
		else if (*uParam0 == -1300082860)
		{
			return "DISCO_AW";
		}
		else if (*uParam0 == 247563739)
		{
			return "DISCO_ATP";
		}
		else if (*uParam0 == -1287911066)
		{
			return "DISCO_BR";
		}
		else if (*uParam0 == 1861313914)
		{
			return "DISCO_BS";
		}
		else if (*uParam0 == 1734766691)
		{
			return "DISCO_FIRE";
		}
		else if (*uParam0 == 657666087)
		{
			return "DISCO_CW";
		}
		else if (*uParam0 == 1535254161)
		{
			return "DISCO_CWB";
		}
		else if (*uParam0 == 58958195)
		{
			return "DISCO_CA";
		}
		else if (*uParam0 == -1109016944)
		{
			return "DISCO_DT";
		}
		else if (*uParam0 == -780455182)
		{
			return "DISCO_DG";
		}
		else if (*uParam0 == -1636964661)
		{
			return "DISCO_DL";
		}
		else if (*uParam0 == -2009137002)
		{
			return "DISCO_FIC";
		}
		else if (*uParam0 == -1243267511)
		{
			return "DISCO_FT";
		}
		else if (*uParam0 == -1053108445)
		{
			return "DISCO_FLY";
		}
		else if (*uParam0 == -1646022773)
		{
			return "DISCO_FO";
		}
		else if (*uParam0 == 1284679164)
		{
			return "DISCO_FR";
		}
		else if (*uParam0 == 2134589549)
		{
			return "DISCO_FS";
		}
		else if (*uParam0 == -1787770845)
		{
			return "DISCO_GM";
		}
		else if (*uParam0 == -1887999095)
		{
			return "DISCO_GS";
		}
		else if (*uParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*uParam0 == 1982045664)
		{
			return "DISCO_HW";
		}
		else if (*uParam0 == 308500632)
		{
			return "DISCO_HT";
		}
		else if (*uParam0 == -849582265)
		{
			return "DISCO_IB";
		}
		else if (*uParam0 == 429544447)
		{
			return "DISCO_JM";
		}
		else if (*uParam0 == -148407339)
		{
			return "DISCO_MA";
		}
		else if (*uParam0 == -415839138)
		{
			return "DISCO_MONK";
		}
		else if (*uParam0 == 1673499939)
		{
			return "DISCO_MH";
		}
		else if (*uParam0 == -709811179)
		{
			return "DISCO_MT";
		}
		else if (*uParam0 == -979575591)
		{
			return "DISCO_OB";
		}
		else if (*uParam0 == -1609238411)
		{
			return "DISCO_OWS";
		}
		else if (*uParam0 == 921081956)
		{
			return "DISCO_ORC";
		}
		else if (*uParam0 == -739986731)
		{
			return "DISCO_PR";
		}
		else if (*uParam0 == 1034793488)
		{
			return "DISCO_PIC";
		}
		else if (*uParam0 == -1614148516)
		{
			return "DISCO_PH";
		}
		else if (*uParam0 == -1761189332)
		{
			return "DISCO_RR";
		}
		else if (*uParam0 == -607940493)
		{
			return "DISCO_SM";
		}
		else if (*uParam0 == 1986618633)
		{
			return "DISCO_SW";
		}
		else if (*uParam0 == -161804536)
		{
			return "DISCO_ST";
		}
		else if (*uParam0 == 2000209669)
		{
			return "DISCO_SS";
		}
		else if (*uParam0 == -232974724)
		{
			return "DISCO_TP";
		}
		else if (*uParam0 == -1272862985)
		{
			return "DISCO_TT";
		}
		else if (*uParam0 == -1891628345)
		{
			return "DISCO_UTE";
		}
		else if (*uParam0 == -1960242214)
		{
			return "DISCO_UCB";
		}
		else if (*uParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*uParam0 == -986176781)
		{
			return "DISCO_WB";
		}
		else if (*uParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*uParam0 == -986176781 || *uParam0 == 1986618633) || *uParam0 == -1787770845) || *uParam0 == -148407339)
	{
		return "DISCO_BONES";
	}
	else if ((((((*uParam0 == -1958832660 || *uParam0 == 921081956) || *uParam0 == 247563739) || *uParam0 == -232974724) || *uParam0 == -1300082860) || *uParam0 == -979575591) || *uParam0 == 1673499939)
	{
		return "DISCO_STRUCT";
	}
	else if (*uParam0 == -780455182)
	{
		return "DISCO_GRAVE";
	}
	else if (*uParam0 == -2009137002)
	{
		return "DISCO_SCULPT";
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == -1272862985) || *uParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*uParam0 == -1646022773 || *uParam0 == 1284679164) || *uParam0 == 2134589549) || *uParam0 == -1887999095) || *uParam0 == 1519228573) || *uParam0 == -1287911066) || *uParam0 == -1636964661) || *uParam0 == 429544447) || *uParam0 == -739986731)
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*uParam0 == -1109016944 || *uParam0 == 1535254161) || *uParam0 == -849582265) || *uParam0 == -161804536) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -607940493) || *uParam0 == 308500632) || *uParam0 == 1734766691) || *uParam0 == -415839138) || *uParam0 == 1982045664)
	{
		return "DISCO_SITE";
	}
	else if (*uParam0 == -1614148516)
	{
		return "DISCO_DEVICE";
	}
	else if ((*uParam0 == -1761189332 || *uParam0 == -1609238411) || *uParam0 == -709811179)
	{
		return "DISCO_ROCK";
	}
	else if ((*uParam0 == 58958195 || *uParam0 == -1053108445) || *uParam0 == 657666087)
	{
		return "DISCO_WRECK";
	}
	else if (*uParam0 == 1861313914)
	{
		if (__LIB_2__::func_410(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (uParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

bool func_593()
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return false;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return false;
	}
	return true;
}

int func_594(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar1 = iParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0) == iVar1)
		{
			PED::_0x627F7F3A0C4C51FF(iParam0, iVar1);
			iParam2 = (iParam2 - 1);
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

bool func_595(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("A_C_DUCK_01"):
				case joaat("A_C_RABBIT_01"):
				case joaat("A_C_PRONGHORN_01"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("A_C_BUCK_01"):
				case joaat("A_C_TURKEY_01"):
				case joaat("A_C_TURKEY_02"):
				case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
				case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
				case joaat("A_C_DEER_01"):
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("A_C_ALLIGATOR_01"):
				case joaat("A_C_ALLIGATOR_02"):
				case joaat("A_C_ALLIGATOR_03"):
				case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
				case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
				case joaat("A_C_CAROLINAPARAKEET_01"):
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case joaat("A_C_ELK_01"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_ML"):
				case joaat("A_C_QUAIL_01"):
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_596(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	iVar0[0] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	iVar0[1] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE_EGGS");
	iVar0[2] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
	iVar0[3] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW_EGGS");
	iVar0[4] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED");
	iVar0[5] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED_EGGS");
	iVar0[6] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	iVar0[7] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS");
	iVar0[8] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	iVar0[9] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS");
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_597(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS");
				break;
		}
	}
}

bool func_598(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
				case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
				case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
				case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
				case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
				case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
				case joaat("PROVISION_MATURE_VENISON"):
				case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_599(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_6__::func_679(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = __LIB_6__::func_678(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_600(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (__LIB_0__::func_257(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_6__::func_681(iParam0, *uParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_601(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	Var0 = { __LIB_6__::func_682(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return uVar4;
}

void func_602(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar10 = __LIB_5__::func_248(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {Global_1347702[iParam0 /*49*/].f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = __LIB_3__::func_734(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, __LIB_3__::func_733(iParam0), Global_1347702[iParam0 /*49*/].f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), Global_1347702[iParam0 /*49*/].f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, __LIB_3__::func_733(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, __LIB_3__::func_733(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, __LIB_3__::func_733(iParam0)))
	{
		__LIB_3__::func_727(iParam0, 4);
	}
}

void func_603(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			iVar0 = __LIB_0__::func_76(iParam0);
			if (__LIB_5__::func_247(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((__LIB_4__::func_844(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((__LIB_4__::func_844(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (Global_1835011[iVar0 /*74*/].f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1835011[iVar0 /*74*/].f_27, iVar2);
				if (!__LIB_7__::func_410(iVar0))
				{
					MAP::_BLIP_SET_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, -1986290853);
				}
				if (__LIB_3__::func_740(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::_BLIP_SET_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, 724623647);
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = __LIB_0__::func_76(iParam0);
			if (__LIB_5__::func_242(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (__LIB_4__::func_824(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = __LIB_4__::func_824(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				__LIB_4__::func_825(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

void func_604(var uParam0)
{
	if (uParam0->f_5.f_1 && !UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_605(var uParam0)
{
	int iVar0;
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_64[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_64[iVar0]);
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_89[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_89[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		uParam0->f_5.f_2[iVar0 /*5*/].f_3 = 0;
		iVar0++;
	}
}

void func_606(int iParam0)
{
	Global_1911894[iParam0 /*6*/].f_1 = 3;
	Global_1911894[iParam0 /*6*/] = 0;
	Global_1911894[iParam0 /*6*/].f_5 = 0;
}

bool func_607(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE2"):
		case -904734609: /* GXTEntry: "Goodbye Letter from Mary" */
		case -595619260: /* GXTEntry: "Goodbye Letter from Mary" */
		case joaat("DOCUMENT_RE_FROZEN_DEATH_MAP"):
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE3"):
		case 1760651454: /* GXTEntry: "Goodbye Letter from Mary" */
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE1"):
			return true;
	}
	return false;
}

bool func_608(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE2"):
		case joaat("DOCUMENT_RE_FROZEN_DEATH_MAP"):
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE3"):
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE1"):
			return false;
	}
	return true;
}

void func_609(var uParam0, int iParam1)
{
	int iVar0;
	uParam0->f_131 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(iParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_131)
	{
		uParam0->f_5.f_2[iVar0 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(iParam1, iVar0);
		uParam0->f_5.f_2[iVar0 /*5*/].f_2 = uParam0->f_5.f_2[iVar0 /*5*/];
		uParam0->f_5.f_2[iVar0 /*5*/].f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(iParam1, uParam0->f_5.f_2[iVar0 /*5*/].f_2);
		iVar0++;
	}
}

void func_610(var uParam0)
{
	(*uParam0)[0 /*9*/] = (*uParam0)[2 /*9*/];
	(uParam0[0 /*9*/])->f_1 = (uParam0[2 /*9*/])->f_1;
	(uParam0[0 /*9*/])->f_3 = (uParam0[2 /*9*/])->f_3;
	(uParam0[0 /*9*/])->f_4 = (uParam0[2 /*9*/])->f_4;
	(uParam0[0 /*9*/])->f_5 = (uParam0[2 /*9*/])->f_5;
	(uParam0[0 /*9*/])->f_5.f_1 = (uParam0[2 /*9*/])->f_5.f_1;
	(uParam0[0 /*9*/])->f_5.f_2 = (uParam0[2 /*9*/])->f_5.f_2;
	(uParam0[0 /*9*/])->f_5.f_3 = (uParam0[2 /*9*/])->f_5.f_3;
	(uParam0[0 /*9*/])->f_2 = 0;
}

void func_611(var uParam0)
{
	(*uParam0)[0 /*9*/] = (*uParam0)[1 /*9*/];
	(uParam0[0 /*9*/])->f_1 = (uParam0[1 /*9*/])->f_1;
	(uParam0[0 /*9*/])->f_3 = (uParam0[1 /*9*/])->f_3;
	(uParam0[0 /*9*/])->f_4 = (uParam0[1 /*9*/])->f_4;
	(uParam0[0 /*9*/])->f_5 = (uParam0[1 /*9*/])->f_5;
	(uParam0[0 /*9*/])->f_5.f_1 = (uParam0[1 /*9*/])->f_5.f_1;
	(uParam0[0 /*9*/])->f_5.f_2 = (uParam0[1 /*9*/])->f_5.f_2;
	(uParam0[0 /*9*/])->f_5.f_3 = (uParam0[1 /*9*/])->f_5.f_3;
	(uParam0[0 /*9*/])->f_2 = 0;
}

void func_612(var uParam0)
{
	(*uParam0)[2 /*9*/] = 0;
	(uParam0[2 /*9*/])->f_1 = 0;
	(uParam0[2 /*9*/])->f_2 = 0;
	(uParam0[2 /*9*/])->f_3 = 0;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_5.f_1 = 0;
	(uParam0[2 /*9*/])->f_5.f_2 = 0;
	(uParam0[2 /*9*/])->f_5.f_3 = 0;
	(*uParam0)[1 /*9*/] = 0;
	(uParam0[1 /*9*/])->f_1 = 0;
	(uParam0[1 /*9*/])->f_2 = 0;
	(uParam0[1 /*9*/])->f_3 = 0;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_5.f_1 = 0;
	(uParam0[1 /*9*/])->f_5.f_2 = 0;
	(uParam0[1 /*9*/])->f_5.f_3 = 0;
}

bool func_613(int iParam0)
{
	return (__LIB_0__::func_192(iParam0, 566155764) && !UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("MAP")));
}

bool func_614(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return true;
	}
	return false;
}

void func_615(var uParam0)
{
	if (uParam0->f_131 > 0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
	}
}

bool func_616(int iParam0, int iParam1)
{
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 2110129666)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -358392831)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 391077233)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 1010970643)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 382283982)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -498826883)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == -1222090749)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1641476577)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 690458252)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIPPED_BASE"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -277062447)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIPPED_BASE"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -180517239)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -2082844535)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	if ((!__LIB_0__::func_192(iParam1, 747873593) && !__LIB_0__::func_192(iParam1, joaat("CI_TAG_FOLDER_LETTERS"))) && !__LIB_0__::func_192(iParam1, joaat("CI_TAG_FOLDER_NOTES")))
	{
		return;
	}
	if (iParam1 != Global_1911894[iParam0 /*6*/])
	{
		Global_1911894[iParam0 /*6*/].f_1 = 3;
		Global_1911894[iParam0 /*6*/] = iParam1;
		Global_1911894[iParam0 /*6*/].f_5 = 0;
	}
}

void func_618(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_144((*uParam0)[iVar0 /*9*/], 0))
		{
			(uParam0[iVar0 /*9*/])->f_4 = __LIB_0__::func_372((*uParam0)[iVar0 /*9*/], -949239683);
		}
		iVar0++;
	}
}

bool func_619(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_620(var uParam0, var uParam1)
{
	if (uParam1->f_2)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return true;
	}
	else if (uParam1->f_3 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127) && TXD::_HAS_STREAMED_TXD_LOADED(uParam1->f_3))
		{
			if (!uParam1->f_2)
			{
				OBJECT::_SET_APPLY_OBJECT_TXD(uParam0->f_127, uParam1->f_3, 0, 0);
				TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(uParam1->f_3);
			}
			uParam1->f_2 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_621(int iParam0, int iParam1)
{
	switch (__LIB_0__::func_372(iParam1, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			if (Global_1935689.f_10189 != 1061777683 || __LIB_0__::func_372(iParam0, 1224357681) == __LIB_0__::func_372(iParam1, 1224357681))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_622(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	vector3 vVar0[24];
	if (iParam1 >= 24)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 24);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", iParam2);
	StringCopy(&cVar0, "divider", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	uParam0->f_89[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_89[iParam1], "isVisible", bParam3);
}

bool func_623(int iParam0)
{
	switch (iParam0)
	{
		case -1162387149:
		case 1084182731:
			return true;
	}
	return false;
}

bool func_624(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_356(iParam0);
	if ((iVar0 == joaat("WEAPON") && iParam0 != joaat("WEAPON_KIT_BINOCULARS")) && iParam0 != joaat("WEAPON_KIT_CAMERA"))
	{
		return false;
	}
	if (iVar0 == joaat("MONEY") && iParam0 != joaat("MONEY_LOANSHARK_GWEN_DEBT"))
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("EMOTE"):
		case joaat("WEAPON_MOD"):
		case joaat("FEE"):
		case joaat("ACTIVE_CARD"):
		case joaat("AMMO"):
		case joaat("WEAPON_DECORATION"):
		case joaat("ABILITY_CARD"):
		case joaat("GOLD"):
		case joaat("COMPONENT"):
		case joaat("MINIGAME"):
		case joaat("ADVERT"):
		case joaat("CORE_ITEM"):
		case joaat("PASSIVE_CARD"):
			return false;
		case joaat("CLOTHING"):
			switch (__LIB_0__::func_357(iParam0))
			{
				case -525676072:
					if (iParam0 == joaat("KIT_MASK_GREY_CLOTH"))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 81053684:
					return true;
				default:
					return false;
			}
			break;
	}
	if (__LIB_0__::func_357(iParam0) == -829303394)
	{
		return false;
	}
	return true;
}

bool func_625()
{
	return Global_1935689.f_10;
}

void func_626(var uParam0)
{
	Global_1935689.f_10190 = uParam0;
}

char* func_627(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ArticleHeading";
		case 1:
			return "ArticleSubHeading1";
		case 2:
			return "ArticleSubHeading2";
		case 3:
			return "ArticleSubHeading3";
		case 4:
			return "ArticleSubHeading4";
		case 5:
			return "ArticleBody1";
		case 6:
			return "ArticleBody2";
		case 7:
			return "ArticleBody3";
		case 8:
			return "ArticleBody4";
		case 9:
			return "ArticleBody5";
		case 10:
			return "ArticleBody6";
		case 11:
			return "ArticleBody7";
		case 12:
			return "ArticleBody8";
		case 13:
			return "ArticleBody9";
		case 14:
			return "ArticleBody10";
		default:
			break;
	}
	return "";
}

int func_628(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 3;
		default:
			break;
	}
	return 4;
}

char* func_629(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "textField0";
		case 1:
			return "textField1";
		case 2:
			return "textField2";
		case 3:
			return "textField3";
		case 4:
			return "textField4";
		case 5:
			return "textField5";
		case 6:
			return "textField6";
		case 7:
			return "textField7";
	}
	return "";
}

bool func_630(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, -839724752))
	{
		return __LIB_0__::func_192(iParam0, 1937586541);
	}
	return false;
}

int func_631(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam0, 173360570))
	{
		return 0;
	}
	switch (Global_1935689.f_17)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((__LIB_0__::func_192(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || __LIB_0__::func_192(iParam0, -839724752)) || __LIB_0__::func_192(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((__LIB_0__::func_192(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || __LIB_0__::func_192(iParam0, -839724752)) || __LIB_0__::func_192(iParam0, -136654233)) || __LIB_0__::func_192(iParam0, 554195525)) || __LIB_0__::func_192(iParam0, -1238310989)) || __LIB_0__::func_192(iParam0, 2127114599)) || __LIB_0__::func_192(iParam0, -1864584831)) || __LIB_0__::func_192(iParam0, 1068498601)) || __LIB_0__::func_192(iParam0, 1967571132))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_632(int iParam0, int iParam1)
{
	return iParam1 == __LIB_0__::func_372(iParam0, 1224357681);
}

int func_633(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = Global_1914319.f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1914319.f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_634(int iParam0, int iParam1)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (iParam1 == 61)
		{
			if (__LIB_0__::func_192(iParam0, 1490540191))
			{
				return true;
			}
		}
	}
	return false;
}

int func_635(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			return joaat("TAXIDERMY_ORDER_01");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			return joaat("TAXIDERMY_ORDER_02");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			return joaat("TAXIDERMY_ORDER_03");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			return joaat("TAXIDERMY_ORDER_04");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			return joaat("TAXIDERMY_ORDER_05");
		default:
			break;
	}
	return 0;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_01"):
			return joaat("BONE_00");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_02"):
			return joaat("BONE_01");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_03"):
			return joaat("BONE_02");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_04"):
			return joaat("BONE_03");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_05"):
			return joaat("BONE_04");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_06"):
			return joaat("BONE_05");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_07"):
			return joaat("BONE_06");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_08"):
			return joaat("BONE_07");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_09"):
			return joaat("BONE_08");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_10"):
			return joaat("BONE_09");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_11"):
			return joaat("BONE_10");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_12"):
			return joaat("BONE_11");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_13"):
			return joaat("BONE_12");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_14"):
			return joaat("BONE_13");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_15"):
			return joaat("BONE_14");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_16"):
			return joaat("BONE_15");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_17"):
			return joaat("BONE_16");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_18"):
			return joaat("BONE_17");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_19"):
			return joaat("BONE_18");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_20"):
			return joaat("BONE_19");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_21"):
			return joaat("BONE_20");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_22"):
			return joaat("BONE_21");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_23"):
			return joaat("BONE_22");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_24"):
			return joaat("BONE_23");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_25"):
			return joaat("BONE_24");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_26"):
			return joaat("BONE_25");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_27"):
			return joaat("BONE_26");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_28"):
			return joaat("BONE_27");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_29"):
			return joaat("BONE_28");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_30"):
			return joaat("BONE_29");
		default:
			break;
	}
	return 0;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_01"):
			return joaat("ROCK_00_GRZ");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_02"):
			return joaat("ROCK_01_GRZ");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_03"):
			return joaat("ROCK_02_CML");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_04"):
			return joaat("ROCK_03_CML");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_05"):
			return joaat("ROCK_04_BGV");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_06"):
			return joaat("ROCK_05_BGV");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_07"):
			return joaat("ROCK_06_HRT");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_08"):
			return joaat("ROCK_07_HRT");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_09"):
			return joaat("ROCK_08_ROA");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_10"):
			return joaat("ROCK_09_ROA");
		default:
			break;
	}
	return 0;
}

bool func_638(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return true;
	}
	return false;
}

int func_639(int iParam0)
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
		default:
			break;
	}
	return 0;
}

bool func_640(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return true;
	}
	return false;
}

bool func_641(int iParam0)
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
			return true;
	}
	return false;
}

void func_642(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*iParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*iParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*iParam1 = 0;
				break;
			case 1:
				*iParam1 = 1;
				break;
			case -1:
			case 2:
				*iParam1 = 2;
				break;
		}
	}
}

bool func_643(int iParam0, var uParam1, int iParam2, int iParam3)
{
	*iParam2 = INVENTORY::_0x640F890C3E5A3FFD(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return true;
	}
	return false;
}

int func_644()
{
	return PLAYER::GET_PLAYER_PED(255);
}

bool func_645(int iParam0, int iParam1)
{
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == -1424266966)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -487508500)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == -1791047090)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 760057945)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1043439814)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -2077441721)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 1972630951)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 2000759837)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 374699583)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -1340223099)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 416212934)
			{
				return true;
			}
			break;
		case -1239610997:
			if ((iParam1 == 1087288635 || iParam1 == 1761334567) || iParam1 == 504129763)
			{
				return true;
			}
			break;
		case 632545869:
			if ((iParam1 == -212251684 || iParam1 == -1401979141) || iParam1 == -1983586928)
			{
				return true;
			}
			break;
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_646(var uParam0)
{
	int iVar0;
	if (uParam0->f_142)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_127, "letter_item"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_127, "letter_item");
		}
		else
		{
			iVar0 = TASK::_0x804425C4BBD00883(Global_35);
			if (!__LIB_0__::func_144(iVar0, 0))
			{
				iVar0 = 323269915;
			}
		}
		Global_1911772 = iVar0;
	}
	else
	{
		iVar0 = Global_1911772;
	}
	return iVar0;
}

int func_647(int iParam0)
{
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 1712126263:
			return 1918075176;
		case 10252101:
			return -838154919;
		case -1229959999:
			return 779637421;
		case -1050374492:
			return -13228069;
		case 1513351077:
			return -1855297853;
		case -1565009253:
			return -672448089;
		case 733893097:
			return 329918092;
		case -164980960:
			return 1096961806;
		case 1894156335:
			return 2067181640;
		case 871191033:
			return joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_OUTRO");
		case -1273369295:
			return 1434623772;
		case 82200319:
			return joaat("DOCUMENT_INSPECT@NEWSPAPER_OUTRO");
		case -873135685:
			return 486187924;
		case 24248412:
			return -1079287506;
	}
	return 0;
}

int func_648(int iParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	int iVar0;
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
	}
	return 0;
}

int func_649(int iParam0)
{
	return __LIB_6__::func_676(iParam0);
}

int func_650(int iParam0)
{
	if (!__LIB_7__::func_599(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_651(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (!__LIB_5__::func_796(iParam0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (__LIB_7__::func_598(iParam0, iParam1))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else if (__LIB_0__::func_192(iParam0, -1690954218))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (__LIB_0__::func_192(iParam0, 1149630095))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (__LIB_0__::func_192(iParam0, 194498509))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED");
	}
	else if (__LIB_0__::func_192(iParam0, 43251425))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
	}
	return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
}

void func_652(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_139(*uParam0))
	{
		__LIB_1__::func_221(*uParam0, bParam1, 1);
	}
}

int func_653(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { __LIB_5__::func_96(iParam0) };
	Var5 = { __LIB_3__::func_0(iParam0, iParam1, Var0, Var0.f_4) };
	return __LIB_7__::func_600(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

bool func_654(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	return __LIB_7__::func_601(iParam0, iParam1) >= iParam2;
}

void func_655(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
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
			__LIB_7__::func_603(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
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
			Global_1347702[iParam0 /*49*/].f_40 = __LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		__LIB_3__::func_727(iParam0, 2);
	}
}

void func_656(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_01"):
			Global_40.f_9146.f_94[4] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_02"):
			Global_40.f_9146.f_94[5] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_03"):
			Global_40.f_9146.f_94[6] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_04"):
			Global_40.f_9146.f_94[12] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_05"):
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_06"):
			Global_40.f_9146.f_94[13] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_07"):
			Global_40.f_9146.f_94[0] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_08"):
			Global_40.f_9146.f_94[1] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_09"):
			Global_40.f_9146.f_94[2] = 1;
			break;
	}
}

bool func_657(int iParam0, int iParam1)
{
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 699685523)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == 687211918)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 1942589213)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 557096072)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 676223146)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == 961781775)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 88279163)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 251586723)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 554041952)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIP_TO_BACK"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 527714016)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIP_TO_BACK"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 1275147506)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 224513019)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_658(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (Global_1166172.f_49[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_659(int iParam0)
{
	var uVar0;
	if (!__LIB_7__::func_619(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

void func_660(var uParam0)
{
	struct<5> Var0;
	if (__LIB_7__::func_614(uParam0->f_4))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam0, &Var0))
		{
			uParam0->f_5.f_2 = Var0.f_4;
		}
	}
}

bool func_661(var uParam0, int iParam1)
{
	*uParam0 = Global_1166172.f_155;
	uParam0->f_2 = 1335336942;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_662(var uParam0)
{
	uParam0->f_2 = 1037679264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_663(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_664(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	__LIB_7__::func_642(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, uVar0, uVar1);
	return uVar4;
}

int func_665(int iParam0)
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
	__LIB_7__::func_642(iVar0, &iVar2, &uVar3, &iVar1, &uVar4);
	if (__LIB_2__::func_999(&uVar5, iVar0, iVar1, iVar2))
	{
	}
	return uVar5;
}

int func_666(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	__LIB_7__::func_642(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	__LIB_2__::func_999(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

void func_667(var uParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, -98816307))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);
	}
	if (__LIB_0__::func_192(iParam1, -1903335637))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	if (uParam0->f_146)
	{
		if (__LIB_0__::func_192(iParam1, -98816307))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}
	__LIB_7__::func_615(uParam0);
}

bool func_668(int iParam0, int iParam1)
{
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 1918075176 || iParam1 == -1661733570)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -838154919 || iParam1 == 384644694)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 779637421 || iParam1 == 1184806339)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == -13228069 || iParam1 == -733273327)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1855297853 || iParam1 == 327088472)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 329918092 || iParam1 == 1320390176)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1096961806 || iParam1 == -1142551033)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 2067181640 || iParam1 == -1286256799)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_OUTRO") || iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIP_TO_FRONT_OUTRO"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 1434623772 || iParam1 == 1708036133)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_OUTRO") || iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIP_TO_FRONT_OUTRO"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 676329346 || iParam1 == 1940752053)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -587250236 || iParam1 == -503655797)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_669(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_1)
	{
		return 1;
	}
	else if (__LIB_7__::func_619(*uParam0, &iVar0, joaat("INVENTORY"), joaat("UI_ITEMVIEWER"), 0, 0))
	{
		if (TXD::_DOES_STREAMED_TXD_EXIST(iVar0))
		{
			TXD::_REQUEST_STREAMED_TXD(iVar0, false);
			uParam0->f_3 = iVar0;
		}
	}
	return 1;
}

void func_670(var uParam0)
{
	(*uParam0)[0 /*9*/] = 0;
	(uParam0[0 /*9*/])->f_1 = 0;
	(uParam0[0 /*9*/])->f_2 = 0;
	(uParam0[0 /*9*/])->f_3 = 0;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_5.f_1 = 0;
	(uParam0[0 /*9*/])->f_5.f_2 = 0;
	(uParam0[0 /*9*/])->f_5.f_3 = 0;
	__LIB_7__::func_612(uParam0);
}

bool func_671(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	bool bVar15;
	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2 /*9*/] = 0;
		return false;
	}
	if (Global_36634)
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (__LIB_0__::func_236(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (__LIB_7__::func_621((*uParam1)[0 /*9*/], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1 /*9*/] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_150 = 0;
					return bVar15;
				}
			}
		}
		iVar14++;
	}
	if (!bVar15)
	{
		(*uParam1)[1 /*9*/] = 0;
	}
	return bVar15;
}

bool func_672(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_36634)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1935689.f_10189 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (__LIB_0__::func_236(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (__LIB_7__::func_621((*uParam1)[0 /*9*/], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2 /*9*/] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_151 = 0;
					return bVar17;
				}
			}
		}
		iVar14 = (iVar14 + -1);
	}
	if (!bVar17)
	{
		(*uParam1)[2 /*9*/] = 0;
	}
	return bVar17;
}

void func_673(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 25;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 5, 7, &uParam1);
	__LIB_0__::func_11(*uParam0);
}

void func_674(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	var uVar0;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, __LIB_7__::func_627(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "style", __LIB_7__::func_628(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "isVisible", bParam2);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "text", iParam3);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "text", 0);
	}
}

void func_675(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, __LIB_7__::func_629(iParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", iParam3);
		*uParam2++;
	}
}

bool func_676(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1935689.f_19.f_1)
	{
		if (__LIB_7__::func_632(iParam0, Global_1935689.f_19.f_2[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_677(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		__LIB_7__::func_642(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (__LIB_2__::func_999(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_678(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		if ((Global_1914319.f_17370 || iParam0) || Global_1914319.f_16855 == 2)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (iVar0 != __LIB_0__::func_398(7))
			{
				return true;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (iVar0 != __LIB_0__::func_398(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(__LIB_7__::func_644());
		if (iVar0 != PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()))
		{
			return true;
		}
	}
	return false;
}

void func_679(var uParam0, var uParam1)
{
	struct<5> Var0;
	*uParam1 = __LIB_7__::func_646(uParam0);
	uParam1->f_4 = __LIB_0__::func_372(*uParam1, -949239683);
	uParam1->f_1 = __LIB_7__::func_614(uParam1->f_4);
	if (uParam1->f_1)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam1, &Var0))
		{
			uParam1->f_5.f_2 = Var0.f_4;
		}
	}
	__LIB_7__::func_609(uParam0, *uParam1);
}

int func_680(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = __LIB_1__::func_921(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_720(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = __LIB_7__::func_649(iVar5);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

void func_681(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_7__::func_650(iParam1);
	iVar1 = __LIB_6__::func_680(iVar0, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = (Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] - iParam2);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = __LIB_0__::func_309(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1], 0, 10);
}

bool func_682(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		return true;
	}
	if (!__LIB_7__::func_481(16))
	{
		return true;
	}
	if ((!uParam0->f_144 && *uParam0 > 4) && __LIB_7__::func_613((*uParam1)[0 /*9*/]))
	{
		return true;
	}
	return false;
}

bool func_683(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	uParam0->f_136 = 0;
	if (__LIB_1__::func_732(Global_36622[1], 1))
	{
		iVar0 = 1;
		uParam0->f_136 = 1;
		__LIB_7__::func_652(&(Global_36622[1]), !uParam0->f_151);
		__LIB_7__::func_652(&(Global_36622[0]), 1);
	}
	if (__LIB_1__::func_732(Global_36622[0], 1))
	{
		iVar0 = 1;
		__LIB_7__::func_652(&(Global_36622[0]), !uParam0->f_150);
		__LIB_7__::func_652(&(Global_36622[1]), 1);
	}
	return iVar0;
}

void func_684(var uParam0, var uParam1)
{
	vector3 vVar0[24];
	char[] cVar3[8];
	switch ((*uParam1)[0 /*9*/])
	{
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE"):
			if (__LIB_0__::func_5(109) && !__LIB_1__::func_187(109))
			{
				__LIB_4__::func_471(109, 1);
				__LIB_7__::func_602(109);
				MemCopy(&cVar0, {Global_1347702[109 /*49*/].f_1}, 3);
				StringConCat(&cVar0, "_obj", 24);
				if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0) && UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(109), __LIB_3__::func_733(109)))
				{
					cVar3 = __LIB_0__::func_958(0, &cVar0, 0, 0, -1, -1);
					__LIB_5__::func_238(109, &cVar0, cVar3, -1082130432 /* Float: -1f */);
				}
			}
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE2A"):
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE2B"):
			if (__LIB_0__::func_5(110) && !__LIB_1__::func_187(110))
			{
				__LIB_4__::func_471(110, 1);
				__LIB_4__::func_685(109, 0);
			}
			break;
	}
}

void func_685(int iParam0)
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
		__LIB_7__::func_501(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_686(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_7__::func_501(50);
			}
			else
			{
				__LIB_7__::func_501(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_7__::func_501(51);
			}
			else
			{
				__LIB_7__::func_501(49);
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
			__LIB_7__::func_501(24);
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

int func_687()
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
	if (!__LIB_3__::func_629(iVar0))
	{
		return 0;
	}
	iVar1 = __LIB_3__::func_122(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_1__::func_683(&iVar2, 1);
	return __LIB_3__::func_630(iVar0, iVar2);
}

void func_688(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	__LIB_7__::func_444(iParam0, 0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_7__::func_444(iParam0, 0, &(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/]));
		iVar0++;
	}
}

bool func_689(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 9:
		case 11:
		case 17:
		case 20:
			return true;
		default:
			break;
	}
	return false;
}

void func_690(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_1 = -1;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_20), "", 64);
	StringCopy(&(uParam0->f_12), "", 64);
	StringCopy(&(uParam0->f_4), "", 64);
	uParam0->f_28 = iParam1;
}

char* func_691(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
		case 2:
			return "MGBLK_Sounds";
		case 1:
			return "MGDOM_Sounds";
		default:
			break;
	}
	return "";
}

int func_692(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vParam0, joaat("WEAPON_THROWN_DYNAMITE"), fParam3, false) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vParam0, joaat("WEAPON_THROWN_MOLOTOV"), fParam3, false))
		{
			return 1;
		}
	}
	if ((((((FIRE::IS_EXPLOSION_IN_SPHERE(25, vParam0, fParam3) || FIRE::IS_EXPLOSION_IN_SPHERE(0, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(30, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(31, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(29, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(26, vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return joaat("S_M_M_RHDDEALER_01");
		case 5:
			return joaat("S_M_M_SDDEALER_01");
		case 26:
			return joaat("S_M_M_STRDEALER_01");
		case 76:
			return joaat("S_M_M_VALDEALER_01");
		case 92:
			return joaat("S_M_M_VHTDEALER_01");
		case 78:
			return joaat("S_M_M_ASBDEALER_01");
		case 38:
			return joaat("S_M_M_BLWDEALER_01");
		case 75:
			return joaat("S_M_M_VALDEALER_01");
		default:
			break;
	}
	return 0;
}

bool func_694(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_11))
	{
		return false;
	}
	return true;
}

void func_695(var uParam0, int iParam1)
{
	if (iParam1 != *uParam0)
	{
	}
	if (iParam1 == 1 || iParam1 == 4)
	{
		uParam0->f_2 = 0f;
	}
	*uParam0 = iParam1;
}

void func_696(var uParam0)
{
	uParam0->f_3 = 100;
}

bool func_697(int iParam0, int iParam1, float fParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 120f;
					return true;
				case 2:
					*fParam2 = 60f;
					return true;
				case 3:
					*fParam2 = 0f;
					return true;
				case 4:
					*fParam2 = -60f;
					return true;
				case 5:
					*fParam2 = -120f;
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*fParam2 = (-112.4086f + 180f);
					return true;
				case 1:
					*fParam2 = (-157.4087f + 180f);
					return true;
				case 2:
					*fParam2 = (157.5913f + 180f);
					return true;
				case 3:
					*fParam2 = (112.5913f + 180f);
					return true;
				case 4:
					*fParam2 = 180f;
					return true;
				default:
					break;
			}
			return false;
		case 1:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 0f;
					return true;
				case 2:
					*fParam2 = 90f;
					return true;
				case 3:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 90f;
					return true;
				case 1:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		default:
			break;
	}
	return true;
}

void func_698(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1899528.f_61.f_1 = uParam0;
	if (iParam2 < 6)
	{
		Global_1899528.f_61.f_134[iParam2] = iParam1;
		Global_1899528.f_61.f_7[iParam2] = iParam3;
		Global_1899528.f_61.f_14[iParam2] = iParam4;
		Global_1899528.f_61.f_21[iParam2] = iParam5;
		Global_1899528.f_61.f_28[iParam2] = iParam6;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

bool func_699(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_66(iParam0, 0);
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar0) > 0;
}

void func_700(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_15 = 1;
	}
}

int func_701(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return 1;
	}
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return 0;
	}
	if (Global_1392915[iVar0 /*12*/].f_1 == 3 && Global_1900325.f_24 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_15 = 1;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_15;
}

void func_702(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_16 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_16 = 1;
	}
}

void func_703(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_16 == 1)
	{
	}
	Global_1392915.f_121[iVar0 /*20*/].f_16 = 0;
}

void func_704()
{
	__LIB_4__::func_877();
	__LIB_4__::func_878();
	__LIB_4__::func_872(-1);
	__LIB_4__::func_873(-1);
}

int func_705(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_4__::func_892(iParam0);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!MISC::IS_BIT_SET(iParam1, iVar1))
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % iVar0);
		iVar2++;
	}
	return iVar1;
}

int func_706(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = __LIB_4__::func_886(iParam1, iParam2, iParam3);
	PED::_SET_PED_BODY_COMPONENT(iParam0, iVar0);
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	return iVar0;
}

int func_707(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_6;
}

void func_708(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_1392915.f_121[iVar0 /*20*/].f_6 = iParam1;
}

void func_709(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	uParam0->f_23[iParam1 /*11*/].f_1 = iParam2;
	uParam0->f_23[iParam1 /*11*/].f_2 = { __LIB_0__::func_482(sParam3) };
}

int func_710(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (*uParam3 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam4 = 0;
	if (iParam1 == 1 && iParam0 == joaat("A_M_M_DOMINOESPLAYERS_01"))
	{
		switch (iParam2)
		{
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				if (iParam2 == joaat("META_OUTFIT_BLACKWATER_VAR_01"))
				{
					__LIB_4__::func_894(uParam3, 63);
					*iParam4++;
					__LIB_4__::func_894(uParam3, 64);
					*iParam4++;
				}
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_01"):
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_02"):
			case -216756988:
			case 368759504:
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_03"):
			case 1633413521:
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				if (iParam2 == joaat("META_OUTFIT_EMERALDRANCH_VAR_02"))
				{
					__LIB_4__::func_894(uParam3, 63);
					*iParam4++;
					__LIB_4__::func_894(uParam3, 64);
					*iParam4++;
				}
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_01"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_03"):
			case 1371088384:
			case 2106064285:
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 41);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_02"):
			case 1263868216:
				__LIB_4__::func_894(uParam3, 34);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 58);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 61);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 73);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 76);
				*iParam4++;
				break;
			default:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 3);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 4);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 5);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 6);
				*iParam4++;
				return 0;
		}
	}
	else if (iParam1 == 0 && iParam0 == joaat("A_M_M_CARDGAMEPLAYERS_01"))
	{
		switch (iParam2)
		{
			case joaat("META_OUTFIT_RHODES_VAR_03"):
			case joaat("META_OUTFIT_RHODES_VAR_01"):
			case -1233239944:
			case -726499920:
			case -321409750:
			case -262949646:
			case 772091720:
			case 1051251111:
			case 1088279801:
			case 1338340040:
			case joaat("META_OUTFIT_RHODES_VAR_02"):
			case 1949514659:
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 26);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case 1841389:
			case 4921971:
			case 251738079:
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 26);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				break;
			case -1887776194:
			case joaat("META_OUTFIT_VANHORN_VAR_03"):
			case -1562249180:
			case -1431009331:
			case -1276208343:
			case -815574510:
			case -506398995:
			case 104710086:
			case joaat("META_OUTFIT_VANHORN_VAR_01"):
			case joaat("META_OUTFIT_VANHORN_VAR_02"):
				__LIB_4__::func_894(uParam3, 3);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 4);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 5);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 6);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 63);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 64);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 14);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 17);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 34);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 58);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 73);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	else if (iParam1 == 2 && iParam0 == joaat("A_M_M_CARDGAMEPLAYERS_01"))
	{
		switch (iParam2)
		{
			case -1387257155:
			case -1087322498:
			case -478015708:
			case joaat("META_OUTFIT_VALENTINE_VAR_01"):
			case -194891548:
			case joaat("META_OUTFIT_VALENTINE_VAR_02"):
			case 112776593:
			case joaat("META_OUTFIT_VALENTINE_VAR_03"):
			case 411040031:
			case 1426194578:
			case 1791437852:
			case 2089668521:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 3);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 4);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 5);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 6);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 29);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 63);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 64);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case 1841389:
			case 4921971:
			case 251738079:
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 26);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				break;
			case -1978394955:
			case -1726696266:
			case -820633060:
			case -342303967:
			case -44073298:
			case joaat("META_OUTFIT_SAINTDENIS_VAR_01"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_03"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_02"):
			case 1263868216:
			case 1371088384:
			case 1754977219:
			case 2106064285:
				__LIB_4__::func_894(uParam3, 26);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 28);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 41);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				break;
			case -1600439903:
			case -903083698:
			case 163056605:
			case 401713232:
			case 793499396:
			case 883482182:
			case 1032745865:
			case 1123711721:
			case 1147797824:
			case 1508387900:
			case 1716995354:
			case 1947066503:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 15);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 63);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 64);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case -1892751910:
			case -1833636986:
			case 317713758:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_03"):
			case 979024947:
			case 1174655877:
			case 1469806260:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_01"):
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 3);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 4);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 5);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 6);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 29);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 63);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 64);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_02"):
			case 1934601404:
				__LIB_4__::func_894(uParam3, 14);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 17);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 34);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 58);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 73);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

int func_711(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case joaat("A_M_M_FIVEFINGERFILLETPLAYERS_01"):
				__LIB_4__::func_894(uParam2, 43);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 44);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 54);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 70);
				*iParam3++;
				break;
			default:
				__LIB_4__::func_894(uParam2, 43);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 44);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 54);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("A_M_M_CARDGAMEPLAYERS_01"):
				__LIB_4__::func_894(uParam2, 1);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 3);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 4);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 5);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 6);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 7);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 8);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 9);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 10);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 11);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 12);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 13);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 14);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 15);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 17);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 29);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 35);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 36);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 38);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 45);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 46);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 47);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 48);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 51);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 52);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 53);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 55);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 56);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 58);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 61);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 63);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 64);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 65);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 66);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 67);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 68);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 71);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 73);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 76);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 82);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 84);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 26);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 28);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 41);
				*iParam3++;
				break;
			case joaat("A_M_M_VALTOWNFOLK_01"):
			case joaat("A_M_M_VALTOWNFOLK_02"):
			case joaat("S_M_M_VALCOWPOKE_01"):
				__LIB_4__::func_894(uParam2, 1);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 3);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 4);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 5);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 6);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 7);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 8);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 9);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 10);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 11);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 12);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 13);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 14);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 15);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 17);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 29);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 35);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 36);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 38);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 45);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 46);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 47);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 48);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 51);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 52);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 53);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 55);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 56);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 58);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 61);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 63);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 64);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 65);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 66);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 67);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 68);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 71);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 73);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 76);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 82);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 84);
				*iParam3++;
				break;
			case joaat("U_M_M_VALGUNSMITH_01"):
				__LIB_4__::func_894(uParam2, 84);
				*iParam3++;
				break;
			case joaat("U_M_M_VALDOCTOR_01"):
				__LIB_4__::func_894(uParam2, 82);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWUPPERCLASS_01"):
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 12);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 26);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_O_BLWUPPERCLASS_01"):
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 12);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 26);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 76);
				*iParam3++;
				break;
			case joaat("U_M_O_BLWGENERALSTOREOWNER_01"):
				__LIB_4__::func_894(uParam2, 86);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWFOREMAN_01"):
				__LIB_4__::func_894(uParam2, 1);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 7);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 8);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 9);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 10);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 11);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 12);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 13);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 14);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 15);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 17);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 26);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 38);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 48);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 61);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_O_SDUPPERCLASS_01"):
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 26);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 28);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 41);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				break;
			case joaat("A_M_M_RHDUPPERCLASS_01"):
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 12);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 26);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 28);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 29);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				break;
			case joaat("A_M_M_RHDFOREMAN_01"):
				__LIB_4__::func_894(uParam2, 1);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 26);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 28);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 29);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 38);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 51);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 52);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 53);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 63);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 64);
				*iParam3++;
				break;
			case joaat("U_M_M_RHDGENSTOREOWNER_01"):
				__LIB_4__::func_894(uParam2, 80);
				*iParam3++;
				break;
			case joaat("A_M_M_VHTTHUG_01"):
			case joaat("A_M_M_VHTTOWNFOLK_01"):
				__LIB_4__::func_894(uParam2, 3);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 4);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 5);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 6);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 14);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 15);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 17);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 29);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 35);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 36);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 38);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 45);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 46);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 47);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 48);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 51);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 52);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 53);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 55);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 56);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 58);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 61);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 62);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 63);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 64);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 65);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 66);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 67);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 68);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 71);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 73);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 79);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWLABORER_01"):
			case joaat("A_M_M_BLWLABORER_02"):
				__LIB_4__::func_894(uParam2, 1);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 3);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 4);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 5);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 6);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 7);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 8);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 9);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 10);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 11);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 12);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 13);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 14);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 15);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 17);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 35);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 36);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 38);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 45);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 46);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 47);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 48);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 51);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 52);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 53);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 61);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_M_MIDDLESDTOWNFOLK_03"):
			case joaat("A_M_M_MIDDLESDTOWNFOLK_02"):
			case joaat("A_M_M_MIDDLESDTOWNFOLK_01"):
				__LIB_4__::func_894(uParam2, 1);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 26);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 28);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 29);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 34);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 38);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 39);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 41);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 51);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 52);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 53);
				*iParam3++;
				break;
			case joaat("A_M_M_EMRFARMHAND_01"):
				__LIB_4__::func_894(uParam2, 1);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 3);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 4);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 5);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 6);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 7);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 8);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 9);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 10);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 11);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 12);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 13);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 14);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 15);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 16);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 17);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 18);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 29);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 30);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 31);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 35);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 36);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 37);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 38);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 45);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 46);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 47);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 48);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 51);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 52);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 53);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 55);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 56);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 58);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 61);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 65);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 66);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 67);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 68);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 71);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 73);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_M_TUMTOWNFOLK_01"):
			case joaat("A_M_M_TUMTOWNFOLK_02"):
				__LIB_4__::func_894(uParam2, 45);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 46);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 47);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 48);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 49);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 50);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 51);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 52);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 53);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 55);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 56);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 58);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 61);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 63);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 64);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 65);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 66);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 67);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 68);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 71);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 73);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 74);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 75);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 76);
				*iParam3++;
				break;
			case joaat("S_M_M_BLWDEALER_01"):
			case joaat("S_M_M_RHDDEALER_01"):
				__LIB_4__::func_894(uParam2, 87);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 89);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 90);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 91);
				*iParam3++;
				break;
			case joaat("S_M_M_VHTDEALER_01"):
				__LIB_4__::func_894(uParam2, 62);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 79);
				*iParam3++;
				break;
			default:
				__LIB_4__::func_894(uParam2, 1);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 2);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 3);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 4);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 5);
				*iParam3++;
				__LIB_4__::func_894(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

bool func_712(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	vParam0.f_2 = (vParam0.z + 0.9f);
	__LIB_1__::func_216(&iVar2, vParam0, 0f, 0f, 0f, fParam3, fParam3, 1.8f);
	iVar3 = ENTITY::_0x886171A12F400B89(iVar2, iVar1, 1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar1));
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (PED::_GET_CARRIER_AS_HUMAN(iVar0) != Global_35)
			{
				__LIB_0__::func_172(iVar2);
				ITEMSET::_CLEAR_ITEMSET(iVar1);
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return true;
			}
		}
		iVar4++;
	}
	__LIB_0__::func_172(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return false;
}

void func_713(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = 0;
	__LIB_1__::func_148(&(uParam0->f_4));
}

int func_714(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		return 0;
	}
	__LIB_1__::func_231(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	__LIB_1__::func_216(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = ENTITY::_0x886171A12F400B89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (__LIB_4__::func_893(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					__LIB_0__::func_172(iVar2);
					ITEMSET::_CLEAR_ITEMSET(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	__LIB_0__::func_172(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

void func_715(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
	}
	*iParam0 = iParam1;
	iParam0->f_4 = 0;
	__LIB_1__::func_148(&(iParam0->f_1));
}

void func_716(var uParam0, var uParam1)
{
	uParam0->f_11 = uParam1;
	__LIB_1__::func_148(&(uParam0->f_12));
}

void func_717(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
	__LIB_1__::func_148(&(uParam0->f_4));
}

void func_718(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
	}
	uParam0->f_10 = iParam1;
	uParam0->f_11 = 0;
	__LIB_1__::func_148(&(uParam0->f_12));
}

bool func_719()
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (__LIB_1__::func_44(Global_1392915[iVar0 /*12*/].f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			return 0;
		case 98:
			return 1;
		case 5:
			return 2;
		case 9:
			return 3;
		case 69:
			return 5;
		default:
			break;
	}
	return 0;
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11;
		case 2:
			return 52;
		case 1:
			return 53;
		case 3:
			return 33;
		case 4:
			return 93;
		case 7:
			return 97;
		case 6:
			return 81;
		case 5:
			return 70;
		case 8:
			return 83;
		default:
			break;
	}
	return -1;
}

bool func_722(int iParam0)
{
	if (Global_1899528.f_61.f_4 == -1)
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1899528.f_61.f_4))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1899528.f_61.f_4, false))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Global_1899528.f_61.f_4, false))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Global_1899528.f_61.f_4))
	{
		return true;
	}
	return false;
}

void func_723()
{
	if (!Global_1898068.f_1)
	{
	}
	Global_1898068.f_1 = 1;
}

char* func_724(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Minigame_Dominoes_Scene";
		case 0:
			return "Minigame_Blackjack_Scene";
		case 2:
			return "Minigame_Poker_Scene";
		case 3:
			return "Minigame_Five_Finger_Fillet_Scene";
		default:
			break;
	}
	return "Minigame_Global_Scene";
}

int func_725(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 28:
			return joaat("P_DOMINORACK01X");
		default:
			break;
	}
	switch (iParam1)
	{
		case -1:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO_0_0");
				case 1:
					return joaat("P_DOMINO_0_1");
				case 2:
					return joaat("P_DOMINO_0_2");
				case 3:
					return joaat("P_DOMINO_0_3");
				case 4:
					return joaat("P_DOMINO_0_4");
				case 5:
					return joaat("P_DOMINO_0_5");
				case 6:
					return joaat("P_DOMINO_0_6");
				case 7:
					return joaat("P_DOMINO_1_1");
				case 8:
					return joaat("P_DOMINO1_2");
				case 9:
					return joaat("P_DOMINO_1_3");
				case 10:
					return joaat("P_DOMINO_1_4");
				case 11:
					return joaat("P_DOMINO_1_5");
				case 12:
					return joaat("P_DOMINO_1_6");
				case 13:
					return joaat("P_DOMINO_2_2");
				case 14:
					return joaat("P_DOMINO_2_3");
				case 15:
					return joaat("P_DOMINO_2_4");
				case 16:
					return joaat("P_DOMINO_2_5");
				case 17:
					return joaat("P_DOMINO_2_6");
				case 18:
					return joaat("P_DOMINO_3_3");
				case 19:
					return joaat("P_DOMINO_3_4");
				case 20:
					return joaat("P_DOMINO_3_5");
				case 21:
					return joaat("P_DOMINO_3_6");
				case 22:
					return joaat("P_DOMINO_4_4");
				case 23:
					return joaat("P_DOMINO_4_5");
				case 24:
					return joaat("P_DOMINO_4_6");
				case 25:
					return joaat("P_DOMINO_5_5");
				case 26:
					return joaat("P_DOMINO_5_6");
				case 27:
					return joaat("P_DOMINO_6_6");
				default:
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO01_0_0");
				case 1:
					return joaat("P_DOMINO01_0_1");
				case 2:
					return joaat("P_DOMINO01_0_2");
				case 3:
					return joaat("P_DOMINO01_0_3");
				case 4:
					return joaat("P_DOMINO01_0_4");
				case 5:
					return joaat("P_DOMINO01_0_5");
				case 6:
					return joaat("P_DOMINO01_0_6");
				case 7:
					return joaat("P_DOMINO01_1_1");
				case 8:
					return joaat("P_DOMINO01_1_2");
				case 9:
					return joaat("P_DOMINO01_1_3");
				case 10:
					return joaat("P_DOMINO01_1_4");
				case 11:
					return joaat("P_DOMINO01_1_5");
				case 12:
					return joaat("P_DOMINO01_1_6");
				case 13:
					return joaat("P_DOMINO01_2_2");
				case 14:
					return joaat("P_DOMINO01_2_3");
				case 15:
					return joaat("P_DOMINO01_2_4");
				case 16:
					return joaat("P_DOMINO01_2_5");
				case 17:
					return joaat("P_DOMINO01_2_6");
				case 18:
					return joaat("P_DOMINO01_3_3");
				case 19:
					return joaat("P_DOMINO01_3_4");
				case 20:
					return joaat("P_DOMINO01_3_5");
				case 21:
					return joaat("P_DOMINO01_3_6");
				case 22:
					return joaat("P_DOMINO01_4_4");
				case 23:
					return joaat("P_DOMINO01_4_5");
				case 24:
					return joaat("P_DOMINO01_4_6");
				case 25:
					return joaat("P_DOMINO01_5_5");
				case 26:
					return joaat("P_DOMINO01_5_6");
				case 27:
					return joaat("P_DOMINO01_6_6");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO02_0_0");
				case 1:
					return joaat("P_DOMINO02_0_1");
				case 2:
					return joaat("P_DOMINO02_0_2");
				case 3:
					return joaat("P_DOMINO02_0_3");
				case 4:
					return joaat("P_DOMINO02_0_4");
				case 5:
					return joaat("P_DOMINO02_0_5");
				case 6:
					return joaat("P_DOMINO02_0_6");
				case 7:
					return joaat("P_DOMINO02_1_1");
				case 8:
					return joaat("P_DOMINO02_1_2");
				case 9:
					return joaat("P_DOMINO02_1_3");
				case 10:
					return joaat("P_DOMINO02_1_4");
				case 11:
					return joaat("P_DOMINO02_1_5");
				case 12:
					return joaat("P_DOMINO02_1_6");
				case 13:
					return joaat("P_DOMINO02_2_2");
				case 14:
					return joaat("P_DOMINO02_2_3");
				case 15:
					return joaat("P_DOMINO02_2_4");
				case 16:
					return joaat("P_DOMINO02_2_5");
				case 17:
					return joaat("P_DOMINO02_2_6");
				case 18:
					return joaat("P_DOMINO02_3_3");
				case 19:
					return joaat("P_DOMINO02_3_4");
				case 20:
					return joaat("P_DOMINO02_3_5");
				case 21:
					return joaat("P_DOMINO02_3_6");
				case 22:
					return joaat("P_DOMINO02_4_4");
				case 23:
					return joaat("P_DOMINO02_4_5");
				case 24:
					return joaat("P_DOMINO02_4_6");
				case 25:
					return joaat("P_DOMINO02_5_5");
				case 26:
					return joaat("P_DOMINO02_5_6");
				case 27:
					return joaat("P_DOMINO02_6_6");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO03_0_0");
				case 1:
					return joaat("P_DOMINO03_0_1");
				case 2:
					return joaat("P_DOMINO03_0_2");
				case 3:
					return joaat("P_DOMINO03_0_3");
				case 4:
					return joaat("P_DOMINO03_0_4");
				case 5:
					return joaat("P_DOMINO03_0_5");
				case 6:
					return joaat("P_DOMINO03_0_6");
				case 7:
					return joaat("P_DOMINO03_1_1");
				case 8:
					return joaat("P_DOMINO03_1_2");
				case 9:
					return joaat("P_DOMINO03_1_3");
				case 10:
					return joaat("P_DOMINO03_1_4");
				case 11:
					return joaat("P_DOMINO03_1_5");
				case 12:
					return joaat("P_DOMINO03_1_6");
				case 13:
					return joaat("P_DOMINO03_2_2");
				case 14:
					return joaat("P_DOMINO03_2_3");
				case 15:
					return joaat("P_DOMINO03_2_4");
				case 16:
					return joaat("P_DOMINO03_2_5");
				case 17:
					return joaat("P_DOMINO03_2_6");
				case 18:
					return joaat("P_DOMINO03_3_3");
				case 19:
					return joaat("P_DOMINO03_3_4");
				case 20:
					return joaat("P_DOMINO03_3_5");
				case 21:
					return joaat("P_DOMINO03_3_6");
				case 22:
					return joaat("P_DOMINO03_4_4");
				case 23:
					return joaat("P_DOMINO03_4_5");
				case 24:
					return joaat("P_DOMINO03_4_6");
				case 25:
					return joaat("P_DOMINO03_5_5");
				case 26:
					return joaat("P_DOMINO03_5_6");
				case 27:
					return joaat("P_DOMINO03_6_6");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO04_0_0");
				case 1:
					return joaat("P_DOMINO04_0_1");
				case 2:
					return joaat("P_DOMINO04_0_2");
				case 3:
					return joaat("P_DOMINO04_0_3");
				case 4:
					return joaat("P_DOMINO04_0_4");
				case 5:
					return joaat("P_DOMINO04_0_5");
				case 6:
					return joaat("P_DOMINO04_0_6");
				case 7:
					return joaat("P_DOMINO04_1_1");
				case 8:
					return joaat("P_DOMINO04_1_2");
				case 9:
					return joaat("P_DOMINO04_1_3");
				case 10:
					return joaat("P_DOMINO04_1_4");
				case 11:
					return joaat("P_DOMINO04_1_5");
				case 12:
					return joaat("P_DOMINO04_1_6");
				case 13:
					return joaat("P_DOMINO04_2_2");
				case 14:
					return joaat("P_DOMINO04_2_3");
				case 15:
					return joaat("P_DOMINO04_2_4");
				case 16:
					return joaat("P_DOMINO04_2_5");
				case 17:
					return joaat("P_DOMINO04_2_6");
				case 18:
					return joaat("P_DOMINO04_3_3");
				case 19:
					return joaat("P_DOMINO04_3_4");
				case 20:
					return joaat("P_DOMINO04_3_5");
				case 21:
					return joaat("P_DOMINO04_3_6");
				case 22:
					return joaat("P_DOMINO04_4_4");
				case 23:
					return joaat("P_DOMINO04_4_5");
				case 24:
					return joaat("P_DOMINO04_4_6");
				case 25:
					return joaat("P_DOMINO04_5_5");
				case 26:
					return joaat("P_DOMINO04_5_6");
				case 27:
					return joaat("P_DOMINO04_6_6");
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO05_0_0");
				case 1:
					return joaat("P_DOMINO05_0_1");
				case 2:
					return joaat("P_DOMINO05_0_2");
				case 3:
					return joaat("P_DOMINO05_0_3");
				case 4:
					return joaat("P_DOMINO05_0_4");
				case 5:
					return joaat("P_DOMINO05_0_5");
				case 6:
					return joaat("P_DOMINO05_0_6");
				case 7:
					return joaat("P_DOMINO05_1_1");
				case 8:
					return joaat("P_DOMINO05_1_2");
				case 9:
					return joaat("P_DOMINO05_1_3");
				case 10:
					return joaat("P_DOMINO05_1_4");
				case 11:
					return joaat("P_DOMINO05_1_5");
				case 12:
					return joaat("P_DOMINO05_1_6");
				case 13:
					return joaat("P_DOMINO05_2_2");
				case 14:
					return joaat("P_DOMINO05_2_3");
				case 15:
					return joaat("P_DOMINO05_2_4");
				case 16:
					return joaat("P_DOMINO05_2_5");
				case 17:
					return joaat("P_DOMINO05_2_6");
				case 18:
					return joaat("P_DOMINO05_3_3");
				case 19:
					return joaat("P_DOMINO05_3_4");
				case 20:
					return joaat("P_DOMINO05_3_5");
				case 21:
					return joaat("P_DOMINO05_3_6");
				case 22:
					return joaat("P_DOMINO05_4_4");
				case 23:
					return joaat("P_DOMINO05_4_5");
				case 24:
					return joaat("P_DOMINO05_4_6");
				case 25:
					return joaat("P_DOMINO05_5_5");
				case 26:
					return joaat("P_DOMINO05_5_6");
				case 27:
					return joaat("P_DOMINO05_6_6");
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO06_0_0");
				case 1:
					return joaat("P_DOMINO06_0_1");
				case 2:
					return joaat("P_DOMINO06_0_2");
				case 3:
					return joaat("P_DOMINO06_0_3");
				case 4:
					return joaat("P_DOMINO06_0_4");
				case 5:
					return joaat("P_DOMINO06_0_5");
				case 6:
					return joaat("P_DOMINO06_0_6");
				case 7:
					return joaat("P_DOMINO06_1_1");
				case 8:
					return joaat("P_DOMINO06_1_2");
				case 9:
					return joaat("P_DOMINO06_1_3");
				case 10:
					return joaat("P_DOMINO06_1_4");
				case 11:
					return joaat("P_DOMINO06_1_5");
				case 12:
					return joaat("P_DOMINO06_1_6");
				case 13:
					return joaat("P_DOMINO06_2_2");
				case 14:
					return joaat("P_DOMINO06_2_3");
				case 15:
					return joaat("P_DOMINO06_2_4");
				case 16:
					return joaat("P_DOMINO06_2_5");
				case 17:
					return joaat("P_DOMINO06_2_6");
				case 18:
					return joaat("P_DOMINO06_3_3");
				case 19:
					return joaat("P_DOMINO06_3_4");
				case 20:
					return joaat("P_DOMINO06_3_5");
				case 21:
					return joaat("P_DOMINO06_3_6");
				case 22:
					return joaat("P_DOMINO06_4_4");
				case 23:
					return joaat("P_DOMINO06_4_5");
				case 24:
					return joaat("P_DOMINO06_4_6");
				case 25:
					return joaat("P_DOMINO06_5_5");
				case 26:
					return joaat("P_DOMINO06_5_6");
				case 27:
					return joaat("P_DOMINO06_6_6");
				default:
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("P_DOMINO_0_0");
		case 1:
			return joaat("P_DOMINO_0_1");
		case 2:
			return joaat("P_DOMINO_0_2");
		case 3:
			return joaat("P_DOMINO_0_3");
		case 4:
			return joaat("P_DOMINO_0_4");
		case 5:
			return joaat("P_DOMINO_0_5");
		case 6:
			return joaat("P_DOMINO_0_6");
		case 7:
			return joaat("P_DOMINO_1_1");
		case 8:
			return joaat("P_DOMINO1_2");
		case 9:
			return joaat("P_DOMINO_1_3");
		case 10:
			return joaat("P_DOMINO_1_4");
		case 11:
			return joaat("P_DOMINO_1_5");
		case 12:
			return joaat("P_DOMINO_1_6");
		case 13:
			return joaat("P_DOMINO_2_2");
		case 14:
			return joaat("P_DOMINO_2_3");
		case 15:
			return joaat("P_DOMINO_2_4");
		case 16:
			return joaat("P_DOMINO_2_5");
		case 17:
			return joaat("P_DOMINO_2_6");
		case 18:
			return joaat("P_DOMINO_3_3");
		case 19:
			return joaat("P_DOMINO_3_4");
		case 20:
			return joaat("P_DOMINO_3_5");
		case 21:
			return joaat("P_DOMINO_3_6");
		case 22:
			return joaat("P_DOMINO_4_4");
		case 23:
			return joaat("P_DOMINO_4_5");
		case 24:
			return joaat("P_DOMINO_4_6");
		case 25:
			return joaat("P_DOMINO_5_5");
		case 26:
			return joaat("P_DOMINO_5_6");
		case 27:
			return joaat("P_DOMINO_6_6");
		default:
			break;
	}
	return 0;
}

void func_726(int iParam0)
{
	Global_1955569.f_753.f_1 = 0f;
	Global_1955569.f_753 = iParam0;
}

var func_727(char* sParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = cParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_728()
{
	return Global_1899528.f_61.f_3;
}

bool func_729()
{
	return Global_1898068;
}

bool func_730()
{
	return Global_1899528.f_2 == 1;
}

bool func_731(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return true;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return true;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return true;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
			{
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return true;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return true;
			}
			return false;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return true;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return true;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return true;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return true;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return true;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return true;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return true;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return true;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return true;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return true;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 25:
			return false;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 29:
			return false;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return true;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return true;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return true;
		default:
			break;
	}
	return false;
}

void func_732(var uParam0, int iParam1)
{
	char cVar0[64];
	switch (*uParam0)
	{
		case 1:
			StringCopy(&cVar0, "dominos_set_", 64);
			StringIntConCat(&cVar0, iParam1 + 1, 64);
			uParam0->f_3 = MISC::GET_HASH_KEY(&cVar0);
			uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "gameTokenSetTextureDictionary", &cVar0);
			break;
		case 0:
		case 2:
			StringCopy(&cVar0, "card_set_", 64);
			StringIntConCat(&cVar0, iParam1 + 1, 64);
			uParam0->f_3 = MISC::GET_HASH_KEY(&cVar0);
			uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "gameTokenSetTextureDictionary", &cVar0);
			break;
	}
}

void func_733(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
	}
	uParam0->f_1 = iParam1;
}

void func_734(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, var uParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, uParam10);
}

int func_735(int iParam0, int iParam1)
{
	if (Global_1899528.f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	return Global_1899528.f_61.f_134[iParam1];
}

void func_736(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iParam1], "text", sParam2);
}

void func_737(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iParam1], "moneyText", sParam2);
}

void func_738(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		if (uParam0->f_14[iVar0] == iParam1)
		{
			MISC::CLEAR_BIT(&(uParam0->f_22), iVar0);
			MISC::CLEAR_BIT(&(uParam0->f_23), iVar0);
			if (uParam0->f_10 == iVar0)
			{
				uParam0->f_10 = -1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14[iVar0]))
			{
			}
			uParam0->f_14[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_739(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	Var0 = { __LIB_0__::func_38(joaat("WINS"), iParam0) };
	Var2 = { __LIB_0__::func_38(joaat("WIN_STREAK"), iParam0) };
	Var4 = { __LIB_0__::func_38(joaat("BEST_WIN_STREAK"), iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
	STATS::_STAT_ID_INCREMENT_INT(&Var2, 1);
	iVar6 = 0;
	if (STATS::STAT_ID_GET_INT(&Var2, &iVar6))
	{
		STATS::_0x91A4F58E01ED5E4C(&Var4, iVar6);
	}
	STATS::STAT_ID_GET_INT(&Var0, &uVar7);
	STATS::STAT_ID_GET_INT(&Var2, &uVar8);
	STATS::STAT_ID_GET_INT(&Var4, &uVar9);
}

void func_740(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	Var0 = { __LIB_0__::func_38(joaat("LOSSES"), iParam0) };
	Var2 = { __LIB_0__::func_38(joaat("WIN_STREAK"), iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
	STATS::_0x0FEE2561120F3333(&Var2);
	STATS::STAT_ID_GET_INT(&Var0, &uVar4);
	STATS::STAT_ID_GET_INT(&Var2, &uVar5);
}

void func_741()
{
	if (Global_1899528.f_2 == 0)
	{
	}
	Global_1899528.f_2 = 1;
}

void func_742(var uParam0)
{
	uParam0->f_3 = -1;
	uParam0->f_1 = 0;
	uParam0->f_1.f_1 = 0;
}

void func_743(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_7, sParam1);
}

int func_744(int iParam0, float fParam1, int iParam2, var uParam3)
{
	float fVar0;
	float fVar1;
	if (!__LIB_1__::func_76(iParam0))
	{
		return 0;
	}
	if (!__LIB_7__::func_697(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	fVar1 = (fParam1 + fVar0);
	if (fVar1 > 360f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 < -360f)
	{
		fVar1 = (fVar1 + 360f);
	}
	*uParam3 = { 0f, 0f, fVar1 };
	return 1;
}

void func_745(int iParam0, char* sParam1, char* sParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam1, sParam2, vParam3, vParam6, fParam9, 2) };
	vVar3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sParam1, sParam2, vParam3, vParam6, fParam9, 2) };
	ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iParam0, vVar3, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
}

int func_746(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 7;
			case 2:
				return 14;
			case 3:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			case 0:
				return 7;
			case 3:
				return 14;
			case 2:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 2)
	{
		switch (iParam0)
		{
			case 2:
				return 0;
			case 3:
				return 7;
			case 1:
				return 14;
			case 0:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case 3:
				return 0;
			case 2:
				return 7;
			case 0:
				return 14;
			case 1:
				return 21;
			default:
				break;
		}
	}
	return 0;
}

bool func_747(int iParam0)
{
	return (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 5) || iParam0 == 6) || iParam0 == 10) || iParam0 == 11);
}

float func_748(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (iParam1 == 3 || iParam1 == 1)
			{
				return 0f;
			}
			return 1f;
		default:
			break;
	}
	if (iParam1 == 3 || iParam1 == 1)
	{
		return 1f;
	}
	return 0f;
}

void func_749(var uParam0)
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_8)
	{
		uParam0->f_8[iVar0] = -1;
		iVar0++;
	}
}

void func_750(var uParam0, int iParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_11, iParam1);
}

char* func_751(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_22, iParam1))
	{
		return "";
	}
	if (!MISC::IS_BIT_SET(uParam0->f_23, iParam1))
	{
		return "";
	}
	return NETWORK::_0x356F9FB0698C1FEB(iParam1, uParam0->f_27);
}

void func_752(var uParam0, char[4] cParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, cParam1);
}

bool func_753(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	else if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam0))
	{
		return false;
	}
	if (TASK::_GET_TASK_MOVE_NETWORK_ID(iParam0) != joaat("SCRIPT_MINI_GAME_DOMINOES"))
	{
		return false;
	}
	return TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iParam0);
}

int func_754(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}
}

int func_755(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 0:
				return 2;
			case 2:
				return 0;
			case 1:
				return 3;
			case 3:
				return 1;
			default:
				break;
		}
	}
	if (iParam0 == 1)
	{
		return iParam1;
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 2:
				return 3;
			case 1:
				return 2;
			case 3:
				return 0;
			default:
				break;
		}
	}
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 0:
				return 3;
			case 2:
				return 1;
			case 1:
				return 0;
			case 3:
				return 2;
			default:
				break;
		}
	}
	return -1;
}

int func_756(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -90;
		case 2:
			return 180;
		case 3:
			return 90;
		default:
			break;
	}
	return 0;
}

bool func_757(int iParam0, int iParam1, int* iParam2, vector3 vParam3, vector3 vParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	fVar0 = 1E+10f;
	fVar1 = 1E+10f;
	fVar2 = (iParam2->f_7 + iParam2->f_6);
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (MISC::IS_BIT_SET(*iParam2, iParam1))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST(vVar3, vParam3);
	fVar1 = BUILTIN::VDIST(vVar3, vParam6);
	if (fVar0 < fVar1)
	{
		if (fVar0 <= fVar2)
		{
			MISC::SET_BIT(&(iParam2->f_1), iParam1);
			MISC::SET_BIT(iParam2, iParam1);
			return true;
		}
	}
	if (fVar1 <= fVar0)
	{
		if (fVar1 <= fVar2)
		{
			MISC::SET_BIT(&(iParam2->f_2), iParam1);
			MISC::SET_BIT(iParam2, iParam1);
			return true;
		}
	}
	return false;
}

void func_758(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7, var uParam8, float fParam9)
{
	char cVar0[64];
	if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_0", 64);
	}
	else
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_", 64);
	}
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar0, "_CLEAR_BOARD", 64);
	*iParam7 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam9, 2) };
	*uParam8 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam9, 2) };
}

void func_759(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= uParam0->f_14)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14[iParam1], sParam2);
}

bool func_760(int iParam0)
{
	return (iParam0 == 0 || iParam0 == 2);
}

void func_761(int iParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8)
{
	char cVar0[64];
	if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_0", 64);
	}
	else
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_", 64);
	}
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar0, "_CLEAR_BOARD", 64);
	*uParam7 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam8, 2) };
}

char* func_762(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_196(bParam1, "OOJBJ", "MGBLK");
		case 1:
			return __LIB_0__::func_196(bParam1, "OOJDO", "MGDOM");
		case 2:
			return __LIB_0__::func_196(bParam1, "OOJPO", "MGPKR");
		case 3:
			return __LIB_0__::func_196(bParam1, "OOJFF", "MGFFF");
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
	}
	return "XXXXX";
}

int func_763(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return -1;
	}
	return __LIB_0__::func_340(iParam0) & 65535;
}

bool func_764(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	if (!__LIB_1__::func_76(iParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_88(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*iParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*iParam6 + Vector(0.1f, 0f, 0f), &uVar4, false))
		{
			iParam6->f_2 = uVar4;
		}
	}
	if (!__LIB_7__::func_697(iParam0, iParam5, &fVar3))
	{
		return false;
	}
	*iParam7 = (fParam4 + fVar3);
	if (*iParam7 > 360f)
	{
		*iParam7 = (*iParam7 - 360f);
	}
	if (*iParam7 < -360f)
	{
		*iParam7 = (*iParam7 + 360f);
	}
	return true;
}

int func_765(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == 0)
	{
		return -1;
	}
	if (__LIB_0__::func_86(vParam2))
	{
		return -1;
	}
	iVar2 = __LIB_3__::func_321(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_3__::func_322(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((__LIB_3__::func_322(iVar0) == iParam1 && __LIB_3__::func_323(iVar0) == iParam0) && iVar2 == __LIB_3__::func_324(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_766(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_3__::func_323(iVar0) == iParam0 && __LIB_3__::func_322(iVar0) == iParam1)
		{
			__LIB_1__::func_68(iVar0, -1);
			__LIB_1__::func_69(iVar0, 0);
			__LIB_1__::func_70(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
				}
				MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
			}
			return;
		}
		iVar0++;
	}
}

int func_767()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_4__::func_368(iVar0))
		{
			return __LIB_3__::func_125(__LIB_0__::func_12(), iVar0);
		}
		iVar0++;
	}
	return -1;
}

void func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			__LIB_0__::func_896(6, 1);
			break;
		default:
			break;
	}
}

void func_769(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_1__::func_22(iVar0))
		{
			__LIB_1__::func_774(iVar0, iParam1, bParam2, bParam0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

bool func_770()
{
	return Global_1911914.f_1578;
}

bool func_771(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_772(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

bool func_773()
{
	int iVar0;
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 3:
			return true;
		case 51:
			return true;
		case 41:
			return true;
		case 108:
			return true;
		case 44:
			return true;
		case 84:
			return true;
		case 103:
			return true;
		case 53:
			return true;
		case 73:
			return true;
		case 18:
			return true;
		case 0:
			return true;
		case 106:
			return true;
		case 47:
			return true;
		case 63:
			return true;
		case 24:
			return true;
		case 46:
			return true;
		case 107:
			return true;
		case 80:
			return true;
		case 85:
			return true;
		case 7:
			return true;
		case 82:
			return true;
		case 110:
			return true;
		case 120:
			return true;
		default:
			break;
	}
	return false;
}

void func_774()
{
	Global_1911914.f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914.f_1581 = 1;
}

bool func_775()
{
	if (Global_1935689.f_17 == 3)
	{
		return true;
	}
	return false;
}

int func_776()
{
	return Global_1357549.f_1672;
}

void func_777(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_2_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_3_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_5_NOTE"):
			StringCopy(&(Param1.f_10), "gunslinger_notes", 32);
			break;
	}
}

int func_778(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_779()
{
	int iVar0;
	iVar0 = __LIB_0__::func_317();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return -1;
	}
	return -1;
}

bool func_780()
{
	return Global_1395601;
}

bool func_781()
{
	int iVar0;
	int iVar1;
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"))
		{
			return true;
		}
	}
	return false;
}

bool func_782(int iParam0)
{
	return (Global_40.f_12004.f_6 && iParam0) != 0;
}

void func_783(int iParam0)
{
	Global_40.f_12019.f_26 = (Global_40.f_12019.f_26 || iParam0);
}

bool func_784(int iParam0)
{
	return (Global_40.f_12004.f_1 && iParam0) != 0;
}

void func_785(int iParam0)
{
	Global_40.f_12019.f_3 = (Global_40.f_12019.f_3 || iParam0);
}

bool func_786(int iParam0)
{
	return (Global_40.f_12004.f_3 && iParam0) != 0;
}

void func_787(int iParam0)
{
	Global_40.f_12019.f_4 = (Global_40.f_12019.f_4 || iParam0);
}

bool func_788(int iParam0)
{
	return (Global_40.f_12004.f_5 && iParam0) != 0;
}

void func_789(int iParam0)
{
	Global_40.f_12019.f_2 = (Global_40.f_12019.f_2 || iParam0);
}

bool func_790()
{
	return 1 == Global_40.f_7748.f_3;
}

bool func_791()
{
	return Global_1914319.f_18996.f_1;
}

bool func_792()
{
	return Global_1914319.f_18996;
}

char* func_793()
{
	switch (Global_1914319.f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		default:
			break;
	}
	return "";
}

void func_794(int iParam0)
{
	Global_1898068.f_8 = iParam0;
}

bool func_795(int iParam0)
{
	if ((((((((((__LIB_0__::func_192(iParam0, 1147021565) || __LIB_0__::func_192(iParam0, -136654233)) || __LIB_0__::func_192(iParam0, -524514947)) || __LIB_0__::func_192(iParam0, -1238310989)) || __LIB_0__::func_192(iParam0, 1765172170)) || __LIB_0__::func_192(iParam0, 1490540191)) || __LIB_0__::func_192(iParam0, 1573112293)) || __LIB_0__::func_192(iParam0, -1242251796)) || __LIB_0__::func_192(iParam0, 1919582297)) || __LIB_0__::func_192(iParam0, -2085281117)) || iParam0 == joaat("CONSUMABLE_OFFAL"))
	{
		return true;
	}
	return false;
}

int func_796()
{
	return 33284224;
}

int func_797()
{
	return 33537269;
}

int func_798()
{
	return 18589696;
}

int func_799()
{
	return 26978448;
}

int func_800()
{
	return 33529847;
}

int func_801()
{
	return 26978304;
}

int func_802()
{
	return 32505855;
}

int func_803()
{
	return 26983431;
}

int func_804()
{
	return 33537239;
}

int func_805()
{
	return 32713860;
}

int func_806()
{
	return 16400295;
}

int func_807(bool bParam0)
{
	if (PED::_IS_PED_CARRYING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_808(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (PED::_0x1D46B417F926D34D(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				if (bParam0)
				{
					__LIB_0__::func_45("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					__LIB_0__::func_45("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!__LIB_0__::func_27(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == Global_35 || bParam2)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_809(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

void func_810(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	else
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432 /* Float: -1f */);
		Global_1935496.f_26 = 1;
	}
}

bool func_811()
{
	return Global_1914319.f_17375;
}

int func_812()
{
	return 16596983;
}

int func_813()
{
	return 16662519;
}

bool func_814(bool bParam0)
{
	if (PED::_IS_PED_HOGTIED(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_IS_PED_HOGTYING(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_IS_PED_LASSOED(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_0xEF3A8772F085B4AA(Global_35))
	{
		return false;
	}
	if (!PED::_GET_LASSO_TARGET(Global_35) == 0)
	{
		return false;
	}
	if (PED::_0x226CF9B159E38F42(Global_35))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return false;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_815(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_1__::func_376(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_IS_PED_FALLING_2(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_816(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_817(int iParam0)
{
	return __LIB_0__::func_27(Global_1935496.f_7, iParam0);
}

bool func_818(int iParam0)
{
	if (__LIB_1__::func_972(iParam0) != 5)
	{
		return false;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
		default:
			break;
	}
	return false;
}

bool func_819()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	iVar0 = __LIB_0__::func_12();
	vVar2 = { -3685.423f, -2597.155f, -10f };
	vVar5 = { 0f, 0f, -24.7897f };
	vVar8 = { 116.6365f, 76.68949f, 15f };
	if (iVar0 != 120)
	{
		return false;
	}
	else
	{
		iVar1 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar2, vVar5, vVar8);
		if (__LIB_1__::func_205(Global_35, iVar1, 1, 0))
		{
			__LIB_0__::func_172(iVar1);
			return true;
		}
		else
		{
			__LIB_0__::func_172(iVar1);
			return false;
		}
	}
	return false;
}

bool func_820(int iParam0)
{
	return __LIB_0__::func_27(Global_1131433.f_8, iParam0);
}

int func_821(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_20(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (Global_1395601.f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_822(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

bool func_823(int iParam0)
{
	return __LIB_0__::func_27(Global_1129544[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/].f_58, iParam0);
}

bool func_824(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_665(Global_35, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_35, iParam0))
	{
		return true;
	}
	return false;
}

bool func_825()
{
	int iVar0;
	if (__LIB_2__::func_800())
	{
		iVar0 = TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID());
		return iVar0 != 0;
	}
	return false;
}

bool func_826(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_749();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = iParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam1)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!__LIB_0__::func_125(iVar0))
	{
		if (bParam1)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam1)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar0))
	{
		if (bParam1)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_827(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0))
	{
		if (!__LIB_0__::func_125(iVar0))
		{
			if (bParam1)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (__LIB_2__::func_118(iVar0, 1, 1) > 2f)
		{
			if (bParam1)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!PED::_0xD543D3A8FDE4F185(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = iParam0;
	if (!__LIB_0__::func_125(iVar1))
	{
		if (bParam1)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam1)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar1))
	{
		if (bParam1)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

float func_828(int iParam0, float fParam1)
{
	return __LIB_6__::func_41(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

bool func_829(int iParam0)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return false;
	}
	return __LIB_4__::func_111(iParam0, 4, 1);
}

bool func_830(int iParam0)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == __LIB_0__::func_479())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

float func_831(int iParam0, vector3 vParam1)
{
	if (__LIB_6__::func_118(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

void func_832(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_6__::func_45(iParam0))
	{
		return;
	}
	__LIB_4__::func_109(iParam0, 2);
	if (bParam1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

void func_833(int iParam0)
{
	int iVar0;
	if (__LIB_4__::func_836() != 0 || __LIB_0__::func_2() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1225639.f_21[iVar0])
	{
		__LIB_6__::func_117(iParam0);
		return;
	}
	if (Global_1058888.f_42357.f_1[iVar0 /*5*/] == 1)
	{
		return;
	}
	__LIB_4__::func_837(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1058888.f_42357.f_1[iVar0 /*5*/] = 1;
}

void func_834(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == 2)
	{
		iParam3 = __LIB_6__::func_119();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	__LIB_6__::func_849(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		__LIB_6__::func_850(iParam0, iVar0, iParam3);
	}
}

float func_835(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_23();
	__LIB_4__::func_710(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = __LIB_6__::func_852(iParam0, 2);
	if (__LIB_1__::func_110(iVar0, __LIB_6__::func_853(iParam0, 2), 1))
	{
		__LIB_6__::func_854(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		__LIB_1__::func_240(88, bParam2);
		return 0f;
	}
	__LIB_6__::func_855(iParam0, __LIB_0__::func_23(), 2);
	__LIB_6__::func_854(iParam0, iVar1 + 1, 2);
	return fParam1;
}

void func_836(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = __LIB_6__::func_856(2);
	__LIB_6__::func_48(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_837(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = __LIB_6__::func_857(2);
	__LIB_6__::func_49(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_838(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = __LIB_6__::func_858(2);
	__LIB_6__::func_50(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

bool func_839(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (Global_40.f_450[iVar0] > -1 && Global_40.f_450[iVar0] < 200)
		{
			if (BUILTIN::VDIST(__LIB_1__::func_440(Global_40.f_450[iVar0]), vParam0) < fParam3)
			{
				return true;
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
	return false;
}

bool func_840(var uParam0, var uParam1, float fParam2)
{
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (!__LIB_2__::func_140(0))
	{
		return true;
	}
	if (fParam2 <= 0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477.f_191.f_3)
	{
		__LIB_1__::func_265(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}
	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_191.f_1 = 0;
	}
	Global_1347477.f_191.f_1++;
	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			__LIB_1__::func_240(0, 1);
			Global_1347477.f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		__LIB_1__::func_265(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

void func_841(float fParam0, bool bParam1)
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

bool func_842(int iParam0)
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
			if ((iVar0 != -1 && !__LIB_1__::func_122(iVar0)) || !__LIB_1__::func_707(iParam0, 1, 0))
			{
				return false;
			}
		}
	}
	return true;
}

void func_843(int iParam0, int iParam1, bool bParam2)
{
	__LIB_1__::func_798(iParam0, 0, 0);
	__LIB_1__::func_853(iParam1, 1, bParam2, 0);
}

void func_844()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_1__::func_860();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_845(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_28())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_846(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_0__::func_710(*uParam0);
	iVar1 = __LIB_0__::func_39(*uParam0);
	iVar2 = __LIB_0__::func_40(*uParam0);
	iVar3 = __LIB_0__::func_41(*uParam0);
	iVar4 = __LIB_0__::func_42(*uParam0);
	iVar5 = __LIB_0__::func_43(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = __LIB_0__::func_44(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = __LIB_0__::func_44(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	__LIB_1__::func_159(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_847(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (iParam5 == 2)
	{
		iParam5 = __LIB_6__::func_119();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		__LIB_6__::func_848(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	__LIB_6__::func_120(iVar0, iParam0, fParam1);
	__LIB_7__::func_834(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, __LIB_3__::func_130(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_848(var uParam0, var uParam1, float fParam2)
{
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (!__LIB_2__::func_407(0))
	{
		return true;
	}
	if (fParam2 <= 0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477.f_191.f_3)
	{
		__LIB_1__::func_265(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}
	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_191.f_1 = 0;
	}
	Global_1347477.f_191.f_1++;
	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			__LIB_1__::func_240(0, 1);
			Global_1347477.f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		__LIB_1__::func_265(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

Vector3 func_849()
{
	return 1410.669f, 271.409f, 89.4489f;
}

bool func_850(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CART02"):
		case joaat("WAGON03X"):
		case joaat("BUGGY03"):
		case joaat("COACH5"):
		case joaat("WAGON05X"):
		case joaat("SUPPLYWAGON"):
		case joaat("LOGWAGON"):
		case joaat("COACH6"):
		case joaat("STAGECOACH006X"):
		case joaat("CART03"):
		case joaat("BUGGY01"):
		case joaat("BUGGY02"):
		case joaat("OILWAGON01X"):
		case joaat("STAGECOACH005X"):
		case joaat("CART01"):
		case joaat("CART04"):
		case joaat("STAGECOACH003X"):
		case joaat("CART08"):
		case joaat("WAGON02X"):
		case joaat("COACH3"):
		case joaat("CART07"):
		case joaat("COACH4"):
		case joaat("WAGONDAIRY01X"):
		case joaat("CART06"):
		case joaat("CART05"):
		case joaat("UTILLIWAG"):
		case joaat("WAGON06X"):
		case joaat("CHUCKWAGON000X"):
		case joaat("STAGECOACH002X"):
		case joaat("COACH2"):
		case joaat("CHUCKWAGON002X"):
		case joaat("WAGON04X"):
		case joaat("STAGECOACH001X"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_851(int iParam0)
{
	return (Global_1415412 && iParam0) != 0;
}

bool func_852(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !__LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15)) && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_853(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_113())
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 23:
		case 117:
			iVar0 = 26;
			break;
		case 97:
			iVar0 = 105;
			break;
	}
	if (!__LIB_4__::func_848(iVar0, iParam1, 1024))
	{
		if (__LIB_2__::func_815(uParam0) && __LIB_2__::func_140(0))
		{
			__LIB_4__::func_849(iVar0, iParam1, 1024);
			uParam0->f_21 = -1;
			return true;
		}
	}
	return false;
}

void func_854(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_283(&(uParam0->f_34), 1);
	uParam0->f_40 = { __LIB_1__::func_977() };
	uParam0->f_21 = -1;
	if (__LIB_2__::func_792(uParam0, 16384))
	{
		__LIB_2__::func_802(uParam0, 16384);
	}
	__LIB_2__::func_802(uParam0, 32768);
	__LIB_2__::func_802(uParam0, 1024);
	__LIB_0__::func_37(&uLocal_15);
	if (__LIB_2__::func_792(uParam0, 4096))
	{
		iVar0 = __LIB_0__::func_560(__LIB_0__::func_12(), uParam0->f_24);
		iVar1 = __LIB_1__::func_334(*uParam0);
		if (__LIB_2__::func_799(iVar0) && __LIB_4__::func_856(iVar1, 1))
		{
			__LIB_3__::func_820(iVar0, 0);
			__LIB_2__::func_802(uParam0, 8192);
			__LIB_2__::func_802(uParam0, 4096);
		}
	}
}

void func_855(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = __LIB_0__::func_560(iParam3, iParam0);
	vVar1 = { __LIB_4__::func_846(iVar0) };
	vVar4 = { __LIB_4__::func_847(iVar0) };
	if (__LIB_0__::func_86(vVar1))
	{
		return;
	}
	if (!__LIB_2__::func_808(19, 16384))
	{
		if (!__LIB_0__::func_29(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_2__::func_772(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	if (__LIB_0__::func_86(vVar4))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	}
	else
	{
		Global_1914319.f_15936[iVar0 /*6*/].f_2 = { vVar4 };
	}
	Global_1914319.f_3[iParam0 /*446*/].f_10 = iVar0;
	Global_1914319.f_3[iParam0 /*446*/].f_25 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_26 = iParam4;
	Global_1914319.f_3[iParam0 /*446*/].f_28 = iParam5;
	Global_1914319.f_3[iParam0 /*446*/].f_29 = iParam9;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_409 = iParam8;
	if (__LIB_2__::func_779(iVar0) || __LIB_2__::func_780(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = joaat("SHOP_RHO_GUNSMITH");
				break;
			case 61:
				iVar7 = joaat("SHOP_STR_GENERAL_STORE");
				break;
			case 73:
				iVar7 = joaat("SHOP_VAL_DOCTOR");
				break;
			case 43:
				iVar7 = joaat("SHOP_SDN_GUNSMITH");
				break;
			case 41:
				iVar7 = joaat("SHOP_SDN_FENCE");
				break;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_20 = __LIB_1__::func_293(5, Global_1914319.f_3[iParam0 /*446*/].f_10, 2, iVar7);
	}
	Global_1393529.f_114[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1393529.f_220[iParam0] = 0f;
	Global_1393529.f_569[iParam0] = 0;
	StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = __LIB_2__::func_781(iParam0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_19 = fParam7;
	Global_1914319.f_3[iParam0 /*446*/].f_8 = iParam6;
	if (!__LIB_4__::func_853(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			__LIB_2__::func_820(iParam3);
			break;
		case 10:
			__LIB_2__::func_782(iParam3);
			break;
		case 18:
			__LIB_2__::func_783();
			break;
		case 9:
			__LIB_2__::func_784();
			break;
		case 22:
			__LIB_2__::func_785();
			break;
	}
	__LIB_2__::func_809(Global_1914319.f_3[iParam0 /*446*/].f_10);
	__LIB_1__::func_943(iParam0, 16);
	__LIB_2__::func_810(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

char* func_856(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR";
		case 0:
			return "MGBLK";
		case 1:
			return "MGDOM";
		case 3:
			return "MGFFF";
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
		default:
			break;
	}
	return "";
}

Vector3 func_857(vector3 vParam0, vector3 vParam3, float fParam6)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	uVar0 = vParam0.z;
	vVar1 = { vParam3 - vParam0 };
	vVar4 = { ((vVar1.x * BUILTIN::COS(fParam6)) - (vVar1.y * BUILTIN::SIN(fParam6))), ((vVar1.x * BUILTIN::SIN(fParam6)) + (vVar1.y * BUILTIN::COS(fParam6))), 0f };
	vVar4 = { vVar4 + vParam0 };
	vVar4.f_2 = uVar0;
	return vVar4;
}

void func_858()
{
	__LIB_7__::func_726(0);
}

void func_859(var uParam0, int iParam1)
{
	if (uParam0->f_2 == 0 || uParam0->f_4 == 1)
	{
		if (__LIB_0__::func_139(*uParam0))
		{
			__LIB_1__::func_748(uParam0, 1, 1);
		}
	}
	if (uParam0->f_2 != iParam1)
	{
	}
	uParam0->f_2 = iParam1;
}

bool func_860(var uParam0, int iParam1)
{
	if (uParam0->f_4 == 1)
	{
		return true;
	}
	if (uParam0->f_2 == 0 || __LIB_1__::func_77(iParam1, 2))
	{
		if (__LIB_0__::func_139(*uParam0))
		{
			__LIB_1__::func_748(uParam0, 1, 1);
		}
		return false;
	}
	Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
	if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_QUIT")))
	{
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
	}
	if (!__LIB_0__::func_139(*uParam0))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_QUIT")) || uParam0->f_5)
		{
			*uParam0 = __LIB_4__::func_864("MG_LEAVE2", joaat("INPUT_MINIGAME_QUIT"), 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
			__LIB_4__::func_862(*uParam0, joaat("INPUT_FRONTEND_PAUSE"));
			HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[*uParam0 /*18*/].f_3, 10, 1);
			uParam0->f_3 = 1;
		}
	}
	uParam0->f_1 = __LIB_0__::func_486(*uParam0, 1);
	if (__LIB_0__::func_139(*uParam0))
	{
		if (__LIB_0__::func_567(*uParam0, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("YES", "HUD_DOMINOS_SOUNDSET", true, 0);
			if (__LIB_0__::func_139(*uParam0))
			{
				__LIB_1__::func_748(uParam0, 1, 1);
			}
			uParam0->f_4 = 1;
			return true;
		}
		if (uParam0->f_1 == 0f)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_QUIT")))
			{
				if (__LIB_0__::func_139(*uParam0) && uParam0->f_5 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("NO", "HUD_DOMINOS_SOUNDSET", true, 0);
					__LIB_1__::func_748(uParam0, 1, 1);
				}
				uParam0->f_3 = 0;
				return false;
			}
		}
	}
	return false;
}

void func_861(var uParam0, struct<20> Param1, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	*uParam0 = { Param1 };
	uParam0->f_14 = Param1.f_12;
	uParam0->f_182 = { Param1.f_14 };
	uParam0->f_185 = Param1.f_18;
	uParam0->f_186 = Param1.f_19;
}

void func_862(var uParam0, int iParam1)
{
	if (uParam0->f_12 == iParam1)
	{
		return;
	}
	uParam0->f_13 = uParam0->f_12;
	uParam0->f_12 = iParam1;
}

void func_863(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	Global_1132155.f_4620.f_1 = (Global_1132155.f_4620.f_1 || iParam0);
}

void func_864(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
}

int func_865(vector3 vParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), vParam0, true, false, true, true);
		STREAMING::_0x513F8AA5BF2F17CF(vParam0, 25f, 0);
		return 1;
	}
	else if (!CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(500);
	}
	return 0;
}

int func_866()
{
	if (STREAMING::_0x0909F71B5C070797())
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::DO_SCREEN_FADE_IN(250);
		return 2;
	}
	return 1;
}

int func_867(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
	return 1;
}

bool func_868(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
	return true;
}

void func_869()
{
	int iVar0;
	Global_1899848.f_10 = 0;
	Global_1899848.f_11 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_1899848.f_32[iVar0 /*21*/].f_5 = 0;
		iVar0++;
	}
}

bool func_870()
{
	STREAMING::REQUEST_MODEL(Global_1899848.f_4, false);
	STREAMING::REQUEST_MODEL(Global_1899848.f_5, false);
	STREAMING::REQUEST_MODEL(Global_1899848.f_6, false);
	STREAMING::REQUEST_MODEL(Global_1899848.f_7, false);
	if (((!STREAMING::HAS_MODEL_LOADED(Global_1899848.f_4) || !STREAMING::HAS_MODEL_LOADED(Global_1899848.f_5)) || !STREAMING::HAS_MODEL_LOADED(Global_1899848.f_6)) || !STREAMING::HAS_MODEL_LOADED(Global_1899848.f_7))
	{
		return false;
	}
	return true;
}

void func_871()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_1899848.f_32[iVar0 /*21*/].f_12 = { 0f, 0f, 0f };
		Global_1899848.f_32[iVar0 /*21*/].f_15 = { 0f, 0f, 0f };
		Global_1899848.f_32[iVar0 /*21*/].f_18 = { 0f, 0f, 0f };
		iVar0++;
	}
}

bool func_872()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
		{
			Global_1899848.f_15 = TASK::_GET_SCENARIO_POINT_ENTITY(Global_1899848.f_15.f_1, "p_pitchfork01x_PH_R_HAND");
			if (ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
			{
			}
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15);
}

void func_873(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
	}
}

void func_874(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, true);
	}
}

bool func_875()
{
	if (((TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1) && !PED::IS_PED_INJURED(Global_35)) && PED::_IS_PED_USING_SCENARIO_POINT(Global_35, Global_1899848.f_15.f_1)) && PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CHORES_PITCH_FORK_PICKUP")))
	{
		return true;
	}
	return false;
}

void func_876(int iParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
	{
		if (iParam0 == 1)
		{
			if (TASK::_IS_SCENARIO_POINT_FLAG_SET(Global_1899848.f_15.f_1, 8))
			{
				TASK::_SET_SCENARIO_POINT_FLAG(Global_1899848.f_15.f_1, 8, false);
			}
		}
		else if (!TASK::_IS_SCENARIO_POINT_FLAG_SET(Global_1899848.f_15.f_1, 8))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(Global_1899848.f_15.f_1, 8, true);
		}
	}
}

void func_877(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_32[iParam0 /*21*/].f_9))
	{
		POPULATION::_0x74C2B3DC0B294102(Global_1899848.f_32[iParam0 /*21*/].f_9);
		POPULATION::_0xA1CFB35069D23C23(Global_1899848.f_32[iParam0 /*21*/].f_9);
		VOLUME::_DELETE_VOLUME(Global_1899848.f_32[iParam0 /*21*/].f_9);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_32[iParam0 /*21*/].f_10))
	{
		VOLUME::_DELETE_VOLUME(Global_1899848.f_32[iParam0 /*21*/].f_10);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_32[iParam0 /*21*/].f_11))
	{
		VOLUME::_DELETE_VOLUME(Global_1899848.f_32[iParam0 /*21*/].f_11);
	}
}

void func_878()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_201.f_15))
	{
		VOLUME::_DELETE_VOLUME(Global_1899848.f_201.f_15);
	}
}

void func_879()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1) && ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
	{
		if (TASK::_0x6EF4E31B4D5D2DA0(Global_1899848.f_15.f_1, "p_pitchfork01x_PH_R_HAND"))
		{
		}
	}
}

void func_880(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9, bool bParam10)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam0))
			{
				if (PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					PED::_REMOVE_PED_FROM_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, vParam2, vParam5, bParam8, bParam10, false, false, 2, true, bParam9, false);
			}
		}
	}
}

void func_881(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_882(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_65(uParam0[iVar0 /*3*/], 4))
		{
			if (!__LIB_0__::func_65(uParam0[iVar0 /*3*/], 1))
			{
				switch ((uParam0[iVar0 /*3*/])->f_1)
				{
					case 0:
						STREAMING::REQUEST_MODEL((*uParam0)[iVar0 /*3*/], false);
						break;
				}
				__LIB_0__::func_47(uParam0[iVar0 /*3*/], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_65(uParam0[iVar0 /*3*/], 4))
		{
			if (!__LIB_0__::func_65(uParam0[iVar0 /*3*/], 2))
			{
				switch ((uParam0[iVar0 /*3*/])->f_1)
				{
					case 0:
						if (STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0 /*3*/]))
						{
							__LIB_0__::func_47(uParam0[iVar0 /*3*/], 2);
						}
						else
						{
							return false;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_883(int iParam0, int iParam1)
{
	if (iParam1 > 24)
	{
	}
	Global_1899528.f_53[iParam0] = iParam1;
	if (iParam1 == 0)
	{
		Global_1899528.f_45[iParam0] = -15;
	}
	else
	{
		Global_1899528.f_45[iParam0] = __LIB_0__::func_23();
		__LIB_2__::func_670(&(Global_1899528.f_45[iParam0]), 0, 0, iParam1, 0, 0, 0, 0);
	}
}

void func_884(var uParam0, int iParam1)
{
	__LIB_7__::func_859(&(uParam0->f_78), iParam1);
}

bool func_885(var uParam0)
{
	if (__LIB_1__::func_77(uParam0->f_14, 2))
	{
		__LIB_7__::func_859(&(uParam0->f_78), 0);
		return false;
	}
	if (uParam0->f_12 == 6 || uParam0->f_12 == 7)
	{
		return false;
	}
	if (__LIB_7__::func_860(&(uParam0->f_78), uParam0->f_14))
	{
		return true;
	}
	if (__LIB_1__::func_77(uParam0->f_14, 4))
	{
		__LIB_7__::func_859(&(uParam0->f_78), 1);
		__LIB_1__::func_212(uParam0->f_14, 4);
	}
	return false;
}

void func_886()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848.f_4);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848.f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848.f_6);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848.f_7);
}

bool func_887(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

bool func_888()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
	{
		Global_1899848.f_15.f_1 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CHORES_PITCH_FORK_PICKUP_PUTDOWN"), Global_1899848.f_15.f_2, Global_1899848.f_15.f_5, 0f, 0, 1);
		if (Global_1899848.f_2 == 1)
		{
			__LIB_7__::func_876(0);
		}
		else
		{
			__LIB_7__::func_876(1);
		}
	}
	return TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1);
}

void func_889()
{
	Global_1899848 = 0;
	Global_1899848.f_1 = 0;
	Global_1899848.f_2 = 0;
	Global_1899848.f_217 = 0;
	Global_1899848.f_218 = 0;
	Global_1899848.f_220 = 0;
	Global_1899848.f_221 = 0;
	Global_1899848.f_222 = 0;
	Global_1899848.f_223 = 0;
	Global_1899848.f_224 = 0;
	Global_1899848.f_14 = 0;
	__LIB_7__::func_869();
}

void func_890()
{
	if (Global_1899848 == 1)
	{
		return;
	}
	__LIB_7__::func_871();
	Global_1899848.f_2 = 4;
	if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
	{
		Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	}
	if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
	{
		Global_1899848.f_201 = { -1604.72f, -1422.11f, 80.76f };
		Global_1899848.f_201.f_3 = { 0f, 0f, 210f };
		Global_1899848.f_15.f_2 = { -1604f, -1419.09f, 80.92f };
		Global_1899848.f_15.f_5 = 330f;
		Global_1899848.f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848.f_15.f_9 = 0f;
		Global_1899848.f_15.f_11 = { -1603.505f, -1418.235f, 82.495f };
		Global_1899848.f_15.f_14 = { 166.1f, 2.5f, 330f };
	}
	else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
	{
		Global_1899848.f_201 = { -1586.484f, -1411.629f, 80.2817f };
		Global_1899848.f_201.f_3 = { 0f, 0f, 180f };
		Global_1899848.f_15.f_2 = { -1604f, -1419.09f, 80.92f };
		Global_1899848.f_15.f_5 = 330f;
		Global_1899848.f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848.f_15.f_9 = 0f;
		Global_1899848.f_15.f_11 = { -1603.505f, -1418.235f, 82.495f };
		Global_1899848.f_15.f_14 = { 166.1f, 2.5f, 330f };
	}
	else
	{
		Global_1899848.f_201 = { -1603.35f, -1411.84f, 80.95f };
		Global_1899848.f_201.f_3 = { 0f, 0f, 230f };
		Global_1899848.f_15.f_2 = { -1603.35f, -1409f, 80.92f };
		Global_1899848.f_15.f_5 = 60f;
		Global_1899848.f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848.f_15.f_9 = 0f;
		Global_1899848.f_15.f_11 = { -1604.202f, -1408.503f, 82.495f };
		Global_1899848.f_15.f_14 = { 166.1f, 2.5f, 60f };
	}
	if (Global_1899848.f_3 == 0)
	{
		Global_1899848.f_9 = 3;
		Global_1899848.f_32[0 /*21*/] = { -1605.069f, -1418.533f, 80.871f };
		Global_1899848.f_32[1 /*21*/] = { -1603.826f, -1421.34f, 80.7765f };
		Global_1899848.f_32[2 /*21*/] = { -1608.24f, -1418.22f, 80.96f };
	}
	else if (Global_1899848.f_3 == 1)
	{
		Global_1899848.f_9 = 3;
		Global_1899848.f_32[0 /*21*/] = { -1603.01f, -1420.13f, 80.84f };
		Global_1899848.f_32[1 /*21*/] = { -1606.332f, -1421.34f, 80.8483f };
		Global_1899848.f_32[2 /*21*/] = { -1608.302f, -1417.608f, 80.9513f };
	}
	else if (Global_1899848.f_3 == 2)
	{
		Global_1899848.f_9 = 6;
		Global_1899848.f_32[0 /*21*/] = { -1581.343f, -1408.958f, 80.2649f };
		Global_1899848.f_32[1 /*21*/] = { -1585.939f, -1416.165f, 80.3239f };
		Global_1899848.f_32[2 /*21*/] = { -1576.188f, -1418.922f, 80.6635f };
		Global_1899848.f_32[3 /*21*/] = { -1565.435f, -1422.183f, 81.0723f };
		Global_1899848.f_32[4 /*21*/] = { -1588.059f, -1429.491f, 80.3306f };
		Global_1899848.f_32[5 /*21*/] = { -1596.71f, -1426.369f, 80.4849f };
	}
	else if (Global_1899848.f_3 == 3)
	{
		Global_1899848.f_9 = 5;
		Global_1899848.f_32[0 /*21*/] = { -1588.511f, -1411.575f, 80.3268f };
		Global_1899848.f_32[1 /*21*/] = { -1581.747f, -1409.224f, 80.2775f };
		Global_1899848.f_32[2 /*21*/] = { -1572.328f, -1417.021f, 80.8312f };
		Global_1899848.f_32[3 /*21*/] = { -1567.363f, -1423.642f, 81.0785f };
		Global_1899848.f_32[4 /*21*/] = { -1574.739f, -1428.451f, 80.7116f };
	}
	else if (Global_1899848.f_3 == 4)
	{
		Global_1899848.f_9 = 4;
		Global_1899848.f_32[0 /*21*/] = { -1597.65f, -1412.11f, 80.95f };
		Global_1899848.f_32[1 /*21*/] = { -1602.31f, -1407.28f, 80.94f };
		Global_1899848.f_32[2 /*21*/] = { -1599.93f, -1411.69f, 80.95f };
		Global_1899848.f_32[3 /*21*/] = { -1602.31f, -1414.33f, 80.95f };
	}
	else
	{
		Global_1899848.f_9 = 4;
		Global_1899848.f_32[0 /*21*/] = { -1600.13f, -1411.14f, 80.95f };
		Global_1899848.f_32[1 /*21*/] = { -1598.63f, -1414.08f, 80.95f };
		Global_1899848.f_32[2 /*21*/] = { -1602.22f, -1414.03f, 80.95f };
		Global_1899848.f_32[3 /*21*/] = { -1600.07f, -1417.74f, 80.93f };
	}
	Global_1899848 = 1;
	Global_1899848.f_1 = 0;
}

void func_891(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		__LIB_7__::func_879();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Global_1899848.f_15))
		{
			ENTITY::DETACH_ENTITY(Global_1899848.f_15, true, true);
			PHYSICS::ACTIVATE_PHYSICS(Global_1899848.f_15);
		}
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(Global_1899848.f_15));
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (iParam0 == 1)
		{
			if (!__LIB_1__::func_533(4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		PED::_0x58F7DB5BD8FA2288(Global_35);
	}
	Global_1899848.f_15 = 0;
}

bool func_892(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10)
{
	if (__LIB_0__::func_86(vParam2))
	{
		return false;
	}
	if (iParam9 == 1 && !ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = __LIB_1__::func_306(vParam2, iParam1, 0.25f, 1);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			ENTITY::SET_ENTITY_ROTATION(*uParam0, vParam5, 2, true);
			if (iParam8 == 1)
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(*uParam0, 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (iParam10 == 1)
			{
				__LIB_1__::func_206(vParam2, 0.25f, 2);
			}
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, vParam5, 2, true);
			if (iParam8 == 1)
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(*uParam0, 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_PROOFS(*uParam0, 31, false);
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}

int func_893(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_894(int iParam0)
{
	Global_1898092.f_1 = (Global_1898092.f_1 || iParam0);
}

void func_895(int iParam0, float fParam1)
{
	iParam0->f_19 = fParam1;
}

void func_896(int iParam0)
{
	Global_1898092.f_1 = (Global_1898092.f_1 - (Global_1898092.f_1 && iParam0));
}

bool func_897(int iParam0)
{
	return (Global_1898092.f_1 && iParam0) != 0;
}

void func_898(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

void func_899(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/].f_1 = __LIB_0__::func_23();
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		PERSCHAR::_0x0B3A99AB6713AA52(__LIB_0__::func_120(iParam0));
	}
}

void func_900(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = (*uParam0)[iVar2];
		(*uParam0)[iVar2] = (*uParam0)[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

int func_901()
{
	return joaat("P_FOLDEDBILLS01X");
}

var func_902(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_0x18D6869FBFFEC0F8(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_903(int iParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return MAP::_BLIP_SET_MODIFIER(iParam0, -1186550032);
	}
	return MAP::_BLIP_REMOVE_MODIFIER(iParam0, -1186550032);
}

void func_904(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(*iParam0, 301, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 315, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 178, bParam1);
}

int func_905(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;
	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			__LIB_3__::func_896(bParam0);
			bParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(bParam0->f_1, 15);
			*bParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (bParam0->f_2 == 0)
				{
					*bParam0 = 3;
					return 1;
				}
				else
				{
					bParam0->f_4 = 1;
					*bParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*bParam0 = 3;
			}
			break;
		case 3:
			*bParam0 = 0;
			break;
	}
	return 0;
}

bool func_906(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	if (((PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, bParam6, bParam7) && (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iVar0))) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == *uParam0)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, iParam1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, iParam2);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, iParam3);
		return true;
	}
	if (bParam4)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, 0);
	}
	return false;
}

bool func_907(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0 /*12*/].f_4 && iParam1) != 0;
}

bool func_908(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_909(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 1);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 1);
	}
}

void func_910(vector3 vParam0, int iParam3)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_0__::func_86(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		uVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(uVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(uVar1) };
			if (__LIB_0__::func_175(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(uVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_911(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
	__LIB_1__::func_736(uParam0, 2);
}

bool func_912(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		PED::_0xD65FDC686A031C83(iParam0, iParam1, fParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
		}
		if ((PED::_0x68821369A2CEADD5(iParam0, iParam1) && (bParam5 || !TASK::_0x02EBBB3989B7E695(iParam0))) && (iParam3 == 0 || PED::_0x569F1E1237508DEB(iParam0) == iParam3))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_913(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return vParam0 + __LIB_3__::func_803(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}

int func_914(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || __LIB_6__::func_47(iVar0))
		{
			fVar3 = __LIB_7__::func_831(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_915(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

int func_916(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (iParam2 == Global_1945938[iVar0 /*18*/].f_10 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_917(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
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
	if (!__LIB_1__::func_540(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, sParam2))
		{
			__LIB_1__::func_580(uParam0, iParam1, 4);
			return 1;
		}
		else if (bParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, sParam2))
		{
			__LIB_1__::func_580(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

bool func_918(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 < 0 || iParam4 >= *iParam0)
	{
		iParam4 = (*iParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (__LIB_4__::func_102((*iParam0)[iVar0], iParam1, uParam2, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_919()
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(529482239, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(223107846, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1428772759, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1480157862, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2061234582, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1033154098, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1619191432, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1254150069, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1668640329, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-92203186, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(378017637, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(874422897, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-508527824, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2077381882, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-681889807, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-595414142, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1712141152, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1887892244, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(638507460, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1610796463, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-614511582, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1254654001, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-419045977, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2146274232, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1850986699, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-465906603, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1498945676, false);
}

int func_920()
{
	switch (iLocal_98)
	{
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_921()
{
	iLocal_99 = 0;
}

void func_922(int iParam0)
{
	iLocal_99 = (iLocal_99 || iParam0);
}

bool func_923(int iParam0)
{
	return (iLocal_99 && iParam0) != 0;
}

bool func_924(int iParam0, int iParam1)
{
	return (iParam0->f_29 && iParam1) != 0;
}

int func_925(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			Global_1935475[iVar0 /*2*/] = 0;
			Global_1935475[iVar0 /*2*/].f_1 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_926(int iParam0)
{
	iLocal_102 = (iLocal_102 || iParam0);
}

void func_927(int iParam0, int iParam1)
{
	PED::_0xF008E0BA1FE1D644(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

void func_928(int iParam0)
{
	iLocal_101 = (iLocal_101 - (iLocal_101 && iParam0));
}

bool func_929(int iParam0)
{
	return (iLocal_101 && iParam0) != 0;
}

Vector3 func_930()
{
	return -1326.96f, -232.96f, 99.72f;
}

void func_931(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 2442171;
	if (bParam4)
	{
		iVar0 |= 1536;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_932(int iParam0)
{
	iLocal_101 = (iLocal_101 || iParam0);
}

bool func_933(int iParam0)
{
	return (iLocal_100 && iParam0) != 0;
}

void func_934(int iParam0)
{
	iLocal_100 = (iLocal_100 || iParam0);
}

bool func_935(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return MISC::_0x1B065A2BF7953815(0) != 1;
}

void func_936(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			PED::SET_PED_RESET_FLAG((*iParam0)[iVar0], 49, true);
		}
		iVar0++;
	}
}

void func_937()
{
	PLAYER::_0xC6366A585659D15C(PLAYER::GET_PLAYER_INDEX(), "");
	PLAYER::_0x98CD760DE43B612E(PLAYER::GET_PLAYER_INDEX(), "");
	PED::_0x8AF46E5159A5B620(Global_35, 0);
}

void func_938()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_75[4]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_75[4]);
		POPULATION::_0xA1CFB35069D23C23(iLocal_75[4]);
	}
	__LIB_0__::func_172(iLocal_75[4]);
	__LIB_0__::func_172(iLocal_75[9]);
	__LIB_0__::func_172(iLocal_75[10]);
	__LIB_0__::func_172(iLocal_75[20]);
}

bool func_939(int iParam0)
{
	return (iLocal_102 && iParam0) != 0;
}

int func_940(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 65536:
			return joaat("CRIME_TRESPASSING");
		case 1024:
			return joaat("CRIME_THEFT");
		case 4:
		case 8:
		case 16:
		case 64:
		case 256:
		case 8192:
			return joaat("CRIME_THREATEN");
		case 512:
			return joaat("CRIME_ROBBERY");
		case 2:
		case 32:
		case 2048:
			if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_10, Global_35, 0, 0) || !ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[0]))
			{
				return joaat("CRIME_HIT_AND_RUN");
			}
			else if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
			{
				return joaat("CRIME_ASSAULT");
			}
			else
			{
				return joaat("CRIME_UNARMED_ASSAULT");
			}
			break;
		case 4096:
			return joaat("CRIME_VANDALISM");
		case 1:
		case 128:
			return joaat("CRIME_MURDER");
		case 16384:
			return 0;
	}
	return joaat("CRIME_TRESPASSING");
}

void func_941(int iParam0)
{
	iLocal_99 = (iLocal_99 - (iLocal_99 && iParam0));
}

int func_942(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

Vector3 func_943(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_944(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_3 > Global_40.f_9096[iParam0 /*12*/].f_10;
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_946(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_948(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(uParam0, iVar0);
}

void func_949(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		*iParam0 = 64;
		*iParam1 = 66;
	}
	else
	{
		*iParam0 = 67;
		*iParam1 = 68;
	}
}

void func_950(int iParam0)
{
	if (iLocal_98 == 3)
	{
		iParam0->f_1 = 2;
		iParam0->f_369[0 /*32*/].f_6 = { -1403.06f, -269.28f, 98.71f };
		iParam0->f_369[0 /*32*/].f_9 = -49f;
		iParam0->f_369[0 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[1 /*32*/].f_6 = { -1414.56f, -182f, 99.63f };
		iParam0->f_369[1 /*32*/].f_9 = 40.7f;
		iParam0->f_369[1 /*32*/].f_1 = joaat("A_C_WOLF");
	}
}

void func_951(int iParam0)
{
	var uVar0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		uVar0 = PLAYER::_0x0139637A3BFF8B6D(*iParam0, &uVar1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), uVar1, uVar0);
	}
}

void func_952(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
}

char* func_953()
{
	return "LOGCMP";
}

char* func_954()
{
	return "LCMPAUD";
}

bool func_955(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HAS_VOICE") && DECORATOR::DECOR_GET_BOOL(iParam0, "HAS_VOICE"))
	{
		return true;
	}
	if (iParam1 && AUDIO::_0xF0EE69F500952FA5(iParam0))
	{
		return true;
	}
	return false;
}

int func_956()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_WHITTLE");
}

char* func_957()
{
	return "PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C";
}

Vector3 func_958()
{
	return -1400.832f, -205.7252f, 101.8838f;
}

char* func_959(int iParam0, int iParam1)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 3;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0957_A_M_M_Rancher_White_02";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0807_S_M_M_Army_01_WHITE_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 4;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
				case 1:
					return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
				case 2:
					return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
				case 3:
					return "0708_S_M_M_RaCRailGuards_01_WHITE_01";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_960(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
		case 64:
		case 512:
		case 2048:
		case 8192:
		case 65536:
			return true;
		default:
			break;
	}
	return false;
}

void func_961(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(iParam0->f_17), iParam1);
}

bool func_962(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return false;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_963(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false);
}

int func_964(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			iVar0 = 814;
			break;
		case 9:
			iVar0 = 816;
			break;
		case 7:
			iVar0 = 820;
			break;
		case 0:
			iVar0 = 814;
			break;
		case 3:
			iVar0 = 817;
			break;
	}
	iVar0 = (iVar0 + (iParam1 + iParam2));
	return iVar0;
}

void func_965(int iParam0)
{
	iLocal_100 = (iLocal_100 - (iLocal_100 && iParam0));
}

bool func_966(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

char* func_968()
{
	return "Default_Shocked";
}

bool func_969(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_0__::func_154(iParam1))
	{
		return true;
	}
	if (bParam2 && PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_970(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	if (PED::IS_PED_HUMAN(*iParam0))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar0 < fParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 146, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 148, false);
			PED::_0xC6C4E15CF7D52FEA(*iParam0, 1000f);
			LAW::_0xF0B67BAD53C35BD9(*iParam0, Global_35, *iParam0, Global_36, iParam1);
		}
	}
}

bool func_971(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
		{
			if (__LIB_0__::func_665(Global_1935630.f_34[iVar0], *uParam0, 1, 1) < fParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_972(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return true;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*uParam0, false);
}

bool func_973(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x8D81E7824B7753F7(*uParam0, sParam1, 1);
}

void func_974(int* iParam0, int iParam1)
{
	iParam0->f_13 = iParam1;
}

char* func_975(int iParam0, int iParam1)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 5;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0038_A_M_M_BiVWorker_01_WHITE_01";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0976_A_M_M_RoughTravellers_White_07";
				case 3:
					return "0807_S_M_M_Army_01_WHITE_02";
				case 4:
					return "0957_A_M_M_Rancher_White_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 2;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
				case 1:
					return "0113_S_M_M_RaCRailWorker_01_ASIAN_01";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_976(int* iParam0)
{
	switch (iParam0->f_16)
	{
		case 1:
		case 2:
			return 5f;
		case 7:
			return 7.5f;
		default:
			break;
	}
	return 1.5f;
}

int func_977(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, true))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_NEG")))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (DECORATOR::DECOR_EXIST_ON(iVar1, "interactNeg"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "interactNeg");
				}
				iVar2++;
				*uParam0++;
				DECORATOR::DECOR_SET_INT(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 330, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

char* func_978()
{
	return "LOG_BLIP_FM";
}

void func_979(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	int iVar0;
	bParam3 = bParam3;
	if (*bParam4)
	{
		if (__LIB_1__::func_205(Global_35, Global_1392194[uParam2->f_136 /*10*/].f_6, 1, 0))
		{
			*bParam4 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (bParam5)
				{
					iVar0 = 580546400;
				}
				else
				{
					iVar0 = 0;
				}
				__LIB_2__::func_73(iParam0, iParam1, -89429847, iVar0, 0, sParam6);
			}
		}
	}
}

void func_980(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	*uParam4 = (iVar0 / 60);
	iVar0 = (iVar0 - *uParam4 * 60);
	*uParam5 = iVar0;
}

int func_981()
{
	return joaat("A_M_M_BIVWORKER_01");
}

void func_982(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

void func_983(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[iParam0->f_136 /*10*/].f_6))
	{
		VOLUME::_0x6D5F9E69BA1BE783(Global_1392194[iParam0->f_136 /*10*/].f_6);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[iParam0->f_136 /*10*/].f_5))
	{
		VOLUME::_0x6D5F9E69BA1BE783(Global_1392194[iParam0->f_136 /*10*/].f_5);
	}
}

Vector3 func_984()
{
	return -1400.29f, -207.08f, 100.64f;
}

Vector3 func_985()
{
	return -1392.202f, -270.137f, 96.51328f;
}

float func_986(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 179.55f;
				case 1:
					return 51.9f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_987(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.44f, -207.25f, 101.2044f;
				case 1:
					return -1440.13f, -230.94f, 101.25f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_988(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, 0f;
				case 1:
					return 0f, 0f, -128.1f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_989()
{
	return -1442.024f, -359.4506f, 111.622f;
}

bool func_990(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false);
}

int func_991(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LCMP");
		case 1:
			return joaat("EACAS");
		case 2:
			return joaat("EACUR");
		default:
			break;
	}
	return 0;
}

int func_992(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1652537076 /* GXTEntry: "Logging Camp" */;
		case 1:
			return 1776245965 /* GXTEntry: "Home Construction" */;
		case 2:
			return -228594924 /* GXTEntry: "Railroad Construction" */;
		default:
			break;
	}
	return 0;
}

int func_993(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1654713063 /* GXTEntry: "A group of lumberjacks work to chop down the trees." */;
		case 1:
			return 111316232 /* GXTEntry: "A father and sons are building a house." */;
		case 2:
			return -96966750 /* GXTEntry: "A group of workers build a new railroad track." */;
		default:
			break;
	}
	return 0;
}

int func_994(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BLIP_EVENT_APPLESEED");
		case 1:
			return joaat("BLIP_EVENT_CASTOR");
		case 2:
			return joaat("BLIP_EVENT_RAILROAD_CAMP");
		default:
			break;
	}
	return 0;
}

int func_995()
{
	return joaat("TOAST_LOG_BLIPS");
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -207723122;
		case 1:
			return -109837334;
		case 2:
			return -1451721831;
		default:
			break;
	}
	return 0;
}

int func_997()
{
	return joaat("SP_MISSIONS_2");
}

char* func_998(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "LCMP";
		case 1:
			return "EACAS";
		case 2:
			return "EACUR";
		default:
			break;
	}
	return "EA_DEFAULT";
}

char* func_999()
{
	return "LOG_HONOR_WAGON_STEAL";
}
