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
	struct<676> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1082130432, 3, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	bool bLocal_694 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_14.f_9.f_3 = __LIB_0__::func_81(&uScriptParam_0);
	Local_14.f_9.f_43 = __LIB_0__::func_12();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_3__::func_429(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 106);
		bLocal_694 = true;
	}
	if (!bLocal_694)
	{
		__LIB_3__::func_368(&(Local_14.f_9), 1);
		func_5(&uScriptParam_0);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_694, 607, 0);
		if (bLocal_694)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (Local_14.f_2)
			{
				case 0:
					if (func_8())
					{
						Local_14.f_9.f_176 = 1;
						Local_14.f_2 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&(Local_14.f_9), &uScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10();
						func_11(&Local_14);
						func_12();
						Local_14.f_2 = 3;
					}
					else if (Local_14.f_9.f_160)
					{
						func_6();
					}
					break;
				case 3:
					if (func_13())
					{
						Local_14.f_639 = 1;
						if (func_14())
						{
							func_15(0);
							Local_14.f_2 = 4;
						}
					}
					break;
				case 4:
					func_16(&Local_14);
					func_17(&Local_14, 0);
					func_18(&Local_14);
					__LIB_4__::func_423(&(Local_14.f_407), __LIB_0__::func_58(&Local_14));
					if (!func_21(&(Local_14.f_9), &(Local_14.f_239), Local_14.f_7, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					if (!Local_14.f_9.f_46)
					{
						if (func_22())
						{
							__LIB_0__::func_115(&Local_14, 3);
							Local_14.f_9.f_46 = 1;
						}
					}
					else
					{
						func_24();
					}
					if (func_25())
					{
						Local_14.f_9.f_50 = 1;
						func_6();
					}
					if (func_26())
					{
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(Local_14.f_9.f_158);
		}
	}
}

void func_5(var uParam0)
{
	__LIB_2__::func_433(&(Local_14.f_9.f_5));
	__LIB_2__::func_180(&(Local_14.f_9.f_5), 0);
	__LIB_2__::func_432(&(Local_14.f_9.f_5));
	__LIB_2__::func_180(&(Local_14.f_9.f_5), 0);
	__LIB_2__::func_111(&(Local_14.f_9.f_5), 0);
	__LIB_2__::func_182(&(Local_14.f_9.f_5), 0);
	if (!__LIB_0__::func_73(256))
	{
		__LIB_2__::func_29(256);
	}
}

void func_6()
{
	int iVar0;
	if (__LIB_0__::func_73(256))
	{
		__LIB_1__::func_979(256);
	}
	__LIB_4__::func_200(&(Local_14.f_407));
	func_38(&Local_14);
	__LIB_3__::func_493(&(Local_14.f_9), &(Local_14.f_239), &(Local_14.f_247), Local_14.f_7, Local_14.f_203, Local_14.f_204, 0, 1, 0, 1);
	iVar0 = 0;
	while (iVar0 < Local_14.f_251)
	{
		if (__LIB_2__::func_1(Local_14.f_251[iVar0 /*32*/].f_11, 0, 1))
		{
			if (PED::_GET_RIDER_OF_MOUNT(Local_14.f_251[iVar0 /*32*/].f_11, true) == 0)
			{
				__LIB_3__::func_288(Local_14.f_251[iVar0 /*32*/].f_11, 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_251[iVar0 /*32*/].f_11));
			}
		}
		iVar0++;
	}
	func_15(1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8()
{
	switch (Local_14)
	{
		case 0:
			if (__LIB_3__::func_308(&(Local_14.f_9)))
			{
				func_44(&Local_14);
				func_45();
				func_46(&Local_14);
				func_47();
				Local_14 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&(Local_14.f_251)))
			{
				return false;
			}
			if (!func_49(&Local_14))
			{
				return false;
			}
			Local_14 = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

void func_10()
{
	Local_14.f_7 = Local_14.f_9.f_51.f_4;
	__LIB_3__::func_352(&(Local_14.f_9), 5);
}

void func_11(var uParam0)
{
	int iVar0;
	switch (uParam0->f_7)
	{
		case 0:
			uParam0->f_206 = 0;
			break;
		case 1:
			uParam0->f_206 = 2;
			break;
	}
	func_56(uParam0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_3__::func_176(uParam0->f_239[iVar0], 0);
		func_58(uParam0, iVar0);
		StringCopy(&(uParam0->f_251[iVar0 /*32*/].f_23), func_59(uParam0, iVar0), 64);
		uParam0->f_251[iVar0 /*32*/].f_13 = 1;
		uParam0->f_251[iVar0 /*32*/].f_15 = { uParam0->f_251[iVar0 /*32*/].f_6 };
		uParam0->f_251[iVar0 /*32*/].f_18 = uParam0->f_251[iVar0 /*32*/].f_9;
		uParam0->f_251[iVar0 /*32*/].f_19 = 1;
		iVar0++;
	}
}

void func_12()
{
	vector3 vVar0;
	Local_14.f_358[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3676.098f, -2612.358f, -14.1f, 0f, 0f, 0f, 83.918f, 9.884215f, 25f, "volRestriction");
	func_60(&(Local_14.f_358[0]), vVar0, vVar0, vVar0, 1, 8192, 0);
	Local_14.f_358[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3976f, -3069.4f, -11.4f, vVar0, 5f, 5f, 5f, "volWestGoto");
	switch (Local_14.f_7)
	{
		case 0:
			Local_14.f_358[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3668.507f, -2607.677f, -13.88558f, 0f, 0f, 0f, 15f, 15.33064f, 4f, "volConfront");
			Local_14.f_358[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volWarnBlocked");
			VOLUME::_0x39816F6F94F385AD(Local_14.f_358[3], -3677.338f, -2602.514f, -11.849f, 0f, 0f, 0f, 10f, 6f, 7f);
			VOLUME::_0x39816F6F94F385AD(Local_14.f_358[3], -3659.963f, -2601.303f, -11.849f, 0f, 0f, 0f, 7f, 5f, 7f);
			VOLUME::_0x39816F6F94F385AD(Local_14.f_358[3], -3668.294f, -2620.934f, -11.849f, 0f, 0f, 0f, 25f, 6f, 7f);
			break;
		case 1:
			Local_14.f_358[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3624.175f, -2613.99f, -12.62705f, 0f, 0f, -64f, 12.5065f, 8.852021f, 8f, "volConfront");
			break;
	}
}

bool func_13()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (Local_14.f_639)
	{
		return true;
	}
	if (__LIB_0__::func_86(Local_14.f_451))
	{
		fVar4 = 0f;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			vVar1.x = (vVar1.x + Local_14.f_251[iVar0 /*32*/].f_6);
			vVar1.f_1 = (vVar1.y + Local_14.f_251[iVar0 /*32*/].f_6.f_1);
			vVar1.f_2 = (vVar1.z + Local_14.f_251[iVar0 /*32*/].f_6.f_2);
			fVar4 = (fVar4 + 1f);
			iVar0++;
		}
		vVar1 = { (vVar1.x / fVar4), (vVar1.y / fVar4), (vVar1.z / fVar4) };
		Local_14.f_451 = { vVar1 };
		return false;
	}
	__LIB_1__::func_283(&(Local_14.f_363[2 /*3*/]), 0);
	if (CAM::IS_SPHERE_VISIBLE(Local_14.f_451, 5f) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_14.f_451, Global_36, true) < 25f)
	{
		return false;
	}
	if (func_64(func_63(&Local_14), &(Local_14.f_400)))
	{
		return true;
	}
	if (__LIB_1__::func_285(&(Local_14.f_363[2 /*3*/]), 30f))
	{
		func_6();
		return false;
	}
	return false;
}

bool func_14()
{
	switch (Local_14.f_205)
	{
		case 0:
			if (func_66(&Local_14))
			{
				Local_14.f_205 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_479(Local_14.f_9.f_51, Local_14.f_9.f_51.f_3, &(Local_14.f_251), &(Local_14.f_239), 1, 0, -1, 1))
			{
				Local_14.f_205 = 2;
			}
			break;
		case 2:
			if (func_68())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		__LIB_0__::func_267(1);
	}
	else
	{
		__LIB_0__::func_267(0);
	}
}

void func_16(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
}

void func_17(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(uParam0->f_251[iVar0 /*32*/].f_11, 0, 0))
		{
			func_71(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_18(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(uParam0->f_239[iVar0], 0, 1))
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_239[iVar0], 301, true);
		}
		iVar0++;
	}
}

