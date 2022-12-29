void func_0(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_0__::func_325(iParam0[iVar0]);
		iVar0++;
	}
}

void func_1(var uParam0)
{
	__LIB_1__::func_581(uParam0, 32);
}

void func_2(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, float fParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	*iParam0 = PROPSET::_CREATE_PROPSET(iParam1, vParam2, iParam5, fParam6, fParam7, bParam8, bParam9);
	iVar0 = PROPSET::_GET_ENTITIES_FROM_PROPSET(*iParam0, iVar2, 0, false, false);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar2);
		iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar3);
		ENTITY::_0xA91E6CF94404E8C9(iVar4);
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar2);
	ITEMSET::CLEAN_ITEMSET(iVar2);
	ITEMSET::DESTROY_ITEMSET(iVar2);
}

void func_3(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_3__::func_770(iParam0);
	}
	else
	{
		__LIB_3__::func_771(iParam0);
	}
}

bool func_4(vector3 vParam0, int iParam3, float fParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar10;
	var uVar11;
	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, fParam4, iParam5, &vVar3, &vVar0, &uVar10, &uVar9, &uVar11, bParam6))
	{
		vVar6 = { __LIB_0__::func_173(vVar3 - vVar0) };
		*iParam3 = { vVar0 + vVar6 * FtoV((0.5f * MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true))) };
		return true;
	}
	return false;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = __LIB_3__::func_998(iParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar1 = __LIB_3__::func_998(iParam0, 2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar1;
	}
	iVar2 = __LIB_3__::func_998(iParam0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return iVar2;
	}
	uVar3 = PED::_0x14169FA823679E41(iParam0);
	return uVar3;
}

