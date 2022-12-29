void func_0(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2));
				if (__LIB_4__::func_562(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
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

void func_1(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && !__LIB_0__::func_86(__LIB_0__::func_85(uParam0))) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 1))
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_13[iVar0 /*12*/], __LIB_0__::func_85(uParam0), true, false, true, true);
		}
		iVar0++;
	}
}

void func_2(var uParam0)
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
	while (iVar0 < 65)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

bool func_3(var uParam0)
{
	return __LIB_4__::func_531(uParam0, 64);
}

bool func_4(int iParam0)
{
	if (!__LIB_0__::func_154(iParam0))
	{
		return false;
	}
	return (iParam0 == joaat("WEAPON_THROWN_DYNAMITE") || iParam0 == joaat("WEAPON_THROWN_MOLOTOV"));
}

int func_5(int iParam0)
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
	__LIB_2__::func_998(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
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

void func_6(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	__LIB_0__::func_172(uParam0->f_2265);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_2265 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630.f_12)
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_2265, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_4__::func_563(uParam0, 1048576);
	__LIB_4__::func_563(uParam0, 2097152);
}

void func_7(var uParam0)
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
	__LIB_0__::func_172(uParam0->f_2265);
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
	uParam0->f_2265 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_2265, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_4__::func_532(uParam0, 2097152);
	__LIB_4__::func_563(uParam0, 1048576);
}

bool func_8(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1406[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[iVar0 /*41*/].f_22)) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1406[iVar0 /*41*/].f_22), sParam1)) && __LIB_0__::func_164(&(uParam0->f_1406[iVar0 /*41*/]), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_9(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_865[iParam1 /*18*/].f_17 == 0 && __LIB_0__::func_78(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_865[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_865[iParam1 /*18*/].f_17 == 1 && __LIB_0__::func_78(uParam0) > 3) && __LIB_0__::func_78(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

bool func_10(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_865[iVar0 /*18*/] == iParam1)
		{
			if (__LIB_0__::func_84(&(uParam0->f_865[iVar0 /*18*/]), 4))
			{
				return true;
			}
			if (uParam0->f_865[iVar0 /*18*/].f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_11(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_4__::func_648(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (__LIB_4__::func_648(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_4__::func_648(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_4__::func_648(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_4__::func_648(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

void func_12(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_4__::func_562(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1406[iVar0 /*41*/].f_29)
		{
			uParam0->f_1406[iVar0 /*41*/].f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1406[iVar0 /*41*/].f_1, -uParam0->f_2278, uParam0->f_2275) };
			vVar1 = { uParam0->f_1406[iVar0 /*41*/].f_7 - uParam0->f_1406[iVar0 /*41*/].f_1 };
			vVar1 = { vVar1 + uParam0->f_2275 };
			uParam0->f_1406[iVar0 /*41*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1406[iVar0 /*41*/].f_1, -uParam0->f_2278, vVar1) };
			uParam0->f_1406[iVar0 /*41*/].f_12 = (uParam0->f_1406[iVar0 /*41*/].f_12 + uParam0->f_2278);
			uParam0->f_1406[iVar0 /*41*/].f_13 = (uParam0->f_1406[iVar0 /*41*/].f_13 + uParam0->f_2278);
			if (uParam0->f_1406[iVar0 /*41*/].f_12 > 180f)
			{
				uParam0->f_1406[iVar0 /*41*/].f_12 = (-180f + (MISC::ABSF(uParam0->f_1406[iVar0 /*41*/].f_12) - 180f));
			}
			else if (uParam0->f_1406[iVar0 /*41*/].f_12 < -180f)
			{
				uParam0->f_1406[iVar0 /*41*/].f_12 = (180f - (MISC::ABSF(uParam0->f_1406[iVar0 /*41*/].f_12) - 180f));
			}
			if (uParam0->f_1406[iVar0 /*41*/].f_13 > 180f)
			{
				uParam0->f_1406[iVar0 /*41*/].f_13 = (-180f + (MISC::ABSF(uParam0->f_1406[iVar0 /*41*/].f_13) - 180f));
			}
			else if (uParam0->f_1406[iVar0 /*41*/].f_13 < -180f)
			{
				uParam0->f_1406[iVar0 /*41*/].f_13 = (180f - (MISC::ABSF(uParam0->f_1406[iVar0 /*41*/].f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_2023[iVar0 /*15*/].f_11)
		{
			uParam0->f_2023[iVar0 /*15*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_2023[iVar0 /*15*/], -uParam0->f_2278, uParam0->f_2275) };
			uParam0->f_2023[iVar0 /*15*/].f_6.f_2 = (uParam0->f_2023[iVar0 /*15*/].f_6.f_2 + uParam0->f_2278);
		}
		iVar0++;
	}
	__LIB_4__::func_563(uParam0, 8388608);
}

bool func_13(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_865[iVar0 /*18*/].f_2 == 9 && uParam0->f_865[iVar0 /*18*/].f_4 == iParam1) && !__LIB_0__::func_129(&(uParam0->f_1912[iParam1 /*10*/]), 32)) && ((uParam0->f_865[iVar0 /*18*/].f_1 == 0 && !__LIB_0__::func_84(&(uParam0->f_865[iVar0 /*18*/]), 512)) || __LIB_0__::func_84(&(uParam0->f_865[iVar0 /*18*/]), 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_14(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_172(uParam0->f_2023[iVar0 /*15*/].f_12);
		iVar0++;
	}
}

void func_15(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_2023[iVar0 /*15*/].f_11)
		{
			__LIB_0__::func_172(uParam0->f_2023[iVar0 /*15*/].f_12);
			switch (uParam0->f_2023[iVar0 /*15*/].f_9)
			{
				case 0:
					uParam0->f_2023[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_2023[iVar0 /*15*/], uParam0->f_2023[iVar0 /*15*/].f_6, uParam0->f_2023[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_2023[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_2023[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_2023[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_2023[iVar0 /*15*/], uParam0->f_2023[iVar0 /*15*/].f_6, uParam0->f_2023[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_2023[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_2023[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

void func_16(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { __LIB_4__::func_571(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_804, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_804, sParam1);
	}
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), iParam2);
		}
		iVar0++;
	}
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_4__::func_629(iParam1, &iVar0))
	{
		return uParam0->f_23[iVar0 /*4*/];
	}
	return 3;
}

Vector3 func_19(var uParam0)
{
	if (__LIB_4__::func_562(uParam0, 8))
	{
		return uParam0->f_1406[uParam0->f_2074 /*41*/].f_7;
	}
	if (uParam0->f_2078 >= 0)
	{
		return uParam0->f_1406[uParam0->f_2078 /*41*/].f_7;
	}
	return 0f, 0f, 0f;
}

void func_20(int iParam0, int iParam1)
{
	__LIB_0__::func_82(1, iParam0, iParam1);
}

bool func_21()
{
	return (__LIB_1__::func_923() || __LIB_1__::func_652());
}

void func_22(var uParam0)
{
	__LIB_4__::func_520(&(uParam0->f_13121));
}

int func_23(var uParam0)
{
	return __LIB_0__::func_127(&(uParam0->f_7375));
}

int func_24(int iParam0)
{
	int iVar0;
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return __LIB_4__::func_525();
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 == iParam0)
		{
			return iVar0;
		}
		if (iVar0 == 26)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(var uParam0)
{
	if (!__LIB_3__::func_358(uParam0->f_5421))
	{
		uParam0->f_5421 = { __LIB_3__::func_355() };
	}
}

void func_26(var uParam0, float fParam1)
{
	__LIB_4__::func_527(&(uParam0->f_7375), fParam1);
}

void func_27(var uParam0, float fParam1)
{
	__LIB_4__::func_528(&(uParam0->f_7375), fParam1);
}

int func_28(int iParam0)
{
	if (!__LIB_2__::func_618(iParam0))
	{
		return BUILTIN::ROUND((iParam0->f_1 * 1000f));
	}
	if (__LIB_2__::func_611(iParam0))
	{
		return BUILTIN::ROUND((iParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((iParam0->f_1 * 1000f)));
}

void func_29(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	__LIB_0__::func_324(sParam0, 2);
}

void func_30()
{
	__LIB_1__::func_979(64);
}

bool func_31(var uParam0)
{
	if (__LIB_4__::func_531(uParam0, 1) || __LIB_4__::func_531(uParam0, 2))
	{
		return true;
	}
	return false;
}

struct<2> func_32(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_4__::func_742(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_33(var uParam0, int iParam1)
{
	__LIB_0__::func_88(&(uParam0->f_7375), iParam1);
}

int func_34(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616), __LIB_4__::func_567()) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				if (bParam2)
				{
					ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616), Global_43616);
				}
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_35(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		__LIB_4__::func_536(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_36(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		__LIB_4__::func_537(uParam0[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_37(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		__LIB_4__::func_536(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_38(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		__LIB_4__::func_536(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		__LIB_4__::func_538(uParam0[iVar0 /*67*/]);
		iVar0++;
	}
}

void func_40(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_0__::func_610(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
}

void func_41(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_4__::func_539(uParam0[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_42(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_4__::func_536(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_43(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_4__::func_536(uParam0[iVar0 /*3*/]);
		iVar0++;
	}
}

void func_44(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_4__::func_540(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
}

void func_45(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	StringCopy(&cVar0, __LIB_4__::func_546(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = __LIB_1__::func_569(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_46(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;
	StringCopy(&cVar0, __LIB_4__::func_546(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = __LIB_1__::func_569(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

void func_47(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_4__::func_550(uParam0, 2048, 1);
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

void func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 0, 1, 0)))
						{
							if (!__LIB_4__::func_551(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 1, 1, 0)))
						{
							if (!__LIB_4__::func_551(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
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

int func_49(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!__LIB_0__::func_131(uParam0[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_50(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!__LIB_3__::func_651(iParam1))
	{
		return false;
	}
	iVar0 = __LIB_4__::func_559(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
	*iParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*iParam0, true);
		}
		return true;
	}
	return false;
}

float func_51(int iParam0)
{
	if (!__LIB_2__::func_618(iParam0))
	{
		return iParam0->f_1;
	}
	if (__LIB_2__::func_611(iParam0))
	{
		return iParam0->f_2;
	}
	return (__LIB_0__::func_36() - iParam0->f_1);
}

bool func_52(var uParam0)
{
	return __LIB_4__::func_566(&(uParam0->f_7375));
}

float func_53(var uParam0)
{
	if (!__LIB_2__::func_618(uParam0))
	{
		return 0f;
	}
	if (__LIB_2__::func_611(uParam0))
	{
		return uParam0->f_2;
	}
	return (__LIB_0__::func_36() - uParam0->f_1);
}

void func_54(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			if (iVar1 == iParam1)
			{
				Global_40.f_9829[iVar0 /*4*/].f_1 = 0;
				Global_40.f_9829[iVar0 /*4*/].f_3 = 1;
				iVar2 = __LIB_4__::func_413(iParam0, iParam1);
				iVar3 = __LIB_4__::func_410(iParam0);
				PERSCHAR::_0x70605812ABC9FF0F(iVar2, iVar3);
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_55(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	bool bVar0;
	if (iParam2 == -1)
	{
		if (__LIB_4__::func_557(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (__LIB_4__::func_557(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (__LIB_4__::func_557(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (__LIB_4__::func_557(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (__LIB_4__::func_557(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (__LIB_4__::func_557(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (__LIB_4__::func_557(uParam0, 5, iParam4))
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
		if ((bVar0 && !uParam0->f_2503) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (__LIB_4__::func_557(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (__LIB_4__::func_557(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

void func_56(var uParam0)
{
	__LIB_0__::func_108(&(uParam0->f_7375));
}

void func_57(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_2495, iVar0, __LIB_0__::func_480(iVar0));
		iVar0++;
	}
}

bool func_58(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_4__::func_588(iParam1);
	return (uParam0 && iVar0) != 0;
}

bool func_59(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_1__::func_510(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, iParam2, iParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					__LIB_1__::func_511(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_576(iParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

bool func_61(int iParam0, int iParam1)
{
	return __LIB_0__::func_252(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

void func_62(var uParam0)
{
	bool bVar0;
	if (!__LIB_4__::func_562(uParam0, 134217728))
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
			__LIB_4__::func_532(uParam0, 134217728);
		}
	}
}

void func_63(var uParam0)
{
	__LIB_0__::func_200(&(uParam0->f_2294));
}

int func_64(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_865[iVar0 /*18*/].f_17 == 2 && __LIB_0__::func_84(&(uParam0->f_865[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<8> func_65(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_4__::func_607(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { __LIB_0__::func_134() };
	}
	return Var0;
}

Vector3 func_66(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	switch (uParam0->f_1406[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_1406[iParam1 /*41*/].f_4 - uParam0->f_1406[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { __LIB_0__::func_173(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_1406[iParam1 /*41*/].f_1 + uParam0->f_1406[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_1406[iParam1 /*41*/].f_1 + uParam0->f_1406[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!__LIB_0__::func_86(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_1406[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_1406[iParam1 /*41*/].f_7, true))
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
			if (uParam0->f_1406[iParam1 /*41*/].f_13 < uParam0->f_1406[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_1406[iParam1 /*41*/].f_12 + (uParam0->f_1406[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_1406[iParam1 /*41*/].f_12 + uParam0->f_1406[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_1406[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_1406[iParam1 /*41*/].f_11 + 5f))) };
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

void func_67(var uParam0)
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
		__LIB_4__::func_550(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	__LIB_4__::func_550(uParam0, 16, 1);
}

void func_68(var uParam0, char* sParam1)
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
			MemCopy(&(uParam0->f_800), {__LIB_0__::func_98("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_800), {__LIB_0__::func_98("cutscene@", sParam1, 1, 63)}, 4);
	}
	__LIB_0__::func_88(uParam0, 8192);
}

void func_69(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_0__::func_137() };
	__LIB_4__::func_568(uParam0, &Var0);
}

bool func_70(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_4__::func_742(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_71(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
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
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
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

void func_72(var uParam0, int iParam1)
{
	__LIB_1__::func_683(&(uParam0->f_64), iParam1);
}

void func_73(var uParam0, int iParam1)
{
	__LIB_1__::func_681(&(uParam0->f_64), iParam1);
}

void func_74(var uParam0)
{
	__LIB_4__::func_625(&(uParam0->f_7375));
}

void func_75(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_628(uParam0) > 0)
	{
		if (__LIB_4__::func_629(8, &iVar0) && __LIB_4__::func_627(uParam0, 8) > 0)
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_23[iVar0 /*4*/].f_3);
		}
		if (__LIB_4__::func_629(512, &iVar0) && __LIB_4__::func_627(uParam0, 512) > 0)
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_23[iVar0 /*4*/].f_3);
		}
		if (__LIB_4__::func_629(16, &iVar0) && __LIB_4__::func_627(uParam0, 16) > 0)
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_23[iVar0 /*4*/].f_3);
		}
		if (__LIB_4__::func_629(4, &iVar0) && __LIB_4__::func_627(uParam0, 4) > 0)
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_23[iVar0 /*4*/].f_3);
		}
	}
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
	__LIB_2__::func_998(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (__LIB_2__::func_999(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

void func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_2078 < 0)
	{
		return;
	}
	if ((uParam0->f_2289 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291)) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_2291))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_2291, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || __LIB_0__::func_94(iVar2, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1) < __LIB_0__::func_94(iVar1, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1))
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
		if (!__LIB_4__::func_562(uParam0, 8192))
		{
			if (__LIB_0__::func_94(iVar1, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1) <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 + 5f) || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_2291) != 5f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 5f);
				}
			}
			else if ((!__LIB_1__::func_533(512) || __LIB_4__::func_635(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_2291) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 50f);
			}
		}
	}
}

bool func_78(var uParam0)
{
	if (uParam0->f_2078 < 0)
	{
		return false;
	}
	if (__LIB_4__::func_562(uParam0, 33554432))
	{
		return false;
	}
	if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 2) && uParam0->f_2287)
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2265) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2266))
	{
		return true;
	}
	if (__LIB_4__::func_562(uParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
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
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (__LIB_0__::func_27(*iParam1, 128))
	{
		if (!__LIB_0__::func_163(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return false;
			}
			if (!__LIB_0__::func_163(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (__LIB_1__::func_870(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!__LIB_0__::func_27(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((__LIB_0__::func_27(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			__LIB_1__::func_683(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!__LIB_0__::func_27(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!__LIB_0__::func_27(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (__LIB_0__::func_27(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (__LIB_0__::func_27(*iParam1, 2336))
		{
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (__LIB_1__::func_866(iVar2, *iParam1))
			{
				__LIB_1__::func_681(iParam1, 32);
				__LIB_1__::func_681(iParam1, 256);
				__LIB_1__::func_681(iParam1, 2048);
				__LIB_1__::func_683(iParam1, 512);
				__LIB_1__::func_683(iParam1, 1024);
				__LIB_1__::func_683(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (__LIB_0__::func_27(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				__LIB_1__::func_681(iParam1, 64);
			}
		}
		if (__LIB_0__::func_27(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 1024))) || __LIB_0__::func_27(iParam2, 8)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			__LIB_1__::func_683(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 4096)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			__LIB_1__::func_683(iParam1, 2048);
			__LIB_1__::func_683(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && __LIB_0__::func_27(iParam2, 32)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			__LIB_1__::func_683(iParam1, 256);
			__LIB_1__::func_683(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			__LIB_1__::func_683(iParam1, 64);
		}
		else if (!__LIB_0__::func_27(iParam2, 1))
		{
			if (!__LIB_0__::func_27(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, true, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (__LIB_1__::func_870(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!__LIB_0__::func_27(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			__LIB_1__::func_683(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			__LIB_1__::func_683(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			__LIB_1__::func_683(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!__LIB_0__::func_27(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		__LIB_1__::func_683(iParam1, 8);
	}
	return false;
}

int func_80(var uParam0, int iParam1)
{
	if (uParam0->f_865[iParam1 /*18*/].f_1 > uParam0->f_2073)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_3 /*13*/].f_2))
	{
	}
	if (uParam0->f_2073 < 0 || uParam0->f_2073 > 6)
	{
		return 0;
	}
	if (uParam0->f_865[iParam1 /*18*/].f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_865[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		return 1;
	}
	if (!__LIB_4__::func_562(uParam0, 4096) && uParam0->f_2286)
	{
		return 0;
	}
	if (Global_1430231.f_4)
	{
		return 0;
	}
	if (uParam0->f_865[iParam1 /*18*/] != uParam0->f_2074)
	{
		return 0;
	}
	if (__LIB_0__::func_78(uParam0) > 3 && uParam0->f_865[iParam1 /*18*/] != uParam0->f_2074)
	{
		return 0;
	}
	if ((((__LIB_0__::func_78(uParam0) > 3 && uParam0->f_865[iParam1 /*18*/].f_17 == 1) && __LIB_4__::func_576(uParam0) != 11) && __LIB_4__::func_575(uParam0, uParam0->f_2074)) && uParam0->f_865[iParam1 /*18*/].f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_865[iParam1 /*18*/].f_2 == 9 && uParam0->f_865[iParam1 /*18*/].f_4 >= 0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8, __LIB_0__::func_731(Global_35)))
		{
			if (__LIB_0__::func_129(&(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/]), 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_129(&(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/]), 8))
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

void func_81(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 65)
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

void func_82(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_12)
		{
			__LIB_4__::func_653(&(uParam0->f_3[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

void func_83(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_4__::func_632(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
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

Vector3 func_84(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	MemCopy(&uVar0, {__LIB_4__::func_606(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_805))
	{
		uParam0->f_805 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_800), 0, 0, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_805, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_805, __LIB_0__::func_731(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_805, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_805);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_85(var uParam0)
{
	StringCopy(&(uParam0->f_800), "", 32);
	__LIB_4__::func_654(uParam0);
	__LIB_0__::func_487(uParam0, 0f, 0f, 0f);
	__LIB_4__::func_655(uParam0);
}

int func_86(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_4__::func_629(iParam1, &iVar0))
	{
		return uParam0->f_23[iVar0 /*4*/].f_2;
	}
	return 10000;
}

int func_87(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_4__::func_629(iParam1, &iVar0))
	{
		return uParam0->f_23[iVar0 /*4*/].f_1;
	}
	return 500;
}

bool func_88(var uParam0)
{
	return __LIB_4__::func_628(uParam0) >= uParam0->f_5;
}

void func_89(var uParam0, int iParam1)
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
	__LIB_0__::func_172(uParam0->f_2265);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_2272 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_2272 * FtoV(__LIB_4__::func_634(iParam1)) };
	uParam0->f_2265 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_2265, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_4__::func_532(uParam0, 1048576);
	__LIB_4__::func_563(uParam0, 2097152);
}

void func_90(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0 /*13*/].f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[iVar0 /*13*/].f_4)))
			{
				__LIB_0__::func_928(&(uParam0->f_2161), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), &(uParam0->f_3[iVar0 /*13*/].f_4), 0);
			}
		}
		iVar0++;
	}
}

void func_91(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 103)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_2279, iVar0, __LIB_4__::func_667(iVar0));
		iVar0++;
	}
}

void func_92(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_4__::func_648(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_4__::func_648(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_4__::func_648(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_4__::func_648(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (__LIB_4__::func_648(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (__LIB_4__::func_648(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (__LIB_4__::func_648(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (__LIB_4__::func_648(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (__LIB_4__::func_648(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (__LIB_4__::func_648(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (__LIB_4__::func_648(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (__LIB_4__::func_648(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (__LIB_4__::func_648(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (__LIB_4__::func_648(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

bool func_93(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_2311))
	{
		uParam0->f_2311 = ITEMSET::CREATE_ITEMSET(true);
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
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311))
					{
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_2311);
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

bool func_94(char* sParam0, int iParam1)
{
	return ((((((((((iParam1 == 0 && __LIB_4__::func_668(sParam0, 1)) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 2))) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 4))) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 8))) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 16))) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 32))) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 64))) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 128))) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 256))) || (iParam1 == 1 && __LIB_4__::func_668(sParam0, 512)));
}

char* func_95(int iParam0)
{
	if (__LIB_0__::func_31(iParam0))
	{
		return __LIB_0__::func_323(__LIB_4__::func_669(iParam0));
	}
	switch (iParam0)
	{
		case 28:
			return "HERCULE";
		case 30:
			return "LEON";
		case 29:
			return "BAPTISTE";
		case 31:
			return "RAINSFALL";
		case 35:
			return "PAYTAH";
		case 32:
			return "MONROE";
		case 33:
			return "ARCHIBALD";
		case 34:
			return "LEIGHGRAY";
		case 36:
			return "CLAUDIA";
		case 37:
			return "REDSHIRT1";
		case 38:
			return "REDSHIRT2";
		case 39:
			return "REDSHIRT3";
		case 41:
			return "TOM_DICKENS";
		case 40:
			return "HORSE_PLAYER";
		default:
			break;
	}
	return "";
}

struct<5> func_96(int iParam0)
{
	struct<5> Var0;
	Var0 = { __LIB_3__::func_0(iParam0, joaat("CHARACTER"), __LIB_0__::func_217(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

bool func_97(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar12;
	int iVar13;
	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_865[iVar12 /*18*/].f_17 == 1 && uParam0->f_865[iVar12 /*18*/].f_2 == 9) && uParam0->f_865[iVar12 /*18*/].f_4 >= 0) && uParam0->f_865[iVar12 /*18*/] == iParam1)
		{
			iVar13 = uParam0->f_1912[uParam0->f_865[iVar12 /*18*/].f_4 /*10*/].f_8;
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

void func_98(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	vector3 vVar0;
	if (bParam2)
	{
		TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, *(uParam3[0 /*3*/]), 1), 0);
	}
	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	if (__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/]), 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_40, 0);
	}
	else
	{
		vVar0 = { __LIB_4__::func_673(uParam0, iParam1) };
		if (!__LIB_0__::func_86(vVar0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
	}
}

void func_99(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;
	vVar0 = { __LIB_4__::func_673(uParam0, iParam1) };
	if (!__LIB_0__::func_86(vVar0))
	{
		if (bParam2)
		{
			TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, vParam3, 1), 0);
		}
		fVar3 = __LIB_0__::func_152(vParam3, vVar0, 1);
		if (__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar3 = uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_40;
		}
		if (__LIB_0__::func_84(&(uParam0->f_865[iParam1 /*18*/]), 256))
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
		if (!__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/]), 4) && !__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/]), 2))
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
		if (__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar5 = uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_40;
		}
		fVar5 = (fVar5 % 360f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

int func_100(int iParam0)
{
	return __LIB_4__::func_775(iParam0);
}

void func_101(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_0__::func_755(uParam1[iVar0 /*16*/], 1048576) && (uParam1[iVar0 /*16*/])->f_9 == 9)
		{
			__LIB_1__::func_388(uParam1[iVar0 /*16*/], 1);
		}
		iVar0++;
	}
}

void func_102()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (__LIB_0__::func_5(iVar0))
		{
			if (__LIB_3__::func_736(iVar0, 4))
			{
				if (__LIB_3__::func_736(iVar0, 16))
				{
					__LIB_4__::func_684(iVar0, 1);
				}
				if (__LIB_3__::func_736(iVar0, 8))
				{
					__LIB_4__::func_685(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_103(bool bParam0)
{
	if (!bParam0)
	{
		__LIB_4__::func_686(11);
	}
	else
	{
		__LIB_4__::func_687(11);
	}
}

int func_104(var uParam0)
{
	char[] cVar0[8];
	cVar0 = __LIB_0__::func_631(uParam0->f_607);
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_105(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_4__::func_742(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_TEXT_DATABASE_REQUEST(&Var0);
	}
}

void func_106(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	__LIB_0__::func_928(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_107(int iParam0)
{
	__LIB_2__::func_620(iParam0, 0f);
}

void func_108(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (__LIB_0__::func_5(iVar0))
		{
			if (__LIB_3__::func_736(iVar0, 4))
			{
				__LIB_4__::func_684(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_109(int iParam0, int iParam1)
{
	if (__LIB_0__::func_797(0))
	{
		if (__LIB_1__::func_53(0))
		{
			__LIB_1__::func_54(0);
		}
	}
	if (__LIB_0__::func_797(1))
	{
		if (__LIB_1__::func_53(1))
		{
			__LIB_1__::func_54(1);
		}
	}
}

int func_110()
{
	return __LIB_0__::func_909(__LIB_4__::func_533());
}

void func_111(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
	iVar0 = __LIB_4__::func_552(uParam0, iParam1);
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
		iVar1 = __LIB_4__::func_553(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			__LIB_4__::func_554(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_4__::func_555(uParam0);
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

void func_112()
{
	CAM::_0x8910C24B7E0046EC();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	__LIB_1__::func_538(0);
	__LIB_3__::func_807();
}

void func_113(bool bParam0, bool bParam1)
{
	if (__LIB_1__::func_960(255) == 4)
	{
		return;
	}
	if (__LIB_0__::func_86(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		__LIB_4__::func_686(0);
	}
	else
	{
		if (bParam1)
		{
			__LIB_4__::func_840(0, 0, 0, 1);
		}
		__LIB_4__::func_687(0);
		__LIB_1__::func_963(&(Global_1109400.f_389));
		Global_1109400.f_389 = 0f;
		Global_1109400.f_389.f_5 = 1;
		Global_1109400.f_389.f_16 = 0;
		Global_1109400.f_389.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1109400.f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400.f_389.f_17 = { Global_1899378.f_23.f_1, Global_1899378.f_23.f_1, Global_1899378.f_23.f_1 };
		Global_1109400.f_389.f_17.f_9 = joaat("VOLSPHERE");
		__LIB_1__::func_961(&(Global_1109400.f_428));
		Global_1109400.f_428.f_6 = { Global_1109400.f_389.f_17.f_6 };
		Global_1109400.f_428 = Global_1109400.f_389;
		Global_1109400.f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400.f_22.f_16 = 0;
			Global_1109400.f_22.f_17 = 0;
		}
	}
	__LIB_1__::func_964(Global_1109400.f_389, 42);
	__LIB_1__::func_962(Global_1109400.f_428, 42);
}

void func_114(int iParam0, bool bParam1)
{
	int iVar0;
	if (PERSCHAR::_0xA8120EBEAF290C7A(__LIB_0__::func_748(iParam0, 0)))
	{
		iVar0 = PERSCHAR::_0x69786495C92A3044(__LIB_0__::func_748(iParam0, 0));
		if (iVar0 != Global_1360165[iParam0 /*1157*/].f_47 || bParam1)
		{
			Global_1360165[iParam0 /*1157*/].f_47 = iVar0;
			StringCopy(&(Global_1360165[iParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(__LIB_0__::func_748(iParam0, 0), Global_1360165[iParam0 /*1157*/].f_47), 64);
			Global_1360165[iParam0 /*1157*/].f_56 = 1;
		}
	}
}

void func_115(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56, false);
	}
	__LIB_4__::func_615(uParam0, 4);
	HUD::_HIDE_HUD_COMPONENT(-1679307491);
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if ((__LIB_0__::func_81(uParam0) == 0 && uParam0->f_2074 >= 0) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		__LIB_4__::func_612(uParam0, 64);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	__LIB_3__::func_739(0);
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(0);
	}
}

void func_116()
{
	struct<10> Var0;
	struct<16> Var10;
	Global_1310720.f_8 = 0;
	Global_1935630.f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	__LIB_4__::func_709(Var10, 0);
}

void func_117(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (__LIB_0__::func_1(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		__LIB_0__::func_7(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		__LIB_0__::func_7(&(Global_1347343.f_11), 16384);
	}
	if (__LIB_0__::func_302() >= 2)
	{
		if (!__LIB_0__::func_1(Global_1347343.f_11, 16384))
		{
			__LIB_0__::func_7(&(Global_1347343.f_11), 8);
		}
		__LIB_0__::func_303(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	__LIB_0__::func_7(&Global_1935630, 2048);
	__LIB_1__::func_420(bParam5);
}

void func_118(var uParam0, int iParam1, char* sParam2, bool bParam3)
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
	__LIB_4__::func_532(uParam0, 2);
}

void func_119(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = __LIB_1__::func_447(vParam1, 1);
}

float func_120(var uParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	fVar0 = -1f;
	if ((CAM::DOES_CAM_EXIST(uParam0->f_2) && CAM::IS_CAM_INTERPOLATING(uParam0->f_2)) || !(fParam1 >= 0.99f || fParam1 == -1f))
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_2) && CAM::IS_CAM_INTERPOLATING(uParam0->f_2))
		{
			fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_2);
		}
		else if (!(fParam1 >= 0.99f || fParam1 == -1f))
		{
			fVar0 = fParam1;
		}
		else
		{
			fVar0 = -1f;
		}
	}
	fVar3 = fVar0;
	fVar1 = 0.1f;
	fVar2 = 0.9f;
	fVar4 = __LIB_0__::func_251(((fVar3 - fVar1) / (fVar2 - fVar1)), 0f, 1f);
	iVar5 = BUILTIN::ROUND((IntToFloat(uParam0->f_7) * fVar4));
	iVar6 = uParam0->f_24;
	__LIB_1__::func_446(&iVar6, iVar5, 0, 0, 0, 0, 0, 0);
	CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar6), __LIB_0__::func_42(iVar6), __LIB_0__::func_43(iVar6));
	return fVar0;
}

int func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = __LIB_0__::func_623(iParam0);
	if (__LIB_0__::func_83(iVar1))
	{
		iVar0 = Global_1835011[iVar1 /*74*/].f_1;
	}
	else
	{
		iVar2 = __LIB_0__::func_624(iParam0);
		if (__LIB_0__::func_5(iVar2))
		{
			iVar0 = Global_1347702[iVar2 /*49*/].f_15;
		}
		else if (iParam0 == joaat("CABR01"))
		{
			iVar0 = __LIB_1__::func_293(0, 10, 11, joaat("CABR01"));
		}
	}
	return iVar0;
}

void func_122(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout")) && !uParam0->f_2159)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout", true);
					}
				}
				else if (__LIB_4__::func_562(uParam0, 32768) && __LIB_0__::func_129(&(uParam0->f_1912[iVar0 /*10*/]), 128))
				{
					__LIB_4__::func_712(uParam0->f_1912[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8, 0);
			}
		}
		iVar0++;
	}
}

void func_123(var uParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0 /*13*/].f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { __LIB_4__::func_798(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) && ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
				if (PED::IS_PED_HUMAN(iVar9) && iVar9 != Global_35)
				{
					__LIB_4__::func_640(iVar9, Global_35, uParam2, uParam3);
				}
			}
		}
		iVar0++;
	}
}

void func_124(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0 /*13*/].f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { __LIB_4__::func_798(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
					{
						PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false);
					}
				}
				else if (__LIB_4__::func_649(uParam0->f_3[iVar0 /*13*/].f_1))
				{
					if (__LIB_0__::func_181())
					{
						StringCopy(&cVar1, __LIB_0__::func_140(joaat("PLAYER_ZERO")), 64);
						if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
						}
					}
					else
					{
						StringCopy(&cVar1, __LIB_0__::func_140(joaat("PLAYER_THREE")), 64);
						if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_125(var uParam0, int iParam1)
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
	if ((__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 0, 0)) && !__LIB_0__::func_274(&(uParam0->f_1406[iParam1 /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_1406[iParam1 /*41*/]), 64))
	{
		return true;
	}
	return false;
}

void func_126(int iParam0)
{
	if (__LIB_4__::func_522(iParam0, 0))
	{
		__LIB_2__::func_268(262144, 5, 0, 1);
		__LIB_1__::func_980(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			__LIB_2__::func_212(101, 7, 1f, 0, 1);
			__LIB_2__::func_212(89, 7, 1f, 0, 1);
			break;
	}
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_2__::func_824(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 == iParam1)
		{
			__LIB_4__::func_713(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/]));
		}
		iVar0++;
	}
	return 1;
}

bool func_128()
{
	if (__LIB_1__::func_707(joaat("CONSUMABLE_HORSE_REVIVER"), 1, 0) || __LIB_1__::func_707(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 1, 0))
	{
		return true;
	}
	return false;
}

void func_129(int iParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*iParam0, 8));
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*iParam0, 2) || __LIB_0__::func_1(*iParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*iParam0, 32))
	{
		__LIB_1__::func_775(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_1__::func_704(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*iParam0 = 0;
}

bool func_130(var uParam0, bool bParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(*uParam0))
	{
		return false;
	}
	if (__LIB_0__::func_125(*uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0)))
	{
		return false;
	}
	iVar0 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0));
	if (__LIB_0__::func_31(iVar0))
	{
		if (__LIB_4__::func_531(uParam0, 256) || !bParam1)
		{
			if (__LIB_0__::func_287(iVar0, 37, 1) && __LIB_0__::func_866(iVar0, 0))
			{
				__LIB_4__::func_719(iVar0, 0, 1, 1, 1, 0);
			}
		}
		else if (bParam1)
		{
			__LIB_4__::func_719(iVar0, 1, 1, 1, 1, 0);
		}
		return true;
	}
	return false;
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

bool func_132(int iParam0)
{
	if (__LIB_2__::func_27(iParam0, 16))
	{
		return false;
	}
	return __LIB_2__::func_27(iParam0, 524288);
}

void func_133(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2));
				if (__LIB_4__::func_725(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
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

Vector3 func_134(var uParam0)
{
	return __LIB_0__::func_85(&(uParam0->f_428));
}

struct<4> func_135(int iParam0)
{
	return iParam0->f_2880;
}

void func_136(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_462[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_446 };
			uParam0->f_462[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	__LIB_4__::func_741(uParam0, sParam1);
	__LIB_4__::func_733(uParam0, 2097152, 1);
	__LIB_0__::func_88(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_444, sParam1, true);
}

void func_137(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_505 = { vParam1 };
	uParam0->f_508 = iParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_4__::func_733(uParam0, 2048, 1);
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

bool func_138(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_5__::func_32(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_139(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_17 == 1 && uParam0->f_475[iVar0 /*18*/].f_2 == 4) && uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_140(var uParam0)
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
	iVar0 = uParam0->f_1688;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_1016[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_1016[iVar0 /*41*/].f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_1016[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_1016[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1875);
		if (bVar4)
		{
			vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1875) };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_1016[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_1016[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_1016[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902))
			{
				__LIB_4__::func_757(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1902 == iVar9)
			{
				__LIB_4__::func_757(uParam0, 65536);
				return;
			}
		}
		__LIB_4__::func_755(uParam0, 65536);
	}
}

void func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1921);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1921);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_142(var uParam0, int iParam1)
{
	return (uParam0->f_1665 && iParam1) != 0;
}

void func_143(var uParam0)
{
	uParam0->f_1665 = 0;
}

bool func_144(var uParam0)
{
	if (uParam0->f_1770)
	{
		return false;
	}
	return uParam0->f_1769;
}

bool func_145(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 0) < uParam0->f_1016[uParam0->f_1684 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684 /*41*/].f_14 >= uParam0->f_1016[uParam0->f_1684 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_146(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 0) < uParam0->f_1016[uParam0->f_1684 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684 /*41*/].f_15 >= uParam0->f_1016[uParam0->f_1684 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_147(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_148(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { __LIB_4__::func_746(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_444, sParam1);
	}
}

void func_149(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 || iParam1);
}

void func_150(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 - (uParam0->f_1665 && iParam1));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_1016[iParam1 /*41*/].f_28 = 1;
		uParam0->f_1684 = iParam1;
		uParam0->f_1688 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1769 = 1;
	}
}

void func_152(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 - (uParam0->f_1666.f_1 && iParam1));
}

int func_153(var uParam0)
{
	if (uParam0->f_1685 < 0 || uParam0->f_475[uParam0->f_1685 /*18*/].f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1522[uParam0->f_475[uParam0->f_1685 /*18*/].f_4 /*10*/].f_8;
}

void func_154(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	__LIB_0__::func_172(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630.f_12)
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_4__::func_755(uParam0, 1048576);
	__LIB_4__::func_755(uParam0, 2097152);
}

void func_155(var uParam0)
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
	__LIB_0__::func_172(uParam0->f_1875);
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
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_4__::func_757(uParam0, 2097152);
	__LIB_4__::func_755(uParam0, 1048576);
}

bool func_156(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_475[iVar0 /*18*/].f_2 && uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_157(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_22)) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1016[iVar0 /*41*/].f_22), sParam1)) && __LIB_0__::func_164(&(uParam0->f_1016[iVar0 /*41*/]), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_158(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 0 && __LIB_0__::func_78(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_475[iParam1 /*18*/].f_17 == 1 && __LIB_0__::func_78(uParam0) > 3) && __LIB_0__::func_78(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

bool func_159(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			if (__LIB_0__::func_84(&(uParam0->f_475[iVar0 /*18*/]), 4))
			{
				return true;
			}
			if (uParam0->f_475[iVar0 /*18*/].f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_160(var uParam0)
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
	uParam0->f_459 = { Var1 };
	StringCopy(&(uParam0->f_459), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_475)
	{
		uParam0->f_475[iVar0 /*18*/] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1522)
	{
		uParam0->f_1522[iVar0 /*10*/] = { Var76 };
		iVar0++;
	}
	uParam0->f_1683 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		uParam0->f_1016[iVar0 /*41*/] = { Var35 };
		uParam0->f_1345[iVar0 /*22*/] = { Var86 };
		iVar0++;
	}
	uParam0->f_1684 = -1;
	uParam0->f_1765 = { Global_36 };
	uParam0->f_1768 = 0;
	uParam0->f_1769 = 0;
	uParam0->f_1688 = -1;
	uParam0->f_1689 = -1f;
	uParam0->f_1664 = 0;
	uParam0->f_1666 = 0;
	uParam0->f_1666.f_1 = 0;
	uParam0->f_1903 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
	}
}

void func_161(var uParam0, int iParam1)
{
	uParam0->f_1889.f_1 = 0;
	uParam0->f_1889.f_3 = iParam1;
}

bool func_162(var uParam0, int iParam1)
{
	var uVar0;
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1889.f_1), &(uParam0->f_1889));
	return uVar0;
}

bool func_163(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_164(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_FLOAT(uParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_165(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_STRING(uParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_166(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, &(uParam0->f_1889));
	return uVar0;
}

var func_167(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &(uParam0->f_1889));
	return uVar0;
}

void func_168(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_4__::func_725(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			uParam0->f_1016[iVar0 /*41*/].f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1, -uParam0->f_1888, uParam0->f_1885) };
			vVar1 = { uParam0->f_1016[iVar0 /*41*/].f_7 - uParam0->f_1016[iVar0 /*41*/].f_1 };
			vVar1 = { vVar1 + uParam0->f_1885 };
			uParam0->f_1016[iVar0 /*41*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1, -uParam0->f_1888, vVar1) };
			uParam0->f_1016[iVar0 /*41*/].f_12 = (uParam0->f_1016[iVar0 /*41*/].f_12 + uParam0->f_1888);
			uParam0->f_1016[iVar0 /*41*/].f_13 = (uParam0->f_1016[iVar0 /*41*/].f_13 + uParam0->f_1888);
			if (uParam0->f_1016[iVar0 /*41*/].f_12 > 180f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_12 = (-180f + (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_12) - 180f));
			}
			else if (uParam0->f_1016[iVar0 /*41*/].f_12 < -180f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_12 = (180f - (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_12) - 180f));
			}
			if (uParam0->f_1016[iVar0 /*41*/].f_13 > 180f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_13 = (-180f + (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_13) - 180f));
			}
			else if (uParam0->f_1016[iVar0 /*41*/].f_13 < -180f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_13 = (180f - (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0 /*15*/].f_11)
		{
			uParam0->f_1633[iVar0 /*15*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1633[iVar0 /*15*/], -uParam0->f_1888, uParam0->f_1885) };
			uParam0->f_1633[iVar0 /*15*/].f_6.f_2 = (uParam0->f_1633[iVar0 /*15*/].f_6.f_2 + uParam0->f_1888);
		}
		iVar0++;
	}
	__LIB_4__::func_755(uParam0, 8388608);
}

bool func_169(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_475[iVar0 /*18*/].f_2 == 9 && uParam0->f_475[iVar0 /*18*/].f_4 == iParam1) && !__LIB_0__::func_129(&(uParam0->f_1522[iParam1 /*10*/]), 32)) && ((uParam0->f_475[iVar0 /*18*/].f_1 == 0 && !__LIB_0__::func_84(&(uParam0->f_475[iVar0 /*18*/]), 512)) || __LIB_0__::func_84(&(uParam0->f_475[iVar0 /*18*/]), 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_170(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_172(uParam0->f_1633[iVar0 /*15*/].f_12);
		iVar0++;
	}
}

void func_171(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0 /*15*/].f_11)
		{
			__LIB_0__::func_172(uParam0->f_1633[iVar0 /*15*/].f_12);
			switch (uParam0->f_1633[iVar0 /*15*/].f_9)
			{
				case 0:
					uParam0->f_1633[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_1633[iVar0 /*15*/], uParam0->f_1633[iVar0 /*15*/].f_6, uParam0->f_1633[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1633[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1633[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_1633[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_1633[iVar0 /*15*/], uParam0->f_1633[iVar0 /*15*/].f_6, uParam0->f_1633[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1633[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1633[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

Vector3 func_172(var uParam0)
{
	if (__LIB_4__::func_725(uParam0, 8))
	{
		return uParam0->f_1016[uParam0->f_1684 /*41*/].f_7;
	}
	if (uParam0->f_1688 >= 0)
	{
		return uParam0->f_1016[uParam0->f_1688 /*41*/].f_7;
	}
	return 0f, 0f, 0f;
}

Vector3 func_173(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_475[iParam1 /*18*/].f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_475[iParam1 /*18*/].f_3 == uParam0->f_3[iVar0 /*13*/].f_3)
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

void func_174(int iParam0)
{
	__LIB_4__::func_734(&(iParam0->f_428));
}

void func_175(int iParam0)
{
	var uVar0;
	MemCopy(&uVar0, {__LIB_4__::func_542(*iParam0)}, 3);
	SCRIPTS::REQUEST_SCRIPT(&uVar0);
}

bool func_176(int iParam0, int iParam1)
{
	return __LIB_4__::func_725(&(iParam0->f_958), iParam1);
}

void func_177()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_4__::func_738())
	{
		return;
	}
	__LIB_4__::func_739();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (!__LIB_0__::func_31(iVar1))
		{
		}
		else
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (__LIB_4__::func_740(iVar2))
			{
				PED::SET_PED_CONFIG_FLAG(iVar2, 230, true);
			}
		}
		iVar0++;
	}
}

void func_178(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_5__::func_32(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_TEXT_DATABASE_REQUEST(&Var0);
	}
}

void func_179(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
	if (!__LIB_0__::func_79(iVar0))
	{
		return;
	}
	__LIB_1__::func_109(iVar0, 1024);
}

void func_180(int iParam0)
{
	if (Global_1935630.f_13)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
		__LIB_0__::func_267(0);
		__LIB_4__::func_726(iParam0, 1);
	}
	__LIB_0__::func_112(1, 0, 1);
}

void func_181(var uParam0, vector3 vParam1)
{
	__LIB_0__::func_487(&(uParam0->f_428), vParam1);
}

void func_182(int iParam0)
{
	if (__LIB_4__::func_745(&(iParam0->f_428)) != 15f || __LIB_4__::func_743(&(iParam0->f_428)) != 20f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			__LIB_4__::func_753(&(iParam0->f_428), 50f);
			__LIB_4__::func_754(&(iParam0->f_428), 75f);
			break;
		case 34:
			__LIB_4__::func_753(&(iParam0->f_428), 35f);
			__LIB_4__::func_754(&(iParam0->f_428), 50f);
			break;
		case 62:
			__LIB_4__::func_753(&(iParam0->f_428), 25f);
			__LIB_4__::func_754(&(iParam0->f_428), 30f);
			break;
		default:
			break;
	}
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, Global_43616))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, Global_43616);
	}
	if (bParam2)
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, __LIB_4__::func_567(), true);
	}
}

void func_184(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	if (__LIB_0__::func_127(&(uParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428.f_13[iVar12 /*12*/]))
		{
			Global_43619[iVar12 /*12*/] = { uParam0->f_428.f_13[iVar12 /*12*/] };
		}
		else
		{
			Global_43619[iVar12 /*12*/] = { Var0 };
		}
		iVar12++;
	}
}

struct<8> func_185(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_4__::func_758(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { __LIB_0__::func_134() };
	}
	return Var0;
}

void func_186(var uParam0)
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
		__LIB_4__::func_733(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	__LIB_4__::func_733(uParam0, 16, 1);
}

void func_187(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_0__::func_137() };
	__LIB_4__::func_741(uParam0, &Var0);
}

void func_188(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_4__::func_759(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
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

void func_189(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 0, 1, 0)))
						{
							if (!__LIB_4__::func_762(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 1, 1, 0)))
						{
							if (!__LIB_4__::func_762(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
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

void func_190(var uParam0)
{
	StringCopy(&(uParam0->f_440), "", 32);
	__LIB_4__::func_763(uParam0);
	__LIB_0__::func_487(uParam0, 0f, 0f, 0f);
	__LIB_4__::func_764(uParam0);
}

int func_191(int iParam0)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return 1;
	}
	return __LIB_4__::func_543(iParam0);
	return -1;
}

void func_192(var uParam0)
{
	bool bVar0;
	if (!__LIB_4__::func_725(uParam0, 134217728))
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
			__LIB_4__::func_757(uParam0, 134217728);
		}
	}
}

int func_193(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/].f_17 == 2 && __LIB_0__::func_84(&(uParam0->f_475[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_194(int iParam0, bool bParam1)
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
	PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(iParam0));
	PERSCHAR::_0xFC77C5B44D5FF7C0(__LIB_0__::func_120(iParam0));
	__LIB_0__::func_119(iParam0, 0);
	return true;
}

void func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_1688 < 0)
	{
		return;
	}
	if ((uParam0->f_1899 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901)) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_1901))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_1901, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || __LIB_0__::func_94(iVar2, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) < __LIB_0__::func_94(iVar1, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1))
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
		if (!__LIB_4__::func_725(uParam0, 8192))
		{
			if (__LIB_0__::func_94(iVar1, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f) || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 5f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 5f);
				}
			}
			else if ((!__LIB_1__::func_533(512) || __LIB_4__::func_635(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
			}
		}
	}
}

bool func_196(var uParam0)
{
	if (uParam0->f_1688 < 0)
	{
		return false;
	}
	if (__LIB_4__::func_725(uParam0, 33554432))
	{
		return false;
	}
	if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1875) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1876))
	{
		return true;
	}
	if (__LIB_4__::func_725(uParam0, 65536))
	{
		return true;
	}
	return false;
}

void func_197(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 35)
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

void func_198(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_12)
		{
			__LIB_4__::func_653(&(uParam0->f_3[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

void func_199(var uParam0, int iParam1)
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
	__LIB_0__::func_172(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1882 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1882 * FtoV(__LIB_4__::func_634(iParam1)) };
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_4__::func_757(uParam0, 1048576);
	__LIB_4__::func_755(uParam0, 2097152);
}

void func_200(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 103)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1889, iVar0, __LIB_4__::func_667(iVar0));
		iVar0++;
	}
}

bool func_201(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		uParam0->f_1921 = ITEMSET::CREATE_ITEMSET(true);
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
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
					{
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
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
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
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

bool func_202(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar12;
	int iVar13;
	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_475[iVar12 /*18*/].f_17 == 1 && uParam0->f_475[iVar12 /*18*/].f_2 == 9) && uParam0->f_475[iVar12 /*18*/].f_4 >= 0) && uParam0->f_475[iVar12 /*18*/] == iParam1)
		{
			iVar13 = uParam0->f_1522[uParam0->f_475[iVar12 /*18*/].f_4 /*10*/].f_8;
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

bool func_203(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
	if (!__LIB_0__::func_79(iVar0))
	{
		return false;
	}
	return __LIB_3__::func_919(iVar0, 1024);
}

bool func_204(int iParam0)
{
	if (__LIB_2__::func_27(iParam0, 65536))
	{
		return true;
	}
	if (!__LIB_0__::func_744(&(Global_1835011[*iParam0 /*74*/])))
	{
		return true;
	}
	return false;
}

void func_205(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_425))
	{
		__LIB_0__::func_484(&(iParam0->f_427), iParam0->f_425, 0);
		if (PATHFIND::_0xDE0EA444735C1368(iParam0->f_425))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iParam0->f_425);
		}
		__LIB_4__::func_727(iParam0, 512);
		__LIB_4__::func_777(*iParam0);
		VOLUME::_DELETE_VOLUME(iParam0->f_425);
	}
}

void func_206()
{
	int iVar0;
	if (__LIB_0__::func_6(Global_1898437) && __LIB_0__::func_700(Global_1898437) == 1)
	{
		iVar0 = __LIB_0__::func_76(Global_1898437);
		if ((__LIB_0__::func_83(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
		{
			PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1835011[iVar0 /*74*/].f_22), 1);
		}
	}
}

Vector3 func_207(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	MemCopy(&uVar0, {__LIB_4__::func_752(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_445, __LIB_0__::func_731(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_425 = iParam1;
	POPULATION::_0x18262CAFEBB5FBE1(iParam1, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam1, 0, 0, 0, -1, -1, iParam2);
	PATHFIND::_0x19C7567D2F2287D6(iParam1, 15);
	__LIB_4__::func_727(iParam0, 512);
	iParam0->f_427 = __LIB_1__::func_391(iParam1, 0, 0, 0);
}

int func_209(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = __LIB_1__::func_994(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_210(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	if (__LIB_4__::func_725(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1688 < 0 || uParam0->f_1688 >= 8)
	{
		return false;
	}
	if (!uParam0->f_1016[uParam0->f_1688 /*41*/].f_29)
	{
		return false;
	}
	if (!__LIB_4__::func_725(uParam0, 4096) && uParam0->f_1896)
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (uParam0->f_1016[uParam0->f_1688 /*41*/].f_29)
	{
		if (uParam0->f_1016[uParam0->f_1688 /*41*/] == 0)
		{
			vVar3 = { uParam0->f_1016[uParam0->f_1688 /*41*/].f_4 - uParam0->f_1016[uParam0->f_1688 /*41*/].f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (__LIB_4__::func_788(&vVar0, uParam0->f_1765, Global_36, vVar6, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1)
				{
					if (vVar0.x > uParam0->f_1016[uParam0->f_1688 /*41*/].f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_1016[uParam0->f_1688 /*41*/].f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_1)
					{
						if (vVar0.y > uParam0->f_1016[uParam0->f_1688 /*41*/].f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_1016[uParam0->f_1688 /*41*/].f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10)) || (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && (uParam0->f_1897 || uParam0->f_1899)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1688;
					return true;
				}
			}
		}
		else if (__LIB_4__::func_725(uParam0, 8))
		{
			*iParam1 = uParam0->f_1684;
			return true;
		}
	}
	return false;
}

void func_211(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_1869));
}

void func_212(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!__LIB_4__::func_762(uParam0, iParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_4__::func_789(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, iParam1);
		}
	}
}

void func_213(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0 /*13*/].f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[iVar0 /*13*/].f_4)))
			{
				__LIB_0__::func_928(&(uParam0->f_1771), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), &(uParam0->f_3[iVar0 /*13*/].f_4), 0);
			}
		}
		iVar0++;
	}
}

void func_214(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_4__::func_725(uParam0, 64) && __LIB_0__::func_81(uParam0) != 0)
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
				__LIB_4__::func_757(uParam0, 256);
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
				__LIB_4__::func_757(uParam0, 256);
			}
		}
	}
	else
	{
		__LIB_4__::func_791(0);
		__LIB_4__::func_791(1);
	}
}

void func_215(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	var uVar0;
	var uVar7;
	int iVar14;
	float fVar15;
	__LIB_4__::func_672(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35))), (2f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35))), 0f);
	__LIB_4__::func_672(&uVar7, 1f, vParam3, (-2f * BUILTIN::SIN(fParam6)), (2f * BUILTIN::COS(fParam6)), 0f);
	if (MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_12) == MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_13))
	{
		if (MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_12) >= 90f)
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
		fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_12 - uParam0->f_1016[iParam1 /*41*/].f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if (uParam0->f_1016[iParam1 /*41*/].f_12 < uParam0->f_1016[iParam1 /*41*/].f_13)
		{
			fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_12 + MISC::ABSF(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_13 + MISC::ABSF(fVar15));
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
	*uParam7 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar15) * (uParam0->f_1016[iParam1 /*41*/].f_11 / 2f)), (BUILTIN::SIN(fVar15) * (uParam0->f_1016[iParam1 /*41*/].f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(uParam2[iVar14 /*3*/]) = { __LIB_4__::func_792(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / BUILTIN::TO_FLOAT(5))) };
		iVar14++;
	}
}

bool func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					if (__LIB_1__::func_472(iVar2, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_217(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_426))
	{
		__LIB_1__::func_544(iParam0->f_426);
	}
}

void func_218(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout")) && !uParam0->f_1769)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout", true);
					}
				}
				else if (__LIB_4__::func_725(uParam0, 32768) && __LIB_0__::func_129(&(uParam0->f_1522[iVar0 /*10*/]), 128))
				{
					__LIB_4__::func_712(uParam0->f_1522[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_219(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return __LIB_0__::func_702(Global_1835011[iParam0 /*74*/].f_1);
}

void func_220(var uParam0, int iParam1, char* sParam2, bool bParam3)
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
	__LIB_4__::func_757(uParam0, 2);
}

void func_221(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
	iVar0 = __LIB_4__::func_770(uParam0, iParam1);
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
		iVar1 = __LIB_4__::func_771(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			__LIB_4__::func_772(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_4__::func_773(uParam0);
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

void func_222(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_4__::func_725(uParam0, 512))
	{
		return;
	}
	if (__LIB_0__::func_264(&(uParam0->f_1872)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_4__::func_757(uParam0, 524288);
	}
}

bool func_223(var uParam0, int iParam1)
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
	if ((__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 0, 0)) && !__LIB_0__::func_274(&(uParam0->f_1016[iParam1 /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_1016[iParam1 /*41*/]), 64))
	{
		return true;
	}
	return false;
}

void func_224(int iParam0)
{
	__LIB_4__::func_796(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

void func_225(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_444, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_501, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_4__::func_781(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_444, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!__LIB_0__::func_1(uParam0->f_501, 128))
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
	if (__LIB_0__::func_1(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_444);
		__LIB_3__::func_120();
	}
}

bool func_226(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_17 == 0 && uParam0->f_475[iVar0 /*18*/].f_2 == 9) && uParam0->f_475[iVar0 /*18*/].f_4 >= 0)
		{
			iVar1 = uParam0->f_1522[uParam0->f_475[iVar0 /*18*/].f_4 /*10*/].f_8;
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar1) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar1, true, false))
			{
				iVar2 = 0;
				while (iVar2 < 35)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar2 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar2 /*13*/].f_2))
					{
						Var3 = { __LIB_4__::func_798(uParam0, uParam0->f_3[iVar2 /*13*/].f_2) };
						if (ANIMSCENE::_0x6F1F0B17109309DA(iVar1, &Var3))
						{
							if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_3[iVar2 /*13*/].f_2, iVar1) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_3[iVar2 /*13*/].f_2, -1))
							{
								return true;
							}
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_227(int iParam0)
{
	int iVar0;
	var uVar1;
	if (__LIB_2__::func_774(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
	if (!__LIB_0__::func_79(iVar0))
	{
		return;
	}
	__LIB_1__::func_109(iVar0, 2048);
	Global_1835011[iParam0 /*74*/].f_71 = 0;
	uVar1 = __LIB_0__::func_631(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
	{
		HUD::SET_MISSION_NAME(true, &uVar1);
		MISC::_0x1096603B519C905F(&uVar1);
	}
}

int func_228(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_2__::func_3(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_4__::func_800(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_229(float fParam0)
{
	__LIB_4__::func_801(10, fParam0);
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2;
		case 26:
			return 2;
		case 105:
			return 1;
		case 78:
			return 2;
		case 5:
			return 2;
		case 38:
			return 2;
		case 115:
			return 6;
	}
	return 0;
}

void func_231(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	Global_40.f_9829[iParam0 /*4*/].f_1 = iParam1;
	Global_40.f_9829[iParam0 /*4*/] = iParam2;
	Global_40.f_9829[iParam0 /*4*/].f_2 = 0;
	Global_40.f_9829[iParam0 /*4*/].f_3 = iParam3;
}

bool func_232(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 16384))
	{
		return true;
	}
	if (!__LIB_4__::func_802(uParam0, 8))
	{
		if (__LIB_0__::func_1(Global_1935630, 32768))
		{
			return true;
		}
	}
	return false;
}

void func_233(var uParam0)
{
	if (!__LIB_4__::func_802(uParam0, 4))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 5);
			__LIB_4__::func_804(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
}

void func_234(char* sParam0, int iParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	__LIB_4__::func_808(MISC::GET_HASH_KEY(sParam0), iParam1);
}

int func_235(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	switch (iParam0)
	{
		case 76:
			if (__LIB_0__::func_730(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (__LIB_0__::func_730(iParam0))
			{
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_RHODES");
			}
			break;
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
		case 61:
			return joaat("LAW_REGION_MANICATO");
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
		case 38:
			if (!bParam1 || __LIB_0__::func_2() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (__LIB_0__::func_293(45))
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			else
			{
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
		case 65:
			return joaat("LAW_REGION_CORNWALL");
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
		case 3:
			return joaat("LAW_REGION_LAGRAS");
		case 32:
			return joaat("LAW_REGION_SISIKA");
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
		case 56:
			return joaat("LAW_REGION_WAPITI");
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
		case 127:
			if (!bParam1 || __LIB_0__::func_2() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (__LIB_0__::func_293(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || __LIB_0__::func_2() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || __LIB_0__::func_2() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (__LIB_0__::func_293(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == __LIB_0__::func_61())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || __LIB_0__::func_2() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (__LIB_0__::func_293(45))
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			else
			{
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = __LIB_4__::func_917(iParam0);
		if (iVar0 != -1)
		{
			return __LIB_4__::func_929(iVar0, bParam1);
		}
	}
	return 0;
}

bool func_236(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

void func_237(int iParam0)
{
	iLocal_146 = iParam0;
}

void func_238(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = __LIB_3__::func_734(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_3__::func_733(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, __LIB_3__::func_733(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_239(char* sParam0, bool bParam1, bool bParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, bParam2);
}

bool func_240(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_241(int iParam0)
{
	if (!__LIB_4__::func_826(iParam0))
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1446646876);
				}
				__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1446646876);
			}
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 32);
		}
	}
}

bool func_242(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && __LIB_4__::func_827(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_243(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

bool func_245(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (__LIB_2__::func_173(iParam0, bParam1, bParam2, bParam3))
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

bool func_246(int iParam0)
{
	if (!__LIB_4__::func_820(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (__LIB_4__::func_821(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, __LIB_4__::func_822(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_4__::func_822(iParam0), false) <= __LIB_4__::func_823();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= __LIB_4__::func_823();
	}
	return __LIB_1__::func_652();
}

bool func_247(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && __LIB_4__::func_815(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_248(int iParam0, bool bParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return joaat("BLIP_SCM_DORKINS");
	}
	else if (iParam0 == 26)
	{
		return joaat("BLIP_RC_CALLOWAY");
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return joaat("BLIP_RC_CHAIN_GANG");
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return joaat("BLIP_RC_CRACKPOT");
	}
	else if (iParam0 == 58)
	{
		return joaat("BLIP_SHOP_DOCTOR");
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return joaat("BLIP_SCM_STRAUSS");
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return joaat("BLIP_SCM_EVELYN");
	}
	else if (iParam0 == 77)
	{
		return joaat("BLIP_RC_ART");
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return joaat("BLIP_AMBIENT_GANG_LEADER");
	}
	else if (iParam0 == 89)
	{
		return joaat("BLIP_RC_KITTY");
	}
	else if (iParam0 == 101)
	{
		return joaat("BLIP_RC_ALBERT");
	}
	else if (iParam0 == 115)
	{
		return joaat("BLIP_SCM_EAGLE_FLIES");
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return joaat("BLIP_RC_OH_BROTHER");
	}
	else if (iParam0 == 121)
	{
		if (bParam1 || __LIB_1__::func_25(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			return joaat("BLIP_RC_OBEDIAH_HINTON");
		}
	}
	else if (iParam0 == 127)
	{
		return joaat("BLIP_RC_LIGHTNING");
	}
	else if (iParam0 == 136)
	{
		return joaat("BLIP_RC_SLAVE_CATCHER");
	}
	else if (iParam0 == 143)
	{
		return joaat("BLIP_RC_ODD_FELLOWS");
	}
	else if (iParam0 == 147)
	{
		if (bParam1 || __LIB_1__::func_25(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			return joaat("BLIP_RC_WAR_VETERAN");
		}
	}
	if (iParam0 == 151)
	{
		return joaat("BLIP_RC_HERBALIST");
	}
	return Global_1347702[iParam0 /*49*/].f_36;
}

int func_249(int iParam0, bool bParam1)
{
	return __LIB_4__::func_196(iParam0, Global_1894899.f_2, bParam1);
}

void func_250(int iParam0)
{
	if (__LIB_3__::func_829(179) || __LIB_3__::func_829(180))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			if (Global_1347702[iParam0 /*49*/].f_37 == Global_1905944.f_5698)
			{
				__LIB_2__::func_347(1);
			}
		}
	}
	if (__LIB_1__::func_262(179))
	{
		__LIB_1__::func_263(179);
	}
	if (__LIB_1__::func_262(180))
	{
		__LIB_1__::func_263(180);
	}
}

void func_251(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
}

void func_252(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_14, 1);
}

int func_253(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 8388608))
	{
		return 2;
	}
	if (__LIB_4__::func_948(uParam0, 4194304))
	{
		return 4;
	}
	if (__LIB_4__::func_948(uParam0, 4))
	{
		return 1;
	}
	if (__LIB_4__::func_951(uParam0, 1) && __LIB_0__::func_13(32768))
	{
		return 3;
	}
	return 0;
}

void func_254(var uParam0, int iParam1)
{
	if (__LIB_4__::func_948(uParam0, 2097152))
	{
		return;
	}
	uParam0->f_1124.f_1 = (uParam0->f_1124.f_1 || iParam1);
}

void func_255(var uParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_5411))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5411, true, true);
		}
		if ((bParam1 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_5411, -1)) && !__LIB_4__::func_948(uParam0, 32768))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_5411, true, false);
		}
		if (!__LIB_0__::func_2() == 0)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5411, joaat("REL_GANG_DUTCHS"));
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5411, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(PLAYER::PLAYER_PED_ID()));
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_5411, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5411, 136, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5411, 136, false);
		}
	}
}

void func_256(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	__LIB_4__::func_945(uParam0, 1024);
}

void func_257(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	__LIB_4__::func_945(uParam0, 131072);
}

bool func_258(var uParam0)
{
	if ((__LIB_4__::func_948(uParam0, 4) || __LIB_4__::func_948(uParam0, 128)) && !__LIB_4__::func_511())
	{
		return false;
	}
	return true;
}

bool func_259(char* sParam0)
{
	return AUDIO::_0xD89504D9D7D5057D(sParam0);
}

bool func_260(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1) > 0;
}

bool func_261(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 4) && !__LIB_0__::func_91())
	{
		return true;
	}
	return false;
}

void func_262(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	iVar12 = 0;
	while (iVar12 < 65)
	{
		uParam0->f_13[iVar12 /*12*/] = { Var0 };
		iVar12++;
	}
}

Vector3 func_263(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

int func_264(int iParam0)
{
	var uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_265(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 1024))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_8266);
	}
}

bool func_266(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 131072))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_8267);
		if (StackVal)
		{
			return true;
		}
		return false;
	}
	else
	{
		Stack.Push(!__LIB_4__::func_584(&(uParam0->f_7375), 4));
		Stack.Push(&(uParam0->f_7375));
		Call_Loc(uParam0->f_7375.f_798);
		if (StackVal || StackVal)
		{
			return true;
		}
		return false;
	}
	return true;
}

bool func_267(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 860729266;
			return true;
		case 128:
			*iParam1 = 1606325429;
			return true;
		case 256:
			*iParam1 = 1743550585;
			return true;
		case 512:
			*iParam1 = 1064646155;
			return true;
		case 1024:
			*iParam1 = -536694793;
			return true;
		case 2048:
			*iParam1 = -1304053509;
			return true;
		case 4096:
			*iParam1 = 879715242;
			return true;
		case 65536:
			*iParam1 = -972364774;
			return true;
		case 16384:
			*iParam1 = -1100875244;
			return true;
		case 262144:
			*iParam1 = 1153596794;
			return true;
		case 524288:
			*iParam1 = 1016389820;
			return true;
		case 1048576:
			*iParam1 = -726966617;
			return true;
		case 2097152:
			*iParam1 = 1365901568;
			return true;
		case 32768:
			*iParam1 = -1658942149;
			return true;
		case 131072:
			*iParam1 = -1980913856;
			return true;
		case 134217728:
			*iParam1 = -1683207356;
			return true;
		case 1073741824:
			*iParam1 = -1712783565;
			return true;
	}
	return false;
}

void func_268(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 || iParam1);
}

int func_269(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
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

Vector3 func_270(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + Vector(0.1f, 0.1f, 0.1f) * vVar7 };
	return vVar0;
}

Vector3 func_271(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + vVar7 };
	return vVar0;
}

void func_272(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_4__::func_948(uParam0, 2048))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_8265);
	}
	fVar4 = 5f;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5423[iVar0 /*65*/]))
		{
			FIRE::STOP_ENTITY_FIRE(uParam0->f_5423[iVar0 /*65*/], 0);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5423[iVar0 /*65*/], true, false) };
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, fVar4) > 0)
			{
				FIRE::STOP_FIRE_IN_RANGE(vVar1, fVar4);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5423[iVar0 /*65*/].f_1))
		{
			FIRE::STOP_ENTITY_FIRE(uParam0->f_5423[iVar0 /*65*/].f_1, 0);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5423[iVar0 /*65*/].f_1, true, false) };
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, fVar4) > 0)
			{
				FIRE::STOP_FIRE_IN_RANGE(vVar1, fVar4);
			}
		}
		iVar0++;
	}
}

bool func_273(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[iVar0 /*2*/], false) && Global_1934765.f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_274()
{
	return (__LIB_0__::func_649(150f, BUILTIN::TO_FLOAT(Global_1934765.f_286)) / BUILTIN::TO_FLOAT(300));
}

int func_275()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[iVar0 /*2*/], false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_276(var uParam0)
{
	return __LIB_4__::func_948(uParam0, 4);
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("AMMO_ARROW");
		case 1:
			return joaat("AMMO_ARROW_DYNAMITE");
		case 2:
			return joaat("AMMO_ARROW_FIRE");
		case 3:
			return joaat("AMMO_ARROW_POISON");
		case 4:
			return joaat("AMMO_ARROW_SMALL_GAME");
		case 43:
			return joaat("AMMO_ARROW_IMPROVED");
		case 5:
			return joaat("AMMO_DYNAMITE");
		case 6:
			return joaat("AMMO_DYNAMITE_VOLATILE");
		case 7:
			return joaat("AMMO_HATCHET");
		case 8:
			return joaat("AMMO_HATCHET_HUNTER");
		case 9:
			return joaat("AMMO_LASSO");
		case 10:
			return joaat("AMMO_MOLOTOV");
		case 11:
			return joaat("AMMO_MOLOTOV_VOLATILE");
		case 12:
			return joaat("AMMO_PISTOL");
		case 13:
			return joaat("AMMO_PISTOL_EXPRESS");
		case 14:
			return joaat("AMMO_PISTOL_EXPRESS_EXPLOSIVE");
		case 15:
			return joaat("AMMO_PISTOL_HIGH_VELOCITY");
		case 16:
			return joaat("AMMO_PISTOL_SPLIT_POINT");
		case 17:
			return joaat("AMMO_REPEATER");
		case 18:
			return joaat("AMMO_REPEATER_EXPRESS");
		case 19:
			return joaat("AMMO_REPEATER_EXPRESS_EXPLOSIVE");
		case 20:
			return joaat("AMMO_REPEATER_HIGH_VELOCITY");
		case 21:
			return joaat("AMMO_REPEATER_SPLIT_POINT");
		case 22:
			return joaat("AMMO_REVOLVER");
		case 23:
			return joaat("AMMO_REVOLVER_EXPRESS");
		case 24:
			return joaat("AMMO_REVOLVER_EXPRESS_EXPLOSIVE");
		case 25:
			return joaat("AMMO_REVOLVER_HIGH_VELOCITY");
		case 26:
			return joaat("AMMO_REVOLVER_SPLIT_POINT");
		case 27:
			return joaat("AMMO_RIFLE");
		case 28:
			return joaat("AMMO_RIFLE_EXPRESS");
		case 29:
			return joaat("AMMO_RIFLE_EXPRESS_EXPLOSIVE");
		case 30:
			return joaat("AMMO_RIFLE_HIGH_VELOCITY");
		case 31:
			return joaat("AMMO_RIFLE_SPLIT_POINT");
		case 32:
			return joaat("AMMO_SHOTGUN");
		case 33:
			return joaat("AMMO_SHOTGUN_BUCKSHOT_INCENDIARY");
		case 34:
			return joaat("AMMO_SHOTGUN_SLUG");
		case 35:
			return joaat("AMMO_SHOTGUN_SLUG_EXPLOSIVE");
		case 36:
			return joaat("AMMO_THROWING_KNIVES");
		case 37:
			return joaat("AMMO_THROWING_KNIVES_IMPROVED");
		case 38:
			return joaat("AMMO_THROWING_KNIVES_POISON");
		case 39:
			return joaat("AMMO_TOMAHAWK");
		case 40:
			return joaat("AMMO_TOMAHAWK_ANCIENT");
		case 41:
			return joaat("AMMO_TOMAHAWK_HOMING");
		case 42:
			return joaat("AMMO_TOMAHAWK_IMPROVED");
		case 44:
			return joaat("AMMO_22");
		default:
			break;
	}
	return 0;
}

bool func_278(var uParam0, int iParam1)
{
	return uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_12;
}

int func_279(var uParam0, int iParam1)
{
	return uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_10;
}

int func_280(var uParam0, int iParam1)
{
	return uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_9;
}

bool func_281(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			if (uParam0->f_5423[iVar0 /*65*/] == iParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_282(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((__LIB_0__::func_755(uParam0[iVar0 /*16*/], 1048576) && (uParam0[iVar0 /*16*/])->f_9 == 8) && !__LIB_0__::func_755(uParam0[iVar0 /*16*/], 1))
		{
			__LIB_4__::func_972(uParam0[iVar0 /*16*/]);
		}
		iVar0++;
	}
}

bool func_283(var uParam0)
{
	if (!__LIB_0__::func_86(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			__LIB_4__::func_973(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			__LIB_4__::func_973(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			__LIB_4__::func_973(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			__LIB_4__::func_973(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			__LIB_4__::func_973(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			__LIB_4__::func_973(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			__LIB_4__::func_973(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			__LIB_4__::func_973(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			__LIB_4__::func_973(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			__LIB_4__::func_973(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			__LIB_4__::func_973(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			__LIB_4__::func_973(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			__LIB_4__::func_973(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			__LIB_4__::func_973(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			__LIB_4__::func_973(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			__LIB_4__::func_973(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			__LIB_4__::func_973(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			__LIB_4__::func_973(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			__LIB_4__::func_973(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			__LIB_4__::func_973(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			__LIB_4__::func_973(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			__LIB_4__::func_973(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			__LIB_4__::func_973(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			__LIB_4__::func_973(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			__LIB_4__::func_973(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			__LIB_4__::func_973(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			__LIB_4__::func_973(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			__LIB_4__::func_973(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			__LIB_4__::func_973(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			__LIB_4__::func_973(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			__LIB_4__::func_973(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			__LIB_4__::func_973(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			__LIB_4__::func_973(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !__LIB_0__::func_86(uParam0->f_5417);
}

void func_284(var uParam0)
{
	var uVar0;
	if (!__LIB_4__::func_948(uParam0, 524288))
	{
		MemCopy(&uVar0, {__LIB_0__::func_631(uParam0->f_607)}, 8);
		__LIB_4__::func_561(&uVar0, 15000, 0, 0, 0, 1);
		__LIB_4__::func_945(uParam0, 524288);
	}
}

int func_285(var uParam0, int iParam1)
{
	return uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_21;
}

void func_286(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_10 = iParam2;
	BUILTIN::SETTIMERA(0);
}

float func_287(var uParam0)
{
	return __LIB_0__::func_265(&(uParam0->f_603));
}

void func_288(var uParam0)
{
	char cVar0[64];
	if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12) || PED::IS_PED_FATALLY_INJURED(Global_35)) || ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		if (__LIB_0__::func_0(uParam0))
		{
			__LIB_4__::func_964(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			__LIB_4__::func_978(uParam0, cVar0);
			__LIB_0__::func_19(uParam0, 2);
		}
	}
}

void func_289(var uParam0)
{
	char cVar0[64];
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		if (__LIB_0__::func_0(uParam0))
		{
			__LIB_4__::func_964(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			__LIB_4__::func_978(uParam0, cVar0);
			__LIB_0__::func_19(uParam0, 2);
		}
	}
}

bool func_290(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])) && ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_5423[iVar0 /*65*/])) && ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_5423[iVar0 /*65*/]) != iParam1) && ENTITY::GET_ENTITY_MODEL(uParam0->f_5423[iVar0 /*65*/]) == ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_291()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765.f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765.f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = __LIB_4__::func_346(Global_1934765.f_318[iVar2 /*3*/].f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

void func_292(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (__LIB_4__::func_976(iVar0))
	{
		uParam0->f_1[iVar0 /*22*/].f_9 = iParam2;
	}
}

void func_293(var uParam0, int iParam1)
{
	uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_12 = 1;
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam2);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = __LIB_4__::func_564(iParam3);
	if (!__LIB_4__::func_565(iVar1))
	{
		return;
	}
	uParam0->f_1[iVar0 /*22*/][iVar1] = *iParam1;
	MISC::SET_BIT(&(uParam0->f_1[iVar0 /*22*/].f_17), iVar1);
}

void func_295(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_13 = { cParam2 };
}

void func_296(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_21 = iParam2;
}

int func_297(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return -1;
	}
	return __LIB_5__::func_243(iParam0);
}

void func_298(var uParam0, char[4] cParam1)
{
	__LIB_4__::func_568(&(uParam0->f_7375), cParam1);
	__LIB_5__::func_33(uParam0, 33554432);
}

struct<4> func_299(var uParam0, int iParam1)
{
	return uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_13;
}

struct<8> func_300(int iParam0)
{
	char cVar0[64];
	MemCopy(&cVar0, {__LIB_4__::func_742(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

void func_301(var uParam0, int iParam1, int iParam2)
{
	__LIB_1__::func_681(&(uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_11), iParam2);
	if (iParam2 == 8388608)
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
}

bool func_302(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return false;
	}
	iVar1 = __LIB_4__::func_564(iParam2);
	if (!__LIB_4__::func_565(iVar1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(uParam0->f_1[iVar0 /*22*/].f_17, iVar1);
}

void func_303(var uParam0)
{
	__LIB_4__::func_994(uParam0);
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		__LIB_4__::func_944(uParam0, 1024);
	}
}

char* func_304(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return __LIB_0__::func_67(uParam0->f_13[iVar0 /*12*/].f_1);
		}
		iVar0++;
	}
	return "";
}

void func_305(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (__LIB_4__::func_57(iParam0))
	{
		iVar0 = __LIB_4__::func_244(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
	}
}

bool func_306(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			if (((uParam0->f_5423[iVar0 /*65*/].f_9 == 40 && ENTITY::IS_ENTITY_A_PED(iParam1)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX())) && uParam0->f_5423[iVar0 /*65*/] != iParam1)
			{
				*iParam2 = iVar0;
				return (((1 && !__LIB_0__::func_125(iParam1)) && uParam0->f_5423[iVar0 /*65*/].f_9 == __LIB_4__::func_633(iParam1)) && uParam0->f_5423[iVar0 /*65*/] != iParam1);
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_307(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_308(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_2075 < 0)
	{
		return true;
	}
	switch (uParam0->f_865[uParam0->f_2075 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_0__::func_265(&(uParam0->f_2262)) >= 15f)
			{
				__LIB_4__::func_532(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_2158)
			{
				if (__LIB_0__::func_265(&(uParam0->f_2262)) >= 15f)
				{
					__LIB_4__::func_532(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_4__::func_620(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_4__::func_620(uParam0), false))
				{
					uParam0->f_2158 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_4__::func_620(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_4__::func_620(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_4__::func_620(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_0__::func_265(&(uParam0->f_2262)) >= 15f;
	}
	return false;
}

void func_309(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_5__::func_65(uParam0) };
	__LIB_4__::func_568(uParam0, &Var0);
}

struct<8> func_310(var uParam0)
{
	struct<8> Var0;
	int iVar8;
	struct<8> Var9;
	MemCopy(&Var0, {__LIB_4__::func_742(uParam0->f_607)}, 8);
	iVar8 = __LIB_5__::func_24(__LIB_4__::func_939(uParam0));
	Var9 = { Var0 };
	if (iVar8 >= 0)
	{
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar8, 64);
	}
	return Var9;
}

void func_311(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_12[iVar0 /*2*/] != 0)
		{
			if (MISC::GET_GAME_TIMER() > (uParam0->f_12[iVar0 /*2*/].f_1 + __LIB_5__::func_86(uParam0, uParam0->f_12[iVar0 /*2*/])))
			{
				if (uParam0->f_12[iVar0 /*2*/] == 8)
				{
					bVar1 = true;
				}
				uParam0->f_12[iVar0 /*2*/].f_1 = 0;
				uParam0->f_12[iVar0 /*2*/] = 0;
			}
		}
		iVar0++;
	}
	if ((bVar1 && ENTITY::IS_ENTITY_A_PED(*uParam0)) && __LIB_4__::func_627(uParam0, 8) <= 0)
	{
		PED::_0x92A1B55A59720395(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), 128);
	}
}

bool func_312(var uParam0, int iParam1)
{
	if (*uParam0 & -2147483648 != 0)
	{
		return false;
	}
	if (*uParam0 & 67108863 != 0)
	{
		return false;
	}
	return (*uParam0 == 0 || !__LIB_4__::func_688(*uParam0, iParam1));
}

int func_313(int iParam0, bool bParam1, float fParam2)
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
	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 0))
	{
		return 0;
	}
	iVar0 = __LIB_4__::func_347(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	iVar2 = __LIB_4__::func_350(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	iVar4 = __LIB_4__::func_350(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	MISC::_0xDD560ABEF5D3784C(&iVar5, &iVar6);
	iVar7 = __LIB_4__::func_350(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar7))
		{
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar2) && MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = MISC::_0x7F4CE164D9A11DFE();
		if (!MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar9))
		{
		}
		else
		{
			iVar10 = __LIB_4__::func_348(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					MISC::_SET_WEATHER_TYPE(iVar10, true, false, false, 0f, false);
				}
				else
				{
					MISC::_SET_WEATHER_TYPE(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			iVar11 = joaat("MISTY");
			break;
		case joaat("WEATHER_GROUP_BAD"):
			iVar11 = joaat("RAIN");
			break;
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			iVar11 = joaat("FOG");
			break;
		case joaat("WEATHER_GROUP_CH2_END"):
			iVar11 = joaat("HIGHPRESSURE");
			break;
		case joaat("WEATHER_GROUP_CH2_MID"):
			iVar11 = joaat("SUNNY");
			break;
		case joaat("WEATHER_GROUP_CH2_START"):
			iVar11 = joaat("CLOUDS");
			break;
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			iVar11 = joaat("SUNNY");
			break;
		case joaat("WEATHER_GROUP_GOOD"):
			iVar11 = joaat("SUNNY");
			break;
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			iVar11 = joaat("HIGHPRESSURE");
			break;
		case joaat("WEATHER_GROUP_IN_CAMP"):
			iVar11 = joaat("CLOUDS");
			break;
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			iVar11 = joaat("OVERCAST");
			break;
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			iVar11 = joaat("CLOUDS");
			break;
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			iVar11 = joaat("THUNDERSTORM");
			break;
		default:
			iVar11 = joaat("OVERCAST");
			break;
	}
	if (bParam1)
	{
		MISC::_SET_WEATHER_TYPE(iVar11, true, false, false, 0f, false);
	}
	else
	{
		MISC::_SET_WEATHER_TYPE(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

bool func_314(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	if (__LIB_1__::func_104(&(uParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_315(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1912[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1912[iVar0 /*10*/]), 2)) && !__LIB_0__::func_129(&(uParam0->f_1912[iVar0 /*10*/]), 16)) && __LIB_5__::func_13(uParam0, iVar0))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
			{
				uParam0->f_1912[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1912[iVar0 /*10*/]), 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
				return false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1912[iVar0 /*10*/].f_8, false))
			{
				return false;
			}
			if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout"))
			{
				__LIB_4__::func_647(&(uParam0->f_1912[iVar0 /*10*/]), 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
			__LIB_4__::func_647(&(uParam0->f_1912[iVar0 /*10*/]), 16);
		}
		iVar0++;
	}
	return true;
}

void func_316(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1912[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1912[iVar0 /*10*/]), 2))
		{
			iVar1 = 0;
			if (__LIB_5__::func_13(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1912[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1912[iVar0 /*10*/]), iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, __LIB_0__::func_166(), 64);
	StringCopy(&(Var2.f_8), __LIB_4__::func_616(), 64);
	uParam0->f_2098 = { Var2 };
	uParam0->f_2121 = { Var2 };
	if (!__LIB_4__::func_577(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(__LIB_0__::func_166());
		__LIB_4__::func_612(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1735[iVar0 /*22*/].f_2), __LIB_0__::func_166()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1735[iVar0 /*22*/].f_2)))
			{
				CAM::_0x6A4D224FC7643941(&(uParam0->f_1735[iVar0 /*22*/].f_2));
				uParam0->f_1735[iVar0 /*22*/].f_21 = 1;
			}
		}
		iVar0++;
	}
}

int func_317(var uParam0, var uParam1)
{
	if (uParam1->f_2074 < 0 || uParam1->f_2074 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1406[uParam1->f_2074 /*41*/].f_30)))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_804, &(uParam1->f_1406[uParam1->f_2074 /*41*/].f_30)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &(uParam1->f_1406[uParam1->f_2074 /*41*/].f_30)))
			{
				__LIB_4__::func_980(uParam0, &(uParam1->f_1406[uParam1->f_2074 /*41*/].f_30));
				__LIB_0__::func_88(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

void func_318(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar0 /*9*/])))
		{
			__LIB_5__::func_16(uParam0, &(uParam0->f_822[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { __LIB_0__::func_137() };
	__LIB_5__::func_16(uParam0, &Var1);
	Var1 = { __LIB_5__::func_65(uParam0) };
	__LIB_5__::func_16(uParam0, &Var1);
}

bool func_319(var uParam0, int iParam1)
{
	return (MISC::GET_GAME_TIMER() - __LIB_4__::func_657(uParam0, iParam1)) < __LIB_5__::func_87(uParam0, iParam1);
}

void func_320(var uParam0, int iParam1)
{
	__LIB_4__::func_658(uParam0, iParam1);
	__LIB_5__::func_75(uParam0);
}

bool func_321(var uParam0, int iParam1)
{
	return __LIB_4__::func_627(uParam0, iParam1) >= __LIB_5__::func_18(uParam0, iParam1);
}

bool func_322(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_4__::func_571(uParam0) };
	Var8 = { __LIB_5__::func_65(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

void func_323(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (__LIB_0__::func_84(&(uParam0->f_865[iParam1 /*18*/]), 32))
	{
		if (__LIB_4__::func_562(uParam0, 8))
		{
			*uParam2 = { uParam0->f_1406[uParam0->f_2074 /*41*/].f_1 + __LIB_0__::func_173(Global_36 - uParam0->f_1406[uParam0->f_2074 /*41*/].f_1) };
			if (!__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_1406[uParam0->f_2074 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1406[uParam0->f_2074 /*41*/].f_40;
			}
		}
		else
		{
			*uParam2 = { uParam0->f_1406[uParam0->f_2078 /*41*/].f_1 + __LIB_0__::func_173(Global_36 - uParam0->f_1406[uParam0->f_2078 /*41*/].f_1) };
			if (!__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1406[uParam0->f_2078 /*41*/].f_40;
			}
		}
	}
	else
	{
		*uParam2 = { __LIB_5__::func_19(uParam0) };
		if (__LIB_4__::func_562(uParam0, 8))
		{
			if (!__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_1406[uParam0->f_2074 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1406[uParam0->f_2074 /*41*/].f_40;
			}
		}
		else if (!__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 2))
		{
			*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1);
		}
		else
		{
			*fParam3 = uParam0->f_1406[uParam0->f_2078 /*41*/].f_40;
		}
	}
}

void func_324(var uParam0, bool bParam1)
{
	struct<7> Var0;
	Var0 = __LIB_0__::func_299(__LIB_3__::func_918(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = __LIB_5__::func_24(__LIB_4__::func_939(uParam0));
	Var0.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = __LIB_0__::func_398(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = __LIB_4__::func_938(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1835011[uParam0->f_607 /*74*/].f_8), &Var0);
}

void func_325(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_755(uParam0[iVar0 /*16*/], 1048576) && (uParam0[iVar0 /*16*/])->f_9 == 9)
		{
			__LIB_5__::func_29(uParam0[iVar0 /*16*/]);
		}
		iVar0++;
	}
}

void func_326(var uParam0)
{
	__LIB_4__::func_518(uParam0);
	__LIB_0__::func_19(uParam0, 0);
	uParam0->f_1 = 0;
	__LIB_4__::func_782();
}

void func_327()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		__LIB_1__::func_682(iVar0);
		iVar0++;
	}
	__LIB_5__::func_30();
	__LIB_4__::func_519();
}

void func_328(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5423[iVar0 /*65*/]))
			{
				if (ENTITY::IS_ENTITY_A_PED(uParam0->f_5423[iVar0 /*65*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_5423[iVar0 /*65*/]), false, true);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_3__::func_358(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_4__::func_955(uParam0->f_5421))
		{
			iVar1 = __LIB_4__::func_956(uParam0->f_5421, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), false, true);
				}
			}
			iVar0++;
		}
	}
}

void func_329(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_4__::func_742(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_TEXT_DATABASE_DELETE(&Var0);
	}
}

void func_330(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_5__::func_32(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::_TEXT_DATABASE_DELETE(&Var0);
	}
}

bool func_331(var uParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_27(uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_11, iParam2);
}

void func_332(var uParam0)
{
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, __LIB_5__::func_104(uParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(2, __LIB_5__::func_104(uParam0));
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(1, __LIB_5__::func_104(uParam0)))
	{
		__LIB_1__::func_781(uParam0->f_607);
	}
}

void func_333(var uParam0)
{
	__LIB_5__::func_35(&(uParam0->f_638));
	__LIB_5__::func_36(&(uParam0->f_819));
	__LIB_5__::func_37(&(uParam0->f_1020));
	__LIB_5__::func_38(&(uParam0->f_1081));
	__LIB_5__::func_39(&(uParam0->f_1126));
	__LIB_5__::func_40(&(uParam0->f_5147));
	__LIB_4__::func_526(&(uParam0->f_1124));
	__LIB_5__::func_41(&(uParam0->f_5188));
	__LIB_5__::func_42(&(uParam0->f_5239));
	__LIB_5__::func_43(&(uParam0->f_5249));
	__LIB_5__::func_44(&(uParam0->f_5265));
	__LIB_5__::func_43(&(uParam0->f_5286));
}

void func_334(var uParam0, int iParam1, int iParam2)
{
	__LIB_1__::func_683(&(uParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_11), iParam2);
}

void func_335(var uParam0, int iParam1)
{
	__LIB_4__::func_554(&(uParam0->f_7375), iParam1);
	__LIB_4__::func_996(&(uParam0->f_10792), iParam1);
}

void func_336(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	if (__LIB_3__::func_151(iParam0))
	{
		__LIB_5__::func_45(iParam0);
	}
	else
	{
		__LIB_5__::func_46(iParam0);
	}
}

void func_337(int iParam0)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514.f_14 = 1;
		Global_1879514.f_15 = 0;
	}
	else
	{
		__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514.f_14 = 0;
		Global_1879514.f_15 = 1;
	}
}

void func_338(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_4__::func_948(uParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_4__::func_541(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_49(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0 /*3*/] = iParam1;
	uParam0->f_638[iVar0 /*3*/].f_2 = (uParam0->f_638[iVar0 /*3*/].f_2 || iParam2);
}

void func_339(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_4__::func_531(uParam0, 32768))
	{
		return;
	}
	bVar0 = __LIB_4__::func_531(uParam0, 1024);
	if (__LIB_4__::func_531(uParam0, 128) || bVar0)
	{
		if (__LIB_4__::func_531(uParam0, 4096))
		{
			if (!__LIB_4__::func_531(uParam0, 2048))
			{
				iVar1 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
				if (MAP::DOES_BLIP_EXIST(iVar1))
				{
					MAP::_BLIP_SET_MODIFIER(iVar1, -1186550032);
				}
				__LIB_5__::func_72(uParam0, 2048);
				return;
			}
		}
		else if (__LIB_4__::func_531(uParam0, 2048))
		{
			iVar2 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
			if (MAP::DOES_BLIP_EXIST(iVar2))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iVar2, -1186550032);
			}
			__LIB_5__::func_73(uParam0, 2048);
		}
		if (__LIB_4__::func_531(uParam0, 512))
		{
			if (__LIB_0__::func_31(uParam0->f_10))
			{
				if (__LIB_0__::func_48(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!__LIB_4__::func_57(uParam0->f_10))
					{
						__LIB_0__::func_904(uParam0->f_10, 1);
						__LIB_4__::func_705(uParam0->f_10, 0);
					}
				}
				else if ((__LIB_4__::func_57(uParam0->f_10) && !bVar0) && !__LIB_4__::func_531(uParam0, 16384))
				{
					__LIB_0__::func_904(uParam0->f_10, 0);
					__LIB_4__::func_705(uParam0->f_10, 1);
				}
			}
		}
		else if (!MAP::DOES_BLIP_EXIST(uParam0->f_8))
		{
			if (!MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(*uParam0)))
			{
				if (__LIB_0__::func_48(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), *uParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
					{
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(*uParam0)) && uParam0->f_8 != MAP::GET_BLIP_FROM_ENTITY(*uParam0)) || !__LIB_0__::func_48(Global_35, *uParam0, 150f, 1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_8));
		}
	}
	else if (__LIB_4__::func_531(uParam0, 512))
	{
		if (__LIB_0__::func_31(uParam0->f_10))
		{
			if (__LIB_4__::func_57(uParam0->f_10))
			{
				__LIB_0__::func_904(uParam0->f_10, 0);
				__LIB_4__::func_705(uParam0->f_10, 1);
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_8))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_8));
	}
}

bool func_340(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (__LIB_0__::func_131(uParam0[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam0[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_693(uParam0[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (__LIB_0__::func_132(uParam1[iVar1 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam1[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!__LIB_4__::func_694(uParam1[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (__LIB_0__::func_132(uParam2[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam2[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_695(uParam2[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (__LIB_0__::func_132(uParam3[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam3[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_689(uParam3[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (__LIB_4__::func_688(uParam4->f_1, iParam12))
	{
		if (!__LIB_4__::func_690(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar1 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (__LIB_0__::func_286(uParam5[iVar1 /*67*/]))
				{
					if (!__LIB_4__::func_793(uParam5[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar1 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (__LIB_0__::func_286(uParam5[iVar1 /*67*/]))
				{
					if (__LIB_4__::func_793(uParam5[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (__LIB_0__::func_132(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/])))
							{
								if (!__LIB_4__::func_696(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/]), (uParam5[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (__LIB_0__::func_131(uParam6[iVar1 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam6[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!__LIB_4__::func_697(uParam6[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (__LIB_0__::func_131(uParam7[iVar1 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam7[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!__LIB_4__::func_698(uParam7[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (__LIB_0__::func_132(uParam8[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam8[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_699(uParam8[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (__LIB_0__::func_282(uParam9[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam9[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_700(uParam9[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (__LIB_0__::func_132(uParam10[iVar1 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam10[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!__LIB_4__::func_701(uParam10[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (__LIB_0__::func_132(uParam11[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam11[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_702(uParam11[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_341(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	uParam0->f_2500 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_2495);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return true;
		}
		if (!bParam4)
		{
			uParam0->f_2495 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_2495 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_2501 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_2495);
	if (!uParam0->f_2501)
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
	__LIB_5__::func_57(uParam0);
	uParam0->f_2495.f_2 = 0;
	uParam0->f_2508 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_2495));
	uParam0->f_2495.f_2 = 12;
	uParam0->f_2510 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_2495));
	uParam0->f_2501 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	if (bParam3)
	{
		return false;
	}
	return true;
}

void func_342(var uParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_1__::func_148(&(uParam0->f_603));
	}
}

bool func_343(int iParam0, var uParam1, int iParam2)
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
	if (!__LIB_4__::func_544(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (__LIB_5__::func_61(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_344(var uParam0, var uParam1)
{
	struct<8> Var0;
	if (__LIB_4__::func_562(uParam1, 32768))
	{
		Var0 = { __LIB_5__::func_65(uParam0) };
		__LIB_4__::func_980(uParam0, &Var0);
		if (__LIB_4__::func_562(uParam1, 131072))
		{
			__LIB_0__::func_88(uParam0, 268435456);
			if (__LIB_0__::func_86(uParam0->f_865))
			{
				uParam0->f_865 = { __LIB_5__::func_66(uParam1, uParam1->f_2074) };
			}
			if (__LIB_0__::func_86(uParam0->f_862))
			{
				uParam0->f_862 = { __LIB_5__::func_66(uParam1, uParam1->f_2074) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (__LIB_4__::func_562(uParam1, 268435456))
		{
			__LIB_0__::func_7(&(uParam0->f_860), 16384);
		}
	}
	else if (__LIB_4__::func_562(uParam1, 524288))
	{
		__LIB_0__::func_88(uParam0, 67108864);
		__LIB_4__::func_563(uParam1, 524288);
	}
	if (__LIB_4__::func_577(uParam1, 128))
	{
		__LIB_0__::func_88(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && __LIB_0__::func_274(&(uParam1->f_1406[uParam1->f_2074 /*41*/]), 256))
		{
			__LIB_0__::func_7(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_2082)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_345(var uParam0)
{
	if (__LIB_0__::func_84(&(uParam0->f_7375), 128) || __LIB_0__::func_84(&(uParam0->f_7375), 256))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_7375.f_804);
		}
		__LIB_5__::func_67(&(uParam0->f_7375));
		__LIB_4__::func_550(&(uParam0->f_7375), 128, 1);
		__LIB_4__::func_550(&(uParam0->f_7375), 256, 1);
		__LIB_4__::func_550(&(uParam0->f_7375), 4096, 1);
	}
}

void func_346(var uParam0)
{
	__LIB_5__::func_69(&(uParam0->f_7375));
}

bool func_347(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	char cVar9[64];
	iVar0 = 1;
	MemCopy(&uVar1, {__LIB_4__::func_742(iParam0)}, 8);
	StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
	{
		if (!__LIB_5__::func_70(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {__LIB_5__::func_32(iParam0)}, 8);
		StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
		{
			if (!__LIB_5__::func_138(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_348(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;
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
		__LIB_1__::func_940(iParam0, 0);
		return 0;
	}
	vVar0 = { uParam2, uParam3, uParam4 };
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		if (bParam1)
		{
			if (!__LIB_2__::func_760(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
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
		return 1;
	}
	return 0;
}

bool func_349(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { __LIB_5__::func_65(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

void func_350(var uParam0)
{
	if ((!__LIB_0__::func_84(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_804, false))
	{
		__LIB_5__::func_2(uParam0);
		__LIB_5__::func_83(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_804, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_804);
		}
		__LIB_0__::func_88(uParam0, 32768);
	}
}

void func_351(char* sParam0, var uParam1, int iParam2)
{
	struct<10> Var0;
	struct<16> Var10;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0) || !SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return;
	}
	Var0 = uParam1;
	Var0.f_3 = iParam2;
	Var0.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), sParam0, 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 1;
	__LIB_4__::func_709(Var10, 0);
}

bool func_352(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return (__LIB_1__::func_588(sParam0, 0, 0, -1, -1, 0) && __LIB_1__::func_325());
}

bool func_353(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_702(Global_1347702[iParam0 /*49*/].f_15);
}

void func_354(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2265))
	{
		if (!bParam1)
		{
			__LIB_5__::func_6(uParam0);
		}
		else if (bParam2)
		{
			__LIB_5__::func_7(uParam0);
		}
		else
		{
			__LIB_5__::func_89(uParam0, uParam0->f_2288);
		}
	}
	else
	{
		if (!__LIB_4__::func_562(uParam0, 1048576) && bParam1)
		{
			__LIB_5__::func_89(uParam0, uParam0->f_2288);
		}
		else if (!__LIB_4__::func_562(uParam0, 2097152) && bParam2)
		{
			__LIB_5__::func_7(uParam0);
		}
		else if ((__LIB_4__::func_562(uParam0, 1048576) && !bParam1) || (__LIB_4__::func_562(uParam0, 2097152) && !bParam2))
		{
			__LIB_5__::func_6(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_2272 * FtoV(__LIB_4__::func_634(uParam0->f_2288)) };
			if (!__LIB_0__::func_175(vVar0, VOLUME::_GET_VOLUME_SCALE(uParam0->f_2265), 1056964608 /* Float: 0.5f */, 1) && !__LIB_0__::func_86(vVar0))
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_2265, vVar0);
			}
		}
	}
}

void func_355(var uParam0)
{
	int iVar0;
	__LIB_5__::func_90(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1406[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[iVar0 /*41*/].f_22)) && __LIB_4__::func_638(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_1406[iVar0 /*41*/]), 1))
			{
				if (!__LIB_5__::func_8(uParam0, &(uParam0->f_1406[iVar0 /*41*/].f_22)))
				{
					__LIB_1__::func_104(&(uParam0->f_2161), uParam0->f_1406[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_1406[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

bool func_356(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	if (__LIB_4__::func_562(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_2078 < 0 || uParam0->f_2078 >= 8)
	{
		return false;
	}
	if (!uParam0->f_1406[uParam0->f_2078 /*41*/].f_29)
	{
		return false;
	}
	if (!__LIB_4__::func_562(uParam0, 4096) && uParam0->f_2286)
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (uParam0->f_1406[uParam0->f_2078 /*41*/].f_29)
	{
		if (uParam0->f_1406[uParam0->f_2078 /*41*/] == 0)
		{
			vVar3 = { uParam0->f_1406[uParam0->f_2078 /*41*/].f_4 - uParam0->f_1406[uParam0->f_2078 /*41*/].f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (__LIB_4__::func_788(&vVar0, uParam0->f_2155, Global_36, vVar6, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_1406[uParam0->f_2078 /*41*/].f_1)
				{
					if (vVar0.x > uParam0->f_1406[uParam0->f_2078 /*41*/].f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_1406[uParam0->f_2078 /*41*/].f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_1)
					{
						if (vVar0.y > uParam0->f_1406[uParam0->f_2078 /*41*/].f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_1406[uParam0->f_2078 /*41*/].f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_2 + uParam0->f_1406[uParam0->f_2078 /*41*/].f_10)) || (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 2) && (uParam0->f_2287 || uParam0->f_2289)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_2078;
					return true;
				}
			}
		}
		else if (__LIB_4__::func_562(uParam0, 8))
		{
			*iParam1 = uParam0->f_2074;
			return true;
		}
	}
	return false;
}

bool func_357(var uParam0, char* sParam1, int iParam2)
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
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_2279);
	if (!bVar0)
	{
		uParam0->f_2279 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_2279);
	if (!bVar1)
	{
		return false;
	}
	__LIB_5__::func_91(uParam0);
	__LIB_0__::func_19(uParam0, iParam2);
	if (__LIB_4__::func_562(uParam0, 16384))
	{
		__LIB_4__::func_518(uParam0);
	}
	Var2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		__LIB_4__::func_642(uParam0, iVar18);
		if (__LIB_4__::func_643(uParam0, 0))
		{
			if (__LIB_4__::func_644(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_1406[iVar16 /*41*/].f_27 = 0;
					__LIB_4__::func_645(uParam0, 1, &(uParam0->f_1406[iVar16 /*41*/].f_1));
					__LIB_4__::func_645(uParam0, 2, &(uParam0->f_1406[iVar16 /*41*/].f_1.f_1));
					__LIB_4__::func_645(uParam0, 3, &(uParam0->f_1406[iVar16 /*41*/].f_1.f_2));
					__LIB_4__::func_645(uParam0, 4, &(uParam0->f_1406[iVar16 /*41*/].f_11));
					__LIB_4__::func_645(uParam0, 5, &(uParam0->f_1406[iVar16 /*41*/].f_12));
					__LIB_4__::func_645(uParam0, 6, &(uParam0->f_1406[iVar16 /*41*/].f_13));
					__LIB_4__::func_645(uParam0, 7, &(uParam0->f_1406[iVar16 /*41*/].f_4));
					__LIB_4__::func_645(uParam0, 8, &(uParam0->f_1406[iVar16 /*41*/].f_4.f_1));
					__LIB_4__::func_645(uParam0, 9, &(uParam0->f_1406[iVar16 /*41*/].f_4.f_2));
					__LIB_4__::func_645(uParam0, 10, &(uParam0->f_1406[iVar16 /*41*/].f_7));
					__LIB_4__::func_645(uParam0, 11, &(uParam0->f_1406[iVar16 /*41*/].f_7.f_1));
					__LIB_4__::func_645(uParam0, 12, &(uParam0->f_1406[iVar16 /*41*/].f_7.f_2));
					__LIB_4__::func_645(uParam0, 13, &(uParam0->f_1406[iVar16 /*41*/].f_10));
					__LIB_4__::func_645(uParam0, 14, &(uParam0->f_1406[iVar16 /*41*/].f_14));
					__LIB_4__::func_645(uParam0, 15, &(uParam0->f_1406[iVar16 /*41*/].f_15));
					if (__LIB_4__::func_644(uParam0, 16, &iVar17))
					{
						uParam0->f_1406[iVar16 /*41*/] = iVar17;
					}
					__LIB_4__::func_645(uParam0, 19, &(uParam0->f_1406[iVar16 /*41*/].f_16));
					__LIB_4__::func_645(uParam0, 20, &(uParam0->f_1406[iVar16 /*41*/].f_17));
					__LIB_4__::func_645(uParam0, 31, &(uParam0->f_1406[iVar16 /*41*/].f_18));
					if (__LIB_4__::func_646(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_1406[iVar16 /*41*/].f_19), {Var20}, 3);
					}
					if (__LIB_4__::func_646(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_1406[iVar16 /*41*/].f_22), {Var20}, 3);
					}
					__LIB_4__::func_644(uParam0, 23, &(uParam0->f_1406[iVar16 /*41*/].f_25));
					__LIB_5__::func_92(uParam0, &(uParam0->f_1406[iVar16 /*41*/].f_27));
					if (__LIB_4__::func_646(uParam0, 35, &(uParam0->f_1406[iVar16 /*41*/].f_30)))
					{
					}
					if (__LIB_4__::func_644(uParam0, 39, &iVar17))
					{
						uParam0->f_1406[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_1406[iVar16 /*41*/].f_39 = 1;
					}
					if (__LIB_4__::func_645(uParam0, 40, &(uParam0->f_1406[iVar16 /*41*/].f_40)))
					{
						__LIB_4__::func_639(&(uParam0->f_1406[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[iVar16 /*41*/].f_30)))
					{
						uParam0->f_1406[iVar16 /*41*/].f_30 = { __LIB_0__::func_137() };
					}
					uParam0->f_1406[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_2285 == -1 || uParam0->f_1406[uParam0->f_2285 /*41*/].f_17 < uParam0->f_1406[iVar16 /*41*/].f_17)
					{
						uParam0->f_2285 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1406[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_1406[iVar18 /*41*/].f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_2290 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1406[iVar18 /*41*/].f_29)
		{
			if (!__LIB_1__::func_410(vVar29, uParam0->f_1406[iVar18 /*41*/].f_1, 5f, 1))
			{
				uParam0->f_2290 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 45))
				{
					if (__LIB_4__::func_644(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							__LIB_4__::func_647(&(uParam0->f_1912[iVar16 /*10*/]), 2);
							__LIB_4__::func_646(uParam0, 46, &(uParam0->f_1912[iVar16 /*10*/]));
							if (__LIB_4__::func_648(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									__LIB_4__::func_647(&(uParam0->f_1912[iVar16 /*10*/]), 1);
								}
							}
							if (__LIB_4__::func_644(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									__LIB_4__::func_647(&(uParam0->f_1912[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									__LIB_4__::func_647(&(uParam0->f_1912[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 65)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 50))
				{
					if (__LIB_4__::func_644(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					__LIB_4__::func_644(uParam0, 43, &(Var2.f_3));
					if (__LIB_4__::func_646(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					__LIB_4__::func_645(uParam0, 53, &(Var2.f_8));
					if (__LIB_4__::func_644(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					__LIB_4__::func_648(uParam0, 55, &(Var2.f_11));
					__LIB_4__::func_648(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (__LIB_5__::func_93(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 65)
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
								__LIB_4__::func_532(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			__LIB_4__::func_642(uParam0, iVar18);
			if (__LIB_4__::func_643(uParam0, 82))
			{
				if (__LIB_4__::func_646(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_849), {Var20}, 4);
				}
				__LIB_4__::func_646(uParam0, 84, &(uParam0->f_849.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_849.f_4)))
				{
					if (uParam0->f_849.f_15 == 1)
					{
						uParam0->f_849.f_4 = { __LIB_0__::func_134() };
					}
					else if (uParam0->f_849.f_15 == 2)
					{
						uParam0->f_849.f_4 = { __LIB_0__::func_137() };
					}
					else
					{
						uParam0->f_849.f_4 = { __LIB_0__::func_137() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 57))
				{
					if (__LIB_4__::func_644(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_865[iVar16 /*18*/].f_8 = 0;
							__LIB_4__::func_644(uParam0, 58, &(uParam0->f_865[iVar16 /*18*/]));
							if (__LIB_4__::func_644(uParam0, 59, &iVar17))
							{
								uParam0->f_865[iVar16 /*18*/].f_1 = __LIB_4__::func_650(iVar17);
							}
							if (__LIB_4__::func_644(uParam0, 60, &iVar17))
							{
								uParam0->f_865[iVar16 /*18*/].f_2 = __LIB_4__::func_651(iVar17);
							}
							__LIB_4__::func_644(uParam0, 61, &(uParam0->f_865[iVar16 /*18*/].f_3));
							__LIB_4__::func_645(uParam0, 67, &(uParam0->f_865[iVar16 /*18*/].f_10));
							__LIB_4__::func_645(uParam0, 70, &(uParam0->f_865[iVar16 /*18*/].f_11));
							__LIB_4__::func_645(uParam0, 68, &(uParam0->f_865[iVar16 /*18*/].f_9));
							__LIB_4__::func_644(uParam0, 72, &(uParam0->f_865[iVar16 /*18*/].f_5));
							__LIB_4__::func_645(uParam0, 77, &(uParam0->f_865[iVar16 /*18*/].f_12));
							__LIB_4__::func_644(uParam0, 78, &(uParam0->f_865[iVar16 /*18*/].f_13));
							__LIB_4__::func_644(uParam0, 79, &(uParam0->f_865[iVar16 /*18*/].f_14));
							if (__LIB_4__::func_644(uParam0, 73, &iVar17))
							{
								uParam0->f_865[iVar16 /*18*/].f_17 = iVar17;
							}
							if (__LIB_4__::func_644(uParam0, 75, &iVar17))
							{
								uParam0->f_865[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							__LIB_4__::func_645(uParam0, 80, &(uParam0->f_865[iVar16 /*18*/].f_15));
							if (__LIB_4__::func_648(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (__LIB_4__::func_648(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 512;
								}
							}
							if (__LIB_4__::func_648(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (__LIB_4__::func_648(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (__LIB_4__::func_648(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (__LIB_4__::func_648(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (__LIB_4__::func_648(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (__LIB_4__::func_648(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (__LIB_4__::func_648(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_865[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_865[iVar16 /*18*/].f_4 = uParam0->f_865[iVar16 /*18*/].f_3;
								uParam0->f_865[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_865[iVar16 /*18*/].f_16 = uParam0->f_865[iVar16 /*18*/].f_2;
							uParam0->f_865[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_2284 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 85))
				{
					__LIB_4__::func_644(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						__LIB_4__::func_648(uParam0, 87, &(uParam0->f_1735[iVar18 /*22*/]));
						__LIB_4__::func_646(uParam0, 96, &(uParam0->f_1735[iVar18 /*22*/].f_2));
						__LIB_4__::func_646(uParam0, 97, &(uParam0->f_1735[iVar18 /*22*/].f_10));
						__LIB_4__::func_645(uParam0, 93, &(uParam0->f_1735[iVar18 /*22*/].f_18));
						__LIB_4__::func_645(uParam0, 94, &(uParam0->f_1735[iVar18 /*22*/].f_19));
						__LIB_4__::func_644(uParam0, 95, &(uParam0->f_1735[iVar18 /*22*/].f_20));
						uParam0->f_1735[iVar18 /*22*/].f_1 = 0;
						__LIB_5__::func_11(uParam0, &(uParam0->f_1735[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 98))
				{
					if (__LIB_4__::func_644(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_2023[iVar16 /*15*/].f_10 = 0;
							__LIB_4__::func_652(uParam0, 99, &(uParam0->f_2023[iVar16 /*15*/]));
							__LIB_4__::func_652(uParam0, 100, &(uParam0->f_2023[iVar16 /*15*/].f_6));
							__LIB_4__::func_652(uParam0, 101, &(uParam0->f_2023[iVar16 /*15*/].f_3));
							if (__LIB_4__::func_644(uParam0, 102, &iVar17))
							{
								uParam0->f_2023[iVar16 /*15*/].f_9 = iVar17;
							}
							__LIB_5__::func_92(uParam0, &(uParam0->f_2023[iVar16 /*15*/].f_10));
							uParam0->f_2023[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2279);
			__LIB_4__::func_532(uParam0, 1);
			__LIB_4__::func_532(uParam0, 16384);
			__LIB_5__::func_12(uParam0);
			return true;
		}
	}
}

void func_358(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_2259));
}

void func_359(var uParam0)
{
	__LIB_5__::func_14(uParam0);
	__LIB_5__::func_15(uParam0);
}

void func_360(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if ((STREAMING::IS_MODEL_VALID(uParam0->f_8269.f_2484[iVar0]) && uParam0->f_8269.f_2484[iVar0] == ENTITY::GET_ENTITY_MODEL(iParam1)) || (__LIB_4__::func_649(uParam0->f_8269.f_2484[iVar0]) && __LIB_4__::func_649(ENTITY::GET_ENTITY_MODEL(iParam1))))
			{
				if (__LIB_5__::func_94(sParam2, iVar0))
				{
					if (bParam3)
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1, sParam2, 0f);
					}
					else
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam1, 0f);
					}
				}
			}
			iVar0++;
		}
	}
}

struct<8> func_361(int iParam0, char* sParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, "ALLY_DEAD_", 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_5__::func_95(iParam0)))
	{
		StringConCat(&cVar0, __LIB_5__::func_95(iParam0), 64);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&cVar0, sParam1, 64);
	}
	return cVar0;
}

struct<8> func_362(int iParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, __LIB_5__::func_95(iParam0), 64);
	StringConCat(&cVar0, "_INCAPACITATED", 64);
	return cVar0;
}

struct<8> func_363(int iParam0, char* sParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, "ALLY_MOUNT_DEAD_", 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_5__::func_95(iParam0)))
	{
		StringConCat(&cVar0, __LIB_5__::func_95(iParam0), 64);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&cVar0, sParam1, 64);
	}
	return cVar0;
}

struct<8> func_364(int iParam0, char* sParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, "ALLY_VEHICLE_DEAD_", 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_5__::func_95(iParam0)))
	{
		StringConCat(&cVar0, __LIB_5__::func_95(iParam0), 64);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&cVar0, sParam1, 64);
	}
	return cVar0;
}

struct<8> func_365(int iParam0, char* sParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, "ALLY_AGGRAVATED_", 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_5__::func_95(iParam0)))
	{
		StringConCat(&cVar0, __LIB_5__::func_95(iParam0), 64);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&cVar0, sParam1, 64);
	}
	return cVar0;
}

struct<8> func_366(int iParam0, char* sParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, "ALLY_ATTACK_", 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_5__::func_95(iParam0)))
	{
		StringConCat(&cVar0, __LIB_5__::func_95(iParam0), 64);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&cVar0, sParam1, 64);
	}
	return cVar0;
}

struct<8> func_367(int iParam0, char* sParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, "ALLY_MOUNT_ATTACK_", 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_5__::func_95(iParam0)))
	{
		StringConCat(&cVar0, __LIB_5__::func_95(iParam0), 64);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&cVar0, sParam1, 64);
	}
	return cVar0;
}

void func_368(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_4__::func_562(uParam0, 64) && __LIB_0__::func_81(uParam0) != 0)
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
				__LIB_4__::func_532(uParam0, 256);
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
				__LIB_4__::func_532(uParam0, 256);
			}
		}
	}
	else
	{
		__LIB_4__::func_791(0);
		__LIB_4__::func_791(1);
	}
}

void func_369(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	var uVar0;
	var uVar7;
	int iVar14;
	float fVar15;
	__LIB_4__::func_672(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35))), (2f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35))), 0f);
	__LIB_4__::func_672(&uVar7, 1f, vParam3, (-2f * BUILTIN::SIN(fParam6)), (2f * BUILTIN::COS(fParam6)), 0f);
	if (MISC::ABSF(uParam0->f_1406[iParam1 /*41*/].f_12) == MISC::ABSF(uParam0->f_1406[iParam1 /*41*/].f_13))
	{
		if (MISC::ABSF(uParam0->f_1406[iParam1 /*41*/].f_12) >= 90f)
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
		fVar15 = (uParam0->f_1406[iParam1 /*41*/].f_12 - uParam0->f_1406[iParam1 /*41*/].f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if (uParam0->f_1406[iParam1 /*41*/].f_12 < uParam0->f_1406[iParam1 /*41*/].f_13)
		{
			fVar15 = (uParam0->f_1406[iParam1 /*41*/].f_12 + MISC::ABSF(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_1406[iParam1 /*41*/].f_13 + MISC::ABSF(fVar15));
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
	*uParam7 = { uParam0->f_1406[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar15) * (uParam0->f_1406[iParam1 /*41*/].f_11 / 2f)), (BUILTIN::SIN(fVar15) * (uParam0->f_1406[iParam1 /*41*/].f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(uParam2[iVar14 /*3*/]) = { __LIB_4__::func_792(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / BUILTIN::TO_FLOAT(5))) };
		iVar14++;
	}
}

void func_370(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_700(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = __LIB_0__::func_76(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (__LIB_0__::func_5(iVar1))
			{
				if (__LIB_3__::func_736(iVar1, 4))
				{
					__LIB_4__::func_683(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			__LIB_5__::func_108(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = __LIB_0__::func_76(iParam0);
		if (iVar3 == 59)
		{
			__LIB_5__::func_108(1);
		}
		else if (iVar3 == 61)
		{
			__LIB_5__::func_108(0);
		}
		else if (iVar3 == 83)
		{
			__LIB_5__::func_108(0);
		}
	}
}

bool func_371()
{
	return __LIB_5__::func_110() != -1;
}

void func_372(var uParam0, int iParam1)
{
	uParam0->f_599 = iParam1;
	__LIB_1__::func_283(&(uParam0->f_600), 1);
}

void func_373(var uParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_1__::func_283(&(uParam0->f_603), 1);
	}
}

void func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	__LIB_1__::func_108(iParam0);
	if (__LIB_0__::func_823(iParam0))
	{
		if (__LIB_0__::func_825(iParam0) != iVar0)
		{
			return;
		}
	}
	__LIB_0__::func_798(iParam0);
	__LIB_4__::func_965(iParam0);
	iVar1 = __LIB_0__::func_398(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
		}
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!__LIB_1__::func_1(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		__LIB_1__::func_162(iParam0);
	}
}

int func_375(int iParam0, int iParam1, float fParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	switch (uParam3->f_3)
	{
		case 0:
			*uParam3 = __LIB_0__::func_23();
			iVar4 = __LIB_0__::func_23();
			__LIB_0__::func_467(&iVar4, iParam0);
			__LIB_0__::func_468(&iVar4, iParam1);
			__LIB_0__::func_469(&iVar4, 0);
			if (__LIB_1__::func_110(*uParam3, iVar4, 1))
			{
				__LIB_1__::func_446(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			__LIB_4__::func_704(*uParam3, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam3->f_11 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			uParam3->f_3++;
			break;
		case 1:
			if (fParam2 >= 0.99f || fParam2 == -1f)
			{
				iVar4 = *uParam3;
				__LIB_1__::func_446(&iVar4, uParam3->f_11, 0, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar4), __LIB_0__::func_42(iVar4), __LIB_0__::func_43(iVar4));
				return 1;
			}
			iVar3 = BUILTIN::ROUND((IntToFloat(uParam3->f_11) * fParam2));
			iVar4 = *uParam3;
			__LIB_1__::func_446(&iVar4, iVar3, 0, 0, 0, 0, 0, 0);
			iVar8 = __LIB_0__::func_23();
			if (__LIB_1__::func_110(iVar4, iVar8, 1))
			{
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar4), __LIB_0__::func_42(iVar4), __LIB_0__::func_43(iVar4));
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar8), __LIB_0__::func_42(iVar8), __LIB_0__::func_43(iVar8));
			}
			if (__LIB_0__::func_40(iVar4) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar4), __LIB_0__::func_39(iVar4), __LIB_0__::func_710(iVar4));
			}
			break;
	}
	return 0;
}

void func_376(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_4__::func_562(uParam0, 512))
	{
		return;
	}
	if (__LIB_0__::func_264(&(uParam0->f_2262)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_4__::func_532(uParam0, 524288);
	}
}

void func_377(var uParam0, var uParam1, var uParam2, float fParam3)
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
	__LIB_4__::func_794(&(uParam0->f_2294), iVar0, iVar1, fParam3);
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

void func_378(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_4__::func_988(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_804))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_1__::func_625();
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
		__LIB_1__::func_625();
	}
}

bool func_379(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (__LIB_1__::func_269(iParam0, 1, 0))
	{
		if (__LIB_0__::func_903(iParam0))
		{
			iVar0 = __LIB_0__::func_748(iParam0, 0);
			if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar0))
				{
					return false;
				}
				if (bParam3 && !PED::_0xA0BC8FAED8CFEB3C(__LIB_0__::func_271(iParam0)))
				{
					return false;
				}
				if ((bParam1 || !__LIB_1__::func_472(__LIB_0__::func_271(iParam0), 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar0);
					__LIB_5__::func_114(iParam0, 0);
					if (bParam2 && __LIB_0__::func_228(Global_1360165[iParam0 /*1157*/].f_63))
					{
						__LIB_0__::func_288(iParam0, 65, 0);
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

void func_380(var uParam0)
{
	__LIB_1__::func_193(!__LIB_4__::func_936(uParam0, 32), 1);
	__LIB_4__::func_935(uParam0, 32);
}

int func_381(int iParam0)
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
						*iParam0 = __LIB_5__::func_121(vVar0.z);
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

int func_382(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_4__::func_577(uParam0, 4))
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
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (__LIB_4__::func_682())
	{
		__LIB_4__::func_563(uParam0, 512);
		__LIB_4__::func_612(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_1406[uParam0->f_2074 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	__LIB_4__::func_782();
	__LIB_5__::func_122(uParam0, 1, 0);
	__LIB_5__::func_0(uParam0);
	if (__LIB_4__::func_562(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	__LIB_4__::func_612(uParam0, 4);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2265))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_2265);
	}
	if (__LIB_4__::func_577(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		CAM::_0x798BE43C9393632B(__LIB_0__::func_166());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1735[iVar0 /*22*/].f_2), __LIB_0__::func_166())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1735[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1735[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1735[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (__LIB_4__::func_562(uParam0, 524288) || iParam1 == 1)
	{
		__LIB_1__::func_625();
	}
	if (__LIB_4__::func_577(uParam0, 16))
	{
		if (__LIB_0__::func_81(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
		}
	}
	__LIB_4__::func_613();
	if (__LIB_4__::func_577(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291))
	{
		if (!__LIB_4__::func_562(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_2291) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_2291))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_2291);
		}
	}
	__LIB_5__::func_63(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_2311))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_2311);
	}
	return 1;
}

void func_383(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
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

int func_384(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		__LIB_5__::func_127(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

bool func_385(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_4__::func_715(iParam0, 1, 0, bParam2, iParam1);
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

int func_386(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_3__::func_907(iParam0))
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

void func_387(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_2__::func_590(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		__LIB_1__::func_717(iParam0, iParam1, fParam3, iParam4);
	}
}

bool func_388(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			__LIB_4__::func_715(iParam0, iParam1, 1, &bParam2, iParam3);
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

Vector3 func_389(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_4__::func_718(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_390(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
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
	__LIB_1__::func_837(1, 1);
	__LIB_5__::func_119(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_303(1f);
}

void func_391(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_5__::func_131(iParam0);
}

void func_392(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		iLocal_14 = ITEMSET::CREATE_ITEMSET(false);
	}
}

char* func_393()
{
	return "genericMissionInt";
}

void func_394(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_5__::func_166(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (__LIB_5__::func_166(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_5__::func_166(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_5__::func_166(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_5__::func_166(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

int func_395(var uParam0, var uParam1)
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
			{
				__LIB_5__::func_136(uParam0, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30));
				__LIB_0__::func_88(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

void func_396(int iParam0)
{
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		if (!__LIB_4__::func_725(&(iParam0->f_958), 262144))
		{
			__LIB_4__::func_757(&(iParam0->f_958), 262144);
		}
	}
	else if (__LIB_4__::func_725(&(iParam0->f_958), 262144))
	{
		__LIB_4__::func_755(&(iParam0->f_958), 262144);
	}
}

bool func_397(int iParam0)
{
	return __LIB_5__::func_144(&(iParam0->f_958));
}

void func_398(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			__LIB_5__::func_148(uParam0, &(uParam0->f_462[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { __LIB_0__::func_137() };
	__LIB_5__::func_148(uParam0, &Var1);
	Var1 = { __LIB_5__::func_185(uParam0) };
	__LIB_5__::func_148(uParam0, &Var1);
}

bool func_399(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_1685 < 0)
	{
		return true;
	}
	switch (uParam0->f_475[uParam0->f_1685 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_0__::func_265(&(uParam0->f_1872)) >= 15f)
			{
				__LIB_4__::func_757(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1768)
			{
				if (__LIB_0__::func_265(&(uParam0->f_1872)) >= 15f)
				{
					__LIB_4__::func_757(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_5__::func_153(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_5__::func_153(uParam0), false))
				{
					uParam0->f_1768 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_5__::func_153(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_5__::func_153(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_5__::func_153(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_0__::func_265(&(uParam0->f_1872)) >= 15f;
	}
	return false;
}

bool func_400(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_4__::func_746(uParam0) };
	Var8 = { __LIB_5__::func_185(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

int func_401(var uParam0, int iParam1)
{
	if (uParam0->f_475[iParam1 /*18*/].f_1 > uParam0->f_1683)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2))
	{
	}
	if (uParam0->f_1683 < 0 || uParam0->f_1683 > 6)
	{
		return 0;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		return 1;
	}
	if (!__LIB_4__::func_725(uParam0, 4096) && uParam0->f_1896)
	{
		return 0;
	}
	if (Global_1430231.f_4)
	{
		return 0;
	}
	if (uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
	{
		return 0;
	}
	if (__LIB_0__::func_78(uParam0) > 3 && uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
	{
		return 0;
	}
	if ((((__LIB_0__::func_78(uParam0) > 3 && uParam0->f_475[iParam1 /*18*/].f_17 == 1) && __LIB_4__::func_576(uParam0) != 11) && __LIB_5__::func_139(uParam0, uParam0->f_1684)) && uParam0->f_475[iParam1 /*18*/].f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_475[iParam1 /*18*/].f_2 == 9 && uParam0->f_475[iParam1 /*18*/].f_4 >= 0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, __LIB_0__::func_731(Global_35)))
		{
			if (__LIB_0__::func_129(&(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/]), 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_129(&(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/]), 8))
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

bool func_402(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1522[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1522[iVar0 /*10*/]), 2)) && !__LIB_0__::func_129(&(uParam0->f_1522[iVar0 /*10*/]), 16)) && __LIB_5__::func_169(uParam0, iVar0))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				uParam0->f_1522[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1522[iVar0 /*10*/]), 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				return false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, false))
			{
				return false;
			}
			if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
			{
				__LIB_4__::func_647(&(uParam0->f_1522[iVar0 /*10*/]), 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
			__LIB_4__::func_647(&(uParam0->f_1522[iVar0 /*10*/]), 16);
		}
		iVar0++;
	}
	return true;
}

void func_403(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1522[iVar0 /*10*/])) && __LIB_0__::func_129(&(uParam0->f_1522[iVar0 /*10*/]), 2))
		{
			iVar1 = 0;
			if (__LIB_5__::func_169(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1522[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1522[iVar0 /*10*/]), iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, __LIB_0__::func_166(), 64);
	StringCopy(&(Var2.f_8), __LIB_4__::func_616(), 64);
	uParam0->f_1708 = { Var2 };
	uParam0->f_1731 = { Var2 };
	if (!__LIB_4__::func_756(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(__LIB_0__::func_166());
		__LIB_4__::func_765(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), __LIB_0__::func_166()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
			{
				CAM::_0x6A4D224FC7643941(&(uParam0->f_1345[iVar0 /*22*/].f_2));
				uParam0->f_1345[iVar0 /*22*/].f_21 = 1;
			}
		}
		iVar0++;
	}
}

void func_404(var uParam0)
{
	__LIB_5__::func_170(uParam0);
	__LIB_5__::func_171(uParam0);
}

bool func_405(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { __LIB_5__::func_185(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

void func_406(var uParam0, var uParam1)
{
	bool bVar0;
	if (__LIB_5__::func_166(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (__LIB_5__::func_166(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (__LIB_5__::func_166(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (__LIB_5__::func_166(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (__LIB_5__::func_166(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (__LIB_5__::func_166(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (__LIB_5__::func_166(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (__LIB_5__::func_166(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (__LIB_5__::func_166(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (__LIB_5__::func_166(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (__LIB_5__::func_166(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (__LIB_5__::func_166(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (__LIB_5__::func_166(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (__LIB_5__::func_166(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

void func_407(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (__LIB_0__::func_84(&(uParam0->f_475[iParam1 /*18*/]), 32))
	{
		if (__LIB_4__::func_725(uParam0, 8))
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1684 /*41*/].f_1 + __LIB_0__::func_173(Global_36 - uParam0->f_1016[uParam0->f_1684 /*41*/].f_1) };
			if (!__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684 /*41*/].f_40;
			}
		}
		else
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1688 /*41*/].f_1 + __LIB_0__::func_173(Global_36 - uParam0->f_1016[uParam0->f_1688 /*41*/].f_1) };
			if (!__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_40;
			}
		}
	}
	else
	{
		*uParam2 = { __LIB_5__::func_172(uParam0) };
		if (__LIB_4__::func_725(uParam0, 8))
		{
			if (!__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 2))
			{
				*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684 /*41*/].f_40;
			}
		}
		else if (!__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2))
		{
			*fParam3 = __LIB_0__::func_152(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		}
		else
		{
			*fParam3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_40;
		}
	}
}

void func_408(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	vector3 vVar0;
	if (bParam2)
	{
		TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, *(uParam3[0 /*3*/]), 1), 0);
	}
	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	if (__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40, 0);
	}
	else
	{
		vVar0 = { __LIB_5__::func_173(uParam0, iParam1) };
		if (!__LIB_0__::func_86(vVar0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
	}
}

void func_409(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;
	vVar0 = { __LIB_5__::func_173(uParam0, iParam1) };
	if (!__LIB_0__::func_86(vVar0))
	{
		if (bParam2)
		{
			TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(Global_36, vParam3, 1), 0);
		}
		fVar3 = __LIB_0__::func_152(vParam3, vVar0, 1);
		if (__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar3 = uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40;
		}
		if (__LIB_0__::func_84(&(uParam0->f_475[iParam1 /*18*/]), 256))
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
		if (!__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 4) && !__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
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
		if (__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar5 = uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40;
		}
		fVar5 = (fVar5 % 360f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

void func_410(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 || iParam1);
	if (iParam1 == 65536)
	{
		__LIB_0__::func_7(&Global_1935630, 32768);
		__LIB_5__::func_179(*iParam0);
	}
}

void func_411(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_5__::func_185(uParam0) };
	__LIB_4__::func_741(uParam0, &Var0);
}

void func_412(var uParam0)
{
	if ((!__LIB_0__::func_84(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_444, false))
	{
		__LIB_4__::func_783(uParam0);
		__LIB_5__::func_188(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
		}
		__LIB_0__::func_88(uParam0, 32768);
	}
}

void func_413(var uParam0, var uParam1)
{
	struct<8> Var0;
	if (__LIB_4__::func_725(uParam1, 32768))
	{
		Var0 = { __LIB_5__::func_185(uParam0) };
		__LIB_5__::func_136(uParam0, &Var0);
		if (__LIB_4__::func_725(uParam1, 131072))
		{
			__LIB_0__::func_88(uParam0, 268435456);
			if (__LIB_0__::func_86(uParam0->f_505))
			{
				uParam0->f_505 = { __LIB_4__::func_785(uParam1, uParam1->f_1684) };
			}
			if (__LIB_0__::func_86(uParam0->f_502))
			{
				uParam0->f_502 = { __LIB_4__::func_785(uParam1, uParam1->f_1684) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 = (uParam0->f_502.f_2 + 0.5f);
			}
		}
		if (__LIB_4__::func_725(uParam1, 268435456))
		{
			__LIB_0__::func_7(&(uParam0->f_500), 16384);
		}
	}
	else if (__LIB_4__::func_725(uParam1, 524288))
	{
		__LIB_0__::func_88(uParam0, 67108864);
		__LIB_4__::func_755(uParam1, 524288);
	}
	if (__LIB_4__::func_756(uParam1, 128))
	{
		__LIB_0__::func_88(uParam0, 32);
	}
	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
		if (uParam1->f_1684 >= 0 && __LIB_0__::func_274(&(uParam1->f_1016[uParam1->f_1684 /*41*/]), 256))
		{
			__LIB_0__::func_7(&(uParam0->f_500), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1692)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_513), &(uParam1->f_1692), 16);
	}
}

void func_414(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				__LIB_0__::func_723(iParam0);
				__LIB_0__::func_230(iParam0, 0);
				break;
		}
		__LIB_0__::func_254(iParam0, iParam1);
		if (__LIB_5__::func_267(iParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (__LIB_0__::func_205(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_SET_PED_BODY_COMPONENT(Global_1360165[iParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[iParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				__LIB_0__::func_723(iParam0);
				__LIB_0__::func_230(iParam0, 1);
				break;
		}
		__LIB_5__::func_268(iParam0, iParam1);
		__LIB_0__::func_494(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

void func_415(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		if (!bParam1)
		{
			__LIB_5__::func_154(uParam0);
		}
		else if (bParam2)
		{
			__LIB_5__::func_155(uParam0);
		}
		else
		{
			__LIB_5__::func_199(uParam0, uParam0->f_1898);
		}
	}
	else
	{
		if (!__LIB_4__::func_725(uParam0, 1048576) && bParam1)
		{
			__LIB_5__::func_199(uParam0, uParam0->f_1898);
		}
		else if (!__LIB_4__::func_725(uParam0, 2097152) && bParam2)
		{
			__LIB_5__::func_155(uParam0);
		}
		else if ((__LIB_4__::func_725(uParam0, 1048576) && !bParam1) || (__LIB_4__::func_725(uParam0, 2097152) && !bParam2))
		{
			__LIB_5__::func_154(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1882 * FtoV(__LIB_4__::func_634(uParam0->f_1898)) };
			if (!__LIB_0__::func_175(vVar0, VOLUME::_GET_VOLUME_SCALE(uParam0->f_1875), 1056964608 /* Float: 0.5f */, 1) && !__LIB_0__::func_86(vVar0))
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_1875, vVar0);
			}
		}
	}
}

void func_416(var uParam0)
{
	int iVar0;
	if (!uParam0->f_1897)
	{
		if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 8192) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 65536) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
		{
			if (__LIB_5__::func_139(uParam0, uParam0->f_1684))
			{
				__LIB_4__::func_774(uParam0->f_1016[uParam0->f_1684 /*41*/].f_7);
			}
		}
	}
	if (!__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 16) && (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 65536))
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
		__LIB_5__::func_211(uParam0, 1);
	}
	else if ((!__LIB_5__::func_139(uParam0, uParam0->f_1684) && !__LIB_5__::func_142(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		__LIB_5__::func_211(uParam0, 3);
	}
	else
	{
		__LIB_5__::func_211(uParam0, 6);
	}
}

void func_417(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56, false);
	}
	__LIB_5__::func_149(uParam0, 4);
	HUD::_HIDE_HUD_COMPONENT(-1679307491);
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if ((__LIB_0__::func_81(uParam0) == 0 && uParam0->f_1684 >= 0) && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 524288))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		__LIB_4__::func_765(uParam0, 64);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	__LIB_3__::func_739(0);
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(0);
	}
}

void func_418(int iParam0, int iParam1)
{
	char cVar0[64];
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_426 = iParam1;
	__LIB_4__::func_112(iParam1);
	StringCopy(&cVar0, __LIB_0__::func_93(), 64);
	__LIB_5__::func_209(iParam1, &cVar0, 1, 0, 0, 0, -1082130432 /* Float: -1f */);
}

int func_419(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_4__::func_756(uParam0, 4))
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
				if (!__LIB_4__::func_725(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (__LIB_4__::func_682())
	{
		__LIB_4__::func_755(uParam0, 512);
		__LIB_4__::func_765(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_1016[uParam0->f_1684 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	__LIB_4__::func_782();
	__LIB_5__::func_218(uParam0, 1, 0);
	__LIB_5__::func_133(uParam0);
	if (__LIB_4__::func_725(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	__LIB_4__::func_765(uParam0, 4);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1875);
	}
	if (__LIB_4__::func_756(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		CAM::_0x798BE43C9393632B(__LIB_0__::func_166());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), __LIB_0__::func_166())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1345[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1345[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (__LIB_4__::func_725(uParam0, 524288) || iParam1 == 1)
	{
		__LIB_3__::func_120();
	}
	if (__LIB_4__::func_756(uParam0, 16))
	{
		if (__LIB_0__::func_81(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
		}
	}
	__LIB_4__::func_613();
	if (__LIB_4__::func_756(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!__LIB_4__::func_725(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
		}
	}
	__LIB_4__::func_786(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);
	}
	return 1;
}

void func_420(var uParam0, var uParam1, var uParam2, float fParam3)
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
	if (uParam0->f_1897)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1898, 214, true);
	}
	if (uParam0->f_1896 && __LIB_4__::func_725(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (__LIB_0__::func_1(uParam1, 262144) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	__LIB_4__::func_706(&iVar1, uParam2);
	__LIB_4__::func_794(&(uParam0->f_1904), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!__LIB_4__::func_725(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	__LIB_4__::func_614();
	__LIB_5__::func_149(uParam0, 1);
}

int func_421(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (__LIB_5__::func_210(uParam0, &iVar0))
	{
		__LIB_5__::func_151(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_422(int iParam0, int iParam1, char* sParam2)
{
	__LIB_5__::func_212(&(iParam0->f_428), iParam1, sParam2);
}

void func_423(int iParam0, int iParam1, char* sParam2)
{
	__LIB_5__::func_220(&(iParam0->f_958), iParam1, sParam2, 0);
}

void func_424(var uParam0)
{
	int iVar0;
	__LIB_5__::func_213(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_22)) && __LIB_5__::func_156(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_1016[iVar0 /*41*/]), 1))
			{
				if (!__LIB_5__::func_157(uParam0, &(uParam0->f_1016[iVar0 /*41*/].f_22)))
				{
					__LIB_2__::func_813(&(uParam0->f_1771), uParam0->f_1016[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_1016[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	if ((!ITEMSET::IS_ITEMSET_VALID(iParam1) || !ITEMSET::IS_ITEMSET_VALID(iParam2)) || !ITEMSET::IS_ITEMSET_VALID(iParam3))
	{
		return;
	}
	if (!__LIB_5__::func_219(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_58 = iParam1;
	Global_1835011[iParam0 /*74*/].f_59 = iParam2;
	Global_1835011[iParam0 /*74*/].f_60 = iParam3;
}

void func_426(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_219(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_61 = iParam1;
}

bool func_427(var uParam0)
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
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
		{
			if (!__LIB_0__::func_129(&(uParam0->f_1522[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, false))
				{
					__LIB_5__::func_124(uParam0, uParam0->f_1522[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
					bVar1 = false;
					__LIB_4__::func_647(&(uParam0->f_1522[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1016[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_1016[iVar0 /*41*/].f_19));
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_1016[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_756(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && uParam0->f_1345[iVar0 /*22*/].f_21) && !CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_86(uParam0->f_1885) || uParam0->f_1888 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1888, uParam0->f_1885) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1888);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_428(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, var uParam8, var uParam9)
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
	if (!__LIB_5__::func_223(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1897 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1875)) && __LIB_0__::func_266(uParam0->f_1898, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_1875) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1875) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
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
	*uParam8 = __LIB_0__::func_152(uParam0->f_1016[iParam1 /*41*/].f_1, vVar0, 0);
	if (*uParam8 < uParam0->f_1016[iParam1 /*41*/].f_12)
	{
		*uParam8 = (*uParam8 + 360f);
	}
	if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
	{
		*uParam9 = (uParam0->f_1016[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*uParam9 = uParam0->f_1016[iParam1 /*41*/].f_13;
	}
	if (*uParam8 < *uParam9)
	{
		vVar42 = { uParam0->f_1016[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1876 = { vVar42 + Vector(0f, (BUILTIN::COS(*uParam8) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(*uParam8) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_1879 = { vVar42 + Vector(0f, ((BUILTIN::COS(*uParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*uParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

int func_429(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_3__::func_629(iParam0))
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

void func_430(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		__LIB_5__::func_228(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_4__::func_799(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_431(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436.f_9 = 0f;
	}
	Global_1935436.f_8 = 0f;
	Global_1935436.f_12.f_1 = 0f;
	Global_1935436.f_12 = 0f;
	Global_1935436.f_12.f_3 = 0f;
	Global_1935436.f_12.f_2 = 0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	__LIB_5__::func_229(0f);
	Global_1935436.f_11 = 1;
	if (__LIB_0__::func_113())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		__LIB_0__::func_114();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_432(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				__LIB_5__::func_228(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

int func_433(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0 /*67*/]) && (uParam0[iVar0 /*67*/])->f_1 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_434(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
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

bool func_435(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
		{
			return true;
		}
	}
	return false;
}

int func_436(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_437(int iParam0, char* sParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (bParam2)
			{
				PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), MISC::GET_HASH_KEY(sParam1));
			}
			else
			{
				PED::_SET_PED_PROMPT_NAME(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), sParam1);
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			if (bParam2)
			{
				OBJECT::_0xD503D6F0986D58BC(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), MISC::GET_HASH_KEY(sParam1));
			}
		}
	}
}

void func_438(char* sParam0)
{
	if (CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
	}
	CAM::_0x798BE43C9393632B(sParam0);
}

bool func_439(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

void func_440(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_441(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

int func_442(vector3 vParam0, var uParam3)
{
	int iVar0;
	iVar0 = MAP::_BLIP_ADD_FOR_COORD(408396114, vParam0);
	return iVar0;
}

bool func_443(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_606, iParam1);
}

void func_444(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(*iParam0))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, *iParam0);
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			iVar3 = MAP::GET_BLIP_FROM_ENTITY(iVar2);
			if (MAP::DOES_BLIP_EXIST(iVar3))
			{
				if (bParam1)
				{
					MAP::_BLIP_REMOVE_MODIFIER(iVar3, -1186550032);
				}
				else
				{
					MAP::_BLIP_SET_MODIFIER(iVar3, -1186550032);
				}
			}
		}
		iVar0++;
	}
}

bool func_445(var uParam0)
{
	return uParam0->f_606 != 0;
}

void func_446(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_13146)))
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(&(uParam0->f_13146));
		UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	}
}

void func_447(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_13162)))
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(&(uParam0->f_13162));
		UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	}
}

bool func_448(var uParam0, bool bParam1)
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
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_804, "ExportCamera") && bParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_804))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

Vector3 func_449(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_450(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

bool func_451(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

int func_452()
{
	return Global_1898438;
}

Vector3 func_453(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_455(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

float func_456(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

void func_457(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, iParam2, iVar0);
}

bool func_458(int iParam0)
{
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
		return false;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iParam0));
	return true;
}

bool func_459(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_178(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_460(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*67*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_461(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_462(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*5*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_463()
{
	return __LIB_0__::func_481(1);
}

bool func_464(int iParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_5__::func_300(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!AUDIO::_0xD9130842D7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_465(var uParam0)
{
	__LIB_5__::func_265(uParam0);
}

void func_466(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_269(uParam0);
	SCRIPTS::_0x50B72A754EE64A71(iVar0);
}

void func_467(int iParam0)
{
	int iVar0;
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765.f_286 - 150))
	{
	}
	if (__LIB_5__::func_273(&iVar0))
	{
		if (Global_1934765.f_275[iVar0 /*2*/].f_1 != iParam0)
		{
			Global_1934765.f_286 = (Global_1934765.f_286 + Global_1934765.f_275[iVar0 /*2*/].f_1);
			Global_1934765.f_275[iVar0 /*2*/].f_1 = iParam0;
			Global_1934765.f_286 = (Global_1934765.f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(__LIB_5__::func_274());
		}
		return;
	}
	iVar0 = __LIB_5__::func_275();
	if (iVar0 == -1)
	{
		return;
	}
	Global_1934765.f_275[iVar0 /*2*/].f_1 = iParam0;
	Global_1934765.f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765.f_286 = (Global_1934765.f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(__LIB_5__::func_274());
}

bool func_468(var uParam0)
{
	return __LIB_1__::func_325();
}

bool func_469(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

void func_470(var uParam0, int iParam1)
{
	__LIB_4__::func_944(uParam0, 64);
	__LIB_1__::func_683(&(uParam0->f_606), iParam1);
}

void func_471(var uParam0, int iParam1)
{
	__LIB_4__::func_944(uParam0, 64);
	__LIB_1__::func_681(&(uParam0->f_606), iParam1);
}

void func_472(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_269(uParam0);
	SCRIPTS::_0x7D654266025E921B(iVar0);
}

void func_473(int iParam0, var uParam1, bool bParam2)
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
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

bool func_474(var uParam0, bool bParam1)
{
	if (__LIB_4__::func_937(uParam0, 128) && __LIB_0__::func_91())
	{
		return true;
	}
	if (__LIB_1__::func_871(&(uParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

int func_475(var uParam0)
{
	return __LIB_5__::func_280(uParam0, __LIB_4__::func_939(uParam0));
}

void func_476(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	char cVar0[32];
	__LIB_5__::func_334(uParam0, iParam1, iParam9);
	__LIB_5__::func_293(uParam0, iParam1);
	__LIB_5__::func_292(uParam0, iParam1, iParam2);
	__LIB_5__::func_294(uParam0, &iParam3, iParam1, 0);
	__LIB_5__::func_294(uParam0, &iParam4, iParam1, 2);
	__LIB_5__::func_294(uParam0, &iParam5, iParam1, 4);
	__LIB_5__::func_294(uParam0, &iParam6, iParam1, 5);
	__LIB_5__::func_294(uParam0, &iParam7, iParam1, 7);
	__LIB_5__::func_286(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	__LIB_5__::func_295(uParam0, iParam1, cVar0);
	__LIB_5__::func_296(uParam0, iParam1, iParam10);
}

void func_477(var uParam0)
{
	if (!__LIB_4__::func_937(uParam0, 8388608))
	{
		if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) == 5 || __LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) == 6)
		{
			if (!__LIB_0__::func_270())
			{
				if (__LIB_0__::func_265(&(uParam0->f_13112)) < 5f)
				{
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 0);
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	}
}

void func_478(var uParam0)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	if (__LIB_4__::func_937(uParam0, 256))
	{
		return;
	}
	if (!__LIB_4__::func_937(uParam0, 1048576))
	{
		if (__LIB_1__::func_923() || __LIB_1__::func_652())
		{
			__LIB_4__::func_944(uParam0, 1048576);
		}
	}
	else if (!__LIB_1__::func_923() && !__LIB_1__::func_652())
	{
		__LIB_4__::func_969(uParam0, 1048576);
	}
	if (!__LIB_4__::func_937(uParam0, 134217728))
	{
		if ((__LIB_4__::func_937(uParam0, 1048576) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 524288)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
		{
			if (!Global_1935630.f_12)
			{
				WEAPON::_0xB832F1A686B9B810(Global_35, true, 0);
				__LIB_4__::func_944(uParam0, 134217728);
			}
		}
	}
	else if ((!__LIB_4__::func_937(uParam0, 1048576) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 524288)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		if (!Global_1935630.f_12)
		{
			WEAPON::_0xB832F1A686B9B810(Global_35, false, 0);
			__LIB_4__::func_969(uParam0, 134217728);
		}
	}
}

void func_479(var uParam0)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1048576))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, true);
	}
}

void func_480(var uParam0)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2097152))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
}

bool func_481(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return false;
	}
	iVar1 = __LIB_4__::func_564(iParam2);
	if (!__LIB_4__::func_565(iVar1))
	{
		return false;
	}
	if (!__LIB_5__::func_302(uParam0, iParam1, iParam2))
	{
		return true;
	}
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_1[iVar0 /*22*/][iVar1]);
	if (StackVal)
	{
		return true;
	}
	return false;
}

void func_482(var uParam0)
{
	__LIB_5__::func_303(uParam0);
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
}

bool func_483(var uParam0, int iParam1)
{
	if (__LIB_4__::func_937(uParam0, 4194304))
	{
		return false;
	}
	if (!__LIB_5__::func_331(uParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

bool func_484(var uParam0, float fParam1)
{
	if ((((((!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && !PED::IS_PED_AIMING_FROM_COVER(Global_35)) && !PED::IS_PED_SHOOTING(Global_35)) && !PED::IS_PED_RELOADING(Global_35))
	{
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		else if (__LIB_0__::func_264(uParam0) >= fParam1)
		{
			return true;
		}
		else if (((fParam1 > 15f && __LIB_3__::func_996(Global_35)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_264(Global_35)))) && __LIB_0__::func_264(uParam0) < (fParam1 - 15f))
		{
			__LIB_0__::func_268(uParam0, (fParam1 - 15f));
		}
	}
	else if (__LIB_0__::func_75(uParam0))
	{
		__LIB_0__::func_37(uParam0);
	}
	return false;
}

int func_485(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1934765.f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		MISC::_0x243CEDE8F916B994();
		return 0;
	}
	iVar0 = __LIB_4__::func_347(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = __LIB_4__::func_348(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar1))
		{
			MISC::_0xD3F943B88F55376A(iVar2);
		}
		else
		{
			MISC::_0x2916B30DC6C41179(iVar2);
		}
		iVar1++;
	}
	return __LIB_5__::func_313(iParam0, bParam1, fParam2);
}

void func_486(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_958(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (MISC::GET_HASH_KEY(sParam1) != uParam0->f_5302)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
		uParam0->f_5302 = MISC::GET_HASH_KEY(sParam1);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(1, __LIB_5__::func_104(uParam0), MISC::GET_HASH_KEY(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 33554432);
}

bool func_487(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (__LIB_1__::func_610(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_488(var uParam0)
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
							Jump @1464; //curOff = 1420
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

bool func_489(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	if (__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	if (__LIB_4__::func_623(sParam1) == 8)
	{
		return true;
	}
	if (iParam3 != sParam1->f_11 || (sParam1->f_11 == 49 && iParam2 != 25))
	{
		return false;
	}
	if ((iParam4 == 3 && __LIB_4__::func_623(sParam1) == 0) && (__LIB_0__::func_91() || Global_16))
	{
		return true;
	}
	bVar0 = false;
	if ((iParam4 == 4 || iParam4 == 5) || iParam4 == 6)
	{
		bVar0 = true;
	}
	switch (__LIB_4__::func_623(sParam1))
	{
		case 2:
			return (((!__LIB_5__::func_276(uParam0) || bParam5) && bVar0) && !__LIB_5__::func_331(uParam0, iParam2, 67108864));
		case 1:
			return ((!__LIB_0__::func_91() && !CAM::IS_GAMEPLAY_HINT_ACTIVE()) && bVar0);
		case 14:
			return (!__LIB_0__::func_91() && (Global_16 || CAM::IS_GAMEPLAY_HINT_ACTIVE()));
		case 4:
			return ((__LIB_5__::func_276(uParam0) || __LIB_5__::func_331(uParam0, iParam2, 1073741824 /* Float: 2f */)) && bVar0);
		case 3:
			return (iParam4 == 7 || __LIB_5__::func_331(uParam0, iParam2, 67108864));
		case 5:
		case 15:
		case 17:
		case 18:
			return ((__LIB_4__::func_971(uParam0) == sParam1->f_12 && bVar0) && (bVar0 || __LIB_4__::func_623(sParam1) == 15));
		case 6:
		case 16:
		case 19:
		case 20:
			return ((__LIB_4__::func_979(uParam0) == sParam1->f_12 && bVar0) && (bVar0 || __LIB_4__::func_623(sParam1) == 16));
		case 11:
			return __LIB_4__::func_937(uParam0, 2097152);
		case 12:
			return __LIB_5__::func_331(uParam0, iParam2, 8388608);
		case 13:
			return (!__LIB_5__::func_331(uParam0, iParam2, 8388608) && bVar0);
	}
	return false;
}

void func_490(var uParam0, int iParam1)
{
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), iParam1);
}

bool func_491(var uParam0, char* sParam1)
{
	return __LIB_5__::func_352(sParam1);
}

void func_492(var uParam0, char* sParam1)
{
	if (((!__LIB_0__::func_84(uParam0, 32) || __LIB_5__::func_322(uParam0)) || __LIB_0__::func_84(uParam0, 268435456)) && !__LIB_0__::func_84(uParam0, 65536))
	{
		__LIB_0__::func_7(&(uParam0->f_860), 256);
	}
}

bool func_493(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	bVar0 = false;
	if ((iParam3 == 4 || iParam3 == 5) || iParam3 == 6)
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 0:
			return ((iParam3 == 3 && (__LIB_0__::func_91() || Global_16)) || (iParam3 == 2 && __LIB_4__::func_948(uParam0, 4)));
		case 14:
			return (!__LIB_0__::func_91() && (Global_16 || CAM::IS_GAMEPLAY_HINT_ACTIVE()));
		case 1:
			return ((!__LIB_0__::func_91() && !CAM::IS_GAMEPLAY_HINT_ACTIVE()) && bVar0);
		case 2:
			return (!__LIB_5__::func_276(uParam0) && bVar0);
		case 4:
			return ((__LIB_5__::func_276(uParam0) || __LIB_5__::func_331(uParam0, iParam2, 1073741824 /* Float: 2f */)) && bVar0);
		case 3:
			return iParam3 == 7;
		case 5:
			return __LIB_4__::func_971(uParam0) == iParam4;
		case 6:
			return __LIB_4__::func_979(uParam0) == iParam4;
		case 11:
			return __LIB_4__::func_937(uParam0, 2097152);
		case 12:
			return __LIB_5__::func_331(uParam0, iParam2, 8388608);
		case 13:
			return (!__LIB_5__::func_331(uParam0, iParam2, 8388608) && bVar0);
	}
	return false;
}

void func_494(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (__LIB_4__::func_659(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar0 /*9*/])))
		{
			if (!__LIB_5__::func_349(uParam0, sParam1) || __LIB_0__::func_84(uParam0, 8388608))
			{
				StringCopy(&(uParam0->f_822[iVar0 /*9*/]), sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_804, true, false))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_804, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, sParam1);
						}
					}
					else
					{
						__LIB_0__::func_88(uParam0, 4194304);
					}
				}
				else
				{
					__LIB_0__::func_88(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_495(var uParam0)
{
	int iVar0;
	if (!uParam0->f_2287)
	{
		if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 8192) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 65536) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
		{
			if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
			{
				__LIB_4__::func_774(uParam0->f_1406[uParam0->f_2074 /*41*/].f_7);
			}
		}
	}
	if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16) && (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 65536))
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
		__LIB_5__::func_358(uParam0, 1);
	}
	else if ((!__LIB_4__::func_575(uParam0, uParam0->f_2074) && !__LIB_4__::func_579(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		__LIB_5__::func_358(uParam0, 3);
	}
	else
	{
		__LIB_5__::func_358(uParam0, 6);
	}
}

void func_496(int iParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	bVar0 = __LIB_0__::func_21(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && __LIB_1__::func_972(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			__LIB_4__::func_521(iParam0, __LIB_0__::func_23());
			__LIB_0__::func_24(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		__LIB_0__::func_25(iParam0, 67108864);
		__LIB_4__::func_521(iParam0, -15);
	}
	__LIB_5__::func_336(iParam0);
}

void func_497(var uParam0, vector3 vParam1, float fParam4)
{
	if (__LIB_4__::func_948(uParam0, 33554432))
	{
		return;
	}
	if (__LIB_4__::func_948(uParam0, 4096))
	{
		return;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1)))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1));
		__LIB_4__::func_945(uParam0, 8);
	}
	__LIB_4__::func_945(uParam0, 4096);
	PED::_0x4759CC730F947C81();
	VEHICLE::_0x1FF00DB43026B12F();
	PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, false, true, true, false);
	CAM::DO_SCREEN_FADE_OUT(0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
	__LIB_1__::func_148(&(uParam0->f_603));
}

bool func_498(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!__LIB_5__::func_341(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_2502)
	{
		iVar20 = uParam0->f_2509;
		while (iVar20 <= (uParam0->f_2508 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			if (__LIB_4__::func_556(uParam0, 0))
			{
				if (__LIB_5__::func_55(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (__LIB_4__::func_557(uParam0, 1, &iVar0))
					{
					}
					if (__LIB_4__::func_558(uParam0, 3, &cVar2))
					{
					}
					if (__LIB_4__::func_557(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (__LIB_4__::func_557(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (__LIB_4__::func_557(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (__LIB_4__::func_557(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (__LIB_4__::func_557(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!__LIB_1__::func_321(uParam0, &cVar2, uParam0->f_2504))
							{
								*(uParam0[uParam0->f_2504 /*16*/]) = { cVar2 };
								__LIB_0__::func_324(uParam0[uParam0->f_2504 /*16*/], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							uParam0->f_641[uParam0->f_2505 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_641[uParam0->f_2505 /*16*/]), 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							uParam0->f_1282[uParam0->f_2506 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_1282[uParam0->f_2506 /*16*/]), 1048576);
							if (!bVar19 && __LIB_0__::func_755(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_1282[uParam0->f_2506 /*16*/]));
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!__LIB_1__::func_321(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							uParam0->f_2243[uParam0->f_2507 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_2243[uParam0->f_2507 /*16*/]), 1048576);
							uParam0->f_2507++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2509 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_2502 = 1;
	}
	if (!__LIB_4__::func_506(uParam0) && uParam0->f_2510 > 0)
	{
		iVar20 = uParam0->f_2511;
		while (iVar20 <= (uParam0->f_2510 - 1))
		{
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			iVar22 = 0;
			if (__LIB_4__::func_556(uParam0, 12))
			{
				if (__LIB_4__::func_557(uParam0, 13, &iVar0))
				{
				}
				if (__LIB_4__::func_557(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_2484[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2511 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_2500 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	uParam0->f_2502 = 0;
	uParam0->f_2503 = 1;
	if (!bParam4)
	{
		__LIB_4__::func_507(uParam0);
	}
	return true;
}

int func_499(vector3 vParam0, bool bParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (__LIB_0__::func_627(iVar0, 0))
		{
			if (BUILTIN::VDIST(__LIB_1__::func_440(iVar0), vParam0) < bParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_500(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (__LIB_5__::func_356(uParam0, &iVar0))
	{
		__LIB_4__::func_618(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_501(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	__LIB_4__::func_619(uParam0, 4);
	if (__LIB_5__::func_357(uParam0, &uParam1, iParam5))
	{
		__LIB_0__::func_115(uParam0, 1);
	}
}

void func_502(var uParam0)
{
	uParam0->f_2075 = -1;
	__LIB_4__::func_574(uParam0, 0);
	__LIB_0__::func_115(uParam0, 3);
	__LIB_5__::func_358(uParam0, 0);
	__LIB_0__::func_37(&(uParam0->f_2259));
	__LIB_5__::func_359(uParam0);
	__LIB_0__::func_37(&(uParam0->f_2262));
}

void func_503(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = 0;
	if (__LIB_4__::func_959(uParam0))
	{
		fVar1 = BUILTIN::TO_FLOAT((LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX()) - Global_2621440[0 /*12066*/].f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(50, 200)) / 1000f));
			iVar0 = (iVar0 + BUILTIN::ROUND((fVar1 * fVar2)));
		}
	}
	__LIB_2__::func_590(iVar0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
}

bool func_504(var uParam0)
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
		if (__LIB_4__::func_948(uParam0, 8) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_1__::func_469(uParam0->f_607))))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_1__::func_469(uParam0->f_607)));
			__LIB_4__::func_958(uParam0, 8);
		}
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		__LIB_0__::func_489(0, 0);
		__LIB_4__::func_958(uParam0, 4096);
		return true;
	}
	return false;
}

void func_505(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	if (bParam4)
	{
		__LIB_4__::func_964(uParam0, 2);
	}
	else
	{
		__LIB_4__::func_964(uParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	__LIB_4__::func_978(uParam0, cVar0);
	__LIB_0__::func_19(uParam0, 2);
	if (((!CAM::_0x139EFB0A71DD9011() && !__LIB_0__::func_91()) && !__LIB_4__::func_936(uParam0, 80)) && bParam3)
	{
		__LIB_5__::func_380(uParam0);
	}
	__LIB_1__::func_283(&(uParam0->f_13118), 0);
}

void func_506(int iParam0)
{
	__LIB_1__::func_297(iParam0);
}

void func_507(int iParam0)
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
		__LIB_5__::func_391(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_508(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_5__::func_391(50);
			}
			else
			{
				__LIB_5__::func_391(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_5__::func_391(51);
			}
			else
			{
				__LIB_5__::func_391(49);
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
			__LIB_5__::func_391(24);
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

void func_509(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("HATS")))
		{
			PED::_SET_PED_BODY_COMPONENT(iParam0, 622113465);
			bVar0 = true;
		}
	}
	else if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("HATS")))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (bVar0)
		{
			PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
		}
	}
}

void func_510(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

void func_511(int iParam0)
{
	Global_36606 = { __LIB_0__::func_217() };
	Global_36610 = { __LIB_0__::func_217() };
	Global_36605 = iParam0;
}

bool func_512(struct<2> Param0, int iParam2)
{
	int iVar0;
	if (!__LIB_3__::func_358(Param0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		if (__LIB_4__::func_956(Param0, iVar0) == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_513(var uParam0, char* sParam1)
{
	if (((!__LIB_0__::func_84(uParam0, 32) || __LIB_5__::func_400(uParam0)) || __LIB_0__::func_84(uParam0, 268435456)) && !__LIB_0__::func_84(uParam0, 65536))
	{
		__LIB_0__::func_7(&(uParam0->f_500), 256);
	}
}

void func_514(int iParam0, vector3 vParam1, int iParam4)
{
	MemCopy(&(iParam0->f_2880), {vParam1}, 4);
	__LIB_5__::func_410(iParam0, 32768);
	__LIB_0__::func_19(&(iParam0->f_958), iParam4);
}

void func_515(var uParam0)
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
							Jump @1468; //curOff = 1420
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

void func_516(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (__LIB_4__::func_769(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			if (!__LIB_5__::func_405(uParam0, sParam1) || __LIB_0__::func_84(uParam0, 8388608))
			{
				StringCopy(&(uParam0->f_462[iVar0 /*9*/]), sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, sParam1);
						}
					}
					else
					{
						__LIB_0__::func_88(uParam0, 4194304);
					}
				}
				else
				{
					__LIB_0__::func_88(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_517(var uParam0, char* sParam1, int iParam2)
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
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1889);
	if (!bVar0)
	{
		uParam0->f_1889 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_1889);
	if (!bVar1)
	{
		return false;
	}
	__LIB_5__::func_200(uParam0);
	__LIB_0__::func_19(uParam0, iParam2);
	if (__LIB_4__::func_725(uParam0, 16384))
	{
		__LIB_5__::func_160(uParam0);
	}
	Var2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		__LIB_5__::func_161(uParam0, iVar18);
		if (__LIB_5__::func_162(uParam0, 0))
		{
			if (__LIB_5__::func_163(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_1016[iVar16 /*41*/].f_27 = 0;
					__LIB_5__::func_164(uParam0, 1, &(uParam0->f_1016[iVar16 /*41*/].f_1));
					__LIB_5__::func_164(uParam0, 2, &(uParam0->f_1016[iVar16 /*41*/].f_1.f_1));
					__LIB_5__::func_164(uParam0, 3, &(uParam0->f_1016[iVar16 /*41*/].f_1.f_2));
					__LIB_5__::func_164(uParam0, 4, &(uParam0->f_1016[iVar16 /*41*/].f_11));
					__LIB_5__::func_164(uParam0, 5, &(uParam0->f_1016[iVar16 /*41*/].f_12));
					__LIB_5__::func_164(uParam0, 6, &(uParam0->f_1016[iVar16 /*41*/].f_13));
					__LIB_5__::func_164(uParam0, 7, &(uParam0->f_1016[iVar16 /*41*/].f_4));
					__LIB_5__::func_164(uParam0, 8, &(uParam0->f_1016[iVar16 /*41*/].f_4.f_1));
					__LIB_5__::func_164(uParam0, 9, &(uParam0->f_1016[iVar16 /*41*/].f_4.f_2));
					__LIB_5__::func_164(uParam0, 10, &(uParam0->f_1016[iVar16 /*41*/].f_7));
					__LIB_5__::func_164(uParam0, 11, &(uParam0->f_1016[iVar16 /*41*/].f_7.f_1));
					__LIB_5__::func_164(uParam0, 12, &(uParam0->f_1016[iVar16 /*41*/].f_7.f_2));
					__LIB_5__::func_164(uParam0, 13, &(uParam0->f_1016[iVar16 /*41*/].f_10));
					__LIB_5__::func_164(uParam0, 14, &(uParam0->f_1016[iVar16 /*41*/].f_14));
					__LIB_5__::func_164(uParam0, 15, &(uParam0->f_1016[iVar16 /*41*/].f_15));
					if (__LIB_5__::func_163(uParam0, 16, &iVar17))
					{
						uParam0->f_1016[iVar16 /*41*/] = iVar17;
					}
					__LIB_5__::func_164(uParam0, 19, &(uParam0->f_1016[iVar16 /*41*/].f_16));
					__LIB_5__::func_164(uParam0, 20, &(uParam0->f_1016[iVar16 /*41*/].f_17));
					__LIB_5__::func_164(uParam0, 31, &(uParam0->f_1016[iVar16 /*41*/].f_18));
					if (__LIB_5__::func_165(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_1016[iVar16 /*41*/].f_19), {Var20}, 3);
					}
					if (__LIB_5__::func_165(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_1016[iVar16 /*41*/].f_22), {Var20}, 3);
					}
					__LIB_5__::func_163(uParam0, 23, &(uParam0->f_1016[iVar16 /*41*/].f_25));
					__LIB_5__::func_406(uParam0, &(uParam0->f_1016[iVar16 /*41*/].f_27));
					if (__LIB_5__::func_165(uParam0, 35, &(uParam0->f_1016[iVar16 /*41*/].f_30)))
					{
					}
					if (__LIB_5__::func_163(uParam0, 39, &iVar17))
					{
						uParam0->f_1016[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_1016[iVar16 /*41*/].f_39 = 1;
					}
					if (__LIB_5__::func_164(uParam0, 40, &(uParam0->f_1016[iVar16 /*41*/].f_40)))
					{
						__LIB_4__::func_639(&(uParam0->f_1016[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar16 /*41*/].f_30)))
					{
						uParam0->f_1016[iVar16 /*41*/].f_30 = { __LIB_0__::func_137() };
					}
					uParam0->f_1016[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_1895 == -1 || uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 < uParam0->f_1016[iVar16 /*41*/].f_17)
					{
						uParam0->f_1895 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_1016[iVar18 /*41*/].f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1900 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18 /*41*/].f_29)
		{
			if (!__LIB_1__::func_410(vVar29, uParam0->f_1016[iVar18 /*41*/].f_1, 5f, 1))
			{
				uParam0->f_1900 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				__LIB_5__::func_161(uParam0, iVar18);
				if (__LIB_5__::func_162(uParam0, 45))
				{
					if (__LIB_5__::func_163(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							__LIB_4__::func_647(&(uParam0->f_1522[iVar16 /*10*/]), 2);
							__LIB_5__::func_165(uParam0, 46, &(uParam0->f_1522[iVar16 /*10*/]));
							if (__LIB_5__::func_166(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									__LIB_4__::func_647(&(uParam0->f_1522[iVar16 /*10*/]), 1);
								}
							}
							if (__LIB_5__::func_163(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									__LIB_4__::func_647(&(uParam0->f_1522[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									__LIB_4__::func_647(&(uParam0->f_1522[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 35)
			{
				iVar16 = -1;
				__LIB_5__::func_161(uParam0, iVar18);
				if (__LIB_5__::func_162(uParam0, 50))
				{
					if (__LIB_5__::func_163(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					__LIB_5__::func_163(uParam0, 43, &(Var2.f_3));
					if (__LIB_5__::func_165(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					__LIB_5__::func_164(uParam0, 53, &(Var2.f_8));
					if (__LIB_5__::func_163(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					__LIB_5__::func_166(uParam0, 55, &(Var2.f_11));
					__LIB_5__::func_166(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (__LIB_5__::func_201(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 35)
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
								__LIB_4__::func_757(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			__LIB_5__::func_161(uParam0, iVar18);
			if (__LIB_5__::func_162(uParam0, 82))
			{
				if (__LIB_5__::func_165(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_459), {Var20}, 4);
				}
				__LIB_5__::func_165(uParam0, 84, &(uParam0->f_459.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459.f_4)))
				{
					if (uParam0->f_459.f_15 == 1)
					{
						uParam0->f_459.f_4 = { __LIB_0__::func_134() };
					}
					else if (uParam0->f_459.f_15 == 2)
					{
						uParam0->f_459.f_4 = { __LIB_0__::func_137() };
					}
					else
					{
						uParam0->f_459.f_4 = { __LIB_0__::func_137() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				__LIB_5__::func_161(uParam0, iVar18);
				if (__LIB_5__::func_162(uParam0, 57))
				{
					if (__LIB_5__::func_163(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_475[iVar16 /*18*/].f_8 = 0;
							__LIB_5__::func_163(uParam0, 58, &(uParam0->f_475[iVar16 /*18*/]));
							if (__LIB_5__::func_163(uParam0, 59, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_1 = __LIB_4__::func_650(iVar17);
							}
							if (__LIB_5__::func_163(uParam0, 60, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_2 = __LIB_4__::func_651(iVar17);
							}
							__LIB_5__::func_163(uParam0, 61, &(uParam0->f_475[iVar16 /*18*/].f_3));
							__LIB_5__::func_164(uParam0, 67, &(uParam0->f_475[iVar16 /*18*/].f_10));
							__LIB_5__::func_164(uParam0, 70, &(uParam0->f_475[iVar16 /*18*/].f_11));
							__LIB_5__::func_164(uParam0, 68, &(uParam0->f_475[iVar16 /*18*/].f_9));
							__LIB_5__::func_163(uParam0, 72, &(uParam0->f_475[iVar16 /*18*/].f_5));
							__LIB_5__::func_164(uParam0, 77, &(uParam0->f_475[iVar16 /*18*/].f_12));
							__LIB_5__::func_163(uParam0, 78, &(uParam0->f_475[iVar16 /*18*/].f_13));
							__LIB_5__::func_163(uParam0, 79, &(uParam0->f_475[iVar16 /*18*/].f_14));
							if (__LIB_5__::func_163(uParam0, 73, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_17 = iVar17;
							}
							if (__LIB_5__::func_163(uParam0, 75, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							__LIB_5__::func_164(uParam0, 80, &(uParam0->f_475[iVar16 /*18*/].f_15));
							if (__LIB_5__::func_166(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (__LIB_5__::func_166(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 512;
								}
							}
							if (__LIB_5__::func_166(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (__LIB_5__::func_166(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (__LIB_5__::func_166(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (__LIB_5__::func_166(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (__LIB_5__::func_166(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (__LIB_5__::func_166(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (__LIB_5__::func_166(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_475[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_475[iVar16 /*18*/].f_4 = uParam0->f_475[iVar16 /*18*/].f_3;
								uParam0->f_475[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_475[iVar16 /*18*/].f_16 = uParam0->f_475[iVar16 /*18*/].f_2;
							uParam0->f_475[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1894 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				__LIB_5__::func_161(uParam0, iVar18);
				if (__LIB_5__::func_162(uParam0, 85))
				{
					__LIB_5__::func_163(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						__LIB_5__::func_166(uParam0, 87, &(uParam0->f_1345[iVar18 /*22*/]));
						__LIB_5__::func_165(uParam0, 96, &(uParam0->f_1345[iVar18 /*22*/].f_2));
						__LIB_5__::func_165(uParam0, 97, &(uParam0->f_1345[iVar18 /*22*/].f_10));
						__LIB_5__::func_164(uParam0, 93, &(uParam0->f_1345[iVar18 /*22*/].f_18));
						__LIB_5__::func_164(uParam0, 94, &(uParam0->f_1345[iVar18 /*22*/].f_19));
						__LIB_5__::func_163(uParam0, 95, &(uParam0->f_1345[iVar18 /*22*/].f_20));
						uParam0->f_1345[iVar18 /*22*/].f_1 = 0;
						__LIB_5__::func_394(uParam0, &(uParam0->f_1345[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				__LIB_5__::func_161(uParam0, iVar18);
				if (__LIB_5__::func_162(uParam0, 98))
				{
					if (__LIB_5__::func_163(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1633[iVar16 /*15*/].f_10 = 0;
							__LIB_5__::func_167(uParam0, 99, &(uParam0->f_1633[iVar16 /*15*/]));
							__LIB_5__::func_167(uParam0, 100, &(uParam0->f_1633[iVar16 /*15*/].f_6));
							__LIB_5__::func_167(uParam0, 101, &(uParam0->f_1633[iVar16 /*15*/].f_3));
							if (__LIB_5__::func_163(uParam0, 102, &iVar17))
							{
								uParam0->f_1633[iVar16 /*15*/].f_9 = iVar17;
							}
							__LIB_5__::func_406(uParam0, &(uParam0->f_1633[iVar16 /*15*/].f_10));
							uParam0->f_1633[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1889);
			__LIB_4__::func_757(uParam0, 1);
			__LIB_4__::func_757(uParam0, 16384);
			__LIB_5__::func_168(uParam0);
			return true;
		}
	}
}

bool func_518(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_4__::func_779(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_5__::func_207(uParam0) };
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
		if ((fVar3 >= __LIB_4__::func_743(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				__LIB_1__::func_436();
				uParam0->f_529 = 0;
			}
			__LIB_4__::func_744(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			__LIB_5__::func_186(uParam0);
			__LIB_4__::func_733(uParam0, 128, 1);
			__LIB_4__::func_733(uParam0, 256, 1);
			__LIB_4__::func_733(uParam0, 4096, 1);
			__LIB_4__::func_733(uParam0, 32768, 1);
			__LIB_4__::func_733(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_4__::func_745(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (__LIB_4__::func_745(uParam0) >= __LIB_4__::func_743(uParam0))
				{
				}
				Var4 = { __LIB_4__::func_746(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_5__::func_187(uParam0);
				}
				Var4 = { __LIB_4__::func_746(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &Var4, false, true);
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
		__LIB_5__::func_412(uParam0);
		if (!uParam0->f_529)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_5__::func_185(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_462[iVar14 /*9*/].f_8)
						{
							uParam0->f_462[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_444, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15))
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
			__LIB_4__::func_733(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_519(int iParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bVar0 = PED::IS_PED_ON_FOOT(Global_35);
	if (!bVar0 && __LIB_2__::func_27(iParam0, 1048576))
	{
		__LIB_4__::func_727(iParam0, 1048576);
		return false;
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
			return false;
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
		return true;
	}
	else if (BUILTIN::VDIST2(__LIB_1__::func_204(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return true;
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
			return true;
		}
	}
	return false;
}

int func_520(int iParam0)
{
	float fVar0;
	int iVar1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar1 = iParam0->f_423;
		fVar0 = 10f;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar1 = iParam0->f_424;
		fVar0 = 15f;
	}
	else
	{
		iVar1 = iParam0->f_422;
		fVar0 = 5f;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
	{
		if (__LIB_1__::func_205(Global_35, iVar1, 1, 0))
		{
			__LIB_5__::func_410(iParam0, 8388608);
			return 1;
		}
	}
	if (BUILTIN::VDIST2(__LIB_1__::func_204(*iParam0), Global_36) < (fVar0 * fVar0))
	{
		__LIB_5__::func_410(iParam0, 8388608);
		return 1;
	}
	return 0;
}

void func_521(float fParam0)
{
	__LIB_5__::func_467(BUILTIN::CEIL((BUILTIN::TO_FLOAT(300) - (BUILTIN::TO_FLOAT(300) * fParam0))));
}

void func_522(var uParam0)
{
	uParam0->f_1685 = -1;
	__LIB_4__::func_751(uParam0, 0);
	__LIB_0__::func_115(uParam0, 3);
	__LIB_5__::func_211(uParam0, 0);
	__LIB_0__::func_37(&(uParam0->f_1869));
	__LIB_5__::func_404(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1872));
}

void func_523(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar19;
	int iVar20;
	vector3 vVar21;
	if (uParam0->f_475[iParam2 /*18*/].f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_475[iParam2 /*18*/].f_4;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, true, false))
		{
			__LIB_5__::func_124(uParam0, uParam0->f_1522[iVar0 /*10*/].f_8);
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, &vVar1, &vVar4, 2);
			if (__LIB_0__::func_129(&(uParam0->f_1522[iVar0 /*10*/]), 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1522[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (__LIB_0__::func_152(vVar1, Global_36, 1) - __LIB_0__::func_152(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1522[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_475[iParam2 /*18*/].f_17 != 0)
			{
				if ((__LIB_0__::func_78(uParam0) > 3 && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 32768))
				{
					__LIB_5__::func_214(uParam0, 1);
				}
				if (uParam0->f_1899)
				{
					if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 128))
					{
					}
					else
					{
						__LIB_4__::func_757(uParam0, 131072);
						return;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1522[iVar0 /*10*/].f_8, false))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1522[iVar0 /*10*/].f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1522[iVar0 /*10*/].f_8, "b_PlayerArthur", !__LIB_0__::func_181(), false);
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				if (uParam0->f_475[iParam2 /*18*/].f_17 == 0)
				{
					__LIB_4__::func_647(&(uParam0->f_1522[iVar0 /*10*/]), 128);
					if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
					{
						__LIB_4__::func_712(uParam0->f_1522[iVar0 /*10*/].f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1522[iVar0 /*10*/].f_8, false);
			}
			if (__LIB_0__::func_84(&(uParam0->f_475[iParam2 /*18*/]), 4))
			{
				uParam0->f_1685 = iParam2;
				if (((((__LIB_0__::func_81(uParam0) == 0 && !CAM::_0x81DCFD13CF39920E()) && uParam0->f_475[iParam2 /*18*/].f_17 == 1) && uParam0->f_475[iParam2 /*18*/] < 8) && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 32768)) && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 524288))
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_4__::func_765(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 35)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && uParam0->f_3[iVar20 /*13*/].f_8 > 0f) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar20 /*13*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar20 /*13*/].f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1522[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_475[iParam2 /*18*/].f_17 != 0) && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 32768))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1522[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar21, false, 0, 2) && !__LIB_0__::func_86(vVar21))
				{
					__LIB_5__::func_417(uParam0, 0);
				}
			}
			uParam0->f_475[iParam2 /*18*/].f_7 = 1;
		}
	}
}

void func_524(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	__LIB_5__::func_407(uParam0, iParam1, &vVar1, &fVar0);
	__LIB_5__::func_417(uParam0, __LIB_0__::func_1(uParam0->f_1345[uParam0->f_475[iParam1 /*18*/] /*22*/].f_1, 8));
	__LIB_1__::func_148(&(uParam0->f_1869));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
	if (uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!__LIB_5__::func_202(uParam0, uParam0->f_475[iParam1 /*18*/]))
		{
			__LIB_4__::func_639(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}
	__LIB_4__::func_774(vVar1);
	if (uParam0->f_475[iParam1 /*18*/].f_15 < 1f)
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, uParam0->f_475[iParam1 /*18*/].f_15);
		__LIB_4__::func_765(uParam0, 32);
	}
	if (__LIB_0__::func_84(&(uParam0->f_475[iParam1 /*18*/]), 16))
	{
		__LIB_5__::func_215(uParam0, uParam0->f_475[iParam1 /*18*/], &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(vVar4[iVar24 /*3*/]);
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_5__::func_408(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_5__::func_409(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

void func_525(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(iParam0->f_2893)))
	{
		__LIB_1__::func_283(&(iParam0->f_2893), 0);
	}
	if (__LIB_0__::func_265(&(iParam0->f_2893)) >= 1f)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_425))
		{
			iVar0 = __LIB_0__::func_398(7);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!__LIB_2__::func_27(iParam0, 512))
				{
					PED::_0xE9B168527B337BF0(iVar0, iParam0->f_425);
					__LIB_5__::func_410(iParam0, 512);
				}
			}
			else if (__LIB_2__::func_27(iParam0, 512))
			{
				__LIB_4__::func_727(iParam0, 512);
			}
		}
		__LIB_1__::func_148(&(iParam0->f_2893));
	}
}

void func_526(int iParam0)
{
	if ((!__LIB_2__::func_27(iParam0, 33554432) && !__LIB_5__::func_176(iParam0, 524288)) && !__LIB_5__::func_176(iParam0, 32768))
	{
		if (__LIB_5__::func_226(&(iParam0->f_958)))
		{
			__LIB_5__::func_218(&(iParam0->f_958), 0, 0);
			__LIB_5__::func_410(iParam0, 33554432);
		}
	}
}

void func_527(var uParam0, int iParam1)
{
	__LIB_4__::func_751(uParam0, 4);
	__LIB_0__::func_115(uParam0, 10);
	__LIB_5__::func_419(uParam0, iParam1);
}

bool func_528(var uParam0)
{
	return __LIB_5__::func_340(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

void func_529(var uParam0)
{
	if (!__LIB_5__::func_402(uParam0))
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 4194304))
	{
		__LIB_5__::func_403(uParam0);
		__LIB_4__::func_757(uParam0, 4194304);
	}
	if (__LIB_5__::func_427(uParam0))
	{
		__LIB_5__::func_197(uParam0);
		__LIB_5__::func_198(uParam0);
		__LIB_0__::func_115(uParam0, 2);
	}
}

bool func_530(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	vVar0 = { __LIB_4__::func_681(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (__LIB_2__::func_774(*iParam0))
		{
			return true;
		}
		return false;
	}
	bVar3 = __LIB_0__::func_91();
	if (bVar3)
	{
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	if (!__LIB_2__::func_27(iParam0, 32))
	{
		if (__LIB_0__::func_91())
		{
			__LIB_5__::func_410(iParam0, 32);
		}
		else if (__LIB_0__::func_265(&(iParam0->f_2884)) >= 60f)
		{
			return true;
		}
	}
	else
	{
		if (!__LIB_0__::func_91())
		{
			return true;
		}
		if (!__LIB_2__::func_27(iParam0, 4096))
		{
			if (__LIB_2__::func_774(*iParam0))
			{
				__LIB_5__::func_410(iParam0, 4096);
			}
			else
			{
				__LIB_5__::func_180(iParam0);
			}
		}
		else if (!__LIB_2__::func_774(*iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_531(int iParam0)
{
	char cVar0[64];
	char cVar8[64];
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_425))
	{
		StringCopy(&cVar0, __LIB_0__::func_93(), 64);
		StringConCat(&cVar0, "_NO_AMBIENT_CONTENT", 64);
		iParam0->f_425 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_1__::func_204(*iParam0), 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		__LIB_5__::func_208(iParam0, iParam0->f_425, 0);
		__LIB_5__::func_426(*iParam0, iParam0->f_425);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_426))
	{
		StringCopy(&cVar8, __LIB_0__::func_93(), 64);
		StringConCat(&cVar8, "_NO_SCRIPT_CONTENT", 64);
		iParam0->f_426 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_1__::func_204(*iParam0), 0f, 0f, 0f, 25f, 25f, 25f, &cVar8);
		__LIB_5__::func_418(iParam0, iParam0->f_426);
	}
}

void func_532(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	__LIB_5__::func_221(&(iParam0->f_428), iParam1, sParam2, iParam3, iParam4, bParam6);
	__LIB_5__::func_423(iParam0, iParam1, sParam2);
	if (bParam5)
	{
		__LIB_4__::func_766(iParam0, iParam1);
	}
}

float func_533(var uParam0, int iParam1)
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
	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_4, true);
			vVar0 = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 };
			if (__LIB_4__::func_788(&vVar3, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_4, vVar0, Global_36))
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
			if (Global_36.f_2 >= uParam0->f_1016[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[iParam1 /*41*/].f_1.f_2 + uParam0->f_1016[iParam1 /*41*/].f_10))
			{
				__LIB_5__::func_428(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true) - uParam0->f_1016[iParam1 /*41*/].f_11);
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

void func_534(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_0__::func_31(iParam1))
	{
		return;
	}
	__LIB_0__::func_130(iParam2);
	if (bParam4)
	{
		__LIB_5__::func_422(iParam0, iParam2, 0);
	}
	if (!bParam6)
	{
		if (!__LIB_2__::func_27(iParam0, 4194304))
		{
			bParam6 = __LIB_3__::func_740(&(Global_1835011[*iParam0 /*74*/]), 1024);
			bVar0 = __LIB_3__::func_740(&(Global_1835011[*iParam0 /*74*/]), 65536);
		}
	}
	__LIB_1__::func_774(iParam1, iParam3, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, bParam6, bVar0, 0, 0);
}

void func_535(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (__LIB_4__::func_637(&(uParam0->f_1633[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!__LIB_0__::func_1(uParam0->f_1633[iParam1 /*15*/].f_10, 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1903)))
				{
					__LIB_5__::func_429(uParam0->f_1903, 0);
					__LIB_4__::func_666(&(uParam0->f_1633[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_1633[iParam1 /*15*/].f_10, 256))
			{
				if (!__LIB_4__::func_795())
				{
					__LIB_4__::func_666(&(uParam0->f_1633[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				__LIB_4__::func_666(&(uParam0->f_1633[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!__LIB_4__::func_790())
			{
				__LIB_4__::func_666(&(uParam0->f_1633[iParam1 /*15*/]), 0);
			}
			break;
	}
}

void func_536(int iParam0)
{
	if (!__LIB_2__::func_27(iParam0, 131072))
	{
		if (!__LIB_2__::func_27(iParam0, 2048) && !__LIB_5__::func_132(iParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
		}
		__LIB_5__::func_179(*iParam0);
		__LIB_5__::func_410(iParam0, 1024);
		__LIB_0__::func_267(0);
		__LIB_0__::func_7(&Global_1935630, 32768);
		__LIB_3__::func_155(2);
		__LIB_5__::func_180(iParam0);
		__LIB_5__::func_431(1);
		__LIB_4__::func_776(*iParam0);
		__LIB_4__::func_777(*iParam0);
		__LIB_5__::func_175(iParam0);
		if (!__LIB_2__::func_27(iParam0, -2147483648))
		{
			__LIB_5__::func_206();
		}
		__LIB_4__::func_724(iParam0);
		__LIB_5__::func_410(iParam0, 131072);
	}
}

void func_537(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, iParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, fParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

int func_538(int iParam0)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_30;
}

float func_539(int iParam0)
{
	return (__LIB_5__::func_456(iParam0) / 2f);
}

void func_540(bool bParam0)
{
	if (bParam0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 1024))
		{
			__LIB_0__::func_380(&Global_1393447, 1024);
		}
	}
	else
	{
		__LIB_0__::func_47(&Global_1393447, 1024);
	}
}

bool func_541(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
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
	__LIB_0__::func_568(vParam1, fParam4, 0);
	TASK::CLEAR_PED_TASKS(iParam0, true, false);
	iVar0 = joaat("PROP_HITCHINGPOST");
	iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, iVar0, fParam4, 1, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1f, false);
	}
	else
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
	return true;
}

bool func_542(int iParam0)
{
	return __LIB_5__::func_451(iParam0);
}

int func_543(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/])
				{
					case 987244216:
						iVar1 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/].f_2;
						if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/].f_2;
							if (__LIB_0__::func_83(iVar2) && !__LIB_5__::func_451(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_544(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		__LIB_1__::func_148(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (__LIB_1__::func_568(sParam1))
			{
				return true;
			}
		}
		else if (__LIB_1__::func_104(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_545(int iParam0)
{
	return __LIB_0__::func_746(iParam0) == 2;
}

bool func_546(int iParam0)
{
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return __LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1);
		case 44:
			return __LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1);
	}
	return true;
}

void func_547(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_1357549.f_1495 = (Global_1357549.f_1495 - (Global_1357549.f_1495 && iParam0));
			break;
	}
}

void func_548(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_1357549.f_1495 = (Global_1357549.f_1495 || iParam0);
			break;
	}
}

int func_549(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*uParam0)[iVar0 /*5*/] != 0)
		{
			if ((*uParam0)[iVar0 /*5*/] == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_550(var uParam0, int iParam1)
{
	uParam0->f_8265 = iParam1;
	__LIB_4__::func_945(uParam0, 2048);
}

int func_551(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, int iParam11)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { __LIB_2__::func_66(vParam0, vParam3, fParam10) };
	vVar4 = { __LIB_2__::func_67(vParam0, vParam3, fParam10) };
	__LIB_0__::func_568(vParam6, fParam9, iParam11);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

void func_552(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, fParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, fParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

void func_553(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if ((!PED::GET_PED_CONFIG_FLAG(iParam0, 138, true) || PED::_0xDC9273D95976BA22(iParam0) != 10f) || !ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(iParam0))
		{
			__LIB_2__::func_279(iParam0, 1);
			PED::_0xC2266AA617668AD3(iParam0, 10f);
			PED::_0xD05AD61F242C626B(iParam0, 10f);
			ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam0, true);
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(iParam0, 138, true) || PED::_0xDC9273D95976BA22(iParam0) != 1f)
	{
		__LIB_2__::func_279(iParam0, 0);
		PED::_0xC2266AA617668AD3(iParam0, 1f);
		PED::_0xD05AD61F242C626B(iParam0, 1f);
	}
}

int func_554(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = MAP::_0xA6EF0C54A3443E70(iParam0, uParam1);
	if (bParam2)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

char* func_555(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MAUSER"):
			return "w_pistol_mauser01";
		case joaat("WEAPON_PISTOL_SEMIAUTO"):
			return "w_pistol_semiauto01";
		case joaat("WEAPON_PISTOL_VOLCANIC"):
			return "w_pistol_volcanic01";
		case joaat("WEAPON_REPEATER_CARBINE"):
			return "w_repeater_carbine-1";
		case joaat("WEAPON_REPEATER_HENRY"):
			return "w_repeater_henry01";
		case joaat("WEAPON_REPEATER_WINCHESTER"):
			return "w_repeater_winchester01";
		case joaat("WEAPON_REVOLVER_CATTLEMAN"):
			return "w_revolver_cattleman01";
		case joaat("WEAPON_REVOLVER_DOUBLEACTION"):
			return "w_revolver_doubleaction01";
		case joaat("WEAPON_REVOLVER_SCHOFIELD"):
			return "w_revolver_schofield01";
		case joaat("WEAPON_RIFLE_BOLTACTION"):
			return "w_rifle_boltaction01";
		case joaat("WEAPON_RIFLE_SPRINGFIELD"):
			return "w_revolver_springfield01";
		case joaat("WEAPON_RIFLE_VARMINT"):
			return "w_repeater_pumpaction01";
		case joaat("WEAPON_SHOTGUN_PUMP"):
			return "w_shotgun_pumpAction01";
		case joaat("WEAPON_SHOTGUN_DOUBLEBARREL"):
			return "w_shotgun_doublebarrel01";
		case joaat("WEAPON_SHOTGUN_REPEATING"):
			return "w_shotgun_repeating01";
		case joaat("WEAPON_SHOTGUN_SAWEDOFF"):
			return "w_shotgun_sawed01";
		case joaat("WEAPON_SHOTGUN_SEMIAUTO"):
			return "w_shotgun_semiauto01";
		case joaat("WEAPON_SNIPERRIFLE_CARCANO"):
			return "w_rifle_carcano01";
		case joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"):
			return "w_rifle_rollingBlock01";
		case joaat("WEAPON_BOW"):
		case joaat("WEAPON_THROWN_DYNAMITE"):
		case joaat("WEAPON_MELEE_KNIFE"):
		case joaat("WEAPON_MELEE_CLEAVER"):
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_MELEE_HATCHET"):
		case joaat("WEAPON_MELEE_MACHETE"):
		case joaat("WEAPON_MELEE_TORCH"):
		case joaat("WEAPON_LASSO"):
			break;
	}
	return "";
}

bool func_556(int iParam0)
{
	return (Global_1935496 && iParam0) != 0;
}

int func_557(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!__LIB_0__::func_131(uParam0[iVar0 /*5*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_558(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!__LIB_5__::func_281(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	return __LIB_4__::func_531(&(uParam0->f_5423[iVar0 /*65*/]), iParam2);
}

void func_559(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_5__::func_281(uParam0, iParam2, &iVar0))
	{
		return;
	}
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar1 /*65*/])))
		{
			if (uParam0->f_5423[iVar1 /*65*/].f_1 == iParam1)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 != -1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_5423[iVar0 /*65*/].f_1))
	{
		uParam0->f_5423[iVar2 /*65*/].f_1 = uParam0->f_5423[iVar0 /*65*/].f_1;
	}
	uParam0->f_5423[iVar0 /*65*/].f_1 = iParam1;
	__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 64);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
	{
		__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 8);
	}
	else if (__LIB_0__::func_125(iParam1))
	{
		__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 16);
	}
}

bool func_560(var uParam0, int iParam1)
{
	if (*uParam0 & -2147483648 != 0)
	{
		return false;
	}
	if (*uParam0 & 67108863 != 0)
	{
		return false;
	}
	return (*uParam0 == 0 || !__LIB_5__::func_459(*uParam0, iParam1));
}

void func_561(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_281(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (!__LIB_4__::func_629(iParam3, &iVar1))
	{
		return;
	}
	uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/] = iParam2;
}

void func_562(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_281(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (!__LIB_4__::func_629(iParam3, &iVar1))
	{
		return;
	}
	uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_1 = iParam2;
}

void func_563(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_281(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (!__LIB_4__::func_629(iParam3, &iVar1))
	{
		return;
	}
	uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_2 = iParam2;
}

void func_564(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_281(uParam0, iParam1, &iVar0))
	{
		return;
	}
	__LIB_0__::func_7(&(uParam0->f_5423[iVar0 /*65*/].f_6), iParam2);
}

void func_565(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (__LIB_4__::func_948(uParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_4__::func_967(&(uParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_462(&(uParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_819[iVar0 /*5*/] = cParam1;
	uParam0->f_819[iVar0 /*5*/].f_4 = (uParam0->f_819[iVar0 /*5*/].f_4 || iParam2);
	uParam0->f_819[iVar0 /*5*/].f_1 = iParam3;
	uParam0->f_819[iVar0 /*5*/].f_2 = iParam4;
}

void func_566(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_5__::func_459(iParam3, __LIB_4__::func_939(uParam0)) && !__LIB_5__::func_459(iParam3, __LIB_5__::func_475(uParam0)))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam1, false))
	{
		return;
	}
	iVar0 = __LIB_5__::func_433(&(uParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/]) && MISC::ARE_STRINGS_EQUAL(uParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/], sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/]))
		{
			uParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/] = sParam2;
			uParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/].f_2 = (uParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/].f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_567(var uParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	if (__LIB_4__::func_948(uParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_5__::func_434(&(uParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_461(&(uParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_1020[iVar0 /*3*/] = cParam1;
	uParam0->f_1020[iVar0 /*3*/].f_2 = (uParam0->f_1020[iVar0 /*3*/].f_2 || iParam2);
}

void func_568(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_131(uParam0[iVar0 /*3*/]))
		{
			if (__LIB_5__::func_459((uParam0[iVar0 /*3*/])->f_2, iParam12))
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
			if (__LIB_5__::func_459((uParam1[iVar0 /*5*/])->f_4, iParam12))
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
			if (__LIB_5__::func_459((uParam2[iVar0 /*3*/])->f_2, iParam12))
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
			if (__LIB_5__::func_459((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_4__::func_689(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (__LIB_5__::func_459(uParam4->f_1, iParam12))
	{
		__LIB_4__::func_690(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar0 /*67*/]))
		{
			if (__LIB_5__::func_459((uParam5[iVar0 /*67*/])->f_3, iParam12))
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
					if (__LIB_5__::func_459((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
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
			if (__LIB_5__::func_459((uParam6[iVar0 /*4*/])->f_3, iParam12))
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
			if (__LIB_5__::func_459((uParam7[iVar0 /*5*/])->f_4, iParam12))
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
			if (__LIB_5__::func_459((uParam8[iVar0 /*3*/])->f_2, iParam12))
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
			if (__LIB_5__::func_459((uParam9[iVar0 /*3*/])->f_2, iParam12))
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
			if (__LIB_5__::func_459((uParam10[iVar0 /*4*/])->f_3, iParam12))
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
			if (__LIB_5__::func_459((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_285(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

bool func_569(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_132(uParam0[iVar0 /*67*/]))
		{
			if (__LIB_5__::func_459((uParam0[iVar0 /*67*/])->f_3, iParam1))
			{
				if ((uParam0[iVar0 /*67*/])->f_65 > 0f || __LIB_0__::func_1((uParam0[iVar0 /*67*/])->f_2, 4))
				{
					if (!__LIB_4__::func_793(uParam0[iVar0 /*67*/]))
					{
						iVar1 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_570(var uParam0, int iParam1)
{
	var uVar0;
	return __LIB_5__::func_281(uParam0, iParam1, &uVar0);
}

void func_571(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_281(uParam0, iParam1, &iVar0))
	{
		return;
	}
	__LIB_5__::func_73(&(uParam0->f_5423[iVar0 /*65*/]), iParam2);
}

void func_572(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_281(uParam0, iParam1, &iVar0))
	{
		return;
	}
	__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), iParam2);
}

void func_573(var uParam0, int iParam1)
{
	int iVar0;
	struct<24> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_281(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && __LIB_5__::func_290(uParam0, ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		EVENT::_0x4465C3D1475BD3FD(ENTITY::GET_ENTITY_MODEL(iParam1));
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5423[iVar0 /*65*/].f_8))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_5423[iVar0 /*65*/].f_8));
	}
	Var1.f_5 = 3;
	Var1.f_10 = -1;
	Var1.f_12 = 5;
	Var1.f_23 = 10;
	Var1.f_23.f_1 = 3;
	Var1.f_23.f_1.f_1 = 500;
	Var1.f_23.f_1.f_2 = 10000;
	Var1.f_23.f_1.f_4 = 3;
	Var1.f_23.f_1.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	MISC::_COPY_MEMORY(&(uParam0->f_5423[iVar0 /*65*/]), &(uParam0->f_5423[(uParam0->f_13145 - 1) /*65*/]), 65);
	MISC::_COPY_MEMORY(&(uParam0->f_5423[(uParam0->f_13145 - 1) /*65*/]), &Var1, 65);
	uParam0->f_13145 = (uParam0->f_13145 - 1);
}

bool func_574(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (__LIB_0__::func_131(uParam0[iVar1 /*3*/]))
		{
			if (__LIB_5__::func_459((uParam0[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_693(uParam0[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (__LIB_0__::func_132(uParam1[iVar1 /*5*/]))
		{
			if (__LIB_5__::func_459((uParam1[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!__LIB_4__::func_694(uParam1[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (__LIB_0__::func_132(uParam2[iVar1 /*3*/]))
		{
			if (__LIB_5__::func_459((uParam2[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_695(uParam2[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (__LIB_0__::func_132(uParam3[iVar1 /*3*/]))
		{
			if (__LIB_5__::func_459((uParam3[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_689(uParam3[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (__LIB_5__::func_459(uParam4->f_1, iParam12))
	{
		if (!__LIB_4__::func_690(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar1 /*67*/]))
		{
			if (__LIB_5__::func_459((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (__LIB_0__::func_286(uParam5[iVar1 /*67*/]))
				{
					if (!__LIB_4__::func_793(uParam5[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar1 /*67*/]))
		{
			if (__LIB_5__::func_459((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (__LIB_0__::func_286(uParam5[iVar1 /*67*/]))
				{
					if (__LIB_4__::func_793(uParam5[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (__LIB_0__::func_132(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/])))
							{
								if (!__LIB_4__::func_696(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/]), (uParam5[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (__LIB_0__::func_131(uParam6[iVar1 /*4*/]))
		{
			if (__LIB_5__::func_459((uParam6[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!__LIB_4__::func_697(uParam6[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (__LIB_0__::func_131(uParam7[iVar1 /*5*/]))
		{
			if (__LIB_5__::func_459((uParam7[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!__LIB_4__::func_698(uParam7[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (__LIB_0__::func_132(uParam8[iVar1 /*3*/]))
		{
			if (__LIB_5__::func_459((uParam8[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_699(uParam8[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (__LIB_0__::func_282(uParam9[iVar1 /*3*/]))
		{
			if (__LIB_5__::func_459((uParam9[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_700(uParam9[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (__LIB_0__::func_132(uParam10[iVar1 /*4*/]))
		{
			if (__LIB_5__::func_459((uParam10[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!__LIB_4__::func_701(uParam10[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (__LIB_0__::func_132(uParam11[iVar1 /*3*/]))
		{
			if (__LIB_5__::func_459((uParam11[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_702(uParam11[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_575(var uParam0)
{
	int iVar0;
	if ((__LIB_0__::func_2() != -1 || __LIB_4__::func_939(uParam0) == 25) || __LIB_4__::func_939(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			__LIB_5__::func_339(&(uParam0->f_5423[iVar0 /*65*/]));
		}
		iVar0++;
	}
	return 0;
}

bool func_576(var uParam0)
{
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16777216))
	{
		return false;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		return false;
	}
	if (!Global_1935630.f_12)
	{
		return ((TASK::GET_IS_TASK_ACTIVE(Global_35, 3) || __LIB_0__::func_491(Global_35, -2017877118)) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1));
	}
	return false;
}

bool func_577(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			vVar0 = { __LIB_5__::func_84(uParam0) };
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

void func_578(var uParam0, char* sParam1, bool bParam2)
{
	if (!__LIB_5__::func_445(uParam0))
	{
		StringCopy(&(uParam0->f_13146), UILOG::_UILOG_GET_CACHED_OBJECTIVE(), 128);
	}
	else
	{
		StringCopy(&(uParam0->f_13162), UILOG::_UILOG_GET_CACHED_OBJECTIVE(), 128);
	}
	__LIB_1__::func_422(sParam1, 7500, bParam2, 1, 0, 0, -1, -1, 0);
	UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
}

bool func_579(bool bParam0, bool bParam1)
{
	if (!__LIB_0__::func_139(Global_43801))
	{
		Global_43801 = __LIB_1__::func_746("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
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

void func_580(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	__LIB_5__::func_111(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	__LIB_5__::func_118(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_581(bool bParam0, float fParam1)
{
	int iVar0;
	if (MISC::IS_BIT_SET(Global_1934765.f_301, 1))
	{
		return;
	}
	iVar0 = __LIB_5__::func_291();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765.f_338)
	{
		return;
	}
	if (__LIB_5__::func_485(Global_1934765.f_318[iVar0 /*3*/], bParam0, fParam1))
	{
		Global_1934765.f_338 = iVar0;
	}
}

void func_582(var uParam0, int iParam1)
{
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		__LIB_5__::func_286(uParam0, iParam1, 2);
		__LIB_4__::func_952(uParam0, 0);
		__LIB_5__::func_372(uParam0, 0);
		__LIB_4__::func_944(uParam0, 8);
		__LIB_4__::func_969(uParam0, -2147483648);
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 67108864);
		__LIB_4__::func_969(uParam0, 4);
		__LIB_4__::func_969(uParam0, 8192);
		__LIB_4__::func_969(uParam0, 536870912);
		__LIB_4__::func_958(uParam0, 4);
		__LIB_0__::func_869(0);
		__LIB_0__::func_868(0);
		__LIB_4__::func_969(uParam0, 2);
		__LIB_0__::func_769();
		uParam0->f_5302 = 0;
		__LIB_5__::func_466(uParam0);
		if ((__LIB_5__::func_475(uParam0) == 25 || __LIB_5__::func_475(uParam0) == 26) && __LIB_0__::func_13(32768))
		{
			__LIB_5__::func_33(uParam0, 524288);
		}
		if (__LIB_0__::func_2() == 0)
		{
			if (PED::_0xB655DB7582AEC805(Global_35))
			{
				__LIB_1__::func_965(0);
				PED::_0xF6262491C7704A63(Global_35, 0);
			}
			else if (Global_1935630.f_12)
			{
				__LIB_5__::func_113(1, 1);
			}
		}
	}
}

bool func_583(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_755(sParam1, 2))
	{
		return false;
	}
	if (__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	iVar0 = __LIB_4__::func_623(sParam1);
	if (iVar0 == 8)
	{
		return true;
	}
	bVar1 = false;
	if (sParam1->f_11 == 49 && iParam2 == 25)
	{
		bVar1 = true;
	}
	if ((iParam3 < sParam1->f_11 || iParam3 > sParam1->f_13) && !bVar1)
	{
		return false;
	}
	if (iVar0 == 5 || iVar0 == 6)
	{
		if ((iParam3 == sParam1->f_11 && iParam4 != 5) && iParam4 != 6)
		{
			return false;
		}
		if (iParam3 > sParam1->f_11)
		{
			return true;
		}
	}
	if (iParam3 >= sParam1->f_11 || bVar1)
	{
		return __LIB_5__::func_493(uParam0, iVar0, iParam2, iParam4, sParam1->f_12);
	}
	return false;
}

bool func_584(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	if (!__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	if (__LIB_0__::func_755(sParam1, 2))
	{
		return false;
	}
	if (iParam3 > sParam1->f_13)
	{
		return true;
	}
	bVar0 = false;
	if (sParam1->f_11 == 49 && iParam2 == 25)
	{
		bVar0 = true;
	}
	iVar1 = __LIB_4__::func_624(sParam1);
	if (((iVar1 == 5 || iVar1 == 6) && iParam4 != 5) && iParam4 != 6)
	{
		return false;
	}
	if (iParam3 == sParam1->f_13 || bVar0)
	{
		return __LIB_5__::func_493(uParam0, iVar1, iParam2, iParam4, sParam1->f_14);
	}
	return false;
}

void func_585(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1406[iVar0 /*41*/].f_30)))
		{
			__LIB_5__::func_494(uParam0, &(uParam1->f_1406[iVar0 /*41*/].f_30), 1);
		}
		iVar0++;
	}
}

void func_586(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	__LIB_5__::func_323(uParam0, iParam1, &vVar1, &fVar0);
	__LIB_5__::func_115(uParam0, __LIB_0__::func_1(uParam0->f_1735[uParam0->f_865[iParam1 /*18*/] /*22*/].f_1, 8));
	__LIB_1__::func_148(&(uParam0->f_2259));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
	if (uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!__LIB_5__::func_97(uParam0, uParam0->f_865[iParam1 /*18*/]))
		{
			__LIB_4__::func_639(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/]), 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}
	__LIB_4__::func_774(vVar1);
	if (uParam0->f_865[iParam1 /*18*/].f_15 < 1f)
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, uParam0->f_865[iParam1 /*18*/].f_15);
		__LIB_4__::func_612(uParam0, 32);
	}
	if (__LIB_0__::func_84(&(uParam0->f_865[iParam1 /*18*/]), 16))
	{
		__LIB_5__::func_369(uParam0, uParam0->f_865[iParam1 /*18*/], &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(vVar4[iVar24 /*3*/]);
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_5__::func_98(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_5__::func_99(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

void func_587(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_43619[iVar0 /*12*/]))
		{
			uParam0->f_7375.f_13[iVar0 /*12*/] = { Global_43619[iVar0 /*12*/] };
			__LIB_5__::func_118(&(uParam0->f_10792), Global_43619[iVar0 /*12*/], &(Global_43619[iVar0 /*12*/].f_1), 0);
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804);
	}
	if (__LIB_0__::func_1(Global_1935630, 524288))
	{
		__LIB_0__::func_8(&Global_1935630, 524288);
		__LIB_5__::func_33(uParam0, 67108864);
	}
}

void func_588(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 == 0 || __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
	{
		if (MAP::DOES_BLIP_EXIST(*uParam1))
		{
			__LIB_5__::func_305(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 512);
	if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 256))
	{
		iVar1 = __LIB_0__::func_761(-1739349092);
	}
	if (!MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), __LIB_0__::func_271(iParam0));
	}
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		if (iVar0 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(*uParam1, iVar0);
			if (iVar0 == -546708623)
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, 231194138);
			}
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(*uParam1, iVar0);
		}
		if (bVar2 && !__LIB_0__::func_296(0, 0, 1))
		{
			MAP::_BLIP_SET_STYLE(*uParam1, -1944754404);
			if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 1024))
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, -46775694);
			}
			if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 2048))
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			MAP::SET_BLIP_SPRITE(*uParam1, iVar1, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_14)) && __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, &(Global_1360165[iParam0 /*1157*/].f_14));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, __LIB_1__::func_464(iParam0, 0));
		}
	}
}

void func_589(var uParam0, char[4] cParam1, bool bParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	__LIB_5__::func_505(uParam0, &cParam1, "", bParam9, bParam10);
}

var func_590(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	var uVar0;
	char* sVar1;
	__LIB_5__::func_486(uParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		uVar0 = __LIB_1__::func_422(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!__LIB_5__::func_491(uParam0, sParam1))
	{
		sVar1 = __LIB_0__::func_958(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		uVar0 = __LIB_0__::func_565(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

int func_591(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!__LIB_5__::func_379(iVar1, bParam0, bParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_592(var uParam0)
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
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
		{
			if (!__LIB_0__::func_129(&(uParam0->f_1912[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1912[iVar0 /*10*/].f_8, false))
				{
					__LIB_5__::func_124(uParam0, uParam0->f_1912[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
					bVar1 = false;
					__LIB_4__::func_647(&(uParam0->f_1912[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1912[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1406)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1406[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_1406[iVar0 /*41*/].f_19));
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_1406[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_577(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_2)) && uParam0->f_1735[iVar0 /*22*/].f_21) && !CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1735[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_86(uParam0->f_2275) || uParam0->f_2278 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1912[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_2278, uParam0->f_2275) };
					vVar5.f_2 = (vVar5.z - uParam0->f_2278);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1912[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_593(int iParam0, bool bParam1)
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
	__LIB_1__::func_721(iParam0);
	__LIB_0__::func_798(iParam0);
	__LIB_4__::func_965(iParam0);
	__LIB_1__::func_108(iParam0);
	if (__LIB_0__::func_823(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (__LIB_0__::func_825(iParam0) != iVar0)
		{
			return;
		}
	}
	__LIB_0__::func_782(iParam0, 4);
	if (bParam1)
	{
		__LIB_0__::func_782(iParam0, 16);
	}
}

float func_594(var uParam0, int iParam1)
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
				__LIB_5__::func_383(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
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

void func_595(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
	iVar0 = __LIB_4__::func_957(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	iVar1 = __LIB_0__::func_402(iVar0);
	iVar2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	bVar3 = false;
	if (SCRIPTS::IS_THREAD_ACTIVE(iVar2, false) && __LIB_0__::func_825(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			__LIB_5__::func_374(7);
		}
		else
		{
			__LIB_2__::func_145(iVar0, 0);
		}
		__LIB_4__::func_958(uParam0, 16);
		PED::SET_PED_CONFIG_FLAG(iVar0, 219, false);
	}
}

void func_596(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (__LIB_4__::func_637(&(uParam0->f_2023[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!__LIB_0__::func_1(uParam0->f_2023[iParam1 /*15*/].f_10, 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_2293)))
				{
					__LIB_5__::func_386(uParam0->f_2293, 0);
					__LIB_4__::func_666(&(uParam0->f_2023[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_2023[iParam1 /*15*/].f_10, 256))
			{
				if (!__LIB_4__::func_795())
				{
					__LIB_4__::func_666(&(uParam0->f_2023[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				__LIB_4__::func_666(&(uParam0->f_2023[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!__LIB_4__::func_790())
			{
				__LIB_4__::func_666(&(uParam0->f_2023[iParam1 /*15*/]), 0);
			}
			break;
	}
}

Vector3 func_597(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { __LIB_5__::func_389(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_5__::func_389(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_598(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			iVar1 = uParam0->f_5423[iVar0 /*65*/];
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				ENTITY::_SET_ENTITY_HEALTH(iVar1, ENTITY::GET_ENTITY_MAX_HEALTH(iVar1, false), 0);
			}
			if (__LIB_5__::func_130(&(uParam0->f_5423[iVar0 /*65*/]), __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1)))
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar3 = 0;
					__LIB_0__::func_495(&iVar3, 9);
					if (bParam1)
					{
						COMPANION::_0x1740E3DEE0AE4D27(iVar2, iVar3);
					}
					else
					{
						COMPANION::_0xDEB369F6AD168C58(iVar2, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_599(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	__LIB_0__::func_304(0);
	__LIB_5__::func_390(__LIB_3__::func_918(uParam0->f_607), Var0, Var4, __LIB_5__::func_24(iParam9), __LIB_5__::func_24(iParam10));
}

void func_600(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_5__::func_508(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_5__::func_508(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

Vector3 func_601(int iParam0)
{
	return __LIB_0__::func_85(&(iParam0->f_428));
}

void func_602(int iParam0, int iParam1)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam1))
	{
		return;
	}
	if (iParam1 == joaat("WEAPON_UNARMED"))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iParam1, true, -142743235);
	}
}

void func_603(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_500, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_5__::func_185(uParam0) };
		__LIB_5__::func_136(uParam0, &Var0);
	}
	__LIB_5__::func_513(uParam0, sParam1);
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
	__LIB_4__::func_747(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_4__::func_744(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_4__::func_729(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_436);
	}
	__LIB_5__::func_398(uParam0);
	__LIB_5__::func_188(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_604(int iParam0)
{
	vector3 vVar0;
	vVar0 = { __LIB_4__::func_681(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		return;
	}
	if (__LIB_5__::func_132(iParam0))
	{
		return;
	}
	if (!__LIB_2__::func_27(iParam0, 16384))
	{
		__LIB_5__::func_410(iParam0, 16384);
		if (!__LIB_0__::func_116(&vVar0))
		{
			return;
		}
		__LIB_5__::func_514(iParam0, vVar0, 0);
		__LIB_5__::func_410(iParam0, 524288);
	}
}

void func_605(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[iVar0 /*41*/].f_30)))
		{
			__LIB_5__::func_516(uParam0, &(uParam1->f_1016[iVar0 /*41*/].f_30), 1);
		}
		iVar0++;
	}
}

void func_606(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	__LIB_5__::func_152(uParam0, 4);
	if (__LIB_5__::func_517(uParam0, &uParam1, iParam5))
	{
		__LIB_0__::func_115(uParam0, 1);
	}
}

bool func_607(int iParam0)
{
	__LIB_5__::func_410(iParam0, 262144);
	if (__LIB_5__::func_519(iParam0))
	{
		__LIB_5__::func_410(iParam0, 65536);
		return true;
	}
	return false;
}

void func_608(int iParam0)
{
	__LIB_5__::func_527(&(iParam0->f_958), iParam0->f_958);
}

void func_609(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_5__::func_532(iParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

int func_610(var uParam0, int iParam1)
{
	vector3 vVar0;
	*iParam1 = *uParam0;
	PED::_0xED9582B3DA8F02B4(10);
	iParam1->f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(*uParam0));
	__LIB_0__::func_16(iParam1);
	if (__LIB_5__::func_204(iParam1))
	{
		__LIB_5__::func_411(&(iParam1->f_428));
		__LIB_5__::func_531(iParam1);
		__LIB_5__::func_410(iParam1, 16777216);
		__LIB_4__::func_722(iParam1, 8);
	}
	else
	{
		__LIB_4__::func_722(iParam1, 0);
	}
	if (!__LIB_2__::func_27(iParam1, 1073741824 /* Float: 2f */))
	{
		__LIB_5__::func_105(*iParam1);
		__LIB_5__::func_178(*iParam1);
	}
	vVar0 = { __LIB_4__::func_681(*iParam1) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		__LIB_5__::func_410(iParam1, 134217728);
	}
	__LIB_1__::func_283(&(iParam1->f_2896), 0);
	return 1;
}

void func_611(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = __LIB_3__::func_919(iParam0->f_2889, 2097152);
	bVar1 = __LIB_2__::func_27(iParam0, 1024);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!__LIB_0__::func_31(iVar3))
		{
		}
		else if (!__LIB_0__::func_699(iVar3))
		{
		}
		else if (!__LIB_1__::func_22(iVar3))
		{
		}
		else
		{
			iVar4 = Global_1360165[iVar2 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				__LIB_5__::func_534(iParam0, iVar3, iVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

int func_612(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1688;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_475[iParam1 /*18*/];
		fVar3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_7;
		fVar4 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1;
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
				if (!__LIB_5__::func_159(uParam0, iVar2))
				{
					uParam0->f_1685 = iParam1;
				}
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_1016[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459))) || (!__LIB_0__::func_274(&(uParam0->f_1016[iVar2 /*41*/]), 128) && uParam0->f_1899))
			{
				if (uParam0->f_1899)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 0.1f, -1, false);
					if (!__LIB_4__::func_725(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1901, 24, 1000);
					__LIB_5__::func_211(uParam0, 8);
				}
				else
				{
					__LIB_4__::func_757(uParam0, 131072);
					__LIB_5__::func_211(uParam0, 11);
				}
			}
			else if (uParam0->f_1897)
			{
				__LIB_5__::func_211(uParam0, 5);
			}
			else
			{
				__LIB_5__::func_416(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1869)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_0__::func_264(&(uParam0->f_1869)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_5__::func_416(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1869)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_5__::func_139(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_5__::func_416(uParam0);
			}
			if ((!uParam0->f_1897 && !uParam0->f_1899) || bVar0)
			{
				uParam0->f_1686 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_5__::func_416(uParam0);
				}
				else
				{
					__LIB_5__::func_524(uParam0, iParam1, bParam2);
					__LIB_1__::func_148(&(uParam0->f_1869));
					__LIB_5__::func_211(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1869)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_5__::func_211(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_1016[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1903)))
				{
					__LIB_5__::func_429(uParam0->f_1903, 0);
				}
			}
			__LIB_1__::func_148(&(uParam0->f_1869));
			__LIB_5__::func_211(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1869)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_1016[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_5__::func_211(uParam0, 10);
				}
				else
				{
					__LIB_5__::func_211(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1869)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_5__::func_211(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1869)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_5__::func_139(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1686 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1901, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_5__::func_211(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_264(&(uParam0->f_1869)) >= 0.75f)
			{
				if (!__LIB_4__::func_725(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
				__LIB_4__::func_757(uParam0, 131072);
				__LIB_5__::func_211(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_613(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_5__::func_430(&(uParam0->f_501), uParam0->f_512);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_190(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_5__::func_186(uParam0);
	__LIB_4__::func_750(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_784(uParam0, 4);
	__LIB_5__::func_187(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_744(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_501, 128));
	if (!__LIB_0__::func_1(uParam0->f_501, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_614(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1633[iVar2 /*15*/].f_11 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1633[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1898) && !uParam0->f_1633[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1898, uParam0->f_1633[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1898, 1);
				uParam0->f_1633[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1687 != 0 || __LIB_4__::func_725(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_1687 = 0;
					__LIB_4__::func_755(uParam0, 33554432);
				}
				bVar3 = __LIB_0__::func_1(uParam0->f_1633[iVar2 /*15*/].f_10, 131072);
				if (__LIB_0__::func_393(Global_35, uParam0->f_1633[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_1688 >= 0)
					{
						__LIB_5__::func_420(uParam0, uParam0->f_1633[iVar2 /*15*/].f_10, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						__LIB_4__::func_636();
					}
					__LIB_5__::func_535(uParam0, iVar2, iVar0, bVar3);
				}
				else if (__LIB_4__::func_637(&(uParam0->f_1633[iVar2 /*15*/])) != 0)
				{
					__LIB_5__::func_535(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_1633[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_1688 >= 0)
				{
					if (((__LIB_0__::func_94(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) > uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 && __LIB_0__::func_393(uParam0->f_1898, uParam0->f_1633[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_1687 != 0) || __LIB_4__::func_725(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (__LIB_3__::func_869(Global_35, &(uParam0->f_1687), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_1687 = 0;
							__LIB_4__::func_755(uParam0, 33554432);
						}
						else
						{
							__LIB_4__::func_757(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

int func_615(var uParam0, var uParam1)
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
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
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
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
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
				*uParam0 = 0;
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
				*uParam0 = 0;
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
				*uParam0 = 0;
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
				__LIB_2__::func_308(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
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
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
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
			Var10 = { __LIB_2__::func_229() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
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
		*uParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

void func_616()
{
	__LIB_0__::func_11();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_822();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_617(int iParam0, int iParam1)
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, iParam1, false);
	return __LIB_0__::func_154(iVar0);
}

void func_618(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (PAD::_IS_USING_KEYBOARD(iParam8))
	{
		*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam4));
		*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam5));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 250f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 250f));
	}
	else
	{
		*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
		*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
	}
}

int func_619(var uParam0)
{
	return uParam0->f_107;
}

void func_620()
{
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
}

bool func_621()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return false;
}

bool func_622()
{
	return Global_1357506;
}

bool func_623()
{
	return Global_1357503;
}

void func_624(bool bParam0)
{
	if (bParam0)
	{
		ANIMSCENE::_PAUSE_SCRIPT_THREADS(true);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		GRAPHICS::_0xEC3D8C228FE553D7(0);
	}
	else
	{
		ANIMSCENE::_PAUSE_SCRIPT_THREADS(false);
		ANIMSCENE::_0x41AFA5F228B0B6B0();
		GRAPHICS::_0xEC3D8C228FE553D7(1);
	}
}

bool func_625(var uParam0, int iParam1)
{
	return (uParam0->f_109 && iParam1) != 0;
}

void func_626(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
}

void func_627(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 || iParam1);
}

void func_628()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

bool func_629()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return false;
}

char* func_630()
{
	return "facials@gen_male@portrait";
}

char* func_631()
{
	return "FACE_HUMAN@GEN_MALE@PORTRAIT";
}

void func_632()
{
	Global_1935496.f_29 = 0;
}

int func_633(int iParam0)
{
	if (__LIB_2__::func_800())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_634(var uParam0)
{
	return uParam0->f_108;
}

void func_635(var uParam0)
{
	*uParam0 = 1;
}

void func_636(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

int func_637(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE77::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

char[] func_638(int iParam0)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_20(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1888801[iParam0 /*35*/].f_22;
}

int func_639()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

char* func_640(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

char* func_641(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	return "No District Label!";
}

char* func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	return "No State Label!";
}

void func_643(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 - (uParam0->f_109 && iParam1));
}

float func_644(float fParam0, float fParam1)
{
	float fVar0;
	fVar0 = ((fParam0 - fParam1) + 180f);
	fVar0 = (fVar0 / 360f);
	fVar0 = (((fVar0 - IntToFloat(BUILTIN::FLOOR(fVar0))) * 360f) - 180f);
	return fVar0;
}

bool func_645(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_646(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::TASK_STAND_STILL(iParam0, -1);
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, 0, 0, 0);
	}
}

void func_647(struct<108> Param0, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112)
{
	int iVar0;
	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	PED::SET_PED_RESET_FLAG(Global_35, 173, true);
	if (Param0.f_107 == 9)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	if (!Param0.f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	if (__LIB_0__::func_71(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
		}
	}
}

bool func_648(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_17(iParam0);
	iVar1 = Global_1945938[iVar0 /*18*/].f_4;
	return (__LIB_1__::func_514(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_649(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

int func_650(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

int func_651(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		__LIB_1__::func_578(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_652(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (__LIB_0__::func_139(uParam0->f_1[iVar0]))
		{
			__LIB_1__::func_748(&(uParam0->f_1[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_653()
{
	if (CLOCK::GET_CLOCK_HOURS() >= 18 || CLOCK::GET_CLOCK_HOURS() <= 6)
	{
		Global_1393237.f_6 = 3;
	}
	else
	{
		Global_1393237.f_6 = 2;
	}
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE");
		case 1:
			return joaat("A_C_HORSE_ANDALUSIAN_PERLINO");
		case 2:
			return joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC");
		case 3:
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC");
		case 4:
			return joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC");
		case 5:
			return joaat("A_C_HORSE_ARABIAN_WHITE");
		case 6:
			return joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY");
		default:
			break;
	}
	return 0;
}

bool func_655()
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

bool func_656(int iParam0)
{
	int iVar0;
	iVar0 = PED::_0x5407B7288D0478B7(Global_35, iParam0);
	return iVar0 > 0;
}

int func_657()
{
	return Global_1310750.f_16071;
}

bool func_658(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return Global_1393237.f_11[iParam0 /*30*/].f_2 != -1;
}

int func_659(int iParam0, float fParam1, bool bParam2)
{
	if (fParam1 < 180f)
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (CAM::IS_SPHERE_VISIBLE(Global_1393237.f_11[iParam0 /*30*/].f_3 + Vector(1f, 0f, 0f), 3f))
			{
				return 1;
			}
			if (bParam2)
			{
				if (CAM::IS_SPHERE_VISIBLE(Global_1393237.f_11[iParam0 /*30*/].f_3 + Vector(5.5f, 0f, 0f), 3f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_660(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return 200f;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 3:
					return 200f;
				case 0:
					return 220f;
				default:
					return 300f;
			}
			break;
	}
	return 400f;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_662(var uParam0, int iParam1)
{
	uParam0->f_84 = iParam1;
}

int func_663(var uParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *uParam0)
	{
		iParam7 = (*uParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam8 == iVar0)
		{
		}
		else if (!bParam5 || !__LIB_0__::func_86(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = BUILTIN::VDIST2(*(uParam0[iVar0 /*3*/]), vParam1);
			if (fVar3 >= fParam4 && (iVar0 == 0 || fVar3 < fVar2))
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

bool func_664(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1393237.f_11)
	{
		return false;
	}
	return true;
}

int func_665()
{
	return 240000;
}

void func_666(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*11*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*11*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*11*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*11*/], 21);
			}
		}
		iVar0++;
	}
}

bool func_667(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_10991.f_4)
	{
		if (__LIB_0__::func_175(Global_40.f_10991.f_4[iVar0 /*3*/], vParam0, 10f, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_668(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 9484;
	*iParam1 = 66;
	*iParam2 = 128;
}

float func_669(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return Global_40.f_11959[iVar0];
}

void func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritoryODR");
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, -2130.477f, 650.93f, 134f, 0f, 0f, -9.000001f, 550f, 290f, 400f);
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -1515.893f, 438.8593f, 123.8794f, 0f, 0f, -22.99999f, 998f, 473f, 800f);
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, -793.1203f, 320.4612f, 67.59668f, 0f, 0f, 22f, 725f, 604f, 400f);
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, -337.4048f, 658.247f, 151f, 0f, 0f, -5f, 421f, 576f, 400f);
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, 256.0334f, 1317.352f, 189.7937f, 0f, 0f, 18f, 693f, 492f, 400f);
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, 335.598f, 633.835f, 151f, 0f, 0f, 11.68f, 421f, 576f, 400f);
			break;
		case 1:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritoryINB");
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, 2309.554f, 1094.065f, 122.2573f, 0f, 0f, -7f, 311f, 357f, 400f);
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, 2448.154f, 1722.388f, 106.8464f, 0f, 0f, -15f, 329f, 503f, 400f);
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, 2373f, 1410.837f, 88f, 0f, 0f, -7.999999f, 323f, 274f, 399f);
			VOLUME::_0xBCE668AAF83608BE(Global_1392050[iParam0 /*14*/].f_13, 2913.521f, 1417.039f, 51.85259f, 0f, 0f, -7.999999f, 1000f, 1000f, 399f);
			break;
		case 2:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1444.124f, -1663.972f, 103f, 0f, 0f, 25f, 785f, 1402.462f, 800f, "GangTerritoryEXC");
			break;
		case 3:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritorySAV");
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -2316.826f, -1167.406f, 153.7127f, 0f, 0f, 30f, 676.5008f, 927.0109f, 163.3098f);
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -2192.601f, -1729.948f, 153.7126f, 0f, 0f, 28.40238f, 346.8922f, 176.3344f, 163.3098f);
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -2054.552f, -1804.523f, 153.7126f, 0f, 0f, -37.77114f, 316.7911f, 176.3344f, 163.3098f);
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -1966.271f, -1572.086f, 153.7126f, 0f, 0f, 98.67613f, 548.4231f, 322.8264f, 163.3098f);
			break;
		case 4:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritoryRAN");
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -1746.924f, 208.3046f, 220.6833f, 0f, 0f, 0f, 956.0742f, 1526.917f, 400f);
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -2682.787f, 256.4973f, 220.6833f, 0f, 0f, 0f, 956.0742f, 1427.599f, 400f);
			break;
		case 5:
			Global_1392050[iParam0 /*14*/].f_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GangTerritoryBND");
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -1425.634f, -2201.19f, 53.50934f, 0f, 0f, 0f, 296.6014f, 304.1389f, 89.12419f);
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -4672.855f, -3822.961f, 53.50933f, 0f, 0f, 91.0172f, 3000f, 6900f, 250.124f);
			VOLUME::_0x39816F6F94F385AD(Global_1392050[iParam0 /*14*/].f_13, -4136.813f, -2096.956f, 53.50934f, 0f, 0f, 0f, 3500.01f, 600f, 300f);
			break;
		default:
			return;
	}
}

bool func_671(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 5:
			return true;
		case 3:
		case 4:
			return false;
	}
	return false;
}

bool func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return false;
		case 3:
		case 4:
		case 5:
			return true;
	}
	return false;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return 1776960747;
}

int func_674(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*11*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_675(int iParam0, int iParam1)
{
	if (__LIB_4__::func_259(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9422[iParam0 /*7*/].f_6 = (Global_40.f_9422[iParam0 /*7*/].f_6 || iParam1);
}

bool func_676(vector3 vParam0)
{
	if (!__LIB_0__::func_86(Global_1393237.f_200))
	{
		return BUILTIN::VDIST(Global_1393237.f_200, vParam0) < 5f;
	}
	return false;
}

void func_677(int iParam0)
{
	Global_40.f_11945[iParam0] = __LIB_0__::func_23();
}

bool func_678(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = __LIB_1__::func_349(uParam0);
	if (uParam0->f_12 > __LIB_1__::func_361(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = __LIB_1__::func_362(iParam1);
	iVar1 = __LIB_1__::func_363(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_679(var uParam0, int iParam1)
{
	if (__LIB_4__::func_290(iParam1))
	{
		return !(uParam0->f_1 && iParam1) != 0;
	}
	else
	{
		switch (iParam1)
		{
			case 262144:
				return __LIB_0__::func_27(*uParam0, 4);
			case 32:
				return __LIB_0__::func_27(*uParam0, 8);
			case 8192:
				return __LIB_0__::func_27(*uParam0, 16);
			case 64:
				return __LIB_0__::func_27(*uParam0, 32);
			case 32768:
				return __LIB_0__::func_27(*uParam0, 64);
			case 65536:
				return __LIB_0__::func_27(*uParam0, 1024);
			case 4096:
				return __LIB_0__::func_27(*uParam0, 262144);
			case 512:
				return __LIB_0__::func_27(*uParam0, 1048576);
			default:
				break;
		}
	}
	return false;
}

void func_680(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_1__::func_502(uParam1[iVar0 /*11*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*11*/], 20))
			{
				__LIB_1__::func_501(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_681(int iParam0)
{
	if (!__LIB_4__::func_264(0) && iParam0 != 0)
	{
		return 0;
	}
	if (!__LIB_4__::func_264(2) && iParam0 != 2)
	{
		return 2;
	}
	if (!__LIB_4__::func_264(3) && iParam0 != 3)
	{
		return 3;
	}
	if (!__LIB_4__::func_264(4) && iParam0 != 4)
	{
		return 4;
	}
	if (!__LIB_4__::func_264(6) && iParam0 != 6)
	{
		return 6;
	}
	if (!__LIB_4__::func_264(7) && iParam0 != 7)
	{
		return 7;
	}
	return -1;
}

void func_682(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_1__::func_502(uParam0[iVar0 /*11*/]))
		{
			__LIB_1__::func_471(uParam0[iVar0 /*11*/], 14);
		}
		iVar0++;
	}
}

bool func_683(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (__LIB_2__::func_839(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!__LIB_1__::func_364(uParam1, iParam0))
					{
						if (__LIB_0__::func_94(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

void func_684(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (__LIB_0__::func_139((uParam0[iVar0 /*11*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*11*/], 11))
				{
				}
				else
				{
					__LIB_1__::func_748(&((uParam0[iVar0 /*11*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*11*/])->f_7 = 0;
						(*uParam0)[iVar0 /*11*/] = 0;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_685(int iParam0)
{
	__LIB_4__::func_262(iParam0, 4);
	__LIB_4__::func_266(Global_1392240.f_1[iParam0 /*18*/].f_4, 58, Global_1392240.f_1[iParam0 /*18*/], __LIB_4__::func_263(iParam0));
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392240.f_1[iParam0 /*18*/].f_5, __LIB_4__::func_263(iParam0));
	}
}

void func_686(var uParam0, bool bParam1, int iParam2)
{
	__LIB_2__::func_137(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = __LIB_1__::func_347(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (__LIB_1__::func_995(1))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!__LIB_1__::func_995(1) || *uParam0 & 8192 != 0))
				{
					__LIB_0__::func_8(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (__LIB_4__::func_234(uParam0))
			{
				uParam0->f_15 = __LIB_0__::func_485();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((__LIB_0__::func_485() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	__LIB_2__::func_835(uParam0);
}

void func_687(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_2__::func_411(uParam0[iVar0 /*11*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_688(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_3__::func_879(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_689(int iParam0)
{
	if (!__LIB_4__::func_56(iParam0))
	{
		return 0;
	}
	if (__LIB_4__::func_264(iParam0))
	{
		return 0;
	}
	if (((!__LIB_1__::func_200(94) && !__LIB_4__::func_267(94)) && !__LIB_1__::func_200(95)) && !__LIB_4__::func_267(95))
	{
	}
	__LIB_4__::func_262(iParam0, 1);
	return 1;
}

char* func_690(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((__LIB_2__::func_271(Global_1835011[59 /*74*/].f_1, 1) || __LIB_2__::func_271(Global_1347702[1 /*49*/].f_15, 1)) || __LIB_1__::func_44(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_691(bool bParam0)
{
	if (bParam0)
	{
		Global_1393237.f_8++;
	}
	else
	{
		Global_1393237.f_7++;
	}
}

int func_692(int iParam0)
{
	return Global_1393237.f_11[iParam0 /*30*/].f_12;
}

int func_693(int iParam0)
{
	return joaat("P_CAMPFIREBURNTOUT02X");
}

void func_694(int iParam0, var uParam1)
{
	Global_1393237.f_11[iParam0 /*30*/].f_9 = uParam1;
}

int func_695(int iParam0)
{
	return Global_1393237.f_11[iParam0 /*30*/].f_17;
}

bool func_696(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_3[iParam1 /*6*/].f_5 && iParam2) != 0;
}

void func_697(var uParam0, int iParam1)
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0, &Var0);
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 3:
			return 1;
		case 2:
			return 0;
		case 1:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_699(int iParam0)
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

Vector3 func_700(int iParam0, vector3 vParam1)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_1393237.f_11[iParam0 /*30*/].f_3, Global_1393237.f_11[iParam0 /*30*/].f_9, vParam1);
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return joaat("PG_AMBIENT_CAMPFIRE01X");
		case 4:
			return joaat("PG_AMBIENT_CAMPFIRE01AX");
		case 5:
			return joaat("PG_AMBIENT_CAMPFIRE01BX");
		case 6:
			return joaat("PG_AMBIENT_CAMPFIRE02X");
		case 7:
			return joaat("PG_AMBIENT_CAMPFIRE03X");
		case 8:
			return joaat("PG_AMBIENT_CAMPFIRE04X");
		case 9:
			return joaat("PG_AMBIENT_CAMPFIRE05X");
		case 16:
			return joaat("PG_GANGCAMP_SKINNER_ARGUMENT");
		case 17:
			return joaat("PG_GANGCAMP_SKINNER_TORTURE");
		case 18:
			return joaat("PG_GANGCAMP_SKINNER_GENERAL");
		case 19:
			return joaat("PG_RE_ODORISCOLLBOYSGANG01X");
		case 20:
			return joaat("PG_RE_ODORISCOLLBOYSGANG02X");
		case 21:
			return joaat("PG_RE_ODORISCOLLBOYSGANG03X");
		case 22:
			return joaat("PG_GANGCAMP_ODRISCOLLS_GENERAL");
		case 23:
			return joaat("PG_GANGCAMP_ODRISCOLLS_ROBBERY");
		case 24:
			return joaat("PG_GANGCAMP_ODRISCOLLS_POLITICS");
		case 25:
			return joaat("PG_RE_EXCONFEDERATEGANG02X");
		case 27:
			return joaat("PG_AMBIENT_CAMPFIREEXCONFED01X");
		case 29:
			return joaat("PG_RE_LEMOYNERAIDERS01X");
		case 30:
			return joaat("PG_RE_LEMOYNERAIDERS01X");
		case 26:
			return joaat("PG_GANGCAMP_LEMOYNE_GENERAL");
		case 28:
			return joaat("PG_GANGCAMP_LEMOYNE_WARSTORY");
		case 31:
			return joaat("PG_GANGCAMP_LEMOYNE_CAPTIVE");
		case 33:
			return joaat("PG_AMBIENT_CAMPFIRERANSACKED04X");
		default:
			break;
	}
	return 0;
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 4:
			return 4;
		case 9:
			return 6;
		case 10:
			return 3;
		case 11:
			return 3;
		case 12:
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 9:
			return 2;
		case 10:
			return 1;
		case 12:
			return 4;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_704(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return false;
	}
	return true;
}

bool func_705(int iParam0, int iParam1)
{
	var uVar0[5];
	int iVar6;
	if (!PLAYER::_0x1A6E84F13C952094(PLAYER::PLAYER_ID(), iParam1, &uVar0))
	{
		return false;
	}
	iVar6 = 0;
	while (iVar6 < 5)
	{
		if (iParam0 == uVar0[iVar6])
		{
			return true;
		}
		iVar6++;
	}
	return false;
}

char* func_706(int iParam0)
{
	return "WHAT_WAS_THAT";
}

bool func_707()
{
	int iVar0;
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 2f)
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) >= 2f)
		{
			return false;
		}
	}
	return true;
}

char* func_708(int iParam0)
{
	return "SEARCHING_FOUND_NOTHING";
}

void func_709(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		__LIB_1__::func_336(&(uParam0->f_1), 2);
	}
}

void func_710(bool bParam0)
{
	if (bParam0)
	{
		Global_1393237.f_8 = (Global_1393237.f_8 - 1);
	}
	else
	{
		Global_1393237.f_7 = (Global_1393237.f_7 - 1);
	}
	if (Global_1393237.f_7 < 0)
	{
		Global_1393237.f_7 = 0;
	}
	if (Global_1393237.f_8 < 0)
	{
		Global_1393237.f_8 = 0;
	}
}

void func_711(int iParam0)
{
	Global_40.f_9571[iParam0 /*10*/].f_7++;
}

float func_712(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 140f;
		default:
			break;
	}
	return 220f;
}

float func_713(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 170f;
		default:
			break;
	}
	return 350f;
}

int func_714(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1935475[iParam0 /*2*/]))
	{
		return Global_1935475[iParam0 /*2*/].f_1;
	}
	return 0;
}

int func_715(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1935475[iParam0 /*2*/]))
	{
		Global_1935475[iParam0 /*2*/].f_1 = iParam1;
		return 1;
	}
	return 0;
}

void func_716(int iParam0, int iParam1)
{
	Global_1393237.f_11[iParam0 /*30*/].f_17 = iParam1;
}

void func_717(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(uParam0, 2);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 2);
	}
}

char* func_718(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfireGang@exconfed@discoverSeated";
				case 1:
					return "script@ambient@campfireGang@exconfed@discoverSeated2";
				case 2:
					return "script@ambient@campfireGang@exconfed@discoverStand";
				case 3:
					return "script@ambient@campfireGang@exconfed@bgStanding";
				case 4:
					return "script@ambient@campfireGang@exconfed@bgSleeping";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "script@hideout@shadybelle@campStory";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfiregang@lemoyne@captivecamp@kill";
				case 1:
					return "script@ambient@campfiregang@lemoyne@captivecamp@help";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfiregang@lemoyne@captivecamp@knockout";
				case 1:
					return "script@ambient@campfiregang@lemoyne@captivecamp@help";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfireGang@odriscoll@maleD";
				case 1:
					return "script@ambient@campfireGang@odriscoll@maleA";
				case 2:
					return "script@ambient@campfireGang@odriscoll@maleB";
				case 3:
					return "script@ambient@campfireGang@odriscoll@maleC";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfireGang@savages@ped01";
				case 1:
					return "script@ambient@campfireGang@savages@ped02";
				case 2:
					return "script@ambient@campfireGang@savages@ped03";
				case 3:
					return "script@ambient@campfireGang@savages@ped04";
				case 4:
					return "script@ambient@campfireGang@savages@ped05";
				case 5:
					return "script@ambient@campfireGang@savages@ped06";
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfireGang@ACFSC@IG1_ArgumentDeath";
				case 1:
					return "script@ambient@campfireGang@ACFSC@IG1_ArgumentDeath_2";
				case 2:
					return "script@ambient@campfireGang@ACFSC@IG1_ArgumentDeath_3";
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfireGang@ACFSC@IG2_ArgumentSettle";
				case 1:
					return "script@ambient@campfireGang@ACFSC@IG2_ArgumentSettle_2";
				case 2:
					return "script@ambient@campfireGang@ACFSC@IG2_ArgumentSettle_3";
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfireGang@inbreds@hat";
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return "script@ambient@campfireGang@inbreds@shoe";
				default:
					break;
			}
			break;
	}
	return "INVALID ANIM SCENE";
}

int func_719(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("P_CIGARETTE_CS01X");
				case 1:
					return joaat("P_CIGARETTE_CS02X");
				default:
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("S_ROPEHOGTIEHANDSSMALL01X");
				case 1:
					return joaat("S_ROPEHOGTIEHANDSSMALL01X");
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("P_SHARPENINGSTONE01X");
				case 1:
					return joaat("P_SHARPENINGSTONE01X");
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("P_LADLE02X");
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("P_HATBOWLER01X");
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("P_SHOE01X");
				case 1:
					return joaat("P_BOTTLEBEER01X");
				case 2:
					return joaat("P_BOTTLESLIM01X");
				case 3:
					return joaat("P_BOTTLEBEER01X");
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_720(int iParam0)
{
	return Global_1393237.f_11[iParam0 /*30*/].f_17 != __LIB_1__::func_976();
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_722(int iParam0)
{
	if (__LIB_0__::func_30(Global_1393237.f_11[iParam0 /*30*/].f_17))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(Global_1393237.f_11[iParam0 /*30*/].f_17))
		{
			__LIB_3__::func_532(iParam0, 8388608, 0);
		}
	}
}

int func_723(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_724(int iParam0, vector3 vParam1, var uParam4)
{
	Global_40.f_9.f_1 = iParam0;
	Global_40.f_9.f_2 = { vParam1 };
	Global_40.f_9.f_5 = uParam4;
}

bool func_725(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open");
	}
	return false;
}

int func_726()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(iVar1, "PROP");
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = PED::_0x4D0D2E3D8BC000EB(Global_35, "PROP", 1);
			}
		}
	}
	return iVar0;
}

bool func_727(struct<2> Param0, var uParam2)
{
	if (((Param0 > -1190f && Param0 < -464.1f) && Param0.f_1 > -464.1f) && Param0.f_1 < 618f)
	{
		return false;
	}
	return true;
}

char* func_728(int iParam0)
{
	return "C_WELBACK";
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 10:
			return 2;
		case 12:
			return 3;
		case 13:
			return 4;
		case 14:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_730(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 46:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
			TASK::_0x19BC99C678FBA139(*uParam0, 2, 1);
		case 44:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 47:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 28, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	}
}

bool func_731(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar0 /*30*/].f_3, vParam0) < 1f)
		{
			return __LIB_5__::func_658(iVar0);
		}
		iVar0++;
	}
	return false;
}

float func_732(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

bool func_733(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return __LIB_0__::func_27(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

int func_734(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;
	fParam2 = fParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
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
	return 1;
}

int func_735(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	__LIB_3__::func_164(uParam0);
	return 1;
}

void func_736(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_2__::func_15(iParam0, 0))
	{
		__LIB_4__::func_40(iParam0, 0);
		if (iParam1 != 0)
		{
			COMPENDIUM::COMPENDIUM_GANG_CAMP_FOUND(__LIB_2__::func_31(iParam0), iParam1);
		}
		if (!bParam2)
		{
			Global_40.f_9571[iParam0 /*10*/].f_8++;
		}
	}
}

float func_737(vector3 vParam0, int iParam3)
{
	float fVar0;
	if (iParam3 == -1)
	{
		iParam3 = __LIB_0__::func_979(vParam0);
	}
	switch (iParam3)
	{
		case 9:
			fVar0 = 140f;
			break;
		case 0:
		case 2:
		case 10:
		case 11:
			fVar0 = 90f;
			break;
		default:
			fVar0 = 110f;
			break;
	}
	return fVar0;
}

bool func_738(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_509(iParam0) == -1)
	{
		return false;
	}
	return true;
}

void func_739(int iParam0, bool bParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	iVar3 = 0;
	while (iVar3 < Global_1911670)
	{
		iVar4 = Global_1911670[iVar3];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar4))
		{
			vVar5 = { VOLUME::_0xC4019CF9AE8E931A(iVar4) };
			if (__LIB_0__::func_175(vVar5, vVar0, 2f, 1))
			{
				if (bParam1)
				{
					VOLUME::_0xD4FA73FE628FEC63(iVar4, 0);
				}
				else
				{
					VOLUME::_0xD4FA73FE628FEC63(iVar4, 2);
				}
			}
		}
		iVar3++;
	}
}

void func_740(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (!__LIB_5__::func_667(vParam0))
	{
		iVar3 = Global_40.f_10991.f_4;
		while (iVar3 > iVar0 && !bVar4)
		{
			if (__LIB_0__::func_86(Global_40.f_10991.f_4[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
				bVar4 = true;
			}
			iVar0++;
		}
		Global_40.f_10991.f_4[iVar1 /*3*/] = { vParam0 };
		iVar2 = iVar1 + 1;
		iVar2 = __LIB_0__::func_55(iVar2 >= iVar3, 0, iVar2);
		Global_40.f_10991.f_4[iVar2 /*3*/] = { 0f, 0f, 0f };
	}
}

void func_741(int iParam0, int* iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!__LIB_2__::func_1(iParam0, 0, 0))
	{
		return;
	}
	if (!bParam4)
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			__LIB_0__::func_325(iParam1);
		}
		*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
	}
	if (iParam3 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(*iParam1, iParam3);
	}
}

void func_742(int* iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				__LIB_1__::func_483(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				__LIB_1__::func_484(iParam0->f_6, iParam0->f_5, 0);
			}
			__LIB_1__::func_221(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		__LIB_2__::func_360(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_743(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!__LIB_2__::func_1(iParam1, 0, 0))
		{
			return false;
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(iParam1))
		{
			return true;
		}
		if (!__LIB_1__::func_472(iParam1, 100f, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			return true;
		}
	}
	return false;
}

int func_744(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_904(iParam0))
	{
		return -1;
	}
	iVar0 = __LIB_1__::func_972(__LIB_0__::func_12());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1898147[iParam0];
	}
	return Global_1898130[iParam0];
}

int func_745(int iParam0)
{
	var uVar0;
	uVar0 = Global_1393237.f_11[iParam0 /*30*/];
	__LIB_2__::func_670(&uVar0, 0, 0, 0, 1, 0, 0, 0);
	return uVar0;
}

int func_746(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	return __LIB_4__::func_407(iParam0, MISC::GET_HASH_KEY(sParam1), iParam2, iParam3, sParam1);
}

void func_747(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 == 0 || __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			__LIB_5__::func_305(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 512);
	if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 256))
	{
		iVar1 = __LIB_0__::func_761(-1739349092);
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam1))
	{
		*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), __LIB_0__::func_271(iParam0));
	}
	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		if (iVar0 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(*iParam1, iVar0);
			if (iVar0 == -546708623)
			{
				MAP::_BLIP_SET_MODIFIER(*iParam1, 231194138);
			}
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(*iParam1, iVar0);
		}
		if (bVar2 && !__LIB_0__::func_296(0, 0, 1))
		{
			MAP::_BLIP_SET_STYLE(*iParam1, -1944754404);
			if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 1024))
			{
				MAP::_BLIP_SET_MODIFIER(*iParam1, -46775694);
			}
			if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 2048))
			{
				MAP::_BLIP_SET_MODIFIER(*iParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iVar1, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_14)) && __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, &(Global_1360165[iParam0 /*1157*/].f_14));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, __LIB_5__::func_690(iParam0, 0));
		}
	}
}

void func_748(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8)
{
	int iVar0;
	if (bParam8)
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, true, true);
	}
	iVar0 = __LIB_2__::func_272(iParam1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, 0);
}

bool func_749(var uParam0)
{
	if (Global_1879534)
	{
		return true;
	}
	return false;
}

char* func_750(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "campfire_gang";
		case 1:
			return "campfire_always";
		default:
			break;
	}
	return "";
}

bool func_751()
{
	if (Global_1392135.f_3 != -1)
	{
		return true;
	}
	return Global_1392135.f_3 != -1;
}

bool func_752(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = vParam1.z;
	fVar1 = Global_36.f_2;
	if (fVar1 < (fVar0 - 45f))
	{
		return false;
	}
	return true;
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 0:
			return 2;
		case 3:
			return 1;
		case 1:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_754(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return __LIB_0__::func_1(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

void func_755(vector3 vParam0, int iParam3)
{
	Global_1393237.f_11[iParam3 /*30*/].f_3 = { vParam0 };
	__LIB_3__::func_532(iParam3, 512, 0);
}

int func_756(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (__LIB_0__::func_86(vParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (__LIB_0__::func_175(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_757(int iParam0)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1393237.f_11[iParam0 /*30*/].f_3, true);
	bVar1 = __LIB_5__::func_659(iParam0, fVar0, 1);
	if (bVar1)
	{
		fVar2 = 130f;
	}
	else
	{
		fVar2 = 100f;
	}
	if (fVar0 < fVar2)
	{
		return true;
	}
	return false;
}

int func_758(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_149(1);
	if (bParam0)
	{
		return iVar0 + 1;
	}
	return iVar0;
}

bool func_759(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return __LIB_5__::func_754(iParam0, 512);
}

bool func_760(int iParam0)
{
	if (__LIB_5__::func_754(iParam0, 4194304))
	{
		return false;
	}
	if (__LIB_5__::func_754(iParam0, 1))
	{
		return false;
	}
	if (__LIB_0__::func_86(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		return false;
	}
	return true;
}

int func_761(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_554(iParam0, __LIB_0__::func_181(), 0, 0);
	return __LIB_5__::func_753(iVar0);
}

int func_762(vector3 vParam0)
{
	int iVar0;
	iVar0 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_5__::func_658(iVar0))
		{
			if (__LIB_0__::func_175(vParam0, Global_1393237.f_11[iVar0 /*30*/].f_3, 10f, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_763(int iParam0)
{
	float fVar0;
	int iVar1;
	fVar0 = __LIB_0__::func_36();
	iVar1 = 1;
	if (fVar0 < IntToFloat(Global_1392135.f_4))
	{
		iVar1 = 0;
	}
	if (iParam0 != -1)
	{
		if (fVar0 < IntToFloat(Global_1392135.f_5[iParam0]))
		{
			iVar1 = 0;
		}
	}
	return iVar1;
}

int func_764(int iParam0)
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
			if (__LIB_5__::func_754(iVar0, iVar2) || __LIB_5__::func_754(iVar0, iVar3))
			{
				if (iVar1 < 1083240)
				{
					iVar1 = 1083240;
				}
			}
			else if (__LIB_5__::func_754(iVar0, iVar4))
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

int func_765()
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
			if (__LIB_5__::func_754(iVar0, iVar2))
			{
				iVar1 = 2885760;
			}
			else if (__LIB_5__::func_754(iVar0, iVar3))
			{
				if (iVar1 < 2882880)
				{
					iVar1 = 2882880;
				}
			}
			else if (__LIB_5__::func_754(iVar0, iVar4))
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

void func_766(int iParam0)
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
	if (__LIB_5__::func_754(iParam0, 8388608))
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

bool func_767(int iParam0, bool bParam1)
{
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_923())
	{
		return true;
	}
	if (__LIB_5__::func_754(iParam0, 4096) || __LIB_5__::func_754(iParam0, 131072))
	{
		return true;
	}
	return false;
}

bool func_768(vector3 vParam0, int iParam3, bool bParam4)
{
	if (__LIB_5__::func_676(vParam0) || __LIB_5__::func_754(iParam3, 524288))
	{
		return true;
	}
	if (__LIB_5__::func_658(iParam3))
	{
		return true;
	}
	if (bParam4)
	{
		if (Global_1393237.f_8 + 1 > Global_1393237.f_6)
		{
			return false;
		}
	}
	else if (Global_1393237.f_7 + 1 > Global_1393237.f_6)
	{
		return false;
	}
	if (__LIB_0__::func_296(50, 0, 1))
	{
		return false;
	}
	if (bParam4)
	{
		if (__LIB_5__::func_655())
		{
			return false;
		}
	}
	return true;
}

void func_769(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	*uParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

bool func_770(int iParam0)
{
	if (Global_1393237.f_11[iParam0 /*30*/] == -15)
	{
		if (!__LIB_5__::func_754(iParam0, 512))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return __LIB_3__::func_77(__LIB_5__::func_745(iParam0));
}

bool func_771(int iParam0)
{
	return iParam0 != -15;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_773(int iParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = 1;
	fVar1 = PED::_GET_PED_FACE_FEATURE(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

float func_774()
{
	return 5f;
}

void func_775(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 || iParam0);
			break;
	}
}

void func_776(int iParam0, char* sParam1, char* sParam2, bool bParam3)
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
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(10, sParam1, MISC::_CREATE_VAR_STRING(0, sParam2)));
}

bool func_777(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_UIPROMPT_IS_RELEASED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_778()
{
	return Global_40.f_1095.f_3140;
}

bool func_779(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(Global_1914319.f_3[iParam0 /*446*/].f_6, iParam1);
}

void func_780(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
}

void func_781(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_1905944[iVar1] = uVar3;
}

void func_782(int iParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UP_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_DOWN_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LEFT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_RIGHT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SPECIAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_GUN_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_GUN_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ACCELERATE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BRAKE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HEADLIGHT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDBRAKE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_NEXT_RADIO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PREV_RADIO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_RADIO_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HORN"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_FLY_THROTTLE_UP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_FLY_THROTTLE_DOWN"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_FLY_YAW_LEFT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_FLY_YAW_RIGHT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PASSENGER_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PASSENGER_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SPECIAL_ABILITY_FRANKLIN"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_STUNT_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_UP_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_DOWN_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ROOF"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_GRAPPLING_HOOK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_TURN_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_TURN_LEFT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_TURN_RIGHT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_PITCH_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_PITCH_UP_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_PITCH_DOWN_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_THROTTLE_UP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_THROTTLE_DOWN"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_ASCEND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_DESCEND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_TURN_HARD_LEFT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SUB_TURN_HARD_RIGHT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PUSHBIKE_PEDAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PUSHBIKE_FRONT_BRAKE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UP_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_DOWN_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LEFT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_RIGHT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPECIAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_STOP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DETONATE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	if (iParam0 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
	}
}

bool func_783(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_1934765.f_21[iVar1], iVar2);
}

int func_784(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2535.f_1)
	{
		if (Global_1946804.f_2535.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_785(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

Vector3 func_786(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	fVar0 = BUILTIN::COS(vParam3.x);
	fVar1 = BUILTIN::SIN(vParam3.x);
	vVar2.x = vParam0.x;
	vVar2.f_1 = ((fVar0 * vParam0.y) - (fVar1 * vParam0.z));
	vVar2.f_2 = ((fVar1 * vParam0.y) + (fVar0 * vParam0.z));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.y);
	fVar1 = BUILTIN::SIN(vParam3.y);
	vVar2.x = ((fVar0 * vParam0.x) + (fVar1 * vParam0.z));
	vVar2.f_1 = vParam0.y;
	vVar2.f_2 = ((fVar0 * vParam0.z) - (fVar1 * vParam0.x));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.z);
	fVar1 = BUILTIN::SIN(vParam3.z);
	vVar2.x = ((fVar0 * vParam0.x) - (fVar1 * vParam0.y));
	vVar2.f_1 = ((fVar1 * vParam0.x) + (fVar0 * vParam0.y));
	vVar2.f_2 = vParam0.z;
	vParam0 = { vVar2 };
	return vParam0;
}

int func_787(int iParam0)
{
	int iVar0;
	Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/] = iParam0;
	iVar0 = Global_1946804.f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804.f_2535.f_2 = (Global_1946804.f_2535.f_2 || iVar0);
	Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/].f_1 = iVar0;
	Global_1946804.f_2535.f_1++;
	return iVar0;
}

void func_788(int iParam0, int iParam1)
{
	Global_1946804.f_2535.f_3[iParam0] = (Global_1946804.f_2535.f_3[iParam0] || iParam1);
}

bool func_789(int iParam0, var uParam1)
{
	return (Global_1946804.f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_790(int iParam0, var uParam1)
{
	Global_1946804.f_2535.f_3[iParam0] = (Global_1946804.f_2535.f_3[iParam0] - (Global_1946804.f_2535.f_3[iParam0] && uParam1));
}

int func_791(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2589)
	{
		if (Global_1946804.f_2589.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_792(int iParam0, int iParam1)
{
	__LIB_0__::func_7(&(Global_1914319.f_3[iParam0 /*446*/].f_5), iParam1);
}

void func_793(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iVar0 /*18*/].f_3, !bParam1);
}

void func_794(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_20(iParam1))
	{
		if (__LIB_1__::func_59(Global_1934051.f_33))
		{
			iVar0 = __LIB_1__::func_300(iParam1);
			if (iVar0 != 0)
			{
				MAP::_BLIP_SET_MODIFIER(iParam0, iVar0);
			}
		}
	}
}

bool func_795(int iParam0)
{
	return __LIB_0__::func_287(iParam0, 32, 1);
}

bool func_796(int iParam0)
{
	if ((__LIB_0__::func_192(iParam0, -839724752) || __LIB_0__::func_192(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL"))) || __LIB_0__::func_192(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_797(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = __LIB_5__::func_5(iVar1);
		}
	}
	return iVar0;
}

void func_798(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!VEHICLE::_IS_DRAFT_VEHICLE(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, true, false);
			TASK::TASK_STAND_STILL(iVar1, -1);
		}
		iVar0++;
	}
}

char* func_799(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = __LIB_0__::func_67(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = __LIB_1__::func_911(__LIB_2__::func_752(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!__LIB_1__::func_912(iParam0) || __LIB_0__::func_293(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

void func_800(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_30(iParam0))
	{
		if (bParam1)
		{
			if (!__LIB_2__::func_769(iParam0))
			{
				__LIB_1__::func_948(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (__LIB_2__::func_769(iParam0))
		{
			__LIB_3__::func_124(iParam0, 1);
		}
	}
}

void func_801(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	if (bParam4)
	{
		__LIB_0__::func_155(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	__LIB_4__::func_842(Var0);
}

void func_802()
{
	int iVar0;
	Local_18.f_40 = 0;
	Local_18.f_41 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_18.f_14[iVar0] = 0;
		iVar0++;
	}
}

void func_803(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Call_Loc(uParam0->f_1[uParam0->f_62 /*3*/].f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Call_Loc(uParam0->f_1[uParam0->f_62 /*3*/].f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Call_Loc(uParam0->f_1[uParam0->f_62 /*3*/]);
		Call_Loc(uParam0->f_1[uParam0->f_62 /*3*/].f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

bool func_804()
{
	switch (Local_18.f_51.f_20)
	{
		case 14:
		case 15:
		case 16:
			return false;
		default:
			break;
	}
	return true;
}

void func_805(int iParam0)
{
	Local_18 = iParam0;
}

bool func_806(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
		default:
			break;
	}
	return false;
}

bool func_807()
{
	return Global_40.f_4283.f_322 > 1;
}

void func_808(int iParam0, int iParam1, int iParam2)
{
	Local_18.f_1[iParam0] = iParam1;
	Local_18.f_14[iParam0] = iParam2;
}

int func_809()
{
	if (!MISC::IS_BIT_SET(Local_18.f_43, 4))
	{
		MISC::SET_BIT(&(Local_18.f_43), 4);
	}
	return 1;
}

void func_810(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_822();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

void func_811()
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar0++;
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					__LIB_2__::func_822();
					break;
				case 2:
					__LIB_2__::func_822();
					break;
				case 4:
					__LIB_2__::func_822();
					break;
				case 3:
					__LIB_2__::func_822();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (iVar0 >= 3600)
		{
			__LIB_2__::func_822();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_812(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

void func_813(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/] = iParam2;
	uParam0->f_1[iVar0 /*3*/].f_1 = iParam3;
	uParam0->f_1[iVar0 /*3*/].f_2 = iParam4;
}

void func_814()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	CAM::DO_SCREEN_FADE_OUT(3000);
}

void func_815()
{
	Local_18.f_1786 &= 8193;
	Local_18.f_1786.f_1 = 0;
	Local_18.f_1786.f_2 = 0;
	Local_18.f_1786.f_3 = 0;
	Local_18.f_1786.f_5 = 0;
	Local_18.f_1786.f_7 = 0;
	Local_18.f_1786.f_8 = 0;
	Local_18.f_1786.f_10 = -1;
}

void func_816()
{
	Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
}

void func_817()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
}

void func_818()
{
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 419, true);
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 412, true);
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 355, true);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
}

void func_819()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 419, false);
		PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 412, false);
	}
}

void func_820()
{
	Local_18.f_1934.f_79 = GRAPHICS::_0xB958D97A0DFAA0C2("CamTransitionBlinkSlow");
}

void func_821()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 2f, 33);
}

int func_822()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	return 4;
}

void func_823(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_825()
{
	return Global_1949598.f_1;
}

int func_826()
{
	return Global_40.f_4283.f_324;
}

bool func_827(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (MISC::IS_BIT_SET(Local_18.f_14[iParam0], iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_18.f_41, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

char* func_828(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	if (__LIB_0__::func_317() == 3)
	{
		if (iParam0 == 0)
		{
			sVar0 = "PL_DUTCH";
		}
		else
		{
			sVar0 = "PL_JOHN_SHADY";
		}
	}
	else if (iParam0 == 0)
	{
		sVar0 = "PL_DUTCH";
	}
	else
	{
		sVar0 = "PL_JOHN";
	}
	return sVar0;
}

void func_829(int iParam0)
{
	if (__LIB_0__::func_317() == 3 && iParam0 == 0)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(58833085, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-629053815, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(58833085);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-629053815);
	}
	if (__LIB_0__::func_317() == 3 && iParam0 == 1)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(1163459288, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1163459288);
	}
}

void func_830()
{
	Global_1357549.f_12[0 /*14*/] = 1;
	Global_1357549.f_12[0 /*14*/].f_1 = joaat("HSO_P_CAMP_02");
	Global_1357549.f_12[0 /*14*/].f_2 = { -148.3662f, -26.0562f, 95.8773f };
	Global_1357549.f_12[0 /*14*/].f_5 = joaat("P_LANTERN04X");
	Global_1357549.f_12[0 /*14*/].f_6 = 0f;
	Global_1357549.f_12[1 /*14*/] = 1;
	Global_1357549.f_12[1 /*14*/].f_1 = joaat("HSO_P_CAMP_02");
	Global_1357549.f_12[1 /*14*/].f_2 = { -148.0154f, -13.4206f, 95.314f };
	Global_1357549.f_12[1 /*14*/].f_5 = joaat("P_LANTERN09X");
	Global_1357549.f_12[1 /*14*/].f_6 = 0f;
	Global_1357549.f_12[2 /*14*/] = 1;
	Global_1357549.f_12[2 /*14*/].f_1 = joaat("HSO_P_CAMP_02");
	Global_1357549.f_12[2 /*14*/].f_2 = { -125.0946f, -21.7405f, 95.1253f };
	Global_1357549.f_12[2 /*14*/].f_5 = joaat("P_LANTERN04X");
	Global_1357549.f_12[2 /*14*/].f_6 = 0f;
	Global_1357549.f_12[8 /*14*/] = 1;
	Global_1357549.f_12[8 /*14*/].f_1 = -1166561064;
	Global_1357549.f_12[8 /*14*/].f_2 = { -132.0545f, -31.1304f, 95.9688f };
	Global_1357549.f_12[8 /*14*/].f_5 = joaat("P_LANTERN09X");
	Global_1357549.f_12[8 /*14*/].f_6 = 0f;
	Global_1357549.f_12[7 /*14*/] = 1;
	Global_1357549.f_12[7 /*14*/].f_1 = 172011504;
	Global_1357549.f_12[7 /*14*/].f_2 = { -132.1342f, -30.8928f, 95.6164f };
	Global_1357549.f_12[7 /*14*/].f_5 = joaat("P_LANTERN05X");
	Global_1357549.f_12[7 /*14*/].f_6 = 0f;
	Global_1357549.f_12[6 /*14*/] = 1;
	Global_1357549.f_12[6 /*14*/].f_1 = -1365193577;
	Global_1357549.f_12[6 /*14*/].f_2 = { -132.1342f, -30.8928f, 95.6164f };
	Global_1357549.f_12[6 /*14*/].f_5 = joaat("P_LANTERN05X");
	Global_1357549.f_12[6 /*14*/].f_6 = 0f;
	Global_1357549.f_12[4 /*14*/] = 1;
	Global_1357549.f_12[4 /*14*/].f_1 = 172011504;
	Global_1357549.f_12[4 /*14*/].f_2 = { -129.8749f, -30.5768f, 95.5843f };
	Global_1357549.f_12[4 /*14*/].f_5 = joaat("P_CANDLEGROUP07X");
	Global_1357549.f_12[4 /*14*/].f_6 = 0f;
	Global_1357549.f_12[5 /*14*/] = 1;
	Global_1357549.f_12[5 /*14*/].f_1 = -1166561064;
	Global_1357549.f_12[5 /*14*/].f_2 = { -129.8767f, -30.3077f, 95.6024f };
	Global_1357549.f_12[5 /*14*/].f_5 = joaat("P_CANDLEGROUP02X");
	Global_1357549.f_12[5 /*14*/].f_6 = 0f;
	Global_1357549.f_12[9 /*14*/] = 1;
	Global_1357549.f_12[9 /*14*/].f_1 = -1166561064;
	Global_1357549.f_12[9 /*14*/].f_2 = { -131.4675f, -31.6383f, 97.1984f };
	Global_1357549.f_12[9 /*14*/].f_5 = joaat("P_LANTERN08X");
	Global_1357549.f_12[9 /*14*/].f_6 = 0f;
	Global_1357549.f_12[12 /*14*/] = 1;
	Global_1357549.f_12[12 /*14*/].f_1 = 163126540;
	Global_1357549.f_12[12 /*14*/].f_2 = { -116.1046f, -36.3356f, 95.1647f };
	Global_1357549.f_12[12 /*14*/].f_5 = joaat("P_CANDLEGROUP04X");
	Global_1357549.f_12[12 /*14*/].f_6 = 0f;
	Global_1357549.f_12[13 /*14*/] = 2;
	Global_1357549.f_12[13 /*14*/].f_1 = joaat("DEWCLM_P_CAMP_02");
	Global_1357549.f_12[13 /*14*/].f_2 = { 690.5589f, -1253.308f, 43.9556f };
	Global_1357549.f_12[13 /*14*/].f_5 = joaat("P_LANTERN04X");
	Global_1357549.f_12[13 /*14*/].f_6 = 0f;
	Global_1357549.f_12[14 /*14*/] = 2;
	Global_1357549.f_12[14 /*14*/].f_1 = -1010466481;
	Global_1357549.f_12[14 /*14*/].f_2 = { 691.5306f, -1258.313f, 44.2328f };
	Global_1357549.f_12[14 /*14*/].f_5 = joaat("P_CANDLEGROUP07X");
	Global_1357549.f_12[14 /*14*/].f_6 = 0f;
	Global_1357549.f_12[15 /*14*/] = 2;
	Global_1357549.f_12[15 /*14*/].f_1 = 1084869405;
	Global_1357549.f_12[15 /*14*/].f_2 = { 673.365f, -1269.473f, 44.0022f };
	Global_1357549.f_12[15 /*14*/].f_5 = joaat("P_LANTERN07X");
	Global_1357549.f_12[15 /*14*/].f_6 = 0f;
	Global_1357549.f_12[16 /*14*/] = 2;
	Global_1357549.f_12[16 /*14*/].f_1 = joaat("DEWCLM_P_CAMP_02");
	Global_1357549.f_12[16 /*14*/].f_2 = { 675.5692f, -1269.244f, 45.3696f };
	Global_1357549.f_12[16 /*14*/].f_5 = joaat("P_LANTERN07X");
	Global_1357549.f_12[16 /*14*/].f_6 = 0f;
	Global_1357549.f_12[17 /*14*/] = 2;
	Global_1357549.f_12[17 /*14*/].f_1 = -850189983;
	Global_1357549.f_12[17 /*14*/].f_2 = { 676.3393f, -1250.768f, 43.8081f };
	Global_1357549.f_12[17 /*14*/].f_5 = joaat("P_LANTERN04X");
	Global_1357549.f_12[17 /*14*/].f_6 = 0f;
	Global_1357549.f_12[18 /*14*/] = 2;
	Global_1357549.f_12[18 /*14*/].f_1 = 2108368013;
	Global_1357549.f_12[18 /*14*/].f_2 = { 662.1107f, -1256.578f, 42.7845f };
	Global_1357549.f_12[18 /*14*/].f_5 = joaat("P_LANTERN05X");
	Global_1357549.f_12[18 /*14*/].f_6 = 0f;
	Global_1357549.f_12[19 /*14*/] = 2;
	Global_1357549.f_12[19 /*14*/].f_1 = 2728487;
	Global_1357549.f_12[19 /*14*/].f_2 = { 661.0519f, -1259.052f, 43.1332f };
	Global_1357549.f_12[19 /*14*/].f_5 = joaat("P_CANDLEGROUP04X");
	Global_1357549.f_12[19 /*14*/].f_6 = 0f;
	Global_1357549.f_12[20 /*14*/] = 2;
	Global_1357549.f_12[20 /*14*/].f_1 = 1128417383;
	Global_1357549.f_12[20 /*14*/].f_2 = { 672.6604f, -1241.364f, 43.4735f };
	Global_1357549.f_12[20 /*14*/].f_5 = joaat("P_CANDLEGROUP07X");
	Global_1357549.f_12[20 /*14*/].f_6 = 0f;
	Global_1357549.f_12[21 /*14*/] = 2;
	Global_1357549.f_12[21 /*14*/].f_1 = joaat("DEWCLM_P_CAMP_02");
	Global_1357549.f_12[21 /*14*/].f_2 = { 674.6741f, -1238.333f, 43.6628f };
	Global_1357549.f_12[21 /*14*/].f_5 = joaat("P_LANTERN04X");
	Global_1357549.f_12[21 /*14*/].f_6 = 0f;
	Global_1357549.f_12[22 /*14*/] = 2;
	Global_1357549.f_12[22 /*14*/].f_1 = joaat("DEWCLM_P_CAMP_02");
	Global_1357549.f_12[22 /*14*/].f_2 = { 656.9509f, -1234.653f, 45.8639f };
	Global_1357549.f_12[22 /*14*/].f_5 = joaat("P_LANTERN09XHANG");
	Global_1357549.f_12[22 /*14*/].f_6 = 0f;
	Global_1357549.f_12[23 /*14*/] = 2;
	Global_1357549.f_12[23 /*14*/].f_1 = 2108368013;
	Global_1357549.f_12[23 /*14*/].f_2 = { 653.0373f, -1246.106f, 44.595f };
	Global_1357549.f_12[23 /*14*/].f_5 = joaat("P_LANTERN09XMOTHS");
	Global_1357549.f_12[23 /*14*/].f_6 = 0f;
	Global_1357549.f_12[24 /*14*/] = 2;
	Global_1357549.f_12[24 /*14*/].f_1 = 2108368013;
	Global_1357549.f_12[24 /*14*/].f_2 = { 650.8378f, -1252.101f, 43.1323f };
	Global_1357549.f_12[24 /*14*/].f_5 = joaat("P_CANDLE01X");
	Global_1357549.f_12[24 /*14*/].f_6 = 0f;
	Global_1357549.f_12[25 /*14*/] = 2;
	Global_1357549.f_12[25 /*14*/].f_1 = 2108368013;
	Global_1357549.f_12[25 /*14*/].f_2 = { 650.781f, -1252.204f, 43.132f };
	Global_1357549.f_12[25 /*14*/].f_5 = joaat("P_CANDLE01X");
	Global_1357549.f_12[25 /*14*/].f_6 = 0f;
	Global_1357549.f_12[26 /*14*/] = 2;
	Global_1357549.f_12[26 /*14*/].f_1 = 1049842342;
	Global_1357549.f_12[26 /*14*/].f_2 = { 652.8052f, -1253.324f, 43.6418f };
	Global_1357549.f_12[26 /*14*/].f_5 = joaat("P_LANTERN09X");
	Global_1357549.f_12[26 /*14*/].f_6 = 0f;
	Global_1357549.f_12[27 /*14*/] = 2;
	Global_1357549.f_12[27 /*14*/].f_1 = 1034009086;
	Global_1357549.f_12[27 /*14*/].f_2 = { 652.6848f, -1253.207f, 43.2953f };
	Global_1357549.f_12[27 /*14*/].f_5 = joaat("P_LANTERN05X");
	Global_1357549.f_12[27 /*14*/].f_6 = 0f;
	Global_1357549.f_12[36 /*14*/] = 3;
	Global_1357549.f_12[36 /*14*/].f_1 = joaat("SHB_P_CAMP_02");
	Global_1357549.f_12[36 /*14*/].f_2 = { 1878.206f, -1864.335f, 43.5632f };
	Global_1357549.f_12[36 /*14*/].f_5 = joaat("P_LANTERN09X");
	Global_1357549.f_12[36 /*14*/].f_6 = 0f;
	Global_1357549.f_12[37 /*14*/] = 3;
	Global_1357549.f_12[37 /*14*/].f_1 = joaat("SHB_P_CAMP_02");
	Global_1357549.f_12[37 /*14*/].f_2 = { 1872.988f, -1881.333f, 44.1306f };
	Global_1357549.f_12[37 /*14*/].f_5 = joaat("P_LANTERN07X");
	Global_1357549.f_12[37 /*14*/].f_6 = 0f;
	Global_1357549.f_12[38 /*14*/] = 3;
	Global_1357549.f_12[38 /*14*/].f_1 = joaat("SHB_P_CAMP_02");
	Global_1357549.f_12[38 /*14*/].f_2 = { 1883.117f, -1885.653f, 43.7719f };
	Global_1357549.f_12[38 /*14*/].f_5 = joaat("P_LANTERN09XMOTHS");
	Global_1357549.f_12[38 /*14*/].f_6 = 0f;
	Global_1357549.f_12[39 /*14*/] = 3;
	Global_1357549.f_12[39 /*14*/].f_1 = 1079213989;
	Global_1357549.f_12[39 /*14*/].f_2 = { 1875.758f, -1881.731f, 42.8273f };
	Global_1357549.f_12[39 /*14*/].f_5 = joaat("P_LANTERN07X");
	Global_1357549.f_12[39 /*14*/].f_6 = 0f;
	Global_1357549.f_12[28 /*14*/] = 2;
	Global_1357549.f_12[28 /*14*/].f_1 = -160392273;
	Global_1357549.f_12[28 /*14*/].f_2 = { 652.6238f, -1253.39f, 43.6368f };
	Global_1357549.f_12[28 /*14*/].f_5 = joaat("P_LANTERN05X");
	Global_1357549.f_12[28 /*14*/].f_6 = 0f;
	Global_1357549.f_12[29 /*14*/] = 2;
	Global_1357549.f_12[29 /*14*/].f_1 = 1049842342;
	Global_1357549.f_12[29 /*14*/].f_2 = { 653.7182f, -1253.372f, 44.8718f };
	Global_1357549.f_12[29 /*14*/].f_5 = joaat("P_LANTERN08X");
	Global_1357549.f_12[29 /*14*/].f_6 = 0f;
	Global_1357549.f_12[31 /*14*/] = 2;
	Global_1357549.f_12[31 /*14*/].f_1 = 1034009086;
	Global_1357549.f_12[31 /*14*/].f_2 = { 654.2183f, -1251.526f, 43.2551f };
	Global_1357549.f_12[31 /*14*/].f_5 = joaat("P_CANDLEGROUP07X");
	Global_1357549.f_12[31 /*14*/].f_6 = 0f;
	Global_1357549.f_12[34 /*14*/] = 3;
	Global_1357549.f_12[34 /*14*/].f_1 = joaat("SHB_P_CAMP_02");
	Global_1357549.f_12[34 /*14*/].f_2 = { 1889.558f, -1879.846f, 42.6053f };
	Global_1357549.f_12[34 /*14*/].f_5 = joaat("P_LANTERN04X");
	Global_1357549.f_12[34 /*14*/].f_6 = 0f;
	Global_1357549.f_12[35 /*14*/] = 3;
	Global_1357549.f_12[35 /*14*/].f_1 = joaat("SHB_P_CAMP_02");
	Global_1357549.f_12[35 /*14*/].f_2 = { 1875.46f, -1860.001f, 42.5923f };
	Global_1357549.f_12[35 /*14*/].f_5 = joaat("P_LANTERN09X");
	Global_1357549.f_12[35 /*14*/].f_6 = 0f;
	Global_1357549.f_12[32 /*14*/] = 3;
	Global_1357549.f_12[32 /*14*/].f_1 = joaat("SHB_P_CAMP_02");
	Global_1357549.f_12[32 /*14*/].f_2 = { 1868.881f, -1874.209f, 42.3693f };
	Global_1357549.f_12[32 /*14*/].f_5 = joaat("P_LANTERN04X");
	Global_1357549.f_12[32 /*14*/].f_6 = 0f;
	Global_1357549.f_12[33 /*14*/] = 3;
	Global_1357549.f_12[33 /*14*/].f_1 = 964593693;
	Global_1357549.f_12[33 /*14*/].f_2 = { 1869.735f, -1870.672f, 42.18f };
	Global_1357549.f_12[33 /*14*/].f_5 = joaat("P_CANDLEGROUP07X");
	Global_1357549.f_12[33 /*14*/].f_6 = 0f;
	Global_1357549.f_12[30 /*14*/] = 2;
	Global_1357549.f_12[30 /*14*/].f_1 = 1049842342;
	Global_1357549.f_12[30 /*14*/].f_2 = { 654.0408f, -1251.324f, 43.2742f };
	Global_1357549.f_12[30 /*14*/].f_5 = joaat("P_CANDLEGROUP02X");
	Global_1357549.f_12[30 /*14*/].f_6 = 0f;
	Global_1357549.f_12[10 /*14*/] = 1;
	Global_1357549.f_12[10 /*14*/].f_1 = -1611076340;
	Global_1357549.f_12[10 /*14*/].f_2 = { -118.1006f, -34.2279f, 94.8062f };
	Global_1357549.f_12[10 /*14*/].f_5 = joaat("P_LANTERN05X");
	Global_1357549.f_12[10 /*14*/].f_6 = 0f;
	Global_1357549.f_12[11 /*14*/] = 1;
	Global_1357549.f_12[11 /*14*/].f_1 = joaat("HSO_P_CAMP_02");
	Global_1357549.f_12[11 /*14*/].f_2 = { -108.722f, -41.1198f, 97.1374f };
	Global_1357549.f_12[11 /*14*/].f_5 = joaat("P_LANTERN07X");
	Global_1357549.f_12[11 /*14*/].f_6 = 0f;
	Global_1357549.f_12[3 /*14*/] = 1;
	Global_1357549.f_12[3 /*14*/].f_1 = -1920340119;
	Global_1357549.f_12[3 /*14*/].f_2 = { -121.9807f, -22.507f, 95.3463f };
	Global_1357549.f_12[3 /*14*/].f_5 = joaat("P_CANDLEGROUP07X");
	Global_1357549.f_12[3 /*14*/].f_6 = 0f;
}

bool func_831(int iParam0)
{
	return (Global_1359489.f_16 && iParam0) != 0;
}

bool func_832()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] != -1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_833(int iParam0)
{
	Global_1359489.f_16 = (Global_1359489.f_16 - (Global_1359489.f_16 && iParam0));
}

char* func_834()
{
	return "INSPECT";
}

int func_835(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	if (__LIB_0__::func_86(vParam0))
	{
		return 0;
	}
	if (iParam3 == 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(Global_1357549.f_3[iParam3], iVar2, joaat("PROP_HITCHINGPOST"), 1, 1, 0, 0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
	iVar4 = 0;
	fVar5 = 9999.99f;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar4, iVar2);
		if (TASK::_IS_SCENARIO_POINT_ACTIVE(iVar0))
		{
			vVar7 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true) };
			if (!__LIB_0__::func_86(vVar7))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar7, true);
				if (fVar6 < fVar5)
				{
					fVar5 = fVar6;
					iVar1 = iVar0;
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

void func_836()
{
	if (!Global_1935436.f_18.f_1)
	{
		Global_1935436.f_18.f_1 = 1;
	}
}

int func_837(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 56;
		case 2:
			return 57;
		case 3:
			return 58;
		case 6:
			return 59;
		default:
			break;
	}
	return -1;
}

float func_838(float fParam0, float fParam1)
{
	return ((fParam0 / 2f) + (fParam1 / 2f));
}

void func_839(int iParam0)
{
	Global_1357549.f_1892 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_840()
{
	HUD::_HIDE_HUD_COMPONENT(1670279562);
}

void func_841()
{
	HUD::_DISPLAY_HUD_COMPONENT(1670279562);
}

bool func_842()
{
	return Global_1357549.f_1616;
}

void func_843(var uParam0)
{
	uParam0->f_1424 = 0;
}

void func_844(int iParam0, bool bParam1)
{
	Global_1357549.f_1616 = iParam0;
	if (bParam1)
	{
	}
}

void func_845()
{
	if (__LIB_0__::func_317() != 2 && __LIB_0__::func_317() != 1)
	{
		return;
	}
}

int func_846()
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

bool func_847(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
		default:
			break;
	}
	return false;
}

void func_848(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iParam0);
	POPULATION::_0xA1CFB35069D23C23(iParam0);
}

void func_849(bool bParam0, var uParam1)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, false);
	if (bParam0)
	{
		MISC::SET_BIT(&(uParam1->f_1), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam1->f_1), 2);
	}
}

void func_850(var uParam0)
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_12[iVar0] = 0;
		iVar0++;
	}
}

void func_851(var uParam0, int iParam1)
{
	if (iParam1 == *uParam0)
	{
		return;
	}
	*uParam0 = iParam1;
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
}

void func_852(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (iParam0->f_3374[iVar0] != 0)
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(iParam0->f_3374[iVar0]);
			iParam0->f_3374[iVar0] = 0;
		}
		iVar0++;
	}
}

bool func_853(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if ((Global_1898077.f_1 == 1 || Global_1898077.f_1 == 3) || Global_1898077.f_1 == 4)
			{
				return true;
			}
			break;
		case 2:
			if ((((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 1) || Global_1898077.f_1 == 3) || Global_1898077.f_1 == 4)
			{
				return true;
			}
			break;
		case 5:
			if (((Global_1898077.f_1 == 5 || Global_1898077.f_1 == 1) || Global_1898077.f_1 == 3) || Global_1898077.f_1 == 4)
			{
				return true;
			}
			break;
		case 3:
			if (Global_1898077.f_1 == 3 || Global_1898077.f_1 == 4)
			{
				return true;
			}
			break;
		case 4:
			if (Global_1898077.f_1 == 4)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_854()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1357549.f_12[iVar0 /*14*/].f_7 != 0)
		{
			ENTITY::_0xD2B9C78537ED5759(Global_1357549.f_12[iVar0 /*14*/].f_7);
			Global_1357549.f_12[iVar0 /*14*/].f_7 = 0;
			Global_1357549.f_12[iVar0 /*14*/].f_10 = 0;
			Global_1357549.f_12[iVar0 /*14*/].f_8 = 0;
		}
		iVar0++;
	}
}

bool func_855(int iParam0)
{
	return (Local_18.f_1718 && iParam0) == iParam0;
}

void func_856(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 - (Local_18.f_1718 && iParam0));
}

void func_857()
{
	int iVar0[3];
	int iVar4;
	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar0[iVar4]))
		{
			STREAMING::_REMOVE_IMAP(iVar0[iVar4]);
		}
		iVar4++;
	}
}

void func_858()
{
	if (Global_1357549.f_1832 != -1 && AUDIO::IS_STREAM_PLAYING(Global_1357549.f_1832))
	{
		AUDIO::STOP_STREAM(Global_1357549.f_1832);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1357549.f_1841)))
	{
		AUDIO::_0x9D746964E0CF2C5F(&(Global_1357549.f_1841), &(Global_1357549.f_1833));
	}
	__LIB_0__::func_37(&(Global_1357549.f_1845));
	Global_1357549.f_1832 = -1;
	__LIB_0__::func_698(1048576);
}

void func_859(bool bParam0)
{
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(-1618603322);
		__LIB_0__::func_326(8388608);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1618603322);
		__LIB_0__::func_698(8388608);
	}
}

bool func_860(int iParam0)
{
	return (Local_18.f_1786 && iParam0) == iParam0;
}

void func_861(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 - (Local_18.f_1786 && iParam0));
}

int func_862(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

void func_863(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_1357549.f_1496 = (Global_1357549.f_1496 - (Global_1357549.f_1496 && iParam0));
			break;
	}
}

int func_864(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_865(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 150;
		case 4:
			return 30;
		case 5:
		case 6:
			return 150;
		case 7:
		case 8:
			return 50;
		default:
			break;
	}
	return 150;
}

int func_866(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CSTAG_COL_BASE");
		case 1:
			return joaat("CSTAG_HSO_BASE");
		case 2:
			return joaat("CSTAG_CLM_BASE");
		case 3:
			return joaat("CSTAG_SDB_BASE");
		case 4:
			return joaat("CSTAG_GUA_BASE");
		case 5:
			return joaat("CSTAG_LAK_BASE");
		case 6:
			return joaat("CSTAG_BVH_BASE");
		case 7:
			return joaat("CSTAG_PRG_BASE");
		case 8:
			return joaat("CSTAG_BCH_BASE");
		default:
			break;
	}
	return 176656832;
}

void func_867(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam2 = joaat("CAMP_COLTER");
			uParam2->f_3 = 665f;
			uParam2->f_4 = 2490f;
			uParam2->f_2 = 0;
			break;
		case 1:
			*uParam2 = joaat("CAMP_HORSESHOEOVERLOOK");
			uParam2->f_3 = -120f;
			uParam2->f_4 = -30f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
				case 2:
					uParam2->f_1 = 2;
					break;
			}
			break;
		case 2:
			*uParam2 = joaat("CAMP_CLEMENSPOINT");
			uParam2->f_3 = 671.5f;
			uParam2->f_4 = -1250f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
				case 2:
					uParam2->f_1 = 2;
					break;
			}
			break;
		case 3:
			*uParam2 = joaat("CAMP_SHADEYBELLE");
			uParam2->f_3 = 1881f;
			uParam2->f_4 = -1859.5f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
			}
			break;
		case 4:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
		case 5:
			*uParam2 = joaat("CAMP_LAKAY");
			uParam2->f_3 = 2260f;
			uParam2->f_4 = -780f;
			uParam2->f_2 = 0;
			break;
		case 6:
			*uParam2 = joaat("CAMP_BEAVERHOLLOW");
			uParam2->f_3 = 2350f;
			uParam2->f_4 = 1350f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
			}
			break;
		case 7:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
		case 8:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
	}
}

char* func_868(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "horseshoeOverlook/hso_animal_pearson";
		case 2:
			return "clemensPoint/clm_animal_pearson";
		case 3:
			return "shadyBelle/shb_animal_pearson";
		case 6:
			return "beaverHollow/bvh_animal_pearson";
		default:
			break;
	}
	return "";
}

bool func_869(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return true;
	}
	return false;
}

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_2");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_3");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_4");
	}
	return 0;
}

void func_871()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (iVar0 < 6 || iVar0 >= 23)
		{
			PED::_0x12F2D161BF4031FC(iVar0, 0.5f);
		}
		else if (iVar0 < 12)
		{
			PED::_0x12F2D161BF4031FC(iVar0, 1.5f);
		}
		else
		{
			PED::_0x12F2D161BF4031FC(iVar0, 1f);
		}
		iVar0++;
	}
}

bool func_872()
{
	return Global_1051081.f_8;
}

void func_873(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 || iParam0);
}

int func_874(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	ITEMSET::_CLEAR_ITEMSET(iParam0);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	PED::_0x7BE607DAFF382FD2(Global_35, iParam0, 512);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 4, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 6, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 5, vVar0, 100f, iParam0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iParam0);
	return iVar3;
}

void func_875()
{
	Local_18.f_3373 = 0;
}

void func_876(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

bool func_877(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (!PED::IS_PED_HUMAN(iVar1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		*bParam2 = 1;
		*uParam1 = iVar1;
		return true;
	}
	if (PED::_IS_PED_HOGTIED(iVar1))
	{
		*bParam2 = 0;
		*uParam1 = iVar1;
		return true;
	}
	return false;
}

void func_878(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 || iParam0);
}

bool func_879(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PED::_GET_LASSO_TARGET(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iVar0))
	{
		return false;
	}
	*bParam2 = ENTITY::IS_ENTITY_DEAD(iVar0);
	*uParam1 = iVar0;
	return true;
}

bool func_880(int iParam0)
{
	return (Local_18.f_1786 - iParam0) == 0;
}

void func_881(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 || iParam0);
}

bool func_882(int iParam0)
{
	return (Local_18.f_1862 && iParam0) == iParam0;
}

void func_883(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 - (Local_18.f_1862 && iParam0));
}

int func_884()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[0]) || !VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[2]))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(Global_1357549.f_3[2], iVar1, joaat("PROP_HITCHINGPOST"), 1, 1, 0, 0);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar3, iVar1);
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
		{
		}
		else if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1357549.f_3[0], TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true)))
		{
		}
	else
	{
		}
		else
		{
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iVar0;
}

void func_885(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 100f));
	*uParam2 = (iParam0 % 100);
}

bool func_886(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			return (Global_1357549.f_1496 && iParam0) != 0;
	}
	return false;
}

int func_887(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(653.589f, -1253.396f, 44.461f, 0f, 0f, -54.05f, 3.85f, 4.6f, 5.7f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(660.721f, -1257.044f, 43.797f, 0f, 0f, -14.4f, 2.15f, 3.1f, 5.7f);
	}
	return 0;
}

int func_888(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(-131.488f, -31.805f, 96.082f, 0f, 0f, -4.35f, 3.9f, 3.45f, 1.9f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(-117.938f, -36.055f, 95.882f, 0f, 0f, -31.4f, 3.65f, 3f, 2.5f);
	}
	return 0;
}

int func_889(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(2359.789f, 1376.458f, 106.883f, 0f, 0f, -26.9f, 4f, 4.35f, 2.7f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(2343.321f, 1350.422f, 106.762f, 0f, 3.9f, 27.75f, 3.9f, 2.6f, 2.95f);
	}
	return 0;
}

int func_890(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(1895.776f, -1858.61f, 47.535f, 0f, 0f, -38.85f, 6.3f, 9.9f, 3.55f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(1897.918f, -1870.142f, 48.126f, 0f, 0f, -38.85f, 6.05f, 7.35f, 3.55f);
	}
	return 0;
}

void func_891(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	switch (__LIB_0__::func_317())
	{
		case 2:
			if (iParam0 == 0)
			{
				vVar0 = { 655.5186f, -1252.901f, 42.8413f };
				vVar3 = { 0f, 0f, 143.2273f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 660.9746f, -1255.074f, 42.7057f };
				vVar3 = { 0f, 0f, 177.9986f };
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				vVar0 = { -129.2241f, -32.6858f, 95.083f };
				vVar3 = { 0f, 0f, 87.1887f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { -120.3756f, -35.1044f, 94.7365f };
				vVar3 = { 0f, 0f, 233.7959f };
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = { 2358.067f, 1375.013f, 105.5566f };
				vVar3 = { 0f, 0f, 328.4377f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 2344.865f, 1351.729f, 105.1657f };
				vVar3 = { 0f, 0f, 138.0917f };
			}
			break;
		case 3:
			if (iParam0 == 0)
			{
				vVar0 = { 1892.641f, -1862.309f, 46.3347f };
				vVar3 = { 0f, 0f, 333.8364f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 1902.226f, -1868.772f, 46.3492f };
				vVar3 = { 0f, 0f, 148.4403f };
			}
			break;
	}
	vVar0.f_2 = (vVar0.z + 0.25f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1357549.f_1669, vVar0, vVar3, 2);
}

char* func_892(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 2:
			return "HIDEOUT_CLEMENS_POINT";
		case 3:
			return "HIDEOUT_SHADY_BELLE";
		default:
			break;
	}
	return "";
}

bool func_893(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return true;
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

bool func_894(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (!MISC::IS_BIT_SET(*uParam1, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_895(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[iParam1]))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[iParam1], true, 0);
}

char* func_896()
{
	return "SHOP_BACK";
}

void func_897(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590.f_19547)
	{
		Global_1327590.f_19547[iParam0 /*5*/].f_4 = 1;
	}
}

void func_898(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319.f_15922 = iParam0;
	}
}

void func_899(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_9[iVar0 /*9*/].f_1);
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_254), 3);
}

void func_900(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2);
	MISC::CLEAR_BIT(&(uParam0->f_254), 1);
	MISC::CLEAR_BIT(&(uParam0->f_254), 2);
}

bool func_901(int iParam0, int iParam1)
{
	if (iParam0 == 6)
	{
		if (iParam1 == 0)
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(-1437554707))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_902(var uParam0)
{
	return DATAFILE::_0x603AC35FD4602C76(uParam0->f_2);
}

bool func_903(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_4283.f_415.f_24)
	{
		if (iParam0 == Global_40.f_4283.f_415.f_6[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_904(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			return (Global_40.f_4283.f_2 && iParam0) != 0;
	}
	return false;
}

void func_905(int iParam0, int iParam1)
{
	Global_1357549.f_1672 = iParam0;
	Global_1357549.f_1673 = iParam1;
}

Vector3 func_906(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -135.483f, -34.0573f, 95.0734f;
		case 2:
			return 651.8384f, -1257.425f, 42.7455f;
		case 3:
			return 1889.356f, -1866.249f, 47.2413f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_907(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -136.1656f, -33.9941f, 95.0068f;
		case 2:
			return 651.7131f, -1258.331f, 42.7264f;
		case 3:
			return 1890.439f, -1865.85f, 46.3426f;
		case 8:
			return -1634.48f, -1356.272f, 83.3963f;
	}
	return 0f, 0f, 0f;
}

float func_908()
{
	if (__LIB_0__::func_317() == 3)
	{
		return 0.95f;
	}
	return 1.35f;
}

bool func_909()
{
	if (((((Global_1357549.f_1672 == -774242862 || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_WINTON_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_GWEN_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_CATFISH_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_LILLY_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"))
	{
		return true;
	}
	return false;
}

char* func_910()
{
	switch (__LIB_0__::func_317())
	{
		case 1:
			return "HSO";
		case 2:
			return "CLP";
		case 3:
			return "SHB";
		default:
			break;
	}
	return "";
}

bool func_911()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_FISHINGROD"):
		case joaat("WEAPON_KIT_CAMERA"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("OBJECT_2"):
		case joaat("OBJECT_1"):
			return true;
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44))
		{
			return true;
		}
	}
	return false;
}

int func_912()
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 == joaat("OBJECT_1") || iVar0 == joaat("OBJECT_2"))
	{
		return 1;
	}
	return 0;
}

Vector3 func_913(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -141.9612f, -23.6935f, 95.5885f;
		case 2:
			return 675.319f, -1251.379f, 43.0152f;
		case 3:
			return 1875.195f, -1859.172f, 41.8f;
		case 6:
			return 2366.094f, 1347.076f, 105.6301f;
		case 8:
			return -1646.82f, -1348.768f, 83.0685f;
	}
	return 0f, 0f, 0f;
}

void func_914(var uParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		if (iParam1 == 0)
		{
			MAP::_BLIP_SET_MODIFIER(*uParam0, 1191951699);
			MAP::_BLIP_SET_MODIFIER(*uParam0, 37805592);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(*uParam0, 1191951699);
			MAP::_BLIP_REMOVE_MODIFIER(*uParam0, 37805592);
		}
	}
}

void func_915(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	float fVar0[4];
	int iVar5;
	int iVar6;
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return;
	}
	iVar5 = 0;
	iVar6 = 0;
	switch (iParam10)
	{
		case 0:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 1:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 2:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar5 = 1;
			break;
		case 3:
			fVar0[0] = 0.35f;
			fVar0[1] = 0f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 4:
			fVar0[0] = 0.45f;
			fVar0[1] = 0.2f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 5:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 6:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar6 = 1;
			break;
	}
	*iParam0 = VOLUME::_CREATE_SPEED_VOLUME(iParam11, vParam1, vParam4, vParam7, iVar5, iVar6, &fVar0, iParam12, bParam13);
}

float func_916(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1.75f;
		case 4:
			return 4f;
		default:
			break;
	}
	return 0f;
}

int func_917()
{
	return Global_40.f_1095.f_3054.f_1;
}

Vector3 func_918(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 0f, 0f, 0.6f;
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			return -0.26f, -0.069f, 0.919f;
		}
		else
		{
			return 0.487f, -0.066f, 0.935f;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam1 == 0)
		{
			return 0.42f, 0f, 0.88f;
		}
		else if (iParam1 == 1)
		{
			return -0.42f, 0f, 0.88f;
		}
		else if (iParam1 == 2)
		{
			return 0f, 0f, 0.88f;
		}
	}
	return 0f, 0f, 0f;
}

int func_919(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_DONKEY_01"):
			return 1;
	}
	return 0;
}

int func_920(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSEMULE_01"):
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return 1;
	}
	return 0;
}

int func_921(int iParam0)
{
	int iVar0;
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

float func_922(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iParam1];
}

float func_923(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 4f;
		case 1:
			return 2f;
		case 2:
			return 1f;
		case 3:
			return 1f;
		case 5:
			return 100f;
		case 6:
			return 25f;
		case 7:
			return 5f;
		case 8:
			return 1f;
		case 9:
			return 15f;
		case 10:
			return 1f;
		case 11:
			return 15f;
		case 12:
			return 1f;
		case 13:
			return 15f;
		case 14:
			return 5f;
		case 15:
			return 1f;
		case 16:
			return 5f;
		case 17:
			return 15f;
		case 18:
			return 5f;
		case 19:
			return 1f;
		case 20:
			return 5f;
		case 21:
			return 15f;
		case 22:
			return 1f;
	}
	return 0f;
}

void func_924(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iParam1] = fParam2;
}

int func_925()
{
	int iVar0;
	iVar0 = joaat("P_CS_SADDLEBUNDLE01X");
	return iVar0;
}

void func_926(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
		*uParam0 = 0;
	}
}

bool func_927()
{
	if (__LIB_0__::func_317() == 3)
	{
		return true;
	}
	return false;
}

void func_928(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 13;
			*uParam2 = 7;
			*uParam3 = 8;
			*uParam4 = 9;
			break;
		case 1:
			*iParam1 = 14;
			*uParam2 = 10;
			*uParam3 = 11;
			*uParam4 = 12;
			break;
		case 2:
			*iParam1 = 14;
			*uParam2 = 13;
			*uParam3 = 14;
			*uParam4 = 15;
			break;
		case 3:
			*iParam1 = 7;
			*uParam2 = 16;
			*uParam3 = 17;
			*uParam4 = 18;
			break;
		case 4:
			*iParam1 = 7;
			*uParam2 = 19;
			*uParam3 = 20;
			*uParam4 = 21;
			break;
		case 5:
			*iParam1 = 7;
			*uParam2 = 22;
			*uParam3 = 23;
			*uParam4 = 24;
			break;
		case 6:
			*iParam1 = 7;
			*uParam2 = 25;
			*uParam3 = 26;
			*uParam4 = 27;
			break;
		case 7:
			*iParam1 = 19;
			*uParam2 = 28;
			*uParam3 = 29;
			*uParam4 = 30;
			break;
		case 8:
			*iParam1 = 19;
			*uParam2 = 31;
			*uParam3 = 32;
			*uParam4 = 33;
			break;
		case 9:
			*iParam1 = 21;
			*uParam2 = 34;
			*uParam3 = 35;
			*uParam4 = 36;
			break;
		case 10:
			*iParam1 = 17;
			*uParam2 = 37;
			*uParam3 = 38;
			*uParam4 = 39;
			break;
		case 11:
			*iParam1 = 17;
			*uParam2 = 40;
			*uParam3 = 41;
			*uParam4 = 42;
			break;
		case 12:
			*iParam1 = 2;
			*uParam2 = 43;
			*uParam3 = 44;
			*uParam4 = 45;
			break;
		case 13:
			*iParam1 = 3;
			*uParam2 = 46;
			*uParam3 = 47;
			*uParam4 = 48;
			break;
		case 14:
			*iParam1 = 8;
			*uParam2 = 49;
			*uParam3 = 50;
			*uParam4 = 51;
			break;
		case 15:
			*iParam1 = 10;
			*uParam2 = 82;
			*uParam3 = 83;
			*uParam4 = 84;
			break;
		case 16:
			*iParam1 = 22;
			*uParam2 = 88;
			*uParam3 = 89;
			*uParam4 = 90;
			break;
		case 17:
			*iParam1 = 5;
			*uParam2 = 64;
			*uParam3 = 65;
			*uParam4 = 66;
			break;
		case 18:
			*iParam1 = 5;
			*uParam2 = 67;
			*uParam3 = 68;
			*uParam4 = 69;
			break;
		case 19:
			*iParam1 = 9;
			*uParam2 = 52;
			*uParam3 = 53;
			*uParam4 = 54;
			break;
		case 20:
			*iParam1 = 9;
			*uParam2 = 55;
			*uParam3 = 56;
			*uParam4 = 57;
			break;
		case 21:
			*iParam1 = 4;
			*uParam2 = 91;
			*uParam3 = 92;
			*uParam4 = 93;
			break;
		case 22:
			*iParam1 = 15;
			*uParam2 = 58;
			*uParam3 = 59;
			*uParam4 = 60;
			break;
		case 23:
			*iParam1 = 15;
			*uParam2 = 61;
			*uParam3 = 62;
			*uParam4 = 63;
			break;
		case 24:
			*iParam1 = 23;
			*uParam2 = 94;
			*uParam3 = 95;
			*uParam4 = 96;
			break;
		case 25:
			*iParam1 = 16;
			*uParam2 = 85;
			*uParam3 = 86;
			*uParam4 = 87;
			break;
		case 27:
			*iParam1 = 20;
			*uParam2 = 70;
			*uParam3 = 71;
			*uParam4 = 72;
			break;
		case 28:
			*iParam1 = 0;
			*uParam2 = 73;
			*uParam3 = 74;
			*uParam4 = 75;
			break;
		case 29:
			*iParam1 = 11;
			*uParam2 = 79;
			*uParam3 = 80;
			*uParam4 = 81;
			break;
		case 30:
			*iParam1 = 6;
			*uParam2 = 76;
			*uParam3 = 77;
			*uParam4 = 78;
			break;
	}
}

bool func_929(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[iVar0 /*2*/], false) && Global_1934765.f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_930(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		case 2:
			return 170f;
		case 4:
			return 50f;
		case 6:
			return 50f;
		case 3:
			return 260.5f;
		case 7:
			return 220f;
		case 5:
			return 157.25f;
		case 8:
			return 175f;
		default:
			break;
	}
	return 250f;
}

void func_931(int iParam0, bool bParam1)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			sVar0 = "HSO_PLAYER_CHORES";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) == 0)
	{
		if (bParam1)
		{
			if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0) && !TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, true);
			}
		}
		else if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
		}
	}
}

char* func_932(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
		case 1:
			return "Day";
		case 2:
			return "LongDay";
		case 3:
			return "Afternoon";
		case 4:
			return "Evening";
		case 5:
			return "Night";
		default:
			break;
	}
	return "";
}

void func_933(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam0, "ABI_TITHE", 16);
			break;
		case 1:
			StringCopy(sParam0, "JACK1_TITHE", 16);
			break;
		case 2:
			StringCopy(sParam0, "JACK2_TITHE", 16);
			break;
		case 3:
			StringCopy(sParam0, "CHAR1_TITHE", 16);
			break;
		case 4:
			StringCopy(sParam0, "CHAR2_TITHE", 16);
			break;
		case 5:
			StringCopy(sParam0, "CHAR3_TITHE", 16);
			break;
		case 6:
			StringCopy(sParam0, "CHAR4_TITHE", 16);
			break;
		case 7:
			StringCopy(sParam0, "SUSAN1_TITHE", 16);
			break;
		case 8:
			StringCopy(sParam0, "SUSAN2_TITHE", 16);
			break;
		case 9:
			StringCopy(sParam0, "SWANS_TITHE", 16);
			break;
		case 10:
			StringCopy(sParam0, "PEARS1_TITHE", 16);
			break;
		case 11:
			StringCopy(sParam0, "PEARS2_TITHE", 16);
			break;
		case 12:
			StringCopy(sParam0, "JAVIER_TITHE", 16);
			break;
		case 13:
			StringCopy(sParam0, "BILL_TITHE", 16);
			break;
		case 14:
			StringCopy(sParam0, "SEAN_TITHE", 16);
			break;
		case 15:
			StringCopy(sParam0, "KIER_TITHE", 16);
			break;
		case 16:
			StringCopy(sParam0, "TILLY_TITHE", 16);
			break;
		case 17:
			StringCopy(sParam0, "HOSEA1_TITHE", 16);
			break;
		case 18:
			StringCopy(sParam0, "HOSEA2_TITHE", 16);
			break;
		case 19:
			StringCopy(sParam0, "LENNY1_TITHE", 16);
			break;
		case 20:
			StringCopy(sParam0, "LENNY2_TITHE", 16);
			break;
		case 21:
			StringCopy(sParam0, "UNCLE_TITHE", 16);
			break;
		case 22:
			StringCopy(sParam0, "MARY1_TITHE", 16);
			break;
		case 23:
			StringCopy(sParam0, "MARY2_TITHE", 16);
			break;
		case 24:
			StringCopy(sParam0, "TREWL_TITHE", 16);
			break;
		case 25:
			StringCopy(sParam0, "MOLLY_TITHE", 16);
			break;
		case 26:
			StringCopy(sParam0, "STRAU_TITHE", 16);
			break;
		case 27:
			StringCopy(sParam0, "KAREN_TITHE", 16);
			break;
		case 28:
			StringCopy(sParam0, "DUTCH_TITHE", 16);
			break;
		case 29:
			StringCopy(sParam0, "SADIE_TITHE", 16);
			break;
		case 30:
			StringCopy(sParam0, "MICAH_TITHE", 16);
			break;
	}
}

void func_934(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			break;
		case 1:
			*uParam1 = 2;
			break;
		case 2:
			*uParam1 = 4;
			break;
		case 3:
			*uParam1 = 8;
			break;
		case 4:
			*uParam1 = 16;
			break;
		case 5:
			*uParam1 = 32;
			break;
		case 6:
			*uParam1 = 64;
			break;
		case 7:
			*uParam1 = 128;
			break;
		case 8:
			*uParam1 = 256;
			break;
		case 9:
			*uParam1 = 512;
			break;
		case 10:
			*uParam1 = 1024;
			break;
		case 11:
			*uParam1 = 2048;
			break;
		case 12:
			*uParam1 = 4096;
			break;
		case 13:
			*uParam1 = 8192;
			break;
		case 14:
			*uParam1 = 16384;
			break;
		case 15:
			*uParam1 = 32768;
			break;
		case 16:
			*uParam1 = 65536;
			break;
		case 17:
			*uParam1 = 131072;
			break;
		case 18:
			*uParam1 = 262144;
			break;
		case 19:
			*uParam1 = 524288;
			break;
		case 20:
			*uParam1 = 1048576;
			break;
		case 21:
			*uParam1 = 2097152;
			break;
		case 22:
			*uParam1 = 4194304;
			break;
		case 23:
			*uParam1 = 8388608;
			break;
		case 24:
			*uParam1 = 16777216;
			break;
		case 25:
			*uParam1 = 33554432;
			break;
		case 26:
			*uParam1 = 67108864;
			break;
		case 27:
			*uParam1 = 134217728;
			break;
		case 28:
			*uParam1 = 268435456;
			break;
		case 29:
			*uParam1 = 536870912;
			break;
		case 30:
			*uParam1 = 1073741824; /* Float: 2f */
			break;
	}
}

void func_935(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 13;
			break;
		case 1:
			*uParam1 = 14;
			break;
		case 2:
			*uParam1 = 14;
			break;
		case 3:
			*uParam1 = 7;
			break;
		case 4:
			*uParam1 = 7;
			break;
		case 5:
			*uParam1 = 7;
			break;
		case 6:
			*uParam1 = 7;
			break;
		case 7:
			*uParam1 = 19;
			break;
		case 8:
			*uParam1 = 19;
			break;
		case 9:
			*uParam1 = 21;
			break;
		case 10:
			*uParam1 = 17;
			break;
		case 11:
			*uParam1 = 17;
			break;
		case 12:
			*uParam1 = 2;
			break;
		case 13:
			*uParam1 = 3;
			break;
		case 14:
			*uParam1 = 8;
			break;
		case 15:
			*uParam1 = 10;
			break;
		case 16:
			*uParam1 = 22;
			break;
		case 17:
			*uParam1 = 5;
			break;
		case 18:
			*uParam1 = 5;
			break;
		case 19:
			*uParam1 = 9;
			break;
		case 20:
			*uParam1 = 9;
			break;
		case 21:
			*uParam1 = 4;
			break;
		case 22:
			*uParam1 = 15;
			break;
		case 23:
			*uParam1 = 15;
			break;
		case 24:
			*uParam1 = 23;
			break;
		case 25:
			*uParam1 = 16;
			break;
		case 26:
			*uParam1 = 18;
			break;
		case 27:
			*uParam1 = 20;
			break;
		case 28:
			*uParam1 = 0;
			break;
		case 29:
			*uParam1 = 11;
			break;
		case 30:
			*uParam1 = 6;
			break;
	}
}

bool func_936(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_937(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 - (Global_40.f_4283.f_2 && iParam0));
			break;
	}
}

void func_938(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_317();
	uParam0->f_498[0 /*8*/] = 0;
	uParam0->f_498[0 /*8*/].f_1 = -1;
	uParam0->f_498[0 /*8*/].f_2 = -1;
	uParam0->f_498[0 /*8*/].f_3 = -1;
	uParam0->f_498[0 /*8*/].f_4 = 1;
	uParam0->f_498[0 /*8*/].f_5 = -1;
	uParam0->f_498[0 /*8*/].f_6 = -1;
	uParam0->f_498[0 /*8*/].f_7 = -1;
	uParam0->f_498[1 /*8*/] = -1;
	uParam0->f_498[1 /*8*/].f_1 = 1;
	uParam0->f_498[1 /*8*/].f_2 = -1;
	uParam0->f_498[1 /*8*/].f_3 = -1;
	uParam0->f_498[1 /*8*/].f_4 = -1;
	uParam0->f_498[1 /*8*/].f_5 = 0;
	uParam0->f_498[1 /*8*/].f_6 = -1;
	uParam0->f_498[1 /*8*/].f_7 = -1;
	uParam0->f_498[2 /*8*/] = -1;
	uParam0->f_498[2 /*8*/].f_1 = 2;
	uParam0->f_498[2 /*8*/].f_2 = -1;
	uParam0->f_498[2 /*8*/].f_3 = -1;
	uParam0->f_498[2 /*8*/].f_4 = -1;
	uParam0->f_498[2 /*8*/].f_5 = 3;
	uParam0->f_498[2 /*8*/].f_6 = -1;
	uParam0->f_498[2 /*8*/].f_7 = -1;
	uParam0->f_498[3 /*8*/] = -1;
	uParam0->f_498[3 /*8*/].f_1 = -1;
	uParam0->f_498[3 /*8*/].f_2 = 7;
	uParam0->f_498[3 /*8*/].f_3 = 5;
	uParam0->f_498[3 /*8*/].f_4 = -1;
	uParam0->f_498[3 /*8*/].f_5 = -1;
	uParam0->f_498[3 /*8*/].f_6 = 6;
	if (iVar0 == 1)
	{
		uParam0->f_498[3 /*8*/].f_7 = -1;
	}
	else
	{
		uParam0->f_498[3 /*8*/].f_7 = 4;
	}
}

int func_939(int iParam0)
{
	switch (iParam0)
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
			return 15;
	}
	return -1;
}

var func_940()
{
	return Global_23118.f_1768;
}

float func_941()
{
	return Global_1357549.f_1900;
}

int func_942(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_531[iVar0 /*30*/].f_2[iVar1 /*4*/].f_3 != -1)
			{
				iVar2 = (iVar2 + uParam0->f_531[iVar0 /*30*/].f_2[iVar1 /*4*/].f_3);
			}
			iVar1++;
		}
		iVar0++;
	}
	return iVar2 * 100;
}

bool func_943(int iParam0)
{
	return ((iParam0 == Global_1357549.f_1497 && Global_1357549.f_1497.f_5 >= 4) && Global_1357549.f_1497.f_5 < 11);
}

struct<2> func_944(float fParam0)
{
	char cVar0[16];
	if (fParam0 <= 30f)
	{
		StringCopy(&cVar0, "~COLOR_RED~", 16);
	}
	else if (fParam0 <= 75f)
	{
		StringCopy(&cVar0, "~COLOR_WHITE~", 16);
	}
	else
	{
		StringCopy(&cVar0, "~COLOR_YELLOW~", 16);
	}
	return cVar0;
}

bool func_945(var uParam0)
{
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_BOAT(Global_35)) && PED::_GET_SEAT_PED_IS_USING(Global_35) == -1)
	{
		*uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_946(int iParam0, int iParam1)
{
	if (iParam0->f_3483.f_1 != iParam1)
	{
		iParam0->f_3483.f_1 = iParam1;
	}
}

void func_947(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 19;
	*iParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*iParam3 = 22;
			*iParam4 = 20;
			break;
		case 1:
			*iParam3 = 22;
			*iParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*iParam3 = 23;
			*iParam4 = 30;
			break;
		case 11:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 10:
		case 12:
			*iParam3 = 2;
			*iParam4 = 55;
			break;
		case 13:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 14:
			*iParam3 = 0;
			*iParam4 = 50;
			break;
		case 15:
		case 16:
			*iParam3 = 23;
			*iParam4 = 50;
			break;
		case 17:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 18:
		case 19:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 20:
		case 21:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 22:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 23:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 34:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 35:
		case 36:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 32:
		case 33:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 2:
		case 3:
			*iParam3 = 23;
			*iParam4 = 5;
			break;
	}
}

void func_948(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 19;
	*iParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*iParam3 = 23;
			*iParam4 = 30;
			break;
		case 1:
			*iParam3 = 22;
			*iParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*iParam3 = 3;
			*iParam4 = 40;
			break;
		case 10:
		case 12:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 11:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 13:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 14:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 15:
		case 16:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 17:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 18:
		case 19:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 20:
		case 21:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 22:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 23:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 34:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 35:
		case 36:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 32:
		case 33:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 2:
		case 3:
			*iParam3 = 3;
			*iParam4 = 0;
			break;
	}
}

void func_949(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 19;
	*iParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*iParam3 = 22;
			*iParam4 = 20;
			break;
		case 1:
			*iParam3 = 22;
			*iParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*iParam3 = 23;
			*iParam4 = 30;
			break;
		case 10:
		case 12:
			*iParam3 = 2;
			*iParam4 = 55;
			break;
		case 13:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 14:
			*iParam3 = 0;
			*iParam4 = 50;
			break;
		case 15:
		case 16:
			*iParam3 = 23;
			*iParam4 = 50;
			break;
		case 17:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 18:
		case 19:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 20:
		case 21:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 22:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 23:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 34:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 35:
		case 36:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 32:
		case 33:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 11:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 2:
		case 3:
			*iParam3 = 23;
			*iParam4 = 5;
			break;
	}
}

void func_950(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam1 = 19;
	*iParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 1:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 11:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 10:
		case 12:
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		case 13:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 14:
			*iParam3 = 0;
			*iParam4 = 50;
			break;
		case 15:
		case 16:
			*iParam3 = 23;
			*iParam4 = 50;
			break;
		case 17:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 18:
		case 19:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 20:
		case 21:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 22:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 23:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*iParam3 = 22;
			*iParam4 = 30;
			break;
		case 34:
			*iParam3 = 22;
			*iParam4 = 0;
			break;
		case 35:
		case 36:
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 32:
		case 33:
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 2:
		case 3:
			*iParam3 = 0;
			*iParam4 = 0;
			break;
	}
}

int func_951(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 == iParam0)
	{
		if (iVar1 < iParam1)
		{
			return 0;
		}
	}
	if (iVar0 == iParam2)
	{
		if (iVar1 > iParam3)
		{
			return 0;
		}
	}
	if (iVar0 < iParam0)
	{
		return 0;
	}
	if (iVar0 > iParam2)
	{
		return 0;
	}
	return 1;
}

int func_952(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 < iParam0 && iVar0 > iParam2)
	{
		return 0;
	}
	if (iVar0 == iParam0)
	{
		if (iVar1 < iParam1)
		{
			return 0;
		}
	}
	if (iVar0 == iParam2)
	{
		if (iVar1 > iParam3)
		{
			return 0;
		}
	}
	return 1;
}

int func_953(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 > iParam3)
	{
		return 0;
	}
	if (iVar0 < iParam1)
	{
		return 0;
	}
	return 1;
}

void func_954(int iParam0, float fParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("P_CAMPFIRE02X_SCRIPT"):
		case joaat("P_CAMPFIRE05X"):
		case joaat("S_COOKFIRE01X"):
		case joaat("P_CAMPFIRE02XB"):
			OBJECT::_SET_OBJECT_BURN_INTENSITY(iParam0, fParam1);
			break;
	}
}

void func_955(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_9[iParam0 /*9*/]))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_9[iParam0 /*9*/]));
	}
	MISC::CLEAR_BIT(&(uParam1->f_255), iParam0);
}

int func_956(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1487530998;
		case 1:
			return -2107109207;
		case 2:
			return -74563350;
		case 3:
			return -74166807;
		default:
			break;
	}
	return 0;
}

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("HSO");
		case 2:
			return joaat("CLM");
		case 3:
			return joaat("SDB");
		case 6:
			return joaat("BVH");
		default:
			break;
	}
	return 0;
}

Vector3 func_958()
{
	switch (__LIB_0__::func_317())
	{
		case 1:
			return -134.29f, -34.339f, 96.1221f;
		case 2:
			return 653.431f, -1257.437f, 43.7682f;
		case 3:
			return 1889.412f, -1866.691f, 47.403f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_959()
{
	switch (__LIB_0__::func_317())
	{
		case 1:
			return "script@camp_upgrade@horseshoe_overlook";
		case 2:
			return "script@camp_upgrade@clemens_cove";
		case 3:
			return "script@camp_upgrade@shady_bell";
		default:
			break;
	}
	return "";
}

Vector3 func_960()
{
	switch (__LIB_0__::func_317())
	{
		case 1:
			return 0f, 0f, -120.79f;
		case 2:
			return 0f, 0f, -71.11f;
		case 3:
			return 0f, 0f, 135f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_961(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (uParam0->f_773 && uParam0->f_772)
	{
		if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SHOP_BROWSING")))
		{
			UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("SHOP_BROWSING"), -702860656);
		}
	}
	else if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SHOP_BROWSING")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("SHOP_BROWSING"));
	}
}

bool func_962(int iParam0)
{
	int iVar0[1];
	int iVar2;
	iVar0[0] = joaat("PIROGUE");
	switch (iParam0)
	{
		case 0:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2], false);
				iVar2++;
			}
			break;
		case 1:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0[iVar2]) == 0)
				{
					return false;
				}
				iVar2++;
			}
			break;
		case 2:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			break;
	}
	return true;
}

void func_963(var uParam0, int iParam1)
{
	uParam0->f_773 = iParam1;
}

void func_964(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(*uParam0, iParam1);
}

void func_965(var uParam0)
{
	*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(196480927);
}

void func_966()
{
	AUDIO::_0xD9130842D7226045("Ledger_Sounds", 0);
}

bool func_967(var uParam0)
{
	return UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0);
}

bool func_968()
{
	return AUDIO::_0xD9130842D7226045("Ledger_Sounds", 0);
}

Vector3 func_969(int iParam0)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, -1.066f);
}

void func_970(var uParam0, bool bParam1)
{
	uParam0->f_772 = 1;
	uParam0->f_774 = MISC::GET_GAME_TIMER() + 250;
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND("INFO_SHOW", "Ledger_Sounds", true, 0);
	}
}

Vector3 func_971(int iParam0, bool bParam1)
{
	vector3 vVar0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -134.6045f, -34.2293f, 96.5638f };
				break;
			case 2:
				vVar0 = { 653.1854f, -1257.589f, 44.2421f };
				break;
			case 3:
				vVar0 = { 1889.572f, -1866.438f, 47.8536f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -134.6193f, -34.3059f, 96.5245f };
				break;
			case 2:
				vVar0 = { 653.2174f, -1257.633f, 44.1706f };
				break;
			case 3:
				vVar0 = { 1889.519f, -1866.399f, 47.8054f };
				break;
		}
	}
	return vVar0;
}

void func_972(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!bParam4)
	{
		uParam0->f_1 = { vParam1 };
	}
	uParam0->f_8 = { vParam1 };
	uParam0->f_12 = 0f;
}

void func_973()
{
	AUDIO::PLAY_SOUND_FRONTEND("upgrade_cam_pan", "Ledger_Sounds", true, 0);
}

void func_974(var uParam0, bool bParam1)
{
	uParam0->f_772 = 0;
	uParam0->f_774 = MISC::GET_GAME_TIMER() + 250;
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND("INFO_HIDE", "Ledger_Sounds", true, 0);
	}
}

bool func_975(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			return (Global_40.f_4283.f_3 && iParam0) != 0;
	}
	return false;
}

void func_976(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 - (Global_40.f_4283.f_3 && iParam0));
			break;
	}
}

Vector3 func_977(int iParam0)
{
	return Global_1327590.f_11465[iParam0 /*10*/].f_1;
}

struct<8> func_978(int iParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, "", 64);
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/];
}

char* func_979(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN";
		case joaat("BREED_APPALOOSA_BLANKET"):
		case joaat("BREED_APPALOOSA_LEOPARD"):
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
		case joaat("BREED_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA";
		case joaat("BREED_ARABIAN_WARPEDBRINDLE_PC"):
		case joaat("BREED_ARABIAN_BLACK"):
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
		case joaat("BREED_ARABIAN_REDCHESTNUT_PC"):
		case joaat("BREED_ARABIAN_GREY"):
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
		case joaat("BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_MORGAN_PALOMINO"):
		case joaat("BREED_MORGAN_BAYROAN"):
		case joaat("BREED_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN";
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
		case joaat("BREED_NOKOTA_WHITEROAN"):
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA";
		case joaat("BREED_SHIRE_LIGHTGREY"):
		case joaat("BREED_SHIRE_RAVENBLACK"):
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
		case joaat("BREED_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE_PAINTED"):
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_APPALOOSA";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_NOKOTA";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_WINTER02_01"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_BILL"):
			return "BREED_ARDENNES";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_ARABIAN";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_APPALOOSA";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

bool func_980()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 367, true))
	{
		return false;
	}
	return true;
}

Vector3 func_981()
{
	return Global_40.f_1095.f_3054.f_77;
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 1;
		case 4:
			return 2;
		default:
			break;
	}
	return -1;
}

void func_983(int iParam0)
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
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

float func_984(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 1E+09f;
		case 1:
			return 1E+09f;
		case 2:
			return 1E+09f;
		case 3:
			return 1E+09f;
		case 5:
			return 100f;
		case 6:
			return 30f;
		case 7:
			return 1E+09f;
		case 8:
			return 1E+09f;
		case 9:
			return 1E+09f;
		case 10:
			return 1E+09f;
		case 11:
			return 1E+09f;
		case 12:
			return 1E+09f;
		case 13:
			return 1E+09f;
		case 14:
			return 1E+09f;
		case 15:
			return 1E+09f;
		case 16:
			return 1E+09f;
		case 17:
			return 1E+09f;
		case 18:
			return 1E+09f;
		case 19:
			return 1E+09f;
		case 20:
			return 1E+09f;
		case 21:
			return 1E+09f;
		case 22:
			return 1E+09f;
	}
	return 1E+09f;
}

float func_985(int iParam0)
{
	var uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0f;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0f;
	}
	uVar0 = PED::_0x42688E94E96FD9B4(iParam0, 3, 0);
	return uVar0;
}

void func_986(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

int func_987(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

int func_988()
{
	return Global_1900383.f_393.f_1;
}

void func_989(int iParam0)
{
	Global_1900383.f_393.f_1 = iParam0;
}

void func_990(var uParam0)
{
	if (*uParam0 != 0)
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
}

void func_991()
{
	AUDIO::_0x531A78D6BF27014B("Ledger_Sounds");
}

bool func_992(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return false;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	}
	return true;
}

void func_993(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("CLE_UPG_CAMPFIRE_RUG_COW"):
			iVar0 = joaat("CLE_UPG_CAMPFIRE_RUG_COW");
			break;
		case joaat("SHB_P_CAMP_02"):
			iVar0 = joaat("SHB_P_CAMP_02");
			break;
		case joaat("DEWCLM_P_CAMP_02"):
			iVar0 = joaat("DEWCLM_P_CAMP_02");
			break;
		case joaat("HSO_P_CAMP_02"):
			iVar0 = joaat("VEGMODS_HSO_PEARSON_WAGON");
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			if (GRAPHICS::_0xDE9BAD3292AA6D5E(iVar0) == 0)
			{
				GRAPHICS::_0xDFEA23EC90113657(iVar0);
			}
		}
		else if (GRAPHICS::_0xDE9BAD3292AA6D5E(iVar0))
		{
			GRAPHICS::_0xDD0BC0EDCB2162F6(iVar0);
		}
	}
}

void func_994(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "itemLabel", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "itemDescription", "");
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "purchaseLabel", "");
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "purchasePrice", 0);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "isGoldPrice", 0);
	INVENTORY::_0x9D21B185ABC2DBC4(uParam0, "effects", 0, 0);
}

bool func_995(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return false;
	}
	return true;
}

bool func_996(int iParam0)
{
	if (iParam0 == 14)
	{
		return false;
	}
	return true;
}

void func_997(int iParam0, var uParam1)
{
	if (Global_40.f_4283 == 3)
	{
		if (*uParam1 == 3)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam1->f_9[iParam0 /*9*/], INTERIOR::GET_INTERIOR_AT_COORDS(uParam1->f_3), -1289461573);
		}
	}
}

int func_998(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

int func_999(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 10;
		case 4:
			return 13;
		case 5:
			return 0;
		case 6:
			return 12;
		case 7:
			return 14;
		default:
			break;
	}
	return -1;
}