bool func_21(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
	__LIB_3__::func_163(uParam0, uParam1);
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
					func_80(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
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

bool func_22()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if ((!__LIB_4__::func_51(Local_14.f_239[Local_14.f_633], 0, &(Local_14.f_9.f_5), &(Local_14.f_8), 0, 0) && !__LIB_4__::func_51(Local_14.f_243[Local_14.f_633], 0, &(Local_14.f_9.f_5), &(Local_14.f_8), 0, 0)) && !func_84(&Local_14, 1))
	{
		return false;
	}
	iVar2 = __LIB_4__::func_188(&(Local_14.f_9.f_5));
	if (__LIB_2__::func_1(iVar2, 0, 1))
	{
		if (!func_86(&Local_14, 2048))
		{
			func_88(Local_14.f_239[Local_14.f_633], Global_35, func_87(&Local_14), 1, 1744022339, -1082130432 /* Float: -1f */, 0, 1);
			func_89(&Local_14, 2048);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_239[iVar0], 0, 1))
		{
			if (!func_86(&Local_14, 2048))
			{
				func_88(Local_14.f_239[iVar0], Global_35, func_87(&Local_14), 1, 1744022339, -1082130432 /* Float: -1f */, 0, 1);
				switch (iVar0)
				{
					case 0:
						__LIB_2__::func_504(Local_14.f_239[1], 250);
						__LIB_2__::func_504(Local_14.f_239[2], 250);
						break;
					case 1:
						__LIB_2__::func_504(Local_14.f_239[0], 250);
						__LIB_2__::func_504(Local_14.f_239[2], 250);
						break;
					case 2:
						__LIB_2__::func_504(Local_14.f_239[0], 250);
						__LIB_2__::func_504(Local_14.f_239[1], 250);
						break;
				}
				func_89(&Local_14, 2048);
			}
			func_91(iVar0, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(Local_14.f_239[iVar0]);
			if (iVar2 == Local_14.f_239[iVar0] || iVar0 == 0)
			{
				fVar3 = 0f;
			}
			else
			{
				fVar3 = 1f;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 1000, true, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
			__LIB_1__::func_474(Local_14.f_239[iVar0], &iVar1, fVar3, fVar3, 1, 1);
			if (!func_84(&Local_14, 1))
			{
				func_93(&Local_14, 1);
			}
			__LIB_2__::func_73(Local_14.f_239[iVar0], &(Local_14.f_247[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
	return true;
}

void func_24()
{
	if (__LIB_2__::func_648(&(Local_14.f_675), &(Local_14.f_239), 0, -1, 4f, 0))
	{
		if (func_88(Global_35, Global_35, "RE_RETT_ARM_V1_PLAYER_FINAL", 0, 291934926, -1082130432 /* Float: -1f */, 0, 1))
		{
			__LIB_4__::func_424(&(Local_14.f_675));
		}
	}
}

bool func_25()
{
	func_97();
	switch (Local_14.f_1)
	{
		case 0:
			__LIB_0__::func_115(&Local_14, 1);
			break;
		case 1:
			__LIB_0__::func_115(&Local_14, 2);
			break;
		case 2:
			if (func_98())
			{
				__LIB_4__::func_424(&(Local_14.f_675));
				__LIB_0__::func_115(&Local_14, 4);
			}
			break;
		case 3:
			func_99();
			if (func_100())
			{
				__LIB_0__::func_115(&Local_14, 4);
			}
			break;
		case 4:
			if (!Local_14.f_9.f_44)
			{
				Local_14.f_9.f_44 = 1;
			}
			if (func_101(&Local_14) || func_102(&Local_14))
			{
				if (__LIB_2__::func_393(&(Local_14.f_675)))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_26()
{
	bool bVar0;
	bVar0 = true;
	if (Local_14.f_9.f_48)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (__LIB_3__::func_431(&(Local_14.f_9), &(Local_14.f_239), bVar0, 0, !bVar0, 0, 1, 1, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_38(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		TASK::REMOVE_WAYPOINT_RECORDING(func_116(uParam0, iVar0));
		iVar0++;
	}
}

void func_44(int iParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		sVar1 = func_132(iVar0);
		STREAMING::REQUEST_ANIM_DICT(sVar1);
		iVar0++;
	}
}

void func_45()
{
	AUDIO::PREPARE_MUSIC_EVENT("RETT_START");
	AUDIO::PREPARE_MUSIC_EVENT("RETT_IDLE");
}

void func_46(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iParam0->f_251[iVar0 /*32*/].f_1 = joaat("G_M_M_UNIBANDITOS_01");
		iParam0->f_251[iVar0 /*32*/].f_3 = func_133(iVar0);
		iParam0->f_251[iVar0 /*32*/].f_12 = __LIB_2__::func_185(5, 0, 1);
		iVar0++;
	}
}

void func_47()
{
	__LIB_3__::func_284(&(Local_14.f_251));
}

bool func_49(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		sVar1 = func_132(iVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

void func_56(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_116(uParam0, iVar0));
		iVar0++;
	}
}

void func_58(var uParam0, int iParam1)
{
	switch (uParam0->f_206)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					func_156(uParam0, iParam1, -3716.402f, -2588.946f, -14.90543f, -176.24f);
					break;
				case 0:
					func_156(uParam0, iParam1, -3719.45f, -2591.479f, -14.90339f, -177.88f);
					break;
				case 2:
					func_156(uParam0, iParam1, -3721.586f, -2591.836f, -14.90292f, -176.35f);
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					func_156(uParam0, iParam1, -3633.223f, -2593.915f, -15.25833f, 141.04f);
					break;
				case 0:
					func_156(uParam0, iParam1, -3631.659f, -2594.634f, -15.25473f, 139.95f);
					break;
				case 2:
					func_156(uParam0, iParam1, -3630.321f, -2597.357f, -14.81252f, 149.8f);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_156(uParam0, iParam1, -3652.006f, -2681.449f, -15.09046f, -23.32f);
					break;
				case 1:
					func_156(uParam0, iParam1, -3656.671f, -2686.914f, -14.98272f, -18.01f);
					break;
				case 2:
					func_156(uParam0, iParam1, -3647.189f, -2684.13f, -14.44182f, -22.53f);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_156(uParam0, iParam1, -3572.28f, -2589.975f, -14.74531f, 80.67f);
					break;
				case 1:
					func_156(uParam0, iParam1, -3581.406f, -2590.721f, -14.85064f, 78.44f);
					break;
				case 2:
					func_156(uParam0, iParam1, -3584.438f, -2582.906f, -14.9548f, 80.64f);
					break;
			}
			break;
	}
}

char* func_59(var uParam0, int iParam1)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return func_157(0);
				case 1:
					return func_157(2);
				case 2:
					return func_157(1);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return func_157(0);
				case 1:
					return func_157(2);
				case 2:
					return func_157(1);
				default:
					break;
			}
			break;
	}
	return "";
}

void func_60(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam10)
		{
			__LIB_3__::func_581(uParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			__LIB_3__::func_685(uParam0, vParam1, vParam4, vParam7);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

Vector3 func_63(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return -3665.4f, -2608.5f, -14f;
		case 1:
			return -3625.2f, -2617.3f, -13.8f;
		default:
			break;
	}
	return -3665.4f, -2608.5f, -14f;
}

bool func_64(vector3 vParam0, var uParam3)
{
	if (__LIB_9__::func_662(vParam0, uParam3, &(uParam3->f_5), &(uParam3->f_6), 0.1f, 120f, 0f, 0, 0f))
	{
		return true;
	}
	return false;
}

bool func_66(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_116(uParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_68()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 16896;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(Local_14.f_239[iVar0], 0, 1))
		{
			PED::SET_PED_KEEP_TASK(Local_14.f_239[iVar0], true);
			PED::_0x8B3B71C80A29A4BB(Local_14.f_239[iVar0], joaat("MOODSMUG"), 6);
			if (iVar0 == 0)
			{
				__LIB_3__::func_285(Local_14.f_239[iVar0], &(Local_14.f_9), 0);
			}
			__LIB_3__::func_285(Local_14.f_251[iVar0 /*32*/].f_11, &(Local_14.f_9), 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14.f_239[iVar0], true, true);
			__LIB_2__::func_272(Local_14.f_239[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_91(iVar0, 1);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_239[iVar0], 6, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_251[iVar0 /*32*/].f_11, true);
			func_71(&Local_14, iVar0, 0);
			switch (iVar0)
			{
				case 0:
					sVar1 = func_116(&Local_14, 0);
					__LIB_1__::func_283(&(Local_14.f_348[0 /*3*/]), 0);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_14.f_239[0], sVar1, 0, iVar2, -1, 0, 0, -1);
					func_168(&Local_14, 0, "RUN_HIDE_A_MALE_A");
					break;
				case 1:
					sVar1 = func_116(&Local_14, 1);
					__LIB_1__::func_283(&(Local_14.f_348[1 /*3*/]), 0);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_14.f_239[1], sVar1, 0, iVar2, -1, 0, 0, -1);
					func_168(&Local_14, 1, "EXCITED_A_MALE_B");
					break;
				case 2:
					sVar1 = func_116(&Local_14, 2);
					__LIB_1__::func_283(&(Local_14.f_348[2 /*3*/]), 0);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_14.f_239[2], sVar1, 0, iVar2, -1, 0, 0, -1);
					func_168(&Local_14, 2, "EXCITED_A_MALE_C");
					break;
			}
		}
		iVar0++;
	}
	return true;
}

int func_70(var uParam0, int iParam1)
{
	float fVar0;
	if (!__LIB_2__::func_1(uParam0->f_239[iParam1], 0, 0))
	{
		return 0;
	}
	fVar0 = 1.3f;
	if (!func_171(uParam0, iParam1, 16384))
	{
		if (__LIB_2__::func_227(-4.5f, 1, Local_14.f_239[iParam1], 1))
		{
			if (func_173(&Local_14, iParam1) == 2)
			{
				if (func_88(Local_14.f_239[iParam1], Global_35, "RE_RETT_ARM_V1_WOOHOO", 0, 1744022339, -1082130432 /* Float: -1f */, 0, 1))
				{
					func_174(uParam0, iParam1, 16384);
				}
			}
			else
			{
				func_174(uParam0, iParam1, 16384);
			}
		}
	}
	else if (!func_171(uParam0, iParam1, 8))
	{
		if (func_173(&Local_14, iParam1) == 0)
		{
			if (func_176(uParam0, iParam1, joaat("RE_RETT_ARM_V1_EXCITED_A"), "RE_RETT_ARM_V1_EXCITED_A", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 8);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 8);
		}
	}
	fVar0 = (fVar0 + 0.1f);
	if (!func_171(uParam0, iParam1, 16))
	{
		if (func_173(&Local_14, iParam1) == 0)
		{
			if (func_176(uParam0, iParam1, joaat("RE_RETT_ARM_V1_EXCITED_B"), "RE_RETT_ARM_V1_EXCITED_B", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 16);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 16);
		}
	}
	fVar0 = (fVar0 + 0.1f);
	if (!func_171(uParam0, iParam1, 32))
	{
		if (func_173(&Local_14, iParam1) == 0)
		{
			if (func_176(uParam0, iParam1, -1288150938, "RE_RETT_ARM_V1_RUN_HIDE_A", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 32);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 32);
		}
	}
	else if (!func_171(uParam0, iParam1, 8192))
	{
		if (func_173(&Local_14, iParam1) == 0)
		{
			if (__LIB_2__::func_227(-4.5f, 1, Local_14.f_239[iParam1], 1))
			{
				if (func_88(Local_14.f_239[iParam1], Global_35, "RE_RETT_ARM_V2_EXCITED_A", 0, 1744022339, -1082130432 /* Float: -1f */, 0, 1))
				{
					func_174(uParam0, iParam1, 8192);
				}
			}
		}
		else
		{
			func_174(uParam0, iParam1, 8192);
		}
	}
	fVar0 = (fVar0 + 0.1f);
	if (!func_171(uParam0, iParam1, 64))
	{
		if (func_173(&Local_14, iParam1) == 0)
		{
			if (func_176(uParam0, iParam1, -1521302373, "RE_RETT_ARM_V1_RUN_HIDE_B", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 64);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 64);
		}
	}
	fVar0 = (fVar0 + 0.1f);
	if (!func_171(uParam0, iParam1, 128))
	{
		if (func_173(&Local_14, iParam1) == 2)
		{
			if (func_176(uParam0, iParam1, joaat("RE_RETT_ARM_V1_VAMANOS"), "RE_RETT_ARM_V1_VAMANOS", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 128);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 128);
		}
	}
	fVar0 = (fVar0 + 0.1f);
	if (!func_171(uParam0, iParam1, 256))
	{
		if (func_173(&Local_14, iParam1) == 2)
		{
			if (func_176(uParam0, iParam1, joaat("RE_RETT_ARM_V1_WOOHOO"), "RE_RETT_ARM_V1_WOOHOO", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 256);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 256);
		}
	}
	fVar0 = (fVar0 + 0.1f);
	if (!func_171(uParam0, iParam1, 512))
	{
		if (func_173(&Local_14, iParam1) == 1)
		{
			if (func_176(uParam0, iParam1, joaat("RE_RETT_ARM_V1_ANDALE"), "RE_RETT_ARM_V1_ANDALE", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 512);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 512);
		}
	}
	fVar0 = (fVar0 + 0.1f);
	if (!func_171(uParam0, iParam1, 1024))
	{
		if (func_173(&Local_14, iParam1) == 1)
		{
			if (func_176(uParam0, iParam1, joaat("RE_RETT_ARM_V1_WOO"), "RE_RETT_ARM_V1_WOO", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 1024);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 1024);
		}
	}
	fVar0 = (fVar0 + 0.1f);
	if (!func_171(uParam0, iParam1, 2048))
	{
		if (func_173(&Local_14, iParam1) == 1)
		{
			if (func_176(uParam0, iParam1, joaat("RE_RETT_ARM_V1_YEAH"), "RE_RETT_ARM_V1_YEAH", __LIB_1__::func_976(&Local_14), fVar0))
			{
				func_174(uParam0, iParam1, 2048);
			}
		}
		else
		{
			func_174(uParam0, iParam1, 2048);
		}
	}
	return 0;
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		PED::_0x06D26A96CA1BCA75(iParam0->f_251[iParam1 /*32*/].f_11, 3, 0f, 0);
		PED::_0x06D26A96CA1BCA75(iParam0->f_251[iParam1 /*32*/].f_11, 1, 0f, 0);
		PED::SET_PED_RESET_FLAG(iParam0->f_251[iParam1 /*32*/].f_11, 49, true);
		PED::SET_PED_RESET_FLAG(iParam0->f_251[iParam1 /*32*/].f_11, 53, true);
	}
}

void func_80(var uParam0, int iParam1, float fParam2)
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
		__LIB_3__::func_336(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 0f, 0, uParam0->f_98[iParam1]);
		if (__LIB_3__::func_280(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
}

bool func_84(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_394, iParam1);
}

bool func_86(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_395, iParam1);
}

char* func_87(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return "RE_RETT_ARM_V1_AGGRO";
		case 1:
			return "RE_RETT_ARM_V2_AGGRO";
		default:
			break;
	}
	return "RE_RETT_ARM_V1_AGGRO";
}