int func_6(int iParam0)
{
	if (!__LIB_2__::func_38(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

int func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bVar0 = __LIB_0__::func_27(iParam3, 1);
	bVar1 = __LIB_0__::func_27(iParam3, 2);
	bVar2 = !__LIB_0__::func_27(iParam3, 4);
	bVar3 = __LIB_0__::func_27(iParam3, 8);
	bVar4 = !__LIB_0__::func_27(iParam3, 16);
	bVar5 = __LIB_0__::func_27(iParam3, 32);
	bVar6 = __LIB_0__::func_27(iParam3, 64);
	return __LIB_1__::func_766(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

bool func_8(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_276((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_9()
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
	__LIB_1__::func_835(7);
	__LIB_1__::func_853(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_1__::func_853(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_1__::func_853(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

bool func_10(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, Global_36);
}

bool func_11(int iParam0, int iParam1)
{
	var uVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	if (__LIB_2__::func_1(iParam1, 0, 1))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam1, &uVar0, &vVar3, &uVar6, &vVar9);
	}
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		vVar12 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	vVar15 = { vVar12 - vVar9 };
	fVar18 = __LIB_1__::func_95(vVar15, vVar3);
	if (fVar18 < 0f)
	{
		return false;
	}
	return true;
}

void func_12(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (bParam3 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 != -1)
	{
		iVar0 = __LIB_3__::func_148(iParam0, iParam1);
		if (iVar0 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar0 /*2*/].f_1;
	}
	return 0;
}

bool func_14(vector3 vParam0, float fParam3)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		iVar1 = ITEMSET::CREATE_ITEMSET(false);
		LAW::_0x0C392DB374655176(vParam0, fParam3, iVar1);
		bVar0 = ITEMSET::GET_ITEMSET_SIZE(iVar1) > 0;
		ITEMSET::_CLEAR_ITEMSET(iVar1);
		ITEMSET::CLEAN_ITEMSET(iVar1);
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return bVar0;
}

void func_15(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_1__::func_209(uParam0->f_51))
	{
		__LIB_1__::func_222(uParam0->f_51, 0);
		fVar0 = __LIB_3__::func_292(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, __LIB_0__::func_93());
		bVar1 = __LIB_0__::func_514(!__LIB_1__::func_85(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = __LIB_2__::func_261(iVar2, __LIB_3__::func_185(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_16(var uParam0)
{
	if (__LIB_0__::func_139(*uParam0))
	{
		__LIB_1__::func_748(uParam0, 1, 1);
	}
}

int func_17(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return 0;
	}
	return __LIB_2__::func_271(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_18()
{
	if (__LIB_3__::func_628(0))
	{
		return true;
	}
	return false;
}

int func_19(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_540(iParam0, bParam6, iParam7);
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

void func_20(var uParam0)
{
	if (*uParam0 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(*uParam0);
		*uParam0 = 0;
	}
}

int func_21(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (iParam5 < 0 || iParam5 >= *uParam0)
	{
		iParam5 = 0;
	}
	if (bParam6 < 0 || bParam6 >= *uParam0)
	{
		bParam6 = (*uParam0 - 1);
	}
	if (fParam7 < 0f)
	{
		fParam7 = 0f;
	}
	if (fParam8 < 0f)
	{
		fParam8 = 999999.9f;
	}
	if (fParam7 > fParam8)
	{
	}
	iVar1 = 0;
	fVar3 = 1E+07f;
	iVar0 = iParam5;
	while (iVar0 <= bParam6)
	{
		if (!bParam4 || !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0]))
		{
			fVar2 = __LIB_0__::func_94((*uParam0)[iVar0], vParam1, 1);
			if (fVar2 < fVar3)
			{
				if (fVar2 >= fParam7 && fVar2 <= fParam8)
				{
					fVar3 = fVar2;
					iVar1 = (*uParam0)[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_22(var uParam0, float fParam1, bool bParam2)
{
	uParam0->f_22 = fParam1;
	if (bParam2)
	{
		__LIB_3__::func_523(uParam0, fParam1);
	}
}

bool func_23(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return __LIB_1__::func_990(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_24(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = __LIB_0__::func_485();
	}
	else if (__LIB_0__::func_485() - iParam1->f_4) > __LIB_2__::func_97(iParam1)
	{
		return __LIB_2__::func_98(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return false;
}

int func_25(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = -1;
	fVar1 = 999999.9f;
	if (__LIB_0__::func_86(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1894899.f_161)
	{
		iVar2 = Global_1894899.f_10[iVar3];
		fVar4 = BUILTIN::VDIST2(vParam0, Global_1888801[iVar2 /*35*/].f_6);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (__LIB_0__::func_20(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

bool func_26(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_75(uParam1))
	{
		__LIB_1__::func_148(uParam1);
	}
	if (uParam2->f_3 < 0f)
	{
		uParam2->f_3 = __LIB_0__::func_265(uParam1);
		uParam2->f_1 = uParam2->f_3;
	}
	fVar0 = (__LIB_0__::func_265(uParam1) - uParam2->f_1);
	*uParam2 = (*uParam2 + fVar0);
	if (fVar0 >= 0.5f)
	{
		if ((bParam7 || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6)) && __LIB_1__::func_410(__LIB_2__::func_114(Global_35, fParam5), ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam3, 1))
		{
			uParam2->f_2 = (uParam2->f_2 + fVar0);
		}
		else if (uParam2->f_2 > 0f)
		{
			uParam2->f_2 = (uParam2->f_2 - fVar0);
			if (uParam2->f_2 < 0f)
			{
				uParam2->f_2 = 0f;
			}
		}
		uParam2->f_1 = __LIB_0__::func_265(uParam1);
	}
	if (uParam2->f_2 >= fParam4)
	{
		return true;
	}
	return false;
}

void func_27(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(26), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

bool func_28(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_29(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, int iParam11)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { __LIB_2__::func_66(vParam0, vParam3, iParam10) };
	vVar4 = { __LIB_2__::func_67(vParam0, vParam3, iParam10) };
	__LIB_0__::func_568(vParam6, fParam9, iParam11);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

bool func_30(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1.5f)
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!__LIB_0__::func_27(iParam2, 1))
		{
			return false;
		}
		iVar0 = Global_1935630.f_40;
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) >= 1.5f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(iParam2, 8))
	{
		if (fParam1 <= 25f)
		{
			if (__LIB_1__::func_348(Global_35, iParam0) < 6f)
			{
				if (!PED::IS_PED_FACING_PED(Global_35, iParam0, 40f))
				{
					return false;
				}
			}
		}
	}
	else if (!PED::IS_PED_FACING_PED(Global_35, iParam0, fParam1))
	{
		return false;
	}
	iVar1 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if (iVar1 != joaat("WEAPON_UNARMED"))
	{
		if (__LIB_0__::func_27(iParam2, 2) && __LIB_0__::func_27(iParam2, 4))
		{
			if (!WEAPON::_IS_WEAPON_ONE_HANDED(iVar1) && !WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
			{
				return false;
			}
		}
		else if (__LIB_0__::func_27(iParam2, 2))
		{
			if (!WEAPON::_IS_WEAPON_ONE_HANDED(iVar1))
			{
				return false;
			}
		}
		else if (__LIB_0__::func_27(iParam2, 4))
		{
			if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_31(var uParam0, int iParam1)
{
	uParam0->f_319 = iParam1;
}

void func_32(var uParam0, int iParam1)
{
	uParam0->f_320 = iParam1;
}

void func_33(var uParam0, int iParam1)
{
	uParam0->f_321 = iParam1;
}

int func_34(int iParam0, int iParam1, var uParam2, int iParam3)
{
	return STREAMING::_REQUEST_SCENARIO_TYPE(iParam0, iParam1, uParam2, iParam3);
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 1:
			return 2;
		case 0:
			return 2;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_36(int iParam0, int iParam1)
{
	return (Global_1392050[iParam1 /*14*/].f_1 && iParam0) != 0;
}

int func_37(int iParam0)
{
	if (__LIB_2__::func_15(iParam0, 0))
	{
		return Global_40.f_9571[iParam0 /*10*/].f_2;
	}
	return -1;
}

void func_38(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_3, 4))
	{
		LAW::_0x362086B911657B1A(PLAYER::PLAYER_ID(), 0);
	}
}

void func_39(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	PED::_0x9851DE7AEC10B4E1(Local_14.f_51, 8f, 1, 0);
	__LIB_3__::func_922(iParam0, 1, 0, 0, 0);
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	if (vVar0.x > vVar0.y)
	{
		fVar6 = vVar0.x;
	}
	else
	{
		fVar6 = vVar0.y;
	}
	FIRE::STOP_FIRE_IN_RANGE(vVar3, fVar6);
	POPULATION::_0xB56D41A694E42E86(iParam0, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 10208, 0, 0, -1, -1, 0);
}

void func_40(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_563(1, iParam0))
	{
		if (!__LIB_2__::func_15(iParam0, 0))
		{
		}
		__LIB_3__::func_197(16, iParam0);
		__LIB_3__::func_198(1, iParam0);
	}
}

void func_41(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_2__::func_15(iParam0, 0))
	{
		Global_40.f_9571[iParam0 /*10*/].f_1 = iParam1;
	}
}

void func_42(var uParam0)
{
	if (!__LIB_0__::func_27(*uParam0, 4))
	{
		__LIB_3__::func_483(uParam0, 4);
	}
}

void func_43(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		__LIB_3__::func_923(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_44(int iParam0)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return -1;
	}
	return Global_40.f_9571[iParam0 /*10*/].f_1;
}

bool func_45()
{
	int iVar0;
	return __LIB_3__::func_263(&(Local_14.f_194), iVar0, 1084227584 /* Float: 5f */, 0, 0);
}

bool func_46(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, float fParam6)
{
	bool bVar0;
	int iVar1[6];
	int iVar8[6];
	int iVar15;
	float fVar16;
	float fVar17;
	vector3 vVar18;
	int iVar21;
	bool bVar22;
	float fVar23;
	bool bVar24;
	bool bVar25;
	if (__LIB_0__::func_27(uParam0->f_3, 16))
	{
		return true;
	}
	bVar0 = false;
	if (PED::_0x285D36C5C72B0569(Global_35) < 1f || (__LIB_0__::func_154(Global_1935630.f_44) && WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44)))
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 1:
		case 4:
		case 8:
		case 16:
		case 64:
		case 4096:
			bVar0 = true;
			break;
	}
	__LIB_3__::func_470(uParam0, iParam1);
	__LIB_1__::func_283(uParam0, 0);
	if (iParam5 < iParam4)
	{
		iParam5 = (*uParam2 - 1);
	}
	fVar16 = Global_36.f_2;
	if ((((((PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 8000) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_UNARMED"), 8000)) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_MELEE_KNIFE"), 8000)) || PED::_0x3BDFCF25B58B0415(Global_35)) || PED::_0x0E99E3BF11BB6367(Global_35)) || __LIB_2__::func_1(PED::GET_PEDS_JACKER(Global_35), 0, 1)) || PED::GET_JACK_TARGET(Global_35) != 0)
	{
		__LIB_1__::func_148(uParam0);
	}
	iVar21 = 1;
	bVar22 = __LIB_3__::func_471();
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (__LIB_2__::func_1((*uParam2)[iVar15], 0, 0))
		{
			if (PED::_GET_LASSO_TARGET(Global_35) == (*uParam2)[iVar15] || PED::_IS_PED_HOGTIED((*uParam2)[iVar15]))
			{
				bVar0 = true;
			}
			fVar23 = __LIB_0__::func_94((*uParam2)[iVar15], Global_36, 1);
			if (fVar23 >= (10f + fParam6))
			{
				iVar1[iVar15] = 1;
			}
			vVar18 = { ENTITY::GET_ENTITY_COORDS((*uParam2)[iVar15], true, false) };
			fVar17 = vVar18.z;
			if (!bVar22 && MISC::ABSF((fVar17 - fVar16)) > 0.75f)
			{
				iVar8[iVar15] = 1;
			}
			iVar21 = 0;
		}
		else
		{
			iVar1[iVar15] = 1;
			iVar8[iVar15] = 1;
		}
		iVar15++;
	}
	if (iVar21 == 1)
	{
		return false;
	}
	bVar24 = true;
	bVar25 = true;
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (!iVar1[iVar15])
		{
			bVar24 = false;
		}
		if (!iVar8[iVar15])
		{
			bVar25 = false;
		}
		iVar15++;
	}
	if (bVar24)
	{
		bVar0 = true;
	}
	if (bVar25)
	{
		bVar0 = true;
	}
	if ((__LIB_2__::func_386(Global_35, 1868526510) || __LIB_2__::func_386(Global_35, 1870523043)) || __LIB_2__::func_386(Global_35, -1794415470))
	{
		bVar0 = true;
	}
	if (__LIB_1__::func_285(uParam0, 8f))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (__LIB_0__::func_27(uParam0->f_3, 1) || !__LIB_0__::func_27(uParam0->f_3, 32))
		{
			__LIB_3__::func_472(uParam2, iParam4, iParam5, 1);
		}
		else
		{
			__LIB_3__::func_472(uParam2, iParam4, iParam5, 0);
			LAW::_0x362086B911657B1A(PLAYER::PLAYER_ID(), 1);
			__LIB_1__::func_336(&(uParam0->f_3), 4);
			__LIB_3__::func_473(uParam0);
		}
		__LIB_1__::func_336(&(uParam0->f_3), 16);
		return true;
	}
	return false;
}

void func_47(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	vector3 vVar0;
	if (uParam0->f_3 == 5)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			__LIB_1__::func_539();
		}
		if (bParam10)
		{
			uParam0->f_3 = 0;
		}
		return;
	}
	if (uParam0->f_3 > 0 && uParam0->f_3 < 5)
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam5, vParam2) };
		if (__LIB_3__::func_980(uParam0, vVar0, iParam7, iParam6))
		{
			__LIB_1__::func_539();
			__LIB_0__::func_37(uParam0);
			uParam0->f_3 = 5;
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (__LIB_3__::func_928(uParam0, iParam1, vParam2, iParam6, iParam7, iParam8, iParam9))
				{
					uParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			__LIB_2__::func_404(&(uParam0->f_4), *uParam0);
			if (__LIB_1__::func_871(uParam0) >= iParam7)
			{
				uParam0->f_3 = 2;
			}
			break;
	}
}

int func_48(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_3__::func_979(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_49(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_3__::func_979(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_50(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_3__::func_979(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_51(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_52(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_453((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

int func_53(var uParam0)
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

bool func_54(int iParam0, int iParam1)
{
	return (Global_40.f_9422[iParam0 /*7*/].f_4 && iParam1) != 0;
}

Vector3 func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1789f, -81.2f, 56.8f;
		case 1:
			return 777.0469f, 848.3318f, 117.9097f;
		case 2:
			return 1319.072f, -2281.907f, 51.31572f;
		case 3:
			return -415.0638f, 1752.658f, 217.6675f;
		case 4:
			return 1623.045f, -364.0234f, 75.39715f;
		case 5:
			return 2820.866f, 275.3142f, 51.84647f;
		case 6:
			return 2990.484f, 2188.289f, 165.7838f;
		case 7:
			return -1817.371f, 657.6644f, 130.8627f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_56(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 8);
}

bool func_57(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1360165[iParam0 /*1157*/].f_2))
	{
		return true;
	}
	return false;
}

void func_58(int iParam0, int iParam1)
{
	if (__LIB_0__::func_756(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_14 = (Global_1392240.f_1[iParam0 /*18*/].f_14 || iParam1);
}

var func_59(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = joaat("ELEMENTS_STAMPS_ICONS");
	}
	if (iParam3 == -1)
	{
		iParam3 = joaat("STAMP_CASH");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = joaat("SP_NOTIFICATIONS");
	}
	if (!bParam14)
	{
		return __LIB_0__::func_425(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, sParam8, sParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return __LIB_3__::func_614(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, sParam8, sParam9, iParam10, iParam11, iParam12, iParam13);
}

int func_60(int iParam0)
{
	int iVar0;
	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = __LIB_0__::func_291(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_61(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return false;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return false;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return true;
	}
	return false;
}

void func_62(int iParam0, int iParam1)
{
	char* sVar0;
	switch (iParam1)
	{
		case 0:
			sVar0 = "PAIN_DEATH";
			break;
		case 1:
			sVar0 = "BARK";
			break;
		case 2:
			sVar0 = "BARK_FAR";
			break;
		case 11:
			sVar0 = "BARK_SEQ";
			break;
		case 3:
			sVar0 = "PLAYFUL";
			break;
		case 4:
			sVar0 = "WHINE";
			break;
		case 5:
			sVar0 = "SNIFF";
			break;
		case 6:
			sVar0 = "SNIFF_END";
			break;
		case 7:
			sVar0 = "SNEEZE";
			break;
		case 8:
			sVar0 = "LICK";
			break;
		case 9:
			sVar0 = "EXCITED";
			break;
		case 10:
			sVar0 = "BEG";
			break;
		case 12:
			sVar0 = "INJURED_FIDGET";
			break;
		case 13:
			sVar0 = "INJURED_WHIMPER";
			break;
		case 14:
			sVar0 = "ATTACK";
			break;
		case 15:
			sVar0 = "GROWL";
			break;
		case 16:
			sVar0 = "HOWL";
			break;
		case 17:
			sVar0 = "BARK_HAPPY";
			break;
	}
	AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, sVar0, false);
}

void func_63(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

void func_64(int iParam0)
{
	__LIB_3__::func_391(iParam0, 0);
	__LIB_3__::func_392(iParam0, 0);
	__LIB_3__::func_393(iParam0, 1);
	__LIB_2__::func_180(iParam0, 1);
	__LIB_2__::func_181(iParam0, 0);
	__LIB_2__::func_182(iParam0, 1);
	__LIB_2__::func_183(iParam0, 1, 1, 1);
}

void func_65(int iParam0)
{
	__LIB_3__::func_393(iParam0, 1);
	__LIB_3__::func_382(iParam0, 20);
}

bool func_66()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (__LIB_1__::func_901(iVar3))
	{
		return true;
	}
	return false;
}

int func_67(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 2);
	if (iVar6 >= iParam3)
	{
	}
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			iVar3 = iVar1;
			if (!__LIB_0__::func_208(iVar3, uParam1))
			{
				(*uParam0)[iVar4] = iVar3;
				iVar4++;
			}
		}
		if (iVar4 >= iParam3)
		{
		}
		else
		{
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

bool func_68(char* sParam0, int iParam1)
{
	struct<2> Var0;
	Var0.f_1 = sParam0;
	return __LIB_0__::func_269(UIFEED::_0x4E88A65968A55C78(&Var0, iParam1));
}

int func_69()
{
	int iVar0;
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
	return __LIB_3__::func_630(iVar0, 0);
}

void func_70()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_4__::func_9();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_71(int iParam0)
{
	iLocal_16 = iParam0;
}

void func_72(int iParam0)
{
	TASK::TASK_CLEAR_LOOK_AT(iParam0);
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
}

char* func_73(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 != 0)
	{
		iVar0 = __LIB_3__::func_147(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = __LIB_3__::func_148(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar2 /*2*/].f_1;
	}
	return 0;
}

bool func_75(int iParam0)
{
	if (__LIB_2__::func_800())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_76(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13);
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

bool func_77(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (__LIB_3__::func_750(iParam0, iParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

void func_78(vector3 vParam0, float fParam3, int* iParam4, int iParam5)
{
	if (MAP::DOES_BLIP_EXIST(*iParam4))
	{
		MAP::REMOVE_BLIP(iParam4);
	}
	*iParam4 = MAP::_BLIP_ADD_FOR_RADIUS(iParam5, vParam0, fParam3);
}

bool func_79(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false);
}

void func_80(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	__LIB_1__::func_561(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 12;
		case 2:
			return 9;
		case 3:
			return 3;
		case 76:
			return 3;
		case 4:
			return 12;
		case 7:
			return 3;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 3;
		case 82:
			return 13;
		case 87:
			return 13;
		case 17:
			return 12;
		case 18:
			return 12;
		case 92:
			return 12;
		case 119:
			return 12;
		case 27:
			return 12;
		case 29:
			return 4;
		case 95:
			return 13;
		case 31:
			return 12;
		case 32:
			return 11;
		case 33:
			return 11;
		case 34:
			return 11;
		case 97:
			return 12;
		case 98:
			return 12;
		case 38:
			return 12;
		case 40:
			return 11;
		case 102:
			return 2;
		case 48:
			return 13;
		case 49:
			return 12;
		case 106:
			return 2;
		case 107:
			return 12;
		case 54:
			return 13;
		case 57:
			return 12;
		case 109:
			return 2;
		case 58:
			return 12;
		case 111:
			return 12;
		case 112:
			return 2;
		case 113:
			return 3;
		case 115:
			return 3;
		case 67:
			return 13;
		case 64:
			return 13;
		case 65:
			return 12;
		default:
			break;
	}
	return 9;
	return 9;
}

void func_82(int iParam0, int iParam1)
{
	iParam0->f_20 = iParam1;
}

Vector3 func_83(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

bool func_84(int iParam0)
{
	return __LIB_0__::func_27(iLocal_508, iParam0);
}

void func_85(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
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

void func_86(var uParam0)
{
	__LIB_1__::func_561(uParam0);
	__LIB_0__::func_8(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
}

void func_87(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !__LIB_0__::func_899(fParam0))
	{
		__LIB_1__::func_585(fParam0, fParam1);
	}
}

void func_88(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	iVar0 = -1;
	__LIB_2__::func_354(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

void func_89(float fParam0, bool bParam1)
{
	if (bParam1 || !__LIB_0__::func_899(fParam0))
	{
		__LIB_2__::func_259(fParam0);
	}
}

bool func_90(var uParam0)
{
	if (uParam0->f_4)
	{
		return false;
	}
	if (uParam0->f_9)
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		return false;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44))
	{
		return false;
	}
	if (__LIB_3__::func_514(&(uParam0->f_32), 1f))
	{
		if (!__LIB_0__::func_163(Global_35, 716706914))
		{
			return true;
		}
	}
	return false;
}

bool func_91(float fParam0)
{
	if (!__LIB_3__::func_513(*fParam0, fParam0->f_4))
	{
		return false;
	}
	return true;
}

int func_92(float fParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	vVar3 = { __LIB_3__::func_448(iParam2) };
	return __LIB_3__::func_875(fParam0, vVar0, vVar3, iParam2);
}

int func_93(float fParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	return __LIB_3__::func_875(fParam0, vVar0, vParam2, 0);
}

void func_94(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
			iParam1->f_6 = __LIB_2__::func_512(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
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

void func_95(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_3__::func_600(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_96(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_0__::func_899(&uLocal_0) && !__LIB_3__::func_601(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_97(vector3 vParam0, float fParam3, float fParam4)
{
	float fVar0;
	if (!__LIB_1__::func_379(fParam3->f_7, fParam3->f_8))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(fParam3->f_3), 1))
	{
		return false;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return false;
	}
	fVar0 = __LIB_0__::func_94(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!__LIB_3__::func_591(vParam0, fParam3))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(fParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!__LIB_3__::func_599(vParam0, fParam3))
		{
			return false;
		}
	}
	return true;
}

bool func_98(var uParam0, int iParam1)
{
	if (__LIB_3__::func_601(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!__LIB_0__::func_71(uParam0->f_1) && !__LIB_0__::func_163(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !__LIB_0__::func_163(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_99(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_3__::func_601(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (__LIB_0__::func_27(uParam0->f_23, 512) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

bool func_100(var uParam0, int iParam1)
{
	if (__LIB_3__::func_601(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 4096) && __LIB_0__::func_163(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

void func_101(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_3__::func_515(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_102(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		__LIB_2__::func_521(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_196(iParam0, iParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (__LIB_2__::func_726(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (__LIB_2__::func_622(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_103(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_3__::func_920(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!__LIB_3__::func_435(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!__LIB_1__::func_982(uParam0->f_3) && !__LIB_1__::func_85(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

bool func_104(var uParam0, int iParam1)
{
	var uVar0;
	if (__LIB_3__::func_601(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!__LIB_0__::func_27(uParam0->f_23, 16384))
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

void func_105(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_3__::func_522(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_3__::func_723(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_106(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vVar2 = { *uParam0 };
	__LIB_3__::func_398(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (__LIB_3__::func_193(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!__LIB_0__::func_86(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = __LIB_3__::func_194(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return true;
				}
			}
			iVar0++;
		}
	}
	return __LIB_3__::func_260(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_3__::func_668(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_108(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		DECORATOR::DECOR_SET_INT(*iParam0, "wagonFenceValue", iParam1);
	}
}

void func_109(int iParam0, int iParam1)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		Global_36638[iParam0] = (Global_36638[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

int func_110()
{
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return 1;
	}
	return 0;
}

bool func_111(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!__LIB_3__::func_959(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_12 != -1)
	{
		return (Global_36638[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

void func_112(int iParam0)
{
	int iVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, Global_1393237.f_11[iVar0 /*30*/].f_3))
		{
			__LIB_3__::func_532(iVar0, 4096, 0);
			__LIB_3__::func_532(iVar0, 131072, 0);
			__LIB_3__::func_533(iVar0, 1);
		}
		iVar0++;
	}
}

int func_113(int iParam0, int iParam1, float fParam2, var uParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1) || !__LIB_2__::func_1(iParam1, 0, 1))
	{
		return 0;
	}
	if (__LIB_0__::func_232(iParam0, iParam1, 1) <= (fParam2 * fParam2) || __LIB_0__::func_393(iParam0, iParam4, 0, 1))
	{
		if (!*uParam3)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 0, 51, 0);
			TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, -1, 0, 51, 0);
			PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
			*uParam3 = 1;
		}
		if (bParam6)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		}
		if (bParam5)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
	}
	else if (*uParam3)
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
		TASK::TASK_CLEAR_LOOK_AT(iParam1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
		*uParam3 = 0;
	}
	return *uParam3;
}

void func_114(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	fParam5 = __LIB_3__::func_716(vParam1, fParam5);
	fVar0 = __LIB_3__::func_958(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar0);
	}
}

int func_115(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		PED::_0xD65FDC686A031C83(iParam0, iParam1, fParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
		}
		if ((PED::_0x68821369A2CEADD5(iParam0, iParam1) && (bParam5 || !TASK::_0x02EBBB3989B7E695(iParam0))) && (iParam3 == 0 || PED::_0x569F1E1237508DEB(iParam0) == iParam3))
		{
			return 1;
		}
	}
	return 0;
}

void func_116(var uParam0, bool bParam1)
{
	__LIB_4__::func_64(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		__LIB_1__::func_422("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

bool func_117(int iParam0, float fParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && __LIB_2__::func_215(Global_35, iParam0, 0, fParam1, bParam2))
	{
		return true;
	}
	return false;
}

float func_118(var uParam0)
{
	if (!__LIB_0__::func_899(uParam0))
	{
		return 0f;
	}
	if (__LIB_0__::func_901(uParam0))
	{
		return uParam0->f_2;
	}
	return (__LIB_0__::func_36() - uParam0->f_1);
}

bool func_119(var uParam0)
{
	if (!__LIB_3__::func_513(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

void func_120(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_454(__LIB_0__::func_453(0));
	__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", __LIB_0__::func_946(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_121(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (iParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

void func_122(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_748(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_3__::func_590(iParam0, 0);
		}
	}
}

void func_123(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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
		__LIB_0__::func_896(10, 1);
	}
}

void func_124(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_525(iParam0);
	fVar1 = __LIB_1__::func_181(iParam0);
	if ((Global_1347477.f_117 || !__LIB_0__::func_293(31)) || !__LIB_0__::func_962(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (__LIB_0__::func_963(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	__LIB_1__::func_606(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(6, __LIB_0__::func_526(iParam0), fVar1), "itemtype_textures", __LIB_0__::func_527(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_125(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		__LIB_3__::func_955(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					__LIB_3__::func_955(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_4__::func_106(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				__LIB_3__::func_955(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	return __LIB_1__::func_614(__LIB_3__::func_960(iParam0), 0, 0);
}

int func_127(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_760(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		__LIB_2__::func_474(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	__LIB_2__::func_520(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_128(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_416((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_604(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_129(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_130(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
				__LIB_3__::func_974(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				__LIB_3__::func_975(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_131(int iParam0)
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
			__LIB_4__::func_70();
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

int func_132(int iParam0)
{
	return Global_40.f_297[iParam0];
}

void func_133(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0] = iParam1;
}

void func_134(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0 + 30] = iParam1;
}

void func_135(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		__LIB_0__::func_7(uParam0, 268435456);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 268435456);
	}
	if (!bParam2)
	{
		__LIB_0__::func_7(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		__LIB_0__::func_7(uParam0, 536870912);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 536870912);
	}
}

bool func_136(var uParam0)
{
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		return false;
	}
	return PED::IS_PED_SHOOTING(*uParam0);
}

int func_137(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", iParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_138(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_376(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return false;
			}
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || ((PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

float func_139(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return __LIB_1__::func_361(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return __LIB_1__::func_385(uParam0);
	}
	return __LIB_1__::func_361(uParam0);
}

bool func_140(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_3__::func_743(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0 /*60*/].f_59 != 0 && Global_40.f_4942[iVar0 /*60*/].f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_141(float fParam0)
{
	if (!__LIB_4__::func_91(fParam0))
	{
		return false;
	}
	if (__LIB_1__::func_876(fParam0->f_7, fParam0->f_8, __LIB_0__::func_51(&(fParam0->f_3), 4)))
	{
		return true;
	}
	if (!__LIB_0__::func_51(&(fParam0->f_3), 4))
	{
		if (__LIB_1__::func_383())
		{
			return true;
		}
	}
	return false;
}

void func_142(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = __LIB_3__::func_698(iParam0);
		__LIB_3__::func_906(iVar0, ENTITY::_0xC346A546612C49A9(iParam0));
	}
	if (bParam1)
	{
		__LIB_2__::func_930(iParam0, 0);
	}
}

bool func_143(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 30f;
	fVar1 = 150f;
	if (__LIB_1__::func_85(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (__LIB_1__::func_923())
			{
				fVar0 = 15f;
			}
		}
		if (__LIB_3__::func_182(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!__LIB_3__::func_182(uParam2, fVar1))
		{
			if (!__LIB_2__::func_117(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!__LIB_3__::func_281(uParam2->f_3, 2) && __LIB_3__::func_290(2))
		{
			return false;
		}
		if (__LIB_1__::func_85(iParam0, 4194304) || __LIB_1__::func_85(iParam0, 33554432))
		{
			if (__LIB_1__::func_995(1))
			{
				return false;
			}
		}
	}
	if (__LIB_1__::func_376(Global_35))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 1) && !__LIB_1__::func_271(iParam0))
	{
		return false;
	}
	if (!*uParam1 && __LIB_1__::func_85(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (__LIB_3__::func_291(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (__LIB_3__::func_183())
		{
			return false;
		}
		iVar2 = __LIB_3__::func_250(__LIB_0__::func_12());
		if (__LIB_0__::func_625(iVar2))
		{
			if (__LIB_3__::func_184(Global_36, iVar2))
			{
				return false;
			}
		}
		if (__LIB_3__::func_251(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (__LIB_3__::func_602(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_144(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			__LIB_3__::func_973(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

Vector3 func_145()
{
	return Global_1391438.f_414.f_37;
}

void func_146(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_147(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

bool func_148(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_1__::func_988(iParam0))
	{
		iVar0 = __LIB_3__::func_945(iParam0, -1);
		if (__LIB_3__::func_946(iVar0))
		{
			if (Global_1310750.f_13321[iVar0 /*9*/].f_6[iParam1] != -1881652455)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_149(int iParam0)
{
	if (iParam0 == 0)
	{
		return (__LIB_1__::func_647() && __LIB_1__::func_650());
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return __LIB_1__::func_672(iParam0, 1);
	}
	return false;
}

void func_150(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!__LIB_1__::func_102(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!__LIB_0__::func_447(iParam0, 1024))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_151(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		__LIB_3__::func_565(uParam1);
		if (__LIB_2__::func_640(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_152(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_416((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_153(char* sParam0)
{
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

void func_154(var uParam0, bool bParam1)
{
	if (uParam0->f_1 == 0)
	{
		return;
	}
	if (bParam1)
	{
	}
}

int func_155()
{
	var uVar0;
	__LIB_1__::func_336(&uVar0, 15);
	__LIB_1__::func_336(&uVar0, 112);
	__LIB_1__::func_336(&uVar0, 1664);
	__LIB_1__::func_336(&uVar0, 393216);
	return uVar0;
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0->f_303 && iParam1) != 0;
}

bool func_157(int iParam0)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_563(1, iParam0))
	{
		return true;
	}
	if (__LIB_4__::func_36(16, iParam0))
	{
		return true;
	}
	if (__LIB_4__::func_37(iParam0) >= 4)
	{
		if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 150f, 512) <= 0)
		{
			return true;
		}
	}
	return false;
}

void func_158(var uParam0, int iParam1)
{
	if (!__LIB_2__::func_1(uParam0->f_294[iParam1], 0, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_RANGE(uParam0->f_294[iParam1], 0);
	PED::SET_COMBAT_FLOAT(uParam0->f_294[iParam1], 39, 10f);
	PED::SET_COMBAT_FLOAT(uParam0->f_294[iParam1], 32, 2f);
	PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_294[iParam1], 2);
	PED::SET_COMBAT_FLOAT(uParam0->f_294[iParam1], 7, 1f);
}

int func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(uParam0->f_294[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_160(int iParam0, bool bParam1)
{
	if (__LIB_4__::func_44(iParam0) == 0 || bParam1)
	{
		__LIB_4__::func_41(iParam0, __LIB_4__::func_35(iParam0), 0);
	}
}

int func_161(var uParam0, var uParam1, var uParam2, float fParam3)
{
	if (__LIB_4__::func_46(uParam0, uParam1->f_5.f_16, uParam2, &(uParam1->f_98), 0, -1, fParam3))
	{
		return 1;
	}
	return 0;
}

void func_162(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, bool bParam12, float fParam13)
{
	return;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		if (__LIB_0__::func_51(uParam0, 64))
		{
			__LIB_1__::func_748(&(uParam1->f_5), 1, 1);
			__LIB_0__::func_8(uParam0, 64);
		}
	}
	else if (bParam12)
	{
		if (uParam1->f_3 == 0)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2))
			{
				if (!__LIB_0__::func_51(uParam0, 64))
				{
					if (uParam1->f_5 == 0)
					{
						uParam1->f_5 = __LIB_2__::func_403("BEAT_RESPOND", joaat("INPUT_CINEMATIC_CAM"), iParam2, 3, 0, 0, 0, 0, fParam13, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					}
					__LIB_1__::func_148(uParam1);
					__LIB_0__::func_7(uParam0, 64);
				}
			}
			else if (__LIB_0__::func_75(uParam1) && __LIB_0__::func_265(uParam1) > 6f)
			{
				if (__LIB_0__::func_51(uParam0, 64))
				{
					__LIB_1__::func_748(&(uParam1->f_5), 1, 1);
					__LIB_0__::func_8(uParam0, 64);
				}
			}
		}
		else if (!__LIB_0__::func_51(uParam0, 64))
		{
			__LIB_0__::func_7(uParam0, 64);
		}
	}
	else if (!__LIB_0__::func_51(uParam0, 64))
	{
		__LIB_0__::func_7(uParam0, 64);
	}
	if (__LIB_0__::func_51(uParam0, 64))
	{
		__LIB_4__::func_47(uParam1, iParam2, vParam3, iParam6, iParam7, fParam8, iParam9, iParam10, iParam11);
	}
}

bool func_163(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_2__::func_523(iParam1, uParam2, 0);
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

void func_164(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			__LIB_4__::func_49(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_165(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bVar10 = PED::IS_PED_INJURED(*uParam0);
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
		__LIB_4__::func_50(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
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

void func_166(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_4__::func_50(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

bool func_167(int iParam0, int iParam1)
{
	int iVar0;
	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return true;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return true;
	}
	return false;
}

void func_168(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	__LIB_1__::func_491(iParam0, 7);
}

void func_169(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (iParam7 == 0)
	{
		iParam7 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
	}
	if (iParam7 == 0)
	{
		iParam7 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	}
	uParam0->f_12 = iParam7;
	uParam0->f_15 = { vParam1 };
	uParam0->f_18 = fParam4;
	uParam0->f_13 = iParam5;
	uParam0->f_19 = iParam6;
}

void func_170(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13);
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

void func_171(int iParam0, int iParam1)
{
	if (__LIB_3__::func_587(iParam0, 1, 1))
	{
		__LIB_1__::func_681(&(Global_1955500[iParam0 /*16*/]), iParam1);
	}
}

bool func_172(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return true;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return true;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return true;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return true;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (__LIB_1__::func_357(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return true;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return true;
		}
	}
	if (__LIB_1__::func_358(iVar0, iParam0))
	{
		return true;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return true;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_653();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		Global_1955500[iVar0 /*16*/].f_1 = iParam1;
		Global_1955500[iVar0 /*16*/].f_2 = iParam0;
		Global_1955500[iVar0 /*16*/] = 0;
		Global_1955500[iVar0 /*16*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (__LIB_0__::func_27(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (__LIB_0__::func_27(Global_1955500[iVar0 /*16*/], 0))
		{
			__LIB_3__::func_966(iVar0, 1024);
			__LIB_3__::func_966(iVar0, 16);
			__LIB_3__::func_966(iVar0, 256);
		}
		__LIB_3__::func_966(iVar0, iParam2);
	}
	return iVar0;
}

void func_174(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		__LIB_3__::func_565(uParam1);
		if (__LIB_4__::func_77(iParam0, iParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, iParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam6, iParam9);
	}
}

bool func_175(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_490(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_4__::func_15(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_176(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0]) && iParam0 != (*uParam1)[iVar0])
		{
			if (__LIB_0__::func_232(iParam0, (*uParam1)[iVar0], 1) < fParam3)
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	switch (iParam1)
	{
		case 3:
			iVar0 = __LIB_4__::func_13(iParam0, 0);
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 2));
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 11));
			return iVar0;
		case 0:
			iVar0 = __LIB_4__::func_13(iParam0, 1);
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 7));
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 6));
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 12));
			return iVar0;
		case 2:
			iVar0 = __LIB_4__::func_13(iParam0, 3);
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 10));
			return iVar0;
		case 1:
			iVar0 = __LIB_4__::func_13(iParam0, 4);
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 9));
			return iVar0;
		case 4:
			return __LIB_4__::func_13(iParam0, 8);
		case 5:
			iVar0 = __LIB_4__::func_13(iParam0, 13);
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 14));
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 15));
			iVar0 = (iVar0 + __LIB_4__::func_13(iParam0, 16));
			return iVar0;
		default:
			break;
	}
	return 0;
}

void func_178(int iParam0, float fParam1)
{
	char* sVar0;
	vector3 vVar1;
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Ped_Throat_slash";
			break;
		case 1:
			sVar0 = "PD_Blood_face_right";
			break;
		case 2:
			sVar0 = "PD_Blood_face_left";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Savage_Fight_Knife_Chest";
			break;
		case 1:
			sVar0 = "PD_Savage_Fight_Arrow_Left_Shoulder";
			break;
		case 2:
			sVar0 = "PD_Savage_Fight_Axe_Back";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Fall_death";
			break;
		case 1:
			sVar0 = "PD_Blood_Soak_Left_Arm_Murder_for_Hire_Bump";
			break;
		case 2:
			sVar0 = "PD_Blood_Soak_Right_Arm_Murder_for_Hire_Bump";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= fParam1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		__LIB_2__::func_106(&vVar1, 50, 10, 0);
		GRAPHICS::_ADD_BLOOD_POOL(vVar1, true);
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		__LIB_4__::func_137(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

void func_180(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630.f_12)
	{
		iVar0 = __LIB_3__::func_700(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (__LIB_3__::func_680(iParam0))
			{
				iVar1 = 463;
			}
			uVar2 = __LIB_0__::func_17(iParam0);
			__LIB_4__::func_150(iVar1, uVar2, 1);
		}
	}
}

void func_181(var uParam0)
{
	*uParam0 = 0;
}

bool func_182(int iParam0)
{
	return (Global_1395482.f_10 && iParam0) != 0;
}

void func_183(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	__LIB_0__::func_172(*uParam0);
	*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam1, vParam2, vParam5, vParam8);
	POPULATION::_0xB56D41A694E42E86(*uParam0, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(*uParam0, 0, 0, 0, -1, -1, 0);
}

void func_184(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (__LIB_3__::func_320(iParam0) == 0)
		{
			VEHICLE::_0x04F0579DBDD32F34(iParam0);
		}
	}
}

int func_185(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false, false))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2) != *uParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2))
		{
			if (iParam3 && __LIB_2__::func_424(*iParam1))
			{
				iParam2 = __LIB_2__::func_425(*iParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*uParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*uParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*uParam0, *iParam1, iParam2);
	}
	return 1;
}

int func_186(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_653((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

void func_187(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
	}
}

int func_188(var uParam0)
{
	return uParam0->f_10;
}

bool func_189(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		case 5:
			return 76;
		case 6:
			return 76;
		case 3:
			return 105;
		case 2:
			return 5;
		case 1:
			return 5;
		case 8:
			return 92;
		case 4:
			return 115;
		case 7:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_192(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

int func_193(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iParam0));
	return 1;
}

int func_194(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *iParam0)
	{
		iParam7 = (*iParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != (*iParam0)[iVar0] && (!bParam5 || (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iVar0]))))
		{
			fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

float func_195(int iParam0)
{
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
	}
	return -1f;
}

int func_196(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!__LIB_1__::func_680(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return __LIB_1__::func_690(iParam0, uVar0, iVar1, bParam2);
}

void func_197(bool bParam0)
{
	__LIB_4__::func_3(1, !bParam0);
}

int func_198(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
		{
			if (uParam0->f_98[iVar0] < 3f)
			{
				if (PED::IS_PED_IN_COMBAT((*iParam1)[iVar0], Global_35))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_199(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vVar2 = { *uParam0 };
	__LIB_3__::func_307(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (__LIB_3__::func_193(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!__LIB_0__::func_86(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = __LIB_3__::func_194(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return true;
				}
			}
			iVar0++;
		}
	}
	return __LIB_3__::func_260(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

void func_200(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*13*/])->f_1 != 0)
		{
			__LIB_2__::func_601(uParam0[iVar0 /*13*/], 0);
		}
		iVar0++;
	}
}

bool func_201(int iParam0)
{
	return __LIB_0__::func_27(iLocal_591, iParam0);
}

void func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 2);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 2);
	}
}

void func_203(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 1024);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 1024);
	}
}

void func_204(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (bParam2)
		{
			__LIB_3__::func_306(&vVar0, uParam1->f_22);
		}
		if (PED::IS_PED_HUMAN(*uParam0) && uParam1->f_10)
		{
			PED::_0x0FB1BA7FF73B41E1(*uParam0, uParam1->f_4, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			EVENT::_0x9520175B35E2268D(*uParam0, 1);
			if (__LIB_0__::func_125(*uParam0))
			{
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, true);
			}
		}
		if (!bParam3 && __LIB_3__::func_242(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(*uParam0, true);
			PED::SET_PED_TO_RAGDOLL(*uParam0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, !__LIB_3__::func_243(&(uParam1->f_22)));
			__LIB_1__::func_864(*uParam0, __LIB_3__::func_244(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(*uParam0);
		}
		if (__LIB_3__::func_245(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		}
		__LIB_3__::func_176(*uParam0, !__LIB_3__::func_175(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 4, __LIB_3__::func_177(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 6, __LIB_3__::func_247(&(uParam1->f_22)));
		if (__LIB_3__::func_246(&(uParam1->f_22)))
		{
			__LIB_3__::func_174(*uParam0, 1);
		}
		if (__LIB_3__::func_243(&(uParam1->f_22)))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
		}
	}
}

int func_205(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	__LIB_3__::func_864(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_206(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = __LIB_3__::func_994(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

bool func_207(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	if (!Global_1935630.f_27 && !bParam4)
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = __LIB_0__::func_665(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = __LIB_1__::func_372(PLAYER::PLAYER_PED_ID(), 0);
				if (__LIB_0__::func_237(iVar3) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					return false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				}
				vVar7 = { __LIB_1__::func_384(0) };
				vVar10 = { __LIB_0__::func_173(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_208(char* sParam0, var uParam1, float fParam2, bool bParam3)
{
	if (__LIB_1__::func_313(uParam1, fParam2))
	{
		if (bParam3)
		{
			__LIB_0__::func_45(sParam0, 10000, 0, 0, 0, 1);
		}
		else
		{
			__LIB_1__::func_422(sParam0, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

bool func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_3__::func_668(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_210(int iParam0)
{
	if (__LIB_3__::func_104())
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_2__::func_591(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_211(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && __LIB_2__::func_591(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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

void func_212(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 2442122;
	if (bParam1)
	{
		iVar0 |= 1;
	}
	if (bParam2)
	{
		iVar0 |= 72;
	}
	if (bParam3)
	{
		iVar0 |= 6;
	}
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_213(int iParam0, float fParam1, bool bParam2)
{
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam2);
	}
}

int func_214(int iParam0)
{
	return __LIB_1__::func_512(iParam0, 0);
}

int func_215(int iParam0)
{
	return __LIB_1__::func_512(iParam0, 3);
}

bool func_216(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if ((((((((((iVar0 == 2 && __LIB_0__::func_293(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || __LIB_2__::func_805(iParam0))
	{
		return true;
	}
	return false;
}

void func_217(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < (*iParam0 - iParam2))
		{
			if (__LIB_2__::func_1((*iParam0)[(iVar0 + iParam2)], 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[(iVar0 + iParam2)], uParam1, iParam6, iParam5, fParam4, -1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[iVar0], uParam1, iParam6, iParam5, fParam4, -1, 0);
			}
			iVar0++;
		}
	}
}

bool func_218(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_4__::func_125(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_219(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 0;
			*uParam2 = 2;
			break;
	}
}

void func_220(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_222(int iParam0, int iParam1, var uParam2)
{
	if (!__LIB_3__::func_188(iParam0))
	{
		return false;
	}
	if (iParam1 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(*uParam2))
		{
			*uParam2 = PED::_REQUEST_METAPED_OUTFIT(iParam0, iParam1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(*uParam2))
			{
				iParam1 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_0x610438375E5D1801(*uParam2))
		{
			return false;
		}
	}
	return true;
}

bool func_223(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
		{
			if (__LIB_0__::func_232(PLAYER::PLAYER_PED_ID(), iParam0, 1) < IntToFloat(iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_224(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar6;
	if (!__LIB_3__::func_825(iParam2))
	{
		return false;
	}
	if (iParam6 < 0 || iParam6 >= *iParam2)
	{
		iParam6 = 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam2)
	{
		iParam7 = (*iParam2 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if ((iParam2[iVar0 /*32*/])->f_1 != 0)
		{
			if (bParam3 && !__LIB_3__::func_325(&((iParam2[iVar0 /*32*/])->f_22)))
			{
				vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, (iParam2[iVar0 /*32*/])->f_6) };
				fVar1 = __LIB_2__::func_709((uParam0->f_51.f_3 + (iParam2[iVar0 /*32*/])->f_9));
			}
			else
			{
				vVar3 = { (iParam2[iVar0 /*32*/])->f_6 };
				fVar1 = __LIB_2__::func_709((iParam2[iVar0 /*32*/])->f_9);
			}
			if (!__LIB_3__::func_195(&((iParam2[iVar0 /*32*/])->f_22)))
			{
				__LIB_2__::func_106(&vVar3, 1, 10, 0);
			}
			if ((iParam2[iVar0 /*32*/])->f_12 != 0)
			{
				if (!(iParam2[iVar0 /*32*/])->f_19 && !__LIB_3__::func_325(&((iParam2[iVar0 /*32*/])->f_22)))
				{
					vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, (iParam2[iVar0 /*32*/])->f_15) };
					fVar2 = __LIB_2__::func_709((uParam0->f_51.f_3 + (iParam2[iVar0 /*32*/])->f_18));
					__LIB_2__::func_106(&vVar6, 1, 10, 0);
				}
				else
				{
					vVar6 = { (iParam2[iVar0 /*32*/])->f_15 };
					fVar2 = __LIB_2__::func_709((iParam2[iVar0 /*32*/])->f_18);
				}
				__LIB_3__::func_826(uParam1, iVar0 + 15, (iParam2[iVar0 /*32*/])->f_12, vVar6, fVar2, iParam4, fParam5, 0, 1, 0);
			}
			__LIB_3__::func_826(uParam1, iVar0, (iParam2[iVar0 /*32*/])->f_1, vVar3, fVar1, iParam4, fParam5, (iParam2[iVar0 /*32*/])->f_2, 1, (iParam2[iVar0 /*32*/])->f_5);
		}
		iVar0++;
	}
	return true;
}

bool func_225(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*9*/]) && (uParam0[iVar0 /*9*/])->f_1 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*9*/])->f_1))
			{
				bVar1 = __LIB_0__::func_27((uParam0[iVar0 /*9*/])->f_6, 4);
				bVar2 = __LIB_0__::func_27((uParam0[iVar0 /*9*/])->f_6, 8);
				bVar3 = __LIB_0__::func_27((uParam0[iVar0 /*9*/])->f_6, 16);
				if (__LIB_0__::func_27((uParam0[iVar0 /*9*/])->f_6, 1))
				{
					bVar4 = true;
				}
				else if (__LIB_0__::func_27((uParam0[iVar0 /*9*/])->f_6, 2))
				{
					bVar4 = 2;
				}
				else
				{
					bVar4 = false;
				}
				if ((uParam0[iVar0 /*9*/])->f_8 != 0 && PED::_0x610438375E5D1801((uParam0[iVar0 /*9*/])->f_8))
				{
					(*uParam0)[iVar0 /*9*/] = PED::_0xEAF682A14F8E5F53((uParam0[iVar0 /*9*/])->f_8, (uParam0[iVar0 /*9*/])->f_2, (uParam0[iVar0 /*9*/])->f_5, bVar1, bVar2, 1, 0);
				}
				else
				{
					(*uParam0)[iVar0 /*9*/] = __LIB_4__::func_205((uParam0[iVar0 /*9*/])->f_1, (uParam0[iVar0 /*9*/])->f_2, (uParam0[iVar0 /*9*/])->f_5, bVar1, bVar2, bVar4, bVar3, 1, 1, 0, 0, 0, 0);
				}
				if (bParam1)
				{
					ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0 /*9*/], false);
				}
			}
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_136)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*9*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0 /*9*/], true);
				ENTITY::_0xA91E6CF94404E8C9((*uParam0)[iVar0 /*9*/]);
			}
			iVar0++;
		}
	}
	return true;
}

void func_226(int iParam0)
{
	if (__LIB_0__::func_644(iParam0))
	{
		Global_1392040 = (Global_1392040 - (Global_1392040 && iParam0));
	}
}

int func_227(var uParam0)
{
	int iVar0;
	int iVar1;
	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_228(var uParam0)
{
	__LIB_1__::func_403(uParam0, 0);
	__LIB_1__::func_413(uParam0, 0);
	__LIB_1__::func_398(uParam0, 1);
	__LIB_1__::func_406(uParam0, 1);
	__LIB_1__::func_396(uParam0, 0);
	__LIB_1__::func_393(uParam0, 1);
	__LIB_4__::func_135(uParam0, 1, 1, 1);
}

void func_229(int iParam0)
{
	if (!__LIB_0__::func_644(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_230(var uParam0)
{
	__LIB_1__::func_398(uParam0, 1);
	__LIB_2__::func_906(uParam0, 20);
}

bool func_231(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (__LIB_2__::func_362(iParam0, iParam1))
		{
			if (!__LIB_0__::func_27(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
				__LIB_0__::func_7(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_2__::func_363(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_8(&(iParam1->f_10), 1);
		}
	}
	return false;
}

void func_232(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_M1899"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_PISTOL_M1899");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_MAUSER"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_MAUSER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_LEMAT"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_REVOLVER_LEMAT");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_SEMIAUTO"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_SEMIAUTO");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_SCHOFIELD");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_VOLCANIC"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_VOLCANIC");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SHOTGUN_SAWEDOFF"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	}
	else
	{
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		__LIB_2__::func_231(iParam0, iVar0, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (bParam1)
	{
		TASK::TASK_SWAP_WEAPON(iParam0, 1, 0, 0, 0);
	}
	else if (iParam0 == Global_35)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, true, 0, false, false);
}

bool func_233(int iParam0)
{
	return (Global_1392040.f_1 && iParam0) != 0;
}

bool func_234(var uParam0)
{
	int iVar0;
	iVar0 = Global_1935630.f_40;
	if (__LIB_0__::func_2() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = __LIB_4__::func_227(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = __LIB_4__::func_227(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_1__::func_363(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

bool func_235(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (__LIB_2__::func_959(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > __LIB_1__::func_352(uParam1)
		{
			fVar3 = __LIB_1__::func_351(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_236(var uParam0, bool bParam1)
{
	__LIB_4__::func_228(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		__LIB_1__::func_422("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

bool func_237(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_2__::func_401(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_1__::func_351(uParam1);
			if (__LIB_2__::func_958(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = __LIB_1__::func_352(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_1__::func_350(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_1__::func_350(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_238(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_217(iParam0);
	if (iVar0 != 0)
	{
		__LIB_2__::func_880(-1, 24, 0, iVar0);
	}
}

void func_239(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

bool func_240(int* iParam0, bool bParam1)
{
	if (!bParam1 || __LIB_0__::func_139(iParam0->f_6))
	{
		return __LIB_1__::func_489(iParam0, 4);
	}
	return false;
}

bool func_241(int iParam0)
{
	return __LIB_0__::func_27(iLocal_14, iParam0);
}

void func_242(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, uParam2);
	}
}

int func_243(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			if (iParam0 == (uParam1[iVar0 /*9*/])->f_6)
			{
				(uParam1[iVar0 /*9*/])->f_6 = 0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_244(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1360165[iParam0 /*1157*/].f_2))
	{
		iVar0 = Global_1360165[iParam0 /*1157*/].f_2;
	}
	return iVar0;
}

void func_245(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = (IntToFloat((MISC::GET_FRAME_COUNT() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		__LIB_1__::func_336(&(uParam0->f_1), 16);
		__LIB_4__::func_114(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = __LIB_3__::func_716(vParam1, fParam5);
		fVar1 = __LIB_3__::func_958(fParam5, iParam4);
		fVar3 = __LIB_0__::func_667(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = __LIB_0__::func_667(0f, fVar1, fVar0);
	}
	GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, fVar3);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar2);
}

void func_246(int iParam0, vector3 vParam1, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam5, uParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		DECORATOR::DECOR_SET_BOOL(*iParam4, "loot_allow_random", true);
		if (!DECORATOR::DECOR_EXIST_ON(*iParam4, "lootable_interior"))
		{
			DECORATOR::DECOR_SET_INT(*iParam4, "lootable_interior", iParam7);
		}
	}
}

bool func_247(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return true;
		}
	}
	if (__LIB_1__::func_378(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

void func_248(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam0, 0f, 0f, 0f, fParam3, fParam3, fParam3);
	__LIB_4__::func_112(iVar0);
	VOLUME::_DELETE_VOLUME(iVar0);
}

bool func_249(int iParam0, int iParam1)
{
	if (__LIB_1__::func_313(&(iParam0->f_5), 5f))
	{
		return true;
	}
	if (__LIB_0__::func_27(iParam0->f_23, 2))
	{
		return true;
	}
	if (((!__LIB_0__::func_71(iParam0->f_1) && !__LIB_0__::func_163(iParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1, true)) && !__LIB_0__::func_163(iParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_313(&(iParam0->f_5), 4f))
	{
		return true;
	}
	if (__LIB_0__::func_27(iParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0->f_1, &iVar1, true, 1, false);
	if (__LIB_0__::func_27(iParam0->f_23, 512) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

bool func_251(int iParam0, int iParam1)
{
	if (__LIB_1__::func_313(&(iParam0->f_5), 15f))
	{
		return true;
	}
	if (__LIB_0__::func_27(iParam0->f_23, 4096) && __LIB_0__::func_163(iParam0->f_1, 1245594896))
	{
		return false;
	}
	if (__LIB_0__::func_27(iParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

bool func_252(int iParam0, int iParam1, var uParam2, float fParam3)
{
	if (uParam2->f_9)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL(&(uParam2->f_11)) || uParam2->f_10 == 0f)
	{
		uParam2->f_9 = 1;
		return false;
	}
	if (!__LIB_2__::func_227(fParam3, 1, iParam0, uParam2->f_32) || __LIB_0__::func_665(iParam0, iParam1, 1, 1) > uParam2->f_10)
	{
		return false;
	}
	if (uParam2->f_6)
	{
		if (PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, false, 0) != 1)
		{
			return false;
		}
	}
	return true;
}

int func_253(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = __LIB_0__::func_910(iParam0);
	iVar3 = __LIB_0__::func_911(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			__LIB_1__::func_28(iParam0, 1);
			if (__LIB_0__::func_344(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						__LIB_1__::func_152(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					__LIB_0__::func_345(1, iParam0);
				}
				else
				{
					__LIB_0__::func_346(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_254(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_549((*iParam0)[*uParam3], iParam1, iParam2, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_255(int iParam0, int iParam1)
{
	var uVar0;
	if (__LIB_1__::func_313(&(iParam0->f_5), 4f))
	{
		return true;
	}
	if (!__LIB_0__::func_27(iParam0->f_23, 16384))
	{
		return true;
	}
	if (iParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!__LIB_1__::func_750(&uVar0))
	{
		return true;
	}
	return false;
}

void func_256(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "not_enemy", true);
	}
}

bool func_257(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
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

void func_258(char* sParam0, var uParam1)
{
	__LIB_0__::func_37(uParam1);
	StringCopy(sParam0, "", 32);
}

bool func_259(int iParam0, int iParam1)
{
	return (Global_40.f_9422[iParam0 /*7*/].f_6 && iParam1) != 0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PRHM1");
		case 2:
			return joaat("PRHM2");
		case 3:
			return joaat("PRHM6");
		case 4:
			return joaat("PRHM3");
		case 6:
			return joaat("PRHM7");
		case 7:
			return joaat("PRHM5");
		default:
			break;
	}
	return 0;
}

void func_261(int iParam0, int iParam1)
{
	if (__LIB_3__::func_610(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] = (Global_20710.f_2092[iParam0] || iParam1);
}

void func_262(int iParam0, int iParam1)
{
	if (__LIB_4__::func_54(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9422[iParam0 /*7*/].f_4 = (Global_40.f_9422[iParam0 /*7*/].f_4 || iParam1);
}

char* func_263(int iParam0)
{
	if (__LIB_4__::func_54(iParam0, 4))
	{
		return "PROC_BLIP_HROB2";
	}
	switch (iParam0)
	{
		case 0:
			return "PROC_BLIP_HROB_AB";
		case 1:
			return "PROC_BLIP_HROB_CD";
		case 2:
			return "PROC_BLIP_HROB_CJ";
		case 3:
			return "PROC_BLIP_HROB_CP";
		case 4:
			return "PROC_BLIP_HROB_LN";
		case 5:
			return "PROC_BLIP_HROB_VH";
		case 6:
			return "PROC_BLIP_HROB_RS";
		case 7:
			return "PROC_BLIP_HROB_WC";
		default:
			break;
	}
	return "PROC_BLIP_HROB";
}

bool func_264(int iParam0)
{
	return __LIB_4__::func_54(iParam0, 1);
}

bool func_265(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return __LIB_3__::func_610(iParam0, 32);
}

void func_266(int iParam0, int iParam1, vector3 vParam2, char* sParam5)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_321(vParam2);
	iVar1 = 0;
	while (iVar1 < Global_36308)
	{
		if ((__LIB_3__::func_323(iVar1) == iParam0 && __LIB_3__::func_322(iVar1) == iParam1) && __LIB_3__::func_324(iVar1) == iVar0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar1]))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_36308[iVar1], sParam5);
			}
			return;
		}
		iVar1++;
	}
}

int func_267(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return 0;
	}
	return __LIB_4__::func_60(Global_1347702[iParam0 /*49*/].f_15);
}

void func_268(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
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
		__LIB_3__::func_883(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			__LIB_3__::func_883(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_269(int iParam0)
{
	Global_1396116.f_139 = iParam0;
}

int func_270(int iParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (iParam5 < 0 || iParam5 >= *iParam0)
	{
		iParam5 = 0;
	}
	if (bParam6 < 0 || bParam6 >= *iParam0)
	{
		bParam6 = (*iParam0 - 1);
	}
	if (fParam7 < 0f)
	{
		fParam7 = 0f;
	}
	if (fParam8 < 0f)
	{
		fParam8 = 999999.9f;
	}
	if (fParam7 > fParam8)
	{
	}
	iVar1 = 0;
	fVar3 = 1E+07f;
	iVar0 = iParam5;
	while (iVar0 <= bParam6)
	{
		if (!bParam4 || !ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			fVar2 = __LIB_0__::func_94((*iParam0)[iVar0], vParam1, 1);
			if (fVar2 < fVar3)
			{
				if (fVar2 >= fParam7 && fVar2 <= fParam8)
				{
					fVar3 = fVar2;
					iVar1 = (*iParam0)[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_271(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_499(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_3;
	}
	return 0;
}

void func_272(int iParam0, int iParam1)
{
	__LIB_3__::func_229(__LIB_3__::func_655(iParam0, iParam1));
}

bool func_273(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { __LIB_3__::func_508(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!__LIB_0__::func_86(vVar0))
					{
						if (__LIB_0__::func_195(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					if (PED::_IS_PED_CARRYING(iParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2f, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (__LIB_0__::func_163(iParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

bool func_274(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_690(iParam0, 0, (954 - 1), 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!__LIB_0__::func_122(iVar0) && bParam1)
	{
		return false;
	}
	return __LIB_0__::func_117(iVar0, 1);
}

bool func_275(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		__LIB_3__::func_397(iParam0, 0);
		return false;
	}
	vVar0 = { uParam2, uParam3, uParam4 };
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		if (bParam1)
		{
			if (!__LIB_2__::func_760(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(__LIB_0__::func_120(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(__LIB_0__::func_120(iParam0), 0);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(__LIB_0__::func_120(iParam0), 0);
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(__LIB_0__::func_120(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

void func_276(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = __LIB_3__::func_698(iParam0);
		__LIB_4__::func_180(iVar0, ENTITY::_0xC346A546612C49A9(iParam0));
	}
	if (bParam1)
	{
		__LIB_2__::func_930(iParam0, 0);
	}
}

void func_277(int iParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	iParam0->f_6 = uParam1;
	iParam0->f_3 = { vParam3 };
	iParam0->f_2 = 0;
	iParam0->f_7 = MISC::GET_GAME_TIMER();
	*iParam0 = *uParam2;
	iParam0->f_8 = iParam8;
}

bool func_278(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam0)[iVar0], iParam1, iParam2, iParam3))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_279(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		__LIB_1__::func_683(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	__LIB_1__::func_681(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

bool func_280(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		__LIB_3__::func_346(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return true;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return false;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return false;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					__LIB_3__::func_346(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return true;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_421(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return false;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				__LIB_3__::func_346(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return true;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return false;
}

void func_281(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_6 = uParam1;
	uParam0->f_3 = { vParam3 };
	uParam0->f_2 = 0;
	uParam0->f_7 = MISC::GET_GAME_TIMER();
	*uParam0 = *uParam2;
	uParam0->f_8 = iParam8;
}

void func_282(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (bParam1)
			{
				__LIB_3__::func_475((*uParam0)[iVar0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			}
			else
			{
				PED::_0x39A2FC5AF55A52B1((*uParam0)[iVar0], -1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_283(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (MAP::DOES_BLIP_EXIST(iParam1))
	{
		if (__LIB_2__::func_1(iParam0, 0, 1))
		{
			if (__LIB_0__::func_94(iParam0, Global_36, iParam3) > fParam2)
			{
				__LIB_0__::func_325(&iParam1);
				if (bParam4)
				{
					TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 3f, 0);
				}
			}
		}
	}
}

void func_284(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && __LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			TASK::TASK_SMART_FLEE_PED((*uParam0)[iVar0], Global_35, 500f, -1, 256, 3f, 0);
			if (bParam1)
			{
				PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
			}
		}
		iVar0++;
	}
}

bool func_285(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_4__::func_51((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_286(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_416((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_287(int iParam0)
{
	__LIB_1__::func_683(iParam0, 64);
}

void func_288(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_4__::func_283((*uParam0)[iVar0], (*uParam1)[iVar0], fParam2, iParam3, bParam4);
		iVar0++;
	}
}

var func_289(int iParam0)
{
	return *iParam0;
}

bool func_290(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 16384:
		case 131072:
			return true;
		case 32:
		case 64:
		case 512:
		case 4096:
		case 8192:
		case 32768:
		case 65536:
		case 262144:
			return false;
		default:
			break;
	}
	return false;
}

void func_291(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam3);
		PED::_0xFC3DB99C8144CD81(iParam0, iParam1, iParam2, bParam3, 0);
	}
}

void func_292(int iParam0)
{
	__LIB_1__::func_683(iParam0, 1);
}

void func_293(int iParam0)
{
	__LIB_1__::func_683(iParam0, 128);
}

void func_294(int iParam0)
{
	__LIB_1__::func_683(iParam0, 4096);
}

void func_295(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_824(iParam0))
	{
		return;
	}
	__LIB_3__::func_752(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1935183.f_73[iParam0 /*7*/][iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1935183.f_73[iParam0 /*7*/][iVar0]), iVar1);
	}
}

bool func_296(char* sParam0, int iParam1)
{
	struct<2> Var0;
	Var0.f_1 = sParam0;
	return __LIB_3__::func_127(UIFEED::_0x4E88A65968A55C78(&Var0, iParam1));
}

void func_297(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_4__::func_131(iParam0);
}

bool func_298(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_722((*uParam0)[*uParam3], iParam1, iParam2, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

int func_299(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_453((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

void func_300(int iParam0)
{
	iLocal_15 = iParam0;
}

bool func_301(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_302(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, bParam9, fParam10, false);
}

bool func_303(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::_IS_MOUNT_SEAT_FREE(iParam0, -1))
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_304(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0], false);
		}
		iVar0++;
	}
}

int func_305(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1935475[iParam0 /*2*/]))
	{
		Global_1935475[iParam0 /*2*/] = 0;
		Global_1935475[iParam0 /*2*/].f_1 = 0;
		return 1;
	}
	return 0;
}

var func_306(var uParam0, int iParam1)
{
	var uVar0;
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	uVar0 = StackVal;
	return ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, uVar0);
}

char* func_307()
{
	return "SCRIPT_COMMON@DEAD@MALE";
}

char* func_308()
{
	return "SCRIPT_COMMON@DEAD@FEMALE";
}

bool func_309(var uParam0, int iParam1)
{
	var uVar0;
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	uVar0 = StackVal;
	return ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, uVar0);
}

float func_310(bool bParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return __LIB_2__::func_709((bParam0 + fParam1));
}

var func_311(var uParam0, int iParam1)
{
	return __LIB_3__::func_901(uParam0, uParam0->f_15[iParam1]);
}

bool func_312(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (__LIB_4__::func_132(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
		else if (__LIB_4__::func_132(iVar0) == -1)
		{
			*iParam1 = iVar0;
			return false;
		}
	else
	{
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

char* func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FACEDOWN_01";
		case 1:
			return "FACEUP_01";
		case 2:
			return "FACEUP_02";
		case 3:
			return "FACEUP_03";
		case 4:
			return "FACEUP_04";
		case 5:
			return "FACEUP_05";
		case 6:
			return "FACEUP_06";
		case 7:
			return "FACEUP_07";
		case 8:
			return "ONSIDE_01";
		case 9:
			return "ONSIDE_02";
		case 10:
			return "ONSIDE_03";
		case 11:
			return "ONSIDE_04";
		default:
			break;
	}
	return __LIB_3__::func_497("[BEAT]", "GET_GENERIC_DEATH_ANIM_NAME_BY_INDEX: Invalid Index.");
}

void func_314(int iParam0, bool bParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("A_C_VULTURE_01"))
		{
			if (bParam1)
			{
				StringCopy(sParam2, "amb_creatures_bird@world_Vulture_eating@base", 64);
				StringCopy(sParam3, "base", 64);
			}
			else
			{
				StringCopy(sParam2, "amb_creatures_bird@world_Vulture_preening@idle0", 64);
				iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3);
				switch (iVar1)
				{
					case 0:
						StringCopy(sParam3, "idle_a", 64);
						break;
					case 1:
						StringCopy(sParam3, "idle_b", 64);
						break;
					case 2:
						StringCopy(sParam3, "idle_c", 64);
						break;
				}
			}
		}
		else if (iVar0 == joaat("A_C_CROW_01"))
		{
			StringCopy(sParam2, "amb_creatures_bird@world_crow_eating_ground@base", 64);
			StringCopy(sParam3, "base", 64);
		}
	}
}

void func_315(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_2__::func_353(uParam0[iVar0], iParam1);
		iVar0++;
	}
}

int func_316(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (__LIB_0__::func_266(Global_35, uParam0->f_51, fParam3, 1, 1))
	{
		*uParam2 = 1;
		return 0;
	}
	if (iParam1 == 6)
	{
		*uParam2 = 0;
		return 1;
	}
	return 0;
}

void func_317(int iParam0, int iParam1, char[4] cParam2)
{
	__LIB_2__::func_360(&(iParam0->f_21[iParam1 /*17*/]), cParam2);
}

void func_318(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_3__::func_259((*iParam0)[iVar0], 0);
		iVar0++;
	}
}

int func_319(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	char* sVar0;
	if (__LIB_0__::func_27(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (__LIB_0__::func_27(uParam0->f_1, 16))
			{
				__LIB_4__::func_114(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				__LIB_4__::func_245(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		if (!__LIB_0__::func_27(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = __LIB_3__::func_965(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = __LIB_3__::func_965(__LIB_3__::func_713(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = __LIB_3__::func_714(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, __LIB_3__::func_715(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (__LIB_1__::func_874(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					__LIB_1__::func_336(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				__LIB_1__::func_336(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_320(var uParam0)
{
	BUILTIN::WAIT(uParam0->f_158);
}

var func_321(int iParam0)
{
	return STREAMING::_0x4EDDD9E9CA5AF985(iParam0);
}

void func_322()
{
	if (!Local_14.f_44)
	{
		Local_14.f_44 = 1;
	}
}

bool func_323(var uParam0, var uParam1)
{
	char* sVar0;
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, sVar0);
}

void func_324(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (__LIB_3__::func_634(uParam0, 0, 0, 0))
	{
		if (!bParam3 || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, uParam0->f_1))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2);
		}
	}
}

bool func_325(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (__LIB_3__::func_634(uParam0, 0, 0, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_1, sParam2))
		{
			return true;
		}
	}
	if (bParam3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, -1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_326(var uParam0, int iParam1)
{
	return __LIB_3__::func_944(uParam0, uParam0->f_15[iParam1]);
}

bool func_327(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (*iParam1 - 1))
	{
		if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0]))
		{
		}
		else if (__LIB_0__::func_48(iParam0, (*iParam1)[iVar0], fParam2, bParam3))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_328(int iParam0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 == -1 || iParam4 >= *iParam0)
	{
		iParam4 = (*iParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0]))
		{
			if (__LIB_2__::func_118((*iParam0)[iVar0], bParam2, 1) < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_329(var uParam0, int iParam1, char[4] cParam2)
{
	__LIB_2__::func_360(&(uParam0->f_21[iParam1 /*17*/]), cParam2);
}

bool func_330(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (__LIB_3__::func_639(iParam0, iParam1))
		{
			if (!__LIB_0__::func_27(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
				__LIB_1__::func_336(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_2__::func_363(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_516(&(iParam1->f_10), 1);
		}
	}
	return false;
}

void func_331(var uParam0, char[4] cParam1, char* sParam2, char* sParam3)
{
	__LIB_3__::func_644(&(uParam0->f_21), cParam1, sParam2, sParam3, 0);
}

void func_332(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	__LIB_2__::func_411(&(uParam0->f_21[iParam1 /*17*/]), bParam2, bParam3);
}

void func_333(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_162))
	{
		__LIB_1__::func_196(&(uParam0->f_162), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_163))
	{
		__LIB_1__::func_196(&(uParam0->f_163), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_164))
	{
		__LIB_1__::func_196(&(uParam0->f_164), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_165))
	{
		__LIB_1__::func_196(&(uParam0->f_165), 1, 1);
	}
}

bool func_334(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_270(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_225(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_218(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

Vector3 func_335(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vVar0 = { __LIB_0__::func_173(vParam0) };
	fVar3 = MISC::ATAN2(vVar0.y, vVar0.x);
	fVar4 = -MISC::ATAN2(vVar0.z, BUILTIN::SQRT(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	return 0f, fVar4, fVar3;
}

void func_336(var uParam0)
{
	__LIB_1__::func_581(uParam0, 64);
}

void func_337(var uParam0)
{
	__LIB_1__::func_581(uParam0, 4);
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = __LIB_0__::func_23();
					}
					__LIB_1__::func_446(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					__LIB_0__::func_8(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

bool func_339(int iParam0)
{
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		return false;
	}
	return PED::IS_PED_SHOOTING(*iParam0);
}

void func_340(int* iParam0)
{
	__LIB_1__::func_471(iParam0, 9);
}

int func_341(int iParam0)
{
	int iVar0;
	if (Global_1934765.f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765.f_337)
	{
		if (Global_1934765.f_318[iVar0 /*3*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_342(int iParam0)
{
	int iVar0;
	if (Global_1934765.f_337 == 0)
	{
		return;
	}
	if (Global_1934765.f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765.f_337 - 2))
		{
			MISC::_COPY_MEMORY(&(Global_1934765.f_318[iVar0 /*3*/]), &(Global_1934765.f_318[iVar0 + 1 /*3*/]), 3);
			iVar0++;
		}
	}
	Global_1934765.f_337 = (Global_1934765.f_337 - 1);
}

void func_343()
{
	MISC::_0x243CEDE8F916B994();
	Global_1934765.f_338 = -1;
}

void func_344(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (Global_1934765.f_337 >= 6)
	{
		return;
	}
	Global_1934765.f_318[Global_1934765.f_337 /*3*/] = iParam0;
	Global_1934765.f_318[Global_1934765.f_337 /*3*/].f_1 = iParam1;
	Global_1934765.f_318[Global_1934765.f_337 /*3*/].f_2 = fParam2;
	Global_1934765.f_337++;
}

Vector3 func_345(int iParam0, vector3 vParam1, int iParam4)
{
	return __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1, iParam4);
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_347(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_CH2_END"):
			return 3;
		case joaat("WEATHER_GROUP_CH2_MID"):
			return 4;
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			return 6;
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			return 8;
		case joaat("WEATHER_GROUP_GOOD"):
			return 7;
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			return 10;
		case joaat("WEATHER_GROUP_IN_CAMP"):
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			return 2;
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			return 11;
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			return 0;
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			return 12;
		case joaat("WEATHER_GROUP_BAD"):
			return 1;
		case joaat("WEATHER_GROUP_CH2_START"):
			return 5;
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

int func_348(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BLIZZARD");
		case 1:
			return joaat("CLOUDS");
		case 2:
			return joaat("DRIZZLE");
		case 3:
			return joaat("FOG");
		case 4:
			return joaat("GROUNDBLIZZARD");
		case 5:
			return joaat("HAIL");
		case 6:
			return joaat("HIGHPRESSURE");
		case 7:
			return joaat("HURRICANE");
		case 8:
			return joaat("MISTY");
		case 9:
			return joaat("OVERCAST");
		case 10:
			return joaat("OVERCASTDARK");
		case 11:
			return joaat("RAIN");
		case 12:
			return joaat("SANDSTORM");
		case 13:
			return joaat("SHOWER");
		case 14:
			return joaat("SLEET");
		case 15:
			return joaat("SNOW");
		case 16:
			return joaat("SNOWCLEARING");
		case 17:
			return joaat("SNOWLIGHT");
		case 18:
			return joaat("SUNNY");
		case 19:
			return joaat("THUNDER");
		case 20:
			return joaat("THUNDERSTORM");
		case 21:
			return joaat("WHITEOUT");
		case 22:
			return 0;
		case 23:
			return -1439599467;
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

bool func_349(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return bParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

int func_350(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
			return 2;
		case -1439599467:
			return 23;
		case joaat("SANDSTORM"):
			return 12;
		case joaat("THUNDER"):
			return 19;
		case joaat("OVERCAST"):
			return 9;
		case joaat("FOG"):
			return 3;
		case joaat("SHOWER"):
			return 13;
		case joaat("SNOW"):
			return 15;
		case joaat("HIGHPRESSURE"):
			return 6;
		case 0:
			return 22;
		case joaat("SLEET"):
			return 14;
		case joaat("OVERCASTDARK"):
			return 10;
		case joaat("SNOWLIGHT"):
			return 17;
		case joaat("BLIZZARD"):
			return 0;
		case joaat("WHITEOUT"):
			return 21;
		case joaat("CLOUDS"):
			return 1;
		case joaat("HURRICANE"):
			return 7;
		case joaat("RAIN"):
			return 11;
		case joaat("MISTY"):
			return 8;
		case joaat("SUNNY"):
			return 18;
		case joaat("SNOWCLEARING"):
			return 16;
		case joaat("HAIL"):
			return 5;
		case joaat("THUNDERSTORM"):
			return 20;
		case joaat("GROUNDBLIZZARD"):
			return 4;
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

void func_351(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	__LIB_0__::func_172(*iParam0);
	*iParam0 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam1, vParam2, vParam5, vParam8);
	POPULATION::_0xB56D41A694E42E86(*iParam0, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(*iParam0, 0, 0, 0, -1, -1, 0);
}

int func_352(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { vParam6 - vParam0 };
	fVar3 = __LIB_1__::func_507(vParam3, vVar0);
	if (MISC::ABSF(fVar3) > fParam9)
	{
		if (fVar3 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (__LIB_0__::func_195(vParam0, vParam0 + vParam3, vParam6))
	{
		return 3;
	}
	return 2;
}

void func_353()
{
	if (__LIB_0__::func_270())
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	}
}

void func_354(int* iParam0, var uParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_2__::func_478(Global_35, *iParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

int func_355()
{
	return __LIB_1__::func_237(0);
}

void func_356(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		__LIB_1__::func_480(iParam0);
		__LIB_2__::func_593(iParam1, uParam2);
	}
	__LIB_2__::func_56(*iParam0, 1, bParam4);
}

bool func_357(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		iVar5 = __LIB_3__::func_349(*iParam0, iParam1, uParam2, fParam3, bVar4);
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

bool func_358(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		__LIB_3__::func_351(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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

void func_359(int iParam0)
{
	__LIB_2__::func_110(iParam0, 0);
	__LIB_2__::func_111(iParam0, 0);
	__LIB_2__::func_104(iParam0, 1);
	__LIB_2__::func_180(iParam0, 1);
	__LIB_2__::func_251(iParam0, 0);
	__LIB_2__::func_182(iParam0, 1);
	__LIB_2__::func_183(iParam0, 1, 1, 1);
}

bool func_360(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (__LIB_3__::func_199(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (__LIB_3__::func_282(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (__LIB_0__::func_36() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return true;
}

int func_361(int iParam0)
{
	int iVar0;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "pedRoam_flags"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "pedRoam_flags");
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_362(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
	}
}

void func_363(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((iParam0[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL((iParam0[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

bool func_364(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((iParam0[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((iParam0[iVar0 /*12*/])->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_365()
{
	return Global_1935496.f_10;
}

bool func_366(int iParam0)
{
	return iParam0->f_2 == 2;
}

int func_367(int iParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PATHFIND::_0xDE0EA444735C1368(iParam1))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iParam1);
	}
	if (PED::_0x0CAB404CD2DB41F5(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_368(int iParam0)
{
	if (!__LIB_4__::func_192(iParam0))
	{
		return false;
	}
	return Global_1935369.f_5[iParam0 /*11*/];
}

void func_369(int iParam0)
{
	if (!__LIB_0__::func_27(*iParam0, 8))
	{
		AUDIO::_0x0D7FD6A55FD63AEF(39, 3, 0);
		__LIB_1__::func_336(iParam0, 8);
	}
}

Vector3 func_370(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	struct<7> Var0;
	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		return Var0.f_6;
	}
	return 0f, 0f, 0f;
}

float func_371(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	struct<10> Var0;
	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		return Var0.f_9.f_2;
	}
	return 0f;
}

void func_372(int iParam0, int iParam1)
{
	__LIB_0__::func_516(&(Global_1935369.f_5[iParam0 /*11*/].f_7), iParam1);
}

void func_373(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(Global_1935369.f_5[iParam0 /*11*/].f_7), iParam1);
}

int func_374(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	return __LIB_4__::func_270(iParam0, Global_36, iParam1, iParam2, bParam3, iParam4, bParam5);
}

int func_375(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((uParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((uParam3[iVar0 /*12*/])->f_7 != 0 && !__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((uParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (uParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((uParam3[iVar8 /*12*/])->f_8, *(uParam3[iVar0 /*12*/])) };
					if (__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 64))
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam3[iVar0 /*12*/])->f_8, (uParam3[iVar8 /*12*/])->f_8, 0, *(uParam3[iVar0 /*12*/]), (uParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(uParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(uParam3[iVar0 /*12*/]) };
					}
					if (!__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 128))
					{
						__LIB_3__::func_338(&vVar5, (uParam3[iVar0 /*12*/])->f_10);
					}
					if (__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 64))
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (__LIB_0__::func_86((uParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (uParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (uParam3[iVar0 /*12*/])->f_4 };
					}
					if (__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = __LIB_2__::func_709((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((uParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((uParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29((uParam3[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((uParam3[iVar0 /*12*/])->f_8, true);
				}
				if (__LIB_0__::func_27((uParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((uParam3[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS((uParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9((uParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((uParam3[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_376(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_0__::func_27(*iParam0, 4))
	{
		if (__LIB_0__::func_27(iParam5, 1))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_1__::func_683(iParam0, 4);
				return false;
			}
		}
		else if (__LIB_0__::func_27(iParam5, 2))
		{
			if (__LIB_0__::func_113())
			{
				__LIB_1__::func_683(iParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!__LIB_0__::func_27(*iParam0, 1))
	{
		if (!__LIB_0__::func_27(*iParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *iParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 8, 1) && !PED::IS_PED_FLEEING((*iParam1)[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		__LIB_1__::func_283(&(iParam0->f_1), 0);
		__LIB_1__::func_683(iParam0, 1);
	}
	if (__LIB_0__::func_27(*iParam0, 1))
	{
		if (__LIB_1__::func_285(&(iParam0->f_1), (fParam4 + 4f)))
		{
			__LIB_1__::func_683(iParam0, 4);
			return false;
		}
		if (!__LIB_1__::func_285(&(iParam0->f_1), fParam4))
		{
			return false;
		}
		if (!__LIB_2__::func_227(0f, 1, Global_35, 1))
		{
			return false;
		}
		if (__LIB_2__::func_385(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_24)
		{
			return false;
		}
		__LIB_1__::func_683(iParam0, 4);
		return true;
	}
	return false;
}

bool func_377(int iParam0)
{
	return (Global_1900383.f_316 && iParam0) != 0;
}

bool func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && __LIB_0__::func_296(0, 1, 1))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (__LIB_4__::func_140(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_3__::func_743(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0 /*60*/].f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				__LIB_0__::func_204(iVar0, 512, 1);
			}
			else
			{
				__LIB_0__::func_176(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_379()
{
	return joaat("COACH2");
}

void func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1347702[iParam0 /*49*/].f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (__LIB_0__::func_31(Global_1347702[iParam0 /*49*/].f_29[iVar1]))
			{
				__LIB_1__::func_336(&iVar0, __LIB_0__::func_771(Global_1347702[iParam0 /*49*/].f_29[iVar1]));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
		else if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
		{
			if (__LIB_4__::func_378(iVar0, Global_1347702[iParam0 /*49*/].f_15, 1, Global_1347702[iParam0 /*49*/].f_27, __LIB_0__::func_61()))
			{
				__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			}
		}
		else
		{
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
	}
}

void func_381(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_4__::func_333(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!__LIB_3__::func_435(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!__LIB_1__::func_982(uParam0->f_3) && !__LIB_1__::func_85(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

void func_382(int iParam0, float fParam1, int iParam2)
{
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	PED::_0x06D26A96CA1BCA75(iParam0, 3, fParam1, iParam2);
}

float func_383(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar4 = __LIB_4__::func_53(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = __LIB_0__::func_593(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (__LIB_0__::func_652(iVar6) - __LIB_0__::func_652(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

void func_384(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_8 = 4;
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = 4;
	uParam0->f_18 = 4;
	uParam0->f_7 = 0;
}

bool func_385(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (__LIB_3__::func_411(*uParam0, joaat("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_386(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_4__::func_361(iParam0);
	iVar0 = (iVar0 || iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_flags", iVar0);
}

void func_387(int iParam0, vector3 vParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_targetCoord", __LIB_3__::func_321(vParam1));
	DECORATOR::DECOR_SET_FLOAT(iParam0, "pedRoam_targetCoord_Z", vParam1.z);
}

int func_388(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || __LIB_0__::func_139(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (__LIB_0__::func_572(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_389(int iParam0, int iParam1, bool bParam2)
{
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

bool func_390(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
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
				Global_1360165[iParam0 /*1157*/].f_124 = __LIB_3__::func_370(iVar0, vParam1, bParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
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

int func_391(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;
	__LIB_3__::func_307(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (__LIB_3__::func_193(uParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (__LIB_3__::func_452(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return 1;
	}
	return 0;
}

void func_392()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar1);
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			PED::_0xED00D72F81CF7278(iVar3, 0, 1);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

bool func_393(int iParam0, char* sParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1));
}

bool func_394(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_4__::func_122(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_395(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_2__::func_259(&(iParam1->f_18));
			return false;
		}
		else if (__LIB_0__::func_899(&(iParam1->f_18)))
		{
			__LIB_1__::func_561(&(iParam1->f_18));
			return false;
		}
	}
	if (!__LIB_0__::func_899(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return __LIB_3__::func_601(&(iParam1->f_18), fParam2);
	return true;
}

bool func_396(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (__LIB_4__::func_247(iParam0, iParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_397(var uParam0)
{
	if (!__LIB_4__::func_119(uParam0))
	{
		return false;
	}
	if (__LIB_1__::func_876(uParam0->f_7, uParam0->f_8, __LIB_0__::func_51(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!__LIB_0__::func_51(&(uParam0->f_3), 4))
	{
		if (__LIB_1__::func_383())
		{
			return true;
		}
	}
	return false;
}

bool func_398(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!__LIB_2__::func_136(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_4__::func_96(fParam0))
	{
		return false;
	}
	return true;
}

void func_399(int* iParam0, var uParam1)
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
	__LIB_4__::func_122(iParam0, uParam1, 1);
	__LIB_2__::func_480(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

bool func_400(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_4__::func_122(iParam1, uParam2, 0);
		iVar5 = __LIB_3__::func_159(*uParam0, iParam1, uParam2, fParam3, bVar4);
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

bool func_401(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_3__::func_161(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
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
						__LIB_4__::func_122(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
						__LIB_2__::func_259(&(iParam1->f_18));
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

void func_402(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_8 = 4;
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = 4;
	uParam0->f_18 = 4;
}

void func_403(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		uVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_2__::func_303(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

int func_404(int iParam0)
{
	int iVar0;
	if (__LIB_1__::func_187(iParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_627(iParam0, 0))
	{
		__LIB_4__::func_380(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (Global_40.f_450[iVar0] == -1)
			{
				__LIB_4__::func_380(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_405(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam3)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 344, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 344, false);
		}
		if (bParam2)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				if (PED::IS_PED_HUMAN(iParam0))
				{
					*uParam1 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) - Vector(1f, 0f, 0f), 0f, 0f, 0f, 0.5f, 0.5f, 1f);
				}
				else
				{
					*uParam1 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 0.5f, 1f, 0.5f);
				}
				PED::_0x7C00CFC48A782DC0(*uParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
		}
		else if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
	}
}

void func_406(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_471(iParam0, 5);
	}
	else
	{
		__LIB_1__::func_491(iParam0, 5);
	}
}

int func_407(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0, 0) && !TASK::_0x02EBBB3989B7E695(iParam0)) && (iParam3 == 0 || PED::_0x569F1E1237508DEB(iParam0) == iParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_408(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4)
{
	return __LIB_4__::func_115(iParam0, MISC::GET_HASH_KEY(sParam1), fParam2, iParam3, sParam1, bParam4, 106);
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			if (iVar1 == iParam1)
			{
				return Global_40.f_9829[iVar0 /*4*/].f_1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return joaat("VAL_PRISONERS");
		case 26:
			return joaat("STR_PRISONERS");
		case 105:
			return joaat("RHD_PRISONERS");
		case 78:
			return joaat("ASB_PRISONERS");
		case 5:
			return joaat("SDN_PRISONERS");
		case 38:
			return joaat("BLA_PRISONER");
		case 115:
			return joaat("TBL_PRISONERS");
		default:
			break;
	}
	return -1;
}

void func_411(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	iVar0 = 258;
	__LIB_3__::func_414(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_412(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	__LIB_3__::func_414(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

int func_413(int iParam0, int iParam1)
{
	return __LIB_0__::func_118(__LIB_3__::func_655(iParam0, iParam1));
}

void func_414(var uParam0, bool bParam1)
{
	__LIB_4__::func_359(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		__LIB_1__::func_422("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_415(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 32768);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 32768);
	}
}

void func_416(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_417(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_UNARMED"), 0))
		{
			return true;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_44))
		{
			if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, Global_1935630.f_44, 0))
			{
				return true;
			}
		}
	}
	return false;
}

char* func_418(int iParam0)
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			switch (iParam0)
			{
				case 15:
					return "val_bank_01_main";
				case 3:
					return "val_genstore_01_main";
				case 6:
					return "val_gunsmith_01_main";
				case 0:
					return "val_doctor_01_main";
				case 8:
					return "val_saloon_barber_01_main";
				default:
					break;
			}
			break;
		case 78:
			switch (iParam0)
			{
				case 6:
					return "ann_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 15:
					return "bla_bank_01_main";
				case 3:
					return "bla_genstore_01_main";
				default:
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 3:
					return "arm_genstore_01_main";
				default:
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 3:
					return "tum_genstore_01_main";
				case 6:
					return "tum_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 6:
					return "new_gunshop_01_main";
				case 3:
					return "new_grocery_01_main";
				case 7:
					return "new_tailor01_01_main";
				default:
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 3:
					return "rho_genstore_01_main";
				case 6:
					return "rho_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 17:
					return "lag_01_main";
				default:
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 3:
					return "wal_trainstation_01_main";
				default:
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					return "van_exoticgoods_01_main";
				case 2:
					return "van_depot_01_main";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_419(int iParam0, bool bParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	if ((bParam1 && __LIB_2__::func_804(iParam0, 512)) || (!bParam1 && !__LIB_2__::func_804(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_2__::func_810(iParam0, 512);
	}
	else
	{
		__LIB_1__::func_943(iParam0, 512);
	}
	if (__LIB_4__::func_75(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_420(float fParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { *fParam0 };
	if (__LIB_3__::func_195(&uParam1))
	{
		return 1;
	}
	if (!__LIB_2__::func_106(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*fParam0 = { vVar0 };
	return 1;
}

void func_421(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_748(&(iParam1->f_6), 0, 1);
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
			iParam1->f_6 = __LIB_2__::func_512(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
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

bool func_422(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_4__::func_280(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_423(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_4__::func_154(uParam0[iVar0 /*13*/], bParam1);
		iVar0++;
	}
}

void func_424(int iParam0)
{
	if (!__LIB_0__::func_27(*iParam0, 4))
	{
		__LIB_1__::func_683(iParam0, 4);
	}
}

bool func_425(vector3 vParam0, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10)
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
			bVar0 = __LIB_4__::func_92(fParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = __LIB_4__::func_93(fParam4, PLAYER::PLAYER_PED_ID(), vParam0);
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
		else if ((__LIB_0__::func_36() - *iParam5) > fParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*fParam4 == 2 && fParam4->f_4)
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

bool func_426()
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_427(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!PED::DOES_GROUP_EXIST(iParam0) || !PED::_0x0455546F23FF08E4(iParam0))
	{
		return;
	}
	PED::GET_GROUP_SIZE(iParam0, &uVar0, &iVar2);
	if (iVar2 > 0)
	{
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			iVar3 = PED::GET_PED_AS_GROUP_MEMBER(iParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::REMOVE_PED_FROM_GROUP(iVar3);
				}
			}
			iVar1++;
		}
	}
	PED::REMOVE_GROUP(iParam0);
}

void func_428(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam2, iVar0, iVar1);
}

bool func_429(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*32*/])->f_1 != 0)
		{
			iVar1++;
			if ((uParam0[iVar0 /*32*/])->f_12 != 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 <= 15;
}

int func_430(vector3 vParam0, int iParam3, float fParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar10;
	var uVar11;
	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, fParam4, iParam5, &vVar3, &vVar0, &uVar10, &uVar9, &uVar11, bParam6))
	{
		vVar6 = { __LIB_0__::func_173(vVar3 - vVar0) };
		*iParam3 = { vVar0 + vVar6 * FtoV((0.5f * MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true))) };
		return 1;
	}
	return 0;
}

int func_431(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 != -1)
	{
		iVar0 = __LIB_3__::func_148(iParam0, iParam1);
		if (iVar0 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar0 /*2*/];
	}
	return 0;
}

void func_432(int* iParam0, var uParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_2__::func_303(Global_35, *iParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_433(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_4__::func_51((*iParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_434(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = VEHICLE::_0x635423D55CA84FC8(iParam0);
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam0, iVar1);
		STREAMING::REQUEST_MODEL(iVar3, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

bool func_435()
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_4__::func_307());
	STREAMING::REQUEST_ANIM_DICT(__LIB_4__::func_308());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_4__::func_307()))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_4__::func_308()))
	{
		return false;
	}
	return true;
}

int func_436(int iParam0, int iParam1, float fParam2, float fParam3)
{
	bool bVar0;
	if (fParam3 >= 0f)
	{
		if (fParam3 < fParam2)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = __LIB_0__::func_665(iParam1, Global_35, 1, 1) < fParam2;
	}
	if (bVar0)
	{
		if (!*iParam0 & 4 != 0)
		{
			__LIB_2__::func_613(iParam0, 1);
			return 1;
		}
	}
	else if (*iParam0 & 4 != 0)
	{
		__LIB_2__::func_613(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_437(int iParam0, bool bParam1, float fParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		__LIB_3__::func_502(iParam0, __LIB_4__::func_307(), __LIB_4__::func_313(MISC::GET_RANDOM_INT_IN_RANGE(0, 12)), 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, iParam3, 0);
	}
	else
	{
		__LIB_3__::func_502(iParam0, __LIB_4__::func_308(), __LIB_4__::func_313(MISC::GET_RANDOM_INT_IN_RANGE(0, 12)), 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, iParam3, 0);
	}
	if (bParam1)
	{
		__LIB_4__::func_178(iParam0, fParam2);
	}
}

bool func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 < 0 || iParam4 >= *iParam0)
	{
		iParam4 = (*iParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (__LIB_3__::func_549((*iParam0)[iVar0], iParam1, iParam2, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40;
		case 2:
			return 78;
		case 4:
			return 37;
		case 8:
			return 38;
		case 16:
			return 93;
		case 32:
			return 82;
		case 64:
			return 95;
		case 128:
			return 65;
		case 256:
			return 68;
		case 512:
			return 69;
		case 1024:
			return 3;
		case 2048:
			return 61;
		case 4096:
			return 110;
		case 8192:
			return 5;
		case 16384:
			return 35;
		case 32768:
			return 22;
		case 65536:
			return 105;
		case 131072:
			return 8;
		case 262144:
			return 32;
		case 524288:
			return 26;
		case 1048576:
			return 115;
		case 2097152:
			return 76;
		case 4194304:
			return 92;
		case 8388608:
			return 56;
		case 16777216:
			return 120;
		case 0:
		default:
			break;
	}
	return -1;
}

int func_440(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_441(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!*uParam0)
		{
			__LIB_1__::func_978(0);
			*uParam0 = 1;
		}
	}
	else if (*uParam0)
	{
		__LIB_1__::func_978(1);
		*uParam0 = 0;
	}
}

bool func_442(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_UIPROMPT_HAS_MASH_MODE_FAILED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_443(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_0xB0E8599243B3F568(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_444(int iParam0)
{
	struct<4> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_1__::func_356(iParam0))
		{
			if (PED::_0x608BC6A6AACD5036(&Var0, iParam0, 4, 0))
			{
				return ENTITY::DOES_ENTITY_EXIST(Var0.f_3);
			}
		}
	}
	return false;
}

void func_445(bool bParam0)
{
	if (bParam0)
	{
		__LIB_2__::func_161(Local_15.f_51, 20f, 5);
	}
	else
	{
		__LIB_2__::func_165(Local_15.f_51, 20f, 0, 0, 6);
	}
}

void func_446()
{
	iLocal_14 = __LIB_3__::func_390(Local_15.f_3, 2, 0);
	switch (iLocal_14)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

bool func_447(var uParam0, int iParam1, vector3 vParam2)
{
	if (__LIB_4__::func_4(Global_36, &(uParam0->f_4), 1f, 1, 0))
	{
		if (__LIB_0__::func_266(Global_35, uParam0->f_4, 10f, 1, 1))
		{
			if (PED::IS_PED_HEADING_TOWARDS_POSITION(iParam1, vParam2, 80f))
			{
				uParam0->f_3 = 0;
				__LIB_0__::func_37(&(uParam0->f_10));
				return false;
			}
			if (PATHFIND::GET_GPS_BLIP_ROUTE_FOUND())
			{
				if (!MAP::_0xF47A1EB2A538A3A3())
				{
					uParam0->f_3 = 1;
				}
				else
				{
					uParam0->f_3 = 0;
					__LIB_0__::func_37(&(uParam0->f_10));
				}
			}
		}
		else if (!PED::IS_PED_HEADING_TOWARDS_POSITION(iParam1, vParam2, 80f))
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(iParam1)) != 0f)
			{
				uParam0->f_3 = 1;
			}
		}
		else
		{
			uParam0->f_3 = 0;
			__LIB_0__::func_37(&(uParam0->f_10));
		}
	}
	if (uParam0->f_3 == 1)
	{
		if (!__LIB_0__::func_75(&(uParam0->f_10)))
		{
			__LIB_1__::func_148(&(uParam0->f_10));
		}
		else if (__LIB_0__::func_264(&(uParam0->f_10)) >= 3f)
		{
			if (uParam0->f_3 == 1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_448(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_75(&(uParam0->f_16)))
	{
		__LIB_1__::func_148(&(uParam0->f_16));
	}
	else if (__LIB_0__::func_265(&(uParam0->f_16)) > IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_449(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;
	switch (uParam0->f_19)
	{
		case 0:
			uParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			__LIB_1__::func_148(&(uParam0->f_13));
			uParam0->f_19 = 1;
			uParam0->f_1 = fParam3;
			break;
		case 1:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
				if (fVar0 == 0f)
				{
					fParam3 = 4f;
				}
				else if (fVar0 == 1f)
				{
					fParam3 = 20f;
				}
				else if (fVar0 > 1f && fVar0 <= 1.5f)
				{
					fParam3 = 12f;
				}
				else if (fVar0 > 1.5f && fVar0 <= 2f)
				{
					fParam3 = 10f;
				}
				else
				{
					fParam3 = 10f;
				}
			}
			if (__LIB_0__::func_265(&(uParam0->f_13)) > fParam3)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, uParam0->f_7, IntToFloat(iParam2), IntToFloat(iParam2), 2f, false, true, 0))
				{
					uParam0->f_19 = 2;
				}
				else
				{
					uParam0->f_19 = 0;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, uParam0->f_7, IntToFloat(iParam2), IntToFloat(iParam2), IntToFloat(iParam2), false, true, 0))
			{
				return true;
			}
			else
			{
				uParam0->f_19 = 0;
			}
			break;
	}
	return false;
}

int func_450(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

int func_451(var uParam0)
{
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		__LIB_1__::func_283(&(uParam0->f_1), 0);
		if (__LIB_1__::func_285(&(uParam0->f_1), 1.5f))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return 1;
		}
	}
	return 0;
}

void func_452(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_281(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_2__::func_451(iParam0, 0);
		}
	}
}

void func_453(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(iParam0, 13))
		{
			if (bParam2)
			{
				__LIB_3__::func_515(iParam0, 0, 0);
			}
			__LIB_1__::func_471(iParam0, 13);
		}
	}
	else if (__LIB_1__::func_489(iParam0, 13))
	{
		__LIB_1__::func_491(iParam0, 13);
	}
}

void func_454(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(iParam0, 4))
		{
			__LIB_1__::func_281(&(iParam0->f_6), 1, 1);
			__LIB_1__::func_471(iParam0, 4);
		}
	}
	else if (__LIB_1__::func_489(iParam0, 4))
	{
		__LIB_1__::func_491(iParam0, 4);
		__LIB_1__::func_471(iParam0, 14);
	}
}

int func_455(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_4__::func_94(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_456(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_4__::func_94(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_457(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_4__::func_94(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_458(int iParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;
	if (!__LIB_0__::func_139(*iParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*iParam0 = __LIB_2__::func_512(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			__LIB_2__::func_450(*iParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*iParam0 = __LIB_2__::func_513(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (__LIB_0__::func_86(vParam2))
			{
				return false;
			}
			*iParam0 = __LIB_1__::func_282(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			__LIB_1__::func_483(*iParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
			{
				__LIB_1__::func_221(*iParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			__LIB_1__::func_382(*iParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (__LIB_0__::func_572(*iParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(*iParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(*iParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
		{
			__LIB_1__::func_221(*iParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_0__::func_139(*iParam0))
			{
				__LIB_1__::func_281(iParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && __LIB_1__::func_732(*iParam0, 1)) || (bParam17 && __LIB_0__::func_567(*iParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				__LIB_1__::func_432(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				__LIB_1__::func_616(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		__LIB_1__::func_281(iParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_459(int iParam0, int iParam1, var uParam2)
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
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_182(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
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
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @778; //curOff = 585
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_460(int iParam0)
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
		__LIB_4__::func_297(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_461(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_4__::func_297(50);
			}
			else
			{
				__LIB_4__::func_297(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_4__::func_297(51);
			}
			else
			{
				__LIB_4__::func_297(49);
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
			__LIB_4__::func_297(24);
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

void func_462()
{
	__LIB_3__::func_445(&Local_14);
}

void func_463(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_455())
	{
		__LIB_3__::func_611(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && __LIB_0__::func_774(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = __LIB_0__::func_356(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!__LIB_0__::func_457(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = __LIB_0__::func_54(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || __LIB_0__::func_192(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0));
	}
	__LIB_2__::func_368(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_464(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	if (bParam1 && PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return 1;
	}
	if (!__LIB_2__::func_364(*uParam0, 0, 0, 0))
	{
		__LIB_2__::func_344(uParam0);
		return 1;
	}
	return 0;
}

void func_465(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	__LIB_4__::func_124(48);
	__LIB_0__::func_703(0, -1);
}

void func_466(int iParam0)
{
	int iVar0;
	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			__LIB_4__::func_124(48);
		}
	}
}

void func_467(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
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
		__LIB_4__::func_123(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			__LIB_4__::func_123(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_468(int iParam0, int iParam1, int iParam2)
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
				__LIB_4__::func_127(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			__LIB_4__::func_127(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			__LIB_4__::func_127(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			__LIB_4__::func_127(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			__LIB_4__::func_127(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			__LIB_4__::func_127(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			__LIB_4__::func_127(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			__LIB_4__::func_127(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			__LIB_4__::func_127(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			__LIB_4__::func_127(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			__LIB_4__::func_127(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			__LIB_4__::func_127(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			__LIB_4__::func_127(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!__LIB_1__::func_202())
			{
				__LIB_4__::func_127(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			__LIB_4__::func_127(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			__LIB_4__::func_127(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			__LIB_4__::func_127(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			__LIB_4__::func_127(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			__LIB_4__::func_127(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			__LIB_4__::func_127(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			__LIB_4__::func_127(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			__LIB_4__::func_127(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			__LIB_4__::func_127(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			__LIB_4__::func_127(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			__LIB_4__::func_127(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			__LIB_4__::func_127(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_469(int iParam0, int iParam1)
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
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
						__LIB_4__::func_124(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
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
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_470(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_4__::func_461(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_4__::func_461(iParam1, 1);
		__LIB_3__::func_871(iParam0);
	}
}

int func_471(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 2097152))
		{
			if (__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
		else if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 256))
		{
			if (!__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
	}
	return __LIB_4__::func_404(iParam0);
}

void func_472(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 1;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 1;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 1;
			*uParam2 = 5;
			break;
	}
}

void func_473()
{
	STREAMING::REQUEST_MODEL(joaat("CHUCKWAGON000X"), false);
}

void func_474(int iParam0)
{
	char* sVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		sVar0 = "lose_honor_steal_vehicle";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

bool func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (VEHICLE::_IS_DRAFT_VEHICLE(*iParam0))
		{
			if (VEHICLE::_0xA19447D83294E29F(*iParam0, &iVar0, &iVar1))
			{
				if (iVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_476(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*uParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::_IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*uParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

void func_477(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_2 = -1;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
}

bool func_478(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	if (*iParam1 != *iParam2)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= *iParam1)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam1)
	{
		iParam6 = (*iParam1 - 1);
	}
	if (__LIB_4__::func_225(uParam0, 1))
	{
		iVar0 = iParam5;
		while (iVar0 <= iParam6)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*iParam2)[iVar0]) && (iParam1[iVar0 /*32*/])->f_1 != 0)
			{
				(*iParam2)[iVar0] = __LIB_3__::func_827(uParam0, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD((*iParam2)[iVar0]))
				{
					if ((iParam1[iVar0 /*32*/])->f_12 != 0)
					{
						(iParam1[iVar0 /*32*/])->f_11 = __LIB_3__::func_827(uParam0, iVar0 + 15);
						__LIB_4__::func_204(&((iParam1[iVar0 /*32*/])->f_11), iParam1[iVar0 /*32*/], bParam3, 1);
						ENTITY::_SET_ENTITY_HEALTH((iParam1[iVar0 /*32*/])->f_11, 400, 0);
						PED::_SET_RANDOM_OUTFIT_VARIATION((iParam1[iVar0 /*32*/])->f_11, true);
						PED::_SET_PED_BODY_COMPONENT((iParam1[iVar0 /*32*/])->f_11, joaat("META_HORSE_SADDLE_ONLY"));
						PED::_UPDATE_PED_VARIATION((iParam1[iVar0 /*32*/])->f_11, true, true, true, true, false);
						if ((iParam1[iVar0 /*32*/])->f_13)
						{
							PED::_SET_PED_ON_MOUNT((*iParam2)[iVar0], (iParam1[iVar0 /*32*/])->f_11, -1, true);
						}
						PED::SET_PED_CONFIG_FLAG((*iParam2)[iVar0], 307, true);
					}
					if ((iParam1[iVar0 /*32*/])->f_10)
					{
						PED::_0x0FB1BA7FF73B41E1((*iParam2)[iVar0], (iParam1[iVar0 /*32*/])->f_4, 0);
					}
					if (bParam4)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&((iParam1[iVar0 /*32*/])->f_23)))
						{
							__LIB_2__::func_133((*iParam2)[iVar0], &((iParam1[iVar0 /*32*/])->f_23), 0);
						}
					}
					if (__LIB_3__::func_841(&((iParam1[iVar0 /*32*/])->f_22)))
					{
						GRAPHICS::_0xDFCE8CE9F3EBE93F((*iParam2)[iVar0]);
					}
					__LIB_4__::func_204(iParam2[iVar0], iParam1[iVar0 /*32*/], bParam3, 0);
				}
			}
			iVar0++;
		}
		__LIB_3__::func_828(uParam0);
		return true;
	}
	return false;
}

bool func_479(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!PED::DOES_GROUP_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_GROUP(iParam1);
		if (PED::DOES_GROUP_EXIST(*iParam0))
		{
			PED::SET_GROUP_FORMATION(*iParam0, iParam2);
			PED::_0xD5BD1B5318A81994(*iParam0, iParam3);
			return true;
		}
	}
	return false;
}

void func_480(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
}

bool func_481(var uParam0, int iParam1)
{
	char* sVar0;
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, sVar0);
}

bool func_482(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (((TASK::GET_IS_TASK_ACTIVE(iParam0, 3) || __LIB_0__::func_163(iParam0, -2017877118)) || __LIB_0__::func_163(iParam0, 242628503)) || __LIB_0__::func_163(iParam0, -1162159953))
	{
		return true;
	}
	return false;
}

bool func_483(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0]))
		{
		}
		else if (__LIB_0__::func_48(iParam0, (*uParam1)[iVar0], fParam2, bParam3))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_484(int iParam0, int iParam1)
{
	if (ENTITY::_0x61914209C36EFDDB(iParam0) == 7)
	{
		if (__LIB_3__::func_624(iParam1) == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_485(var uParam0, int iParam1, bool bParam2)
{
	MISC::SET_BIT(&(uParam0->f_8), 4);
	uParam0->f_15[4] = iParam1;
	if (__LIB_3__::func_952(uParam0, iParam1))
	{
		return __LIB_3__::func_935(uParam0, iParam1);
	}
	else
	{
		__LIB_3__::func_637(uParam0, 4, 0);
		return 0;
	}
	if (bParam2)
	{
		__LIB_3__::func_947(uParam0, 4, 1);
	}
	return 1;
}

void func_486(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!__LIB_1__::func_205(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = __LIB_3__::func_249(uParam0, bVar0);
		__LIB_4__::func_360(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (__LIB_3__::func_280(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
}

void func_487(int* iParam0)
{
	__LIB_2__::func_593(iParam0, &(iParam0->f_21));
}

void func_488(var uParam0, bool bParam1, bool bParam2)
{
	__LIB_2__::func_526(&(uParam0->f_21), bParam1, bParam2);
}

bool func_489(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bVar1 = false;
	fVar2 = __LIB_3__::func_249(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar1 = true;
		fVar3 = __LIB_0__::func_514(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				__LIB_4__::func_360(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			__LIB_4__::func_360(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (__LIB_3__::func_280(&(uParam0->f_121), iParam4, fParam1))
		{
			__LIB_3__::func_164(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_490(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 0);
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 1);
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 2);
	}
	else
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
		}
	}
}

bool func_491(bool bParam0)
{
	var uVar0;
	var uVar1;
	if (__LIB_4__::func_476(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

int func_492(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;
	iParam0->f_4 = 0;
	switch (*iParam0)
	{
		case 0:
			__LIB_4__::func_477(iParam0);
			iParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(iParam0->f_1, 15);
			*iParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_1, &(iParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (iParam0->f_2 == 0)
				{
					*iParam0 = 3;
					return 1;
				}
				else
				{
					iParam0->f_4 = 1;
					*iParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_1, &(iParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*iParam0 = 3;
			}
			break;
		case 3:
			*iParam0 = 0;
			break;
	}
	return 0;
}

void func_493(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_4__::func_179((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_4__::func_381(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

struct<4> func_494(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	struct<4> Var4;
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0, sParam1, &Var4, !MISC::IS_STRING_NULL_OR_EMPTY(sParam2), sParam2, 2))
	{
		Var0 = { Var4 };
		Var0.f_3 = Var4.f_3.f_2;
	}
	return Var0;
}

void func_495(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

bool func_496(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return true;
	}
	return false;
}

bool func_497()
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_927() || __LIB_2__::func_762())
		{
			return true;
		}
	}
	else if (__LIB_1__::func_14(1, 255))
	{
		return true;
	}
	return false;
}

void func_498(float fParam0)
{
	if (__LIB_0__::func_51(&(fParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!__LIB_4__::func_91(fParam0) || __LIB_0__::func_51(&(fParam0->f_3), 4)) && !__LIB_0__::func_51(&(fParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_BEHIND"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (__LIB_4__::func_141(fParam0))
	{
		__LIB_1__::func_539();
	}
	if (!__LIB_0__::func_51(&(fParam0->f_3), 16))
	{
		if (__LIB_0__::func_899(fParam0))
		{
			if (__LIB_1__::func_592(fParam0) < fParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

int func_499(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_500(char* sParam0, int iParam1)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2414.514f, 1766.023f, 88.66162f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, sParam0))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sParam0))
			{
				if (iParam1 == 1)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
				}
			}
			else if (iParam1 == 0)
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, true);
			}
			return 1;
		}
		INTERIOR::UNPIN_INTERIOR(iVar0);
	}
	return 0;
}

int func_501(int iParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = __LIB_2__::func_119(vVar0, vVar3.x, sParam1, fParam2, sParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_502(var uParam0)
{
	if (__LIB_3__::func_211(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		__LIB_4__::func_238(uParam0->f_3);
		__LIB_3__::func_309(uParam0, 0, 1);
		__LIB_3__::func_404(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		__LIB_0__::func_703(0, 0);
		return true;
	}
	return false;
}

int func_503(int iParam0, int iParam1)
{
	return __LIB_4__::func_440(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

void func_504(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || __LIB_0__::func_1(Global_1935630, 16384)) || __LIB_0__::func_1(Global_1935630, 8388608))
	{
		return;
	}
	if (__LIB_1__::func_896(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = __LIB_1__::func_927();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::_IS_POSITION_INSIDE_VOLUME((*uParam0)[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!__LIB_0__::func_65(uParam0[iVar3 /*3*/], 1) && __LIB_1__::func_120(iParam1)) && !__LIB_1__::func_897(iParam1, 16))
							{
								__LIB_2__::func_818(iParam1, __LIB_1__::func_898(), -1, 0, -1, 0);
								__LIB_0__::func_47(uParam0[iVar3 /*3*/], 1);
							}
							__LIB_2__::func_758(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_923() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			__LIB_1__::func_924();
			__LIB_1__::func_309(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	__LIB_1__::func_899(bVar0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_900((iParam1 == __LIB_0__::func_61() && bVar0));
	}
}

bool func_505(var uParam0)
{
	return uParam0->f_2501;
}

bool func_506(var uParam0)
{
	return uParam0->f_2500;
}

void func_507(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_508()
{
	struct<12> Var0;
	int iVar12;
	iVar12 = 0;
	while (iVar12 < Global_43619)
	{
		Global_43619[iVar12 /*12*/] = { Var0 };
		iVar12++;
	}
}

void func_509(bool bParam0)
{
	Global_1956584 = bParam0;
	if (bParam0)
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(false, 0);
	}
	else
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(true, 0);
	}
}

void func_510(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::_0x6AC4AF46A6B8DFB2(bParam0);
}

bool func_511()
{
	return Global_1572864.f_14;
}

bool func_512()
{
	return Global_1572864.f_13;
}

int func_513()
{
	return Global_1572864.f_9;
}

void func_514(var uParam0)
{
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
	{
		case 31:
			MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 45f, false);
			break;
	}
}

void func_515()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_UNARMED_ASSAULT"), 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_TRAMPLE"), 4, 0, -1);
}

void func_516(bool bParam0, bool bParam1)
{
	if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
	{
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			if (Global_1935689.f_1 || Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

void func_517(int iParam0)
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
}

void func_518(var uParam0)
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
	uParam0->f_849 = { Var1 };
	StringCopy(&(uParam0->f_849), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_865)
	{
		uParam0->f_865[iVar0 /*18*/] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1912)
	{
		uParam0->f_1912[iVar0 /*10*/] = { Var76 };
		iVar0++;
	}
	uParam0->f_2073 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1406)
	{
		uParam0->f_1406[iVar0 /*41*/] = { Var35 };
		uParam0->f_1735[iVar0 /*22*/] = { Var86 };
		iVar0++;
	}
	uParam0->f_2074 = -1;
	uParam0->f_2155 = { Global_36 };
	uParam0->f_2158 = 0;
	uParam0->f_2159 = 0;
	uParam0->f_2078 = -1;
	uParam0->f_2079 = -1f;
	uParam0->f_2054 = 0;
	uParam0->f_2056 = 0;
	uParam0->f_2056.f_1 = 0;
	uParam0->f_2293 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
	}
}

void func_519()
{
	Global_1310750.f_16072 = 0;
}

void func_520(var uParam0)
{
	PLAYER::_0xEBFF94328FF7A18A(-3.141593f, 3.141593f);
	if (HUD::_UIPROMPT_IS_VALID(uParam0->f_11))
	{
		HUD::_UIPROMPT_DELETE(uParam0->f_11);
	}
}

void func_521(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/].f_2 = iParam1;
}

bool func_522(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return iParam1;
		case 3:
			return iParam1;
		case 11:
		case 12:
		case 13:
		case 14:
			return true;
		case 53:
			return true;
		case 24:
			return iParam1;
		case 23:
			return iParam1;
		case 21:
			return iParam1;
		case 26:
			return iParam1;
		case 35:
			return true;
		case 34:
			return iParam1;
		case 32:
			return iParam1;
		case 29:
			return true;
		case 31:
			return true;
		case 37:
			return iParam1;
		case 39:
			return iParam1;
		case 42:
			return iParam1;
		case 43:
			return iParam1;
		case 44:
			return iParam1;
		case 46:
			return iParam1;
		case 54:
			return true;
		case 50:
			return true;
		case 51:
			return iParam1;
		case 52:
			return true;
		case 49:
			return true;
		case 58:
			return iParam1;
		case 57:
			return true;
		case 59:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_523(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

int func_525()
{
	return 26;
}

void func_526(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_527(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_528(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_529(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_530()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

bool func_531(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_64, iParam1);
}

void func_532(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

int func_533()
{
	return Global_1572864.f_8;
}

Vector3 func_534(var uParam0)
{
	return uParam0->f_862;
}

void func_535(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_536(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_537(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_538(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_539(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_540(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_541(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if ((*uParam0)[iVar0 /*3*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<4> func_542(int iParam0)
{
	struct<4> Var0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return Var0;
	}
	return Global_1835011[iParam0 /*74*/].f_3;
}

int func_543(int iParam0)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

bool func_544(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = 5;
			*iParam2 = 8;
			break;
		case 14:
			*iParam1 = 9;
			*iParam2 = 17;
			break;
		case 16:
			*iParam1 = 9;
			*iParam2 = 18;
			break;
		case 33:
			*iParam1 = 17;
			*iParam2 = 18;
			break;
		case 29:
			*iParam1 = 9;
			*iParam2 = 17;
			break;
		case 30:
			*iParam1 = 6;
			*iParam2 = 18;
			break;
		case 20:
		case 26:
		case 37:
		case 40:
		case 54:
			*iParam1 = 22;
			*iParam2 = 5;
			break;
		case 11:
			*iParam1 = 12;
			*iParam2 = 18;
			break;
		default:
			return false;
	}
	return true;
}

bool func_545()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			if (Global_1934765.f_39[iVar0] != Global_40.f_283[iVar0])
			{
				return true;
			}
		}
		else if (Global_1934765.f_39[iVar0] != Global_1058888.f_40567[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_546(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

float func_547(var uParam0)
{
	return uParam0->f_794;
}

Vector3 func_548(var uParam0)
{
	return uParam0->f_865;
}

float func_549(var uParam0)
{
	return uParam0->f_868;
}

void func_550(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_804);
	}
}

bool func_551(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_552(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_553(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_554(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 65)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_555(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_556(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_557(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_2495));
}

bool func_558(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_2495));
}

int func_559(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

void func_560(var uParam0)
{
	int iVar0;
	int iVar1;
	CAM::DESTROY_CAM(uParam0->f_2, false);
	uParam0->f_2 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	iVar0 = 0;
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	if (iVar1 > uParam0->f_6)
	{
		iVar0 = (iVar0 + (iVar1 - uParam0->f_6));
	}
	else
	{
		iVar0 = (iVar0 + (uParam0->f_6 - iVar1));
	}
	iVar0 *= 1000;
	iVar0 += 3000;
	iVar0 = (iVar0 / 2);
	CAM::ADD_CAM_SPLINE_NODE(uParam0->f_2, uParam0->f_8, uParam0->f_8.f_3, iVar0, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(uParam0->f_2, uParam0->f_8.f_6, uParam0->f_8.f_9, iVar0, 3, 2);
	CAM::SET_CAM_FOV(uParam0->f_2, uParam0->f_8.f_12);
	CAM::SET_CAM_ACTIVE(uParam0->f_2, true);
}

var func_561(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_0x2024F4F333095FB1(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_562(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_563(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

int func_564(int iParam0)
{
	int iVar0;
	if (iParam0 <= -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (iVar0 == iParam0 || iVar0 == 8)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_565(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_566(var uParam0)
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false));
}

char* func_567()
{
	return "cutDeleteMe";
}

void func_568(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_806), sParam1, 64);
}

float func_569(var uParam0)
{
	return uParam0->f_795;
}

void func_570(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_804, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &(uParam0->f_822[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_804, &(uParam0->f_822[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_804, &(uParam0->f_822[iVar0 /*9*/]));
		}
		uParam0->f_822[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

struct<8> func_571(var uParam0)
{
	return uParam0->f_806;
}

struct<16> func_572(int iParam0)
{
	struct<16> Var0;
	Var0 = { 0f, 0f, 0f };
	Var0.f_12 = 50f;
	switch (iParam0)
	{
		case 0:
			Var0 = { -662.0871f, 1941.715f, 283.2546f };
			Var0.f_3 = { 10.7841f, 0f, 123.6535f };
			break;
		case 14:
			Var0 = { -233.8414f, 700.0875f, 119.3323f };
			Var0.f_3 = { 12.8748f, 0f, -173.3047f };
			break;
		case 16:
			Var0 = { 830.1321f, -295.2338f, 97.5959f };
			Var0.f_3 = { 18.3589f, 0f, -101.0821f };
			break;
		case 26:
			Var0 = { 1038.921f, -1770.922f, 59.7985f };
			Var0.f_3 = { 3.1623f, 0f, 65.4982f };
			break;
		case 33:
			Var0 = { 2653.284f, -1274.411f, 58.6377f };
			Var0.f_3 = { 43.34f, 0f, -154.5395f };
			break;
		case 28:
			Var0 = { 2398.713f, -1207.737f, 53.7741f };
			Var0.f_3 = { 20.3272f, 0f, 125.8611f };
			break;
		case 30:
			Var0 = { 2615.528f, -1028.211f, 54.2337f };
			Var0.f_3 = { 8.9332f, 0f, 135.6429f };
			break;
		case 37:
			Var0 = { 2612.871f, -1277.661f, 64.2123f };
			Var0.f_3 = { 19.8571f, 0f, 133.3145f };
			break;
		case 40:
			Var0 = { 3923.916f, -3192.353f, 60.3056f };
			Var0.f_3 = { 5.1463f, 0f, 107.0246f };
			break;
		case 54:
			Var0 = { 2895.34f, 1402.235f, 71.9482f };
			Var0.f_3 = { 18.5925f, 0f, 104.3773f };
			break;
	}
	Var0.f_6 = { Var0 };
	Var0.f_9 = { Var0.f_3 };
	return Var0;
}

void func_573(int iParam0)
{
	if (iParam0 < 6)
	{
		Global_1899516 = 8;
		return;
	}
	if (iParam0 < 12)
	{
		Global_1899516 = 1;
		return;
	}
	if (iParam0 < 18)
	{
		Global_1899516 = 2;
		return;
	}
	Global_1899516 = 4;
}

void func_574(var uParam0, int iParam1)
{
	uParam0->f_2073 = iParam1;
}

bool func_575(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_865[iVar0 /*18*/].f_17 == 1 && uParam0->f_865[iVar0 /*18*/].f_2 == 4) && uParam0->f_865[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_576(var uParam0)
{
	return uParam0->f_2;
}

bool func_577(var uParam0, int iParam1)
{
	return (uParam0->f_2056.f_1 && iParam1) != 0;
}

void func_578(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_2311))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_2311);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_2311);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_579(var uParam0, int iParam1)
{
	return (uParam0->f_2055 && iParam1) != 0;
}

void func_580(var uParam0)
{
	uParam0->f_2055 = 0;
}

bool func_581(var uParam0)
{
	if (uParam0->f_2160)
	{
		return false;
	}
	return uParam0->f_2159;
}

void func_582()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_583(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_865[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_584(var uParam0, int iParam1)
{
	return (uParam0->f_799 && iParam1) != 0;
}

int func_585(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_804) * 1000f));
}

int func_586(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_804) * 1000f));
}

void func_587(float fParam0, float fParam1, float fParam2, float fParam3)
{
	VEHICLE::_0xF5FFB08976911B50(fParam0, fParam1, fParam2, fParam3);
	Global_1894899.f_186 = 1;
}

int func_588(int iParam0)
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
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 524288;
		case 20:
			return 1048576;
		case 21:
			return 2097152;
		case 22:
			return 4194304;
		case 23:
			return 8388608;
		case 24:
			return 16777216;
		case 25:
			return 33554432;
	}
	return 0;
}

void func_589(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	}
	uParam0->f_1 = 0;
}

void func_590(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_3, 3))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REMOVE_WAYPOINT_RECORDING(*uParam0);
				break;
			case 1:
				VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
		}
	}
	uParam0->f_3 = 0;
}

void func_591(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_ANIM_DICT(*uParam0);
	}
	uParam0->f_1 = 0;
}

void func_592(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		STREAMING::_0x9F348DE670423460(*uParam0);
	}
	uParam0->f_1 = 0;
}

void func_593(var uParam0)
{
	if (__LIB_0__::func_1(*uParam0, 3))
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	*uParam0 = 0;
}

void func_594(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_2, 3))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
		{
			if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
			}
		}
	}
	uParam0->f_2 = 0;
}

void func_595(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_2, 3))
	{
		if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_1))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_1);
		}
	}
	uParam0->f_2 = 0;
}

void func_596(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_3, 3))
	{
		WEAPON::_0xC3896D03E2852236(*uParam0);
	}
	uParam0->f_3 = 0;
}

void func_597(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
	uParam0->f_1 = 0;
}

void func_598(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		STREAMING::_REMOVE_IMAP(*uParam0);
	}
	uParam0->f_1 = 0;
}

void func_599(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_2, 3))
	{
		AUDIO::_0x9D746964E0CF2C5F(*uParam0, uParam0->f_1);
	}
	uParam0->f_2 = 0;
}

void func_600(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 3))
	{
		STREAMING::_REMOVE_MOVE_NETWORK_DEF(*uParam0);
	}
	uParam0->f_1 = 0;
}

bool func_601()
{
	return Global_1955569.f_866;
}

char* func_602(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_603(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (PED::_0x93FFD92F05EC32FD(uParam0->f_135[iVar0 /*2*/]))
		{
			PED::_0x13E7320C762F0477(uParam0->f_135[iVar0 /*2*/]);
		}
		uParam0->f_135[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1.f_1[iVar0 /*3*/] = { vVar1 };
		iVar0++;
	}
	__LIB_0__::func_193(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

int func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_790(0);
	__LIB_0__::func_557(&(Global_1946804.f_964), iVar1, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
	{
		return -1;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &(Global_1946804.f_964), 2049745650))
	{
		return -1;
	}
	return __LIB_0__::func_461(iVar0);
}

int func_605(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/];
}

struct<4> func_606(var uParam0)
{
	return uParam0->f_800;
}

struct<8> func_607(var uParam0)
{
	return uParam0->f_814;
}

char* func_608(int iParam0)
{
	switch (iParam0)
	{
		case 28:
			return "ALLY_HERCULE";
		case 30:
			return "ALLY_LEON";
		case 29:
			return "ALLY_BAPTISTE";
		case 31:
			return "ALLY_RAINSFALL";
		case 35:
			return "ALLY_PAYTAH";
		case 32:
			return "ALLY_MONROE";
		case 33:
			return "ALLY_ARCHIBALD";
		case 34:
			return "ALLY_LEIGHGRAY";
		case 36:
			return "ALLY_CLAUDIA";
		case 37:
			return "ALLY_REDSHIRT1";
		case 38:
			return "ALLY_REDSHIRT2";
		case 39:
			return "ALLY_REDSHIRT3";
		case 41:
			return "ALLY_TOM_DICKENS";
		default:
			break;
	}
	return "";
}

bool func_609(var uParam0)
{
	return *uParam0 == *uParam0;
}

bool func_610(struct<2> Param0, int iParam2)
{
	if (!__LIB_3__::func_358(Param0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	return ITEMSET::IS_IN_ITEMSET(iParam2, Param0);
}

char* func_611()
{
	return "allyEnum";
}

void func_612(var uParam0, int iParam1)
{
	uParam0->f_2056.f_1 = (uParam0->f_2056.f_1 || iParam1);
}

void func_613()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("BANDANA"));
	STREAMING::REMOVE_ANIM_DICT(__LIB_0__::func_199(1));
}

void func_614()
{
	if (MISC::IS_BIT_SET(Global_1357510, 4))
	{
	}
	else
	{
		MISC::SET_BIT(&Global_1357510, 0);
	}
}

void func_615(var uParam0, int iParam1)
{
	uParam0->f_2055 = (uParam0->f_2055 || iParam1);
}

char* func_616()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

void func_617(var uParam0, int iParam1)
{
	uParam0->f_2055 = (uParam0->f_2055 - (uParam0->f_2055 && iParam1));
}

void func_618(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_1406[iParam1 /*41*/].f_28 = 1;
		uParam0->f_2074 = iParam1;
		uParam0->f_2078 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_2159 = 1;
	}
}

void func_619(var uParam0, int iParam1)
{
	uParam0->f_2056.f_1 = (uParam0->f_2056.f_1 - (uParam0->f_2056.f_1 && iParam1));
}

int func_620(var uParam0)
{
	if (uParam0->f_2075 < 0 || uParam0->f_865[uParam0->f_2075 /*18*/].f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1912[uParam0->f_865[uParam0->f_2075 /*18*/].f_4 /*10*/].f_8;
}

void func_621(var uParam0, char[16] cParam1)
{
	uParam0->f_800 = { cParam1 };
}

void func_622(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

int func_623(char* sParam0)
{
	return sParam0->f_9;
}

int func_624(char* sParam0)
{
	return sParam0->f_10;
}

void func_625(var uParam0)
{
	uParam0->f_5 = { 0f, 0f, 0f };
}

bool func_626(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_6, iParam1);
}

int func_627(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (uParam0->f_12[iVar1 /*2*/] == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_628(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (uParam0->f_12[iVar1 /*2*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_629(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 1023)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			*iParam1 = 0;
			break;
		case 2:
			*iParam1 = 1;
			break;
		case 4:
			*iParam1 = 2;
			break;
		case 8:
			*iParam1 = 3;
			break;
		case 16:
			*iParam1 = 4;
			break;
		case 32:
			*iParam1 = 5;
			break;
		case 64:
			*iParam1 = 6;
			break;
		case 128:
			*iParam1 = 7;
			break;
		case 256:
			*iParam1 = 8;
			break;
		case 512:
			*iParam1 = 9;
			break;
		default:
			return false;
	}
	return true;
}

bool func_630(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

bool func_631()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_632(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_804, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_804, sParam1, iParam2, iParam3);
}

int func_633(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("CS_DUTCH"):
			return 0;
		case joaat("CS_JOHNMARSTON"):
			return 1;
		case joaat("CS_JAVIERESCUELLA"):
			return 2;
		case joaat("CS_BILLWILLIAMSON"):
			return 3;
		case joaat("CS_UNCLE"):
			return 4;
		case joaat("CS_HOSEAMATTHEWS"):
			return 5;
		case joaat("CS_MICAHBELL"):
			return 6;
		case joaat("CS_CHARLESSMITH"):
			return 7;
		case joaat("CS_SEAN"):
			return 8;
		case joaat("CS_LENNY"):
			return 9;
		case joaat("CS_JOSIAHTRELAWNY"):
			return 23;
		case joaat("CS_JACKMARSTON_TEEN"):
		case joaat("CS_JACKMARSTON"):
			return 14;
		case joaat("CS_ABIGAILROBERTS"):
			return 13;
		case joaat("CS_MRSADLER"):
			return 11;
		case joaat("CS_EAGLEFLIES"):
			return 26;
		case joaat("CS_HERCULE"):
			return 28;
		case joaat("CS_LEON"):
			return 30;
		case joaat("CS_BAPTISTE"):
			return 29;
		case joaat("CS_RAINSFALL"):
			return 31;
		case joaat("CS_PAYTAH"):
			return 35;
		case joaat("CS_CAPTAINMONROE"):
			return 32;
		case joaat("CS_ARCHIBALDJAMESON"):
			return 33;
		case joaat("CS_LEIGHGRAY"):
			return 34;
		case joaat("CS_TOMDICKENS"):
			return 41;
		case joaat("CS_MRPEARSON"):
			return 17;
		case joaat("CS_KIERAN"):
			return 10;
		case joaat("CS_MARYBETH"):
			return 15;
		case joaat("CS_MOLLYOSHEA"):
			return 16;
		case joaat("CS_LEOSTRAUSS"):
			return 18;
		case joaat("CS_SUSANGRIMSHAW"):
			return 19;
		case joaat("CS_KAREN"):
			return 20;
		case joaat("CS_REVSWANSON"):
			return 21;
		case joaat("CS_TILLY"):
			return 22;
	}
	return -1;
}

float func_634(int iParam0)
{
	if (TASK::IS_PED_SPRINTING(iParam0))
	{
		return 1f;
	}
	if (TASK::IS_PED_RUNNING(iParam0))
	{
		return 0.9f;
	}
	if (TASK::IS_PED_WALKING(iParam0))
	{
		return 0.8f;
	}
	return 0.7f;
}

bool func_635(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			return (Global_1357549.f_1494 && iParam0) != 0;
	}
	return false;
}

void func_636()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
}

int func_637(var uParam0)
{
	return uParam0->f_14;
}

bool func_638(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_865[iVar0 /*18*/].f_2 && uParam0->f_865[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_639(var uParam0, int iParam1)
{
	uParam0->f_26 = (uParam0->f_26 || iParam1);
}

void func_640(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<23> Var0;
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_3 = uParam1;
	Var0.f_4 = 14283;
	Var0.f_14 = uParam2;
	Var0.f_15 = uParam3;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

bool func_641()
{
	return ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35));
}

void func_642(var uParam0, int iParam1)
{
	uParam0->f_2279.f_1 = 0;
	uParam0->f_2279.f_3 = iParam1;
}

bool func_643(var uParam0, int iParam1)
{
	bool bVar0;
	uParam0->f_2279.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_2279.f_1), &(uParam0->f_2279));
	return bVar0;
}

bool func_644(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	uParam0->f_2279.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_2279));
	return bVar0;
}

bool func_645(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_2279.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_FLOAT(uParam2, &(uParam0->f_2279));
	return uVar0;
}

bool func_646(var uParam0, int iParam1, char[4] cParam2)
{
	var uVar0;
	uParam0->f_2279.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_2279));
	return uVar0;
}

void func_647(var uParam0, int iParam1)
{
	uParam0->f_9 = (uParam0->f_9 || iParam1);
}

bool func_648(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	uParam0->f_2279.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, &(uParam0->f_2279));
	return bVar0;
}

bool func_649(int iParam0)
{
	return (((iParam0 == joaat("PLAYER_ZERO") || iParam0 == joaat("PLAYER_ONE")) || iParam0 == joaat("PLAYER_TWO")) || iParam0 == joaat("PLAYER_THREE"));
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
	}
	return 0;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 8:
			return 5;
		case 10:
			return 7;
		case 12:
			return 8;
		case 13:
			return 9;
		case 14:
			return 10;
		case 15:
			return 11;
	}
	return 0;
}

var func_652(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_2279.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &(uParam0->f_2279));
	return uVar0;
}

void func_653(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2), iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				PED::DELETE_PED(&iVar1);
			}
			iVar0++;
		}
	}
}

void func_654(var uParam0)
{
	struct<8> Var0;
	uParam0->f_814 = { Var0 };
}

void func_655(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_822[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

int func_656(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (!__LIB_0__::func_407(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_657(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (uParam0->f_12[iVar1 /*2*/] == iParam1 && (iVar0 == 0 || uParam0->f_12[iVar1 /*2*/].f_1 < uParam0->f_12[iVar0 /*2*/].f_1))
		{
			iVar0 = iVar1;
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
	}
	return uParam0->f_12[iVar0 /*2*/].f_1;
}

void func_658(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_12[iVar0 /*2*/] == 0)
		{
			uParam0->f_12[iVar0 /*2*/].f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_12[iVar0 /*2*/] = iParam1;
			return;
		}
		iVar0++;
	}
}

bool func_659(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_822[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_660(int iParam0, int iParam1)
{
	Global_40.f_7731[iParam0 /*5*/].f_2 = iParam1;
}

bool func_661(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

bool func_662(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return false;
	}
	return true;
}

void func_663(int iParam0)
{
	Global_40.f_7748.f_4 = (Global_40.f_7748.f_4 - (Global_40.f_7748.f_4 && iParam0));
}

bool func_664(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

int func_665()
{
	return Global_40.f_7748.f_1;
}

void func_666(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

char* func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "leadinData/zones/zone(%i)";
		case 1:
			return ":x1";
		case 2:
			return ":y1";
		case 3:
			return ":z1";
		case 4:
			return ":x2";
		case 5:
			return ":y2";
		case 6:
			return ":z2";
		case 7:
			return ":edgex";
		case 8:
			return ":edgey";
		case 9:
			return ":edgez";
		case 10:
			return ":xhit";
		case 11:
			return ":yhit";
		case 12:
			return ":zhit";
		case 13:
			return ":height";
		case 14:
			return ":trig1";
		case 15:
			return ":trig2";
		case 16:
			return ":areaType";
		case 17:
			return ":moveBlend";
		case 18:
			return ":animBlend";
		case 19:
			return ":fCamZoom";
		case 20:
			return ":fDismount";
		case 21:
			return ":tlDialogueFile";
		case 22:
			return ":tlDialogueLabel";
		case 23:
			return ":iDialogueDelay";
		case 24:
			return ":bQuickStop";
		case 25:
			return ":nomount";
		case 26:
			return ":bAllowClimb";
		case 27:
			return ":bAllowWeapon";
		case 28:
			return ":bAllowCarry";
		case 29:
			return ":usevehicle";
		case 30:
			return ":bSwapWeapon";
		case 31:
			return ":fFixupBuffer";
		case 32:
			return ":bAllowBandana";
		case 33:
			return ":bPickupCarriable";
		case 34:
			return ":bAllowCrouch";
		case 35:
			return ":playlist";
		case 36:
			return ":bPlayerHasControl";
		case 37:
			return ":bStopToHolster";
		case 38:
			return ":bFixupPlayerEarly";
		case 39:
			return ":walkStopOptions";
		case 40:
			return ":fWalkStopHeading";
		case 41:
			return ":bAllowLasso";
		case 42:
			return ":bNoLetterbox";
		case 43:
			return ":index";
		case 44:
			return ":tele";
		case 45:
			return "leadinData/scenes/scene(%i)";
		case 46:
			return ":sceneName";
		case 47:
			return ":sceneIndex";
		case 48:
			return ":sceneRel";
		case 49:
			return ":sceneFoot";
		case 50:
			return "leadinData/entities/entity(%i)";
		case 51:
			return ":model";
		case 52:
			return ":tlVoiceID";
		case 53:
			return ":fVisible";
		case 54:
			return ":weapon";
		case 55:
			return ":forceinhand";
		case 56:
			return ":bDeleteDraftAnimals";
		case 57:
			return "leadinData/behaviours/behaviour(%i)";
		case 58:
			return ":zone";
		case 59:
			return ":when";
		case 60:
			return ":what";
		case 61:
			return ":who";
		case 62:
			return ":syncType";
		case 63:
			return ":loop";
		case 64:
			return ":pause";
		case 65:
			return ":master";
		case 66:
			return ":bezier";
		case 67:
			return ":bezheading";
		case 68:
			return ":fVisible";
		case 69:
			return ":useradoffset";
		case 70:
			return ":radoffset";
		case 71:
			return ":returnlook";
		case 72:
			return ":lookatwho";
		case 73:
			return ":behaviourtype";
		case 74:
			return ":lookatplayer";
		case 75:
			return ":animscene";
		case 76:
			return ":nonavmesh";
		case 77:
			return ":phaseplayerend";
		case 78:
			return ":lookblendin";
		case 79:
			return ":lookblendout";
		case 80:
			return ":foliagemod";
		case 81:
			return ":disableinitloop";
		case 82:
			return "leadinData/cutscenes/cutscene(%i)";
		case 83:
			return ":cutName";
		case 84:
			return ":cutPlaylist";
		case 85:
			return "leadinData/cameras/camera(%i)";
		case 86:
			return ":index";
		case 87:
			return ":bDisabled";
		case 88:
			return ":bUseRightCam";
		case 89:
			return ":bUseLeftCam";
		case 90:
			return ":bUseCenterCam";
		case 91:
			return ":bUseNewCam";
		case 92:
			return ":bFocusOnEntity";
		case 96:
			return ":sCameraDictionaryName";
		case 97:
			return ":sCameraRequestName";
		case 95:
			return ":iNewCamLookAt";
		case 93:
			return ":fNewCamFocusOffsetHorz";
		case 94:
			return ":fNewCamFocusOffsetVert";
		case 98:
			return "leadinData/prepzones/prepzone(%i)";
		case 99:
			return ":vOrigin";
		case 100:
			return ":vRotation";
		case 101:
			return ":vScale";
		case 102:
			return ":eType";
	}
	return "";
}

bool func_668(char* sParam0, int iParam1)
{
	return (sParam0->f_15 && iParam1) != 0;
}

int func_669(int iParam0)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return -1;
	}
	return iParam0;
}

int func_670(int iParam0)
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 1;
}

int func_671()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BANDANA")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_672(var uParam0, float fParam1, vector3 vParam2, vector3 vParam5)
{
	*uParam0 = fParam1;
	uParam0->f_4 = { vParam2 };
	uParam0->f_1 = { vParam5 };
}

Vector3 func_673(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_865[iParam1 /*18*/].f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 65)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_865[iParam1 /*18*/].f_3 == uParam0->f_3[iVar0 /*13*/].f_3)
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

int func_674(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 24f));
}

int func_675(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

bool func_676(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

void func_677(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		return;
	}
	if (Global_43891)
	{
		return;
	}
	WEAPON::_0xE9BD19F8121ADE3E(Global_35, iParam0);
}

bool func_678()
{
	return __LIB_0__::func_6(Global_1572864.f_8);
}

void func_679()
{
	__LIB_0__::func_403();
	__LIB_0__::func_404();
	__LIB_0__::func_405();
	__LIB_0__::func_406();
}

void func_680()
{
	Global_1894899.f_186 = 0;
	__LIB_0__::func_18();
}

Vector3 func_681(int iParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return vVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_9;
}

bool func_682()
{
	return __LIB_0__::func_128(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_683(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_734(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_3__::func_733(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, __LIB_3__::func_733(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, __LIB_3__::func_733(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, __LIB_3__::func_733(iParam0));
			}
		}
	}
	__LIB_3__::func_735(iParam0, 4);
	__LIB_3__::func_735(iParam0, 8);
	__LIB_3__::func_735(iParam0, 16);
}

void func_684(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_736(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(iParam0), __LIB_3__::func_733(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(iParam0), __LIB_3__::func_733(iParam0), 2, "");
		__LIB_3__::func_727(iParam0, 16);
	}
	else
	{
		if (__LIB_3__::func_736(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(iParam0), __LIB_3__::func_733(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(iParam0), __LIB_3__::func_733(iParam0), 0, "");
		}
		__LIB_3__::func_735(iParam0, 16);
	}
}

void func_685(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!__LIB_3__::func_736(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(iParam0), __LIB_3__::func_733(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_3__::func_736(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(iParam0), __LIB_3__::func_733(iParam0), 1, "");
		}
		__LIB_3__::func_727(iParam0, 8);
	}
	else
	{
		if (__LIB_3__::func_736(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(iParam0), __LIB_3__::func_733(iParam0), 0, "");
		}
		__LIB_3__::func_735(iParam0, 8);
	}
}

int func_686(int iParam0)
{
	if (__LIB_1__::func_958(&(Global_1109400.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_687(int iParam0)
{
	if (__LIB_1__::func_959(&(Global_1109400.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_688(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_178(iParam1);
	return (uParam0 && iVar0) != 0;
}

bool func_689(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		__LIB_0__::func_179(uParam0);
	}
	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_690(var uParam0)
{
	if (__LIB_0__::func_1(*uParam0, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		__LIB_0__::func_180(uParam0);
	}
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		__LIB_0__::func_7(uParam0, 2);
		return true;
	}
	return false;
}

void func_691(var uParam0)
{
	char* sVar0;
	if (!__LIB_0__::func_1(uParam0->f_2, 1))
	{
		if (__LIB_0__::func_286(uParam0))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
			{
				sVar0 = __LIB_0__::func_140(ENTITY::GET_ENTITY_MODEL(Global_35));
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, sVar0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_zero") && __LIB_0__::func_113())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_three") && __LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				__LIB_0__::func_7(&(uParam0->f_2), 1);
			}
		}
	}
}

void func_692(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_603(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

bool func_693(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		__LIB_0__::func_275(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_694(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_3, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_3, 1))
	{
		__LIB_0__::func_276(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				__LIB_0__::func_7(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				__LIB_0__::func_7(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_695(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		__LIB_0__::func_277(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_696(var uParam0, int iParam1)
{
	if (__LIB_0__::func_1(uParam0->f_1, 2))
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1, true, false))
	{
		return false;
	}
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		__LIB_0__::func_278(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, *uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_697(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_2, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_2, 1))
	{
		__LIB_0__::func_279(uParam0);
	}
	if (PROPSET::_HAS_PROPSET_LOADED(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_698(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_3, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_3, 1))
	{
		__LIB_0__::func_280(uParam0);
	}
	if (WEAPON::_0xFF07CF465F48B830(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_699(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		__LIB_0__::func_281(uParam0);
	}
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_700(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		__LIB_0__::func_283(uParam0);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_701(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_2, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_2, 1))
	{
		__LIB_0__::func_284(uParam0);
	}
	if (AUDIO::_0xE368E8422C860BA7(*uParam0, uParam0->f_1, -2))
	{
		__LIB_0__::func_7(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_702(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_1, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_1, 1))
	{
		__LIB_0__::func_285(uParam0);
	}
	if (STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(*uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

void func_703(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(iVar0, 0, 0f);
}

void func_704(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
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
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

void func_705(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 16))
		{
			__LIB_0__::func_289(iParam0, 16, 0);
		}
	}
	__LIB_0__::func_289(iParam0, 1, bParam1);
}

void func_706(int iParam0, var uParam1)
{
	*iParam0 = 0;
	if (!__LIB_0__::func_1(uParam1, 8))
	{
		if (__LIB_0__::func_1(uParam1, 1))
		{
			*iParam0 = 1;
		}
		else if (__LIB_0__::func_1(uParam1, 4))
		{
			*iParam0 = 4;
		}
		else if (__LIB_0__::func_1(uParam1, 2))
		{
			*iParam0 = 2;
		}
	}
}

void func_707(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (__LIB_0__::func_27(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (__LIB_0__::func_27(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (__LIB_0__::func_27(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			CAM::_0x6A4D224FC7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
		{
			CAM::_0xB8B207C34285E978(sParam0);
		}
	}
}

bool func_708(int iParam0)
{
	return __LIB_1__::func_14(23, iParam0);
}

void func_709(struct<16> Param0, int iParam16)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603.f_161 >= 10)
	{
		return;
	}
	if (!__LIB_0__::func_27(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || __LIB_1__::func_929(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			Global_1934603[iVar0 /*16*/] = { Param0 };
			Global_1934603.f_161++;
			__LIB_2__::func_768(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_710(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = __LIB_0__::func_710(*iParam0);
	iVar1 = __LIB_0__::func_39(*iParam0);
	iVar2 = __LIB_0__::func_40(*iParam0);
	iVar3 = __LIB_0__::func_41(*iParam0);
	iVar4 = __LIB_0__::func_42(*iParam0);
	iVar5 = __LIB_0__::func_43(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = __LIB_0__::func_44(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	__LIB_1__::func_159(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_711(bool bParam0, bool bParam1)
{
	if (!__LIB_0__::func_139(Global_43801))
	{
		Global_43801 = __LIB_1__::func_877("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		Global_1945938[Global_43801 /*18*/].f_16 = Global_23[3];
		__LIB_1__::func_382(Global_43801, 0, 1);
		__LIB_0__::func_633(Global_43801, 6, 1);
		if (bParam1)
		{
			__LIB_0__::func_633(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!__LIB_0__::func_572(Global_43801, 0))
		{
			__LIB_1__::func_221(Global_43801, 1, 1);
		}
		if (__LIB_0__::func_486(Global_43801, 1) != 0f && bParam0)
		{
			__LIB_1__::func_382(Global_43801, 1, 1);
		}
		else
		{
			__LIB_1__::func_382(Global_43801, 0, 1);
		}
		return __LIB_0__::func_567(Global_43801, 1);
	}
	return false;
}

void func_712(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!bParam4)
	{
		if (__LIB_0__::func_296(0, 0, 1))
		{
			return;
		}
	}
	if (Global_43837 >= 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]))
		{
			Global_43806[iVar0 /*6*/] = iParam0;
			Global_43806[iVar0 /*6*/].f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_43806[iVar0 /*6*/].f_3 = iParam1;
			Global_43806[iVar0 /*6*/].f_4 = iParam2;
			Global_43806[iVar0 /*6*/].f_5 = iParam3;
			Global_43837++;
			return;
		}
		iVar0++;
	}
}

void func_713(int iParam0, var uParam1)
{
	if (!__LIB_2__::func_824(iParam0))
	{
		return;
	}
	if (*uParam1 == joaat("TSTAG_NO_TAGS"))
	{
		return;
	}
	__LIB_4__::func_295(iParam0, *uParam1, 0);
	__LIB_3__::func_747(uParam1);
	Global_1935183.f_24 = 1;
}

void func_714(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bVar1 = true;
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
				bParam3 = true;
			}
		}
		bVar1 = __LIB_3__::func_134(iVar0);
	}
	if (bParam3 && bVar1)
	{
		__LIB_1__::func_42(iParam0, 0, 6);
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 1);
	}
	__LIB_0__::func_245(0);
}

void func_715(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
				__LIB_2__::func_471(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_716(bool bParam0)
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
		__LIB_1__::func_625();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_717(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				__LIB_1__::func_775(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

bool func_718(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
		if (__LIB_1__::func_644(vParam0, iParam10) || __LIB_1__::func_624(vParam0, iParam10))
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

void func_719(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_0__::func_271(iParam0);
	sVar1 = __LIB_1__::func_464(iParam0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (bParam1 && Global_1935630.f_12)
	{
		return;
	}
	if (bParam4 && !__LIB_1__::func_22(iParam0))
	{
		return;
	}
	if (!bParam1 && !__LIB_0__::func_287(iParam0, 37, 1))
	{
		return;
	}
	if (PED::DOES_GROUP_EXIST(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())) || (!bParam1 && Global_1935630.f_12))
	{
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, bParam1);
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_866(iParam0, 0))
			{
				if (PED::IS_PED_IN_GROUP(iVar0))
				{
					PED::REMOVE_PED_FROM_GROUP(iVar0);
				}
				__LIB_1__::func_551(iParam0, bParam5);
			}
		}
		else
		{
			__LIB_1__::func_640(iParam0);
		}
		if (bParam1)
		{
			COMPANION::_0x2917E634206B9E17(iVar0, iParam3);
		}
		if (bParam1)
		{
			__LIB_0__::func_288(iParam0, 37, 1);
		}
		else
		{
			__LIB_0__::func_290(iParam0, 37, 1);
		}
	}
}

int func_720(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				__LIB_1__::func_621(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_1__::func_622(uParam1->f_10) };
			Var10 = { __LIB_1__::func_623() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_721(int iParam0)
{
	return iParam0->f_1;
}

void func_722(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

float func_723(int iParam0)
{
	return iParam0->f_2887;
}

int func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_5))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_5));
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
	ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	return 1;
}

bool func_725(var uParam0, int iParam1)
{
	return (uParam0->f_1664 && iParam1) != 0;
}

void func_726(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!bParam1 && !ITEMSET::IS_ITEMSET_VALID(iParam0->f_2888))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_2888))
	{
		iParam0->f_2888 = ITEMSET::CREATE_ITEMSET(true);
	}
	LAW::_0x522F74636DF10201(PLAYER::GET_PLAYER_INDEX(), iParam0->f_2888);
	if (ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888) <= 0)
	{
		LAW::_0xDA1A9ADC4E3D4B16(iParam0->f_2888, 1, 0);
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_2888);
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_2888)));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 148, bParam1);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iParam0->f_2888);
}

void func_727(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 - (iParam0->f_2 && iParam1));
}

void func_728(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_79(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 - (Global_1898346[iParam0 /*6*/].f_1 && iParam1));
}

bool func_729(var uParam0, int iParam1)
{
	return (uParam0->f_439 && iParam1) != 0;
}

int func_730(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_444, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_444) * 1000f));
}

int func_731(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_444, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_444) * 1000f));
}

bool func_732(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_444, 0))
	{
		if (__LIB_0__::func_84(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_444) && __LIB_0__::func_84(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_733(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_444);
	}
}

void func_734(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
}

int func_735(int iParam0)
{
	if (iParam0 & 36 == 4)
	{
		return 6;
	}
	else if (iParam0 & 34 == 4)
	{
		return 5;
	}
	else if (iParam0 & 12 == 8)
	{
		return 12;
	}
	else if (iParam0 & 24 == 16)
	{
		return 18;
	}
	else if (iParam0 & 48 == 32)
	{
		return 0;
	}
	return 0;
}

void func_736()
{
	Global_1934765.f_273 = 1;
}

void func_737()
{
	Global_1934765.f_273 = 0;
}

bool func_738()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_0xA9016536015DE29D(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_0x1F0E401031E20146(Global_43806[iVar0 /*6*/], "pl_breakout"))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_739()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_0xA9016536015DE29D(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_0x1F0E401031E20146(Global_43806[iVar0 /*6*/], "pl_breakout"))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_43806[iVar0 /*6*/], "pl_breakout", true);
		}
		iVar0++;
	}
}

bool func_740(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_43806[iVar0 /*6*/], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, Global_43806[iVar0 /*6*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_741(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

struct<2> func_742(int iParam0)
{
	struct<2> Var0;
	MemCopy(&Var0, {__LIB_0__::func_631(iParam0)}, 2);
	return Var0;
}

float func_743(var uParam0)
{
	return uParam0->f_435;
}

void func_744(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]));
		}
		uParam0->f_462[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

float func_745(var uParam0)
{
	return uParam0->f_434;
}

struct<8> func_746(var uParam0)
{
	return uParam0->f_446;
}

void func_747(var uParam0, char[16] cParam1)
{
	uParam0->f_440 = { cParam1 };
}

Vector3 func_748(var uParam0)
{
	return uParam0->f_502;
}

void func_749(var uParam0, vector3 vParam1)
{
	uParam0->f_502 = { vParam1 };
}

void func_750(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_751(var uParam0, int iParam1)
{
	uParam0->f_1683 = iParam1;
}

struct<4> func_752(var uParam0)
{
	return uParam0->f_440;
}

void func_753(var uParam0, float fParam1)
{
	uParam0->f_434 = fParam1;
}

void func_754(var uParam0, float fParam1)
{
	uParam0->f_435 = fParam1;
}

void func_755(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 - (uParam0->f_1664 && iParam1));
}

bool func_756(var uParam0, int iParam1)
{
	return (uParam0->f_1666.f_1 && iParam1) != 0;
}

void func_757(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 || iParam1);
}

struct<8> func_758(var uParam0)
{
	return uParam0->f_454;
}

void func_759(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_444, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, iParam2, iParam3);
}

Vector3 func_760(var uParam0)
{
	return uParam0->f_505;
}

float func_761(var uParam0)
{
	return uParam0->f_508;
}

bool func_762(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_763(var uParam0)
{
	struct<8> Var0;
	uParam0->f_454 = { Var0 };
}

void func_764(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_462[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

void func_765(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 || iParam1);
}

void func_766(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_5))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, iParam0->f_5);
		if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			EVENT::_0xBB1E41DD3D3C6250(iVar0, "SpMissionTriggers", 0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				ANIMSCENE::_0x99B2A2E3655DEAF1(iVar0, "ClosestScenario");
			}
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			ITEMSET::ADD_TO_ITEMSET(iParam1, iParam0->f_6);
		}
	}
}

bool func_767(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return false;
	}
	return ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_5);
}

void func_768(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_7))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, iParam0->f_7);
	}
}

bool func_769(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_770(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_771(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_772(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_773(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_774(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = 250;
	if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
	{
		iVar0 = 2000;
	}
	fVar1 = ENTITY::GET_ENTITY_HEADING(Global_35);
	if (!__LIB_0__::func_86(vParam0))
	{
		fVar1 = __LIB_0__::func_152(Global_36, vParam0, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, iVar0, fVar1, false, true);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, iVar0, fVar1, true, true);
	}
}

int func_775(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_357(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_776(int iParam0)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_58 = 0;
	Global_1835011[iParam0 /*74*/].f_59 = 0;
	Global_1835011[iParam0 /*74*/].f_60 = 0;
}

void func_777(int iParam0)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_61 = 0;
}

void func_778(int iParam0, int iParam1)
{
	__LIB_0__::func_88(&(iParam0->f_428), iParam1);
}

void func_779(var uParam0, char* sParam1)
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
			MemCopy(&(uParam0->f_440), {__LIB_0__::func_98("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {__LIB_0__::func_98("cutscene@", sParam1, 1, 63)}, 4);
	}
	__LIB_0__::func_88(uParam0, 8192);
}

bool func_780(var uParam0, int iParam1)
{
	if (__LIB_0__::func_84(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_444, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_444, "ExportCamera") && iParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_444))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

bool func_781(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_782()
{
	if (__LIB_4__::func_682())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!__LIB_0__::func_91())
		{
			__LIB_0__::func_733(1);
		}
	}
}

void func_783(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_784(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

Vector3 func_785(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { __LIB_0__::func_173(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!__LIB_0__::func_86(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true))
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
			if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_1016[iParam1 /*41*/].f_12 + (uParam0->f_1016[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_1016[iParam1 /*41*/].f_12 + uParam0->f_1016[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5f))) };
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

void func_786(var uParam0)
{
	__LIB_0__::func_200(&(uParam0->f_1904));
}

void func_787(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	if (bParam2 && (!__LIB_0__::func_91() || !ANIMSCENE::_0x6F1F0B17109309DA(Global_43800, __LIB_0__::func_731(iParam0))))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		if (!Global_1935630.f_12)
		{
			if (bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
			}
		}
		PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false), 0);
	if (bParam3)
	{
		__LIB_0__::func_203(iParam0);
	}
}

bool func_788(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	vVar0 = { vParam4 - vParam1 };
	vVar3 = { vParam1 - vParam10 };
	fVar6 = __LIB_1__::func_95(vParam7, vVar0);
	fVar7 = -__LIB_1__::func_95(vParam7, vVar3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return false;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { vParam1 + Vector(fVar8, fVar8, fVar8) * vVar0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return false;
	}
	return true;
}

char* func_789(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return __LIB_0__::func_67(uParam0->f_13[iVar0 /*12*/].f_1);
		}
		iVar0++;
	}
	return "";
}

int func_790()
{
	return __LIB_4__::func_671();
}

void func_791(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(Global_35, 0, iParam0, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
		{
			WEAPON::_0xCEF4C65DE502D367(Global_35, 1, iParam0, 1, 0);
		}
		else if (__LIB_0__::func_237(iVar0))
		{
			if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 7, 0)) || __LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 9, 0)))
			{
				if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 8, 0)))
				{
					__LIB_4__::func_677(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 7, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) && iVar0 != joaat("WEAPON_FISHINGROD"))
		{
			if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 7, 0)) || __LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 9, 0)))
			{
				if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 10, 0)))
				{
					__LIB_4__::func_677(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 10, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (iParam0 == 0)
			{
				if (!__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 2, 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 3, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 3, false, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, iParam0, false, false);
	}
}

Vector3 func_792(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { __LIB_1__::func_367(vParam0, vParam3, fParam9) };
	vVar3 = { __LIB_1__::func_367(vParam3, vParam6, fParam9) };
	return __LIB_1__::func_367(vVar0, vVar3, fParam9);
}

bool func_793(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_2, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_2, 1))
	{
		__LIB_4__::func_691(uParam0);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		__LIB_0__::func_7(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

void func_794(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	__LIB_4__::func_707(sParam0, iParam2);
	__LIB_3__::func_815(iParam1, fParam3);
}

bool func_795()
{
	return __LIB_3__::func_104();
}

void func_796(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_131(uParam0[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam0[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_275(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_0__::func_132(uParam1[iVar0 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam1[iVar0 /*5*/])->f_4, iParam12))
			{
				__LIB_0__::func_276(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (__LIB_0__::func_132(uParam2[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam2[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_277(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (__LIB_0__::func_132(uParam3[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_4__::func_689(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_688(uParam4->f_1, iParam12))
	{
		__LIB_4__::func_690(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar0 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam5[iVar0 /*67*/])->f_3, iParam12))
			{
				__LIB_4__::func_691(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (__LIB_0__::func_132(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/])))
				{
					if (__LIB_4__::func_688((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
					{
						__LIB_0__::func_278(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/]), (uParam5[iVar0 /*67*/])->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (__LIB_0__::func_131(uParam6[iVar0 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam6[iVar0 /*4*/])->f_3, iParam12))
			{
				__LIB_0__::func_279(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (__LIB_0__::func_131(uParam7[iVar0 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam7[iVar0 /*5*/])->f_4, iParam12))
			{
				__LIB_0__::func_280(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (__LIB_0__::func_132(uParam8[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam8[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_281(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (__LIB_0__::func_282(uParam9[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam9[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_283(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (__LIB_0__::func_132(uParam10[iVar0 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam10[iVar0 /*4*/])->f_3, iParam12))
			{
				__LIB_0__::func_284(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (__LIB_0__::func_132(uParam11[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_285(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_797(bool bParam0)
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
		__LIB_3__::func_120();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

struct<8> func_798(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, __LIB_1__::func_435(iParam1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = __LIB_0__::func_174(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

void func_799(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { __LIB_2__::func_3(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, iParam1);
}

bool func_800(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
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

void func_801(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		uVar2 = __LIB_0__::func_196(fParam1 < 0f, "rpg_cold", "rpg_hot");
		__LIB_0__::func_197(1, bVar1, 1, uVar2);
		__LIB_0__::func_990(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		__LIB_1__::func_244();
	}
	else if (iParam0 == 10)
	{
		iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_802(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_803(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_804(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

bool func_805()
{
	int iVar0;
	iVar0 = 1;
	return iVar0;
}

bool func_806(int iParam0)
{
	iParam0 = iParam0;
	return false;
}

var func_807(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

void func_808(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(iParam0))
	{
		return;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar0 != 0)
		{
			if (iParam0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar0))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, iParam1);
				}
			}
			iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

int func_809(var uParam0)
{
	return uParam0->f_7;
}

bool func_810(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

void func_811(var uParam0, int iParam1)
{
	uParam0->f_10 = iParam1;
}

void func_812(var uParam0, vector3 vParam1)
{
	uParam0->f_11 = { vParam1 };
}

int func_813(var uParam0)
{
	return uParam0->f_3;
}

bool func_814(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 143:
			*iParam2 = joaat("TSTAG_VHT_ODD_FELLOWS_1_ACTIVE");
			*iParam1 = 14;
			return true;
		default:
			break;
	}
	*iParam2 = joaat("TSTAG_NO_TAGS");
	*iParam1 = -1;
	return false;
}

bool func_815(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && Global_1835011[iParam0 /*74*/].f_21 == iParam2)
	{
		return true;
	}
	return false;
}

Vector3 func_816(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

bool func_817()
{
	if (Global_1879534.f_1 || Global_1879534)
	{
		return false;
	}
	if (Global_1935630.f_2 != Global_40.f_39 || ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39)
	{
		return false;
	}
	if (Global_40.f_7729 != Global_1905941)
	{
		return false;
	}
	return true;
}

bool func_818(var uParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::_IS_DRAFT_VEHICLE(*uParam0))
		{
			if (VEHICLE::_0xA19447D83294E29F(*uParam0, &iVar0, &iVar1))
			{
				if (iVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_819(var uParam0)
{
	return uParam0->f_4;
}

bool func_820(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_821(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_822(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_823()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

int func_824(int iParam0)
{
	int iVar0;
	iVar0 = -1337945352;
	if (!__LIB_0__::func_5(iParam0))
	{
		return iVar0;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (Global_1347702[iParam0 /*49*/].f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

void func_825(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 495758964);
				break;
		}
	}
}

bool func_826(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 != 0)
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		return true;
	}
	return false;
}

bool func_827(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

bool func_828(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

int func_829(int iParam0)
{
	int iVar0;
	var uVar1;
	Global_1946804.f_964.f_2 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	__LIB_0__::func_557(&(Global_1946804.f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804.f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_830(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

bool func_831(int iParam0)
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("WAGON05X_2"))
	{
		return true;
	}
	return false;
}

int func_832()
{
	return Global_1051081.f_11;
}

int func_833(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_834(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_835(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888.f_49111), iParam0))
	{
		return true;
	}
	return false;
}

int func_836()
{
	return Global_1572887.f_13;
}

void func_837(int iParam0)
{
	if (Global_1058888.f_42357.f_1[iParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42357.f_1[iParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42357.f_1[iParam0 /*5*/].f_1 = 0;
	}
}

void func_838(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_14), iParam1);
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_14), 2);
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
	__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (__LIB_0__::func_5(Global_40.f_450[iVar0]))
			{
				if (Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_839()
{
	__LIB_0__::func_22(8);
}

void func_840(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	__LIB_1__::func_965(iParam0);
	if (!__LIB_1__::func_966(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!__LIB_1__::func_967(128) && !__LIB_1__::func_968(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && __LIB_1__::func_969() == 4)
	{
		__LIB_4__::func_686(17);
	}
	__LIB_1__::func_970(512);
}

bool func_841(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return __LIB_1__::func_14(32, iParam0);
}

void func_842(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804.f_850 >= 25)
			{
				return;
			}
			if (__LIB_0__::func_182(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804.f_850)
				{
					iVar1 = ((Global_1946804.f_855 + iVar0) % 25);
					if ((Global_1946804.f_668[iVar1 /*4*/] == Param0 && Global_1946804.f_668[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1946804.f_668[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			__LIB_0__::func_183(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			__LIB_0__::func_155(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804.f_851 >= 25)
			{
				return;
			}
			if (__LIB_0__::func_182(Param0))
			{
				return;
			}
			__LIB_0__::func_183(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			__LIB_0__::func_155(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			__LIB_3__::func_137(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_843(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_824(iParam0))
	{
		return false;
	}
	__LIB_3__::func_752(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183.f_73[iParam0 /*7*/][iVar0], iVar1);
}

bool func_844(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (__LIB_1__::func_43(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

void func_845(bool bParam0, int iParam1)
{
	bool bVar0;
	if (__LIB_1__::func_955())
	{
		if (__LIB_4__::func_708(255))
		{
			if (!__LIB_1__::func_14(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (__LIB_0__::func_20(Global_1894899.f_2) && __LIB_1__::func_220(Global_1894899.f_2))
		{
			__LIB_1__::func_956(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				__LIB_1__::func_957(16);
			}
		}
		else if (__LIB_0__::func_20(Global_1894899.f_2) && !__LIB_0__::func_21(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899.f_7 = 0;
		__LIB_0__::func_22(16);
		__LIB_1__::func_973();
		if (bVar0)
		{
			__LIB_0__::func_22(1);
		}
	}
}

Vector3 func_846(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_847(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -308.18f, 812.19f, 117.99f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -176.3f, 630.1f, 115.331f;
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_848(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_797(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return __LIB_0__::func_1(Global_23118.f_1651[iVar1], iParam2);
}

void func_849(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_797(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	__LIB_0__::func_7(&(Global_23118.f_1651[iVar1]), iParam2);
}

int func_850()
{
	if (__LIB_2__::func_800())
	{
		return Global_1914319.f_16855.f_1;
	}
	return -1;
}

int func_851(int iParam0)
{
	int iVar0;
	if (!__LIB_2__::func_803(iParam0, &iVar0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Global_1914319.f_18905[iParam0] = PED::_0x7CC2186C32D3540A(iVar0, PLAYER::PLAYER_ID());
		return Global_1914319.f_18905[iParam0];
	}
	return 0;
}

bool func_852(int iParam0)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	return __LIB_2__::func_804(iParam0, 8388608);
}

bool func_853(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_2__::func_808(iParam0, 16384) && !__LIB_2__::func_787(iParam0, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_29(iParam1))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_25);
			}
		}
		__LIB_2__::func_812(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_25, 1, 1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_28);
			}
		}
		__LIB_2__::func_812(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_28, 0, 1);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_21 = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_23 = iVar0;
	return true;
}

bool func_854(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_792(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = __LIB_1__::func_334(uParam0->f_3[iVar0 /*3*/]);
			if (__LIB_0__::func_272(iVar1, 0) && __LIB_0__::func_665(iVar1, iParam1, 1, 1) <= 4f)
			{
				uParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!__LIB_2__::func_792(uParam0, 512) && !__LIB_2__::func_792(uParam0, 256))
	{
		return true;
	}
	if (__LIB_2__::func_792(uParam0, 512))
	{
		if (__LIB_2__::func_815(uParam0))
		{
			return true;
		}
	}
	if (__LIB_2__::func_792(uParam0, 256))
	{
		if (__LIB_2__::func_816(Global_35, uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_855(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		return true;
	}
	else if (__LIB_2__::func_813(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = (*uParam0)[0 /*4*/];
		iVar1 = (*uParam0)[1 /*4*/];
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !__LIB_0__::func_255(iVar0, 0)) && (ENTITY::DOES_ENTITY_EXIST(iVar1) && !__LIB_0__::func_255(iVar1, 0)))
		{
			if (!__LIB_0__::func_86(vParam4))
			{
				TASK::TASK_LOOK_AT_COORD(iVar0, vParam4, 8000, 0, 51, 0);
				TASK::TASK_LOOK_AT_COORD(iVar1, vParam4, 8000, 0, 51, 0);
			}
			else if (bParam7)
			{
				PED::_0x62FDAD5E01D2DD47(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, Global_35, 4000, -1f, -1f, -1f);
			}
		}
		return true;
	}
	return false;
}

bool func_856(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || __LIB_0__::func_255(iParam0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_791(iParam0))
	{
		__LIB_0__::func_37(&uLocal_15);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (__LIB_0__::func_75(&uLocal_15))
	{
		if (__LIB_0__::func_265(&uLocal_15) < 2f)
		{
			return false;
		}
	}
	else
	{
		__LIB_1__::func_283(&uLocal_15, 0);
		return false;
	}
	return true;
}

void func_857(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	(uParam0[iParam3 /*45*/])->f_25 = 64f;
	(uParam0[iParam3 /*45*/])->f_26 = 16f;
	(uParam0[iParam3 /*45*/])->f_20 = iParam3;
	__LIB_2__::func_790(uParam0[iParam3 /*45*/]);
	(*uParam0)[iParam3 /*45*/] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			(uParam0[iParam3 /*45*/])->f_3[iVar0 /*3*/] = (*uParam2)[iVar0];
			iVar0++;
		}
		__LIB_2__::func_811(uParam0[iParam3 /*45*/], 128);
	}
	if (!__LIB_0__::func_75(&((uParam0[iParam3 /*45*/])->f_34)))
	{
		__LIB_1__::func_283(&((uParam0[iParam3 /*45*/])->f_34), 1);
	}
	__LIB_2__::func_811(uParam0[iParam3 /*45*/], 32768);
	__LIB_2__::func_811(uParam0[iParam3 /*45*/], 1024);
	(uParam0[iParam3 /*45*/])->f_29 = 1;
	(uParam0[iParam3 /*45*/])->f_21 = -1;
}

void func_858(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		__LIB_0__::func_516(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_859(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		__LIB_0__::func_516(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_860(char* sParam0, char* sParam1)
{
	int iVar0;
	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, 1);
		Global_1956588[Global_1956588.f_25] = iVar0;
		Global_1956588.f_25 = (Global_1956588.f_25 + 1 % 24);
	}
}

void func_861(int iParam0)
{
	if (!__LIB_3__::func_829(iParam0))
	{
		return;
	}
	__LIB_0__::func_105(1);
}

void func_862(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

bool func_863(int iParam0, bool bParam1)
{
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return true;
	}
	return __LIB_0__::func_141(iParam0, 4);
}

int func_864(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		__LIB_1__::func_578(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

float func_865(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		case 2:
			return 45f;
		case 0:
			return 40f;
		case 3:
			return 90f;
		case 5:
			return 90f;
		case 4:
			return 50f;
		case 6:
			return 90f;
		default:
			break;
	}
	return 70f;
}

void func_866(int* iParam0, bool bParam1, bool bParam2)
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
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

bool func_867(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_868(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (uParam0->f_14[iParam2] == iParam1 && iParam3 == 0)
	{
		if (MISC::IS_BIT_SET(uParam0->f_22, iParam2))
		{
			return 1;
		}
	}
	uParam0->f_14[iParam2] = iParam1;
	MISC::SET_BIT(&(uParam0->f_22), iParam2);
	MISC::CLEAR_BIT(&(uParam0->f_23), iParam2);
	return 1;
}

void func_869(var uParam0, int iParam1)
{
	uParam0->f_89 = iParam1;
}

int func_870()
{
	return Global_1899528.f_61;
}

void func_871(int iParam0)
{
	Global_1899528.f_61 = iParam0;
}

void func_872(int iParam0)
{
	Global_1899528.f_61.f_1 = iParam0;
}

void func_873(int iParam0)
{
	Global_1899528.f_61.f_2 = iParam0;
}

int func_874()
{
	return Global_1899528.f_61.f_1;
}

int func_875(int iParam0, int iParam1, int iParam2)
{
	int iVar0[4];
	int iVar5;
	iVar5 = 0;
	if (iParam0 == 3)
	{
		return joaat("A_M_M_FIVEFINGERFILLETPLAYERS_01");
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return joaat("A_M_M_CARDGAMEPLAYERS_01");
	}
	else if (iParam0 == 1)
	{
		return joaat("A_M_M_DOMINOESPLAYERS_01");
	}
	switch (iParam1)
	{
		case 76:
			iVar0[0] = joaat("A_M_M_VALTOWNFOLK_01");
			iVar0[1] = joaat("A_M_M_VALTOWNFOLK_02");
			iVar5 = 2;
			break;
		case 105:
			iVar0[0] = joaat("A_M_M_RHDUPPERCLASS_01");
			iVar5 = 1;
			break;
		case 38:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("A_M_M_BLWLABORER_01");
				iVar0[1] = joaat("A_M_M_BLWLABORER_02");
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = joaat("A_M_M_BLWUPPERCLASS_01");
				iVar5 = 1;
			}
			break;
		case 115:
			iVar0[0] = joaat("A_M_M_TUMTOWNFOLK_01");
			iVar0[1] = joaat("A_M_M_TUMTOWNFOLK_02");
			iVar5 = 2;
			break;
		case 26:
			iVar0[0] = joaat("S_M_M_STRLUMBERJACK_01");
			iVar5 = 1;
			break;
		case 5:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("A_M_M_MIDDLESDTOWNFOLK_01");
				iVar0[1] = joaat("A_M_M_MIDDLESDTOWNFOLK_02");
				iVar0[2] = joaat("A_M_M_MIDDLESDTOWNFOLK_03");
				iVar5 = 3;
			}
			else
			{
				iVar0[0] = joaat("A_M_O_SDUPPERCLASS_01");
				iVar0[1] = joaat("A_M_O_SDUPPERCLASS_01");
				iVar5 = 2;
			}
			break;
		case 92:
			iVar0[0] = joaat("A_M_M_VHTTOWNFOLK_01");
			iVar5 = 1;
			break;
		case 69:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("A_M_M_EMRFARMHAND_01");
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = joaat("A_M_M_EMRFARMHAND_01");
				iVar5 = 1;
			}
			break;
		case 75:
			iVar0[0] = joaat("A_M_M_VALTOWNFOLK_01");
			iVar0[1] = joaat("A_M_M_VALTOWNFOLK_02");
			iVar0[2] = joaat("S_M_M_VALCOWPOKE_01");
			iVar5 = 3;
			break;
	}
	if (iVar5 == 0)
	{
		return 0;
	}
	else
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		}
		if (iParam2 < iVar5)
		{
			return iVar0[iParam2];
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_876(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_1899528.f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	*uParam2 = Global_1899528.f_61.f_7[iParam1];
	*uParam3 = Global_1899528.f_61.f_14[iParam1];
	*uParam4 = Global_1899528.f_61.f_21[iParam1];
	*uParam5 = Global_1899528.f_61.f_28[iParam1];
	return Global_1899528.f_61.f_134[iParam1];
}

void func_877()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528.f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_878()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528.f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

bool func_879(int iParam0, struct<2> Param1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_BLA");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_CAMP");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_CAMP");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_CAMP");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_CAMP");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_CAMP");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_CAMP");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_CAMP");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_CAMP");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_CAMP");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_CAMP");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_CAMP");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_CAMP");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_CAMP");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_CAMP");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_CAMP");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_CAMP");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_CAMP");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_CAMP");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_CAMP");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_CAMP");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_CAMP");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_CAMP");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_CAMP");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_CAMP");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_CAMP");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_CAMP");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_CAMP");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_CAMP");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_CAMP");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_CAMP");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_CAMP");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_CAMP");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_CAMP");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_CAMP");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_CAMP");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_CAMP");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_CAMP");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_CAMP");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_CAMP");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_CAMP");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_CAMP");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_CAMP");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_CAMP");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_CAMP");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_CAMP");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_CAMP");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_CAMP");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_CAMP");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_CAMP");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_CAMP");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_CAMP");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_CAMP");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_GK");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_GK");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_GK");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_GK");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_GK");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_GK");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_GK");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_GK");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_GK");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_GK");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_GK");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_GK");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_GK");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_GK");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_GK");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_GK");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_GK");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_GK");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_GK");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_GK");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_GK");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_GK");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_GK");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_GK");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_GK");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_GK");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_GK");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_GK");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_GK");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_GK");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_GK");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_GK");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_GK");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_GK");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_GK");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_GK");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_GK");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_GK");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_GK");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_GK");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_GK");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_GK");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_GK");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_GK");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_GK");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_GK");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_GK");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_GK");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_GK");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_GK");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_GK");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_GK");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_RHO");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_RHO");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_RHO");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_RHO");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_RHO");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_RHO");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_RHO");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_RHO");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_RHO");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_RHO");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_RHO");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_RHO");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_RHO");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_RHO");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_RHO");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_RHO");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_RHO");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_RHO");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_RHO");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_RHO");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_RHO");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_RHO");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_RHO");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_RHO");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_RHO");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_RHO");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_RHO");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_RHO");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_RHO");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_RHO");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_RHO");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_RHO");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_RHO");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_RHO");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_RHO");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_RHO");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_RHO");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_RHO");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_RHO");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_RHO");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_RHO");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_RHO");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_RHO");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_RHO");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_RHO");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_RHO");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_RHO");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_RHO");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_RHO");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_RHO");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_RHO");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_RHO");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_RRS");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_RRS");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_RRS");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_RRS");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_RRS");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_RRS");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_RRS");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_RRS");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_RRS");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_RRS");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_RRS");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_RRS");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_RRS");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_RRS");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_RRS");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_RRS");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_RRS");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_RRS");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_RRS");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_RRS");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_RRS");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_RRS");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_RRS");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_RRS");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_RRS");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_RRS");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_RRS");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_RRS");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_RRS");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_RRS");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_RRS");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_RRS");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_RRS");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_RRS");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_RRS");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_RRS");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_RRS");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_RRS");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_RRS");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_RRS");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_RRS");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_RRS");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_RRS");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_RRS");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_RRS");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_RRS");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_RRS");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_RRS");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_RRS");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_RRS");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_RRS");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_RRS");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_STD_LABASTILLE");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_STD_LABASTILLE");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_STD_LABASTILLE");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_STD_LABASTILLE");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_STD_LABASTILLE");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_STD_LABASTILLE");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_STD_LABASTILLE");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_STD_LABASTILLE");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_STD_LABASTILLE");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_STD_LABASTILLE");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_STD_LABASTILLE");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_STD_LABASTILLE");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_STD_LABASTILLE");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_STD_LABASTILLE");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_STD_LABASTILLE");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_STD_LABASTILLE");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_STD_LABASTILLE");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_STD_LABASTILLE");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_STD_LABASTILLE");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_STD_LABASTILLE");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_STD_LABASTILLE");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_STD_LABASTILLE");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_STD_LABASTILLE");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_STD_LABASTILLE");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_STD_LABASTILLE");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_STD_LABASTILLE");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_STD_LABASTILLE");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_STD_LABASTILLE");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_STD_LABASTILLE");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_STD_LABASTILLE");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_STD_LABASTILLE");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_STD_LABASTILLE");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_STD_LABASTILLE");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_STD_LABASTILLE");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_STD_LABASTILLE");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_STD_LABASTILLE");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_STD_LABASTILLE");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_STD_LABASTILLE");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_STD_LABASTILLE");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_STD_LABASTILLE");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_STD_LABASTILLE");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_STD_LABASTILLE");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_STD_LABASTILLE");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_STD_LABASTILLE");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_STD_LABASTILLE");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_STD_LABASTILLE");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_STD_LABASTILLE");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_STD_LABASTILLE");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_STD_LABASTILLE");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_STD_LABASTILLE");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_STD_LABASTILLE");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_STD_LABASTILLE");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_STD_OPIUM");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_STD_OPIUM");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_STD_OPIUM");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_STD_OPIUM");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_STD_OPIUM");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_STD_OPIUM");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_STD_OPIUM");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_STD_OPIUM");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_STD_OPIUM");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_STD_OPIUM");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_STD_OPIUM");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_STD_OPIUM");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_STD_OPIUM");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_STD_OPIUM");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_STD_OPIUM");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_STD_OPIUM");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_STD_OPIUM");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_STD_OPIUM");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_STD_OPIUM");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_STD_OPIUM");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_STD_OPIUM");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_STD_OPIUM");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_STD_OPIUM");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_STD_OPIUM");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_STD_OPIUM");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_STD_OPIUM");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_STD_OPIUM");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_STD_OPIUM");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_STD_OPIUM");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_STD_OPIUM");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_STD_OPIUM");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_STD_OPIUM");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_STD_OPIUM");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_STD_OPIUM");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_STD_OPIUM");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_STD_OPIUM");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_STD_OPIUM");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_STD_OPIUM");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_STD_OPIUM");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_STD_OPIUM");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_STD_OPIUM");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_STD_OPIUM");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_STD_OPIUM");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_STD_OPIUM");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_STD_OPIUM");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_STD_OPIUM");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_STD_OPIUM");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_STD_OPIUM");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_STD_OPIUM");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_STD_OPIUM");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_STD_OPIUM");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_STD_OPIUM");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_VAL");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_VAL");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_VAL");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_VAL");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_VAL");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_VAL");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_VAL");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_VAL");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_VAL");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_VAL");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_VAL");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_VAL");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_VAL");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_VAL");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_VAL");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_VAL");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_VAL");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_VAL");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_VAL");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_VAL");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_VAL");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_VAL");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_VAL");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_VAL");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_VAL");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_VAL");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_VAL");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_VAL");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_VAL");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_VAL");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_VAL");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_VAL");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_VAL");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_VAL");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_VAL");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_VAL");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_VAL");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_VAL");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_VAL");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_VAL");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_VAL");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_VAL");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_VAL");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_VAL");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_VAL");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_VAL");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_VAL");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_VAL");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_VAL");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_VAL");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_VAL");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_VAL");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_VAN");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_VAN");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_VAN");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_VAN");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_VAN");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_VAN");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_VAN");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_VAN");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_VAN");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_VAN");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_VAN");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_VAN");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_VAN");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_VAN");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_VAN");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_VAN");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_VAN");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_VAN");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_VAN");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_VAN");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_VAN");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_VAN");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_VAN");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_VAN");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_VAN");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_VAN");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_VAN");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_VAN");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_VAN");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_VAN");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_VAN");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_VAN");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_VAN");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_VAN");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_VAN");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_VAN");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_VAN");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_VAN");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_VAN");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_VAN");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_VAN");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_VAN");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_VAN");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_VAN");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_VAN");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_VAN");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_VAN");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_VAN");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_VAN");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_VAN");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_VAN");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_VAN");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		default:
			return false;
	}
	switch (iParam3)
	{
		case 0:
			*iParam0 = joaat("P_CRD_01X_BLA");
			return false;
		case 1:
			*iParam0 = joaat("P_CRD_01X_CAMP");
			return false;
		case 2:
			*iParam0 = joaat("P_CRD_01X_GK");
			return false;
		case 3:
			*iParam0 = joaat("P_CRD_01X_RHO");
			return false;
		case 4:
			*iParam0 = joaat("P_CRD_01X_RRS");
			return false;
		case 5:
			*iParam0 = joaat("P_CRD_01X_STD_LABASTILLE");
			return false;
		case 6:
			*iParam0 = joaat("P_CRD_01X_STD_OPIUM");
			return false;
		case 7:
			*iParam0 = joaat("P_CRD_01X_VAL");
			return false;
		case 8:
			*iParam0 = joaat("P_CRD_01X_VAN");
			return false;
		default:
			break;
	}
	return false;
	if (bParam4)
	{
	}
	return false;
}

void func_880(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, "PedSeatedForMinigame");
}

void func_881(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "PedSeatedForMinigame", true);
}

char* func_882(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

void func_883(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vector3 vVar0;
	vVar0.x = ((vParam4.x * BUILTIN::COS(fParam3)) - (vParam4.y * BUILTIN::SIN(fParam3)));
	vVar0.f_1 = ((vParam4.x * BUILTIN::SIN(fParam3)) + (vParam4.y * BUILTIN::COS(fParam3)));
	vVar0.f_2 = vParam4.z;
	*uParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

void func_884(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*uParam0)[iVar0 /*2*/] = -1;
		(uParam0[iVar0 /*2*/])->f_1 = -1;
		iVar0++;
	}
	uParam0->f_23 = 0;
}

void func_885(var uParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar4 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (iVar3 >= 2)
			{
				Var0.f_1 = iVar2;
				Var0 = iVar3;
				*(uParam0[iVar4 /*2*/]) = { Var0 };
				iVar4++;
			}
			iVar3++;
		}
		iVar2++;
	}
	uParam0->f_105 = 0;
	uParam0->f_106 = iVar4;
}

int func_886(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_01");
					case 1:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_02");
					case 2:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_03");
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return joaat("META_OUTFIT_EMERALDRANCH_VAR_01");
			case 5:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
					case 1:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_02");
					case 2:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_03");
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
			case 38:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_BLACKWATER_VAR_01");
					case 1:
						return joaat("META_OUTFIT_BLACKWATER_VAR_02");
					case 2:
						return joaat("META_OUTFIT_BLACKWATER_VAR_03");
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return joaat("META_OUTFIT_BLACKWATER_VAR_01");
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VALENTINE_VAR_01");
					case 1:
						return joaat("META_OUTFIT_VALENTINE_VAR_02");
					case 2:
						return joaat("META_OUTFIT_VALENTINE_VAR_03");
					case 3:
						return -478015708;
					default:
						break;
				}
				return joaat("META_OUTFIT_VALENTINE_VAR_01");
			case 26:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_01");
					case 1:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_02");
					case 2:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_03");
					case 3:
						return 496214832;
					default:
						break;
				}
				return joaat("META_OUTFIT_STRAWBERRY_VAR_01");
			case 92:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VANHORN_VAR_01");
					case 1:
						return joaat("META_OUTFIT_VANHORN_VAR_02");
					case 2:
						return joaat("META_OUTFIT_VANHORN_VAR_03");
					case 3:
						return -1887776194;
					default:
						break;
				}
				return joaat("META_OUTFIT_VANHORN_VAR_01");
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
					case 1:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_02");
					case 2:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_03");
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
			case 38:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_BLACKWATER_VAR_01");
					case 1:
						return joaat("META_OUTFIT_BLACKWATER_VAR_02");
					case 2:
						return joaat("META_OUTFIT_BLACKWATER_VAR_03");
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return joaat("META_OUTFIT_BLACKWATER_VAR_01");
			case 115:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_01");
					case 1:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_02");
					case 2:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_03");
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return joaat("META_OUTFIT_TUMBLEWEED_VAR_01");
			case 76:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VALENTINE_VAR_01");
					case 1:
						return joaat("META_OUTFIT_VALENTINE_VAR_02");
					case 2:
						return joaat("META_OUTFIT_VALENTINE_VAR_03");
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return joaat("META_OUTFIT_VALENTINE_VAR_01");
			case 92:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VANHORN_VAR_01");
					case 1:
						return joaat("META_OUTFIT_VANHORN_VAR_02");
					case 2:
						return joaat("META_OUTFIT_VANHORN_VAR_03");
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return joaat("META_OUTFIT_VANHORN_VAR_01");
			case 105:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_RHODES_VAR_01");
					case 1:
						return joaat("META_OUTFIT_RHODES_VAR_02");
					case 2:
						return joaat("META_OUTFIT_RHODES_VAR_03");
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return joaat("META_OUTFIT_RHODES_VAR_01");
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

char* func_887(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

void func_888(var uParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar4 = 0;
	while (iVar4 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_106);
			Var0 = { *(uParam0[iVar2 /*2*/]) };
			*(uParam0[iVar2 /*2*/]) = { *(uParam0[iVar3 /*2*/]) };
			*(uParam0[iVar3 /*2*/]) = { Var0 };
			iVar2++;
		}
		iVar4++;
	}
}

int func_889(int iParam0, var uParam1)
{
	switch (iParam0)
	{
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
			return 10;
		case 12:
			return 10;
		case 13:
			return 10;
		case 14:
			return 11;
		default:
			break;
	}
	return 0;
}

bool func_890(int iParam0)
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("S_M_M_BLWDEALER_01"):
		case joaat("S_M_M_VALDEALER_01"):
		case joaat("S_M_M_ASBDEALER_01"):
		case joaat("S_M_M_RHDDEALER_01"):
		case joaat("S_M_M_VHTDEALER_01"):
		case joaat("S_M_M_STRDEALER_01"):
		case joaat("S_M_M_SDDEALER_01"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_891(var uParam0, int iParam1)
{
	return MISC::_0x8F4F050054005C27(uParam0, iParam1);
}

int func_892(int iParam0)
{
	if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 3)
	{
		return 4;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return 12;
	}
	return 0;
}

bool func_893(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case joaat("P_WINDSORCHAIR03X"):
					return true;
				case joaat("P_WINDSORCHAIR01X"):
				case joaat("P_CHAIR38X"):
					return true;
				case joaat("P_CHAIR24X"):
				case joaat("P_CHAIR22X"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == joaat("P_CHAIR13X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR05X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR06X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_WINDSORCHAIR03X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR12X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR14X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR11X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR26X"))
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == joaat("P_CHAIR02X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOL02X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOL03X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOLWINTER01X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOLFOLDING01X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR_BARREL04B"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIRFOLDING02X"))
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == joaat("P_CHAIR06X"))
			{
				return true;
			}
			if (iParam1 == joaat("S_CRATESEAT03X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR_CRATE02X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOLFOLDING01X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIRFOLDING02X"))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_894(var uParam0, int iParam1)
{
	MISC::_0xE84AAC1B22A73E99(uParam0, iParam1);
}

bool func_895(var uParam0, var uParam1)
{
	if (uParam0->f_105 >= uParam0->f_106)
	{
		return false;
	}
	*uParam1 = { *(uParam0[uParam0->f_105 /*2*/]) };
	uParam0->f_105++;
	return true;
}

void func_896(bool bParam0)
{
	if (!bParam0)
	{
		__LIB_3__::func_739(0);
	}
	Global_1935689.f_2 = bParam0;
}

bool func_897(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	fVar8 = (0.25f * 2f);
	if (!__LIB_1__::func_231(iParam0, vParam1, iParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	__LIB_1__::func_216(&iVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = ENTITY::_0x886171A12F400B89(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (__LIB_1__::func_286(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !PED::IS_PED_A_PLAYER(iVar3)))
			{
				__LIB_0__::func_172(iVar5);
				ITEMSET::_CLEAR_ITEMSET(iVar4);
				ITEMSET::DESTROY_ITEMSET(iVar4);
				*iParam6 = iVar3;
				return true;
			}
		}
		iVar7++;
	}
	__LIB_0__::func_172(iVar5);
	ITEMSET::_CLEAR_ITEMSET(iVar4);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	return false;
}

void func_898(int iParam0, int iParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_30 = iParam1;
}

void func_899(int iParam0, var uParam1)
{
	Global_1396116.f_98[iParam0 /*2*/] = uParam1;
}

int func_900(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1430252 < (MISC::GET_FRAME_COUNT() - 30))
	{
		Global_1430252 = MISC::GET_FRAME_COUNT();
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Global_1430252.f_1[iVar0] = 0;
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 13)
		{
			if (Global_40.f_9479[iVar1 /*4*/] != -1)
			{
				Global_1430252.f_1[Global_40.f_9479[iVar1 /*4*/]]++;
			}
			iVar1++;
		}
	}
	return Global_1430252.f_1[iParam0];
}

void func_901(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	__LIB_0__::func_7(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

Vector3 func_902(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return 0f, 0f, 0f;
	}
	return PERSCHAR::_0x5EE6FCCC9C832CA2(__LIB_0__::func_120(iParam0));
}

bool func_903(var uParam0)
{
	float fVar0;
	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, uParam0->f_13);
	if (fVar0 < 5625f || fVar0 > 9025f)
	{
		return false;
	}
	if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_12, uParam0->f_13, false))
	{
		return false;
	}
	return true;
}

bool func_904(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
	{
		iVar0 = 0;
	}
	if (uParam0->f_17 != 0)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(uParam0->f_17))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_905(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(__LIB_0__::func_118(uParam0->f_1));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		vVar1 = { PERSCHAR::_0x94995829ED15A598(iVar0) };
		if (BUILTIN::VDIST2(uParam0->f_13, vVar1) < 9f)
		{
			return true;
		}
	}
	return false;
}

bool func_906(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_11, true, false)) < 12100f)
	{
		return false;
	}
	return true;
}

void func_907(var uParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		if (VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_11))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_11, iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
				}
				iVar0++;
			}
		}
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_11));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12);
	}
}

bool func_908(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 15) != 0)
	{
		return false;
	}
	if (CLOCK::GET_CLOCK_HOURS() != uParam0->f_2)
	{
		return false;
	}
	return true;
}

bool func_909(var uParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		if (ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_11))
		{
			VEHICLE::_0x87B974E54C71BA7B(uParam0->f_11, 0);
			if (VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_11))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_11, iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
					}
					iVar0++;
				}
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_11));
		}
	}
	if (uParam0->f_19)
	{
		PED::_0x7D4E70A67A651C71(2);
		uParam0->f_19 = 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12);
	return true;
}

bool func_910(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0))
	{
		return PED::IS_PED_SHOOTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return false;
}

int func_911(int iParam0)
{
	switch (iParam0)
	{
		case 26:
		case 38:
			return 0;
		case 5:
		case 105:
			return 2;
		case 76:
		case 78:
		case 92:
			return 1;
	}
	return 0;
}

int func_912(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("S_CS_BL_NEWSPAPER01X");
		case 1:
			return joaat("S_CS_NH_NEWSPAPER01X");
		case 2:
			return joaat("S_CS_SD_NEWSPAPER01X");
		default:
			return joaat("S_CS_SD_NEWSPAPER01X");
	}
	return joaat("S_CS_SD_NEWSPAPER01X");
}

void func_913(int iParam0)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = 0;
}

void func_914(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/].f_20 = iParam1;
}

char* func_915(int iParam0, int iParam1)
{
	if (Global_40.f_9829[iParam0 /*4*/].f_1 != 0)
	{
		switch (Global_40.f_9829[iParam0 /*4*/])
		{
			case 76:
				return "prisoner_val_1";
			case 105:
				return "prisoner_rhd_1";
			case 5:
				return "prisoner_std_1";
			case 26:
				return "prisoner_str_1";
			case 38:
				if (iParam1 == 0)
				{
					return "prisoner_blw_1";
				}
				break;
			case 115:
				return "prisoner_twd_1";
		}
	}
	return "prisoner";
}

bool func_916()
{
	int iVar0;
	int iVar1;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		iVar0 = joaat("WORLD_HUMAN_BARCUSTOMER");
		iVar1 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_917(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

void func_918(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_850();
	if (!__LIB_1__::func_917(iVar0))
	{
		return;
	}
	if (__LIB_2__::func_793(iVar0) && __LIB_0__::func_481(1))
	{
		__LIB_0__::func_82(1, 0, 1);
	}
	__LIB_2__::func_811(uParam0, 64);
}

void func_919(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, int iParam10)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam2;
	uParam0->f_3 = { __LIB_0__::func_482(sParam3) };
	uParam0->f_12 = iParam4;
	uParam0->f_13 = { vParam5 };
	uParam0->f_16 = fParam8;
	uParam0->f_17 = iParam9;
	uParam0->f_18 = iParam10;
}

void func_920(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_904(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_30(iParam1))
	{
		return;
	}
	Global_1898130[iParam0] = iParam1;
}

void func_921(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return;
	}
	Global_1396116.f_98[iParam0 /*2*/].f_1 = __LIB_0__::func_23();
}

bool func_922(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(Global_1914319.f_3[iParam0 /*446*/].f_5, iParam1);
}

void func_923(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	__LIB_0__::func_8(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

bool func_924(var uParam0)
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		__LIB_2__::func_761(uParam0->f_13, 3f, 1, 0);
		uParam0->f_11 = VEHICLE::CREATE_VEHICLE(uParam0->f_12, uParam0->f_13, uParam0->f_16, true, true, false, false);
		ENTITY::_0x9587913B9E772D29(uParam0->f_11, 0);
		VEHICLE::_0x87B974E54C71BA7B(uParam0->f_11, 1);
		return false;
	}
	if (uParam0->f_17 != 0)
	{
		PROPSET::_0xD80FAF919A2E56EA(uParam0->f_11, uParam0->f_17);
	}
	return true;
}

bool func_925(int iParam0)
{
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return false;
}

void func_926(var uParam0)
{
	__LIB_0__::func_37(&(uParam0->f_12));
}

bool func_927(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	bVar4 = true;
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		bVar4 = false;
	}
	iVar0 = ENTITY::_0x59B57C4B06531E1E(__LIB_1__::func_974(PLAYER::PLAYER_ID()), 2.5f, iVar3, 1);
	if (iVar0 <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar3);
		bVar4 = false;
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar3) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar3);
		bVar4 = false;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3));
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			if (((!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::IS_PED_HUMAN(iVar1)) && PED::IS_PED_MALE(iVar1)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 0))
			{
				Stack.Push(uParam0);
				Stack.Push(ENTITY::GET_ENTITY_MODEL(iVar2));
				Call_Loc(uParam0->f_32);
				if (StackVal)
				{
					if (!PED::IS_PED_A_PLAYER(iVar1))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 0) && !((TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iVar1) == joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iVar1) == joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS")) || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iVar1) == joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_EATING_KNIFE_FORK")))
						{
							if (uParam0->f_1 != iVar1)
							{
								uParam0->f_1 = iVar1;
								uParam0->f_2 = iVar2;
								ITEMSET::DESTROY_ITEMSET(iVar3);
								return true;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
	uParam0->f_10 = 1;
	return false;
}

bool func_928(int iParam0)
{
	if (Global_1914319.f_17371)
	{
		return true;
	}
	if (__LIB_2__::func_65(Global_35, 0))
	{
		return true;
	}
	if (__LIB_2__::func_84())
	{
		return true;
	}
	if (__LIB_0__::func_665(Global_35, iParam0, 1, 1) > 5f)
	{
		return true;
	}
	return false;
}

int func_929(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || __LIB_0__::func_2() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (__LIB_0__::func_293(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
		case 8:
			return joaat("LAW_REGION_GUAMA");
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || __LIB_0__::func_2() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (__LIB_0__::func_293(45))
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			else
			{
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || __LIB_0__::func_2() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (__LIB_0__::func_293(45))
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			}
			break;
	}
	return 0;
}

bool func_930(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_4__::func_189(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_4__::func_190(iParam0);
	iVar1 = __LIB_4__::func_191(iParam0);
	if (!__LIB_0__::func_20(iVar0))
	{
		return false;
	}
	if (!__LIB_4__::func_192(iVar1))
	{
		return false;
	}
	if (__LIB_0__::func_12() == iVar0)
	{
		if (__LIB_4__::func_368(iVar1))
		{
			return true;
		}
	}
	return false;
}

bool func_931(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		return true;
	}
	else if (__LIB_2__::func_813(uParam0, vParam1, 0, -1, 0, 0))
	{
		TASK::_0xE7FA07624574B79A(iParam4, iParam5, 1, 1, iParam6, 1, 0, 0, 0);
		if (iParam5 != Global_35)
		{
			TASK::_0xE7FA07624574B79A(iParam5, iParam4, 1, 1, iParam6, 1, 0, 0, 0);
		}
		return true;
	}
	return false;
}

void func_932(int iParam0, bool bParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_1__::func_937(iParam0, 1);
	}
	else
	{
		__LIB_1__::func_936(iParam0, 1);
	}
	__LIB_4__::func_419(__LIB_1__::func_921(iParam0), bParam1);
}

bool func_933(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_334(iParam0);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!__LIB_2__::func_774(iParam0) && __LIB_1__::func_185(iParam0))
	{
		if (__LIB_1__::func_194() <= iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_934(int iParam0, bool bParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228767, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, iParam0);
	}
}

void func_935(var uParam0, int iParam1)
{
	uParam0->f_5309 = (uParam0->f_5309 || iParam1);
}

bool func_936(var uParam0, int iParam1)
{
	return (uParam0->f_5309 && iParam1) != 0;
}

bool func_937(var uParam0, int iParam1)
{
	return (uParam0->f_5307 && iParam1) != 0;
}

int func_938(var uParam0)
{
	return uParam0->f_10783;
}

int func_939(var uParam0)
{
	return uParam0->f_597;
}

void func_940(var uParam0)
{
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
	{
		case 0:
			break;
		case 1:
			break;
		case 31:
			MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), false, true, false, 0f, false);
			break;
	}
}

int func_941(var uParam0)
{
	return uParam0->f_607;
}

void func_942()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iLocal_14))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iLocal_14);
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::_0x88AD6CC10D8D35B2(iVar2)) && !ENTITY::_0xA7E51B53309EAC97(iVar2))
		{
			ENTITY::DELETE_ENTITY(&iVar2);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iLocal_14);
}

struct<8> func_943(var uParam0)
{
	return uParam0->f_10784;
}

void func_944(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 || iParam1);
}

void func_945(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 || iParam1);
}

void func_946(var uParam0, int iParam1)
{
	uParam0->f_597 = iParam1;
	BUILTIN::SETTIMERA(0);
}

bool func_947(var uParam0)
{
	switch (uParam0->f_607)
	{
		case 12:
		case 21:
		case 26:
		case 35:
		case 37:
		case 41:
		case 42:
		case 43:
		case 44:
		case 46:
		case 52:
		case 54:
		case 58:
			return false;
	}
	return true;
}

bool func_948(var uParam0, int iParam1)
{
	return (uParam0->f_5308 && iParam1) != 0;
}

void func_949(var uParam0, int iParam1)
{
	if (!PED::_IS_THIS_MODEL_A_HORSE(iParam1))
	{
		return;
	}
	uParam0->f_8268 = iParam1;
}

int func_950(var uParam0)
{
	return uParam0->f_8268;
}

bool func_951(var uParam0, int iParam1)
{
	return (uParam0->f_608 && iParam1) != 0;
}

void func_952(var uParam0, int iParam1)
{
	uParam0->f_598 = iParam1;
}

var func_953(var uParam0)
{
	return uParam0->f_5408;
}

void func_954(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_955(struct<2> Param0)
{
	if (!__LIB_3__::func_358(Param0))
	{
		return 0;
	}
	return ITEMSET::GET_ITEMSET_SIZE(Param0);
}

int func_956(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_358(Param0))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

int func_957(var uParam0)
{
	return uParam0->f_5411;
}

void func_958(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

bool func_959(var uParam0)
{
	return false;
	switch (uParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_960(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_961(var uParam0, vector3 vParam1)
{
	uParam0->f_5413 = { vParam1 };
}

int func_962(var uParam0)
{
	return uParam0->f_596;
}

void func_963(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

void func_964(var uParam0, int iParam1)
{
	__LIB_0__::func_11(iParam1);
	uParam0->f_10783 = iParam1;
}

void func_965(int iParam0)
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
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
}

bool func_966(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

int func_967(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
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

int func_968(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0 /*67*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*67*/], sParam1) && (uParam0[iVar0 /*67*/])->f_1 == iParam2)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_969(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

void func_970(var uParam0)
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
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
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
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (ITEMSET::GET_ITEMSET_SIZE(iLocal_14) - 1);
	}
}

int func_971(var uParam0)
{
	return uParam0->f_598;
}

void func_972(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	__LIB_0__::func_324(sParam0, 1);
}

void func_973(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

void func_974(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		return;
	}
	iVar0 = (ITEMSET::GET_ITEMSET_SIZE(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (DECORATOR::DECOR_EXIST_ON(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616), __LIB_4__::func_567()))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				ENTITY::DELETE_ENTITY(&iVar1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_975(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, var uParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, uParam10);
}

bool func_976(int iParam0)
{
	return (iParam0 < __LIB_4__::func_525() && iParam0 >= 0);
}

void func_977(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_978(var uParam0, char[32] cParam1)
{
	uParam0->f_10784 = { cParam1 };
}

int func_979(var uParam0)
{
	return uParam0->f_599;
}

void func_980(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_804, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_822[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_806 };
			uParam0->f_822[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	__LIB_4__::func_568(uParam0, sParam1);
	__LIB_4__::func_550(uParam0, 2097152, 1);
	__LIB_0__::func_88(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_804, sParam1, true);
}

int func_981(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return __LIB_0__::func_45(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

void func_982(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
}

int func_983(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	iVar0 = MAP::_BLIP_ADD_FOR_COORD(iParam0, vParam1);
	if (bParam4)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

void func_984(var uParam0)
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
	iVar0 = uParam0->f_2078;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_1406[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_1406[iVar0 /*41*/].f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_1406[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_1406[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2265);
		if (bVar4)
		{
			vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_2265) };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_1406[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_1406[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_1406[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292))
			{
				__LIB_4__::func_532(uParam0, 65536);
				return;
			}
			else if (uParam0->f_2292 == iVar9)
			{
				__LIB_4__::func_532(uParam0, 65536);
				return;
			}
		}
		__LIB_4__::func_563(uParam0, 65536);
	}
}

bool func_985(var uParam0)
{
	if (uParam0->f_2074 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_1406[uParam0->f_2074 /*41*/].f_1, 0) < uParam0->f_1406[uParam0->f_2074 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_1406[uParam0->f_2074 /*41*/].f_14 >= uParam0->f_1406[uParam0->f_2074 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_986(var uParam0)
{
	if (uParam0->f_2074 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_1406[uParam0->f_2074 /*41*/].f_1, 0) < uParam0->f_1406[uParam0->f_2074 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_1406[uParam0->f_2074 /*41*/].f_15 >= uParam0->f_1406[uParam0->f_2074 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_987(var uParam0, int iParam1)
{
	if (__LIB_0__::func_84(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_804, "ExportCamera") && iParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_804))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

bool func_988(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_989(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_804, 0))
	{
		if (__LIB_0__::func_84(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_804) && __LIB_0__::func_84(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_990(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	__LIB_0__::func_324(sParam0, 1);
}

void func_991(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1282)
	{
		if ((__LIB_0__::func_755(&(uParam0->f_1282[iVar0 /*16*/]), 1048576) && __LIB_0__::func_755(&(uParam0->f_1282[iVar0 /*16*/]), 4)) && !__LIB_0__::func_755(&(uParam0->f_1282[iVar0 /*16*/]), 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_1282[iVar0 /*16*/]));
			return;
		}
		iVar0++;
	}
}

void func_992(var uParam0, int iParam1)
{
	__LIB_4__::func_550(&(uParam0->f_7375), iParam1, 1);
}

void func_993(var uParam0, int iParam1)
{
	uParam0->f_608 = (uParam0->f_608 - (uParam0->f_608 && iParam1));
}

void func_994(var uParam0)
{
	if (!Global_1935630.f_12)
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(uParam0->f_7374), true, 0, false))
		{
			if (((uParam0->f_7374 == joaat("WEAPON_FISHINGROD") || uParam0->f_7374 == joaat("WEAPON_KIT_BINOCULARS")) || uParam0->f_7374 == joaat("WEAPON_KIT_CAMERA")) || uParam0->f_7374 == joaat("WEAPON_KIT_DETECTOR"))
			{
				uParam0->f_7374 = 0;
			}
		}
		else
		{
			uParam0->f_7374 = 0;
		}
	}
}

void func_995(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_178(iParam1);
	*uParam0 = (*uParam0 - (*uParam0 && iVar0));
}

void func_996(var uParam0, int iParam1)
{
	int iVar0;
	struct<13> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_225(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	Var1.f_10 = joaat("WEAPON_UNARMED");
	uParam0->f_3[iVar0 /*13*/] = { Var1 };
}

void func_997(int iParam0, int iParam1)
{
	STATS::CHAL_MISSION_ADD_GOAL_PROGRESS_INT(iParam0, iParam1, 1);
}

struct<2> func_998(var uParam0)
{
	if (!__LIB_3__::func_358(uParam0->f_5421))
	{
	}
	return uParam0->f_5421;
}

void func_999(struct<2> Param0, int iParam2)
{
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_4__::func_610(Param0, iParam2))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam2, Param0);
	}
}