bool func_88(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, float fParam5, int iParam6, bool bParam7)
{
	if (bParam7)
	{
		if (!__LIB_2__::func_227(0, 1, Global_35, 1))
		{
			switch (iParam4)
			{
				case joaat("SPEECH_PARAMS_SHOUTED_CRITICAL"):
					iParam4 = 1744022339;
					break;
				case 1744022339:
					iParam4 = 1506116031;
					break;
				case 1506116031:
					iParam4 = 291934926;
					break;
			}
		}
	}
	return __LIB_2__::func_303(iParam0, iParam1, sParam2, "", fParam5, iParam6, 0, 0, 1, fParam5 > 0f, bParam3, iParam4, 1, 0, 0);
}

void func_89(var uParam0, int iParam1)
{
	__LIB_1__::func_336(&(uParam0->f_395), iParam1);
}

void func_91(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::SET_PED_SHOOT_RATE(Local_14.f_239[iParam0], 500);
	}
	else
	{
		PED::SET_PED_SHOOT_RATE(Local_14.f_239[iParam0], 100);
	}
	WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_14.f_239[iParam0], bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 27, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 30, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 35, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 38, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_239[iParam0], 67, bParam1);
}

void func_93(var uParam0, int iParam1)
{
	__LIB_1__::func_336(&(uParam0->f_394), iParam1);
}

void func_97()
{
	char* sVar0;
	var uVar1;
	int iVar2;
	iVar2 = -1;
	iVar2 = func_247(&uVar1);
	if (Local_14.f_634 == 0 || Local_14.f_634 == 1)
	{
		Local_14.f_634 = 2;
	}
	switch (Local_14.f_6)
	{
		case 0:
			func_248();
			func_249();
			__LIB_2__::func_384(&Local_14, 1);
			break;
		case 1:
			if (func_251())
			{
				if (!func_84(&Local_14, 1))
				{
					func_93(&Local_14, 1);
				}
				return;
			}
			switch (iVar2)
			{
				case 0:
					if (func_252())
					{
						if (!__LIB_0__::func_163(Local_14.f_239[Local_14.f_634], 713668775))
						{
							TASK::CLEAR_PED_TASKS(Local_14.f_239[Local_14.f_634], true, false);
							__LIB_2__::func_45(Local_14.f_239[Local_14.f_634], Global_35, 12000);
							Local_14.f_636 = Local_14.f_634;
						}
						else
						{
							_NAMESPACE29::_0x66F9EB44342BB4C5(Local_14.f_239[Local_14.f_634], &(Local_14.f_646));
							Local_14.f_638 = 1;
						}
						__LIB_1__::func_148(&(Local_14.f_363[3 /*3*/]));
						__LIB_2__::func_384(&Local_14, 2);
					}
					break;
				case 1:
					if (func_252())
					{
						if (!__LIB_0__::func_163(Local_14.f_239[Local_14.f_634], 713668775))
						{
							TASK::CLEAR_PED_TASKS(Local_14.f_239[Local_14.f_634], true, false);
							__LIB_2__::func_45(Local_14.f_239[Local_14.f_634], Global_35, 12000);
							Local_14.f_636 = Local_14.f_634;
						}
						else
						{
							_NAMESPACE29::_0x66F9EB44342BB4C5(Local_14.f_239[Local_14.f_634], &(Local_14.f_646));
							Local_14.f_638 = 1;
						}
						__LIB_1__::func_148(&(Local_14.f_363[3 /*3*/]));
						if (func_84(&Local_14, 8))
						{
							__LIB_2__::func_384(&Local_14, 6);
						}
						else
						{
							__LIB_2__::func_384(&Local_14, 2);
						}
					}
					break;
				default:
					break;
			}
			break;
		case 2:
			if (func_252())
			{
				if (PED::IS_PED_FACING_PED(Local_14.f_239[Local_14.f_634], Global_35, 30f) || __LIB_0__::func_163(Local_14.f_239[Local_14.f_634], 713668775))
				{
					if (__LIB_2__::func_227(0, 1, Global_35, 1))
					{
						sVar0 = func_255(&Local_14);
						if (func_88(Local_14.f_239[Local_14.f_634], Global_35, sVar0, 1, 1744022339, -1082130432 /* Float: -1f */, 0, 1))
						{
							if (!func_84(&Local_14, 512))
							{
								func_93(&Local_14, 512);
								Local_14.f_640 = __LIB_0__::func_665(Global_35, Local_14.f_239[Local_14.f_634], 1, 1);
							}
						}
						if (!func_84(&Local_14, 4))
						{
							func_93(&Local_14, 4);
						}
						if (!__LIB_0__::func_163(Local_14.f_239[Local_14.f_634], 713668775))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_14.f_239[Local_14.f_634], Global_35, 16000, false, 1);
						}
						__LIB_1__::func_148(&(Local_14.f_363[3 /*3*/]));
						__LIB_2__::func_384(&Local_14, 3);
					}
				}
			}
			break;
		case 3:
			if ((__LIB_1__::func_285(&(Local_14.f_363[3 /*3*/]), 2f) && __LIB_2__::func_227(0, 1, Global_35, 1)) && __LIB_2__::func_227(0, 1, Local_14.f_239[Local_14.f_634], 1))
			{
				func_257(Local_14.f_634, 1);
				__LIB_1__::func_148(&(Local_14.f_363[3 /*3*/]));
				__LIB_2__::func_384(&Local_14, 4);
			}
			break;
		case 4:
			if (((__LIB_1__::func_285(&(Local_14.f_363[3 /*3*/]), 4f) && !__LIB_2__::func_341(&(Local_14.f_464[0 /*56*/]))) && !__LIB_2__::func_341(&(Local_14.f_464[1 /*56*/]))) && !__LIB_2__::func_341(&(Local_14.f_464[2 /*56*/])))
			{
				Local_14.f_637 = Local_14.f_634;
				__LIB_2__::func_384(&Local_14, 8);
			}
			switch (iVar2)
			{
				case 0:
					if (func_252())
					{
						if (!__LIB_0__::func_163(Local_14.f_239[Local_14.f_634], 713668775))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_14.f_239[Local_14.f_634], Global_35, 16000, false, 1);
						}
						else
						{
							_NAMESPACE29::_0x66F9EB44342BB4C5(Local_14.f_239[Local_14.f_634], &(Local_14.f_646));
						}
						__LIB_2__::func_411(&(Local_14.f_464[0 /*56*/].f_21[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_14.f_464[1 /*56*/].f_21[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_14.f_464[2 /*56*/].f_21[0 /*17*/]), 0, 0);
						__LIB_1__::func_148(&(Local_14.f_363[3 /*3*/]));
					}
					break;
				case 1:
					if (func_252())
					{
						if (!__LIB_0__::func_163(Local_14.f_239[Local_14.f_634], 713668775))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_14.f_239[Local_14.f_634], Global_35, 16000, false, 1);
						}
						else
						{
							_NAMESPACE29::_0x66F9EB44342BB4C5(Local_14.f_239[Local_14.f_634], &(Local_14.f_646));
						}
						__LIB_1__::func_148(&(Local_14.f_363[3 /*3*/]));
						__LIB_2__::func_384(&Local_14, 6);
					}
					break;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (!func_84(&Local_14, 1))
				{
					func_93(&Local_14, 1);
				}
			}
			else if (__LIB_1__::func_285(&(Local_14.f_363[3 /*3*/]), 2.5f))
			{
				__LIB_2__::func_504(Local_14.f_239[0], 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_239[0], Global_35, 0, -1f, -1f, -1f);
				if (Local_14.f_634 == 1)
				{
					__LIB_2__::func_504(Local_14.f_239[2], 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_239[2], Global_35, 0, -1f, -1f, -1f);
				}
				else
				{
					__LIB_2__::func_504(Local_14.f_239[1], 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_239[1], Global_35, 0, -1f, -1f, -1f);
				}
				__LIB_0__::func_37(&(Local_14.f_363[3 /*3*/]));
			}
			break;
		case 7:
			break;
		case 8:
			if (func_251())
			{
				if (!func_84(&Local_14, 1))
				{
					func_93(&Local_14, 1);
				}
				return;
			}
			if (func_84(&Local_14, 2048) && !func_84(&Local_14, 8192))
			{
				func_261(1f);
			}
			break;
	}
}

bool func_98()
{
	func_262(Local_14.f_633);
	func_263();
	func_264();
	switch (Local_14.f_5)
	{
		case 0:
			if (func_265())
			{
				__LIB_0__::func_615(&Local_14, 5);
			}
			break;
		case 5:
			return true;
	}
	Local_14.f_633 = (Local_14.f_633 + 1 % 3);
	return false;
}

void func_99()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_227(0, 1, Local_14.f_239[iVar0], 1) && __LIB_2__::func_227(-4.5f, 1, Local_14.f_239[iVar0], 0))
		{
			__LIB_2__::func_480(&(Local_14.f_464[iVar0 /*56*/].f_21), 1, 1, 1, 0);
		}
		iVar0++;
	}
}

bool func_100()
{
	if (func_101(&Local_14) || func_102(&Local_14))
	{
		return true;
	}
	return false;
}

bool func_101(var uParam0)
{
	return func_268(uParam0) <= 0;
}

bool func_102(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(uParam0->f_239[iVar0], 0, 1))
		{
			if (uParam0->f_9.f_98[iVar0] < 120f)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

char* func_116(int iParam0, int iParam1)
{
	switch (iParam0->f_206)
	{
		case 1:
			switch (iParam1)
			{
				case 1:
					return "rett_horse_route1_east";
				case 0:
					return "rett_horse_route2_east";
				case 2:
					return "rett_horse_route3_east";
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 1:
					return "rett_horse_route1_west";
				case 0:
					return "rett_horse_route2_west";
				case 2:
					return "rett_horse_route3_west";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "rett_horse_route1_north";
				case 1:
					return "rett_horse_route2_north";
				case 2:
					return "rett_horse_route3_north";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "rett_horse_route1_south";
				case 1:
					return "rett_horse_route2_south";
				case 2:
					return "rett_horse_route3_south";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@town_terror@careless_gunfire";
		case 1:
			return "script_re@town_terror@fires_center_building";
		case 2:
			return "script_re@town_terror@fires_east_building";
		default:
			break;
	}
	return "";
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 649324346;
		case 1:
			return -1267891537;
		case 2:
			return -582691655;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_156(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	uParam0->f_251[iParam1 /*32*/].f_6 = { vParam2 };
	uParam0->f_251[iParam1 /*32*/].f_9 = fParam5;
}

char* func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1019_G_M_M_UniBanditos_01_HISPANIC_01";
		case 1:
			return "1020_G_M_M_UniBanditos_01_HISPANIC_02";
		case 2:
			return "1022_G_M_M_UniBanditos_01_HISPANIC_04";
		default:
			break;
	}
	return "NULL";
}

void func_168(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	sVar0 = func_132(0);
	TASK::CLEAR_PED_TASKS(iParam0->f_239[iParam1], true, false);
	TASK::TASK_PLAY_ANIM(iParam0->f_239[iParam1], sVar0, sParam2, 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
}

bool func_171(var uParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_27(uParam0->f_396[iParam1], iParam2);
}

int func_173(var uParam0, int iParam1)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 1;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_174(var uParam0, int iParam1, int iParam2)
{
	__LIB_1__::func_336(&(uParam0->f_396[iParam1]), iParam2);
}

bool func_176(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, float fParam5)
{
	if (__LIB_2__::func_448(uParam0->f_239[iParam1], iParam2, sParam3, iParam4, fParam5, 0))
	{
		func_88(uParam0->f_239[iParam1], uParam0->f_239[iParam1], sParam3, 0, 1744022339, 100f, 0, 1);
		return true;
	}
	return false;
}

int func_247(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*uParam0 = 1;
	fVar0 = 20f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (iVar2 != 0)
		{
			fVar0 = (20f + 2f);
		}
		iVar1 = func_416(&(Local_14.f_239[iVar2]), &(Local_14.f_464[iVar2 /*56*/]), fVar0, &(Local_14.f_464[iVar2 /*56*/].f_21), &(Local_14.f_9.f_192), 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar1 != -1)
		{
			if (Local_14.f_634 != iVar2)
			{
				Local_14.f_634 = iVar2;
			}
			Local_14.f_464[iVar2 /*56*/].f_21[1 /*17*/].f_13 = func_417(&Local_14);
			switch (Local_14.f_464[iVar2 /*56*/].f_1)
			{
				case 0:
					if (func_86(&Local_14, 4096))
					{
						__LIB_2__::func_411(&(Local_14.f_464[iVar2 /*56*/].f_21[0 /*17*/]), 1, 0);
					}
					break;
				case 1:
					__LIB_2__::func_526(&(Local_14.f_464[iVar2 /*56*/].f_21), 1, 0);
					break;
			}
			func_257(Local_14.f_634, 0);
		}
		if (((func_84(&Local_14, 4) && !func_86(&Local_14, 4096)) && !func_86(&Local_14, 8192)) && Local_14.f_634 != -1)
		{
			if (__LIB_2__::func_227(-4.5f, 1, Global_35, 1) && __LIB_2__::func_227(-4.5f, 1, Local_14.f_239[Local_14.f_634], 1))
			{
				func_419(0);
				func_419(1);
				func_419(2);
				func_420(0, 0);
				func_420(1, 0);
				func_420(2, 1);
				__LIB_2__::func_526(&(Local_14.f_464[Local_14.f_634 /*56*/].f_21), 1, 0);
				__LIB_1__::func_148(&(Local_14.f_363[5 /*3*/]));
				if (Local_14.f_6 > 4)
				{
					Local_14.f_6 = 4;
				}
			}
		}
		if (Local_14.f_634 == -1)
		{
			if (__LIB_2__::func_341(&(Local_14.f_464[iVar2 /*56*/])))
			{
				func_421(iVar2);
			}
		}
		iVar3 = iVar1;
		switch (iVar3)
		{
			case 1:
				if (!func_84(&Local_14, 4))
				{
					func_93(&Local_14, 4);
					Local_14.f_464[iVar2 /*56*/].f_21[1 /*17*/].f_13 = func_417(&Local_14);
				}
				else
				{
					func_93(&Local_14, 8);
					if (!Local_14.f_671)
					{
						if (!func_86(&Local_14, 8192))
						{
							__LIB_4__::func_268(11, 0, 0, "RE_HONOR_INTERVENED", 0, 0, 1065353216 /* Float: 1f */, 0);
						}
						Local_14.f_671 = 1;
					}
					Local_14.f_634 = iVar2;
				}
				if (Local_14.f_635 == -1)
				{
					Local_14.f_635 = Local_14.f_634;
				}
				break;
			case 0:
				func_93(&Local_14, 4);
				Local_14.f_464[iVar2 /*56*/].f_21[1 /*17*/].f_13 = func_417(&Local_14);
				Local_14.f_634 = iVar2;
				if (Local_14.f_635 == -1)
				{
					Local_14.f_635 = Local_14.f_634;
				}
				break;
		}
		if (iVar3 != -1)
		{
			return iVar3;
		}
		iVar2++;
	}
	return iVar3;
}

void func_248()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	sVar0 = func_423(&Local_14);
	sVar1 = func_424(&Local_14);
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (__LIB_2__::func_1(Local_14.f_239[iVar2], 0, 0))
		{
			PED::SET_PED_CONFIG_FLAG(Local_14.f_239[iVar2], 301, false);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_239[iVar2], 317, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_239[iVar2], 297, true);
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_14.f_239[iVar2], __LIB_2__::func_388(&(Local_14.f_239[iVar2])));
			__LIB_2__::func_451(&(Local_14.f_464[iVar2 /*56*/]), 0);
			__LIB_13__::func_817(&(Local_14.f_464[iVar2 /*56*/].f_21[0 /*17*/]), __LIB_2__::func_460(7), sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_13__::func_817(&(Local_14.f_464[iVar2 /*56*/].f_21[1 /*17*/]), __LIB_2__::func_460(26), sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		}
		iVar2++;
	}
}

void func_249()
{
	Local_14.f_646 = { 0f, 0f, 0f };
	Local_14.f_646.f_3 = Global_35;
	Local_14.f_646.f_8 = 4;
	Local_14.f_646.f_19 = 4;
	Local_14.f_646.f_21 = 4;
	Local_14.f_646.f_17 = 4;
	Local_14.f_646.f_18 = 4;
	Local_14.f_646.f_7 = 0;
}

bool func_251()
{
	if (__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		if (func_84(&Local_14, 1))
		{
			return true;
		}
		if (Local_14.f_637 != -1)
		{
			if (__LIB_0__::func_94(Local_14.f_239[Local_14.f_637], Global_36, 1) < (Local_14.f_640 + 1f) && (ENTITY::GET_ENTITY_SPEED(Global_35) < 1f || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_14.f_239[Local_14.f_637], false, false), 45f)))
			{
				return true;
			}
			else if (!func_84(&Local_14, 2048))
			{
				if (func_252())
				{
					__LIB_0__::func_325(&(Local_14.f_247[Local_14.f_634]));
					Local_14.f_638 = 0;
					Local_14.f_634 = -1;
				}
				if (Local_14.f_637 != -1)
				{
					Local_14.f_637 = -1;
				}
				func_93(&Local_14, 2048);
			}
		}
	}
	return false;
}

bool func_252()
{
	if (Local_14.f_634 == -1)
	{
		return false;
	}
	return __LIB_2__::func_1(Local_14.f_239[Local_14.f_634], 0, 0);
}

char* func_255(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return "RE_RETT_ARM_V1_GREET_POSR";
		case 1:
			return "RE_RETT_ARM_V2_GREET_POSR";
		default:
			break;
	}
	return "RE_RETT_ARM_V1_GREET_POSR";
}

void func_257(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(Local_14.f_464[iParam0 /*56*/].f_21[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_14.f_464[iParam0 /*56*/].f_21[0 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(Local_14.f_464[iParam0 /*56*/].f_21[0 /*17*/]), 1, 0);
		}
		if (!__LIB_1__::func_489(&(Local_14.f_464[iParam0 /*56*/].f_21[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_14.f_464[iParam0 /*56*/].f_21[1 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(Local_14.f_464[iParam0 /*56*/].f_21[1 /*17*/]), 1, 0);
		}
	}
	else
	{
		if (__LIB_1__::func_489(&(Local_14.f_464[iParam0 /*56*/].f_21[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_14.f_464[iParam0 /*56*/].f_21[0 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(Local_14.f_464[iParam0 /*56*/].f_21[0 /*17*/]), 0, 0);
		}
		if (__LIB_1__::func_489(&(Local_14.f_464[iParam0 /*56*/].f_21[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_14.f_464[iParam0 /*56*/].f_21[1 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(Local_14.f_464[iParam0 /*56*/].f_21[1 /*17*/]), 0, 0);
		}
	}
}

void func_261(float fParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(Local_14.f_363[6 /*3*/])))
	{
		func_435();
		__LIB_1__::func_283(&(Local_14.f_363[6 /*3*/]), 0);
	}
	else if (__LIB_1__::func_285(&(Local_14.f_363[6 /*3*/]), fParam0))
	{
		func_93(&Local_14, 8192);
		if (Local_14.f_636 != -1)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_ACHIEVE_HEADING(0, Local_14.f_641[Local_14.f_636], 2000);
			TASK::TASK_LOOK_AT_COORD(0, func_436(&Local_14), -1, 0, 51, 0);
			__LIB_1__::func_474(Local_14.f_239[Local_14.f_636], &iVar0, 0, 0, 1, 1);
			if (Local_14.f_634 == Local_14.f_636)
			{
				Local_14.f_634 = -1;
			}
			Local_14.f_636 = -1;
			__LIB_0__::func_37(&(Local_14.f_363[6 /*3*/]));
			__LIB_2__::func_411(&(Local_14.f_464[0 /*56*/].f_21[1 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_14.f_464[1 /*56*/].f_21[1 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_14.f_464[2 /*56*/].f_21[1 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_14.f_464[0 /*56*/].f_21[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_14.f_464[1 /*56*/].f_21[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_14.f_464[2 /*56*/].f_21[0 /*17*/]), 0, 0);
			__LIB_2__::func_384(&Local_14, 1);
		}
	}
}

void func_262(int iParam0)
{
	if (func_84(&Local_14, 1024))
	{
		if (!func_86(&Local_14, 1024))
		{
			if (Local_14.f_636 != -1 && Local_14.f_636 != Local_14.f_634)
			{
				if (Local_14.f_636 == iParam0)
				{
					if (!func_84(&Local_14, 2048))
					{
						if (__LIB_0__::func_94(Local_14.f_239[Local_14.f_633], Global_36, 1) <= 2f)
						{
							func_93(&Local_14, 1);
						}
						if (!__LIB_0__::func_393(Global_35, Local_14.f_358[3], 0, 1) && !func_84(&Local_14, 4096))
						{
							TASK::CLEAR_PED_TASKS(Local_14.f_239[iParam0], true, false);
							__LIB_2__::func_45(Local_14.f_239[iParam0], Global_35, 12000);
							Local_14.f_636 = iParam0;
							Local_14.f_634 = iParam0;
							func_257(Local_14.f_634, 0);
							__LIB_2__::func_384(&Local_14, 2);
							func_93(&Local_14, 4096);
						}
					}
					else
					{
						if (__LIB_0__::func_75(&(Local_14.f_363[5 /*3*/])))
						{
							__LIB_0__::func_37(&(Local_14.f_363[5 /*3*/]));
						}
						if (Local_14.f_447[iParam0] >= 3)
						{
							Local_14.f_636 = -1;
						}
						else
						{
							func_261(1f);
						}
					}
				}
			}
			else if ((__LIB_0__::func_94(Local_14.f_239[iParam0], Global_36, 1) <= 12f && (Local_14.f_640 == -1f || __LIB_0__::func_94(Local_14.f_239[iParam0], Global_36, 1) > (Local_14.f_640 + 1f))) && !__LIB_0__::func_393(Global_35, Local_14.f_358[3], 0, 1))
			{
				if (func_84(&Local_14, 2048))
				{
					func_438(&Local_14, 2048);
				}
				Local_14.f_640 = __LIB_0__::func_665(Global_35, Local_14.f_239[iParam0], 1, 1);
				if (iParam0 == 0 || iParam0 == 1)
				{
					Local_14.f_636 = 2;
				}
				else
				{
					Local_14.f_636 = iParam0;
				}
			}
		}
	}
}

void func_263()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_171(&Local_14, iVar0, 4))
		{
			Local_14.f_389[iVar0] = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_14.f_239[iVar0], 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_389[iVar0]))
			{
				func_174(&Local_14, iVar0, 4);
			}
		}
		else if (__LIB_2__::func_448(Local_14.f_239[iVar0], joaat("GUNFIRE"), "gunfire", __LIB_1__::func_976(&Local_14), 1067030938 /* Float: 1.2f */, 1))
		{
			func_439(&Local_14, iVar0);
		}
		iVar0++;
	}
}

void func_264()
{
	if (!func_84(&Local_14, 64))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RETT_START");
		func_93(&Local_14, 64);
	}
	else if (!func_84(&Local_14, 128))
	{
		if (!__LIB_0__::func_75(&(Local_14.f_672)))
		{
			__LIB_1__::func_283(&(Local_14.f_672), 1);
		}
		else if (__LIB_1__::func_285(&(Local_14.f_672), 10f))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RETT_IDLE");
			func_93(&Local_14, 128);
		}
	}
}

bool func_265()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (iVar0 != Local_14.f_634 || Local_14.f_638)
		{
			if (!func_440(iVar0))
			{
				iVar1 = 0;
			}
		}
		else
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_268(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(uParam0->f_239[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_416(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_518(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_417(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return "RE_RETT_ARM_V1_GREET_NEG_B";
		case 1:
			return "RE_RETT_ARM_V2_GREET_NEG_B";
		default:
			break;
	}
	return "RE_RETT_ARM_V1_GREET_NEG_B";
}

void func_419(int iParam0)
{
	char* sVar0;
	sVar0 = func_522(&Local_14);
	__LIB_2__::func_360(&(Local_14.f_464[iParam0 /*56*/].f_21[0 /*17*/]), __LIB_2__::func_460(8));
	Local_14.f_464[iParam0 /*56*/].f_21[0 /*17*/].f_13 = sVar0;
	if (!func_86(&Local_14, 4096))
	{
		func_89(&Local_14, 4096);
	}
}

void func_420(int iParam0, bool bParam1)
{
	if (!func_86(&Local_14, 8192))
	{
		__LIB_2__::func_360(&(Local_14.f_464[iParam0 /*56*/].f_21[1 /*17*/]), __LIB_2__::func_460(10));
		if (bParam1)
		{
			func_89(&Local_14, 8192);
		}
	}
}

void func_421(int iParam0)
{
	Local_14.f_634 = iParam0;
	func_257(Local_14.f_634, 0);
	if (Local_14.f_634 == 0 || Local_14.f_634 == 1)
	{
		Local_14.f_636 = 2;
	}
	TASK::CLEAR_PED_SECONDARY_TASK(Local_14.f_239[Local_14.f_634]);
}

char* func_423(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return "RE_RETT_ARM_V1_GREET_POS";
		case 1:
			return "RE_RETT_ARM_V2_GREET_POS";
		default:
			break;
	}
	return "RE_RETT_ARM_V1_GREET_POS";
}

char* func_424(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return "RE_RETT_ARM_V1_GREET_NEG";
		case 1:
			return "RE_RETT_ARM_V2_GREET_NEG";
		default:
			break;
	}
	return "RE_RETT_ARM_V1_GREET_NEG";
}

void func_435()
{
	char* sVar0;
	switch (Local_14.f_7)
	{
		case 0:
			sVar0 = func_132(1);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[0], sVar0, "THERE_IT_IS_MALE_A", 1))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_239[0], true, false);
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[1], sVar0, "THERE_IT_IS_MALE_B", 1))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_239[1], true, false);
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[2], sVar0, "THERE_IT_IS_MALE_C", 1))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_239[2], true, false);
			}
			break;
		case 1:
			sVar0 = func_132(2);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[0], sVar0, "THIS_ONE_MALE_A", 1))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_239[0], true, false);
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[1], sVar0, "THIS_ONE_MALE_B", 1))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_239[1], true, false);
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[2], sVar0, "THIS_ONE_MALE_C", 1))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_239[2], true, false);
			}
			break;
	}
}

Vector3 func_436(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return -3667.956f, -2600.422f, -12.56198f;
		case 1:
			return -3620.908f, -2612.496f, -12.76651f;
		default:
			break;
	}
	return -3665.4f, -2608.5f, -14f;
}

void func_438(var uParam0, int iParam1)
{
	__LIB_0__::func_516(&(uParam0->f_394), iParam1);
}

void func_439(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { 0f, 0f, 0f };
	if (Local_14.f_447[0] == 2)
	{
		vVar0 = { func_533(uParam0, iParam1) };
	}
	PED::_0x4C57F27D1554E6B0(uParam0->f_239[iParam1], vVar0, 0, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
	if (!uParam0->f_9.f_48)
	{
		__LIB_3__::func_209(&(uParam0->f_9), uParam0->f_239[iParam1], 0);
		__LIB_2__::func_315(1066055203, uParam0->f_239[iParam1], 1);
	}
}

bool func_440(int iParam0)
{
	vector3 vVar0[2];
	var uVar7[2];
	int iVar10;
	char* sVar14;
	vector3 vVar15;
	if (!__LIB_2__::func_1(Local_14.f_239[iParam0], 0, 1))
	{
		return false;
	}
	if (Local_14.f_636 != -1)
	{
		if (Local_14.f_636 == iParam0 || func_86(&Local_14, 256))
		{
			return false;
		}
	}
	vVar0[0 /*3*/] = { func_536(&Local_14, Local_14.f_447[iParam0], iParam0) };
	uVar7[0] = func_537(&Local_14, Local_14.f_447[iParam0], iParam0);
	if (Local_14.f_447[iParam0] != 7)
	{
		iVar10 = Local_14.f_447[iParam0] + 1;
		vVar0[1 /*3*/] = { func_536(&Local_14, iVar10, iParam0) };
		uVar7[1] = func_537(&Local_14, iVar10, iParam0);
		if (Local_14.f_447[iParam0] <= 1)
		{
			if (__LIB_2__::func_1(Local_14.f_239[iParam0], 0, 1))
			{
				if (!__LIB_0__::func_163(Local_14.f_239[iParam0], 658540077) && !__LIB_0__::func_163(Local_14.f_239[iParam0], 242628503))
				{
					sVar14 = func_116(&Local_14, iParam0);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_14.f_239[iParam0], sVar14, 0, 520, -1, 0, 0, -1);
					return false;
				}
			}
		}
		else if (Local_14.f_447[iParam0] >= 3)
		{
			if ((!__LIB_0__::func_163(Local_14.f_239[iParam0], 713668775) && !__LIB_0__::func_163(Local_14.f_239[iParam0], 242628503)) && !func_84(&Local_14, 8))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_14.f_239[iParam0], false, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_239[iParam0], vVar0[1 /*3*/], 2.001f, -1, 3f, 1, uVar7[1]);
				return false;
			}
		}
	}
	switch (Local_14.f_447[iParam0])
	{
		case 0:
			if (__LIB_0__::func_94(Local_14.f_239[iParam0], vVar0[0 /*3*/], 0) < 5f)
			{
				switch (iParam0)
				{
					case 0:
						func_538(&(Local_14.f_407[0 /*13*/]), joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), "shockingDangerous", Local_14.f_239[0], -1f, 25f, -1082130432 /* Float: -1f */, 0);
						if (!func_86(&Local_14, 8))
						{
							if (func_88(Local_14.f_239[0], Global_35, func_539(&Local_14), 0, joaat("SPEECH_PARAMS_SHOUTED_CRITICAL"), -1082130432 /* Float: -1f */, 0, 1))
							{
								func_89(&Local_14, 8);
							}
						}
						break;
					case 1:
						if (!func_86(&Local_14, 8))
						{
							switch (Local_14.f_7)
							{
								case 0:
									func_168(&Local_14, iParam0, "EXCITED_A_MALE_B");
									break;
								case 1:
									func_168(&Local_14, iParam0, "RUN_HIDE_B_MALE_A");
									break;
							}
						}
						break;
				}
				func_540(&Local_14, 1, iParam0);
			}
			break;
		case 1:
			if (iParam0 == Local_14.f_635)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_14.f_239[iParam0], 8f, 0, 0.4f, 0);
			}
			if (__LIB_0__::func_94(Local_14.f_239[iParam0], vVar0[0 /*3*/], 0) < 5f)
			{
				func_540(&Local_14, 2, iParam0);
			}
			break;
		case 2:
			if (iParam0 == Local_14.f_635)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_14.f_239[iParam0], 8f, 0, 0.4f, 0);
			}
			else if (__LIB_0__::func_94(Local_14.f_239[iParam0], vVar0[0 /*3*/], 0) < 5f)
			{
				if (__LIB_0__::func_94(Local_14.f_239[iParam0], vVar0[0 /*3*/], 0) < 1f)
				{
					func_541(&Local_14, iParam0);
				}
				if (!__LIB_0__::func_75(&(Local_14.f_454[iParam0 /*3*/])))
				{
					__LIB_1__::func_283(&(Local_14.f_454[iParam0 /*3*/]), 0);
				}
			}
			if (!func_84(&Local_14, 16))
			{
				func_542();
			}
			if (!func_171(&Local_14, iParam0, 2))
			{
				if (func_84(&Local_14, 16))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_239[iParam0], vVar0[1 /*3*/], 2.001f, -1, 4f, 1, 40000f);
					func_174(&Local_14, iParam0, 2);
				}
			}
			else
			{
				func_540(&Local_14, 3, iParam0);
			}
			break;
		case 3:
			if (!Local_14.f_9.f_44)
			{
				Local_14.f_9.f_44 = 1;
			}
			if (iParam0 == Local_14.f_635)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_14.f_239[iParam0], 8f, 0, 0.4f, 0);
			}
			if (__LIB_0__::func_94(Local_14.f_239[iParam0], vVar0[0 /*3*/], 0) < 5f && func_171(&Local_14, iParam0, 2))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_239[iParam0], vVar0[1 /*3*/], 2.001f, -1, 4f, 1, 40000f);
				switch (Local_14.f_7)
				{
					case 0:
						switch (iParam0)
						{
							case 2:
								func_168(&Local_14, 2, "VAMANOS_B_MALE_C");
								break;
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 2:
								func_168(&Local_14, 2, "ANDALE_MALE_C");
								break;
						}
						break;
				}
				func_540(&Local_14, 4, iParam0);
			}
			break;
		case 4:
			if (__LIB_0__::func_94(Local_14.f_239[iParam0], vVar0[0 /*3*/], 0) < 5f)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_239[iParam0], vVar0[1 /*3*/], 2.001f, -1, 4f, 1, 40000f);
				switch (Local_14.f_7)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								func_168(&Local_14, iParam0, "EXCITED_A_MALE_A");
								break;
							case 1:
								func_168(&Local_14, iParam0, "EXCITED_A_MALE_B");
								break;
							case 2:
								func_168(&Local_14, iParam0, "EXCITED_A_MALE_C");
								break;
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								func_168(&Local_14, iParam0, "EXCITED_B_MALE_A");
								break;
							case 1:
								func_168(&Local_14, iParam0, "EXCITED_B_MALE_B");
								break;
							case 2:
								func_168(&Local_14, iParam0, "EXCITED_B_MALE_C");
								break;
						}
						break;
				}
				Local_14.f_634 = -1;
				func_540(&Local_14, 5, iParam0);
			}
			break;
		case 5:
			if (__LIB_0__::func_94(Local_14.f_239[iParam0], vVar0[0 /*3*/], 0) < 5f)
			{
				switch (iParam0)
				{
					case 0:
						vVar15 = { func_543(&Local_14) };
						func_544(&(Local_14.f_407[0 /*13*/]), joaat("EVENT_SHOCKING_BEAT_INTERESTING"), "shockingInteresting", vVar15, 12f, 18f, 12f);
						if (!func_86(&Local_14, 64))
						{
							func_89(&Local_14, 64);
						}
						break;
				}
				switch (Local_14.f_7)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								func_168(&Local_14, iParam0, "EXCITED_B_MALE_A");
								break;
							case 1:
								func_168(&Local_14, iParam0, "SHOOTING_MALE_B");
								break;
							case 2:
								func_168(&Local_14, iParam0, "YEAH_MALE_C");
								break;
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								func_168(&Local_14, iParam0, "RUN_HIDE_A_MALE_A");
								break;
							case 1:
								func_168(&Local_14, iParam0, "VAMANOS_A_MALE_B");
								break;
							case 2:
								func_168(&Local_14, iParam0, "WOO_MALE_C");
								break;
						}
						break;
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_239[iParam0], vVar0[1 /*3*/], 2.001f, -1, 4f, 1, uVar7[1]);
				func_540(&Local_14, 6, iParam0);
			}
			break;
		case 6:
			if (__LIB_0__::func_94(Local_14.f_239[iParam0], vVar0[0 /*3*/], 0) < 5f)
			{
				__LIB_3__::func_897(Local_14.f_239[iParam0], 126, 0, 1);
				func_540(&Local_14, 7, iParam0);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

int func_518(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_518(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

char* func_522(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return "RE_RETT_ARM_V1_GREET_DEF";
		case 1:
			return "RE_RETT_ARM_V2_GREET_DEF";
		default:
			break;
	}
	return "RE_RETT_ARM_V1_GREET_DEF";
}

Vector3 func_533(var uParam0, int iParam1)
{
	vector3 vVar0;
	switch (Local_14.f_7)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (uParam0->f_206 == 2)
					{
						vVar0 = { -3682.1f, -2622.8f, -12.8f };
					}
					else if (uParam0->f_206 == 1)
					{
						vVar0 = { -3682.1f, -2622.8f, -12.8f };
					}
					else if (uParam0->f_206 == 0)
					{
						vVar0 = { -3666.3f, -2600.9f, -13.2f };
					}
					else
					{
						vVar0 = { -3666.3f, -2600.9f, -13.2f };
					}
					break;
				case 1:
					if (uParam0->f_206 == 2)
					{
						vVar0 = { -3680f, 2623.4f, -9.5f };
					}
					else if (uParam0->f_206 == 1)
					{
						vVar0 = { -3680f, 2623.4f, -9.5f };
					}
					else if (uParam0->f_206 == 0)
					{
						vVar0 = { -3668.1f, -2600.5f, -12.7f };
					}
					else
					{
						vVar0 = { -3668.1f, -2600.5f, -12.7f };
					}
					break;
				case 2:
					if (uParam0->f_206 == 2)
					{
						vVar0 = { -3681f, -2623.8f, -12.8f };
					}
					else if (uParam0->f_206 == 1)
					{
						vVar0 = { -3681f, -2623.8f, -12.8f };
					}
					else if (uParam0->f_206 == 0)
					{
						vVar0 = { -3665.9f, -2600.6f, -8.8f };
					}
					else
					{
						vVar0 = { -3665.9f, -2600.6f, -8.8f };
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					if (uParam0->f_206 == 2)
					{
						vVar0 = { -3620.9f, -2612.5f, -13f };
					}
					else if (uParam0->f_206 == 1)
					{
						vVar0 = { -3620.9f, -2612.5f, -13f };
					}
					else if (uParam0->f_206 == 0)
					{
						vVar0 = { -3620.9f, -2612.5f, -13f };
					}
					else
					{
						vVar0 = { -3620.9f, -2612.5f, -13f };
					}
					break;
				case 1:
					if (uParam0->f_206 == 2)
					{
						vVar0 = { -3621.2f, -2611.9f, -12.4f };
					}
					else if (uParam0->f_206 == 1)
					{
						vVar0 = { -3621.2f, -2611.9f, -12.4f };
					}
					else if (uParam0->f_206 == 0)
					{
						vVar0 = { -3621.2f, -2611.9f, -12.4f };
					}
					else
					{
						vVar0 = { -3621.2f, -2611.9f, -12.4f };
					}
					break;
				case 2:
					if (uParam0->f_206 == 2)
					{
						vVar0 = { -3621.4f, -2611f, -12.5f };
					}
					else if (uParam0->f_206 == 1)
					{
						vVar0 = { -3621.4f, -2611f, -12.5f };
					}
					else if (uParam0->f_206 == 0)
					{
						vVar0 = { -3621.4f, -2611f, -12.5f };
					}
					else
					{
						vVar0 = { -3621.4f, -2611f, -12.5f };
					}
					break;
			}
			break;
		default:
			vVar0 = { 0f, 0f, 0f };
			break;
	}
	return vVar0;
}

Vector3 func_536(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0 = { func_624(uParam0, iParam1, iParam2) };
	return vVar0;
}

var func_537(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	Var0 = { func_624(uParam0, iParam1, iParam2) };
	return Var0.f_3;
}

void func_538(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7)
{
	vector3 vVar0;
	__LIB_3__::func_899(uParam0, iParam1, sParam2, vVar0, iParam3, fParam4, iParam5, iParam5, -1f, fParam6, 1127481344 /* Float: 180f */, fParam7);
}

char* func_539(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return "RE_RETT_ARM_V1_YELL";
		case 1:
			return "RE_RETT_ARM_V2_ENTER";
		default:
			break;
	}
	return "RE_RETT_ARM_V1_ENTER";
}

void func_540(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_447[iParam2] = iParam1;
}

void func_541(var uParam0, int iParam1)
{
	int iVar0;
	if (!func_171(uParam0, iParam1, 4096))
	{
		iVar0 = 0;
		if (iParam1 == 2)
		{
			iVar0 = 2;
		}
		func_88(Local_14.f_239[iParam1], Global_35, "WHOA_ESCALATED", 0, 291934926, 100f, iVar0, 1);
		func_174(uParam0, iParam1, 4096);
	}
}

int func_542()
{
	switch (Local_14.f_4)
	{
		case 0:
			__LIB_0__::func_614(&Local_14, 1);
			break;
		case 1:
			if (__LIB_0__::func_75(&(Local_14.f_454[0 /*3*/])) && !__LIB_0__::func_163(Local_14.f_239[0], 658540077))
			{
				if (func_627())
				{
					func_93(&Local_14, 1024);
					__LIB_0__::func_614(&Local_14, 2);
				}
				func_628();
				func_629(0);
				if (__LIB_0__::func_75(&(Local_14.f_454[1 /*3*/])) && !__LIB_0__::func_163(Local_14.f_239[1], 658540077))
				{
					func_629(1);
				}
				if (!__LIB_0__::func_163(Local_14.f_239[2], 658540077) && __LIB_0__::func_75(&(Local_14.f_454[2 /*3*/])))
				{
					func_629(2);
				}
			}
			break;
		case 2:
			if (func_628())
			{
				if (Local_14.f_636 == -1)
				{
					if ((__LIB_2__::func_227(0, 1, Local_14.f_239[0], 1) && __LIB_2__::func_227(0, 1, Local_14.f_239[1], 1)) && __LIB_2__::func_227(0, 1, Local_14.f_239[2], 1))
					{
						func_93(&Local_14, 16);
						__LIB_0__::func_614(&Local_14, 3);
					}
				}
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

Vector3 func_543(var uParam0)
{
	return func_630(uParam0, 1, 0);
}

void func_544(var uParam0, int iParam1, char* sParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8)
{
	__LIB_3__::func_899(uParam0, iParam1, sParam2, vParam3, 0, fParam6, iParam7, iParam7, -1f, fParam8, 1127481344 /* Float: 180f */, 0);
}

struct<4> func_624(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	switch (uParam0->f_206)
	{
		case 0:
			return func_705(uParam0, iParam1, iParam2);
		case 1:
			return func_706(uParam0, iParam1, iParam2);
		case 2:
			return func_707(uParam0, iParam1, iParam2);
		case 3:
			return func_708(uParam0, iParam1, iParam2);
		default:
			break;
	}
	return Var0;
}

bool func_627()
{
	char* sVar0;
	switch (Local_14.f_7)
	{
		case 0:
			sVar0 = func_132(1);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[0], sVar0, "THERE_IT_IS_MALE_A", 1) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[1], sVar0, "THERE_IT_IS_MALE_B", 1)) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[2], sVar0, "THERE_IT_IS_MALE_C", 1))
			{
				return true;
			}
			break;
		case 1:
			sVar0 = func_132(2);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[0], sVar0, "THIS_ONE_MALE_A", 1) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[1], sVar0, "THIS_ONE_MALE_B", 1)) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[2], sVar0, "THIS_ONE_MALE_C", 1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_628()
{
	switch (Local_14.f_7)
	{
		case 0:
			return func_709();
		case 1:
			return func_710();
		default:
			break;
	}
	return false;
}

int func_629(int iParam0)
{
	char* sVar0;
	switch (Local_14.f_7)
	{
		case 0:
			sVar0 = func_132(1);
			if (iParam0 == 0)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[0], sVar0, "THERE_IT_IS_MALE_A", 1))
				{
					TASK::TASK_PLAY_ANIM(Local_14.f_239[0], sVar0, "THERE_IT_IS_MALE_A", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
				}
			}
			else if (iParam0 == 1)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[1], sVar0, "THERE_IT_IS_MALE_B", 1))
				{
					if (Local_14.f_634 != 1)
					{
						TASK::TASK_PLAY_ANIM(Local_14.f_239[1], sVar0, "THERE_IT_IS_MALE_B", 8f, -8f, -1, 67108880, ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_14.f_239[0], sVar0, "THERE_IT_IS_MALE_A"), true, 0, false, 0, false);
					}
				}
			}
			else if (iParam0 == 2)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[2], sVar0, "THERE_IT_IS_MALE_C", 1))
				{
					if (Local_14.f_634 != 2)
					{
						TASK::TASK_PLAY_ANIM(Local_14.f_239[2], sVar0, "THERE_IT_IS_MALE_C", 8f, -8f, -1, 67108880, ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_14.f_239[0], sVar0, "THERE_IT_IS_MALE_A"), true, 0, false, 0, false);
					}
				}
			}
			break;
		case 1:
			sVar0 = func_132(2);
			if (iParam0 == 0)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[0], sVar0, "THIS_ONE_MALE_A", 1))
				{
					TASK::TASK_PLAY_ANIM(Local_14.f_239[0], sVar0, "THIS_ONE_MALE_A", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
				}
			}
			else if (iParam0 == 1)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[1], sVar0, "THIS_ONE_MALE_B", 1))
				{
					if (Local_14.f_634 != 1)
					{
						TASK::TASK_PLAY_ANIM(Local_14.f_239[1], sVar0, "THIS_ONE_MALE_B", 8f, -8f, -1, 67108880, ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_14.f_239[0], sVar0, "THIS_ONE_MALE_A"), true, 0, false, 0, false);
					}
				}
			}
			else if (iParam0 == 2)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_239[2], sVar0, "THIS_ONE_MALE_C", 1))
				{
					if (Local_14.f_634 != 2)
					{
						TASK::TASK_PLAY_ANIM(Local_14.f_239[2], sVar0, "THIS_ONE_MALE_C", 8f, -8f, -1, 67108880, ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_14.f_239[0], sVar0, "THIS_ONE_MALE_A"), true, 0, false, 0, false);
					}
				}
			}
			break;
	}
	func_628();
	if (Local_14.f_641[iParam0] != ENTITY::GET_ENTITY_HEADING(Local_14.f_239[iParam0]))
	{
		Local_14.f_641[iParam0] = ENTITY::GET_ENTITY_HEADING(Local_14.f_239[iParam0]);
	}
	__LIB_2__::func_111(&(Local_14.f_9.f_5), 1);
	return 1;
}

Vector3 func_630(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	switch (uParam0->f_206)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 1:
						case 2:
							vVar0 = { -3669.753f, -2600.408f, -12.9247f };
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
							vVar0 = { -3667.966f, -2600.408f, -12.9375f };
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 1:
						case 2:
							vVar0 = { -3668.004f, -2600.353f, -9.6521f };
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 1:
						case 2:
							vVar0 = { -3669.753f, -2600.408f, -12.9247f };
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
							vVar0 = { -3667.966f, -2600.408f, -12.9375f };
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 1:
						case 2:
							vVar0 = { -3668.004f, -2600.353f, -9.6521f };
							break;
					}
					break;
			}
			break;
	}
	return vVar0;
}

struct<4> func_705(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	switch (iParam2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3714.085f, -2603.124f, -14.7567f };
					Var0.f_3 = 241.09f;
					break;
				case 1:
					Var0 = { -3677.735f, -2607.551f, -14.88865f };
					Var0.f_3 = 282.9557f;
					break;
				case 2:
					Var0 = { -3669.971f, -2607.222f, -14.918f };
					Var0.f_3 = -89.25f;
					break;
				case 3:
					Var0 = { -3669.971f, -2607.222f, -14.918f };
					Var0.f_3 = -89.25f;
					break;
				case 4:
					Var0 = { -3641.348f, -2606.654f, -14.7272f };
					Var0.f_3 = 270.41f;
					break;
				case 5:
					Var0 = { -3618.122f, -2580.447f, -15.13878f };
					Var0.f_3 = 272.43f;
					break;
				case 6:
					Var0 = { -3403.988f, -2636.01f, -11.0241f };
					Var0.f_3 = 189.1961f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3716.219f, -2607.074f, -14.87011f };
					Var0.f_3 = 250.5658f;
					break;
				case 1:
					Var0 = { -3680.191f, -2608.923f, -15.08361f };
					Var0.f_3 = 280.6862f;
					break;
				case 2:
					Var0 = { -3667.663f, -2608.778f, -15.08174f };
					Var0.f_3 = -90.07f;
					break;
				case 3:
					Var0 = { -3667.663f, -2608.778f, -15.08174f };
					Var0.f_3 = -90.07f;
					break;
				case 4:
					Var0 = { -3641.046f, -2606.944f, -14.72773f };
					Var0.f_3 = 281.8443f;
					break;
				case 5:
					Var0 = { -3616.59f, -2582.337f, -15.36345f };
					Var0.f_3 = 293.5222f;
					break;
				case 6:
					Var0 = { -3410.163f, -2637.948f, -11.47493f };
					Var0.f_3 = 128.2869f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3719.327f, -2606.142f, -14.8848f };
					Var0.f_3 = 272.1645f;
					break;
				case 1:
					Var0 = { -3682.832f, -2612.234f, -15.08433f };
					Var0.f_3 = 274.2034f;
					break;
				case 2:
					Var0 = { -3670.462f, -2610.878f, -15.08433f };
					Var0.f_3 = -88.1f;
					break;
				case 3:
					Var0 = { -3670.462f, -2610.878f, -15.08433f };
					Var0.f_3 = -88.1f;
					break;
				case 4:
					Var0 = { -3641.724f, -2610.919f, -14.77077f };
					Var0.f_3 = 336.5565f;
					break;
				case 5:
					Var0 = { -3611.936f, -2585.422f, -15.27707f };
					Var0.f_3 = 308.2005f;
					break;
				case 6:
					Var0 = { -3405.99f, -2641.833f, -11.27479f };
					Var0.f_3 = 187.8829f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
	}
	return Var0;
}

struct<4> func_706(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	switch (iParam2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3636.652f, -2598.193f, -14.89149f };
					Var0.f_3 = 152.9f;
					break;
				case 1:
					Var0 = { -3660.801f, -2606.935f, -14.91267f };
					Var0.f_3 = 110.3909f;
					break;
				case 2:
					Var0 = { -3669.229f, -2607.563f, -14.91703f };
					Var0.f_3 = 90.41f;
					break;
				case 3:
					Var0 = { -3669.229f, -2607.563f, -14.91703f };
					Var0.f_3 = 90.41f;
					break;
				case 4:
					Var0 = { -3706.208f, -2609.42f, -14.65479f };
					Var0.f_3 = 92.43f;
					break;
				case 5:
					Var0 = { -3723.322f, -2633.526f, -14.65892f };
					Var0.f_3 = 154.8195f;
					break;
				case 6:
					Var0 = { -3766.114f, -2694.87f, -15.82648f };
					Var0.f_3 = 79.63f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3637.72f, -2602.072f, -14.75652f };
					Var0.f_3 = 156.7f;
					break;
				case 1:
					Var0 = { -3663.466f, -2609.475f, -15.07889f };
					Var0.f_3 = 98.335f;
					break;
				case 2:
					Var0 = { -3670.251f, -2610.785f, -15.08363f };
					Var0.f_3 = 101.8443f;
					break;
				case 3:
					Var0 = { -3670.251f, -2610.785f, -15.08363f };
					Var0.f_3 = 101.8443f;
					break;
				case 4:
					Var0 = { -3705.435f, -2611.122f, -14.70859f };
					Var0.f_3 = 113.5222f;
					break;
				case 5:
					Var0 = { -3721.081f, -2633.508f, -14.79357f };
					Var0.f_3 = 146.8523f;
					break;
				case 6:
					Var0 = { -3772.483f, -2698.654f, -15.66331f };
					Var0.f_3 = 82.8686f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3631.575f, -2599.514f, -14.74189f };
					Var0.f_3 = 147.84f;
					break;
				case 1:
					Var0 = { -3658.623f, -2612.031f, -15.08432f };
					Var0.f_3 = 103.2818f;
					break;
				case 2:
					Var0 = { -3669.662f, -2612.832f, -15.08433f };
					Var0.f_3 = 156.5565f;
					break;
				case 3:
					Var0 = { -3669.662f, -2612.832f, -15.08433f };
					Var0.f_3 = 156.5565f;
					break;
				case 4:
					Var0 = { -3709.365f, -2617.743f, -14.98231f };
					Var0.f_3 = 128.2005f;
					break;
				case 5:
					Var0 = { -3718.576f, -2637.436f, -14.7405f };
					Var0.f_3 = 150.8911f;
					break;
				case 6:
					Var0 = { -3770.434f, -2694.221f, -15.75168f };
					Var0.f_3 = 85.8007f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
	}
	return Var0;
}

struct<4> func_707(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3645.361f, -2669.37f, -15.11856f };
					Var0.f_3 = -17.51f;
					break;
				case 1:
					Var0 = { -3628.496f, -2630.925f, -14.38403f };
					Var0.f_3 = -14.72f;
					break;
				case 2:
				case 3:
					Var0 = { -3629.03f, -2615.19f, -14.73211f };
					Var0.f_3 = 18.79f;
					break;
				case 4:
					Var0 = { -3633.71f, -2603.077f, -14.73237f };
					Var0.f_3 = -2.81f;
					break;
				case 5:
					Var0 = { -3620.035f, -2582.865f, -15.31672f };
					Var0.f_3 = -72.95f;
					break;
				case 6:
					Var0 = { -3548.689f, -2599.27f, -14.42358f };
					Var0.f_3 = -101.84f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3645.83f, -2665.958f, -15.11796f };
					Var0.f_3 = -2.63f;
					break;
				case 1:
					Var0 = { -3630.161f, -2630.855f, -14.61116f };
					Var0.f_3 = -6.36f;
					break;
				case 2:
				case 3:
					Var0 = { -3630.827f, -2616.459f, -14.73267f };
					Var0.f_3 = 23.4f;
					break;
				case 4:
					Var0 = { -3636.158f, -2605.441f, -14.73405f };
					Var0.f_3 = 8.04f;
					break;
				case 5:
					Var0 = { -3622.567f, -2581.614f, -15.14112f };
					Var0.f_3 = -63.75f;
					break;
				case 6:
					Var0 = { -3551.108f, -2595.883f, -14.39602f };
					Var0.f_3 = -110.88f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3641.413f, -2668.844f, -14.88426f };
					Var0.f_3 = -11.17f;
					break;
				case 1:
					Var0 = { -3626.518f, -2631.507f, -14.14345f };
					Var0.f_3 = -26.12f;
					break;
				case 2:
				case 3:
					Var0 = { -3625.353f, -2617.225f, -14.77303f };
					Var0.f_3 = 20.57f;
					break;
				case 4:
					Var0 = { -3632.068f, -2601.178f, -14.73235f };
					Var0.f_3 = -12.87f;
					break;
				case 5:
					Var0 = { -3619.117f, -2585.67f, -15.33138f };
					Var0.f_3 = -62.88f;
					break;
				case 6:
					Var0 = { -3553.81f, -2600.714f, -14.26738f };
					Var0.f_3 = -106.81f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
	}
	return Var0;
}

struct<4> func_708(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3610.45f, -2583.545f, -15.36899f };
					Var0.f_3 = 100.5f;
					break;
				case 1:
					Var0 = { -3632.521f, -2607.936f, -14.73244f };
					Var0.f_3 = -167.19f;
					break;
				case 2:
					Var0 = { -3629.545f, -2615.988f, -14.73202f };
					Var0.f_3 = -155.87f;
					break;
				case 3:
					Var0 = { -3629.545f, -2615.988f, -14.73202f };
					Var0.f_3 = -155.87f;
					break;
				case 4:
					Var0 = { -3638.188f, -2636.521f, -15.01623f };
					Var0.f_3 = 158.01f;
					break;
				case 5:
					Var0 = { -3646.136f, -2671.688f, -15.15827f };
					Var0.f_3 = 139.85f;
					break;
				case 6:
					Var0 = { -3678.85f, -2746.923f, -14.83856f };
					Var0.f_3 = 177.29f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3609.451f, -2585.26f, -15.28702f };
					Var0.f_3 = 105.71f;
					break;
				case 1:
					Var0 = { -3630.604f, -2606.297f, -14.73316f };
					Var0.f_3 = -151f;
					break;
				case 2:
					Var0 = { -3627.365f, -2612.714f, -14.78196f };
					Var0.f_3 = -155.56f;
					break;
				case 3:
					Var0 = { -3627.365f, -2612.714f, -14.78196f };
					Var0.f_3 = -155.56f;
					break;
				case 4:
					Var0 = { -3635.739f, -2637.53f, -14.92204f };
					Var0.f_3 = 158f;
					break;
				case 5:
					Var0 = { -3642.892f, -2672.188f, -15.11337f };
					Var0.f_3 = 152.95f;
					break;
				case 6:
					Var0 = { -3676.125f, -2743.92f, -14.94805f };
					Var0.f_3 = -170.99f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3609.383f, -2580.391f, -15.27485f };
					Var0.f_3 = 99.12f;
					break;
				case 1:
					Var0 = { -3635.721f, -2608.351f, -14.73863f };
					Var0.f_3 = -150.25f;
					break;
				case 2:
					Var0 = { -3632.265f, -2614.643f, -14.73735f };
					Var0.f_3 = -155.03f;
					break;
				case 3:
					Var0 = { -3632.265f, -2614.643f, -14.73735f };
					Var0.f_3 = -155.03f;
					break;
				case 4:
					Var0 = { -3640.3f, -2633.997f, -14.93052f };
					Var0.f_3 = 155.83f;
					break;
				case 5:
					Var0 = { -3646.753f, -2667.126f, -15.11452f };
					Var0.f_3 = 161.09f;
					break;
				case 6:
					Var0 = { -3680.931f, -2740.431f, -14.67035f };
					Var0.f_3 = 169.4f;
					break;
				case 7:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
	}
	return Var0;
}

int func_709()
{
	switch (Local_14.f_3)
	{
		case 0:
			__LIB_0__::func_613(&Local_14, 1);
			break;
		case 1:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V1_ENTER"), "RE_RETT_ARM_V1_ENTER", __LIB_1__::func_976(&Local_14), 1067030938 /* Float: 1.2f */, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V1_ENTER", 0, 1744022339, 100f, 0, 1);
				__LIB_2__::func_315(1891783641, Local_14.f_239[0], 1);
				__LIB_0__::func_613(&Local_14, 2);
			}
			break;
		case 2:
			if (Local_14.f_634 == 1)
			{
				__LIB_0__::func_613(&Local_14, 7);
			}
			else if (__LIB_2__::func_448(Local_14.f_239[1], joaat("RE_RETT_ARM_V1_HEY_AMIGO"), "RE_RETT_ARM_V1_HEY_AMIGO", __LIB_1__::func_976(&Local_14), 1067030938 /* Float: 1.2f */, 1))
			{
				func_88(Local_14.f_239[1], Global_35, "RE_RETT_ARM_V1_HEY_AMIGO", 0, 1744022339, 100f, 0, 1);
				__LIB_2__::func_315(1891783641, Local_14.f_239[1], 1);
				__LIB_0__::func_613(&Local_14, 7);
			}
			break;
		case 7:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V1_SPEECH_A"), "RE_RETT_ARM_V1_SPEECH_A", __LIB_1__::func_976(&Local_14), 1067030938 /* Float: 1.2f */, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V1_SPEECH_A", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 8);
			}
			break;
		case 8:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V1_SPEECH_B"), "RE_RETT_ARM_V1_SPEECH_B", __LIB_1__::func_976(&Local_14), 1067030938 /* Float: 1.2f */, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V1_SPEECH_B", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 9);
			}
			break;
		case 9:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V1_SPEECH_C"), "RE_RETT_ARM_V1_SPEECH_C", __LIB_1__::func_976(&Local_14), 1067030938 /* Float: 1.2f */, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V1_SPEECH_C", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 10);
			}
			break;
		case 10:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V1_SPEECH_D"), "RE_RETT_ARM_V1_SPEECH_D", __LIB_1__::func_976(&Local_14), 1067030938 /* Float: 1.2f */, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V1_SPEECH_D", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 11);
			}
			break;
		case 11:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RETT_ARM_V1_EXIT"), "RETT_ARM_V1_EXIT", __LIB_1__::func_976(&Local_14), 1067030938 /* Float: 1.2f */, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V1_EXIT", 0, 1744022339, 100f, 0, 1);
				if (func_84(&Local_14, 1024))
				{
					if (Local_14.f_636 != -1)
					{
						Local_14.f_636 = -1;
					}
					func_741();
					func_438(&Local_14, 1024);
				}
				__LIB_0__::func_613(&Local_14, 14);
			}
			break;
		case 14:
			return 1;
	}
	return 0;
}

int func_710()
{
	float fVar0;
	fVar0 = 1.3f;
	switch (Local_14.f_3)
	{
		case 0:
			__LIB_0__::func_613(&Local_14, 1);
			break;
		case 1:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V2_ENTER"), "RE_RETT_ARM_V2_ENTER", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V2_ENTER", 0, 291934926, 100f, 0, 1);
				__LIB_2__::func_315(1891783641, Local_14.f_239[0], 1);
				__LIB_0__::func_613(&Local_14, 3);
			}
			break;
		case 3:
			if (Local_14.f_634 == 1)
			{
				__LIB_0__::func_613(&Local_14, 4);
			}
			else if (__LIB_2__::func_448(Local_14.f_239[1], joaat("RE_RETT_ARM_V2_INTRO_A"), "RE_RETT_ARM_V2_INTRO_A", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[1], Global_35, "RE_RETT_ARM_V2_INTRO_A", 0, 1744022339, 100f, 0, 1);
				__LIB_2__::func_315(1891783641, Local_14.f_239[1], 1);
				__LIB_0__::func_613(&Local_14, 4);
			}
			break;
		case 4:
			if (Local_14.f_634 == 2)
			{
				__LIB_0__::func_613(&Local_14, 5);
			}
			else if (__LIB_2__::func_448(Local_14.f_239[2], joaat("RE_RETT_ARM_V2_INTRO_B"), "RE_RETT_ARM_V2_INTRO_B", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[2], Global_35, "RE_RETT_ARM_V2_INTRO_B", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 5);
			}
			break;
		case 5:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V2_INTRO_C"), "RE_RETT_ARM_V2_INTRO_C", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V2_INTRO_C", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 6);
			}
			break;
		case 6:
			if (__LIB_2__::func_448(Local_14.f_239[1], joaat("RE_RETT_ARM_V2_INTRO_D"), "RE_RETT_ARM_V2_INTRO_D", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[1], Global_35, "RE_RETT_ARM_V2_INTRO_D", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 7);
			}
			break;
		case 7:
			if (__LIB_2__::func_448(Local_14.f_239[1], joaat("RE_RETT_ARM_V2_SPEECH_A"), "RE_RETT_ARM_V2_SPEECH_A", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[1], Global_35, "RE_RETT_ARM_V2_SPEECH_A", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 8);
			}
			break;
		case 8:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V2_SPEECH_B"), "RE_RETT_ARM_V2_SPEECH_B", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V2_SPEECH_B", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 9);
			}
			break;
		case 9:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V2_SPEECH_C"), "RE_RETT_ARM_V2_SPEECH_C", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V2_SPEECH_C", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 10);
			}
			break;
		case 10:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V2_SPEECH_D"), "RE_RETT_ARM_V2_SPEECH_D", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V2_SPEECH_D", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 11);
			}
			break;
		case 11:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V2_EXIT_A"), "RE_RETT_ARM_V2_EXIT_A", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V2_EXIT_A", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 12);
			}
			break;
		case 12:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V2_EXIT_B"), "RE_RETT_ARM_V2_EXIT_B", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V2_EXIT_B", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 13);
			}
			break;
		case 13:
			if (__LIB_2__::func_448(Local_14.f_239[0], joaat("RE_RETT_ARM_V2_EXIT_C"), "RE_RETT_ARM_V2_EXIT_C", __LIB_1__::func_976(&Local_14), fVar0, 1))
			{
				func_88(Local_14.f_239[0], Global_35, "RE_RETT_ARM_V2_EXIT_C", 0, 1744022339, 100f, 0, 1);
				__LIB_0__::func_613(&Local_14, 14);
			}
			break;
		case 14:
			if (func_84(&Local_14, 1024))
			{
				func_741();
				if (Local_14.f_636 != -1)
				{
					Local_14.f_636 = -1;
				}
				func_438(&Local_14, 1024);
			}
			return 1;
	}
	return 0;
}

void func_741()
{
	if (!func_86(&Local_14, 8192))
	{
		func_93(&Local_14, 4);
		__LIB_2__::func_411(&(Local_14.f_464[0 /*56*/].f_21[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_14.f_464[1 /*56*/].f_21[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_14.f_464[2 /*56*/].f_21[0 /*17*/]), 0, 0);
		Local_14.f_464[0 /*56*/].f_21[1 /*17*/].f_13 = func_417(&Local_14);
		Local_14.f_464[1 /*56*/].f_21[1 /*17*/].f_13 = func_417(&Local_14);
		Local_14.f_464[2 /*56*/].f_21[1 /*17*/].f_13 = func_417(&Local_14);
		func_420(0, 0);
		func_420(1, 0);
		func_420(2, 1);
	}
}

