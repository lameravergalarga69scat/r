void func_0(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (iParam4 == 1)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
	}
	if (iParam5 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
	}
	if (iParam8 == 1)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
	}
	if (!__LIB_0__::func_163(*uParam0, 780511057))
	{
		TASK::TASK_COMBAT_PED(*uParam0, *uParam1, iParam2, iParam3);
	}
	PED::SET_PED_KEEP_TASK(*uParam0, bParam7);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam6);
}

bool func_1(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 1))
		{
			return true;
		}
	}
	return false;
}

void func_2(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, __LIB_12__::func_492(uParam0, __LIB_12__::func_767(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		__LIB_1__::func_164(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_3(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 2048))
	{
		return;
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		__LIB_12__::func_912(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 512))
		{
			__LIB_12__::func_742(uParam0, 0);
		}
	}
	__LIB_0__::func_8(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (__LIB_11__::func_394(Global_35))
		{
			if (__LIB_12__::func_771())
			{
				__LIB_1__::func_240(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_7(&(uParam0->f_172), 2048);
}

bool func_4(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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

void func_5(var uParam0, int iParam1, bool bParam2)
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
	__LIB_1__::func_148(&(uParam0->f_1765));
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

bool func_6(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!__LIB_12__::func_921(uParam0))
		{
			return false;
		}
	}
	return true;
}

void func_7(int iParam0, vector3 vParam1, float fParam4)
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
		__LIB_11__::func_382(iParam0, 0);
		__LIB_9__::func_240(iParam0, vParam1, 1, 0);
	}
}

void func_8(int iParam0)
{
	__LIB_12__::func_931();
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

void func_9(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_10(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_12__::func_790(iParam0);
}

void func_11(int iParam0)
{
	_NAMESPACE29::_0x0EABF182FBB63D72(iParam0, 6, 1);
}

void func_12(int iParam0, int iParam1)
{
	PED::_0x6569F31A01B4C097(iParam0, 1, iParam1);
	PED::_0x6569F31A01B4C097(iParam0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iParam0, 4, iParam1);
}

void func_13(int* iParam0, int iParam1)
{
	__LIB_2__::func_608(&(iParam0->f_22));
	iParam0->f_25 = iParam1;
}

bool func_14(var uParam0, bool bParam1)
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
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "ExportCamera") && bParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_348))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

void func_15(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	iVar0 = __LIB_12__::func_971(&(uParam0->f_117), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_12__::func_976(&(uParam0->f_117));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_117[iVar0 /*5*/] = cParam1;
	uParam0->f_117[iVar0 /*5*/].f_1 = iParam2;
	uParam0->f_117[iVar0 /*5*/].f_2 = iParam3;
	uParam0->f_117[iVar0 /*5*/].f_4 = (uParam0->f_117[iVar0 /*5*/].f_4 || iParam4);
	if (__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 8192);
	}
}

void func_16(var uParam0, int iParam1)
{
	__LIB_12__::func_977(&(uParam0->f_206), iParam1);
}

void func_17(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (__LIB_12__::func_972(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_366[iVar0 /*9*/])))
		{
			if (!__LIB_12__::func_978(uParam0, sParam1) || __LIB_0__::func_84(uParam0, 8388608))
			{
				StringCopy(&(uParam0->f_366[iVar0 /*9*/]), sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_348, true, false))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, sParam1);
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

void func_18(var uParam0, char* sParam1, var uParam2)
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
	__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
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

void func_19(int iParam0, int iParam1)
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
	__LIB_11__::func_598(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		__LIB_3__::func_28(iParam0, 0);
	}
	__LIB_3__::func_110(iParam0);
	__LIB_3__::func_96(iParam0, iParam1);
	__LIB_6__::func_737(iParam0);
	__LIB_3__::func_97(iParam0);
}

bool func_20(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	struct<11> Var4;
	int iVar15;
	int iVar16;
	if (!__LIB_12__::func_639(uParam0, 16))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2572))
		{
			return false;
		}
		vVar0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		if (!__LIB_12__::func_941(uParam0, &vVar0, &fVar3))
		{
			__LIB_12__::func_638(uParam0, 16);
			return true;
		}
		else
		{
			Var4.f_10 = 7;
			Var4 = 0;
			Var4.f_1 = 0;
			Var4.f_6 = vVar0.x;
			Var4.f_6.f_1 = vVar0.y;
			Var4.f_6.f_2 = vVar0.z;
			Var4.f_9 = fVar3;
			Var4.f_10 = 1;
			iVar15 = 0;
			iVar16 = __LIB_4__::func_720(&iVar15, &Var4);
			if (iVar15 == 0)
			{
				return false;
			}
			else
			{
				__LIB_12__::func_638(uParam0, 16);
				if (iVar15 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar16))
				{
					if (iVar16 == uParam0->f_2572)
					{
					}
					else if (__LIB_0__::func_48(iVar16, uParam0->f_2572, 5f, 1))
					{
						if (__LIB_0__::func_126(iVar16))
						{
							PHYSICS::_0x0348469DAA17576C(iVar16);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar16, false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar16, vVar0, fVar3, true, false, true);
						ENTITY::_0x9587913B9E772D29(iVar16, 0);
					}
				}
			}
		}
	}
	return true;
}

void func_21(int iParam0)
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
			__LIB_8__::func_368();
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

int func_22(var uParam0)
{
	return uParam0->f_170;
}

bool func_23(var uParam0, char* sParam1)
{
	return MISC::_DOES_STRING_EXIST_IN_STRING(&(uParam0->f_344), sParam1);
}

bool func_24(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;
	if (iParam2 == -1)
	{
		if (__LIB_12__::func_682(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
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
		*uParam5 = *iParam4;
	}
	if (__LIB_12__::func_682(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (__LIB_12__::func_682(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*uParam5 == 1 || *uParam5 == 3)
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

void func_25(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		PED::_0xEEED8FAFEC331A70(*uParam0, ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 1);
	}
	else if (iParam6 == 1)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
	}
	if (iParam7 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
	}
	if (iParam11 == -1)
	{
		iVar0 = 33346;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, false);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam11, false);
	}
	if (iParam10 == -1)
	{
		iVar0 = 0;
		iVar0 = 132;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, true);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam10, true);
	}
	if (!__LIB_0__::func_163(*uParam0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(*uParam0, *uParam1, iParam2, iParam3, iParam4, iParam5, 0);
	}
	PED::SET_PED_KEEP_TASK(*uParam0, bParam9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam8);
}

void func_26(var uParam0)
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
					__LIB_2__::func_813(&(uParam0->f_1667), uParam0->f_912[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_912[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

int func_27(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
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
	if (!__LIB_12__::func_752(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, sParam2))
		{
			__LIB_12__::func_757(uParam0, iParam1, 4);
			return 1;
		}
		else if (iParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, sParam2))
		{
			__LIB_12__::func_757(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

void func_28(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
	bVar0 = __LIB_12__::func_741(uParam0);
	if (!bVar0)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (__LIB_12__::func_738(uParam0))
			{
				bVar1 = false;
			}
			else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (__LIB_13__::func_4(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				__LIB_0__::func_11(uParam0);
				__LIB_0__::func_7(&(uParam0->f_172), 1);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 1);
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
}

void func_29(var uParam0, bool bParam1)
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
	__LIB_12__::func_998(&(uParam0->f_206));
	__LIB_12__::func_926(uParam0);
}

int func_30(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_371[iParam1 /*18*/];
		fVar3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
		fVar4 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1;
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
				if (!__LIB_12__::func_728(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!__LIB_12__::func_655(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					__LIB_12__::func_774(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_693(uParam0, 131072);
					__LIB_12__::func_774(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				__LIB_12__::func_774(uParam0, 5);
			}
			else
			{
				__LIB_12__::func_879(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_0__::func_264(&(uParam0->f_1765)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_12__::func_879(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_12__::func_879(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_12__::func_879(uParam0);
				}
				else
				{
					__LIB_13__::func_5(uParam0, iParam1, bParam2);
					__LIB_1__::func_148(&(uParam0->f_1765));
					__LIB_12__::func_774(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_12__::func_774(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_5__::func_386(uParam0->f_1799, 0);
				}
			}
			__LIB_1__::func_148(&(uParam0->f_1765));
			__LIB_12__::func_774(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_12__::func_774(uParam0, 10);
				}
				else
				{
					__LIB_12__::func_774(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_12__::func_774(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_12__::func_774(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_264(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!__LIB_12__::func_655(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_774(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

bool func_31(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return (iVar0 > -1 && iVar0 < 10);
}

bool func_32(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 3);
}

void func_33(var uParam0, int iParam1)
{
	uParam0->f_170 = iParam1;
}

int func_34(var uParam0)
{
	if (!__LIB_0__::func_899(uParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_901(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_35(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		PED::_0xEEED8FAFEC331A70(*uParam0, ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 1);
	}
	else if (iParam6 == 1)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
	}
	if (iParam7 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
	}
	if (iParam11 == -1)
	{
		iVar0 = 33346;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, false);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam11, false);
	}
	if (iParam10 == -1)
	{
		iVar0 = 0;
		iVar0 = 132;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, true);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam10, true);
	}
	if (!__LIB_0__::func_163(*uParam0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(*uParam0, *uParam1, fParam2, iParam3, iParam4, fParam5, 0);
	}
	PED::SET_PED_KEEP_TASK(*uParam0, bParam9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam8);
}

void func_36(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	__LIB_12__::func_841(uParam0);
	uParam0->f_4 = iParam1;
	__LIB_1__::func_737(uParam0, iParam2, iParam3, iParam4, iParam5);
}

void func_37(var uParam0)
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
		__LIB_12__::func_984(uParam0, 1);
	}
	else if ((!__LIB_12__::func_692(uParam0, uParam0->f_1580) && !__LIB_12__::func_695(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		__LIB_12__::func_984(uParam0, 3);
	}
	else
	{
		__LIB_12__::func_984(uParam0, 6);
	}
}

int func_38(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
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
	if (!__LIB_12__::func_752(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, sParam2))
		{
			__LIB_12__::func_757(uParam0, iParam1, 4);
			return 1;
		}
		else if (bParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, sParam2))
		{
			__LIB_12__::func_757(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

bool func_39(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
				if (__LIB_13__::func_24(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
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

bool func_40(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		__LIB_12__::func_975(uParam0);
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
				__LIB_12__::func_975(uParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_41(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_12__::func_655(uParam0, 512))
	{
		return;
	}
	if (__LIB_9__::func_178(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

void func_42(var uParam0)
{
	uParam0->f_1581 = -1;
	__LIB_12__::func_691(uParam0, 0);
	__LIB_0__::func_115(uParam0, 3);
	__LIB_12__::func_984(uParam0, 0);
	__LIB_1__::func_561(&(uParam0->f_1765));
	__LIB_12__::func_860(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1768));
}

bool func_43(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_12__::func_985(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_44(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return __LIB_3__::func_516(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_45(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
				if (__LIB_10__::func_555(iParam0, iParam1, uParam2))
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
				if (__LIB_10__::func_556(iParam0, uParam2))
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

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_12__::func_891(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_47(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	__LIB_12__::func_991(iParam0, 0);
	__LIB_12__::func_985(iParam0, uParam1, 1);
	__LIB_2__::func_480(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_48(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
		if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_12__::func_893(iVar3, 1, 1, 1, 1, 1);
	__LIB_1__::func_452(31, 0, 0, 0, 0);
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
			__LIB_1__::func_452(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_49(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		__LIB_11__::func_855();
		iVar0++;
	}
	__LIB_1__::func_452(9, 0, 0, 0, 0);
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_4__::func_605(iVar0) >= iParam1)
			{
			}
			else
			{
				__LIB_11__::func_854(iVar0, iParam1 > 7);
			}
			iVar0++;
		}
		iVar1++;
	}
	__LIB_1__::func_452(10, 0, 0, 0, 0);
}

bool func_51(int* iParam0)
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
			__LIB_4__::func_89(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_10__::func_250())
			{
			}
		}
		else
		{
			__LIB_4__::func_89(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_9__::func_178(&(iParam0->f_37)) >= 1.5f;
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

void func_52(var uParam0)
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
		__LIB_13__::func_7(uParam0->f_174, vVar0, fVar3);
		__LIB_12__::func_621(uParam0->f_174);
		__LIB_12__::func_622(uParam0->f_174);
	}
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 7;
	}
	return -1;
}

void func_54(float fParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	iVar1 = BUILTIN::FLOOR((255f * __LIB_0__::func_251(fParam1, 0f, 1f)));
	PAD::SET_PAD_SHAKE(0, iVar0, iVar1);
}

void func_55(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_12__::func_796(uParam0, sParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_12__::func_843(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	(*uParam0)[iVar0 /*3*/] = sParam1;
	(uParam0[iVar0 /*3*/])->f_2 = ((uParam0[iVar0 /*3*/])->f_2 || iParam2);
	if (__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 8192);
	}
}

void func_56(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_12__::func_752(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_348))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
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
	if (__LIB_0__::func_1(uParam0->f_405, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		__LIB_1__::func_625();
	}
}

int func_57(var uParam0, int iParam1)
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
		__LIB_1__::func_625();
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

bool func_58(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
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
				Global_1360165[iParam0 /*1157*/].f_124 = __LIB_8__::func_931(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_13__::func_46(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_60(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_61(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 4) && uParam0->f_371[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_371[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 64) && __LIB_12__::func_727(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_371[iParam1 /*18*/].f_3 >= 0 && uParam0->f_371[iParam1 /*18*/].f_5 >= 0) && uParam0->f_371[iParam1 /*18*/].f_3 != uParam0->f_371[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_13__::func_30(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_62(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
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
	__LIB_5__::func_390(Global_1347702[uParam0->f_174 /*49*/].f_15, Var0, Var4, iParam9, iParam10);
}

void func_63(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_13__::func_10(50);
			}
			else
			{
				__LIB_13__::func_10(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_13__::func_10(51);
			}
			else
			{
				__LIB_13__::func_10(49);
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
			__LIB_13__::func_10(24);
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

bool func_64(int iParam0, float fParam1, float fParam2)
{
	return (ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0) >= fParam1 && ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0) <= __LIB_0__::func_514(fParam2 < 0f, ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0), fParam2));
}

void func_65(int iParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2504.735f, -1308.831f, 49.06328f, 0f, 0f, 0f, 22.43624f, 17.01578f, 3.468709f, "SD Sheriff Office");
			break;
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry Sheriff Office");
			VOLUME::_0x39816F6F94F385AD(*uParam1, -1810.522f, -349.3201f, 163.474f, 0f, 0f, -25.06604f, 7.327408f, 6.633123f, 6.036f);
			VOLUME::_0x39816F6F94F385AD(*uParam1, -1813.445f, -353.8168f, 163.474f, 0f, 0f, -25.06604f, 5.841297f, 4.267593f, 6.036f);
			break;
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine Sheriff Office");
			VOLUME::_0x39816F6F94F385AD(*uParam1, -272.9176f, 809.1227f, 119.4f, 0f, 0f, -80.06616f, 6.765059f, 4.518183f, 3f);
			VOLUME::_0x39816F6F94F385AD(*uParam1, -277.2155f, 807.0856f, 119.8f, 0f, 0f, -79.7f, 9.130634f, 5.028743f, 2.8f);
			break;
		case 78:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.428f, 1312.199f, 45.46901f, 0f, 0f, -21.08204f, 10.47463f, 7.642887f, 2.791512f, "Annesburg Sheriff Office");
			break;
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes Sheriff Office");
			VOLUME::_0x39816F6F94F385AD(*uParam1, 1355.464f, -1302.104f, 77.52525f, 0f, 0f, -20.36115f, 3.923681f, 4.045318f, 2.635184f);
			VOLUME::_0x39816F6F94F385AD(*uParam1, 1360.674f, -1301.562f, 77.52525f, 0f, 0f, -20.30303f, 5.747039f, 8.956645f, 2.635184f);
			break;
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater Sheriff Office");
			VOLUME::_0x39816F6F94F385AD(*uParam1, -763.0246f, -1269.283f, 43.6176f, 0f, 0f, 0f, 12.03637f, 8.528987f, 5.107259f);
			VOLUME::_0x39816F6F94F385AD(*uParam1, -764.7173f, -1263.493f, 43.76242f, 0f, 0f, 0f, 7.664316f, 3.774002f, 5.107259f);
			break;
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5529.529f, -2927.852f, -1.033f, 0f, 0f, 25f, 6.7f, 6.3f, 3f, "Tumbleweed Sheriff Office");
			break;
		default:
			break;
	}
}

void func_66(int iParam0)
{
	__LIB_1__::func_532(Global_1347702[iParam0 /*49*/].f_15, 0);
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar3 /*4*/] == iParam0)
		{
			iVar2++;
			if (Global_40.f_9829[iVar3 /*4*/].f_1 == iParam1)
			{
			}
			else
			{
				iVar3++;
			}
			if (iVar2 == -1)
			{
				return 0;
			}
			iVar0 = __LIB_4__::func_413(iParam0, iVar2);
			iVar1 = __LIB_3__::func_655(iParam0, iVar2);
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, iParam1);
			__LIB_1__::func_940(iVar1, 0);
			if (__LIB_2__::func_987(iVar1, 0, 0, 0, 0, 0))
			{
				return __LIB_1__::func_334(iVar1);
			}
			return 0;
		}
	}
}

void func_68(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		__LIB_0__::func_11(uParam0);
	}
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		__LIB_8__::func_992(iParam0);
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1024))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
	}
	if (iParam1 == 1)
	{
		__LIB_9__::func_830(iParam0, 0);
	}
	__LIB_8__::func_993(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1347702[iParam0 /*49*/].f_42, iParam4);
		}
		else
		{
			Global_1347702[iParam0 /*49*/].f_43 = 0;
		}
	}
}

void func_70(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_13__::func_30(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

int func_71(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!__LIB_0__::func_272(*iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_72(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_13__::func_21(iParam0);
}

Vector3 func_73(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2923.161f, 1302.759f, 43.3501f;
		case 5:
			return 2528.41f, -1308.88f, 48.19f;
		case 105:
			return 1354.65f, -1315.54f, 75.75f;
		case 26:
			return -1799.43f, -356.2149f, 162.9841f;
		case 76:
			return -271.9088f, 791.6821f, 117.6676f;
		case 38:
			return -773.3978f, -1253.848f, 42.4872f;
		case 115:
			return -5525.97f, -2941.024f, -2.8331f;
	}
	return 0f, 0f, 0f;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PED::_0x6569F31A01B4C097(iVar0, 5, iParam1);
		}
	}
}

void func_75(int iParam0)
{
	if (iLocal_16 != iParam0)
	{
		iLocal_16 = iParam0;
	}
}

bool func_76()
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_proc@bounty@riding_punch", "punch_player", 1))
	{
		return true;
	}
	return false;
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return "BNTY_NME_DL";
		case 13:
			return "BNTY_NME_RH";
		case 153:
			return "BNTY_NME_SL";
		case 12:
			return "BNTY_NME_EC";
		case 14:
			return "BNTY_NME_WL";
		case 154:
			return "BNTY_NME_CR";
		case 17:
			return "BNTY_NME_SB";
		case 18:
			return "BNTY_NME_SS";
		case 15:
			return "BNTY_NME_SE";
		case 155:
			return "BNTY_NME_BH";
		case 16:
			return "BNTY_NME_SD";
		case 19:
			return "BNTY_NME_BS";
		case 20:
			return "BNTY_NME_BM";
	}
	return "BNTY_NME_GU";
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 76;
		case 11:
			return 26;
		case 153:
			return 26;
		case 13:
			return 105;
		case 15:
			return 105;
		case 154:
			return 105;
		case 12:
			return 5;
		case 16:
			return 5;
		case 17:
			return 38;
		case 18:
			return 38;
		case 155:
			return 38;
		case 19:
			return 115;
		case 20:
			return 115;
		default:
			return 76;
	}
	return -1;
}

bool func_79(vector3 vParam0, float fParam3)
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (__LIB_0__::func_94(Global_35, vParam0, 0) < fParam3)
	{
		return true;
	}
	return false;
}

int func_80(int iParam0, char* sParam1, int iParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, fParam3, fParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0) || WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return true;
	}
	return false;
}

float func_82(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_306))
	{
		if (__LIB_2__::func_157(uParam0->f_306, Global_36) || __LIB_10__::func_53(uParam0->f_300, 0, 1))
		{
			return 0f;
		}
	}
	return 1000f;
}

void func_83(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(*iParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 4, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 278, false);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 305, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 306, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 21, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 314, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 466, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 326, true);
	ENTITY::_0x18FF3110CF47115D(*iParam0, 16, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 24, false);
	PED::_0x2E5B5D1F1453E08E(*iParam0, 1);
	MISC::_0x7FA58CED69405F9A(*iParam0, 3);
	HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(*iParam0);
	__LIB_1__::func_991(*iParam0, 0);
}

bool func_84(vector3 vParam0, float fParam3, float fParam4)
{
	if (fParam4 + fParam3) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), true)
	{
		return false;
	}
	return CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
}

bool func_85(int iParam0, char[4] cParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = cParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

Vector3 func_86(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	if ((vParam0.x == 0f && vParam0.y == 0f) || (vParam3.x == 0f && vParam3.y == 0f))
	{
		return 0f, 0f, vParam0.z;
	}
	fVar0 = BUILTIN::SQRT(((vParam3.x * vParam3.x) + (vParam3.y * vParam3.y)));
	fVar1 = __LIB_2__::func_977(vParam0, vParam3);
	fVar0 = (fVar1 / fVar0);
	vParam3.x = (vParam3.x * fVar0);
	vParam3.f_1 = (vParam3.y * fVar0);
	vParam3.f_2 = vParam0.z;
	return vParam3;
}

void func_87(var uParam0)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_10__::func_142(uParam0->f_174, 2);
	}
}

bool func_88(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_139(uParam0->f_375.f_1))
	{
		if (__LIB_0__::func_396(Global_35) && PED::_IS_PED_HOGTIED(uParam0->f_67))
		{
			if (PED::_GET_CARRIER_AS_MOUNT(uParam0->f_67) == __LIB_2__::func_825(Global_35) && __LIB_0__::func_265(&(uParam0->f_375.f_3)) > fParam1)
			{
				uParam0->f_375.f_1 = __LIB_2__::func_403("BNTY_HIT", joaat("INPUT_INTERACT_HIT_CARRIABLE"), Global_35, 2, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				uParam0->f_375.f_2 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_67, 5f, 2, 1, 0, 0, 0);
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam0->f_375.f_1), uParam0->f_375.f_2, 0);
			}
		}
	}
	else if ((!__LIB_0__::func_396(Global_35) || !PED::_IS_PED_HOGTIED(uParam0->f_67)) || PED::_GET_CARRIER_AS_MOUNT(uParam0->f_67) != __LIB_2__::func_825(Global_35))
	{
		__LIB_1__::func_748(&(uParam0->f_375.f_1), 1, 1);
	}
	else if (__LIB_1__::func_514(uParam0->f_375.f_1, 1))
	{
		if (__LIB_0__::func_396(Global_35) && PED::_IS_PED_HOGTIED(uParam0->f_67))
		{
			if (PED::_GET_CARRIER_AS_MOUNT(uParam0->f_67) == __LIB_2__::func_825(Global_35))
			{
				if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
					return true;
				}
			}
		}
	}
	else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		__LIB_1__::func_221(uParam0->f_375.f_1, 0, 1);
	}
	else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_67))
	{
		__LIB_1__::func_221(uParam0->f_375.f_1, 1, 1);
	}
	return false;
}

void func_89(var uParam0, char* sParam1, bool bParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	__LIB_12__::func_772(uParam0->f_174, sParam1, bParam2, fParam3, sParam4, sParam5, sParam6, sParam7, iParam8);
}

bool func_90(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_283(uParam0, 0);
	}
	if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
	{
		return true;
	}
	if (__LIB_0__::func_265(uParam0) > 15f)
	{
		return true;
	}
	return false;
}

void func_91(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_181())
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", bParam1);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", bParam1);
	}
}

void func_92(var uParam0)
{
	if (uParam0->f_375 > 0 && STREAMING::HAS_ANIM_DICT_LOADED("script_proc@bounty@riding_punch"))
	{
		STREAMING::REMOVE_ANIM_DICT("script_proc@bounty@riding_punch");
	}
	if (__LIB_0__::func_139(uParam0->f_375.f_1))
	{
		__LIB_1__::func_748(&(uParam0->f_375.f_1), 1, 1);
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

void func_93(var uParam0, bool bParam1)
{
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	__LIB_13__::func_65(uParam0->f_300, &(uParam0->f_306));
	__LIB_10__::func_100(uParam0->f_300, &(uParam0->f_307));
	__LIB_10__::func_101(uParam0->f_300, &(uParam0->f_305));
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_306, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_306, 0, 0, 0, -1, -1, 2);
	__LIB_10__::func_194(uParam0, bParam1);
}

float func_94()
{
	int iVar0;
	if (__LIB_11__::func_608())
	{
		iVar0 = CAM::GET_RENDERING_CAM();
		if (CAM::DOES_CAM_EXIST(iVar0))
		{
			return CAM::GET_CAM_FOV(iVar0);
		}
	}
	return CAM::GET_GAMEPLAY_CAM_FOV();
}

bool func_95(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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

bool func_96(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	Var4 = __LIB_0__::func_790(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		__LIB_0__::func_947(uParam0, __LIB_0__::func_461(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = __LIB_0__::func_161(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (__LIB_0__::func_948(iVar3) && __LIB_0__::func_220(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							__LIB_11__::func_573(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

bool func_97(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_1__::func_615(iParam0, 1, 0) };
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
	__LIB_11__::func_573(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
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

void func_98(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if ((__LIB_0__::func_1(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 256);
			__LIB_3__::func_319(uParam0->f_751);
			__LIB_13__::func_68(uParam0);
		}
		else
		{
			__LIB_12__::func_838(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (__LIB_12__::func_882(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 16))
			{
				cVar0 = { __LIB_0__::func_134() };
				Var8 = { __LIB_12__::func_665(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					__LIB_12__::func_909(&(uParam0->f_206));
					__LIB_12__::func_839(&(uParam0->f_206), &cVar0);
				}
			}
			__LIB_0__::func_7(&(uParam0->f_172), 256);
		}
	}
}

bool func_99(var uParam0)
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
				__LIB_1__::func_715(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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

void func_100(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_0__::func_11(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_627(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_8__::func_992(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

void func_101(int iParam0, int iParam1)
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
			__LIB_13__::func_69(iParam0, 1, 1, iParam1, 32);
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

void func_102(var uParam0, int iParam1, bool bParam2)
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
	__LIB_12__::func_983(uParam0);
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

void func_103(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				__LIB_13__::func_61(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_13__::func_70(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			__LIB_13__::func_30(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			__LIB_13__::func_61(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_13__::func_70(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BNTY_F_DEAD";
		case 1:
			return "BNTY_F_LEFT_A";
		case 2:
			return "BNTY_F_LEFT_D";
		case 3:
			return "BNTY_F_ESCP";
		case 4:
			return "BNTY_F_LOST";
		case 5:
			return "BNTY_F_WANTED";
		case 6:
			return "BNTY_F_ATCK";
		case 7:
			return "BNTY_F_ADJL";
	}
	return "";
}

void func_105(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	if (iParam1 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
}

bool func_106(vector3 vParam0, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
	{
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vParam0, &fVar1, &fVar2);
		if (((fVar1 > (0.5f - fParam4) && fVar1 < (0.5f + fParam4)) && fVar2 > (0.5f - fParam5)) && fVar2 < (0.5f + fParam5))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
	}
	return iVar0;
}

bool func_107()
{
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::GET_PLAYER_INDEX()))
	{
		if (__LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_SNIPERRIFLE_CARCANO") || __LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
		{
			return true;
		}
	}
	return false;
}

void func_108(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_1__::func_936(iParam0, 512);
		__LIB_1__::func_937(iParam0, 256);
		__LIB_1__::func_937(iParam0, 1048576);
	}
	else
	{
		__LIB_1__::func_937(iParam0, 512);
	}
	if (bParam2)
	{
		__LIB_1__::func_946(iParam0);
	}
}

bool func_109(int iParam0, float fParam1, float fParam2)
{
	if (__LIB_12__::func_610(iParam0, fParam1, fParam2, 0, 0, -1082130432 /* Float: -1f */))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1f, 1, 0);
		}
		else
		{
			__LIB_2__::func_426(&iParam0);
		}
		return true;
	}
	return false;
}

void func_110(var uParam0, vector3 vParam1, float fParam4, char* sParam5, char* sParam6)
{
	if (!__LIB_0__::func_27(uParam0->f_329, 64))
	{
		if (__LIB_13__::func_79(vParam1, fParam4))
		{
			if (!__LIB_0__::func_27(uParam0->f_329, 32))
			{
				__LIB_10__::func_197(uParam0, 2, 1);
				__LIB_1__::func_683(&(uParam0->f_329), 32);
			}
			__LIB_1__::func_683(&(uParam0->f_329), 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				__LIB_3__::func_353(sParam5, 0);
			}
		}
		else if (!__LIB_13__::func_79(vParam1, (fParam4 + 20f)))
		{
			__LIB_1__::func_681(&(uParam0->f_329), 32);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
			{
				__LIB_3__::func_353(sParam6, 0);
			}
		}
	}
	else if (!__LIB_13__::func_79(vParam1, fParam4))
	{
		__LIB_1__::func_681(&(uParam0->f_329), 64);
	}
}

void func_111(var uParam0)
{
	if (__LIB_13__::func_76() || uParam0->f_375 == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ACCURATE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
	}
	else if (uParam0->f_375 == 4)
	{
		__LIB_13__::func_92(uParam0);
	}
}

void func_112(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_13__::func_92(uParam0);
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

bool func_113(var uParam0, float fParam1, char[4] cParam2, int iParam3)
{
	int iVar0;
	iVar0 = uParam0->f_375;
	if (!__LIB_0__::func_71(Global_35))
	{
		__LIB_13__::func_92(uParam0);
	}
	else if (__LIB_0__::func_139(uParam0->f_375.f_1))
	{
		uParam0->f_375.f_2 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_67, 5f, 2, 1, 0, 0, 0);
		HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam0->f_375.f_1), uParam0->f_375.f_2, 0);
	}
	switch (uParam0->f_375)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("script_proc@bounty@riding_punch");
			if (STREAMING::HAS_ANIM_DICT_LOADED("script_proc@bounty@riding_punch"))
			{
				__LIB_1__::func_148(&(uParam0->f_375.f_3));
				uParam0->f_375 = 1;
			}
			break;
		case 1:
			if (__LIB_13__::func_88(uParam0, fParam1))
			{
				if (__LIB_13__::func_81())
				{
					__LIB_0__::func_268(&(uParam0->f_375.f_3), 2f);
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 0, false);
				}
				uParam0->f_375 = 2;
			}
			break;
		case 2:
			if (__LIB_13__::func_81())
			{
				if (__LIB_0__::func_265(&(uParam0->f_375.f_3)) > 0.5f)
				{
					__LIB_1__::func_748(&(uParam0->f_375.f_1), 1, 1);
					TASK::TASK_PLAY_ANIM(Global_35, "script_proc@bounty@riding_punch", "punch_player", 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(uParam0->f_67, "script_proc@bounty@riding_punch", "punch_ped", 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					__LIB_1__::func_148(&(uParam0->f_375.f_3));
					uParam0->f_375 = 3;
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_375.f_3));
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_375.f_3)) > 2f)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam2))
				{
					if (iParam3 == 1 || (iParam3 == 0 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)))
					{
						if (__LIB_1__::func_104(&(uParam0->f_103), __LIB_10__::func_56(__LIB_1__::func_344(cParam2)), 0, -1, 0, 0))
						{
						}
					}
				}
				uParam0->f_375 = 4;
				return true;
			}
			break;
		case 4:
			break;
	}
	if (iVar0 != uParam0->f_375)
	{
	}
	return false;
}

void func_114(var uParam0)
{
	StringCopy(&(uParam0->f_325), __LIB_13__::func_77(Global_40.f_9074.f_2), 24);
	uParam0->f_300 = __LIB_13__::func_78(Global_40.f_9074.f_2);
	uParam0->f_303 = Global_40.f_9074.f_3;
	uParam0->f_302 = Global_40.f_9074.f_4;
	uParam0->f_65 = Global_40.f_9074.f_2;
	__LIB_1__::func_683(&(uParam0->f_329), 512);
	__LIB_13__::func_93(uParam0, 0);
}

void func_115(var uParam0, int iParam1)
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
					__LIB_13__::func_92(uParam0);
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

void func_116(int iParam0)
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
		__LIB_13__::func_72(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_117(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_13__::func_72(50);
			}
			else
			{
				__LIB_13__::func_72(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_13__::func_72(51);
			}
			else
			{
				__LIB_13__::func_72(49);
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
			__LIB_13__::func_72(24);
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

void func_118(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iParam0->f_3 = iParam2;
	iParam0->f_2 = iParam1;
	if (iParam3 != -1)
	{
		iParam0->f_4 = iParam3;
	}
}

void func_119(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = (IntToFloat((MISC::GET_FRAME_COUNT() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		__LIB_0__::func_7(&(uParam0->f_1), 16);
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

bool func_120(char* sParam0, char* sParam1)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam0, 24);
	if (__LIB_0__::func_181())
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			StringConCat(&cVar0, "J", 24);
		}
		else
		{
			StringCopy(&cVar0, sParam1, 24);
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&cVar0, "A", 24);
	}
	return __LIB_1__::func_49(&cVar0);
}

void func_121(bool bParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	if (__LIB_0__::func_181())
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			StringConCat(&cVar0, "J", 24);
		}
		else
		{
			StringCopy(&cVar0, sParam2, 24);
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringConCat(&cVar0, "A", 24);
	}
	__LIB_5__::func_239(&cVar0, bParam0, 0);
}

bool func_122(int iParam0, vector3 vParam1, int iParam4, float fParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		return __LIB_6__::func_696(*iParam4, fParam5);
	}
	return false;
}

bool func_123(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	if (__LIB_0__::func_181())
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			StringConCat(&cVar0, "J", 24);
		}
		else
		{
			StringCopy(&cVar0, sParam2, 24);
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringConCat(&cVar0, "A", 24);
	}
	return __LIB_1__::func_104(&(uParam0->f_643), cVar0, 0, -1, bParam3, 0);
}

bool func_124(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	return __LIB_1__::func_104(&(uParam0->f_643), cVar0, 1, iParam2, bParam3, 0);
}

bool func_125(var uParam0)
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
		if (__LIB_13__::func_85(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
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

void func_126(var uParam0, var uParam1, int iParam2)
{
	uParam1->f_103 = { uParam0->f_643 };
	uParam1->f_65 = uParam0->f_174;
	uParam1->f_67 = *iParam2;
	__LIB_10__::func_57(&(uParam1->f_67));
}

bool func_127(var uParam0)
{
	vector3 vVar0[24];
	int iVar3;
	if (__LIB_10__::func_108(uParam0))
	{
		if (!__LIB_0__::func_181())
		{
			if (__LIB_13__::func_85(Global_35, "GREET_SHERIFF", 291934926, uParam0->f_69, 1, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3) + 3, 1))
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
			if (__LIB_13__::func_85(Global_35, &cVar0, 291934926, uParam0->f_69, 1, 0, iVar3, 1))
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

void func_128(var uParam0)
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
						if (__LIB_13__::func_85(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
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
						if (__LIB_13__::func_85(uParam0->f_69, &cVar11, 291934926, Global_35, 1, 0, 0, 1))
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

void func_129(var uParam0)
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
						if (__LIB_13__::func_85(uParam0->f_69, &cVar4, 291934926, Global_35, 1, 0, 0, 1))
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

bool func_130(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	if (__LIB_10__::func_109(uParam0))
	{
		if (!__LIB_2__::func_136(Global_35, 0))
		{
			StringCopy(&cVar3, __LIB_10__::func_110(uParam0->f_300, PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true)), 32);
			if (__LIB_13__::func_85(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
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

bool func_131(int iParam0, var uParam1, float fParam2, int iParam3, float fParam4, float fParam5)
{
	if (!__LIB_11__::func_608() && !__LIB_13__::func_107())
	{
		__LIB_0__::func_37(uParam1);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::_0x5102307CE88798EB(iParam0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		}
		else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			__LIB_0__::func_37(uParam1);
			return false;
		}
		else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
		{
			if (__LIB_13__::func_106(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam3, fParam4, fParam5))
			{
				if (!__LIB_0__::func_75(uParam1))
				{
					__LIB_1__::func_283(uParam1, 0);
				}
				else if (__LIB_0__::func_265(uParam1) > fParam2)
				{
					return true;
				}
			}
			else
			{
				__LIB_0__::func_37(uParam1);
			}
		}
		else
		{
			__LIB_0__::func_37(uParam1);
		}
	}
	else
	{
		__LIB_0__::func_37(uParam1);
	}
	return false;
}

bool func_132(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
				if (__LIB_2__::func_973(iParam0, uParam2))
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
				if (__LIB_2__::func_970(iParam0, uParam2))
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

int func_133(var uParam0)
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
		__LIB_13__::func_115(uParam0, 11);
		return 1;
	}
	return 0;
}

void func_134(int iParam0, int iParam1, int iParam2)
{
	__LIB_13__::func_101(iParam0, iParam2);
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

void func_135(int iParam0)
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
		__LIB_13__::func_10(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_136(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_13__::func_63(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_13__::func_63(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_137(var uParam0, vector3 vParam1, float fParam4)
{
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	if (fParam4 <= 0f)
	{
		return;
	}
	*uParam0 = GRAPHICS::_0x27219300C36A8D40(vParam1, fParam4, 0);
}

void func_138(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if ((((((!PED::IS_PED_INJURED(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0)) && !PED::IS_PED_DEAD_OR_DYING(*iParam0, true)) && !PED::IS_PED_FATALLY_INJURED(*iParam0)) && !PED::GET_PED_CONFIG_FLAG(*iParam0, 11, false)) && !PED::GET_PED_CONFIG_FLAG(*iParam0, 9, false)) && !PED::GET_PED_CONFIG_FLAG(*iParam0, 10, false))
		{
			if (!MAP::DOES_BLIP_EXIST(iParam0->f_1))
			{
				iParam0->f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam0);
			}
			if (MAP::DOES_BLIP_EXIST(iParam0->f_1))
			{
				if (iParam1 == 1)
				{
					MAP::_BLIP_SET_MODIFIER(iParam0->f_1, -662251075);
				}
				else
				{
					MAP::_BLIP_SET_MODIFIER(iParam0->f_1, -1034486097);
				}
			}
		}
	}
}

void func_139(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0) && !AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(iParam0))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, "FEAR", false);
				break;
			case 1:
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, "AGITATED", false);
				break;
			case 2:
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, "WHINNY_LONG", false);
				break;
			case 3:
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, "WHINNY_SHORT", false);
				break;
		}
	}
}

void func_140(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_6 < -1 || (uParam0->f_6 > -1 && uParam0->f_6 > 3))
	{
		return;
	}
	uParam0->f_6 = iParam1;
	if (bParam2)
	{
		__LIB_2__::func_451(uParam0, 0);
	}
}

bool func_141(var uParam0)
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
		if (__LIB_1__::func_265(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
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

bool func_142(var uParam0)
{
	vector3 vVar0[24];
	int iVar3;
	if (__LIB_10__::func_108(uParam0))
	{
		if (!__LIB_0__::func_181())
		{
			if (__LIB_1__::func_265(Global_35, "GREET_SHERIFF", 291934926, uParam0->f_69, 1, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3) + 3, 1))
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
			if (__LIB_1__::func_265(Global_35, &cVar0, 291934926, uParam0->f_69, 1, 0, iVar3, 1))
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

bool func_143(int iParam0, float fParam1, float fParam2, float fParam3)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, iParam0, 1, 1);
	if (fVar0 < fParam1)
	{
		return true;
	}
	else if (fVar0 < fParam2)
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return true;
		}
	}
	else if (fVar0 < fParam3)
	{
		if (__LIB_2__::func_401(iParam0, 1, 1, 1, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_144(var uParam0)
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
						if (__LIB_1__::func_265(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
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
						if (__LIB_1__::func_265(uParam0->f_69, &cVar11, 291934926, Global_35, 1, 0, 0, 1))
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

void func_145(var uParam0)
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
						if (__LIB_1__::func_265(uParam0->f_69, &cVar4, 291934926, Global_35, 1, 0, 0, 1))
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

bool func_146(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	if (__LIB_10__::func_109(uParam0))
	{
		if (!__LIB_2__::func_136(Global_35, 0))
		{
			StringCopy(&cVar3, __LIB_10__::func_110(uParam0->f_300, PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true)), 32);
			if (__LIB_1__::func_265(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
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

bool func_147(var uParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(Global_1347702[uParam0->f_174 /*49*/].f_1), 64);
	if (__LIB_13__::func_39(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 32);
		return true;
	}
	return false;
}

bool func_148(var uParam0)
{
	if (__LIB_9__::func_723(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
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

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		__LIB_8__::func_992(iParam0);
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1024))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
	}
	if (iParam1 == 1)
	{
		__LIB_11__::func_382(iParam0, 0);
	}
	__LIB_8__::func_993(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1347702[iParam0 /*49*/].f_42, iParam4);
		}
		else
		{
			Global_1347702[iParam0 /*49*/].f_43 = 0;
		}
	}
}

void func_150(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_13__::func_117(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_13__::func_117(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

bool func_151(int iParam0)
{
	if (!__LIB_0__::func_272(iParam0, 1))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(iParam0))
	{
		return true;
	}
	return false;
}

void func_152(var uParam0)
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
							Jump @1467; //curOff = 1421
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

void func_153(var uParam0, int iParam1)
{
	if (!uParam0->f_4)
	{
		if (!uParam0->f_3)
		{
			if (PED::_GET_LASSO_TARGET(Global_35) == *iParam1)
			{
				ENTITY::SET_ENTITY_PROOFS(*iParam1, 8, false);
				uParam0->f_3 = 1;
			}
		}
		else
		{
			if (!__LIB_0__::func_75(uParam0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam1, false) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(*iParam1) < 1f)
				{
					__LIB_1__::func_283(uParam0, 0);
				}
			}
			else if (__LIB_0__::func_265(uParam0) > 2.5f)
			{
				ENTITY::SET_ENTITY_PROOFS(*iParam1, 0, false);
				__LIB_0__::func_37(uParam0);
				uParam0->f_3 = 0;
				uParam0->f_4 = 1;
			}
			if (!uParam0->f_4 && PED::_GET_LASSO_TARGET(Global_35) != *iParam1)
			{
				ENTITY::SET_ENTITY_PROOFS(*iParam1, 0, false);
				__LIB_0__::func_37(uParam0);
				uParam0->f_3 = 0;
				uParam0->f_4 = 1;
			}
		}
	}
}

bool func_154(var uParam0)
{
	if (__LIB_13__::func_95(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
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

void func_155(var uParam0)
{
	bool bVar0;
	__LIB_10__::func_165(uParam0);
	switch (uParam0->f_63)
	{
		case 0:
			__LIB_10__::func_82(uParam0);
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 2);
			}
			else
			{
				bVar0 = PED::GET_PED_CONFIG_FLAG(uParam0->f_67, 11, true);
				if (bVar0)
				{
					__LIB_13__::func_115(uParam0, 1);
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_67) && !PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 0);
			}
			ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_67, 19, 1);
			if (__LIB_10__::func_166(uParam0->f_67, 0))
			{
				if (__LIB_10__::func_69(uParam0))
				{
					__LIB_13__::func_115(uParam0, 4);
				}
				else if (__LIB_10__::func_191(uParam0->f_67))
				{
					if (!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 30f, 1))
					{
						__LIB_13__::func_115(uParam0, 5);
					}
					else
					{
						__LIB_13__::func_115(uParam0, 6);
					}
				}
				else
				{
					__LIB_13__::func_115(uParam0, 3);
				}
			}
			break;
		case 3:
			__LIB_10__::func_167(uParam0);
			if (!__LIB_10__::func_166(uParam0->f_67, 0))
			{
				__LIB_13__::func_115(uParam0, 2);
			}
			else if (__LIB_10__::func_69(uParam0))
			{
				__LIB_13__::func_115(uParam0, 4);
			}
			else if (__LIB_10__::func_191(uParam0->f_67))
			{
				if (!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 30f, 1))
				{
					__LIB_13__::func_115(uParam0, 5);
				}
				else
				{
					__LIB_13__::func_92(uParam0);
					__LIB_13__::func_115(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!__LIB_10__::func_191(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 3);
			}
			break;
		case 6:
			if (__LIB_10__::func_79(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 3);
			}
			break;
		case 4:
			if (uParam0->f_62 >= 5)
			{
				if (!__LIB_10__::func_75(uParam0->f_67))
				{
					__LIB_1__::func_148(&(uParam0->f_364));
					__LIB_13__::func_115(uParam0, 7);
				}
				else
				{
					__LIB_1__::func_148(&(uParam0->f_364));
					__LIB_13__::func_115(uParam0, 8);
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
				__LIB_13__::func_129(uParam0);
				if (!__LIB_10__::func_166(uParam0->f_67, 1))
				{
					__LIB_13__::func_115(uParam0, 2);
				}
				else if (__LIB_0__::func_94(Global_35, __LIB_10__::func_168(uParam0), 0) < 1f && __LIB_3__::func_592(Global_35, __LIB_10__::func_168(uParam0)) < 3f)
				{
					__LIB_3__::func_459(uParam0->f_67, 0);
					__LIB_10__::func_71(uParam0, 1);
					__LIB_13__::func_115(uParam0, 12);
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_364));
				__LIB_13__::func_115(uParam0, 8);
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
			__LIB_13__::func_129(uParam0);
			if (__LIB_10__::func_83(uParam0))
			{
				if (__LIB_10__::func_169(uParam0))
				{
					__LIB_3__::func_459(uParam0->f_67, 0);
					__LIB_10__::func_71(uParam0, 2);
					__LIB_13__::func_115(uParam0, 12);
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
						__LIB_13__::func_115(uParam0, 12);
					}
					else
					{
						__LIB_13__::func_115(uParam0, 9);
					}
				}
			}
			break;
		case 9:
			if (__LIB_10__::func_166(uParam0->f_67, 1))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					__LIB_13__::func_115(uParam0, 8);
				}
				else
				{
					__LIB_13__::func_115(uParam0, 7);
				}
			}
			break;
		case 12:
			break;
	}
}

void func_156(var uParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		__LIB_13__::func_134(uParam0->f_174, 0, 0);
		Global_1347702[uParam0->f_174 /*49*/].f_43 = 0;
	}
}

void func_157(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_13__::func_150(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_13__::func_150(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_13__::func_150(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_13__::func_150(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_13__::func_150(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_13__::func_150(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_13__::func_150(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_13__::func_150(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_13__::func_150(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_13__::func_150(-1, iParam0);
	}
}

bool func_158(char* sParam0)
{
	return __LIB_1__::func_49(sParam0);
}

bool func_159(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) == iParam0)
	{
		return true;
	}
	if (bParam1)
	{
		if (PED::_IS_PED_HOGTIED(iParam0) || __LIB_3__::func_458(iParam0) == 1)
		{
			return true;
		}
	}
	if (((PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, joaat("AR_HITBY_TAKEDOWN_LEFT_LASSO")) || PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, joaat("AR_HITBY_TAKEDOWN_RIGHT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, joaat("AR_HITBY_TAKEDOWN_FRONT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, joaat("AR_HITBY_TAKEDOWN_REAR_LASSO")))
	{
		return true;
	}
	return false;
}

void func_160(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
	bVar0 = __LIB_12__::func_741(uParam0);
	if (!bVar0)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (__LIB_12__::func_738(uParam0))
			{
				bVar1 = false;
			}
			else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (__LIB_12__::func_986(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				__LIB_0__::func_11(uParam0);
				__LIB_0__::func_7(&(uParam0->f_172), 1);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 1);
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
}

void func_161(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		__LIB_0__::func_11(uParam0);
	}
}

bool func_162(var uParam0)
{
	if (__LIB_13__::func_132(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
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

void func_163(var uParam0, int iParam1, bool bParam2)
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
	__LIB_13__::func_152(uParam0);
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

void func_164(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_13__::func_136(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_13__::func_136(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_13__::func_136(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_13__::func_136(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_13__::func_136(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_13__::func_136(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_13__::func_136(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_13__::func_136(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_13__::func_136(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_13__::func_136(-1, iParam0);
	}
}

bool func_165(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
	if (__LIB_0__::func_665(iParam0, Global_35, 1, 1) < IntToFloat(iParam1))
	{
		if (fVar0 > 6f || PED::IS_PED_ON_MOUNT(Global_35))
		{
			return true;
		}
	}
	else if (__LIB_0__::func_665(iParam0, Global_35, 1, 1) < IntToFloat(iParam2))
	{
		if (fVar0 > 10f || PED::IS_PED_ON_MOUNT(Global_35))
		{
			return true;
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 20f, true))
	{
		return true;
	}
	return false;
}

bool func_166(int iParam0, float fParam1)
{
	if (__LIB_2__::func_215(iParam0, Global_35, 1, fParam1, 0))
	{
		return true;
	}
	return false;
}

float func_167(var uParam0)
{
	return __LIB_13__::func_82(&Local_19);
}

int func_168(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
	ENTITY::SET_ENTITY_COORDS(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, -10f), true, false, true, true);
	iVar4 = __LIB_8__::func_931(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), vVar0, fVar3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	PED::_SET_PED_ON_MOUNT(iParam0, iVar4, -1, true);
	return iVar4;
}

void func_169(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	fVar3 = 15f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (__LIB_0__::func_272(uParam0->f_69, 0))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false) };
			if ((((((__LIB_13__::func_162(uParam0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f)) || MISC::IS_PROJECTILE_IN_AREA(vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3), true)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_69, 5000)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_67, 5000)) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
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

void func_170(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if ((__LIB_0__::func_1(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 256);
			__LIB_3__::func_319(uParam0->f_751);
			__LIB_13__::func_161(uParam0);
		}
		else
		{
			__LIB_12__::func_838(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (__LIB_12__::func_882(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 16))
			{
				cVar0 = { __LIB_0__::func_134() };
				Var8 = { __LIB_12__::func_665(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					__LIB_12__::func_909(&(uParam0->f_206));
					__LIB_12__::func_839(&(uParam0->f_206), &cVar0);
				}
			}
			__LIB_0__::func_7(&(uParam0->f_172), 256);
		}
	}
}

bool func_171(var uParam0, float fParam1, float fParam2)
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
			if (__LIB_13__::func_162(uParam0))
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

bool func_172(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_889(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_983(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_103(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_173(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = __LIB_3__::func_112(uParam0->f_69, Global_35, 0.7f);
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
			iVar0 = __LIB_3__::func_112(uParam0->f_69, Global_35, 1f);
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

bool func_174(var uParam0)
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
		iVar0 = __LIB_3__::func_112(uParam0->f_6, Global_35, 1060437492 /* Float: 0.707f */);
		iVar1 = __LIB_3__::func_112(uParam0->f_6, Global_35, 1f);
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

int func_175(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	float fVar29;
	float fVar30;
	float fVar31;
	iVar0 = CAM::GET_RENDERING_CAM();
	vVar1 = { __LIB_1__::func_384(iVar0) };
	vVar4 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 0f) };
	if (!CAM::DOES_CAM_EXIST(iVar0))
	{
		vVar7 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	}
	else
	{
		vVar7 = { CAM::GET_CAM_COORD(iVar0) };
	}
	vVar4.f_2 = vVar7.z;
	vVar10 = { vParam0 - vVar4 };
	vVar13 = { __LIB_0__::func_173(vVar10) };
	vVar16 = { __LIB_4__::func_83(vVar13, 0) };
	fVar19 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar4, vParam0, true);
	vVar20 = { vVar4 + vVar1 * Vector(fVar19, fVar19, fVar19) };
	vVar23 = { vVar20 - vParam0 };
	vVar26 = { vParam0 + __LIB_13__::func_86(vVar23, vVar16) };
	vVar26.f_2 = vParam0.z;
	fVar29 = __LIB_2__::func_977(vVar16, vVar1);
	fVar30 = BUILTIN::VMAG(vVar26 - vParam0);
	fVar31 = MISC::ABSF((vVar20.z - vParam0.z));
	if (fVar30 > fParam3 || fVar31 > fParam3)
	{
		if (fVar30 > fVar31)
		{
			if (fVar29 > 0f)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
		else if (vVar20.z > vParam0.z)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	else if (!__LIB_13__::func_107())
	{
		if (__LIB_13__::func_94() > fParam4 && MISC::GET_DISTANCE_BETWEEN_COORDS(vVar4, vParam0, true) > 60f)
		{
			return 5;
		}
	}
	return 6;
}

void func_176(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	fVar3 = 15f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (__LIB_0__::func_272(uParam0->f_69, 0))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false) };
			if ((((((__LIB_13__::func_154(uParam0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f)) || MISC::IS_PROJECTILE_IN_AREA(vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3), true)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_69, 5000)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_67, 5000)) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
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

bool func_177(var uParam0, float fParam1, float fParam2)
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
			if (__LIB_13__::func_154(uParam0))
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

void func_178(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_13__::func_172(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

void func_179(int iParam0, char* sParam1)
{
	if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1)) && !ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	}
}

bool func_180(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return true;
	}
	return false;
}

bool func_181(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false) && !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
			return true;
		}
	}
	return false;
}

void func_182(int iParam0, char* sParam1, vector3 vParam2, int iParam5)
{
	if (__LIB_3__::func_587(iParam0, 1, 1))
	{
		StringCopy(&(Global_1955500[iParam0 /*16*/].f_4), sParam1, 64);
		Global_1955500[iParam0 /*16*/].f_12 = { vParam2 };
		Global_1955500[iParam0 /*16*/].f_15 = iParam5;
		__LIB_3__::func_658(iParam0, 512);
	}
}

bool func_183(int iParam0)
{
	if (__LIB_4__::func_214(iParam0))
	{
		return true;
	}
	if (__LIB_4__::func_215(iParam0))
	{
		return true;
	}
	if (__LIB_2__::func_365(iParam0))
	{
		return true;
	}
	if (__LIB_2__::func_366(iParam0))
	{
		return true;
	}
	if (__LIB_1__::func_869(iParam0))
	{
		return true;
	}
	return false;
}

bool func_184(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	if (!__LIB_11__::func_608() && !__LIB_13__::func_107())
	{
		__LIB_0__::func_37(uParam0);
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
		if (!PED::_0x5102307CE88798EB(iVar3))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar3);
		}
		else if (ENTITY::IS_ENTITY_OCCLUDED(iVar3))
		{
			__LIB_0__::func_37(uParam0);
			return false;
		}
		else if (PED::_0x164CECC59E70DF86(iVar3, 75f))
		{
			if (__LIB_2__::func_0(iVar3, 0.45f, 0.55f, 0.45f, 0.55f))
			{
				if (!__LIB_0__::func_75(uParam0))
				{
					__LIB_1__::func_283(uParam0, 0);
				}
				else if (__LIB_0__::func_265(uParam0) > fParam2)
				{
					return true;
				}
			}
			else
			{
				__LIB_0__::func_37(uParam0);
			}
		}
		else
		{
			__LIB_0__::func_37(uParam0);
		}
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
		iVar4 = __LIB_13__::func_175(vVar0, iParam3, 1097859072 /* Float: 15f */);
		if (iVar4 == 6)
		{
			if (fParam2 > 0f)
			{
				if (!__LIB_0__::func_75(uParam0))
				{
					__LIB_1__::func_283(uParam0, 0);
				}
				else if (__LIB_0__::func_265(uParam0) > fParam2)
				{
					return true;
				}
			}
		}
		__LIB_0__::func_37(uParam0);
	}
	return false;
}

void func_185(int iParam0)
{
	iLocal_17 = iParam0;
}

void func_186(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		if (__LIB_0__::func_86(vParam7))
		{
			vParam7 = { ENTITY::GET_ENTITY_COORDS(iParam3, true, false) };
		}
		if (__LIB_3__::func_761(uParam1, 1))
		{
			__LIB_11__::func_78(uParam0, uParam1, iParam2, 0f, 0f, 0f, vParam7, fParam10);
		}
		else
		{
			__LIB_11__::func_78(uParam0, uParam1, iParam2, vParam4, vParam7, fParam10);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam2, joaat("REL_PLAYER_ENEMY"));
		PED::SET_PED_CONFIG_FLAG(iParam2, 6, true);
		if (__LIB_3__::func_769(iParam2))
		{
			__LIB_0__::func_240(uParam0, 4);
		}
		PED::_0x2208438012482A1A(iParam2, false, false);
		fVar0 = __LIB_0__::func_152(vParam4, vParam7, 1);
		if (!__LIB_3__::func_761(uParam1, 524288))
		{
			if ((__LIB_0__::func_27(uParam1->f_88, 32) || __LIB_0__::func_27(uParam1->f_88, 2)) || __LIB_3__::func_761(uParam1, 1))
			{
				TASK::TASK_DUEL(iParam2, uParam0->f_64, fParam10, iParam3, __LIB_3__::func_785(uParam1), 0, 0f, 0f, 0f, fVar0, 0);
			}
			else
			{
				TASK::TASK_DUEL(iParam2, uParam0->f_64, fParam10, iParam3, __LIB_3__::func_785(uParam1), 0, vParam4, fVar0, 0);
			}
		}
	}
}

void func_187(int iParam0)
{
	__LIB_1__::func_683(&iLocal_15, iParam0);
}

void func_188(int iParam0)
{
	__LIB_1__::func_681(&iLocal_15, iParam0);
}

void func_189(var uParam0, var uParam1, int iParam2)
{
	uParam1->f_103 = { uParam0->f_643 };
	uParam1->f_65 = uParam0->f_174;
	uParam1->f_67 = *iParam2;
	__LIB_13__::func_83(&(uParam1->f_67));
}

void func_190(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		__LIB_11__::func_78(uParam0, uParam1, iParam2, vParam3, vParam6, fParam9);
		if (!__LIB_0__::func_27(uParam1->f_88, 32))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
			}
		}
		__LIB_3__::func_849(iParam2);
	}
}

bool func_191(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
				__LIB_10__::func_349(uParam0, 0, 0, 0, 0);
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

void func_192(var uParam0, char* sParam1, var uParam2)
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
	__LIB_10__::func_349(uParam0, 0, 0, 0, 0);
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

bool func_193(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return __LIB_13__::func_38(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_194(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_0__::func_11(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_627(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_8__::func_992(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

void func_195(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_27(uParam0->f_88, 1024))
	{
		__LIB_3__::func_839(uParam0, uParam1);
	}
	__LIB_1__::func_539();
	MISC::SET_TIME_SCALE(1f);
	__LIB_1__::func_390(__LIB_3__::func_805(uParam1, uParam0), 1);
	__LIB_0__::func_769();
	__LIB_3__::func_760();
	__LIB_0__::func_11();
	__LIB_0__::func_37(&(uParam1->f_26));
	__LIB_0__::func_37(&(uParam1->f_29));
	__LIB_0__::func_37(&(uParam1->f_32));
	__LIB_0__::func_37(&(uParam1->f_35));
	__LIB_0__::func_37(&(uParam1->f_38));
	__LIB_0__::func_37(&(uParam1->f_41));
	if (__LIB_0__::func_272(uParam0->f_1, 0))
	{
		if (__LIB_3__::func_761(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, false);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 0);
		}
		if (__LIB_3__::func_761(uParam0, 1024))
		{
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
		}
		if (__LIB_3__::func_761(uParam0, 128) || __LIB_3__::func_761(uParam0, 4096))
		{
			PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, false, -1, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, false, 0f);
	}
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	if (!__LIB_3__::func_761(uParam0, 2048))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	if (__LIB_0__::func_239(uParam1, 2048))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, false);
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), true);
	if (__LIB_0__::func_239(uParam1, 2) && !__LIB_3__::func_761(uParam0, 32768))
	{
		__LIB_3__::func_806(1, uParam0, uParam1, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
		__LIB_3__::func_728(uParam1, 2);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_86))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_86);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_86);
	}
	if (MISC::_DOES_ITEM_HAVE_VALID_BASE(*uParam1))
	{
		ITEMSET::DESTROY_ITEMSET(*uParam1);
	}
	__LIB_3__::func_824(uParam0, uParam1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && (__LIB_0__::func_239(uParam1, 8) && (!__LIB_0__::func_239(uParam1, 1) || TASK::_IS_PED_DUELLING(*uParam0))))
	{
		TASK::_0xEED08A3A98B847E2(*uParam0, (!__LIB_3__::func_761(uParam0, 256) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1)), 1040187392 /* Float: 0.125f */);
		if (__LIB_0__::func_239(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && TASK::_IS_PED_DUELLING(uParam0->f_1))
	{
		TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, 1040187392 /* Float: 0.125f */);
		if (__LIB_0__::func_239(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
		}
	}
	MAP::DISPLAY_RADAR(true);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, false, -1, 0);
	}
	GRAPHICS::ANIMPOSTFX_STOP("Duel");
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_16)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_20)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_28)))
		{
		}
	}
	HUD::_TEXT_DATABASE_DELETE("MGDUL");
	if (__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_3__::func_840();
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	MISC::_0x4D5C9CC7E7E23E09();
	__LIB_3__::func_762(uParam1, 9);
}

void func_196(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 1024))
	{
		if (__LIB_11__::func_552(*uParam0, &(uParam0->f_3), __LIB_1__::func_977(), uParam0->f_86, 1097859072 /* Float: 15f */, 2, 1, 0, 0, 1, 1071644672 /* Float: 1.75f */))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 136, true);
			}
			__LIB_0__::func_240(uParam1, 1024);
		}
	}
}

void func_197(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(*iParam0, !bParam1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		iVar0 = PED::GET_MOUNT(*iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, !bParam1);
			}
		}
		else if (bParam2)
		{
			iVar0 = PED::_GET_LAST_MOUNT(*iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar0, !bParam1);
					}
				}
			}
		}
	}
}

bool func_198(char[4] cParam0)
{
	return __LIB_1__::func_49(cParam0);
}

bool func_199(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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

int func_200(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 64) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = __LIB_13__::func_168(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !CAM::IS_SCREEN_FADED_OUT())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 64);
	}
	return iVar0;
}

bool func_201(int iParam0)
{
	if ((PED::_IS_PED_LASSOED(iParam0) || __LIB_3__::func_458(iParam0) == 1) || PED::_IS_PED_HOGTIED(iParam0))
	{
		return true;
	}
	return false;
}

bool func_202()
{
	int iVar0;
	iVar0 = PED::_GET_CARRIER_AS_MOUNT(iLocal_413);
	if (__LIB_0__::func_394(Global_35, iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_203(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!__LIB_0__::func_272(iParam1, 207))
		{
			__LIB_12__::func_798(uParam0);
			return true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, Global_35, 1, 1))
		{
			__LIB_12__::func_798(uParam0);
			return true;
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			fVar3 = 10f;
			if (FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(-1, vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3)))
			{
				__LIB_12__::func_798(uParam0);
				return true;
			}
		}
	}
	return false;
}

bool func_204(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_283(uParam0, 0);
	}
	if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0 && __LIB_0__::func_265(uParam0) > 7f)
	{
		return true;
	}
	if (__LIB_0__::func_265(uParam0) > 15f)
	{
		return true;
	}
	return false;
}

void func_205(var uParam0)
{
	__LIB_10__::func_164(uParam0, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		__LIB_13__::func_173(uParam0);
	}
}

bool func_206(var uParam0)
{
	if (__LIB_13__::func_199(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
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

struct<4> func_207(int iParam0)
{
	struct<4> Var0;
	Var0 = { Global_36 };
	return Var0;
}

void func_208(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
}

bool func_209(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_12__::func_970(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_889(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_914(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_103(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_210(int iParam0)
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
		__LIB_13__::func_10(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

bool func_211(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { vVar0 };
		vVar6 = { vVar3 };
		vVar3.x = (vVar3.x - fParam1);
		vVar3.f_1 = (vVar3.y - fParam1);
		vVar3.f_2 = (vVar3.z - fParam1);
		vVar6.x = (vVar6.x + fParam1);
		vVar6.f_1 = (vVar6.y + fParam1);
		vVar6.f_2 = (vVar6.z + fParam1);
		if (MISC::IS_PROJECTILE_IN_AREA(vVar3, vVar6, true))
		{
			return true;
		}
	}
	return false;
}

bool func_212(int iParam0, int iParam1)
{
	var uVar0;
	uVar0 = *iParam1;
	if (PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

int func_213(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if ((*uParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*uParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

bool func_214(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 512);
}

int func_215(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		PERSCHAR::_0x49A8C2CD97815215(__LIB_0__::func_120(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x0CADC3A977997472(__LIB_0__::func_120(iParam0), 0)))
		{
			return 0;
		}
	}
	return 1;
}

bool func_216(var uParam0)
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
						__LIB_1__::func_281(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = __LIB_1__::func_746(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						else
						{
							uParam0->f_5 = __LIB_1__::func_746(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						__LIB_1__::func_281(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = __LIB_1__::func_746(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
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
					__LIB_1__::func_281(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = __LIB_1__::func_746(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					else
					{
						uParam0->f_6 = __LIB_1__::func_746(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					__LIB_1__::func_281(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = __LIB_1__::func_746(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
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

bool func_217(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_11__::func_845(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_218(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return __LIB_13__::func_27(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_219(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	__LIB_6__::func_815(iParam0, 0);
	__LIB_11__::func_845(iParam0, uParam1, 1);
	__LIB_2__::func_624(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_220(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_4__::func_457(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_221(var uParam0, float fParam1)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	uParam0->f_744 = fParam1;
}

void func_222(var uParam0, int iParam1)
{
	uParam0->f_750 = iParam1;
}

void func_223(int iParam0)
{
	PED::_0xAE6004120C18DF97(*iParam0, 0, 0);
	ENTITY::_0x18FF3110CF47115D(*iParam0, 7, 0);
	ENTITY::_0x18FF3110CF47115D(*iParam0, 0, 0);
	ENTITY::_0x18FF3110CF47115D(*iParam0, 1, 0);
}

void func_224(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5)
{
	*bParam1 = (BUILTIN::SQRT(uParam0->f_745) + 2f);
	*uParam2 = (*bParam1 + 5f);
	*uParam3 = (*uParam2 + 10f);
	*uParam4 = (*uParam3 + 12f);
	*fParam5 = 2f;
}

int func_225(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return 0;
	}
	if (bParam2 == 1)
	{
		if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_348, sParam1))
		{
			bParam2 = false;
		}
	}
	return ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_348, sParam1, bParam2);
}

void func_226(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
	{
		PED::_0xEEED8FAFEC331A70(*iParam0, ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 1);
	}
	else if (iParam6 == 1)
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
	}
	if (iParam7 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
	}
	if (iParam11 == -1)
	{
		iVar0 = 33346;
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iVar0, false);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iParam11, false);
	}
	if (iParam10 == -1)
	{
		iVar0 = 0;
		iVar0 = 132;
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iVar0, true);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iParam10, true);
	}
	if (!__LIB_0__::func_163(*iParam0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(*iParam0, *uParam1, fParam2, iParam3, iParam4, fParam5, 0);
	}
	PED::SET_PED_KEEP_TASK(*iParam0, bParam9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam8);
}

void func_227(int iParam0)
{
	__LIB_3__::func_923(iParam0, 1088421888 /* Float: 7f */, 1, 1);
	MISC::_0x870708A6E147A9AD(iParam0, "", 7f, 0f, 0, 0, 0, 0, 0, -1);
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 3, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 4, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
}

void func_228(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (iParam4 == 1)
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
	}
	if (iParam5 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
	}
	if (iParam8 == 1)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
	}
	if (!__LIB_0__::func_163(*iParam0, 780511057))
	{
		TASK::TASK_COMBAT_PED(*iParam0, *uParam1, iParam2, iParam3);
	}
	PED::SET_PED_KEEP_TASK(*iParam0, bParam7);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam6);
}

void func_229(int iParam0, int* iParam1, var uParam2, float fParam3)
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

bool func_230(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
				if (__LIB_10__::func_555(iParam0, iParam1, uParam2))
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
				if (__LIB_10__::func_556(iParam0, uParam2))
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

void func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	__LIB_12__::func_841(uParam0);
	uParam0->f_4 = iParam1;
	__LIB_1__::func_414(uParam0, iParam2, iParam3, iParam4, iParam5);
}

void func_232(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_13__::func_30(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_2__::func_813(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

void func_233(var uParam0, int iParam1, bool bParam2)
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
						__LIB_13__::func_26(uParam0);
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

Vector3 func_234()
{
	return 2732.526f, -1248.942f, 48.8597f;
}

void func_235(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	switch (iParam0->f_27)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_15, true, false) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam0, iParam0->f_15))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_15, "PL_QUICK"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_15, "PL_QUICK", true);
					iParam0->f_27 = 1;
				}
				else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0->f_15, "PL_QUICK"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_15, "PL_QUICK");
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 1000f, -1, 0, 3f, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_2, true);
				iParam0->f_27 = 3;
			}
			break;
		case 1:
			if ((ANIMSCENE::_0xF94692EB9DC15D74(iParam0->f_15, 0) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam0->f_15)) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_15, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_15) > 0.99f))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 1000f, -1, 0, 3f, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_2, true);
				iParam0->f_27 = 3;
			}
			break;
		case 3:
			break;
	}
}

Vector3 func_236()
{
	return 2733.251f, -1248.809f, 49.9252f;
}

void func_237(float fParam0)
{
	if (fParam0 < 4f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
	}
}

char* func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "PL_BASE";
		case 2:
			return "pbl_Give_Food_v2";
		case 3:
			return "pbl_Give_Food";
		case 4:
			return "pbl_NOT_ENOUGH_FOOD";
		case 5:
			return "pbl_NOT_ENOUGH_FOOD_NO_DIALOGUE";
		case 6:
			return "pbl_Give_Food_Money_v2";
		case 7:
			return "pbl_Give_Food_Money";
		default:
			break;
	}
	return "PL_BASE";
}

void func_239(int iParam0)
{
	if (iParam0->f_16)
	{
		iParam0->f_16 = 0;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_15))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_15);
	}
	iParam0->f_26 = 0;
}

int func_240()
{
	return joaat("P_CS_DONATION01X");
}

int func_241()
{
	return joaat("P_BELL05X");
}

float func_242()
{
	return 8.96f;
}

Vector3 func_243()
{
	return 0f, 0f, -179.42f;
}

char* func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_Alms_To_The_Poor";
		case 1:
			return "PL_Bell_Ringing";
		case 2:
			return "PL_Every_Child_Deserves_To_Eat";
		case 3:
			return "PL_Every_Little_Helps";
		case 4:
			return "PL_Have_You_Anything_To_Spare";
		case 5:
			return "PL_Help_The_Poor";
		case 6:
			return "PL_Los_Pobres";
		case 7:
			return "PL_Money_For_The_Poor";
		case 8:
			return "PL_Money_Or_Food_It_All_Helps";
		case 9:
			return "PL_Money_For_The_Poor_2";
		case 10:
			return "PL_Please_A_Few_Cents_Can_Go";
		case 11:
			return "PL_Please_Any_Contribution";
		case 12:
			return "PL_Please_Help_The_Poor";
		case 13:
			return "PL_Please_Make_A_Donation";
		case 14:
			return "PL_These_Children_Need_Your_Help";
		case 15:
			return "PL_Would_Anyone_Like_To";
		default:
			break;
	}
	return "PL_Alms_To_The_Poor";
}

float func_245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8f;
		case 1:
			return 5.5f;
		case 2:
			return 12f;
		case 3:
			return 7f;
		case 4:
			return 9f;
		case 5:
			return 8f;
		case 6:
			return 4f;
		case 7:
			return 10f;
		case 8:
			return 12f;
		case 9:
			return 10f;
		case 10:
			return 11f;
		case 11:
			return 10f;
		case 12:
			return 10f;
		case 13:
			return 13.5f;
		case 14:
			return 9.5f;
		case 15:
			return 12.5f;
		default:
			break;
	}
	return 8f;
}

void func_246(int iParam0)
{
	iParam0->f_14 = 0;
}

void func_247(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = (BUILTIN::SQRT(uParam0->f_745) + 2f);
	*uParam2 = (*uParam1 + 5f);
	*uParam3 = (*uParam2 + 10f);
	*uParam4 = (*uParam3 + 12f);
	*uParam5 = 2f;
}

int func_248(int iParam0)
{
	iParam0 = (iParam0 + MISC::GET_RANDOM_INT_IN_RANGE(1, 16));
	if (iParam0 >= 16)
	{
		iParam0 = (iParam0 - 16);
	}
	return iParam0;
}

void func_249(int* iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	__LIB_1__::func_471(iParam0, 1);
	__LIB_2__::func_602(iParam0, sParam1, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

bool func_250(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_45(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_35(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_251(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			__LIB_9__::func_355(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			__LIB_9__::func_355(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			__LIB_9__::func_355(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_10__::func_706(49, 0, 0, 0, 0, -1, 0);
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

void func_252(int iParam0)
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
	__LIB_10__::func_706(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_253(int iParam0)
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
	__LIB_10__::func_706(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_254(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_255(int iParam0, int iParam1)
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
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
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
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
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
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
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
						__LIB_9__::func_355(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_256(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_8__::func_940(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_9__::func_355(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_257(int iParam0, int iParam1, bool bParam2)
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
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_9__::func_355(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_258(var uParam0)
{
	bool bVar0;
	int iVar1;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			__LIB_3__::func_727(uParam0->f_174, 128);
		}
		else
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
			{
				__LIB_7__::func_602(uParam0->f_174);
				__LIB_10__::func_822(uParam0->f_174);
			}
		}
		else
		{
			__LIB_10__::func_694(Global_1347702[uParam0->f_174 /*49*/]);
			__LIB_7__::func_602(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174), 0, "");
		}
	}
	if (!__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		if (!__LIB_0__::func_702(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			__LIB_1__::func_298(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		}
		__LIB_1__::func_821(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 8);
	}
	bVar0 = true;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
	}
	__LIB_12__::func_667(uParam0);
	__LIB_0__::func_7(&(uParam0->f_172), 8);
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		__LIB_12__::func_868(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		__LIB_0__::func_112(1, 16384, 1);
		__LIB_0__::func_7(&(uParam0->f_172), 67108864);
	}
	__LIB_5__::func_109(uParam0, 1, 0);
	__LIB_1__::func_723(1);
	__LIB_1__::func_564(1);
	__LIB_12__::func_770();
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_12__::func_898(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
	if (__LIB_12__::func_882(uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 256);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8388608) || !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_12__::func_918(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(Global_1347702[uParam0->f_174 /*49*/].f_3));
	HUD::SET_MISSION_NAME(true, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_0__::func_11(uParam0);
	iVar1 = 0;
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0, iVar1, __LIB_12__::func_639(uParam0, 64));
}

void func_259(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_13__::func_209(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

void func_260(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1347702[uParam0->f_174 /*49*/].f_21))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, Global_1347702[uParam0->f_174 /*49*/].f_21))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, Global_1347702[uParam0->f_174 /*49*/].f_21);
	}
}

void func_261(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (__LIB_0__::func_84(&(uParam0->f_206), 16))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam1))
	{
		__LIB_13__::func_231(&(uParam0->f_206), *iParam1, iParam2, iParam3, iParam4, iParam5);
	}
}

bool func_262(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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

void func_263(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				__LIB_13__::func_258(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_264(var uParam0, int iParam1)
{
	uParam0->f_641 = iParam1;
	__LIB_12__::func_638(uParam0, 4);
}

struct<2> func_265(char* sParam0, int iParam1)
{
	struct<2> Var0;
	Var0 = sParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_266()
{
	int iVar0;
	iVar0 = iLocal_15;
	iVar0++;
	iLocal_15 = iVar0;
	if (iLocal_15 == 3)
	{
		iLocal_15 = (iVar0 - 1);
	}
}

void func_267(var uParam0)
{
	if (uParam0->f_67 == 1)
	{
		if (__LIB_0__::func_27(Global_40.f_9145, 1))
		{
			__LIB_0__::func_8(&(Global_40.f_9145), 1);
		}
	}
}

bool func_268(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam1->f_58, 512))
	{
		return true;
	}
	if (!__LIB_0__::func_239(uParam1, 524288))
	{
		if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			__LIB_0__::func_240(uParam1, 524288);
		}
	}
	else
	{
		iVar2 = __LIB_0__::func_153(*uParam0, 0, 1, 0);
		if (iVar2 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, iVar2);
			if (iVar0 <= 0)
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 0, &uVar3);
				WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam0, &iVar0, &uVar3);
			}
			iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar2, true);
		}
		if (iVar1 == iVar0 && !PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			if (bParam2)
			{
				__LIB_0__::func_7(&(uParam1->f_58), 512);
			}
			return true;
		}
	}
	return false;
}

bool func_269(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	if (__LIB_0__::func_27(uParam1->f_58, 256))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, uParam0->f_48))
	{
		if (iVar0 <= 0)
		{
			if (__LIB_0__::func_154(__LIB_0__::func_399(*uParam0, 1, 0, 0)))
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 0, &uVar1);
			}
			else
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 2, &uVar1);
			}
			WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam0, &iVar0, &uVar1);
			if (iVar0 <= 0)
			{
				if (bParam2)
				{
					__LIB_0__::func_7(&(uParam1->f_58), 256);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_270(var uParam0, var uParam1, bool bParam2)
{
	if (__LIB_0__::func_27(uParam1->f_58, 4))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		if (bParam2)
		{
			__LIB_0__::func_7(&(uParam1->f_58), 4);
		}
		return true;
	}
	return false;
}

int func_271(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_58, 2))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		iVar0 = 1;
		if (bParam2)
		{
			__LIB_0__::func_7(&(uParam1->f_58), 2);
		}
	}
	return iVar0;
}

void func_272(int iParam0)
{
	__LIB_0__::func_7(&(Global_1425351.f_17), iParam0);
}

bool func_273(var uParam0)
{
	return __LIB_10__::func_456(uParam0);
}

void func_274(var uParam0, var uParam1)
{
	if (__LIB_3__::func_761(uParam0, 4))
	{
		if (__LIB_0__::func_239(uParam1, 8388608))
		{
			if (__LIB_3__::func_786(uParam1))
			{
				__LIB_3__::func_787(uParam1->f_3);
				__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
			}
		}
		if (!__LIB_0__::func_239(uParam1, 8388608))
		{
			MISC::SET_TIME_SCALE(0.25f);
			__LIB_0__::func_240(uParam1, 8388608);
			__LIB_3__::func_834(3);
			__LIB_3__::func_787(uParam1->f_3);
			__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
		}
		else
		{
			switch (uParam1->f_3)
			{
				case 0:
					if (__LIB_0__::func_239(uParam1, 1048576))
					{
						uParam1->f_3++;
						__LIB_3__::func_787(uParam1->f_3);
						__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
					}
					if (__LIB_0__::func_239(uParam1, 16))
					{
						MISC::SET_TIME_SCALE(1f);
						uParam1->f_3++;
						__LIB_3__::func_787(uParam1->f_3);
						__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 1:
					if (__LIB_0__::func_239(uParam1, 16))
					{
						MISC::SET_TIME_SCALE(1f);
						uParam1->f_3++;
						uParam1->f_25 = __LIB_0__::func_45("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
						__LIB_3__::func_787(uParam1->f_3);
						__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 2:
					if (__LIB_3__::func_774(uParam1) > 0)
					{
						__LIB_0__::func_7(&(Global_40.f_9145), 1);
						__LIB_1__::func_390(__LIB_3__::func_805(uParam1, uParam0), 1);
						__LIB_0__::func_769();
						__LIB_3__::func_760();
						uParam1->f_3++;
					}
					break;
			}
		}
	}
}

bool func_275(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_58, 16))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::_0xBD6B242B8BD5543A(uParam0->f_1))
	{
		return true;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (__LIB_3__::func_797(iVar0))
		{
			if (bParam2)
			{
				__LIB_0__::func_7(&(uParam1->f_58), 16);
			}
			return true;
		}
	}
	return false;
}

bool func_276(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_58, 64))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (__LIB_3__::func_761(uParam0, 524288) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, 200432249))
	{
		if (bParam2)
		{
			__LIB_0__::func_7(&(uParam1->f_58), 64);
		}
		return true;
	}
	if (PED::_0xBD6B242B8BD5543A(*uParam0))
	{
		if (bParam2)
		{
			__LIB_0__::func_7(&(uParam1->f_58), 64);
		}
		return true;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(*uParam0, uParam0->f_1, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(*uParam0, &iVar0);
		if (__LIB_3__::func_797(iVar0))
		{
			if (bParam2)
			{
				__LIB_0__::func_7(&(uParam1->f_58), 64);
			}
			return true;
		}
	}
	return false;
}

bool func_277(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_58, 32))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (__LIB_3__::func_798(iVar0))
		{
			if (bParam2)
			{
				__LIB_0__::func_7(&(uParam1->f_58), 32);
			}
			return true;
		}
	}
	return false;
}

bool func_278(var uParam0, vector3 vParam1, int iParam4, int iParam5)
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
				__LIB_13__::func_119(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return true;
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
					__LIB_0__::func_7(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				__LIB_0__::func_7(&(uParam0->f_1), 1);
				return true;
			}
		}
	}
	return false;
}

void func_279()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), true);
	__LIB_1__::func_538(0);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
}

int func_280(var uParam0, var uParam1)
{
	if (__LIB_3__::func_764(uParam1))
	{
		return 1;
	}
	if (!__LIB_0__::func_899(&(uParam1->f_26)))
	{
		__LIB_4__::func_89(&(uParam1->f_26), 0);
	}
	switch (uParam1->f_59)
	{
		case 0:
			__LIB_3__::func_845(uParam0, uParam1, 0);
			if (__LIB_0__::func_27(uParam0->f_88, 2))
			{
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[0]))
				{
					CAM::DETACH_CAM(uParam1->f_20[0]);
					CAM::SET_CAM_ACTIVE(uParam1->f_20[0], false);
				}
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[2]))
				{
					CAM::SET_CAM_ACTIVE(uParam1->f_20[2], true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				MAP::DISPLAY_RADAR(false);
				__LIB_11__::func_533(uParam1, 3);
			}
			else
			{
				__LIB_3__::func_846(uParam0, uParam1);
				__LIB_11__::func_533(uParam1, 1);
			}
			break;
		case 1:
			__LIB_0__::func_11("DCS: INTRO START TO INTRO END");
			if (CAM::DOES_CAM_EXIST(uParam1->f_20[1]))
			{
				CAM::SET_CAM_ACTIVE(uParam1->f_20[1], true);
			}
			CAM::RENDER_SCRIPT_CAMS(true, true, uParam0->f_84, true, false, 0);
			__LIB_11__::func_533(uParam1, 2);
			break;
		case 2:
			__LIB_0__::func_11("DCS: INTRO START TO INTRO END");
			if (!CAM::DOES_CAM_EXIST(uParam1->f_20[1]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[1]))
			{
				__LIB_0__::func_11("DCS: INTRO END TO DUEL");
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[2]))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam1->f_20[2], uParam1->f_20[1], uParam0->f_85, 1, 1);
				}
				__LIB_11__::func_533(uParam1, 3);
			}
			break;
		case 3:
			__LIB_0__::func_11("DCS: INTRO END TO DUEL");
			if ((!CAM::DOES_CAM_EXIST(uParam1->f_20[2]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[2])) && (!CAM::DOES_CAM_EXIST(uParam1->f_20[0]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[0])))
			{
				if (!__LIB_0__::func_27(uParam0->f_88, 1024))
				{
					__LIB_0__::func_11();
				}
				__LIB_1__::func_561(&(uParam1->f_26));
				__LIB_11__::func_533(uParam1, 4);
				__LIB_1__::func_539();
				__LIB_0__::func_11("DCS: DUEL");
				return 1;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_281(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 512))
	{
		if (!__LIB_12__::func_987(uParam0))
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

void func_282(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_5__::func_439(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_12__::func_992(iParam0, iParam1, uParam2, fVar0);
	__LIB_12__::func_959(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_10__::func_518(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_12__::func_960(iParam1);
			}
		}
	}
}

void func_283(var uParam0)
{
	PED::_0xAE6004120C18DF97(*uParam0, 0, 0);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 7, 0);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 0, 0);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 1, 0);
}

void func_284(var uParam0)
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
	__LIB_2__::func_608(&(uParam0->f_2588));
}

void func_285(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0f, 0f, 0f };
	__LIB_3__::func_49(iParam0, iParam3, 0);
	__LIB_3__::func_50(uParam1, iParam2);
	__LIB_13__::func_13(iParam0, iParam4);
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

void func_286(var uParam0)
{
	__LIB_5__::func_467(50);
}

void func_287(int* iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, bool bParam5)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		return;
	}
	bVar0 = __LIB_5__::func_439(bParam5 >= 0f, bParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam2, true, false)));
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

void func_288(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_5__::func_107(&(uParam0->f_1765));
}

int func_289(int iParam0, int* iParam1, float fParam2, bool bParam3)
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
			__LIB_5__::func_107(&(iParam1->f_18));
			return 0;
		}
		else if (__LIB_2__::func_618(&(iParam1->f_18)))
		{
			__LIB_2__::func_608(&(iParam1->f_18));
			return 0;
		}
	}
	if (!__LIB_2__::func_618(&(iParam1->f_18)))
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
	return __LIB_11__::func_774(&(iParam1->f_18), fParam2);
	return 1;
}

void func_290(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_748(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_11__::func_598(iParam0, 0);
		}
	}
}

bool func_291(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (__LIB_10__::func_572(iParam1, iParam2, iParam0, bParam9, bParam10, bParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (__LIB_0__::func_572(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				__LIB_1__::func_221(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			__LIB_1__::func_221(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			__LIB_2__::func_369(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

void func_292(var uParam0, int iParam1, bool bParam2)
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
	__LIB_5__::func_107(&(uParam0->f_1765));
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

int func_293()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	Var0 = { __LIB_1__::func_615(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = __LIB_0__::func_857(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (!__LIB_0__::func_144(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (__LIB_0__::func_848(iVar14) || __LIB_0__::func_847(iVar14))
					{
					}
					else
					{
						Jump @220; //curOff = 195
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (__LIB_0__::func_848(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @260; //curOff = 223
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!__LIB_0__::func_848(iVar14) && __LIB_0__::func_688(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (__LIB_1__::func_419(iVar11, &Var16, 1))
									{
										if (!__LIB_1__::func_556(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

Vector3 func_294(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
				if (__LIB_12__::func_995(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

Vector3 func_295()
{
	return 1216.93f, -1426.31f, 70.66f;
}

void func_296(int iParam0)
{
	iLocal_25 = iParam0;
}

void func_297(int iParam0, vector3 vParam1, float fParam4)
{
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	if (fParam4 <= 0f)
	{
		return;
	}
	*iParam0 = GRAPHICS::_0x27219300C36A8D40(vParam1, fParam4, 0);
}

Vector3 func_298()
{
	return 1216.864f, -1426.252f, 70.38907f;
}

Vector3 func_299()
{
	return 0.77145f, 0.749265f, 1f;
}

Vector3 func_300()
{
	return 1213.454f, -1427.602f, 70.42501f;
}

Vector3 func_301()
{
	return 0f, 0f, 26.37869f;
}

Vector3 func_302()
{
	return 2.584339f, 4.234316f, 2.32231f;
}

Vector3 func_303()
{
	return 1213.403f, -1423.746f, 70.42501f;
}

Vector3 func_304()
{
	return 0f, 0f, -27.4043f;
}

Vector3 func_305()
{
	return 1219.294f, -1426.519f, 70.3761f;
}

Vector3 func_306()
{
	return 0.468989f, 0.495253f, 1f;
}

void func_307(var uParam0, bool bParam1, float fParam2, var uParam3, var uParam4, float fParam5)
{
	*bParam1 = (BUILTIN::SQRT(uParam0->f_745) + 2f);
	*fParam2 = (*bParam1 + 5f);
	*uParam3 = (*fParam2 + 10f);
	*uParam4 = (*uParam3 + 12f);
	*fParam5 = 2f;
}

int func_308(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(Global_1396084);
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Global_1396084);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "pedRoam_hashKey"))
			{
				if (DECORATOR::DECOR_GET_INT(iVar2, "pedRoam_hashKey") == iVar0)
				{
					iVar4 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar2);
					DECORATOR::DECOR_REMOVE(iVar4, "pedRoam_hashKey");
					ITEMSET::REMOVE_FROM_ITEMSET(iVar2, Global_1396084);
					return iVar4;
				}
			}
		}
		iVar3++;
	}
	return 0;
}

int func_309(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, Global_1396084))
		{
			return 1;
		}
		PED::SET_PED_KEEP_TASK(iParam0, true);
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1396084);
		__LIB_3__::func_327(iParam0, 0);
		__LIB_3__::func_328(iParam0, iParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam1);
			if (!__LIB_3__::func_329(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_310(int iParam0)
{
	if (__LIB_3__::func_746(*iParam0))
	{
		GRAPHICS::_0xAE7BF7CA9E4BA48D(*iParam0);
	}
}

bool func_311(int iParam0)
{
	return __LIB_0__::func_27(__LIB_5__::func_297(Global_1347702[31 /*49*/].f_15), iParam0);
}

void func_312(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<13> Var1;
	int iVar24;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = __LIB_1__::func_986(iParam0);
		Var1.f_1 = 10;
		Var1.f_12 = 10;
		Var1 = 1;
		Var1.f_1[0] = iParam1;
		Var1.f_12[0] = iParam2;
		iVar24 = 10;
		ENTITY::_0xA88E215CEB0435C0(iParam0, &Var1, iVar0, iVar24, 3, 0);
	}
}

bool func_313()
{
	if (!__LIB_0__::func_898(1446719356))
	{
		__LIB_0__::func_803(1446719356);
	}
	return STREAMING::_IS_IMAP_ACTIVE(joaat("P_12P_BLACKWHITE_CAMP"));
}

bool func_314()
{
	if (__LIB_0__::func_898(1446719356))
	{
		__LIB_0__::func_804(1446719356);
	}
	return !STREAMING::_IS_IMAP_ACTIVE(joaat("P_12P_BLACKWHITE_CAMP"));
}

void func_315(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, true);
	__LIB_0__::func_862(*uParam0, -1981788789);
}

void func_316(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
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
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

bool func_317(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_1__::func_148(&(iParam1->f_18));
			return false;
		}
		else if (__LIB_0__::func_75(&(iParam1->f_18)))
		{
			__LIB_0__::func_37(&(iParam1->f_18));
			return false;
		}
	}
	if (!__LIB_0__::func_75(&(iParam1->f_18)))
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
	return __LIB_3__::func_103(&(iParam1->f_18), fParam2);
	return true;
}

void func_318(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
	bVar0 = __LIB_12__::func_741(uParam0);
	if (!bVar0)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (__LIB_12__::func_738(uParam0))
			{
				bVar1 = false;
			}
			else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (__LIB_13__::func_191(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				__LIB_0__::func_11(uParam0);
				__LIB_0__::func_7(&(uParam0->f_172), 1);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 1);
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
}

void func_319(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		__LIB_3__::func_565(uParam1);
		if (__LIB_2__::func_515(iParam0, fParam7, iParam11, bParam12, bParam13, 1084227584 /* Float: 5f */))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_ENTITY_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10, 0);
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_320(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_4__::func_452(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_900(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
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

bool func_321(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		__LIB_10__::func_902(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_4__::func_452(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_4__::func_101(uParam4, 0, 0);
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

bool func_322(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && __LIB_0__::func_16(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_323(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		__LIB_0__::func_7(&(Global_1347702[iParam1 /*49*/].f_12), 4);
		Global_1347702[iParam1 /*49*/].f_35 = -1;
	}
	else
	{
		__LIB_0__::func_8(&(Global_1347702[iParam1 /*49*/].f_12), 4);
		Global_1347702[iParam1 /*49*/].f_35 = iParam2;
	}
}

void func_324(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1 && Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
		{
			Global_40.f_9829[iVar0 /*4*/].f_3 = iParam2;
		}
		iVar0++;
	}
}

void func_325(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (__LIB_0__::func_84(&(uParam0->f_206), 16))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam1))
	{
		__LIB_13__::func_36(&(uParam0->f_206), *iParam1, iParam2, iParam3, iParam4, iParam5);
	}
}

bool func_326(var uParam0)
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
		if (TASK::IS_PED_STILL(Global_35) || __LIB_9__::func_178(&(uParam0->f_2588)) > 2f)
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
		else if (__LIB_9__::func_178(&(uParam0->f_2588)) > 5f)
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

bool func_327(var uParam0)
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
		__LIB_1__::func_561(&(uParam0->f_2588));
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
	}
	else
	{
		if (!__LIB_0__::func_899(&(uParam0->f_2588)))
		{
			__LIB_4__::func_89(&(uParam0->f_2588), 1);
		}
		else if (__LIB_9__::func_178(&(uParam0->f_2588)) > 5f)
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

bool func_328(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
				if (__LIB_2__::func_973(iParam0, uParam2))
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
				if (__LIB_2__::func_970(iParam0, uParam2))
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

void func_329(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_1__::func_625();
	}
}

int func_330(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_371[iParam1 /*18*/];
		fVar3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
		fVar4 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1;
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
				if (!__LIB_12__::func_728(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!__LIB_12__::func_655(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					__LIB_12__::func_984(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_693(uParam0, 131072);
					__LIB_12__::func_984(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				__LIB_12__::func_984(uParam0, 5);
			}
			else
			{
				__LIB_13__::func_37(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_9__::func_178(&(uParam0->f_1765)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_13__::func_37(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_13__::func_37(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_13__::func_37(uParam0);
				}
				else
				{
					__LIB_12__::func_990(uParam0, iParam1, bParam2);
					__LIB_2__::func_259(&(uParam0->f_1765));
					__LIB_12__::func_984(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_12__::func_984(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_5__::func_386(uParam0->f_1799, 0);
				}
			}
			__LIB_2__::func_259(&(uParam0->f_1765));
			__LIB_12__::func_984(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_12__::func_984(uParam0, 10);
				}
				else
				{
					__LIB_12__::func_984(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_12__::func_984(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_12__::func_984(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_178(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!__LIB_12__::func_655(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_984(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_331(var uParam0)
{
	__LIB_12__::func_867(uParam0, iLocal_25[0], 7);
	__LIB_12__::func_867(uParam0, iLocal_25[1], 7);
	__LIB_12__::func_908(uParam0, 0);
}

bool func_332(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_1__::func_561(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
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
		if (__LIB_1__::func_583(fParam4) >= fParam9)
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

bool func_333(var uParam0)
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
		__LIB_1__::func_561(&(uParam0->f_2588));
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
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

void func_334(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

Vector3 func_335()
{
	return 902.3f, -384.62f, 89.25f;
}

Vector3 func_336()
{
	return 901.37f, -384.72f, 89.25f;
}

Vector3 func_337()
{
	return 902.15f, -384.86f, 88.3f;
}

Vector3 func_338()
{
	return 905.69f, -381.42f, 88.43f;
}

char* func_339(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@BWCG@leadout@RC3@Base";
	}
	return "";
}

void func_340(var uParam0)
{
	if (__LIB_3__::func_746(*uParam0))
	{
		GRAPHICS::_0xAE7BF7CA9E4BA48D(*uParam0);
	}
}

void func_341(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, true);
	__LIB_0__::func_862(*uParam0, 334248914);
}

bool func_342()
{
	if (!__LIB_0__::func_898(171107021))
	{
		__LIB_0__::func_803(171107021);
	}
	return STREAMING::_IS_IMAP_ACTIVE(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
}

bool func_343()
{
	if (__LIB_0__::func_898(171107021))
	{
		__LIB_0__::func_804(171107021);
	}
	return !STREAMING::_IS_IMAP_ACTIVE(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
}

bool func_344()
{
	if (__LIB_0__::func_895(Global_1347702[35 /*49*/].f_15) == 32)
	{
		return true;
	}
	return false;
}

void func_345(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_297(Global_1347702[31 /*49*/].f_15);
	__LIB_1__::func_683(&iVar0, iParam0);
	__LIB_7__::func_448(Global_1347702[31 /*49*/].f_15, iVar0);
	if (__LIB_13__::func_311(iParam0))
	{
	}
}

bool func_346(var uParam0)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	fVar0 = uParam0->f_745;
	bVar1 = false;
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_13__::func_247(uParam0, &bVar2, &uVar3, &uVar4, &uVar5, &fVar6);
			if (__LIB_12__::func_780(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, &(uParam0->f_2591), uVar5, uVar4, uVar3, bVar2, fVar6, 0, 0, 1, 1, 1))
			{
				bVar1 = true;
			}
		}
	}
	if (uParam0->f_743 <= fVar0 || bVar1)
	{
		return true;
	}
	return false;
}

bool func_347(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (__LIB_13__::func_322(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_348(int iParam0, bool bParam1, int iParam2)
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
				__LIB_9__::func_240(iParam0, __LIB_4__::func_816(iParam0), 0, 0);
			}
		}
		else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				__LIB_9__::func_240(iParam0, __LIB_1__::func_440(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
		}
	}
}

void func_349(var uParam0)
{
	if (__LIB_13__::func_322(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			__LIB_13__::func_258(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			__LIB_0__::func_11(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_350()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	__LIB_1__::func_532(Global_1347702[35 /*49*/].f_15, iVar0);
}

void func_351(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	if (!__LIB_0__::func_296(0, 0, 1) || bParam0)
	{
		iVar0 = __LIB_0__::func_786();
		iVar1 = __LIB_0__::func_416(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		bVar3 = __LIB_5__::func_439(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		bVar4 = __LIB_5__::func_439(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, bVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, bVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

bool func_352(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		if (__LIB_0__::func_895(Global_1347702[34 /*49*/].f_15) == 8)
		{
			return true;
		}
	}
	return false;
}

int func_353()
{
	return __LIB_0__::func_895(Global_1347702[35 /*49*/].f_15);
}

bool func_354(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
							__LIB_6__::func_750(iParam1, uParam4, uParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_10__::func_537(iParam1, uParam4, uParam0, bVar13, sParam9, fParam2);
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

Vector3 func_355(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { __LIB_13__::func_294(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_13__::func_294(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_356(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
	}
}

void func_357(var uParam0)
{
	__LIB_13__::func_222(uParam0, 2);
}

bool func_358(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!__LIB_13__::func_333(uParam0))
		{
			return false;
		}
	}
	return true;
}

int func_359(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_371[iParam1 /*18*/];
		fVar3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
		fVar4 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1;
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
				if (!__LIB_12__::func_728(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!__LIB_12__::func_655(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					__LIB_12__::func_984(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_693(uParam0, 131072);
					__LIB_12__::func_984(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				__LIB_12__::func_984(uParam0, 5);
			}
			else
			{
				__LIB_13__::func_37(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_4__::func_118(&(uParam0->f_1765)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_13__::func_37(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_13__::func_37(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_13__::func_37(uParam0);
				}
				else
				{
					__LIB_12__::func_990(uParam0, iParam1, bParam2);
					__LIB_2__::func_259(&(uParam0->f_1765));
					__LIB_12__::func_984(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_12__::func_984(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_5__::func_386(uParam0->f_1799, 0);
				}
			}
			__LIB_2__::func_259(&(uParam0->f_1765));
			__LIB_12__::func_984(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_12__::func_984(uParam0, 10);
				}
				else
				{
					__LIB_12__::func_984(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_12__::func_984(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_4__::func_118(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_12__::func_984(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_4__::func_118(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!__LIB_12__::func_655(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_984(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_360(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				__LIB_13__::func_258(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return joaat("DOCUMENT_COACH_ROBBERY_NOTE_01");
		case 5:
			return joaat("DOCUMENT_COACH_ROBBERY_NOTE_02");
		case 6:
			return joaat("DOCUMENT_COACH_ROBBERY_NOTE_03");
		case 12:
			return joaat("DOCUMENT_COACH_ROBBERY_NOTE_04");
		case 13:
			return joaat("DOCUMENT_COACH_ROBBERY_NOTE_05");
		case 0:
			return joaat("DOCUMENT_COACH_ROBBERY_NOTE_07");
		case 1:
			return joaat("DOCUMENT_COACH_ROBBERY_NOTE_08");
		case 2:
			return joaat("DOCUMENT_COACH_ROBBERY_NOTE_09");
		default:
			break;
	}
	return joaat("DOCUMENT_COACH_ROBBERY_NOTE_01");
}

bool func_362(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(Global_43617))
	{
		Global_43617 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_CLEAR_ITEMSET(Global_43617);
	iVar0 = ENTITY::_0x59B57C4B06531E1E(vParam0, fParam3, Global_43617, iParam4);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43617);
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (iParam7 == 1 && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
		}
		else if (iParam5 != iVar3 && iParam6 != iVar3)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_363(var uParam0, int iParam1)
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
			else if (__LIB_5__::func_51(&(uParam0->f_1768)) >= 15f)
			{
				__LIB_12__::func_693(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1664)
			{
				if (__LIB_5__::func_51(&(uParam0->f_1768)) >= 15f)
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
			return __LIB_5__::func_51(&(uParam0->f_1768)) >= 15f;
	}
	return false;
}

Vector3 func_364(vector3 vParam0, vector3 vParam3, float fParam6)
{
	float fVar0;
	fVar0 = ((1f - BUILTIN::COS(__LIB_3__::func_804((fParam6 * 3.141593f)))) * 0.5f);
	return vParam0 * FtoV((1f - fVar0)) + vParam3 * Vector(fVar0, fVar0, fVar0);
}

void func_365(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, int iParam9, float fParam10, int iParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;
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
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, iParam9, fParam10, iParam11, iParam13, fParam12);
	}
	else if (!__LIB_0__::func_138(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, iParam9, fParam10, iParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam14);
	}
}

void func_366(vector3 vParam0, float fParam3, int iParam4, float fParam5)
{
	if (__LIB_0__::func_86(vParam0))
	{
		return;
	}
	if (BUILTIN::VDIST2(Global_36, vParam0) <= (fParam3 * fParam3))
	{
		__LIB_3__::func_815(iParam4, fParam5);
	}
}

void func_367(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar0 /*30*/].f_3, vParam0) < fParam3)
		{
			__LIB_10__::func_426(iVar0);
		}
		iVar0++;
	}
}

void func_368(var uParam0)
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
		__LIB_13__::func_288(uParam0, 1);
	}
	else if ((!__LIB_12__::func_692(uParam0, uParam0->f_1580) && !__LIB_12__::func_695(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		__LIB_13__::func_288(uParam0, 3);
	}
	else
	{
		__LIB_13__::func_288(uParam0, 6);
	}
}

void func_369(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_281(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_11__::func_598(iParam0, 0);
		}
	}
}

void func_370()
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
	__LIB_8__::func_901(&(Global_1359489.f_40), 1);
}

bool func_371(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		__LIB_13__::func_284(uParam0);
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
				__LIB_13__::func_284(uParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_372(var uParam0)
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
			__LIB_8__::func_901(&(uParam0->f_2588), 1);
		}
		if (TASK::IS_PED_STILL(Global_35) || __LIB_9__::func_324(&(uParam0->f_2588)) > 2f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	else
	{
		if (!__LIB_2__::func_618(&(uParam0->f_2588)))
		{
			__LIB_8__::func_901(&(uParam0->f_2588), 1);
		}
		else if (__LIB_9__::func_324(&(uParam0->f_2588)) > 5f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
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

void func_373(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_12__::func_655(uParam0, 512))
	{
		return;
	}
	if (__LIB_9__::func_324(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

void func_374(var uParam0)
{
	uParam0->f_1581 = -1;
	__LIB_12__::func_691(uParam0, 0);
	__LIB_0__::func_115(uParam0, 3);
	__LIB_13__::func_288(uParam0, 0);
	__LIB_2__::func_608(&(uParam0->f_1765));
	__LIB_12__::func_860(uParam0);
	__LIB_2__::func_608(&(uParam0->f_1768));
}

bool func_375(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, iParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_2__::func_618(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_8__::func_901(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_2__::func_608(iParam4);
	}
	if (__LIB_2__::func_618(iParam4))
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
		if (__LIB_5__::func_51(iParam4) >= fParam9)
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

void func_376(int iParam0)
{
	if (__LIB_6__::func_708(iParam0))
	{
		if (__LIB_6__::func_844(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_40.f_9146.f_1 = -1;
			}
			else
			{
				Global_40.f_9146.f_1 = iParam0 + 1;
			}
		}
		else if (__LIB_6__::func_842(iParam0))
		{
			if (iParam0 == 3)
			{
				Global_40.f_9146.f_2 = -1;
			}
			else
			{
				Global_40.f_9146.f_2 = iParam0 + 1;
			}
		}
	}
	__LIB_10__::func_726(Global_40.f_9146.f_2);
	__LIB_10__::func_726(Global_40.f_9146.f_1);
}

void func_377(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (fParam4 <= 1.25f && __LIB_1__::func_652())
	{
		fVar1 = 15f;
		fVar0 = 20f;
	}
	else
	{
		fVar1 = 25f;
		fVar0 = 35f;
	}
	if (bParam10)
	{
		iVar2 = 25610;
	}
	else
	{
		iVar2 = 25602;
	}
	if (__LIB_0__::func_407(iParam0) && __LIB_1__::func_679(iParam0))
	{
		__LIB_1__::func_640(__LIB_4__::func_656(iParam0));
	}
	if (iParam1 != 0)
	{
		if (__LIB_0__::func_407(iParam1) && __LIB_1__::func_679(iParam1))
		{
			__LIB_1__::func_640(__LIB_4__::func_656(iParam1));
		}
	}
	if (!*bParam5)
	{
		__LIB_1__::func_714();
		__LIB_3__::func_456(iParam0);
		if (iParam1 != 0)
		{
			__LIB_3__::func_456(iParam1);
		}
		if (!PED::DOES_GROUP_EXIST(*iParam2))
		{
			*iParam2 = PED::CREATE_GROUP(2);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(iParam0, *iParam2, false);
		if (iParam1 != 0)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
			PED::SET_PED_CONFIG_FLAG(iParam1, 279, true);
			PED::SET_PED_AS_GROUP_MEMBER(iParam1, *iParam2);
		}
		PED::SET_GROUP_FORMATION(*iParam2, iParam8);
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam3, iParam9, iVar2, -1, 0, 0, -1);
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iParam0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
		PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iParam0, 1);
		*bParam5 = 1;
	}
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam3, iParam9, 25610, -1, 0, 0, -1);
			}
		}
		else
		{
			__LIB_6__::func_713(iParam0, fParam4, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, fVar1, fVar0, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, iParam11);
		}
	}
	if (iParam1 != 0)
	{
		if (__LIB_0__::func_272(iParam1, 0))
		{
			if (!*uParam6)
			{
				if (__LIB_0__::func_665(iParam1, iParam0, 1, 1) > 50f || (bParam7 && __LIB_0__::func_665(iParam1, iParam0, 1, 1) > 10f))
				{
					*uParam6 = 1;
				}
			}
			else
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1, 0))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam3, 0, 8, -1, 0, 0, -1);
				}
				else
				{
					__LIB_6__::func_808(iParam1, 2.5f);
				}
				if (__LIB_0__::func_665(iParam1, iParam0, 1, 1) < 12f)
				{
					if (!bParam7)
					{
						TASK::CLEAR_PED_TASKS(iParam1, true, false);
						PED::SET_PED_CONFIG_FLAG(iParam1, 279, true);
						PED::SET_PED_AS_GROUP_MEMBER(iParam1, PED::GET_PED_GROUP_INDEX(iParam0));
						*uParam6 = 0;
					}
				}
			}
		}
	}
}

bool func_378(int* iParam0)
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
			__LIB_8__::func_901(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_10__::func_250())
			{
			}
		}
		else
		{
			__LIB_8__::func_901(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_9__::func_324(&(iParam0->f_37)) >= 1.5f;
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

bool func_379(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<11> Var0;
	int iVar11;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2572))
	{
		if (__LIB_13__::func_20(uParam0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = bParam9;
	Var0.f_4 = bParam7;
	Var0.f_3 = bParam8;
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
	uParam0->f_2572 = __LIB_4__::func_720(&iVar11, &Var0);
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
		if (!__LIB_0__::func_272(uParam0->f_2572, 0))
		{
			return false;
		}
		else if (!__LIB_13__::func_20(uParam0))
		{
			return false;
		}
	}
	return true;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PRIVATESTEAMER01X");
		case 1:
			return joaat("PRIVATECOALCAR01X");
		case 2:
			return joaat("PRIVATEFLATCAR01X");
		case 3:
			return joaat("PRIVATEBOXCAR04X");
		case 4:
			return joaat("PRIVATEBAGGAGE01X");
		case 5:
			return joaat("PRIVATEPASSENGER01X");
		case 6:
			return joaat("PRIVATEPASSENGER01X");
		case 7:
			return joaat("PRIVATEPASSENGER01X");
		case 8:
			return joaat("PRIVATEPASSENGER01X");
		case 9:
			return joaat("PRIVATEFLATCAR01X");
		case 10:
			return joaat("CABOOSE01X");
		default:
			break;
	}
	return 0;
}

void func_381()
{
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
}

void func_382(var uParam0, var uParam1)
{
	if (MISC::IS_BIT_SET(*uParam1, 21))
	{
		__LIB_3__::func_97(uParam1);
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_36) || !__LIB_0__::func_272(*uParam0, 0))
	{
		return;
	}
	uParam1->f_36 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	VOLUME::_0x5B23DFF8E0948BB2(uParam1->f_36, 1);
}

void func_383(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (__LIB_0__::func_84(&(uParam0->f_206), 16))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		__LIB_13__::func_36(&(uParam0->f_206), *uParam1, iParam2, iParam3, iParam4, iParam5);
	}
}

bool func_384(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (__LIB_11__::func_840(iParam0, uParam1))
		{
			if (!__LIB_0__::func_27(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
				__LIB_0__::func_7(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(uParam1->f_10, 1))
		{
			__LIB_2__::func_363(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_8(&(uParam1->f_10), 1);
		}
	}
	return false;
}

void func_385(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				__LIB_13__::func_61(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_13__::func_232(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			__LIB_13__::func_30(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			__LIB_13__::func_61(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_13__::func_232(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_386(int iParam0)
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
		__LIB_13__::func_72(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_387(var uParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*uParam0, 14))
	{
		uParam0->f_26 = fParam1;
	}
}

int func_388(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!__LIB_0__::func_272(iParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(iParam1, iParam2);
		MISC::SET_BIT(&(uParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(iParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(iParam1, iParam3);
		}
		MISC::SET_BIT(&(uParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17) && MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

void func_389(var uParam0)
{
	if (MISC::IS_BIT_SET(*uParam0, 7))
	{
		if (MISC::IS_BIT_SET(uParam0->f_21, 3))
		{
			__LIB_3__::func_28(uParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 3))
	{
		__LIB_1__::func_283(&(uParam0->f_22), 0);
		if (uParam0->f_25 == 0f || __LIB_1__::func_285(&(uParam0->f_22), uParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 5);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_HIDE_HUD_COMPONENT(724769646);
			if (!MISC::IS_BIT_SET(uParam0->f_21, 4))
			{
				MISC::SET_BIT(&(uParam0->f_21), 4);
			}
		}
	}
}

bool func_390(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
							__LIB_6__::func_750(iParam1, uParam4, uParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_11__::func_843(iParam1, uParam4, uParam0, bVar13, sParam9, fParam2);
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

void func_391(var uParam0, int* iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	__LIB_13__::func_382(uParam0, iParam1);
	fVar0 = __LIB_0__::func_514(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			__LIB_1__::func_694(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_0__::func_514(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

bool func_392(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_262(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_35(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_393(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_0__::func_11(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_930(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

void func_394(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 2048))
	{
		return;
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		__LIB_12__::func_912(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 512))
		{
			__LIB_12__::func_742(uParam0, 0);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		__LIB_12__::func_997(uParam0, __LIB_13__::func_207(0), __LIB_13__::func_207(1), 0, 1, 1);
	}
	__LIB_0__::func_8(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (__LIB_11__::func_394(Global_35))
		{
			if (__LIB_12__::func_771())
			{
				__LIB_1__::func_240(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_7(&(uParam0->f_172), 2048);
}

struct<4> func_395(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 115.46f, -181.35f, 115.4814f };
			Var0.f_3 = 288.8529f;
			break;
		case 1:
			Var0 = { 223.6414f, 984.6785f, 189.8943f };
			Var0.f_3 = 166.0025f;
			break;
		case 2:
			Var0 = { 214.1792f, 1010.104f, 188.1044f };
			Var0.f_3 = 345.9134f;
			break;
		case 3:
			Var0 = { 197.275f, 985.9788f, 189.2538f };
			Var0.f_3 = 51.993f;
			break;
		case 4:
			Var0 = { 198.013f, 985.6523f, 189.251f };
			Var0.f_3 = 102.9493f;
			break;
		case 5:
			Var0 = { 121.825f, -189.7013f, 116.2797f };
			Var0.f_3 = 191.0489f;
			break;
	}
	return Var0;
}

void func_396(var uParam0)
{
	__LIB_12__::func_656(uParam0, 3f);
	__LIB_12__::func_657(uParam0, 5f);
}

void func_397(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_0__::func_11(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_930(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

bool func_398(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_233(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_889(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_914(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_385(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_399(var uParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_13__::func_388(iParam1, *uParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	__LIB_13__::func_387(iParam1, fParam3);
	__LIB_13__::func_391(uParam0, iParam1, uParam2, fVar0);
	__LIB_13__::func_389(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_11__::func_843(iParam1, uParam2, uParam0, bVar1, sParam5, fVar0);
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

void func_400(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				__LIB_13__::func_258(uParam0);
				__LIB_13__::func_147(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_401(var uParam0, int iParam1)
{
	uParam0->f_2571 = iParam1;
}

void func_402(var uParam0, char[32] cParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return;
	}
	uParam0->f_358 = { cParam1 };
}

void func_403(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_55[iParam1], false))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_55[iParam1]);
	}
}

struct<4> func_404(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 2583.01f, -1009.53f, 44.0815f };
			Var0.f_3 = 194.7951f;
			break;
		case 1:
			Var0 = { 2583.152f, -1008.586f, 43.24f };
			Var0.f_3 = 34.648f;
			break;
		case 2:
			Var0 = { 2586.494f, -1009.154f, 43.24f };
			Var0.f_3 = 240.7397f;
			break;
		case 3:
			Var0 = { 2586.494f, -1009.154f, 43.24f };
			Var0.f_3 = 240.7397f;
			break;
		case 4:
			Var0 = { 2586.49f, -1009.15f, 44.24f };
			Var0.f_3 = 240.7397f;
			break;
		case 5:
			Var0 = { 2586.494f, -1009.154f, 43.24f };
			Var0.f_3 = 240.7397f;
			break;
	}
	return Var0;
}

char* func_405(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "script@rcm@exo@leadin@rsc1@enter_base_exits";
			break;
		case 1:
			sVar0 = "script@rcm@exo@leadin@rsc2@enter_base_exits";
			break;
		case 2:
			sVar0 = "script@rcm@exo@leadin@rsc3@base_enter_exits";
			break;
		case 3:
			sVar0 = "script@rcm@exo@leadin@rsc4@base";
			break;
		case 4:
			sVar0 = "script@rcm@exo@leadin@rsc5@base";
			break;
	}
	return sVar0;
}

char* func_406(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			sVar0 = "pl_leadin";
			break;
		case 0:
		case 5:
		case 9:
			sVar0 = "pl_base";
			break;
		case 2:
		case 6:
		case 10:
			sVar0 = "pl_enter";
			break;
		case 3:
		case 7:
		case 11:
			sVar0 = "pl_exit";
			break;
		case 4:
		case 8:
		case 12:
			sVar0 = "pl_exit_quick";
			break;
	}
	return sVar0;
}

void func_407(var uParam0)
{
	__LIB_12__::func_658(uParam0, 1);
	__LIB_12__::func_659(uParam0, 1);
	__LIB_12__::func_657(uParam0, 8f);
	__LIB_12__::func_656(uParam0, 6f);
}

char* func_408(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<8> Var5;
	if (!__LIB_0__::func_720(17, &Var0))
	{
		return "";
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_STRING(&Var5, &Var0);
	return __LIB_0__::func_67(Var5);
}

void func_409(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1))
	{
		if (__LIB_0__::func_393(Global_35, uParam0->f_1, 0, 1))
		{
			if (!__LIB_0__::func_27(uParam0->f_62, 32768))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", false);
				__LIB_1__::func_683(&(uParam0->f_62), 32768);
			}
		}
		else if (__LIB_0__::func_27(uParam0->f_62, 32768))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", true);
			__LIB_1__::func_681(&(uParam0->f_62), 32768);
		}
	}
}

void func_410(int iParam0)
{
	__LIB_1__::func_532(__LIB_12__::func_609(iParam0), 1);
}

void func_411(var uParam0, var uParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_55[0], false))
		{
			if (__LIB_0__::func_27(uParam0->f_62, 1024))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2586.272f, -1010.304f, 43.2399f, 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_COWER(0, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				__LIB_1__::func_681(&(uParam0->f_62), 1024);
			}
			if (__LIB_0__::func_27(uParam0->f_62, 512))
			{
				if (!__LIB_6__::func_904())
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_1__::func_681(&(uParam0->f_62), 512);
				}
			}
			else if (!__LIB_1__::func_205(Global_35, uParam0->f_3, 1, 0) && !__LIB_1__::func_205(Global_35, uParam0->f_1, 1, 0))
			{
				if (!__LIB_0__::func_27(uParam0->f_62, 8192))
				{
					if (!__LIB_6__::func_904())
					{
						__LIB_12__::func_876(uParam1, "RCEXO_ATTK_STRE", 0);
						__LIB_1__::func_683(&(uParam0->f_62), 8192);
					}
				}
			}
		}
	}
}

void func_412(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_724(uParam0->f_5))
	{
		iVar0 = 404931123;
		uParam0->f_5 = iVar0;
		__LIB_1__::func_948(uParam0->f_5, 0, 0f, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_30(uParam0->f_5))
		{
		}
	}
	if (!__LIB_0__::func_724(uParam0->f_6))
	{
		iVar0 = -1242031225;
		uParam0->f_6 = iVar0;
		__LIB_1__::func_948(uParam0->f_6, 0, 0f, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_30(uParam0->f_6))
		{
		}
	}
}

bool func_413(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 26695;
	iVar1 = 4400;
	iVar2 = 16384;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (__LIB_1__::func_205(Global_35, uParam1->f_3, 1, 0) || __LIB_1__::func_205(Global_35, uParam1->f_1, 1, 0))
		{
			if (!__LIB_13__::func_392(uParam1, &(uParam0->f_178), &iVar0, 1, 1, 0) || __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_55[0], false))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam1->f_55[0], "pl_EXIT_QUICK") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam1->f_55[0], "pl_EXIT_QUICK"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam1->f_55[0], "pl_EXIT_QUICK");
					}
					if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam1->f_55[0], "pl_EXIT_QUICK"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam1->f_55[0], "pl_EXIT_QUICK", true);
						__LIB_6__::func_815(&(uParam1->f_66), *uParam1);
						MISC::_0x870708A6E147A9AD(*uParam1, "", 35f, 35f, 8, 0, 0, 0, 0, -1);
						PED::SET_PED_CONFIG_FLAG(*uParam1, 297, true);
						if (!__LIB_0__::func_27(uParam1->f_62, 1024))
						{
							__LIB_1__::func_683(&(uParam1->f_62), 1024);
						}
						__LIB_12__::func_876(uParam0, "RCEXO_FLEE", 0);
						return true;
					}
				}
				else
				{
					if (!__LIB_0__::func_27(uParam1->f_62, 1024))
					{
						__LIB_1__::func_683(&(uParam1->f_62), 1024);
					}
					__LIB_12__::func_876(uParam0, "RCEXO_FLEE", 0);
					return true;
				}
			}
		}
		else if (!__LIB_13__::func_392(uParam1, &(uParam0->f_178), &iVar1, 1, 1, 0))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_55[0], false))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam1->f_55[0], "pl_EXIT_QUICK") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam1->f_55[0], "pl_EXIT_QUICK"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam1->f_55[0], "pl_EXIT_QUICK");
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam1->f_55[0], "pl_EXIT_QUICK"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam1->f_55[0], "pl_EXIT_QUICK", true);
					__LIB_6__::func_815(&(uParam1->f_66), *uParam1);
					MISC::_0x870708A6E147A9AD(*uParam1, "", 35f, 35f, 8, 0, 0, 0, 0, -1);
					PED::SET_PED_CONFIG_FLAG(*uParam1, 297, true);
					if (!__LIB_0__::func_27(uParam1->f_62, 512))
					{
						__LIB_1__::func_683(&(uParam1->f_62), 512);
					}
					return true;
				}
			}
			else
			{
				if (!__LIB_0__::func_27(uParam1->f_62, 512))
				{
					__LIB_1__::func_683(&(uParam1->f_62), 512);
				}
				return true;
			}
		}
		else if (!__LIB_13__::func_392(uParam1, &(uParam0->f_178), &iVar2, 1, 1, 0) || __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_55[0], false))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam1->f_55[0], "pl_EXIT_QUICK") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam1->f_55[0], "pl_EXIT_QUICK"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam1->f_55[0], "pl_EXIT_QUICK");
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam1->f_55[0], "pl_EXIT_QUICK"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam1->f_55[0], "pl_EXIT_QUICK", true);
					__LIB_6__::func_815(&(uParam1->f_66), *uParam1);
					MISC::_0x870708A6E147A9AD(*uParam1, "", 35f, 35f, 8, 0, 0, 0, 0, -1);
					PED::SET_PED_CONFIG_FLAG(*uParam1, 297, true);
					if (!__LIB_0__::func_27(uParam1->f_62, 512))
					{
						__LIB_1__::func_683(&(uParam1->f_62), 512);
					}
					__LIB_4__::func_389(404931123, 1, 0);
					__LIB_4__::func_389(-1242031225, 1, 0);
					return true;
				}
			}
			else
			{
				if (!__LIB_0__::func_27(uParam1->f_62, 512))
				{
					__LIB_1__::func_683(&(uParam1->f_62), 512);
				}
				__LIB_4__::func_389(404931123, 1, 0);
				__LIB_4__::func_389(-1242031225, 1, 0);
				return true;
			}
		}
	}
	return false;
}

bool func_414(var uParam0)
{
	bool bVar0;
	if (__LIB_12__::func_738(uParam0))
	{
		return true;
	}
	bVar0 = false;
	if (__LIB_0__::func_1(uParam0->f_172, 4096) || __LIB_12__::func_766())
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		if (!bVar0)
		{
			return true;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_13__::func_259(uParam0, bVar0);
		if (__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			return true;
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1048576))
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
		if (bVar0)
		{
			return false;
		}
		if (uParam0->f_171 != 0 || __LIB_13__::func_346(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_415(var uParam0)
{
	if (__LIB_0__::func_27(Local_14.f_62, 32768))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", true);
	}
}

bool func_416(var uParam0, int iParam1)
{
	switch (uParam0->f_64)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_55[iParam1]))
			{
				uParam0->f_55[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_13__::func_405(iParam1), 0, 0, false, true);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_55[iParam1]))
			{
				return false;
			}
			uParam0->f_64 = 1;
			break;
		case 1:
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_55[iParam1]);
			uParam0->f_64 = 2;
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_55[iParam1], true, false))
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "JOHN", Global_35, 0);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "ARTHUR", Global_35, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "EXOTICCOLLECTOR", *uParam0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "s_inv_Orchid_Ghost_01x", uParam0->f_26, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "S_FLOWERTWEEZERS01X", uParam0->f_53, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "S_FLOWERTWEEZERS01X^1", uParam0->f_54, 0);
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "JOHN", Global_35, 0);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "ARTHUR", Global_35, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "EXOTICCOLLECTOR", *uParam0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "s_inv_Orchid_Ghost_01x", uParam0->f_26, 0);
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "JOHN", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_55[iParam1], "b_PlayerArthur", false, false);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_55[iParam1], "b_PlayerArthur", true, false);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "ARTHUR", Global_35, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "CS_EXOTICCOLLECTOR", *uParam0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55[iParam1], "p_cs_note01x", uParam0->f_10, 0);
					break;
			}
			uParam0->f_64 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_417(var uParam0, int iParam1, int iParam2)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_55[iParam1], __LIB_13__::func_406(iParam2)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_55[iParam1], __LIB_13__::func_406(iParam2));
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_55[iParam1], __LIB_13__::func_406(iParam2)))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_55[iParam1], __LIB_13__::func_406(iParam2), true);
		return true;
	}
	return false;
}

void func_418(int iParam0)
{
	char* sVar0;
	sVar0 = __LIB_13__::func_408(iParam0, 11);
	TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, true);
}

bool func_419(var uParam0, var uParam1)
{
	__LIB_13__::func_411(uParam0, uParam1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (BUILTIN::TIMERA() > 10000)
		{
			if (__LIB_0__::func_665(Global_35, *uParam0, 1, 1) < 10f)
			{
				if (!__LIB_5__::func_236(1))
				{
					__LIB_12__::func_876(uParam1, "RCEXO_FLEE", 0);
					BUILTIN::SETTIMERA(0);
				}
			}
		}
		if (__LIB_0__::func_665(Global_35, *uParam0, 1, 1) < 50f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_94(Global_35, Global_1347702[uParam1->f_174 /*49*/].f_24, 1) < 50f)
	{
		return false;
	}
	return true;
}

bool func_420(var uParam0, var uParam1)
{
	struct<4> Var0;
	switch (uParam1->f_174)
	{
		case 43:
			Var0 = { __LIB_13__::func_404(0) };
			break;
		case 44:
			Var0 = { __LIB_13__::func_404(1) };
			break;
		case 45:
			Var0 = { __LIB_13__::func_404(2) };
			break;
		case 46:
			Var0 = { __LIB_13__::func_404(3) };
			break;
		case 47:
			Var0 = { __LIB_13__::func_404(4) };
			break;
		case 48:
			Var0 = { __LIB_13__::func_404(5) };
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = Global_1347702[uParam1->f_174 /*49*/].f_43;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*uParam0, Var0, Var0.f_3, true, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
		__LIB_12__::func_875(uParam1, *uParam0, "ALGERNON_WASP", 1);
		if (__LIB_0__::func_181())
		{
			__LIB_12__::func_875(uParam1, Global_35, "JOHN", 1);
		}
		else
		{
			__LIB_12__::func_875(uParam1, Global_35, "ARTHUR", 1);
		}
		__LIB_13__::func_412(uParam0);
		__LIB_13__::func_260(uParam1, *uParam0);
		PED::_0x5240864E847C691C(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 179, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 197, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 198, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 253, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 169, true);
		ENTITY::SET_ENTITY_PROOFS(*uParam0, 2, true);
	}
	return true;
}

bool func_421(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !__LIB_13__::func_96(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
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

int func_422(var uParam0)
{
	if (__LIB_13__::func_413(uParam0, &Local_14))
	{
		return 1;
	}
	return 0;
}

bool func_423(var uParam0)
{
	return __LIB_1__::func_205(Global_35, Local_14.f_1, 1, 0);
}

bool func_424(int iParam0, float fParam1)
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
								Jump @311; //curOff = 293
								if (fParam1 < 10f)
								{
									return true;
								}
								Jump @318; //curOff = 311
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

bool func_425(var uParam0)
{
	__LIB_13__::func_409(&Local_14);
	if (!__LIB_13__::func_419(&Local_14, uParam0))
	{
		return false;
	}
	return true;
}

void func_426(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	__LIB_13__::func_415(uParam0);
	__LIB_3__::func_319(uParam0->f_751);
	__LIB_12__::func_739(uParam0);
	__LIB_12__::func_907(uParam0);
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_0__::func_698(2);
	iVar0 = 0;
	bVar2 = false;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		__LIB_12__::func_784(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (__LIB_12__::func_644(uParam0) == 2)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	else
	{
		__LIB_2__::func_788(&(Global_1347702[uParam0->f_174 /*49*/].f_43), 1, 0, 1);
	}
	Global_1347702[uParam0->f_174 /*49*/].f_43 = 0;
	__LIB_12__::func_652(uParam0);
	__LIB_12__::func_653(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
	}
	if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_8__::func_993(uParam0->f_174);
	}
	if (__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		__LIB_1__::func_559(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
	}
	__LIB_12__::func_966(uParam0, 0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	if (Global_1347702[uParam0->f_174 /*49*/].f_35 != -1)
	{
		__LIB_12__::func_654(uParam0->f_174, 0);
	}
	if (__LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && __LIB_0__::func_298(0) == Global_1888801[16 /*35*/])
		{
			__LIB_4__::func_838(uParam0->f_174, 8192);
		}
	}
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 32768);
	__LIB_12__::func_949(uParam0);
	__LIB_0__::func_769();
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	__LIB_4__::func_509(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_427(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
				if (__LIB_2__::func_973(iParam0, uParam2))
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
				if (__LIB_2__::func_970(iParam0, uParam2))
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

bool func_428(var uParam0)
{
	bool bVar0;
	if (__LIB_12__::func_738(uParam0))
	{
		return true;
	}
	bVar0 = false;
	if (__LIB_0__::func_1(uParam0->f_172, 4096) || __LIB_12__::func_766())
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		if (!bVar0)
		{
			return true;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_13__::func_259(uParam0, bVar0);
		if (__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			return true;
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1048576))
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
		if (bVar0)
		{
			return false;
		}
		if (uParam0->f_171 != 0 || __LIB_13__::func_423(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_429(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*iParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_262(*iParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_228(iParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_226(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

struct<4> func_430(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 337.3075f, -684.5404f, 41.8362f };
			Var0.f_3 = 57.497f;
			break;
		case 1:
			Var0 = { 341.9155f, -665.392f, 41.8046f };
			Var0.f_3 = 12.7f;
			break;
		case 2:
			Var0 = { 345.9745f, -657.4915f, 40.974f };
			Var0.f_3 = 142.1478f;
			break;
		case 3:
			Var0 = { 344.3603f, -656.8503f, 40.974f };
			Var0.f_3 = 150.4743f;
			break;
		case 4:
			Var0 = { 346.4935f, -654.9822f, 40.974f };
			Var0.f_3 = 147.7011f;
			break;
		case 5:
			Var0 = { -5081.859f, -4120.545f, -29.4379f };
			Var0.f_3 = 237.4324f;
			break;
		case 6:
			Var0 = { -5082.101f, -4116.262f, -29.5282f };
			Var0.f_3 = 255.8221f;
			break;
	}
	return Var0;
}

bool func_431()
{
	return Global_1357507;
}

void func_432(var uParam0, bool bParam1)
{
	if (!MISC::IS_BIT_SET(*uParam0, 7))
	{
		if (bParam1)
		{
			CAM::_0xC64ABC0676AF262B();
		}
		else
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 3);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 4))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 4);
	}
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
}

void func_433(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_272(iParam1, 0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_56))
		{
			iVar0 = uParam0->f_56;
		}
		else
		{
			return;
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 16);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 18);
	}
	if (MAP::_0x3CB8859F04763C78(iParam1, iVar0))
	{
		MAP::_0x44813684F72B563C(iParam1, iVar0);
	}
	if (uParam0->f_55 != 0)
	{
		uParam0->f_55 = 0;
	}
}

char* func_434(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "script@rcm@fsh@leadin@rsc1@leadin";
			break;
		case 1:
			sVar0 = "script@rcm@fsh@leadin@rsc2@leadin";
			break;
		case 2:
			sVar0 = "script@rcm@rcfsh@ig@ig2_fishing_catfish@ig2_fishing_catfish";
			break;
		case 3:
			sVar0 = "script@respawn@SKY@SKYTIMELAPSE_1800_01";
			break;
		case 4:
			sVar0 = "script@rcm@fsh@leadout@ext@leadout";
			break;
	}
	return sVar0;
}

char* func_435(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_base";
			break;
		case 1:
			sVar0 = "pl_leadin";
			break;
		case 3:
			sVar0 = "pl_leadin_John";
			break;
		case 4:
			sVar0 = "pl_IG2_FishingCatfish_ConvoArtLT";
			break;
		case 5:
			sVar0 = "pl_IG2_FishingCatfish_ConvoArtRT";
			break;
		case 6:
			sVar0 = "pl_IG2_FishingCatfish_Eaten";
			break;
		case 7:
			sVar0 = "pl_IG2_FishingCatfish_SoThenISaid";
			break;
		case 8:
			sVar0 = "pl_leadout";
			break;
	}
	return sVar0;
}

void func_436(int iParam0)
{
	if (PHYSICS::DOES_ROPE_EXIST(Local_14.f_8))
	{
		PHYSICS::_0x814D453FCFDF119F(Local_14.f_8, iParam0, 1);
	}
	if (PHYSICS::DOES_ROPE_EXIST(Local_14.f_9))
	{
		PHYSICS::_0x814D453FCFDF119F(Local_14.f_9, iParam0, 1);
	}
}

bool func_437()
{
	STREAMING::REQUEST_MODEL(Local_14.f_1, false);
	STREAMING::REQUEST_MODEL(Local_14.f_2, false);
	STREAMING::REQUEST_MODEL(Local_14.f_3, false);
	if ((STREAMING::HAS_MODEL_LOADED(Local_14.f_1) && STREAMING::HAS_MODEL_LOADED(Local_14.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_14.f_3))
	{
		return true;
	}
	return false;
}

bool func_438(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_14.f_4))
	{
		Local_14.f_4 = "line_attach";
	}
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, Local_14.f_4);
	vVar1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_5))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - Local_14.f_10);
		Local_14.f_5 = OBJECT::CREATE_OBJECT(Local_14.f_1, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(Local_14.f_5, 0, Local_14.f_15);
		ENTITY::_0x978AA2323ED32209(Local_14.f_5, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_14.f_5, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - (Local_14.f_10 + Local_14.f_11));
		Local_14.f_6 = OBJECT::CREATE_OBJECT(Local_14.f_2, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(Local_14.f_6, 0, Local_14.f_15);
		ENTITY::_0x978AA2323ED32209(Local_14.f_6, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_14.f_6, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_5) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_6))
	{
		if (!PHYSICS::DOES_ROPE_EXIST(Local_14.f_8))
		{
			vVar4 = { vVar1 };
			Local_14.f_8 = PHYSICS::_ADD_ROPE_2(vVar4, 0f, 0f, 0f, Local_14.f_12, 8, false, -1, -1f);
			PHYSICS::_0xD699E688B49C0FD2(Local_14.f_8, 0.5f, Local_14.f_10, Local_14.f_10, 1);
			PHYSICS::_0x462FF2A432733A44(Local_14.f_8, iParam0, Local_14.f_5, 0f, 0f, 0f, 0f, 0f, 0f, Local_14.f_4, "rod_attach");
			PHYSICS::_0x3C6490D940FF5D0B(Local_14.f_8, 0, 0, -1082130432 /* Float: -1f */, 1);
			PHYSICS::_0xBB3E9B073E66C3C9(Local_14.f_8, 1, 1, 1, 0);
			PHYSICS::_0x423C6B1F3786D28B(Local_14.f_8, 1);
			PHYSICS::ROPE_SET_UPDATE_ORDER(Local_14.f_8, 1);
			PHYSICS::_0xC89E7410A93AC19A(Local_14.f_8, 2f);
			PHYSICS::_0x1D97DA8ACB5D2582(Local_14.f_8, 15);
		}
		if (!PHYSICS::DOES_ROPE_EXIST(Local_14.f_9))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_14.f_5, true, false) };
			Local_14.f_9 = PHYSICS::_ADD_ROPE_2(vVar4, 0f, 0f, 0f, Local_14.f_11, 10, false, -1, -1f);
			PHYSICS::_0xD699E688B49C0FD2(Local_14.f_9, 0.5f, Local_14.f_11, Local_14.f_11, 1);
			PHYSICS::_0x462FF2A432733A44(Local_14.f_9, Local_14.f_5, Local_14.f_6, 0f, 0f, 0f, 0f, 0f, 0f, "hook_attach", "fishingLine_bone");
			PHYSICS::_0x3C6490D940FF5D0B(Local_14.f_9, 0, 0, -1082130432 /* Float: -1f */, 1);
			PHYSICS::_0xBB3E9B073E66C3C9(Local_14.f_9, 1, 1, 1, 0);
			PHYSICS::ROPE_SET_UPDATE_ORDER(Local_14.f_9, 1);
			PHYSICS::_0xC89E7410A93AC19A(Local_14.f_9, 0f);
		}
	}
	return (PHYSICS::DOES_ROPE_EXIST(Local_14.f_8) && PHYSICS::DOES_ROPE_EXIST(Local_14.f_9));
}

void func_439(int iParam0)
{
	if (Local_14 != iParam0)
	{
		Local_14 = iParam0;
	}
}

bool func_440()
{
	if ((!PHYSICS::DOES_ROPE_EXIST(Local_14.f_8) || !ENTITY::DOES_ENTITY_EXIST(Local_14.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_14.f_6))
	{
		return false;
	}
	if (Local_14.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(Local_14.f_8, Local_14.f_14);
		PHYSICS::START_ROPE_WINDING(Local_14.f_8);
		Local_14.f_17 = 1;
	}
	else if (PHYSICS::_0x3D69537039F8D824(Local_14.f_8) <= Local_14.f_10)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_14.f_8);
		Local_14.f_17 = 0;
		PHYSICS::SET_DAMPING(Local_14.f_5, 0, Local_14.f_15);
		PHYSICS::SET_DAMPING(Local_14.f_6, 0, Local_14.f_15);
		return true;
	}
	return false;
}

void func_441(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_21, 2) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_35))
	{
		__LIB_3__::func_59(uParam0->f_35);
		__LIB_0__::func_172(uParam0->f_35);
		MISC::CLEAR_BIT(&(uParam0->f_21), 2);
	}
}

void func_442(var uParam0)
{
	__LIB_0__::func_172(uParam0->f_36);
}

void func_443(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(Local_14.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_14.f_6))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_14.f_5, true, false) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 0f, 10f, 0f) };
	vVar7 = { __LIB_0__::func_173(vVar4 - vVar0) };
	fVar10 = 1f;
	fVar11 = 0f;
	__LIB_12__::func_608(&fVar10, &fVar11, 45f);
	vVar12 = { __LIB_0__::func_173(vVar7.x, vVar7.y, fVar11) };
	vVar15 = { vVar12 * FtoV((Local_14.f_12 * 5f)) };
	PHYSICS::SET_DAMPING(Local_14.f_5, 0, Local_14.f_16);
	PHYSICS::SET_DAMPING(Local_14.f_6, 0, Local_14.f_16);
	ENTITY::APPLY_FORCE_TO_ENTITY(Local_14.f_5, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
	ENTITY::APPLY_FORCE_TO_ENTITY(Local_14.f_6, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_14.f_5, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_14.f_6, true);
}

Vector3 func_444(int iParam0, int iParam1, var uParam2)
{
	return __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), uParam2);
}

void func_445(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_21, 5))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		MISC::CLEAR_BIT(&(uParam0->f_21), 5);
	}
	__LIB_1__::func_539();
}

void func_446(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
	}
	if (bParam5 && joaat("AT_HORSE") != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, iParam6);
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_39 == joaat("PLAYER_ZERO"))
		{
			iVar2 = __LIB_6__::func_932(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				__LIB_1__::func_465(iVar2, 0);
			}
		}
		else
		{
			iVar2 = __LIB_6__::func_932(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar2))
				{
					iVar2 = __LIB_6__::func_932(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						__LIB_1__::func_465(iVar2, 0);
					}
				}
			}
		}
	}
}

bool func_447(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_1__::func_561(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
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
		if (__LIB_1__::func_583(fParam4) >= fParam9)
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

bool func_448(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 512))
	{
		if (!__LIB_13__::func_326(uParam0))
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

bool func_449(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!__LIB_13__::func_327(uParam0))
		{
			return false;
		}
	}
	return true;
}

void func_450(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 4) && uParam0->f_371[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_371[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 64) && __LIB_12__::func_727(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_371[iParam1 /*18*/].f_3 >= 0 && uParam0->f_371[iParam1 /*18*/].f_5 >= 0) && uParam0->f_371[iParam1 /*18*/].f_3 != uParam0->f_371[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_13__::func_330(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_451(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_13__::func_330(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_1__::func_583(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

void func_452(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 2048))
	{
		return;
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		__LIB_12__::func_912(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 512))
		{
			__LIB_12__::func_742(uParam0, 0);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		__LIB_13__::func_62(uParam0, __LIB_13__::func_207(0), __LIB_13__::func_207(1), 0, 1, 1);
	}
	__LIB_0__::func_8(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (__LIB_11__::func_394(Global_35))
		{
			if (__LIB_12__::func_771())
			{
				__LIB_1__::func_240(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_7(&(uParam0->f_172), 2048);
}

void func_453(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_13__::func_398(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

bool func_454(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_427(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_25(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_455(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_0__::func_11(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_930(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

int func_456(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!__LIB_13__::func_454(&(Global_1347702[uParam0->f_174 /*49*/].f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_457(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_12__::func_752(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_348))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
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
	if (__LIB_0__::func_1(uParam0->f_405, 512))
	{
		bVar2 = true;
	}
	if (__LIB_5__::func_579(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		__LIB_1__::func_625();
	}
}

void func_458(var uParam0)
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
	if (__LIB_5__::func_579(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

int func_459(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam1, iParam2, bParam3, bParam4, false);
	return iVar0;
}

bool func_460(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
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

bool func_461(int* iParam0)
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
		bVar0 = __LIB_9__::func_178(&(iParam0->f_52)) >= 1.5f;
		if ((!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) || bVar0)
		{
			__LIB_1__::func_561(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

void func_462(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_281(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_12__::func_953(iParam0, 0);
		}
	}
}

int func_463(int iParam0)
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
		bVar0 = __LIB_9__::func_178(&(iParam0->f_49)) >= 1.5f;
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

int func_464(int iParam0)
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
		bVar0 = __LIB_9__::func_178(&(iParam0->f_40)) >= 1.5f;
		if (!Global_1357517 || bVar0)
		{
			__LIB_1__::func_561(&(iParam0->f_40));
			MISC::SET_BIT(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

void func_465(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	char[] cVar0[8];
	if (__LIB_0__::func_181())
	{
		StringCopy(&cVar0, "JOHN", 8);
	}
	else
	{
		StringCopy(&cVar0, "ARTHUR", 8);
	}
	__LIB_13__::func_46(&(uParam0->f_206), Global_35, &cVar0, iParam1, iParam2, bParam3);
}

void func_466(int iParam0, int iParam1)
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
			__LIB_13__::func_149(iParam0, 1, 1, iParam1, 32);
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

void func_467()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { __LIB_13__::func_355(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_468(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				__LIB_13__::func_450(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_13__::func_451(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			__LIB_13__::func_330(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			__LIB_13__::func_450(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_13__::func_451(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

bool func_469(int iParam0)
{
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1;
	}
	return false;
}

void func_470(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_0__::func_11(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_930(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

void func_471(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	TASK::_0xDF8A5855B9F9A97B(iParam0, 0, 0, vParam4, vParam1, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, 0, 0);
}

void func_472(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
	{
		PED::_0xEEED8FAFEC331A70(*iParam0, ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 1);
	}
	else if (iParam6 == 1)
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
	}
	if (iParam7 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
	}
	if (iParam11 == -1)
	{
		iVar0 = 33346;
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iVar0, false);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iParam11, false);
	}
	if (iParam10 == -1)
	{
		iVar0 = 0;
		iVar0 = 132;
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iVar0, true);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iParam10, true);
	}
	if (!__LIB_0__::func_163(*iParam0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(*iParam0, *uParam1, fParam2, iParam3, iParam4, iParam5, 0);
	}
	PED::SET_PED_KEEP_TASK(*iParam0, bParam9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam8);
}

void func_473(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
	struct<18> Var0;
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				__LIB_6__::func_111(&(Global_1058888.f_43200), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 5, &uParam16);
}

void func_474(int iParam0, float fParam1, int iParam2, float fParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	__LIB_13__::func_366(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam2, fParam3);
}

float func_475(var uParam0)
{
	return 1f;
}

bool func_476(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9)
{
	struct<11> Var0;
	int iVar11;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2572))
	{
		if (__LIB_13__::func_20(uParam0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = iParam9;
	Var0.f_4 = bParam7;
	Var0.f_3 = bParam8;
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
	uParam0->f_2572 = __LIB_4__::func_720(&iVar11, &Var0);
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
		if (!__LIB_0__::func_272(uParam0->f_2572, 0))
		{
			return false;
		}
		else if (!__LIB_13__::func_20(uParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_477()
{
	return Global_1347477.f_118;
}

int func_478(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return 0;
	}
	if (bParam2 == 1)
	{
		if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_348, sParam1))
		{
			bParam2 = false;
		}
	}
	return ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_348, sParam1, bParam2);
}

bool func_479(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

void func_480(int iParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
	}
	__LIB_0__::func_45(__LIB_10__::func_653(iParam0), 10000, 0, 0, 0, 1);
}

bool func_481(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_482(int iParam0)
{
	if (__LIB_12__::func_612(iParam0))
	{
		return true;
	}
	if (__LIB_9__::func_121() == iParam0)
	{
		return true;
	}
	if (__LIB_6__::func_245(iParam0))
	{
		return true;
	}
	return false;
}

int func_483(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (__LIB_13__::func_482(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19574)
	{
		if (__LIB_9__::func_895(iVar0))
		{
		}
		else
		{
			Global_1327590.f_19574[iVar0 /*8*/] = iParam0;
			Global_1327590.f_19574[iVar0 /*8*/].f_7 = iParam1;
			Global_1327590.f_19574[iVar0 /*8*/].f_3 = iParam2;
			Global_1327590.f_19574[iVar0 /*8*/].f_1 = iParam3;
			Global_1327590.f_19574[iVar0 /*8*/].f_2 = iParam4;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_484(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	if (iVar0 == 1)
	{
		iVar4 = __LIB_0__::func_76(iParam0);
		if (iVar4 == 23)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
			if (__LIB_0__::func_627(134, 0) && __LIB_5__::func_543(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == 16)
		{
			iVar2 = 0;
			if (bParam1)
			{
				if (__LIB_9__::func_242(134))
				{
					if (__LIB_9__::func_6(134, iVar2, 0, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(134, iVar2, 0);
					}
				}
				else
				{
					__LIB_12__::func_636(134, iVar2, 0);
				}
				if (!__LIB_1__::func_187(138) && __LIB_9__::func_242(138))
				{
					if (__LIB_9__::func_6(138, 1, 0, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(138, 1, 0);
					}
				}
				else
				{
					__LIB_12__::func_636(138, 1, 0);
				}
			}
			else
			{
				__LIB_12__::func_636(134, iVar2, 0);
				__LIB_12__::func_636(138, 1, 0);
			}
			return;
		}
		else if (iVar4 == 46)
		{
			if (__LIB_1__::func_187(58))
			{
				iVar1 = 140;
				if (bParam1)
				{
					if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					__LIB_12__::func_636(iVar1, iVar2, bVar3);
				}
			}
		}
		else if (iVar4 == 17)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
			if (__LIB_1__::func_187(5) && __LIB_1__::func_185(12))
			{
				iVar1 = 21;
				iVar2 = 1;
				if (bParam1)
				{
					if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					__LIB_12__::func_636(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 138;
			iVar2 = 0;
		}
		else if (iVar4 == 15)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
			iVar1 = 59;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
		}
		else if (iVar4 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar4 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar4 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar4 == 10)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
			if ((__LIB_1__::func_25(Global_1835011[11 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1)) && __LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (bParam1)
				{
					if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					__LIB_12__::func_636(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 59;
			iVar2 = 0;
		}
		else if (iVar4 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar5 = __LIB_0__::func_76(iParam0);
		if (iVar5 == 0)
		{
			if (__LIB_3__::func_751(15))
			{
				if (bParam1)
				{
					if (__LIB_9__::func_832(15, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(15, 0);
				}
			}
			iVar1 = 97;
		}
		else if (iVar5 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar5 == 61)
		{
			if (__LIB_3__::func_751(15))
			{
				if (bParam1)
				{
					if (__LIB_9__::func_832(15, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(15, 0);
				}
			}
			if (__LIB_3__::func_751(9))
			{
				if (bParam1)
				{
					if (__LIB_9__::func_832(9, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(9, 0);
				}
			}
			if (!__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1))
			{
				iVar1 = 63;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 62)
		{
			if (__LIB_3__::func_751(15))
			{
				if (bParam1)
				{
					if (__LIB_9__::func_832(15, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(15, 0);
				}
			}
			if (__LIB_3__::func_751(9))
			{
				if (bParam1)
				{
					if (__LIB_9__::func_832(9, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(9, 0);
				}
			}
			iVar1 = 112;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
			iVar1 = 97;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
			iVar1 = 63;
		}
		else if (iVar5 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar5 == 76)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
		}
		else if (iVar5 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
			bVar3 = true;
		}
		else if (iVar5 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar5 == 84)
		{
			iVar1 = 85;
			iVar2 = 1;
		}
		else if (iVar5 == 97)
		{
			if (__LIB_1__::func_25(Global_1835011[6 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[13 /*74*/].f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (bParam1)
				{
					if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					__LIB_12__::func_636(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = -1;
		}
		else if (iVar5 == 114)
		{
			if (__LIB_1__::func_25(Global_1835011[9 /*74*/].f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 134)
		{
			iVar1 = 95;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_12__::func_636(iVar1, iVar2, bVar3);
			}
			iVar1 = 138;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
		{
		}
		else
		{
			__LIB_9__::func_249(iVar1, iVar2, bVar3);
		}
	}
	else
	{
		__LIB_12__::func_636(iVar1, iVar2, bVar3);
	}
}

void func_485(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	__LIB_11__::func_834(iParam0, 1, iParam1, 1, 32);
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
		__LIB_12__::func_787(iParam0, 1);
	}
}

bool func_486(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_12__::func_970(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_13__::func_41(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_13__::func_57(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_914(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_13__::func_57(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_468(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_13__::func_42(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_9__::func_178(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_979(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_2__::func_259(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_13__::func_57(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_979(uParam0, iParam5))
			{
				__LIB_13__::func_57(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_487(var uParam0, int iParam1)
{
	uParam0->f_642 = iParam1;
	__LIB_12__::func_638(uParam0, 8);
}

void func_488(var uParam0, int iParam1)
{
	uParam0->f_640 = iParam1;
	__LIB_12__::func_638(uParam0, 2);
}

void func_489(var uParam0, float fParam1)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	uParam0->f_745 = fParam1;
}

void func_490(var uParam0, float fParam1, float fParam2)
{
	if (fParam2 < fParam1)
	{
		fParam2 = (fParam1 + 10f);
	}
	uParam0->f_206.f_338 = fParam1;
	uParam0->f_206.f_339 = fParam2;
}

void func_491(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(uParam0->f_4) && !__LIB_0__::func_86(vParam1))
	{
		*uParam0 = { vParam1 };
		uParam0->f_3 = fParam4;
		uParam0->f_4 = TASK::ADD_COVER_POINT(*uParam0, uParam0->f_3, iParam5, iParam6, iParam7, bParam8);
	}
}

void func_492(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), uParam2);
		if (bParam4)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				sParam5 = "Generic_WNT";
			}
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam1, sParam5, 0f, 0f, 0f, 0, "WalkAndTalk");
		}
	}
	__LIB_1__::func_735(iParam0, iParam1, iParam3);
}

void func_493(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
		}
	}
}

bool func_494(float fParam0, float fParam1)
{
	int iVar0;
	if (fParam1 < *fParam0)
	{
		iVar0 = 1;
	}
	*fParam0 = fParam1;
	return iVar0;
}

void func_495(int iParam0)
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
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 0);
	}
}

bool func_496(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar1 = TASK::_0xD04241BBF6D03A5E(iParam0);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(iVar1);
			if (iVar0 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_497(vector3 vParam0, int iParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (Global_1888801[iVar0 /*35*/].f_20 == iParam3)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_498(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (__LIB_0__::func_0(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_499(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_5__::func_379(Global_1359489.f_11, bParam0, bParam1, bParam2))
	{
		if (Global_1359489.f_11 < 26)
		{
			iVar0 = Global_1359489.f_11;
			iVar0++;
			Global_1359489.f_11 = iVar0;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_500(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_12__::func_985(iParam1, uParam2, 0);
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

bool func_501(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
						__LIB_12__::func_985(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_10__::func_518(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
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

void func_502(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 4) && uParam0->f_371[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_371[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 64) && __LIB_12__::func_727(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_371[iParam1 /*18*/].f_3 >= 0 && uParam0->f_371[iParam1 /*18*/].f_5 >= 0) && uParam0->f_371[iParam1 /*18*/].f_3 != uParam0->f_371[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_13__::func_359(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_503(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_13__::func_359(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_1__::func_583(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

void func_504(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, __LIB_12__::func_492(uParam0, __LIB_12__::func_767(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		__LIB_8__::func_710(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

int func_505(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, iParam5, bParam6, fParam7, bParam8, fParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_2__::func_618(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_8__::func_901(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_2__::func_608(iParam4);
	}
	if (__LIB_2__::func_618(iParam4))
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
		if (__LIB_5__::func_51(iParam4) >= fParam9)
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

bool func_506(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_13__::func_290(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_507(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	__LIB_13__::func_19(iParam0, 0);
	__LIB_13__::func_290(iParam0, uParam1, 1);
	__LIB_2__::func_480(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

bool func_508(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 512))
	{
		if (!__LIB_13__::func_372(uParam0))
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

bool func_509(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return __LIB_12__::func_892(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_510(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	__LIB_11__::func_616(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_745(iParam0);
}

int func_511(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_371[iParam1 /*18*/];
		fVar3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
		fVar4 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1;
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
				if (!__LIB_12__::func_728(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!__LIB_12__::func_655(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					__LIB_13__::func_288(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_693(uParam0, 131072);
					__LIB_13__::func_288(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				__LIB_13__::func_288(uParam0, 5);
			}
			else
			{
				__LIB_13__::func_368(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_9__::func_324(&(uParam0->f_1765)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_9__::func_324(&(uParam0->f_1765)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_13__::func_368(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_9__::func_324(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_13__::func_368(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_13__::func_368(uParam0);
				}
				else
				{
					__LIB_13__::func_292(uParam0, iParam1, bParam2);
					__LIB_5__::func_107(&(uParam0->f_1765));
					__LIB_13__::func_288(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_9__::func_324(&(uParam0->f_1765)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_13__::func_288(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_5__::func_386(uParam0->f_1799, 0);
				}
			}
			__LIB_5__::func_107(&(uParam0->f_1765));
			__LIB_13__::func_288(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_9__::func_324(&(uParam0->f_1765)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_13__::func_288(uParam0, 10);
				}
				else
				{
					__LIB_13__::func_288(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_9__::func_324(&(uParam0->f_1765)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_13__::func_288(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_9__::func_324(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_13__::func_288(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_324(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!__LIB_12__::func_655(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_13__::func_288(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_512(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_8__::func_898(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_2__::func_608(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_513(float fParam0)
{
	Global_1934266.f_77 = fParam0;
}

void func_514(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::_0x9238A3D970BBB0A9(iParam0, -820192119);
		PED::_0x00B380FF2DF6AB7A(iParam0, iParam1);
	}
}

Vector3 func_515(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < uParam0->f_97)
	{
		if ((*uParam0)[iVar3 /*4*/] == iParam1)
		{
			vVar0 = { (uParam0[iVar3 /*4*/])->f_1 };
			iVar3 = uParam0->f_97;
		}
		iVar3++;
	}
	return vVar0;
}

bool func_516(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (AICOVERPOINT::_0xC276FE69DDA22BAD(iParam1))
		{
			if (PED::IS_PED_IN_COVER(iParam0, false, false))
			{
				if (AICOVERPOINT::_0x53E4D0C079CA6855(iParam1) == iParam0)
				{
					return true;
				}
			}
			if (iParam2 == 1)
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), TASK::GET_SCRIPTED_COVER_POINT_COORDS(iParam1), true) < fParam3;
			}
		}
	}
	return false;
}

bool func_517(int iParam0, float fParam1)
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			iVar0 = PED::GET_MOUNT(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
				{
					return false;
				}
				if (PED::IS_PED_STOPPED(iVar0))
				{
					return true;
				}
				if ((!TASK::IS_PED_WALKING(iVar0) && !TASK::IS_PED_RUNNING(iVar0)) && !PED::IS_PED_JUMPING(iVar0))
				{
					return true;
				}
			}
		}
		else
		{
			if (ENTITY::GET_ENTITY_SPEED(iParam0) > fParam1)
			{
				return false;
			}
			if (PED::IS_PED_STOPPED(iParam0))
			{
				return true;
			}
			if ((!TASK::IS_PED_WALKING(iParam0) && !TASK::IS_PED_RUNNING(iParam0)) && !PED::IS_PED_JUMPING(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_518(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
	{
		PED::_0xEEED8FAFEC331A70(*iParam0, ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 1);
	}
	else if (iParam6 == 1)
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
	}
	if (iParam7 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
	}
	if (iParam11 == -1)
	{
		iVar0 = 33346;
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iVar0, false);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iParam11, false);
	}
	if (iParam10 == -1)
	{
		iVar0 = 0;
		iVar0 = 132;
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iVar0, true);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, iParam10, true);
	}
	if (!__LIB_0__::func_163(*iParam0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(*iParam0, *uParam1, iParam2, iParam3, iParam4, iParam5, 0);
	}
	PED::SET_PED_KEEP_TASK(*iParam0, bParam9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam8);
}

bool func_519(var uParam0)
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
		__LIB_2__::func_608(&(uParam0->f_2588));
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
	}
	else
	{
		if (!__LIB_2__::func_618(&(uParam0->f_2588)))
		{
			__LIB_8__::func_901(&(uParam0->f_2588), 1);
		}
		else if (__LIB_9__::func_324(&(uParam0->f_2588)) > 5f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
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

void func_520(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_1__::func_748(iParam0[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_521(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
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
		else if (bParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, sParam2))
		{
			__LIB_12__::func_757(uParam0, iParam1, 4);
			return true;
		}
	}
	return false;
}

void func_522(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam1, iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar1, false, iParam2, false))
		{
			sParam3 = __LIB_5__::func_555(iVar1);
		}
	}
	__LIB_12__::func_891(uParam0, iVar0, sParam3, iParam4, iParam5, 1);
}

void func_523(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 4) && uParam0->f_371[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_371[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 64) && __LIB_12__::func_727(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_371[iParam1 /*18*/].f_3 >= 0 && uParam0->f_371[iParam1 /*18*/].f_5 >= 0) && uParam0->f_371[iParam1 /*18*/].f_3 != uParam0->f_371[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_13__::func_511(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_524(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_13__::func_511(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_5__::func_51(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

bool func_525(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (__LIB_12__::func_637(iParam0, fParam2, fParam3, fParam4, fParam5, bParam1, bParam6, 1, 1))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_526(int iParam0)
{
	iLocal_129 = iParam0;
}

void func_527(int iParam0)
{
	iLocal_128 = iParam0;
}

void func_528(int iParam0)
{
	iLocal_130 = iParam0;
}

bool func_529(var uParam0, int iParam1)
{
	struct<2> Var0;
	Var0.f_1 = uParam0;
	return __LIB_0__::func_269(UIFEED::_0x4E88A65968A55C78(&Var0, iParam1));
}

void func_530(var uParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	Var0.f_1 = uParam0;
	iVar2 = UIFEED::_0x4E88A65968A55C78(&Var0, iParam1);
	if (__LIB_0__::func_30(iVar2))
	{
		UIFEED::_0x2F901291EF177B02(iVar2, 0);
	}
}

void func_531(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !__LIB_2__::func_618(iParam0))
	{
		__LIB_2__::func_620(iParam0, fParam1);
	}
}

void func_532(var uParam0)
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
							Jump @1468; //curOff = 1420
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

bool func_533(int iParam0, float fParam1)
{
	if ((((((!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && !PED::IS_PED_AIMING_FROM_COVER(Global_35)) && !PED::IS_PED_SHOOTING(Global_35)) && !PED::IS_PED_RELOADING(Global_35))
	{
		if (!__LIB_2__::func_618(iParam0))
		{
			__LIB_5__::func_107(iParam0);
		}
		else if (__LIB_9__::func_324(iParam0) >= fParam1)
		{
			return true;
		}
		else if (((fParam1 > 15f && __LIB_3__::func_996(Global_35)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_264(Global_35)))) && __LIB_9__::func_324(iParam0) < (fParam1 - 15f))
		{
			__LIB_2__::func_620(iParam0, (fParam1 - 15f));
		}
	}
	else if (__LIB_2__::func_618(iParam0))
	{
		__LIB_2__::func_608(iParam0);
	}
	return false;
}

bool func_534(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_5__::func_107(&(iParam1->f_18));
			return false;
		}
		else if (__LIB_2__::func_618(&(iParam1->f_18)))
		{
			__LIB_2__::func_608(&(iParam1->f_18));
			return false;
		}
	}
	if (!__LIB_2__::func_618(&(iParam1->f_18)))
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
	return __LIB_11__::func_774(&(iParam1->f_18), fParam2);
	return true;
}

bool func_535(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_13__::func_369(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_536(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (bParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_13__::func_369(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_900(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
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

bool func_537(int iParam0, int* iParam1, bool bParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	if (__LIB_2__::func_618(&(iParam1->f_13)))
	{
		fVar12 = __LIB_5__::func_51(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_10__::func_902(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_13__::func_291(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, bParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_13__::func_369(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_11__::func_421(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_13__::func_287(iParam1, uParam4, iParam0, bVar13, sParam9, bParam2);
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
						__LIB_5__::func_107(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_4__::func_101(uParam4, 0, 0);
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
		__LIB_10__::func_553(iParam1, bParam2);
	}
	return bVar5;
}

void func_538(int iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	__LIB_13__::func_19(iParam0, 0);
	__LIB_13__::func_369(iParam0, uParam1, 1);
	__LIB_2__::func_624(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_539(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_9__::func_912(iParam0, iParam1);
	bVar0 = __LIB_5__::func_439(bParam3 >= 0f, bParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	if (bVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_11__::func_604(iParam1, uParam2);
		__LIB_11__::func_612(iParam1);
		__LIB_11__::func_615(iParam1);
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

void func_540(int iParam0, bool bParam1)
{
	int iVar0;
	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		__LIB_8__::func_994(iParam0);
		return;
	}
	if (!bParam1)
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !__LIB_4__::func_630(iParam0))
		{
			return;
		}
	}
	iVar0 = Global_40.f_7731[iParam0 /*5*/] + 1;
	__LIB_8__::func_999(iVar0);
	__LIB_10__::func_876(iParam0, iVar0, 0);
	if (__LIB_4__::func_630(iParam0))
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
		{
			__LIB_8__::func_994(iParam0);
		}
		else
		{
			__LIB_8__::func_995(iParam0);
		}
	}
	__LIB_9__::func_0();
}

void func_541()
{
	int iVar0;
	if (Global_40.f_7748.f_1 >= 9)
	{
		__LIB_8__::func_987();
		return;
	}
	iVar0 = Global_40.f_7748.f_1 + 1;
	__LIB_10__::func_877(iVar0, 0);
	if (__LIB_4__::func_631())
	{
		if (Global_40.f_7748.f_1 >= 9)
		{
			__LIB_8__::func_987();
		}
		else
		{
			__LIB_8__::func_988();
		}
	}
	__LIB_8__::func_998();
}

void func_542(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				__LIB_13__::func_523(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_13__::func_524(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			__LIB_13__::func_511(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			__LIB_13__::func_523(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_13__::func_524(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

bool func_543(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_13__::func_476(uParam0, vParam2, fParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*iParam1 = uParam0->f_2572;
		return true;
	}
	return false;
}

void func_544(int iParam0)
{
	iLocal_78 = iParam0;
}

void func_545(int iParam0)
{
	iLocal_80 = iParam0;
}

bool func_546(var uParam0, int iParam1)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	if (!ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		return false;
	}
	*iParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam0));
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	return true;
}

void func_547()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
}

Vector3 func_548(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return Global_1900383[iParam0 /*45*/].f_38;
}

bool func_549(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) != 0)
		{
			return true;
		}
	}
	return false;
}

int func_550(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return 0;
	}
	if (bParam2 == 1)
	{
		if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_348, sParam1))
		{
			bParam2 = false;
		}
	}
	return ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_348, sParam1, bParam2);
}

void func_551(var uParam0)
{
	if (!__LIB_2__::func_618(uParam0))
	{
	}
	if (__LIB_2__::func_611(uParam0))
	{
		uParam0->f_1 = (__LIB_0__::func_36() - uParam0->f_2);
		uParam0->f_2 = 0f;
		__LIB_0__::func_516(uParam0, 2);
	}
}

void func_552(var uParam0)
{
	if (!__LIB_2__::func_618(uParam0))
	{
	}
	if (!__LIB_2__::func_611(uParam0))
	{
		uParam0->f_2 = (__LIB_0__::func_36() - uParam0->f_1);
		__LIB_1__::func_336(uParam0, 2);
	}
}

bool func_553(int iParam0)
{
	return __LIB_0__::func_273(iParam0, 32, 1);
}

void func_554(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if ((__LIB_0__::func_272(iVar0, 0) && !__LIB_1__::func_16(iVar0)) && !__LIB_0__::func_273(iParam0, 32768, 1))
	{
		PED::_0xBCC76708E5677E1D(iVar0, 0);
	}
	Global_1360165[iParam0 /*1157*/].f_70 = 0;
}

bool func_555(int iParam0, float fParam1)
{
	float fVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
	{
		fVar0 = __LIB_0__::func_232(Global_1360165[iParam0 /*1157*/], __LIB_0__::func_177(iParam0), 1);
		if (fVar0 < fParam1)
		{
			return true;
		}
		if (__LIB_0__::func_126(__LIB_0__::func_177(iParam0)) && fVar0 < 625f)
		{
			return true;
		}
	}
	return false;
}

void func_556(int iParam0)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
	__LIB_0__::func_290(iParam0, 42, 1);
}

void func_557(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[6];
	int iVar45[6];
	int iVar52;
	int iVar53;
	bool bVar54;
	bool bVar55;
	iVar0[0] = 2137149309;
	iVar19[0] = -134624703;
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = __LIB_1__::func_976();
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = __LIB_1__::func_976();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = __LIB_1__::func_976();
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = __LIB_1__::func_976();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = __LIB_1__::func_976();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -1535722316;
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1547994518;
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = __LIB_1__::func_976();
	iVar0[9] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[9] = -910918420;
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = 495480888;
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = 2004706822;
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = 884576413;
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 778703691;
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = -421730990;
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 514406510;
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = -327708229;
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((__LIB_1__::func_707(iVar0[Global_1357549.f_575], 1, 0) || __LIB_6__::func_114(iVar0[Global_1357549.f_575])) || bParam1))
	{
		if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
			{
				__LIB_5__::func_993(iVar19[Global_1357549.f_575], 1);
				__LIB_6__::func_28(iVar19[Global_1357549.f_575]);
			}
		}
	}
	else if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
		{
			__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
			STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
		}
	}
	iVar38[0] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar45[0] = 11;
	iVar38[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar45[1] = 12;
	iVar38[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar45[2] = 13;
	iVar38[3] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar45[3] = 14;
	iVar38[4] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar45[4] = 16;
	iVar38[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = __LIB_6__::func_327(iVar38[iVar52], 3);
			bVar54 = __LIB_6__::func_114(iVar38[iVar52]);
			bVar55 = (iVar53 > 0 || bVar54);
		}
		if (bVar55 || bParam1)
		{
			if (__LIB_5__::func_783(iVar45[iVar52]) == 0)
			{
				__LIB_4__::func_495(iVar45[iVar52]);
			}
		}
		else if (__LIB_5__::func_783(iVar45[iVar52]))
		{
			__LIB_4__::func_524(iVar45[iVar52]);
		}
		iVar52++;
	}
}

void func_558(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		__LIB_8__::func_901(&(Global_1359489.f_40), 1);
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
			__LIB_8__::func_901(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_2__::func_608(&(Global_1360165[iParam0 /*1157*/].f_130));
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

bool func_559(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 40000))
		{
			return true;
		}
	}
	return false;
}

void func_560(var uParam0, struct<8> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return;
	}
	uParam0->f_358 = { Param1 };
}

bool func_561(int iParam0, int iParam1)
{
	if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0) && PED::IS_PED_ON_MOUNT(iParam1))
		{
			if (PED::GET_MOUNT(iParam0) == PED::GET_MOUNT(iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_562(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	iVar0 = -1;
	iVar1 = -1;
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			iVar0 = __LIB_10__::func_397(iParam0, sParam2, &vVar2);
			iVar1 = __LIB_10__::func_397(iParam1, sParam2, &vVar5);
			if (iVar0 != -1 && iVar1 != -1)
			{
				return iVar1 > iVar0;
			}
		}
	}
	return false;
}

bool func_563(int iParam0, vector3 vParam1, char* sParam4)
{
	int iVar0;
	int iVar1;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam4, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &iVar0);
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam4, vParam1, &iVar1);
	if (iVar0 >= iVar1)
	{
		return true;
	}
	return false;
}

bool func_564(float fParam0, float fParam1, float fParam2)
{
	int iVar0;
	if ((fParam1 + fParam2) < *fParam0)
	{
		iVar0 = 1;
	}
	*fParam0 = fParam1;
	return iVar0;
}

bool func_565(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 1, false);
		if (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED"))
		{
			return true;
		}
	}
	return false;
}

void func_566(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1082130432 /* Float: -1f */);
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), iParam2);
		if (bParam4)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				sParam5 = "Generic_WNT";
			}
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam1, sParam5, 0f, 0f, 0f, 0, "WalkAndTalk");
		}
	}
	__LIB_1__::func_735(iParam0, iParam1, iParam3);
}

bool func_567(var uParam0)
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
							uParam0->f_5 = __LIB_4__::func_450(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						else
						{
							uParam0->f_5 = __LIB_4__::func_450(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = __LIB_4__::func_450(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
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
						uParam0->f_6 = __LIB_4__::func_450(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					else
					{
						uParam0->f_6 = __LIB_4__::func_450(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = __LIB_4__::func_450(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
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

void func_568(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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

void func_569(int iParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	__LIB_0__::func_176(iParam0, 2, 1);
	bVar0 = true;
	if (((!bParam1 && __LIB_0__::func_31(iParam0)) && ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/])) && ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iParam0 /*1157*/]))
	{
		bVar0 = false;
	}
	__LIB_12__::func_61(iParam0, 0, 0, bVar0);
}

void func_570(var uParam0)
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
	if (__LIB_8__::func_356(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		__LIB_3__::func_120();
	}
}

bool func_571(int* iParam0)
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
			__LIB_4__::func_89(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_10__::func_250())
			{
			}
		}
		else
		{
			__LIB_4__::func_89(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_4__::func_118(&(iParam0->f_37)) >= 1.5f;
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

void func_572(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
				__LIB_13__::func_256(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				__LIB_13__::func_257(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_573(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				__LIB_13__::func_502(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_13__::func_503(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			__LIB_13__::func_359(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			__LIB_13__::func_502(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_13__::func_503(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

int func_574(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_13__::func_476(uParam0, vParam2, fParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*iParam1 = uParam0->f_2572;
		return 1;
	}
	return 0;
}

bool func_575(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*iParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return false;
	}
	else if (__LIB_9__::func_723(*iParam0, 0, uParam1, uParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_228(iParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_472(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_576(int iParam0, int iParam1, int iParam2)
{
	__LIB_13__::func_466(iParam0, iParam2);
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

int func_577()
{
	return joaat("CS_ARCHIEDOWN");
}

void func_578(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	__LIB_12__::func_841(uParam0);
	uParam0->f_4 = iParam1;
	__LIB_10__::func_349(uParam0, iParam2, iParam3, iParam4, iParam5);
}

void func_579(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_10__::func_447(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_13__::func_572(iParam0, iParam1, 1, 0);
		}
	}
}

void func_580(var uParam0)
{
	__LIB_12__::func_654(uParam0->f_174, 1);
}

int func_581()
{
	return joaat("P_CS_MILLERMANUSCRIPT");
}

int func_582()
{
	return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
}

void func_583(bool bParam0)
{
	if (bParam0)
	{
		POPULATION::_0xF45E46DEECF7DF6E(12288, 0, 0, -1, -1);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	else
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
}

bool func_584()
{
	int iVar0;
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (iVar0 == 0)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_585()
{
	PAD::SET_PAD_SHAKE(0, 100, 100);
}

void func_586(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		PED::_0xEEED8FAFEC331A70(*uParam0, ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 1);
	}
	else if (iParam6 == 1)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
	}
	if (iParam7 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
	}
	if (iParam11 == -1)
	{
		iVar0 = 33346;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, false);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam11, false);
	}
	if (iParam10 == -1)
	{
		iVar0 = 0;
		iVar0 = 132;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, true);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam10, true);
	}
	if (!__LIB_0__::func_163(*uParam0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(*uParam0, *uParam1, fParam2, iParam3, iParam4, iParam5, 0);
	}
	PED::SET_PED_KEEP_TASK(*uParam0, bParam9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam8);
}

void func_587(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			__LIB_5__::func_509(iParam0, 0, 1);
			if (__LIB_0__::func_205(iParam0, 1987795078))
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, 1987795078);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_0x8B3B71C80A29A4BB(iParam0, joaat("MOODDEAD"), 6);
			PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
			__LIB_1__::func_991(iParam0, 0);
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
			AUDIO::STOP_PED_SPEAKING(iParam0, true);
		}
		else
		{
			PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_OUTFIT_DEFAULT"));
			if (bParam2)
			{
				PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
			}
			PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
		}
	}
}

bool func_588(var uParam0)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	fVar0 = uParam0->f_745;
	bVar1 = false;
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_13__::func_224(uParam0, &bVar2, &fVar3, &fVar4, &fVar5, &fVar6);
			if (__LIB_13__::func_332(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, &(uParam0->f_2591), fVar5, fVar4, fVar3, bVar2, fVar6, 0, 0, 1, 1, 1))
			{
				bVar1 = true;
			}
		}
	}
	if (uParam0->f_743 <= fVar0 || bVar1)
	{
		return true;
	}
	return false;
}

void func_589(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_20.f_1))
	{
		uParam0->f_20.f_1 = VOLUME::_CREATE_VOLUME_BOX(-2376.73f, -1589.515f, 154.399f, 0f, 0f, -37.58f, 6.979f, 5.106f, 2.729f);
	}
}

Vector3 func_590()
{
	return -2376.997f, -1589.437f, 153.2668f;
}

char* func_591()
{
	return "tan_house_int";
}

Vector3 func_592()
{
	return -2374.34f, -1592.57f, 153.33f;
}

int func_593()
{
	return joaat("P_DOOR37X");
}

void func_594(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	vVar0.x = BUILTIN::TO_FLOAT(__LIB_0__::func_40(iParam2));
	vVar0.f_1 = BUILTIN::TO_FLOAT(__LIB_0__::func_41(iParam2));
	iVar3 = __LIB_3__::func_321(vVar0);
	if (iParam1 == 1)
	{
		__LIB_1__::func_532(Global_1347702[iParam0 /*49*/].f_15, iVar3);
	}
	else
	{
		__LIB_7__::func_448(Global_1347702[iParam0 /*49*/].f_15, iVar3);
	}
}

void func_595(var uParam0)
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
							Jump @1466; //curOff = 1422
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

Vector3 func_596()
{
	return -2377.072f, -1589.224f, 153.2583f;
}

Vector3 func_597(bool bParam0)
{
	if (bParam0)
	{
		return -2375.732f, -1588.726f, 153.2583f;
	}
	return -2375.19f, -1589f, 154.12f;
}

Vector3 func_598()
{
	return -2374.82f, -1588.71f, 154.06f;
}

bool func_599(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 1)
	{
		if ((((((iParam0 == joaat("PROVISION_FISH_BLUEGILL") || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL")) || iParam0 == joaat("PROVISION_FISH_PERCH")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS"))
		{
			return true;
		}
	}
	if (iParam2 == 1)
	{
		if (((((((iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH") || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR")) || iParam0 == joaat("PROVISION_FISH_MUSKIE")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT"))
		{
			return true;
		}
	}
	if (iParam3 == 1)
	{
		if ((((((((((((((iParam0 == joaat("PROVISION_FISH_BLUEGILL_LEGENDARY") || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_MUSKIE_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_PERCH_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"))
		{
			return true;
		}
	}
	if (iParam4 == 1)
	{
		if ((((((((((((((iParam0 == joaat("PROVISION_FISH_BLUEGILL_POOR") || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON_POOR")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR_POOR")) || iParam0 == joaat("PROVISION_FISH_MUSKIE_POOR")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE_POOR")) || iParam0 == joaat("PROVISION_FISH_PERCH_POOR")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"))
		{
			return true;
		}
	}
	return false;
}

void func_600(int iParam0)
{
	Global_1935689.f_17 = iParam0;
}

bool func_601(int iParam0)
{
	return (Global_1935689.f_10165 && iParam0) != 0;
}

bool func_602(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam0, 173360570))
	{
		return false;
	}
	switch (Global_1935689.f_17)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((__LIB_0__::func_192(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || __LIB_0__::func_192(iParam0, -839724752)) || __LIB_0__::func_192(iParam0, -136654233))
				{
					return true;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((__LIB_0__::func_192(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || __LIB_0__::func_192(iParam0, -839724752)) || __LIB_0__::func_192(iParam0, -136654233)) || __LIB_0__::func_192(iParam0, 554195525)) || __LIB_0__::func_192(iParam0, -1238310989)) || __LIB_0__::func_192(iParam0, 2127114599)) || __LIB_0__::func_192(iParam0, -1864584831)) || __LIB_0__::func_192(iParam0, 1068498601)) || __LIB_0__::func_192(iParam0, 1967571132))
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

void func_603(int iParam0)
{
	Global_1935689.f_10165 = (Global_1935689.f_10165 - (Global_1935689.f_10165 && iParam0));
}

Vector3 func_604()
{
	return 0f, 0f, -40f;
}

float func_605(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11f;
		case 1:
			return 19.33f;
		case 2:
			return 18.75f;
		case 3:
			return 19.73f;
		case 4:
			return 20.35f;
		default:
			break;
	}
	return 5f;
}

void func_606(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 + MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1));
	if (*iParam0 >= iParam1)
	{
		*iParam0 = (*iParam0 - iParam1);
	}
}

char* func_607(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Writingbase";
		case 1:
			return "pl_WritingThinking";
		case 2:
			return "pl_WritingAngry";
		case 3:
			return "pl_WritingLookup";
		case 4:
			return "pl_WritingLookBehind";
		default:
			break;
	}
	return "pl_Writingbase";
}

void func_608(int iParam0, int iParam1)
{
	if (__LIB_2__::func_342(iParam0))
	{
		__LIB_2__::func_347(iParam1);
	}
}

bool func_609(int iParam0, var uParam1)
{
	if (uParam1->f_23)
	{
		return true;
	}
	if (!uParam1->f_24)
	{
		__LIB_1__::func_408(434558613, 0, 0);
		Global_1934765.f_272 = 1;
		uParam1->f_24 = 1;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(uParam1->f_22))
	{
		uParam1->f_22 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_13__::func_590(), __LIB_13__::func_591());
	}
	else
	{
		if (!INTERIOR::IS_INTERIOR_READY(uParam1->f_22))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam1->f_22);
		}
		if (INTERIOR::IS_INTERIOR_READY(uParam1->f_22))
		{
			if (iParam0 == 75 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[75 /*49*/].f_42, false))
			{
				iParam0 = 74;
			}
			switch (iParam0)
			{
				case 72:
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_2"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_2", 0);
					}
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_3_4"))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_3_4", true);
					}
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_5"))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_5", true);
					}
					uParam1->f_23 = 1;
					return true;
				case 73:
				case 74:
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_2"))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_2", true);
					}
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_3_4"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_3_4", 0);
					}
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_5"))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_5", true);
					}
					uParam1->f_23 = 1;
					return true;
				case 75:
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_2"))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_2", true);
					}
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_3_4"))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_3_4", true);
					}
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_22, "tan_evelyn_5"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_22, "tan_evelyn_5", 0);
					}
					uParam1->f_23 = 1;
					return true;
				default:
					return true;
			}
		}
	}
	return false;
}

void func_610(var uParam0)
{
	if (OBJECT::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(__LIB_13__::func_592(), 0.5f, __LIB_13__::func_593(), 2))
	{
		__LIB_1__::func_941(*uParam0);
		__LIB_1__::func_206(__LIB_13__::func_592(), 0.5f, 4);
		*uParam0 = joaat("DOOR_TAN_HOUSE_FRONT");
	}
}

void func_611(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			__LIB_10__::func_369(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_612(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_12__::func_970(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_13__::func_458(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_13__::func_57(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_914(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_13__::func_57(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_103(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_13__::func_57(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_13__::func_57(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

Vector3 func_613()
{
	return -2375.1f, -1589.057f, 153.2499f;
}

void func_614(var uParam0, float fParam1)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1347702[uParam0->f_174 /*49*/].f_24, true) <= fParam1)
	{
		__LIB_13__::func_583(0);
	}
}

bool func_615()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	Var3.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL SATCHEL", &iVar0, &iVar1, 1084182731, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!__LIB_0__::func_236(&Var3, iVar2, iVar0, iVar1))
			{
			}
			else if (Var3.f_4 == joaat("PROVISION_ROTTEN_MEAT"))
			{
			}
			else if ((((((((((__LIB_0__::func_774(Var3.f_4, 16777216) || __LIB_0__::func_192(Var3.f_4, joaat("CI_TAG_ITEM_MEAT_ANIMAL"))) || __LIB_0__::func_192(Var3.f_4, -839724752)) || __LIB_0__::func_192(Var3.f_4, -136654233)) || __LIB_0__::func_192(Var3.f_4, 554195525)) || __LIB_0__::func_192(Var3.f_4, -1238310989)) || __LIB_0__::func_192(Var3.f_4, 2127114599)) || __LIB_0__::func_192(Var3.f_4, -1864584831)) || __LIB_0__::func_192(Var3.f_4, 1068498601)) || __LIB_0__::func_192(Var3.f_4, 1967571132)) || __LIB_13__::func_599(Var3.f_4, 1, 1, 1, 1))
			{
				if (!__LIB_0__::func_192(Var3.f_4, 173360570))
				{
					__LIB_0__::func_238(iVar0);
					return true;
				}
			}
			iVar2++;
		}
		__LIB_0__::func_238(iVar0);
	}
	return false;
}

void func_616(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { __LIB_9__::func_494(iParam1) };
	*iParam0 = __LIB_0__::func_23();
	__LIB_0__::func_951(iParam0, BUILTIN::FLOOR(vVar0.x));
	__LIB_0__::func_467(iParam0, BUILTIN::FLOOR(vVar0.y));
}

bool func_617(int iParam0, vector3 vParam1, var uParam4, var uParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, uParam5, bParam6, fParam7, bParam8, fParam12, bParam13, bParam14, 0);
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

void func_618(var uParam0)
{
	if (__LIB_0__::func_30(*uParam0))
	{
		__LIB_13__::func_610(uParam0);
	}
	else
	{
		*uParam0 = joaat("DOOR_TAN_HOUSE_FRONT");
		__LIB_13__::func_610(uParam0);
	}
}

void func_619(var uParam0, int iParam1, bool bParam2)
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
	__LIB_12__::func_983(uParam0);
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
						__LIB_13__::func_26(uParam0);
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

void func_620(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<23> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
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
		Var0 = { iParam3, iParam4, iParam5 };
		Var0.f_3 = uParam1;
		Var0.f_8 = 4;
		Var0.f_19 = 4;
		Var0.f_20 = 4;
		Var0.f_21 = 4;
		Var0.f_22 = 4;
		Var0.f_13 = 3;
		Var0.f_7 = iParam2;
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
	}
}

int func_621(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "not_enemy"))
	{
		return 0;
	}
	switch (PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SMUGGLERS"):
		case joaat("REL_GANG_LARAMIE_GANG"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_BOUNTY_HUNTER"):
		case joaat("REL_PLAYER_DISLIKE"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_COP"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
		case joaat("REL_PLAYER_ENEMY"):
			return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		if ((iVar0 == 6 || iVar0 == 4) || iVar0 == 5)
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "instigated_by_player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_622(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (__LIB_0__::func_84(&(uParam0->f_206), 16))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		__LIB_13__::func_231(&(uParam0->f_206), *uParam1, iParam2, iParam3, iParam4, iParam5);
	}
}

void func_623(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	var uVar1;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = __LIB_4__::func_341(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	__LIB_4__::func_342(iVar0);
	if (iVar0 == Global_1934765.f_338)
	{
		if (Global_1934765.f_337 == 0)
		{
			__LIB_4__::func_343();
		}
		else
		{
			__LIB_11__::func_540(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765.f_338;
		Global_1934765.f_338 = __LIB_5__::func_291();
	}
}

void func_624(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	int iVar0;
	iVar0 = __LIB_4__::func_341(iParam1);
	if (iVar0 == -1)
	{
		__LIB_4__::func_344(iParam0, iParam1, fParam3);
		__LIB_11__::func_540(bParam2, fParam3);
		return;
	}
	if (iParam0 != Global_1934765.f_318[iVar0 /*3*/])
	{
		__LIB_4__::func_342(iVar0);
		__LIB_4__::func_344(iParam0, iParam1, fParam3);
		Global_1934765.f_338 = -1;
		__LIB_11__::func_540(bParam2, fParam3);
		return;
	}
}

bool func_625(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
						__LIB_12__::func_985(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_11__::func_414(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
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

void func_626(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	if (iVar0 == 1)
	{
		iVar4 = __LIB_0__::func_76(iParam0);
		if (iVar4 == 23)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
			if (__LIB_0__::func_627(134, 0) && __LIB_5__::func_543(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == 16)
		{
			iVar2 = 0;
			if (bParam1)
			{
				if (__LIB_9__::func_242(134))
				{
					if (__LIB_9__::func_6(134, iVar2, 0, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(134, iVar2, 0);
					}
				}
				else
				{
					__LIB_13__::func_485(134, iVar2, 0);
				}
				if (!__LIB_1__::func_187(138) && __LIB_9__::func_242(138))
				{
					if (__LIB_9__::func_6(138, 1, 0, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(138, 1, 0);
					}
				}
				else
				{
					__LIB_13__::func_485(138, 1, 0);
				}
			}
			else
			{
				__LIB_13__::func_485(134, iVar2, 0);
				__LIB_13__::func_485(138, 1, 0);
			}
			return;
		}
		else if (iVar4 == 46)
		{
			if (__LIB_1__::func_187(58))
			{
				iVar1 = 140;
				if (bParam1)
				{
					if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					__LIB_13__::func_485(iVar1, iVar2, bVar3);
				}
			}
		}
		else if (iVar4 == 17)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
			if (__LIB_1__::func_187(5) && __LIB_1__::func_185(12))
			{
				iVar1 = 21;
				iVar2 = 1;
				if (bParam1)
				{
					if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					__LIB_13__::func_485(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 138;
			iVar2 = 0;
		}
		else if (iVar4 == 15)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 59;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
		}
		else if (iVar4 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar4 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar4 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar4 == 10)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
			if ((__LIB_1__::func_25(Global_1835011[11 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1)) && __LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (bParam1)
				{
					if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					__LIB_13__::func_485(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 59;
			iVar2 = 0;
		}
		else if (iVar4 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar5 = __LIB_0__::func_76(iParam0);
		if (iVar5 == 0)
		{
			if (__LIB_3__::func_751(15))
			{
				if (bParam1)
				{
					if (__LIB_10__::func_994(15, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(15, 0);
				}
			}
			iVar1 = 97;
		}
		else if (iVar5 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar5 == 61)
		{
			if (__LIB_3__::func_751(15))
			{
				if (bParam1)
				{
					if (__LIB_10__::func_994(15, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(15, 0);
				}
			}
			if (__LIB_3__::func_751(9))
			{
				if (bParam1)
				{
					if (__LIB_10__::func_994(9, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(9, 0);
				}
			}
			if (!__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1))
			{
				iVar1 = 63;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 62)
		{
			if (__LIB_3__::func_751(15))
			{
				if (bParam1)
				{
					if (__LIB_10__::func_994(15, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(15, 0);
				}
			}
			if (__LIB_3__::func_751(9))
			{
				if (bParam1)
				{
					if (__LIB_10__::func_994(9, 0, 0))
					{
					}
				}
				else
				{
					__LIB_9__::func_834(9, 0);
				}
			}
			iVar1 = 112;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 97;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 63;
		}
		else if (iVar5 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar5 == 76)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
		}
		else if (iVar5 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
			bVar3 = true;
		}
		else if (iVar5 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar5 == 84)
		{
			iVar1 = 85;
			iVar2 = 1;
		}
		else if (iVar5 == 97)
		{
			if (__LIB_1__::func_25(Global_1835011[6 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[13 /*74*/].f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (bParam1)
				{
					if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						__LIB_9__::func_249(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					__LIB_13__::func_485(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = -1;
		}
		else if (iVar5 == 114)
		{
			if (__LIB_1__::func_25(Global_1835011[9 /*74*/].f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 134)
		{
			iVar1 = 95;
			if (bParam1)
			{
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					__LIB_9__::func_249(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				__LIB_13__::func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 138;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
		{
		}
		else
		{
			__LIB_9__::func_249(iVar1, iVar2, bVar3);
		}
	}
	else
	{
		__LIB_13__::func_485(iVar1, iVar2, bVar3);
	}
}

int func_627(var uParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_13__::func_379(uParam0, vParam2, iParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*uParam1 = uParam0->f_2572;
		return 1;
	}
	return 0;
}

float func_628(var uParam0)
{
	return 250f;
}

int func_629(int iParam0, int iParam1, int iParam2, bool bParam3)
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
	float fVar9;
	if ((iParam0 < 0 || iParam1 < 0) || iParam2 < 0)
	{
		return 0;
	}
	if (iParam0 >= 24)
	{
		iParam0 = 0;
	}
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) > iParam0)
	{
		if (__LIB_0__::func_40(iVar0) + 1 > __LIB_0__::func_44(__LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0)))
		{
			if (__LIB_0__::func_39(iVar0) == 11)
			{
				__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, 1, 0, __LIB_0__::func_710(iVar0) + 1);
			}
			else
			{
				__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, 1, __LIB_0__::func_39(iVar0) + 1, __LIB_0__::func_710(iVar0));
			}
		}
		else
		{
			__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, __LIB_0__::func_40(iVar0) + 1, __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
		}
	}
	else
	{
		__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, __LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
	}
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
	{
		if (__LIB_1__::func_426(iVar1, 1))
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			return 1;
		}
		if (!bParam3)
		{
			if (!__LIB_1__::func_426(iVar1, 1))
			{
				__LIB_6__::func_670(iVar0, iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
				if (iVar4 == 0)
				{
					if (iVar3 == 0 && iVar2 <= 5)
					{
						CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
					}
					else
					{
						iVar8 = BUILTIN::FLOOR((2000f / (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(60))));
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(iVar8);
					}
				}
				else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
				{
					fVar9 = (IntToFloat((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() - 2000)) * 0.1f);
					fVar9 = (IntToFloat(CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE()) - fVar9);
					if (MISC::ABSF((fVar9 - 2000f)) < 2000f)
					{
						fVar9 = 2000f;
					}
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(BUILTIN::FLOOR(fVar9));
				}
			}
		}
	}
	else if (!__LIB_1__::func_426(iVar1, 1))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	return 0;
}

void func_630(int iParam0, vector3 vParam1, float fParam4)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
	}
	ENTITY::SET_ENTITY_COORDS(*iParam0, vParam1, true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(*iParam0, fParam4);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 66, true);
}

void func_631(vector3 vParam0, float fParam3)
{
	__LIB_0__::func_568(vParam0, fParam3, 0);
	__LIB_1__::func_206(vParam0, fParam3, 0);
	__LIB_1__::func_572(vParam0, fParam3, 0, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(vParam0, fParam3, 1, 0);
}

void func_632(var uParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	__LIB_12__::func_772(uParam0->f_174, sParam1, iParam2, fParam3, sParam4, sParam5, sParam6, sParam7, iParam8);
}

bool func_633(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
							__LIB_10__::func_518(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
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

void func_634(var uParam0)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	uParam0->f_4 = 0;
}

void func_635(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 >= 96)
	{
		return;
	}
	uParam0->f_5[iVar0] = sParam2;
	uParam0->f_4++;
}

void func_636(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
}

char* func_637(var uParam0, int iParam1)
{
	if (iParam1 >= 96 || iParam1 > uParam0->f_4)
	{
		return "";
	}
	return uParam0->f_5[iParam1];
}

void func_638(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam1;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 3)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(uParam0[iVar1], iVar2);
}

void func_639(var uParam0)
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
							Jump @1468; //curOff = 1422
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

bool func_640(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_148(uParam0);
	}
	if (__LIB_0__::func_264(uParam0) > 10f)
	{
		return true;
	}
	return false;
}

bool func_641(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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

void func_642(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 >= 0)
	{
		__LIB_9__::func_827(iParam0, 0, 0, 0);
	}
	if (bParam1)
	{
		PED::_0xAB0D553FE20A6E25(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (bParam2)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
}

bool func_643(var uParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8)
{
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = __LIB_12__::func_885(uParam0, iParam2, vParam3, iParam6, 1, 1, 0, 1, 1, bParam8, 1, bParam7);
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return false;
	}
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		if (PED::_0xA0BC8FAED8CFEB3C(*iParam1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
			__LIB_13__::func_630(iParam1, vParam3, iParam6);
			return true;
		}
	}
	return false;
}

void func_644(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam0))
	{
		iVar1 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam0, iVar0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		iVar0++;
	}
}

void func_645(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_272(iParam0, 1))
	{
		return;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, iParam1, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 279, false);
		PED::REMOVE_PED_FROM_GROUP(iParam0);
	}
}

void func_646(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	struct<4> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return;
	}
	__LIB_7__::func_465(*iParam0, &Var0);
	if (bParam2)
	{
		*uParam1 = __LIB_1__::func_391(*iParam0, 0, 0, 14592);
		__LIB_3__::func_730(*iParam0, 0, 0, 0, 0, 0);
		if (bParam3)
		{
			PATHFIND::SET_ROADS_IN_AREA(Var0, Var0.f_3, 0, 1, 0);
		}
		POPULATION::_0xB56D41A694E42E86(*iParam0, 10208, 0, 0, -1, -1, 2);
		PED::_0x4C39C95AE5DB1329(*iParam0, false, 15);
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, 0, 0, 0, -1, -1, 0);
	}
	else
	{
		if (PED::_0x91A5F9CBEBB9D936(*uParam1))
		{
			__LIB_0__::func_484(uParam1, *iParam0, 0);
		}
		if (bParam3)
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 0, 1);
		}
	}
}

void func_647(var uParam0, float fParam1)
{
	__LIB_13__::func_631(Global_1347702[uParam0->f_174 /*49*/].f_24, fParam1);
}

int func_648(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	char* sVar0;
	sVar0 = __LIB_13__::func_637(uParam1, iParam2);
	if (__LIB_11__::func_764(uParam1, iParam2))
	{
		if (!bParam7 && __LIB_13__::func_158(sVar0))
		{
			return 2;
		}
		else if (bParam7 && __LIB_13__::func_120(sVar0, 0))
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (!__LIB_0__::func_272(*iParam3, 1))
	{
		__LIB_13__::func_638(uParam1, iParam2);
		return 4;
	}
	if (__LIB_0__::func_665(Global_35, *iParam3, 1, 1) > fParam5)
	{
		if (bParam6)
		{
			__LIB_13__::func_638(uParam1, iParam2);
		}
		return 7;
	}
	if (__LIB_6__::func_904())
	{
		if (bParam4)
		{
			if (!bParam8)
			{
				__LIB_5__::func_20(0, 0);
			}
			else
			{
				__LIB_5__::func_239(sVar0, 1, 0);
			}
		}
		return 8;
	}
	if (!bParam7)
	{
		if (__LIB_12__::func_876(uParam0, sVar0, 0))
		{
			__LIB_13__::func_638(uParam1, iParam2);
			return 1;
		}
	}
	else if (__LIB_13__::func_123(uParam0, sVar0, 0, 0))
	{
		__LIB_13__::func_638(uParam1, iParam2);
		return 1;
	}
	return 6;
}

bool func_649(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, *iParam1, 1, 1);
	if (fVar0 < *fParam2)
	{
		*fParam2 = fVar0;
		if (__LIB_0__::func_75(uParam0))
		{
			__LIB_0__::func_37(uParam0);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.2f)
		{
			if (fVar0 < fParam3)
			{
				if (__LIB_0__::func_75(uParam0))
				{
					__LIB_0__::func_37(uParam0);
				}
				return false;
			}
		}
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		if (__LIB_13__::func_640(uParam0))
		{
			__LIB_0__::func_37(uParam0);
			return true;
		}
	}
	return false;
}

void func_650(var uParam0, char* sParam1)
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
		uParam0->f_51.f_11 = __LIB_4__::func_501(iVar2, __LIB_3__::func_185(uParam0->f_3), 1, sParam1, 8, 0, bVar1);
	}
}

void func_651(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
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
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam6, iParam9);
	}
}

void func_652(var uParam0)
{
	bool bVar0;
	int iVar1;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			__LIB_3__::func_727(uParam0->f_174, 128);
		}
		else
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
			{
				__LIB_7__::func_602(uParam0->f_174);
				__LIB_10__::func_822(uParam0->f_174);
			}
		}
		else
		{
			__LIB_10__::func_694(Global_1347702[uParam0->f_174 /*49*/]);
			__LIB_7__::func_602(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174), 0, "");
		}
	}
	if (!__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		if (!__LIB_0__::func_702(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			__LIB_1__::func_298(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		}
		__LIB_1__::func_821(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 8);
	}
	bVar0 = true;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_12__::func_667(uParam0);
	__LIB_0__::func_7(&(uParam0->f_172), 8);
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		__LIB_12__::func_868(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		__LIB_0__::func_112(1, 16384, 1);
		__LIB_0__::func_7(&(uParam0->f_172), 67108864);
	}
	__LIB_5__::func_109(uParam0, 1, 0);
	__LIB_1__::func_723(1);
	__LIB_1__::func_564(1);
	__LIB_12__::func_770();
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_12__::func_898(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
	if (__LIB_12__::func_882(uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 256);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8388608) || !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_12__::func_918(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(Global_1347702[uParam0->f_174 /*49*/].f_3));
	HUD::SET_MISSION_NAME(true, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_0__::func_11(uParam0);
	iVar1 = 0;
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0, iVar1, __LIB_12__::func_639(uParam0, 64));
}

void func_653(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
	bVar0 = __LIB_13__::func_498(uParam0);
	if (!bVar0)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (__LIB_12__::func_738(uParam0))
			{
				bVar1 = false;
			}
			else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (__LIB_13__::func_4(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				__LIB_0__::func_11(uParam0);
				__LIB_0__::func_7(&(uParam0->f_172), 1);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 1);
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
}

bool func_654(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_328(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_25(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_655(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_4__::func_605(iVar0) >= iParam1)
			{
			}
			else
			{
				__LIB_13__::func_540(iVar0, iParam1 > 7);
			}
			iVar0++;
		}
		iVar1++;
	}
	__LIB_1__::func_452(10, 0, 0, 0, 0);
}

void func_656(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		__LIB_13__::func_541();
		iVar0++;
	}
	__LIB_1__::func_452(9, 0, 0, 0, 0);
}

bool func_657(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_233(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_889(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_914(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_385(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_658(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	__LIB_13__::func_624(iParam0, iParam1, bParam2, fParam3);
}

void func_659(int iParam0, bool bParam1, float fParam2)
{
	__LIB_13__::func_623(iParam0, bParam1, fParam2);
}

struct<5> func_660(vector3 vParam0, float fParam3)
{
	struct<5> Var0;
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam3;
	return Var0;
}

void func_661()
{
	if (Global_1899848 == 1)
	{
		return;
	}
	__LIB_7__::func_871();
	Global_1899848.f_2 = 3;
	Global_1899848.f_201 = { -64.55984f, -409.0146f, 69.67851f };
	Global_1899848.f_15.f_2 = { -63f, -404.08f, 69.929f };
	Global_1899848.f_15.f_5 = 180f;
	Global_1899848.f_15.f_6 = { 0f, 0f, 0f };
	Global_1899848.f_15.f_9 = 0f;
	Global_1899848.f_15.f_11 = { -63f, -405.07f, 71.504f };
	Global_1899848.f_15.f_14 = { 166.1f, 2.5f, 180f };
	Global_1899848.f_9 = 4;
	Global_1899848.f_32[0 /*21*/] = { -67.5293f, -407.6849f, 69.7766f };
	Global_1899848.f_32[1 /*21*/] = { -67.06053f, -410.6247f, 69.68016f };
	Global_1899848.f_32[2 /*21*/] = { -60.37758f, -407.6353f, 69.6935f };
	Global_1899848.f_32[3 /*21*/] = { -58.85927f, -410.3694f, 69.63271f };
	Global_1899848.f_217 = 1;
	Global_1899848.f_218 = 1;
	Global_1899848 = 1;
	Global_1899848.f_1 = 0;
}

int func_662()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_7__::func_877(iVar0);
		__LIB_10__::func_944(&(Global_1899848.f_32[iVar0 /*21*/].f_3), 0, 1);
		__LIB_10__::func_944(&(Global_1899848.f_32[iVar0 /*21*/].f_4), 0, 0);
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_201.f_14))
	{
		POPULATION::_0x74C2B3DC0B294102(Global_1899848.f_201.f_14);
		POPULATION::_0xA1CFB35069D23C23(Global_1899848.f_201.f_14);
		VOLUME::_DELETE_VOLUME(Global_1899848.f_201.f_14);
	}
	__LIB_7__::func_878();
	__LIB_10__::func_944(&(Global_1899848.f_201.f_12), 0, 1);
	__LIB_10__::func_944(&(Global_1899848.f_15.f_10), 0, 1);
	__LIB_7__::func_876(0);
	if (Global_1899848.f_217 == 0)
	{
		__LIB_7__::func_891(1, 1);
	}
	return 1;
}

bool func_663(int iParam0)
{
	if (!__LIB_7__::func_892(&(Global_1899848.f_32[iParam0 /*21*/].f_3), Global_1899848.f_4, Global_1899848.f_32[iParam0 /*21*/], 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 1, 1))
	{
		return false;
	}
	if (!__LIB_7__::func_892(&(Global_1899848.f_32[iParam0 /*21*/].f_4), Global_1899848.f_5, Global_1899848.f_32[iParam0 /*21*/], 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 1, 0))
	{
		return false;
	}
	if (Global_1899848.f_32[iParam0 /*21*/].f_5 == 0)
	{
		Global_1899848.f_32[iParam0 /*21*/].f_5 = 1;
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_32[iParam0 /*21*/].f_9))
		{
			Global_1899848.f_32[iParam0 /*21*/].f_9 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_1899848.f_32[iParam0 /*21*/], 0f, 0f, 0f, 1.5f, 1.5f, 3f);
			POPULATION::_0xB56D41A694E42E86(Global_1899848.f_32[iParam0 /*21*/].f_9, 2016, 0, 0, -1, -1, 2);
			POPULATION::_0x18262CAFEBB5FBE1(Global_1899848.f_32[iParam0 /*21*/].f_9, 10208, 0, 0, -1, -1, 0);
		}
	}
	return true;
}

bool func_664(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_989(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_983(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_573(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_13__::func_42(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_4__::func_118(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_979(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_2__::func_259(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_979(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_665(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iVar0 = *iParam0;
		iVar0++;
		*iParam0 = iVar0;
		if (*iParam0 == iParam1)
		{
			*iParam0 = (iVar0 - 1);
		}
	}
	else
	{
		*iParam0 = iParam3;
	}
	*iParam2 = 0;
}

bool func_666(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(iParam0, iParam1);
}

void func_667(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = *iParam0;
	iVar0++;
	*iParam0 = iVar0;
	if (*iParam0 == iParam1)
	{
		*iParam0 = (iVar0 - 1);
	}
}

int func_668(char[4] cParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(cParam0) && AUDIO::_0x1ECC76792F661CF5(cParam0))
	{
		return 1;
	}
	return 0;
}

bool func_669(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_399(iParam0, bParam2, iParam3, 0) == iParam1;
}

bool func_670(var uParam0, bool bParam1)
{
	if (uParam0->f_5 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_5, uParam0->f_1, true, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(*uParam0, uParam0->f_4);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (bParam1)
			{
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_671()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_5[Global_1911643.f_1 /*3*/].f_2, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_5[Global_1911643.f_1 /*3*/].f_2, true);
}

void func_672(var uParam0)
{
	__LIB_3__::func_557(uParam0[0], -63.63155f, -409.1862f, 70.71757f, 0f, 0f, 104f, 5.610251f, 10.52771f, 5f, "MV_PIG_PEN");
	__LIB_3__::func_557(uParam0[1], -74.59453f, -390.0515f, 71.84151f, 0f, 0f, -154.3084f, 10.52088f, 4.49004f, 2.245379f, "MV_CHICKEN_PEN");
}

void func_673(var uParam0)
{
	*(uParam0[0 /*5*/]) = { __LIB_13__::func_660(-65.85396f, -409.5089f, 69.67851f, 170f) };
	*(uParam0[1 /*5*/]) = { __LIB_13__::func_660(-59.13769f, -410.2785f, 69.67851f, 0f) };
	*(uParam0[2 /*5*/]) = { __LIB_13__::func_660(-61.30851f, -406.2899f, 69.67851f, 259.92f) };
}

void func_674(var uParam0)
{
	*(uParam0[0 /*5*/]) = { __LIB_13__::func_660(-78.76019f, -392.2417f, 71.08224f, 0f) };
	*(uParam0[1 /*5*/]) = { __LIB_13__::func_660(-77.05832f, -393.0462f, 70.91372f, 0f) };
	*(uParam0[2 /*5*/]) = { __LIB_13__::func_660(-74.22822f, -390.55f, 70.9443f, 0f) };
}

void func_675(int iParam0)
{
	*iParam0 = { __LIB_13__::func_660(-75.8733f, -391.5642f, 70.9089f, 0f) };
}

void func_676(int iParam0, int iParam1)
{
	__LIB_1__::func_681(iParam0, iParam1);
}

bool func_677(var uParam0)
{
	Global_1425351.f_18 = uParam0;
	__LIB_13__::func_272(1);
	return true;
}

bool func_678(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam1->f_58, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam1->f_58, -2147483648) && !__LIB_3__::func_514(&(uParam1->f_29), 0.05f))
	{
		return false;
	}
	iVar2 = __LIB_0__::func_153(*uParam0, 0, 1, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	if (iVar2 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, iVar2);
		if (iVar0 <= 0)
		{
			WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 0, &uVar3);
			WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam0, &iVar0, &uVar3);
		}
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar2, true);
		iVar7 = 0;
		if (__LIB_3__::func_761(uParam0, 512))
		{
			iVar7 = 1;
		}
		iVar8 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar7);
		if (iVar0 < iVar1)
		{
			if (uParam1->f_11 == -1)
			{
				uParam1->f_11 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			}
			iVar10 = (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - uParam1->f_11);
			if (iVar10 > 200)
			{
				bVar9 = true;
			}
		}
		if (!__LIB_3__::func_761(uParam0, 33554432))
		{
			if ((((iVar0 < iVar1 && bVar9) && !ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), uParam0->f_1)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), iVar8))
			{
				if (bParam2)
				{
					__LIB_0__::func_7(&(uParam1->f_58), 1);
				}
				return true;
			}
		}
		else
		{
			if (iVar0 == 0)
			{
				bVar11 = true;
			}
			if (iVar0 < iVar1 && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) == 0)
			{
				bVar11 = true;
			}
			if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()) && __LIB_0__::func_239(uParam1, 524288))
			{
				bVar11 = true;
			}
			if (bVar11)
			{
				if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0) && bVar9 == 1)
				{
					if (bParam2)
					{
						__LIB_0__::func_7(&(uParam1->f_58), 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_679(var uParam0, char* sParam1, vector3 vParam2)
{
	if (!__LIB_1__::func_588(sParam1, 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, sParam1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_2__::func_259(&(uParam0->f_2594));
		uParam0->f_2600 = { vParam2 };
		uParam0->f_746 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_2600, Global_36, true);
	}
}

bool func_680(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_27(uParam1->f_58, 8))
	{
		return true;
	}
	if (__LIB_3__::func_761(uParam0, 16) && __LIB_3__::func_761(uParam0, 8192))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (__LIB_3__::func_795(iVar0, __LIB_3__::func_761(uParam0, 512)))
		{
			__LIB_0__::func_7(&(uParam1->f_58), 8);
			return true;
		}
		if (__LIB_3__::func_761(uParam0, 268435456) && __LIB_0__::func_239(uParam1, 65536))
		{
			__LIB_0__::func_7(&(uParam1->f_58), 8);
			return true;
		}
	}
	iVar1 = 0;
	if (__LIB_3__::func_761(uParam0, 512))
	{
		iVar1 = 1;
	}
	iVar2 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar1);
	if (__LIB_3__::func_796(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (MISC::_0x7A76104CC2CC69E8(iVar2, 1, 1))
			{
				if (bParam2)
				{
					__LIB_0__::func_7(&(uParam1->f_58), 8);
				}
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(uParam1->f_58, -2147483648))
	{
		if (__LIB_3__::func_514(&(uParam1->f_29), 0.05f))
		{
			if (bParam2)
			{
				__LIB_0__::func_7(&(uParam1->f_58), 8);
			}
			return true;
		}
	}
	else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), uParam0->f_83, true))
	{
		__LIB_2__::func_259(&(uParam1->f_29));
		__LIB_0__::func_7(&(uParam1->f_58), -2147483648);
	}
	return false;
}

void func_681(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_4)) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, MISC::GET_HASH_KEY(&(uParam0->f_4))))
	{
		__LIB_7__::func_269(uParam0->f_1, &(uParam0->f_4), 1744022339, 0, 1, 0, 0, 1);
	}
}

bool func_682()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1899848.f_9)
	{
		if (!__LIB_13__::func_663(iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_683(var uParam0, var uParam1)
{
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(Global_35, 0);
	if (__LIB_0__::func_239(uParam1, 4194304))
	{
		__LIB_1__::func_864(Global_35, 0, 0);
	}
	else if (__LIB_13__::func_276(uParam0, uParam1, 0))
	{
		if (__LIB_3__::func_761(uParam0, 524288))
		{
			__LIB_1__::func_864(Global_35, 0, 0);
		}
		else
		{
			PED::EXPLODE_PED_HEAD(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"));
		}
	}
	else if (__LIB_3__::func_836(uParam0, uParam1))
	{
		__LIB_1__::func_864(Global_35, 0, 0);
	}
}

bool func_684(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	if (__LIB_3__::func_761(uParam0, 33554432) && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (__LIB_3__::func_761(uParam0, 4194304))
	{
		return true;
	}
	switch (uParam1->f_59)
	{
		case 0:
			__LIB_0__::func_7(&(uParam1->f_60), 2048);
			CAM::DESTROY_ALL_CAMS(false);
			CAM::_0x6E969927CF632608(1);
			CAM::_0xE3639DB78B3B5400(iParam3);
			__LIB_2__::func_259(&(uParam1->f_26));
			__LIB_11__::func_533(uParam1, 3);
			break;
		case 3:
			__LIB_3__::func_781();
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				if (iParam3 != PLAYER::PLAYER_PED_ID())
				{
					CAM::RENDER_SCRIPT_CAMS(false, bParam7, 3000, true, false, 0);
				}
				__LIB_11__::func_533(uParam1, 0);
				TASK::CLEAR_PED_TASKS(iParam2, true, false);
				return true;
			}
			break;
		default:
			__LIB_11__::func_533(uParam1, 0);
			break;
	}
	return false;
}

void func_685(var uParam0, char* sParam1, bool bParam2, int iParam3, float fParam4)
{
	bool bVar0;
	if (bParam2)
	{
		return;
	}
	if (__LIB_1__::func_325())
	{
		if (__LIB_0__::func_899(&(uParam0->f_2594)))
		{
			__LIB_1__::func_561(&(uParam0->f_2594));
		}
		return;
	}
	if (__LIB_4__::func_118(&(uParam0->f_2594)) > IntToFloat(iParam3))
	{
		bVar0 = true;
		if (ENTITY::GET_ENTITY_SPEED(Global_35) <= 0.1f)
		{
			bVar0 = false;
		}
		if ((fParam4 == -1f && !bVar0) || MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_2600, Global_36, true) >= (uParam0->f_746 - fParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(UILOG::_UILOG_GET_CACHED_OBJECTIVE()))
			{
				__LIB_12__::func_883(uParam0, sParam1, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_561(&(uParam0->f_2594));
			}
		}
	}
}

bool func_686(var uParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = __LIB_12__::func_885(uParam0, iParam2, iParam1->f_1, iParam1->f_4, 1, 1, 0, 1, 1, 1, 1, 0);
		if (__LIB_0__::func_272(*iParam1, 0))
		{
			TASK::TASK_STAND_STILL(*iParam1, -1);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 6, true);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 186, false);
			return true;
		}
	}
	else if (__LIB_0__::func_272(*iParam1, 0))
	{
		return true;
	}
	return false;
}

int func_687(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_11__::func_550(iParam0, 1);
	__LIB_1__::func_830(iVar0);
	if (bParam1)
	{
		__LIB_1__::func_284(&Global_1899778, iVar0);
	}
	__LIB_6__::func_169(iVar0);
	return 1;
}

void func_688(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (__LIB_1__::func_55(iVar0) == iParam0)
		{
			iVar1 = __LIB_1__::func_61(iVar0);
			__LIB_11__::func_550(iVar1, 1);
			__LIB_1__::func_830(iVar0);
			if (bParam1)
			{
				__LIB_1__::func_284(&Global_1899778, iVar0);
			}
			__LIB_6__::func_169(iVar0);
		}
		iVar0++;
	}
}

bool func_689(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;
	if (!__LIB_0__::func_71(iParam0))
	{
		if (bParam11)
		{
			iVar0 = __LIB_0__::func_398(7);
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(iParam0);
		}
		if (!__LIB_0__::func_272(iVar0, 1) || (!(VOLUME::_DOES_VOLUME_EXIST(iParam5) && __LIB_1__::func_205(iVar0, iParam5, 1, 0)) && __LIB_0__::func_665(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (__LIB_1__::func_16(iVar0) && __LIB_0__::func_402(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = __LIB_1__::func_854(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return true;
		}
		if (__LIB_0__::func_272(*uParam1, 1))
		{
			if (!(__LIB_0__::func_163(*uParam1, 518218985) || __LIB_0__::func_163(*uParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*uParam1, 0);
				POPULATION::_0xF74E134F40192884(*uParam1, 2);
				if (!__LIB_0__::func_86(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam1, VOLUME::_GET_VOLUME_COORDS(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && __LIB_0__::func_86(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

bool func_690(int iParam0, int iParam1, int iParam2)
{
	if (WEAPON::_0xDBC4B552B2AE9A83(iParam0, iParam1) == iParam2)
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam2) > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_691()
{
	if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_KIT_CAMERA") || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

void func_692(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*iParam0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, sParam3);
		}
		if (iParam2 == joaat("BLIP_STYLE_ENEMY"))
		{
			MAP::_BLIP_SET_MODIFIER(*iParam0, -1034486097);
		}
	}
}

void func_693(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char cVar0[16];
	switch (uParam0->f_174)
	{
		case 85:
			StringCopy(&cVar0, "GUN1_PHO_", 16);
			break;
		case 86:
			StringCopy(&cVar0, "GUN2_PHO_", 16);
			break;
		case 87:
			StringCopy(&cVar0, "GUN3_PHO_", 16);
			break;
		default:
			return;
	}
	if (bParam1)
	{
		StringConCat(&cVar0, "BAD", 16);
	}
	else if (bParam2)
	{
		StringConCat(&cVar0, "FAR", 16);
	}
	else if (bParam3)
	{
		StringConCat(&cVar0, "HEAD", 16);
	}
	else
	{
		return;
	}
	__LIB_0__::func_45(&cVar0, 10000, 0, 0, 0, 1);
}

void func_694(int iParam0)
{
	EVENT::SET_DECISION_MAKER(iParam0, joaat("EMPTY"));
	PED::SET_PED_CONFIG_FLAG(iParam0, 81, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 168, true);
	PED::_0x7ABBD9E449E0DB00(iParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ENEMY"));
	EVENT::_0xBB1E41DD3D3C6250(iParam0, "SpDefaultStealth", 0);
	EVENT::_0x1A5C5D350068A673(iParam0, 0);
}

void func_695(var uParam0)
{
	if (__LIB_3__::func_127(*uParam0))
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		__LIB_0__::func_769();
		*uParam0 = 0;
	}
}

void func_696(char* sParam0, var uParam1)
{
	if (__LIB_3__::func_127(*uParam1))
	{
		return;
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	*uParam1 = __LIB_0__::func_565(sParam0, -1, 0, 0, 0, 1);
}

void func_697(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(*iParam0, 0) && PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		iVar0 = PED::_0xCD66FEA29400A0B5(*iParam0);
		*iParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
}

bool func_698(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 84;
	while (iVar0 <= 88)
	{
		if (!__LIB_1__::func_187(iVar0) && iVar0 != iParam0)
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	return true;
}

bool func_699(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != joaat("EVENT_ACQUAINTANCE_PED_HATE"))
	{
		return true;
	}
	if (__LIB_2__::func_215(iParam0, iParam1, 1, 1114636288 /* Float: 60f */, 0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
	{
		return true;
	}
	return false;
}

bool func_700(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_2__::func_401(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_1__::func_351(iParam1);
			if (__LIB_2__::func_958(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = __LIB_1__::func_352(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_2__::func_89(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_2__::func_89(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_701(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 1024))
	{
		if (__LIB_13__::func_689(*uParam0, &(uParam0->f_3), __LIB_1__::func_977(), uParam0->f_86, 1097859072 /* Float: 15f */, 2, 1, 0, 0, 1, 1071644672 /* Float: 1.75f */))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 136, true);
			}
			__LIB_0__::func_240(uParam1, 1024);
		}
	}
}

void func_702(int iParam0)
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
			__LIB_8__::func_228();
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

void func_703(var uParam0)
{
	Global_1392581.f_44 = *uParam0;
	__LIB_0__::func_7(&(Global_1392581.f_3), 16);
}

void func_704()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_16.f_4)))
	{
		__LIB_3__::func_353(&(Local_16.f_4), 0);
	}
}

void func_705()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_16.f_6)))
	{
		__LIB_3__::func_353(&(Local_16.f_6), 0);
	}
}

bool func_706(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam1->f_58, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam1->f_58, -2147483648) && !__LIB_1__::func_285(&(uParam1->f_29), 0.05f))
	{
		return false;
	}
	iVar2 = __LIB_0__::func_153(*uParam0, 0, 1, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	if (iVar2 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, iVar2);
		if (iVar0 <= 0)
		{
			WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 0, &uVar3);
			WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam0, &iVar0, &uVar3);
		}
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar2, true);
		iVar7 = 0;
		if (__LIB_3__::func_761(uParam0, 512))
		{
			iVar7 = 1;
		}
		iVar8 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar7);
		if (iVar0 < iVar1)
		{
			if (uParam1->f_11 == -1)
			{
				uParam1->f_11 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			}
			iVar10 = (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - uParam1->f_11);
			if (iVar10 > 200)
			{
				bVar9 = true;
			}
		}
		if (!__LIB_3__::func_761(uParam0, 33554432))
		{
			if ((((iVar0 < iVar1 && bVar9) && !ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), uParam0->f_1)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), iVar8))
			{
				if (bParam2)
				{
					__LIB_0__::func_7(&(uParam1->f_58), 1);
				}
				return true;
			}
		}
		else
		{
			if (iVar0 == 0)
			{
				bVar11 = true;
			}
			if (iVar0 < iVar1 && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) == 0)
			{
				bVar11 = true;
			}
			if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()) && __LIB_0__::func_239(uParam1, 524288))
			{
				bVar11 = true;
			}
			if (bVar11)
			{
				if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0) && bVar9 == 1)
				{
					if (bParam2)
					{
						__LIB_0__::func_7(&(uParam1->f_58), 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

int func_707(int iParam0)
{
	if (!__LIB_0__::func_34(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::_0xC29996A337BDD099(Global_1425371[iParam0 /*373*/].f_1))
	{
		return 0;
	}
	__LIB_0__::func_714(iParam0, 16);
	return VEHICLE::_0x6E585A616ABB8401(Global_1425371[iParam0 /*373*/].f_1);
}

bool func_708(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_27(uParam1->f_58, 8))
	{
		return true;
	}
	if (__LIB_3__::func_761(uParam0, 16) && __LIB_3__::func_761(uParam0, 8192))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (__LIB_3__::func_795(iVar0, __LIB_3__::func_761(uParam0, 512)))
		{
			__LIB_0__::func_7(&(uParam1->f_58), 8);
			return true;
		}
		if (__LIB_3__::func_761(uParam0, 268435456) && __LIB_0__::func_239(uParam1, 65536))
		{
			__LIB_0__::func_7(&(uParam1->f_58), 8);
			return true;
		}
	}
	iVar1 = 0;
	if (__LIB_3__::func_761(uParam0, 512))
	{
		iVar1 = 1;
	}
	iVar2 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar1);
	if (__LIB_3__::func_796(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (MISC::_0x7A76104CC2CC69E8(iVar2, 1, 1))
			{
				if (bParam2)
				{
					__LIB_0__::func_7(&(uParam1->f_58), 8);
				}
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(uParam1->f_58, -2147483648))
	{
		if (__LIB_1__::func_285(&(uParam1->f_29), 0.05f))
		{
			if (bParam2)
			{
				__LIB_0__::func_7(&(uParam1->f_58), 8);
			}
			return true;
		}
	}
	else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), uParam0->f_83, true))
	{
		__LIB_1__::func_148(&(uParam1->f_29));
		__LIB_0__::func_7(&(uParam1->f_58), -2147483648);
	}
	return false;
}

bool func_709(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	if (__LIB_3__::func_761(uParam0, 33554432) && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (__LIB_3__::func_761(uParam0, 4194304))
	{
		return true;
	}
	switch (uParam1->f_59)
	{
		case 0:
			__LIB_0__::func_7(&(uParam1->f_60), 2048);
			CAM::DESTROY_ALL_CAMS(false);
			CAM::_0x6E969927CF632608(1);
			CAM::_0xE3639DB78B3B5400(iParam3);
			__LIB_1__::func_148(&(uParam1->f_26));
			__LIB_3__::func_816(uParam1, 3);
			break;
		case 3:
			__LIB_3__::func_781();
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				if (iParam3 != PLAYER::PLAYER_PED_ID())
				{
					CAM::RENDER_SCRIPT_CAMS(false, bParam7, 3000, true, false, 0);
				}
				__LIB_3__::func_816(uParam1, 0);
				TASK::CLEAR_PED_TASKS(iParam2, true, false);
				return true;
			}
			break;
		default:
			__LIB_3__::func_816(uParam1, 0);
			break;
	}
	return false;
}

void func_710(var uParam0)
{
	if (__LIB_13__::func_698(uParam0->f_174))
	{
		__LIB_11__::func_992(uParam0->f_174, 1f);
		if (!__LIB_1__::func_25(Global_1835011[34 /*74*/].f_1, 1))
		{
			__LIB_4__::func_685(26, 1);
		}
	}
}

int func_711(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_13__::func_568(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_712(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_13__::func_568(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_713(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_13__::func_568(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_714(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_11__::func_404(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
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
				if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_11__::func_404(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
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

void func_715(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_27(uParam0->f_88, 1024))
	{
		__LIB_3__::func_839(uParam0, uParam1);
	}
	__LIB_1__::func_539();
	MISC::SET_TIME_SCALE(1f);
	__LIB_1__::func_390(__LIB_3__::func_805(uParam1, uParam0), 1);
	__LIB_0__::func_769();
	__LIB_3__::func_760();
	__LIB_0__::func_11();
	__LIB_0__::func_37(&(uParam1->f_26));
	__LIB_0__::func_37(&(uParam1->f_29));
	__LIB_0__::func_37(&(uParam1->f_32));
	__LIB_0__::func_37(&(uParam1->f_35));
	__LIB_0__::func_37(&(uParam1->f_38));
	__LIB_0__::func_37(&(uParam1->f_41));
	if (__LIB_0__::func_272(uParam0->f_1, 0))
	{
		if (__LIB_3__::func_761(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, false);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 0);
		}
		if (__LIB_3__::func_761(uParam0, 1024))
		{
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
		}
		if (__LIB_3__::func_761(uParam0, 128) || __LIB_3__::func_761(uParam0, 4096))
		{
			PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, false, -1, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, false, 0f);
	}
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	if (!__LIB_3__::func_761(uParam0, 2048))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	if (__LIB_0__::func_239(uParam1, 2048))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, false);
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), true);
	if (__LIB_0__::func_239(uParam1, 2) && !__LIB_3__::func_761(uParam0, 32768))
	{
		__LIB_3__::func_806(1, uParam0, uParam1, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
		__LIB_3__::func_728(uParam1, 2);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_86))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_86);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_86);
	}
	if (MISC::_DOES_ITEM_HAVE_VALID_BASE(*uParam1))
	{
		ITEMSET::DESTROY_ITEMSET(*uParam1);
	}
	__LIB_3__::func_824(uParam0, uParam1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && (__LIB_0__::func_239(uParam1, 8) && (!__LIB_0__::func_239(uParam1, 1) || TASK::_IS_PED_DUELLING(*uParam0))))
	{
		TASK::_0xEED08A3A98B847E2(*uParam0, (!__LIB_3__::func_761(uParam0, 256) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1)), 1040187392 /* Float: 0.125f */);
		if (__LIB_0__::func_239(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && TASK::_IS_PED_DUELLING(uParam0->f_1))
	{
		TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, 1040187392 /* Float: 0.125f */);
		if (__LIB_0__::func_239(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
		}
	}
	MAP::DISPLAY_RADAR(true);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, false, -1, 0);
	}
	GRAPHICS::ANIMPOSTFX_STOP("Duel");
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_16)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_20)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_28)))
		{
		}
	}
	HUD::_TEXT_DATABASE_DELETE("MGDUL");
	if (__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_8__::func_512();
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	MISC::_0x4D5C9CC7E7E23E09();
	__LIB_3__::func_762(uParam1, 9);
}

void func_716(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_13__::func_702(iParam0);
}

void func_717()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (CAM::DOES_CAM_EXIST(Local_22.f_20[iVar0]))
		{
			CAM::STOP_CAM_POINTING(Local_22.f_20[iVar0]);
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		}
		iVar0++;
	}
}

void func_718(int iParam0)
{
	struct<2> Var0;
	if (iParam0 == 1)
	{
		if (!bLocal_213)
		{
			bLocal_213 = true;
			Var0 = 1;
			Var0.f_1 = joaat("WEAPON_KIT_CAMERA");
			HUD::_0x8A59D44189AF2BC5(&Var0, -1001145251);
		}
	}
	else if (bLocal_213)
	{
		bLocal_213 = false;
		HUD::_0x160825DADF1B04B3();
	}
}

void func_719()
{
	if (bLocal_211)
	{
		__LIB_3__::func_760();
		iLocal_209 = -1;
		bLocal_211 = false;
	}
}

void func_720()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_14.f_6)))
	{
		__LIB_3__::func_353(&(Local_14.f_6), 0);
	}
}

void func_721(int iParam0)
{
	if (!bLocal_211)
	{
		__LIB_3__::func_834(4);
		bLocal_211 = true;
	}
	if (iLocal_209 != iParam0)
	{
		if (iLocal_209 > iParam0)
		{
			__LIB_13__::func_671();
		}
		iLocal_209 = iParam0;
		__LIB_3__::func_787(iLocal_209);
	}
}

void func_722(var uParam0, char* sParam1, bool bParam2, int iParam3, float fParam4)
{
	bool bVar0;
	if (bParam2)
	{
		return;
	}
	if (__LIB_1__::func_325())
	{
		if (__LIB_0__::func_75(&(uParam0->f_2594)))
		{
			__LIB_0__::func_37(&(uParam0->f_2594));
		}
		return;
	}
	if (__LIB_0__::func_264(&(uParam0->f_2594)) > IntToFloat(iParam3))
	{
		bVar0 = true;
		if (ENTITY::GET_ENTITY_SPEED(Global_35) <= 0.1f)
		{
			bVar0 = false;
		}
		if ((fParam4 == -1f && !bVar0) || MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_2600, Global_36, true) >= (uParam0->f_746 - fParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(UILOG::_UILOG_GET_CACHED_OBJECTIVE()))
			{
				__LIB_12__::func_883(uParam0, sParam1, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_37(&(uParam0->f_2594));
			}
		}
	}
}

void func_723(var uParam0)
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
	if (__LIB_8__::func_356(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

void func_724(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		MISC::SET_BIT(&(iParam0->f_3), iParam1);
	}
	else if (iParam1 <= 63)
	{
		MISC::SET_BIT(&(iParam0->f_4), (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		MISC::SET_BIT(&(iParam0->f_5), (iParam1 - 64));
	}
}

void func_725(var uParam0, float fParam1)
{
	uParam0->f_338 = fParam1;
}

void func_726(int iParam0)
{
	Global_17504.f_11 = iParam0;
}

bool func_727(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		return MISC::IS_BIT_SET(iParam0->f_3, iParam1);
	}
	else if (iParam1 <= 63)
	{
		return MISC::IS_BIT_SET(iParam0->f_4, (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		return MISC::IS_BIT_SET(iParam0->f_5, (iParam1 - 64));
	}
	return false;
}

struct<6> func_728(int iParam0)
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 1:
			Var0 = { 6.91589f, 19.1461f, 79.96f };
			Var0.f_3 = { -0.93f, 0f, 160f };
			break;
		case 3:
			Var0 = { 28.17f, 7.71f, 79.57f };
			Var0.f_3 = { 0f, 0f, -90.18f };
			break;
		case 4:
			Var0 = { 27.64f, 21.44f, 80.51f };
			Var0.f_3 = { 130.64f, 54.88f, -167.18f };
			break;
		case 0:
			Var0 = { -31.32f, 5.31f, 81.07f };
			Var0.f_3 = { -180f, 0f, -27f };
			break;
		case 9:
			Var0 = { -54.1f, -5.7f, 79.61f };
			Var0.f_3 = { 0f, 0f, 134f };
			break;
		case 10:
			Var0 = { -49.69f, -9.25f, 79.24f };
			Var0.f_3 = { -3.4f, -0.66f, 149.02f };
			break;
		case 11:
			Var0 = { 50.71f, -7.37f, 78.39f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		case 13:
			Var0 = { 3.34f, -1.45f, -1f };
			Var0.f_3 = { 0f, 0f, 156.24f };
			break;
	}
	Var0 = { Var0 * Vector(0.01f, 0.01f, 0.01f) };
	Var0.f_3 = { Vector(Var0.f_3.f_2, 0f, 0f) * Vector(-1f, -1f, -1f) };
	return Var0;
}

Vector3 func_729()
{
	return 0f, 0.0368652f, 0f;
}

void func_730(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		MISC::CLEAR_BIT(&(iParam0->f_3), iParam1);
	}
	else if (iParam1 <= 63)
	{
		MISC::CLEAR_BIT(&(iParam0->f_4), (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		MISC::CLEAR_BIT(&(iParam0->f_5), (iParam1 - 64));
	}
}

void func_731(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(iParam0->f_473), iParam1);
}

void func_732(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_483 = iParam1;
	iParam0->f_484 = iParam2;
}

void func_733(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_6), iParam1);
}

void func_734(int iParam0, int iParam1)
{
	__LIB_0__::func_516(&(iParam0->f_473), iParam1);
}

int func_735(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return joaat("P_CRATETABLE01X");
		case 1:
			return joaat("P_KNIFE02X");
		case 3:
			return joaat("P_MORTARPESTLE02X");
		case 4:
			return joaat("S_INV_BURDOCK01DX");
		case 0:
			return joaat("P_JOURNAL_OPEN01X");
		case 9:
			return joaat("P_MEDICINE_FTY");
		case 10:
			return joaat("P_MEDICINE_FTY");
		case 11:
			return joaat("P_BOTTLECOGNAC01X");
		case 5:
			return joaat("S_INV_YARROW01DX");
		case 12:
			return joaat("P_CAMPFIRECOMBINED01X");
		case 14:
			return joaat("S_INV_MEDICINE01X");
		case 15:
			return joaat("S_TENTWEDGE01X");
		case 16:
			return joaat("P_BEDROLLOPEN01X");
		case 17:
			return joaat("P_CARROT02X");
		case 18:
			return joaat("P_GARLIC_02X");
		case 6:
			return 0;
		case 8:
			return 0;
		case 7:
			return 0;
		case 19:
			switch (iParam1)
			{
				case 43:
					return joaat("S_INV_YARROW01DX");
				case 19:
					return joaat("S_INV_HUMBIRDSAGE01BX");
				case 18:
					return joaat("S_INV_GOLDENCURRANT01BX");
				case 40:
					return joaat("S_INV_FEVERFEW01BX");
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_736(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(iParam0))
		{
			PROPSET::_REQUEST_PROPSET(iParam0);
			return false;
		}
	}
	if (iParam1 == 0 || iParam1 == 2)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(joaat("PG_HERBALISTCAMP01X_CART")))
		{
			PROPSET::_REQUEST_PROPSET(joaat("PG_HERBALISTCAMP01X_CART"));
			return false;
		}
	}
	return true;
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("S_INV_HORSEREVIVER01X");
		case 1:
			return joaat("S_INV_PAMPPOTHORSE01X");
		case 2:
			return joaat("S_INV_PAMPPOTHORSE01X");
		case 3:
			return joaat("S_CRAFTEDTONIC_01X");
		case 4:
			return joaat("S_CRAFTEDTONIC_01X");
		default:
			break;
	}
	return joaat("S_CRAFTEDTONIC_01X");
}

int func_738(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return iParam0->f_525;
		case 3:
			return iParam0->f_526;
		case 1:
			return iParam0->f_219;
		case 5:
			return iParam0->f_527;
		case 6:
			return iParam0->f_528;
		default:
			break;
	}
	return 0;
}

int func_739(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 3;
				default:
					break;
			}
			return 5;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			return 5;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				case 2:
					return 3;
				default:
					break;
			}
			return 5;
		case 5:
			return 1;
		case 6:
			switch (iParam1)
			{
				case 1:
					return 4;
				default:
					break;
			}
			return 3;
		case 7:
			return 4;
		case 4:
			return 2;
	}
	return 0;
}

float func_740(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3f;
		case 3:
			return 3f;
		case 1:
			return 3f;
		case 5:
			return 3f;
		case 6:
			return 3f;
		case 7:
			return 3f;
		case 4:
			return 3f;
		default:
			break;
	}
	return 1f;
}

bool func_741(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0->f_511, iParam1);
}

bool func_742(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(iParam0->f_473, iParam1);
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 131072;
		case 2:
			return 5;
		case 3:
			return 13;
		case 4:
			return 262144;
		default:
			break;
	}
	return 262144;
}

void func_744(var uParam0, int iParam1, char* sParam2)
{
	uParam0->f_21[iParam1 /*17*/].f_13 = sParam2;
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 4;
		default:
			break;
	}
	return 2;
}

void func_746(int iParam0, float fParam1)
{
	if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1) || TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
	{
		TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, iParam0->f_483, iParam0->f_484, fParam1, 1, 0, 0, 0);
	}
}

void func_747(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_434.f_5))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_434.f_5, 0))
		{
			if (!PED::_0xEEED8FAFEC331A70(iParam0->f_7, Global_36, 3))
			{
				if (!PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			TASK::CLEAR_PED_TASKS(iParam0->f_434.f_5, true, false);
			if (ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_434.f_5, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			else
			{
				TASK::_0x2E1D6D87346BB7D2(iParam0->f_7, Global_35, 1, 0);
			}
		}
	}
}

bool func_748(int iParam0)
{
	if (((iParam0->f_203 == 6 || iParam0->f_203 == 7) || iParam0->f_203 == 14) || iParam0->f_203 == 15)
	{
		return true;
	}
	return false;
}

bool func_749(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0->f_6, iParam1);
}

void func_750(int iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(iParam0->f_6), iParam1);
}

char* func_751(char* sParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, sParam0, 64);
	if (__LIB_0__::func_181())
	{
		StringConCat(&cVar0, "_J", 64);
	}
	return __LIB_1__::func_569(cVar0);
}

struct<4> func_752(int iParam0)
{
	struct<4> Var0;
	Var0 = { -0.1937f, 0.7806f, 0f };
	Var0.f_3 = -178f;
	return Var0;
}

void func_753(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_2 = iParam3;
	uParam0->f_1 = iParam2;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
}

int func_754(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 1:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 2:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 3:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 4:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 5:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 6:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 7:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 8:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 9:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 10:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 11:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 12:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 13:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 14:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 15:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 1:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 2:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				case 3:
					return joaat("A_C_HORSE_APPALOOSA_BLANKET");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_755(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("P_CART01X");
				case 1:
					return joaat("P_CART01X");
				case 2:
					return joaat("P_CART01X");
				case 3:
					return joaat("P_CART01X");
				case 4:
					return joaat("P_CART01X");
				case 5:
					return joaat("P_CART01X");
				case 6:
					return joaat("P_CART01X");
				case 7:
					return joaat("P_CART01X");
				case 8:
					return joaat("P_CART01X");
				case 9:
					return joaat("P_CART01X");
				case 10:
					return joaat("P_CART01X");
				case 11:
					return joaat("P_CART01X");
				case 12:
					return joaat("P_CART01X");
				case 13:
					return joaat("P_CART01X");
				case 14:
					return joaat("P_CART01X");
				case 15:
					return joaat("P_CART01X");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("P_CART01X");
				case 1:
					return joaat("P_CART01X");
				case 2:
					return joaat("P_CART01X");
				case 3:
					return joaat("P_CART01X");
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_756(char* sParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return false;
	}
	return true;
}

int func_757(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 43:
			return iParam1;
		case 19:
			return iParam4;
		case 18:
			return iParam2;
		case 40:
			return iParam3;
		default:
			break;
	}
	return -1;
}

char* func_758(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PB_PLYR_YARROW";
		case 1:
			return "PB_PLYR_GCURRANT";
		case 2:
			return "PB_PLYR_VSNOW";
		case 3:
			return "PB_PLYR_HBSAGE";
		case 4:
			return "PB_HANDOVER";
		case 5:
			return "PB_HANDOVER_PAMPHLET";
		case 6:
			return "PL_GIVE_YARROW";
		case 7:
			return "PB_MTH_ENTER_SAGE";
		case 8:
			return "PB_MTH_ENTER_CURRANT";
		case 9:
			return "PB_MTH_ENTER_SNOWDROP";
		default:
			break;
	}
	return "INVALID";
}

int func_759(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 6;
		case 19:
			return 7;
		case 18:
			return 8;
		case 40:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_760(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 5:
			return true;
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_761(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return -1f, 0f, 0f;
		case 13:
			return 3.34f, -1.45f, 0f;
		case 14:
			return 0f, 0f, -10f;
		case 19:
			return -1f, 1f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_762(int iParam0, bool bParam1)
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
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				if (bParam1)
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

float func_763(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 156.24f;
		default:
			break;
	}
	return 0f;
}

bool func_764(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return false;
		default:
			break;
	}
	return true;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_766(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2) && ENTITY::IS_ENTITY_AN_OBJECT(*uParam2))
	{
		return true;
	}
	if (PROPSET::_IS_PROPSET_VALID(iParam0) || PROPSET::_HAS_PROPSET_LOADED(iParam4))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, iParam1, false, false);
		if (iVar1 > 0)
		{
			if (iParam3 < 1 && iParam3 < iVar1)
			{
				*uParam2 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar0));
			}
			else
			{
				*uParam2 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam3, iVar0));
			}
		}
		ITEMSET::_CLEAR_ITEMSET(iVar0);
		ITEMSET::CLEAN_ITEMSET(iVar0);
		ITEMSET::DESTROY_ITEMSET(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(*uParam2, true, false) };
		}
		return (ENTITY::DOES_ENTITY_EXIST(*uParam2) && ENTITY::IS_ENTITY_AN_OBJECT(*uParam2));
	}
	return false;
}

void func_767(int iParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	vector3 vVar0;
	__LIB_0__::func_172(iParam0->f_234[iParam2]);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vParam4) };
	iParam0->f_234[iParam2] = VOLUME::_CREATE_VOLUME_BY_HASH(iParam3, vVar0, vParam7.x, vParam7.y, __LIB_2__::func_709((vParam7.z + __LIB_3__::func_526(uParam1))), vParam10);
}

char* func_768(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SCRIPT_COMMON_STAND_HERBALIST"):
			return "SCRIPT_COMMON_STAND_HERBALIST";
		case joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"):
			return "SCRIPT_COMMON_MIX_MORTAR_HERBALIST";
		case joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"):
			return "SCRIPT_COMMON_LEAN_READ_HERBALIST";
		case joaat("WORLD_HUMAN_SIT_GROUND_MALE_A"):
			return "WORLD_HUMAN_SIT_GROUND_MALE_A";
		default:
			break;
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iParam0);
}

int func_769(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_434.f_5))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_434.f_5, Global_35, 1, 1) || __LIB_0__::func_394(Global_35, iParam0->f_434.f_5, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_770(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return true;
	}
	if (iParam0 < iParam1)
	{
		return true;
	}
	return false;
}

void func_771(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			iParam0->f_525++;
			break;
		case 3:
			iParam0->f_526++;
			break;
		case 1:
			iParam0->f_219++;
			break;
		case 5:
			iParam0->f_527++;
			break;
		case 6:
			iParam0->f_528++;
			break;
	}
}

void func_772(int iParam0)
{
	TASK::_0x541E5B41DCA45828(iParam0->f_7, iParam0->f_484, 0);
	iParam0->f_483 = 1;
	iParam0->f_484 = 1;
}

bool func_773(int iParam0)
{
	if (!iParam0->f_519 || !__LIB_0__::func_163(iParam0->f_7, 1435919172))
	{
		return true;
	}
	return false;
}

int func_774(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 0;
		case 18:
			return 1;
		case 40:
			return 3;
		case 19:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_775(int iParam0)
{
	if (iParam0->f_203 >= 1 && iParam0->f_203 <= 8)
	{
		return 0;
	}
	if (iParam0->f_203 >= 9 && iParam0->f_203 <= 16)
	{
		return 1;
	}
	if (iParam0->f_203 >= 17 && iParam0->f_203 <= 21)
	{
		return 2;
	}
	return -1;
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 40:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 20:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 26:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 43:
			return joaat("CONSUMABLE_HERB_YARROW");
		default:
			break;
	}
	return 0;
}

char* func_777(int iParam0)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_HORSEREV";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_HORSEREV_ALT";
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_RECIPE";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT1";
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT1";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT2";
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_TONIC";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_TONIC_ALT";
			}
			break;
	}
	return __LIB_3__::func_497("[RESS]", "REHOC_REWARD_TYPE_INITIAL_DIALOGUE_CONTEXT: Invalid Reward.");
}

int func_778(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CONSUMABLE_HORSE_REVIVER");
		case 1:
			return joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_STIMULANT");
		case 2:
			return joaat("DOCUMENT_PAMPHLET_POISON_ARROW");
		case 3:
			return joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED");
		case 4:
			return joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED");
		default:
			break;
	}
	return 0;
}

char* func_779(int iParam0)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_HAND_HORSEREV";
				case 1:
					return "RE_HEC_UNI_V1_HAND_HORSEREV_ALT";
			}
			break;
		case 1:
			return "RE_HEC_UNI_V1_HAND_HORSE_SPECIAL";
		case 2:
			return "RE_HEC_UNI_V1_HAND_POI_ARROW";
		case 3:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_HAND_TONIC_SPECIAL";
				case 1:
					return "RE_HEC_UNI_V1_HAND_TONIC_SPECIAL_ALT";
			}
			break;
	}
	return __LIB_3__::func_497("[RESS]", "REHOC_REWARD_TYPE_HANDOVER_DIALOGUE_CONTEXT: Invalid Reward.");
}

bool func_780(int iParam0, int iParam1)
{
	if (PED::_0x569F1E1237508DEB(iParam0->f_7) == iParam1)
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0, bool bParam1, bool bParam2)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0))
	{
		if (!bParam1 && TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			return false;
		}
		if (iParam0->f_468 != 0)
		{
			if (PED::_0x68821369A2CEADD5(iParam0->f_7, iParam0->f_468))
			{
				return false;
			}
		}
		if (!bParam2)
		{
			return true;
		}
		else
		{
			return TASK::_0x02EBBB3989B7E695(iParam0->f_7);
		}
	}
	return false;
}

void func_782(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_475 = iParam1;
	iParam0->f_476 = iParam2;
}

char* func_783(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return "script@beat@wilderness@herbalistcamp@herbalistYarrowReturn";
		case 18:
			return "script@beat@wilderness@herbalistcamp@herbalistGcurrantReturn";
		case 40:
			return "script@beat@wilderness@herbalistcamp@herbalistVsnowdropReturn";
		case 19:
			return "script@beat@wilderness@herbalistcamp@herbalistHBSageReturn";
		default:
			break;
	}
	return "INVALID";
}

char* func_784(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialYarrow";
		case 18:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialGcurrant";
		case 40:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialVsnowdrop";
		case 19:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialHBSage";
		default:
			break;
	}
	return "INVALID";
}

int func_785(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				case 13:
					return 0;
				case 14:
					return 0;
				case 15:
					return 0;
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
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_786(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1369.092f, 112.5304f, 83.7997f;
				case 1:
					return -1419.432f, -1519.578f, 85.4243f;
				case 2:
					return 2696.483f, 281.4122f, 60.5879f;
				case 3:
					return 887.6382f, 1265.848f, 234.0708f;
				case 4:
					return 1212.406f, 731.8035f, 100.6271f;
				case 5:
					return 1073.291f, 47.2678f, 85.9555f;
				case 6:
					return 2524.885f, 1704.788f, 86.7904f;
				case 7:
					return 2327.495f, 1822.98f, 122.7985f;
				case 8:
					return 2333.665f, 348.8242f, 55.0387f;
				case 9:
					return 1173.026f, -2168.264f, 54.2849f;
				case 10:
					return 1568.686f, -198.235f, 79.6169f;
				case 11:
					return 818.8927f, -1431.735f, 52.9105f;
				case 12:
					return 913.5112f, -560.4623f, 89.0854f;
				case 13:
					return -2249.065f, -1559.684f, 148.8786f;
				case 14:
					return -2433.508f, -1344.774f, 152.7462f;
				case 15:
					return -2063.969f, -1288.022f, 117.0141f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1576.12f, -1671.869f, 78.1639f;
				case 1:
					return 705.653f, 1890.997f, 238.597f;
				case 2:
					return -4486.521f, -2936.634f, -17.8423f;
				case 3:
					return 567.0672f, 174.5635f, 133.2414f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_787(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 299.52f;
				case 1:
					return 0f, 0f, 275.76f;
				case 2:
					return 0f, 0f, -275.04f;
				case 3:
					return 0f, 0f, -70.56f;
				case 4:
					return 0f, 0f, 175.68f;
				case 5:
					return 0f, 0f, 252.72f;
				case 6:
					return 0f, 0f, 105.84f;
				case 7:
					return 0f, 0f, 190.8f;
				case 8:
					return 0f, 0f, 230.4f;
				case 9:
					return 0f, 0f, 207.36f;
				case 10:
					return 0f, 0f, 4.32f;
				case 11:
					return 0f, 0f, -221.76f;
				case 12:
					return 0f, 0f, 241.92f;
				case 13:
					return 0f, 0f, 301.68f;
				case 14:
					return 0f, 0f, 74.88f;
				case 15:
					return 0f, 0f, 257.76f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -171.36f;
				case 1:
					return 0f, 0f, -99.36f;
				case 2:
					return 0f, 0f, 1f;
				case 3:
					return 0f, 0f, -191.52f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_788(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1375.984f, 108.9796f, 83.7018f;
				case 1:
					return -1408.55f, -1522.986f, 85.1073f;
				case 2:
					return 2696.87f, 278.6988f, 60.5321f;
				case 3:
					return 885.0094f, 1265.08f, 233.7076f;
				case 4:
					return 1211.431f, 719.9561f, 100.3598f;
				case 5:
					return 1071.506f, 51.3335f, 85.8447f;
				case 6:
					return 2516.969f, 1703.515f, 86.3327f;
				case 7:
					return 2325.517f, 1819.271f, 122.1497f;
				case 8:
					return 2331.519f, 360.0928f, 55.4513f;
				case 9:
					return 1171.611f, -2183.105f, 53.9324f;
				case 10:
					return 1571.554f, -199.0512f, 79.4281f;
				case 11:
					return 822.4827f, -1425.274f, 52.6888f;
				case 12:
					return 917.1799f, -565.3954f, 88.9516f;
				case 13:
					return -2250.794f, -1556.735f, 148.8041f;
				case 14:
					return -2424.391f, -1341.52f, 152.5463f;
				case 15:
					return -2063.463f, -1296.856f, 116.1337f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1574.672f, -1663.685f, 77.9852f;
				case 1:
					return 717.2708f, 1880.057f, 238.5362f;
				case 2:
					return -4477.402f, -2941.413f, -19.301f;
				case 3:
					return 564.3894f, 172.728f, 133.1894f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_789(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -11.52f;
				case 1:
					return 0f, 0f, 30.96f;
				case 2:
					return 9.7f, -1.1f, 115.515f;
				case 3:
					return 0f, -4.9f, 5.76f;
				case 4:
					return 0f, 0f, 8.64f;
				case 5:
					return 0f, 0f, 137.52f;
				case 6:
					return 0f, 0f, 210.96f;
				case 7:
					return 6.05f, 0f, -5.325f;
				case 8:
					return 0f, 0f, -131.04f;
				case 9:
					return 0f, 0f, 249.84f;
				case 10:
					return 0f, 0f, -90.44f;
				case 11:
					return 0f, 0f, -12.96f;
				case 12:
					return 0f, 0f, -5.76f;
				case 13:
					return 0f, 4.7f, -130.32f;
				case 14:
					return 0f, 0f, 133.92f;
				case 15:
					return 0f, 0f, 337.68f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 208.08f;
				case 1:
					return 0.4f, 0f, 11.52f;
				case 2:
					return 0f, 0f, 128.16f;
				case 3:
					return 0f, 0f, 56.16f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_790(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 9:
					return -1907492746;
				case 14:
					return 1442567708;
				case 3:
					return joaat("RE_HEC_UNI_V1_HELP");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 20:
					return joaat("RE_HEC_UNI_V1_REJECT");
				case 21:
					return joaat("RE_HEC_UNI_V1_REJECT_ALT");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 28:
					return -1907492746;
				case 29:
					return joaat("RE_HEC_UNI_V1_PLAYER_WAIT_01");
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 51:
					return joaat("RE_HEC_UNI_V1_YARROW_LOOK");
				case 52:
					return joaat("RE_HEC_UNI_V1_YARROW_DESC");
				case 53:
					return joaat("RE_HEC_UNI_V1_YARROW_RETURN");
				case 54:
					return joaat("RE_HEC_UNI_V1_YARROW_TASTE");
				case 55:
					return joaat("RE_HEC_UNI_V1_YARROW_REACT");
				case 56:
					return joaat("RE_HEC_UNI_V1_YARROW_TIP");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 33:
					return joaat("RE_HEC_UNI_V1_CURRANT_LOOK");
				case 34:
					return joaat("RE_HEC_UNI_V1_CURRANT_DESC");
				case 35:
					return joaat("RE_HEC_UNI_V1_CURRANT_RETURN");
				case 36:
					return joaat("RE_HEC_UNI_V1_CURRANT_INSPECT");
				case 37:
					return joaat("RE_HEC_UNI_V1_CURRANT_REACT");
				case 38:
					return joaat("RE_HEC_UNI_V1_CURRANT_TIP");
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 39:
					return joaat("RE_HEC_UNI_V1_SAGE_LOOK");
				case 40:
					return joaat("RE_HEC_UNI_V1_SAGE_DESC");
				case 41:
					return joaat("RE_HEC_UNI_V1_SAGE_RETURN");
				case 42:
					return joaat("RE_HEC_UNI_V1_SAGE_TASTE");
				case 43:
					return joaat("RE_HEC_UNI_V1_SAGE_REACT");
				case 44:
					return joaat("RE_HEC_UNI_V1_SAGE_TIP");
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 45:
					return joaat("RE_HEC_UNI_V1_WILD_LOOK");
				case 46:
					return joaat("RE_HEC_UNI_V1_WILD_DESC");
				case 47:
					return joaat("RE_HEC_UNI_V1_WILD_RETURN");
				case 48:
					return joaat("RE_HEC_UNI_V1_WILD_INSPECT");
				case 49:
					return joaat("RE_HEC_UNI_V1_WILD_REACT");
				case 50:
					return joaat("RE_HEC_UNI_V1_WILD_TIP");
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 73:
					return joaat("RE_HEC_UNI_V1_LOOKING");
				default:
					break;
			}
			break;
	}
	return 2;
}

char* func_791(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "RE_HEC_UNI_V1_CALLOVER";
				case 1:
					return "RE_HEC_UNI_V1_CALLOVER_2ND";
				case 2:
					return "RE_HEC_UNI_V1_CALLOVER_RESP";
				case 3:
					return "RE_HEC_UNI_V1_HELP";
				case 4:
					return "RE_HEC_UNI_V1_HELP_SICK";
				case 5:
					return "RE_HEC_UNI_V1_HELP_CONTINUED";
				case 6:
					return "RE_HEC_UNI_V1_HELP_INSIST";
				case 7:
					return "RE_HEC_UNI_V1_HELP_2ND";
				case 8:
					return "RE_HEC_UNI_V1_HELP_SICK_2ND";
				case 9:
					return "RE_HEC_UNI_V1_HELP";
				case 10:
					return "RE_HEC_UNI_V1_HELP_INSIST_2ND";
				case 11:
					return "RE_HEC_UNI_V1_HELP_3RD";
				case 12:
					return "RE_HEC_UNI_V1_HELP_SICK_3RD";
				case 13:
					return "RE_HEC_UNI_V1_HELP_3RD_CONTINUED";
				case 14:
					return "RE_HEC_UNI_V1_HELP_2ND_CONTINUED";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 15:
					return "RE_HEC_UNI_V1_ACCEPT_01";
				case 16:
					return "RE_HEC_UNI_V1_ACCEPT_02";
				case 17:
					return "RE_HEC_UNI_V1_ACCEPT_03";
				case 18:
					return "RE_HEC_UNI_V1_PLAYER_REJECT_01";
				case 19:
					return "RE_HEC_UNI_V1_PLAYER_REJECT_02";
				case 20:
					return "RE_HEC_UNI_V1_REJECT";
				case 21:
					return "RE_HEC_UNI_V1_REJECT_ALT";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 22:
					return "RE_HEC_UNI_V1_HANDOVER";
				case 23:
					return "RE_HEC_UNI_V1_HANDOVER_PLAYER";
				case 24:
					return "RE_HEC_UNI_V1_MORE";
				case 25:
					return "RE_HEC_UNI_V1_DISCOVERED";
				case 26:
					return "RE_HEC_UNI_V1_PLAYER_RETURN_01";
				case 27:
					return "RE_HEC_UNI_V1_PLAYER_RETURN_02";
				case 28:
					return "RE_HEC_UNI_V1_HELP";
				case 29:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_01";
				case 30:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_02";
				case 31:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_03";
				case 32:
					return "RE_HEC_UNI_V1_FORGET";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 33:
					return "RE_HEC_UNI_V1_CURRANT_LOOK";
				case 34:
					return "RE_HEC_UNI_V1_CURRANT_DESC";
				case 35:
					return "RE_HEC_UNI_V1_CURRANT_RETURN";
				case 36:
					return "RE_HEC_UNI_V1_CURRANT_INSPECT";
				case 37:
					return "RE_HEC_UNI_V1_CURRANT_REACT";
				case 38:
					return "RE_HEC_UNI_V1_CURRANT_TIP";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 39:
					return "RE_HEC_UNI_V1_SAGE_LOOK";
				case 40:
					return "RE_HEC_UNI_V1_SAGE_DESC";
				case 41:
					return "RE_HEC_UNI_V1_SAGE_RETURN";
				case 42:
					return "RE_HEC_UNI_V1_SAGE_TASTE";
				case 43:
					return "RE_HEC_UNI_V1_SAGE_REACT";
				case 44:
					return "RE_HEC_UNI_V1_SAGE_TIP";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 45:
					return "RE_HEC_UNI_V1_WILD_LOOK";
				case 46:
					return "RE_HEC_UNI_V1_WILD_DESC";
				case 47:
					return "RE_HEC_UNI_V1_WILD_RETURN";
				case 48:
					return "RE_HEC_UNI_V1_WILD_INSPECT";
				case 49:
					return "RE_HEC_UNI_V1_WILD_REACT";
				case 50:
					return "RE_HEC_UNI_V1_WILD_TIP";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 51:
					return "RE_HEC_UNI_V1_YARROW_LOOK";
				case 52:
					return "RE_HEC_UNI_V1_YARROW_DESC";
				case 53:
					return "RE_HEC_UNI_V1_YARROW_RETURN";
				case 54:
					return "RE_HEC_UNI_V1_YARROW_TASTE";
				case 55:
					return "RE_HEC_UNI_V1_YARROW_REACT";
				case 56:
					return "RE_HEC_UNI_V1_YARROW_TIP";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 57:
					return "RE_HEC_UNI_V1_HAVEIT";
				case 58:
					return "RE_HEC_UNI_V1_WHATIS";
				case 59:
					return "RE_HEC_UNI_V1_SPECIAL";
				case 60:
					return "RE_HEC_UNI_V1_TAKEIT";
				case 61:
					return "RE_HEC_UNI_V1_SNOOP";
				case 62:
					return "RE_HEC_UNI_V1_HEREYOUARE";
				case 63:
					return "RE_HEC_UNI_V1_THANKS";
				case 64:
					return "RE_HEC_UNI_V1_TAKEORNOT";
				case 65:
					return "RE_HEC_UNI_V1_SUITYOURSELF";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 66:
					return "RE_HEC_UNI_V1_SPACE";
				case 67:
					return "RE_HEC_UNI_V1_BACKUP";
				case 68:
					return "RE_HEC_UNI_V1_PUSHED";
				case 70:
					return "RE_HEC_UNI_V1_COMEBACK";
				case 69:
					return "RE_HEC_UNI_V1_BOTHERING";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 71:
					return "RE_HEC_UNI_V1_AGGRO";
				case 72:
					return "RE_HEC_UNI_V1_AGGRO_B";
				case 73:
					return "RE_HEC_UNI_V1_LOOKING";
				case 74:
					return "RE_HEC_UNI_V1_LEAVE";
				case 75:
					return "RE_HEC_UNI_V1_GOODDAY";
				case 76:
					return "RE_HEC_UNI_V1_REMINDER_A";
				case 77:
					return "RE_HEC_UNI_V1_REMINDER_B";
				case 78:
					return "RE_HEC_UNI_V1_MYCAMP";
				default:
					break;
			}
			break;
	}
	return "INVALID";
}

bool func_792(int iParam0)
{
	switch (iParam0->f_203)
	{
		case 6:
		case 7:
		case 14:
		case 15:
			return true;
		default:
			break;
	}
	return false;
}

char* func_793(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_SPACE";
		case 1:
			return "RE_HEC_UNI_V1_BACKUP";
		case 3:
			return "RE_HEC_UNI_V1_PUSHED";
		default:
			break;
	}
	return "";
}

char* func_794(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_STEAL_A";
		case 1:
			return "RE_HEC_UNI_V1_STEAL_B";
		case 2:
			return "RE_HEC_UNI_V1_STEAL_C";
		default:
			break;
	}
	return "";
}

char* func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_COMEBACK";
		case 1:
			return "RE_HEC_UNI_V1_ISAIDLEAVE";
		case 2:
			return "RE_HEC_UNI_V1_ISAID";
		case 3:
			return "RE_HEC_UNI_V1_AGGRO_M";
		default:
			break;
	}
	return "";
}

char* func_796(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_196(bParam1, "WON_DISPUTE_ESCALATED", "RE_HEC_UNI_V1_DONEENOUGH");
		default:
			break;
	}
	return "";
}

char* func_797(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_PRETHREATENME";
		case 1:
			return "RE_HEC_UNI_V1_THREATENME";
		default:
			break;
	}
	return "";
}

char* func_798(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_YOURECRAZY";
		default:
			break;
	}
	return "";
}

char* func_799(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_IUNDERSTAND";
		default:
			break;
	}
	return "";
}

void func_800(var uParam0, var uParam1, bool bParam2)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	if (!bParam2)
	{
		uParam1->f_2 = 0;
	}
	else
	{
		uParam1->f_2 = 1;
	}
	uParam1->f_3 = uParam0->f_3;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_18 = { uParam0->f_18 };
}

void func_801(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (fParam3 > fParam2)
	{
		__LIB_1__::func_471(&(uParam0->f_21[iParam1 /*17*/]), 9);
	}
}

int func_802(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
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
						return 1;
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
								return 1;
							}
						}
					}
				}
				break;
			case 3:
				return 1;
		}
	}
	return 0;
}

void func_803(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (!__LIB_1__::func_565(uParam0))
	{
		*uParam0 = GRAPHICS::_0xBD3324281E8B9933(*uParam3, iParam1, iParam2, iParam4);
		if (__LIB_1__::func_565(uParam0))
		{
		}
	}
}

bool func_804(int iParam0)
{
	if (TASK::IS_PED_STILL(iParam0->f_7))
	{
		if (!__LIB_0__::func_48(Global_35, iParam0->f_7, 1.25f, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_805(int iParam0)
{
	return __LIB_0__::func_27(iLocal_807, iParam0);
}

bool func_806(var uParam0, int iParam1)
{
	return __LIB_4__::func_323(uParam0, uParam0->f_15[iParam1]);
}

char* func_807(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 43:
			return __LIB_0__::func_196(bParam1, "SCRIPT_RE@HERBALISTCAMP@YARROW_RETURN", "SCRIPT_RE@HERBALISTCAMP@YARROW_INTRO");
		case 19:
			return __LIB_0__::func_196(bParam1, "SCRIPT_RE@HERBALISTCAMP@HBSASGE_RETURN", "SCRIPT_RE@HERBALISTCAMP@HBSAGE_INTRO");
		case 18:
			return __LIB_0__::func_196(bParam1, "SCRIPT_RE@HERBALISTCAMP@GCURRANT_RETURN", "SCRIPT_RE@HERBALISTCAMP@GCURRANT_INTRO");
		case 40:
			return __LIB_0__::func_196(bParam1, "SCRIPT_RE@HERBALISTCAMP@VSNOWDROP_RETURN", "SCRIPT_RE@HERBALISTCAMP@VSNOWDROP_INTRO");
		default:
			break;
	}
	return "INVALID";
}

void func_808(int iParam0)
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
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		__LIB_3__::func_440(&Var0, Global_35, 0, 0, 1, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
	}
}

char* func_809(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	switch (iParam0)
	{
		case 43:
			return sParam1;
		case 19:
			return sParam2;
		case 18:
			return sParam3;
		case 40:
			return sParam4;
		default:
			break;
	}
	return __LIB_3__::func_497("[REHOC]", "PICK_HERB_STRING: Invalid Herb Index.");
}

void func_810(var uParam0, int iParam1)
{
	__LIB_3__::func_938(uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(uParam0->f_1, iParam1, -1);
}

void func_811(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	__LIB_3__::func_963(uParam0, "objBook", (*uParam3)[0], 0);
	__LIB_3__::func_963(uParam0, "objBottle01", (*uParam3)[11], 0);
	__LIB_3__::func_963(uParam0, "objBurdock01", (*uParam3)[4], 0);
	__LIB_3__::func_963(uParam0, "objKnife", (*uParam3)[1], 0);
	__LIB_3__::func_963(uParam0, "objMBottle01", (*uParam3)[9], 0);
	__LIB_3__::func_963(uParam0, "objMBottle02", (*uParam3)[10], 0);
	__LIB_3__::func_963(uParam0, "objMortar", (*uParam3)[3], 0);
	__LIB_3__::func_963(uParam0, "ped_herbalist", iParam2, 0);
	if (bParam4)
	{
		switch (iParam1)
		{
			case 43:
				__LIB_3__::func_963(uParam0, "objYarrow02", (*uParam3)[19], 0);
				break;
			case 40:
				__LIB_3__::func_963(uParam0, "Snoedrop", (*uParam3)[19], 0);
				break;
			case 18:
				__LIB_3__::func_963(uParam0, "Goldcurrant", (*uParam3)[19], 0);
				break;
			case 19:
				__LIB_3__::func_963(uParam0, "Hbsage", (*uParam3)[19], 0);
				break;
		}
	}
}

char* func_812(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HOC_REWARD_REMEDY";
		case 1:
			return "RE_HOC_REWARD_RECIPE";
		case 2:
			return "RE_HOC_REWARD_RECIPE";
		case 3:
			return "RE_HOC_REWARD_TONIC";
		case 4:
			return "RE_HOC_REWARD_TONIC";
		default:
			break;
	}
	return __LIB_3__::func_497("[RESS]", "REHOC_REWARD_TYPE_INITIAL_DIALOGUE_CONTEXT: Invalid Reward.");
}

void func_813(var uParam0, int iParam1, float fParam2)
{
	__LIB_3__::func_362(&(uParam0->f_21[iParam1 /*17*/]), fParam2);
}

void func_814(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar0 = { vVar0 - Vector(1f, 0f, 0f) };
	__LIB_3__::func_938(uParam0, vVar0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
}

void func_815(int iParam0)
{
	__LIB_3__::func_437(&(iParam0->f_112));
	__LIB_3__::func_437(&(iParam0->f_133));
	__LIB_3__::func_437(&(iParam0->f_154));
	__LIB_3__::func_437(&(iParam0->f_175));
	__LIB_2__::func_919(iParam0->f_242, 1, 1);
	__LIB_2__::func_919(iParam0->f_90[3], 1, 1);
	__LIB_2__::func_919(iParam0->f_90[19], 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_242))
	{
		PHYSICS::ACTIVATE_PHYSICS(iParam0->f_242);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_90[3]))
	{
		PHYSICS::ACTIVATE_PHYSICS(iParam0->f_90[3]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_90[19]))
	{
		PHYSICS::ACTIVATE_PHYSICS(iParam0->f_90[19]);
	}
}

bool func_816(int* iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || __LIB_0__::func_139(iParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*iParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (__LIB_0__::func_572(iParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_817(int* iParam0, char[4] cParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = cParam1;
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

bool func_818(int iParam0)
{
	if (__LIB_0__::func_75(&(iParam0->f_459)))
	{
		if (__LIB_1__::func_285(&(iParam0->f_459), iParam0->f_471))
		{
			iParam0->f_471 = 0f;
			__LIB_0__::func_37(&(iParam0->f_459));
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_819(int iParam0, int iParam1)
{
	if (__LIB_0__::func_163(iParam0->f_7, 242628503))
	{
		if (!TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam1)
		{
			return false;
		}
	}
	if (((iParam0->f_523 == 5 || iParam0->f_523 == 6) || iParam0->f_523 == 7) || iParam0->f_523 == 4)
	{
		if (__LIB_2__::func_136(Global_35, 0))
		{
			return false;
		}
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 1))
	{
		return TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0);
	}
	else if (PED::IS_PED_FACING_PED(iParam0->f_7, Global_35, 45f))
	{
		return true;
	}
	return false;
}

void func_820(var uParam0, int iParam1)
{
	uParam0->f_1 = joaat("CS_HERBALIST");
	*uParam0 = 4;
	StringCopy(&(uParam0->f_23), "HERBALIST", 64);
	uParam0->f_6 = { -0.6f, 1.95f, 0f };
	__LIB_3__::func_950(uParam0);
}

bool func_821(var uParam0)
{
	if (__LIB_3__::func_289(uParam0))
	{
		return true;
	}
	return false;
}

void func_822(int iParam0, var uParam1, float fParam2, float fParam3)
{
	__LIB_0__::func_172(iParam0->f_531);
	iParam0->f_531 = VOLUME::_CREATE_VOLUME_CYLINDER(__LIB_3__::func_179(uParam1), 0f, 0f, 0f, fParam2, fParam2, fParam3);
	__LIB_3__::func_241(iParam0->f_531, 1);
}

void func_823(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !__LIB_0__::func_75(&(iParam0->f_459)))
	{
		__LIB_1__::func_148(&(iParam0->f_459));
	}
	iParam0->f_471 = (iParam0->f_471 + (fParam1 + 5f));
}

void func_824(int iParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8)
{
	vector3 vVar0;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vParam4) };
	switch (iParam3)
	{
		case 0:
			__LIB_3__::func_585(&(iParam0->f_222[iParam2]), vVar0, fParam7);
			break;
		case 1:
			__LIB_2__::func_659(&(iParam0->f_222[iParam2]), vVar0, fParam7, 0, iParam8);
			break;
		case 2:
			__LIB_3__::func_337(&(iParam0->f_222[iParam2]), vVar0, fParam7);
			break;
	}
}

void func_825(int iParam0)
{
	return;
	if (!__LIB_0__::func_75(&(iParam0->f_456)) || __LIB_1__::func_285(&(iParam0->f_456), 2f))
	{
		PED::_0x2208438012482A1A(iParam0->f_7, false, false);
		__LIB_1__::func_148(&(iParam0->f_456));
	}
}

bool func_826(int iParam0, float fParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bVar0 = (PED::_IS_PED_USING_SCENARIO_POINT(iParam0->f_7, iParam0->f_87) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0));
	bVar1 = fParam1 < 1.25f;
	if (bVar0 && bVar1)
	{
		if (!__LIB_0__::func_75(&(iParam0->f_465)))
		{
			__LIB_1__::func_148(&(iParam0->f_465));
		}
		if (!bParam2 || __LIB_1__::func_285(&(iParam0->f_465), 3f))
		{
			return true;
		}
	}
	else if (__LIB_0__::func_75(&(iParam0->f_465)))
	{
		__LIB_0__::func_37(&(iParam0->f_465));
	}
	return false;
}

void func_827(var uParam0)
{
	__LIB_2__::func_433(uParam0);
	__LIB_2__::func_105(uParam0, 1);
	__LIB_2__::func_50(uParam0, 1);
	__LIB_2__::func_104(uParam0, 1);
	__LIB_2__::func_52(uParam0, 1);
	__LIB_2__::func_51(uParam0, 1);
	__LIB_2__::func_110(uParam0, 1);
	__LIB_2__::func_634(uParam0, 1);
	__LIB_2__::func_111(uParam0, 0);
}

void func_828(int iParam0, int iParam1)
{
	__LIB_3__::func_461(119, iParam0, iParam1);
}

int func_829(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	if (bParam3 && !__LIB_3__::func_944(uParam0, iParam1))
	{
		return __LIB_4__::func_485(uParam0, iParam1, bParam2);
	}
	else
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1, sVar0, true);
		uParam0->f_2 = iParam1;
		if (bParam2)
		{
			__LIB_3__::func_947(uParam0, 5, 1);
		}
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_5);
	}
	return 1;
}

bool func_830(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_3__::func_722(iParam0->f_7, &(iParam0->f_243), &iVar0, 0))
	{
		if (iParam1 == 0 || iParam1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_831(var uParam0, int iParam1, bool bParam2)
{
	__LIB_2__::func_411(&(uParam0->f_21[iParam1 /*17*/]), bParam2, 0);
}

void func_832(int* iParam0, bool bParam1)
{
	__LIB_2__::func_526(&(iParam0->f_21), bParam1, 0);
}

void func_833(int* iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_2__::func_344(uParam1);
	}
	__LIB_2__::func_593(iParam0, &(iParam0->f_21));
}

void func_834(int iParam0, bool bParam1, bool bParam2)
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
		__LIB_9__::func_211(iParam0, __LIB_0__::func_113());
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

void func_835(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	__LIB_2__::func_603(uParam0, uParam2, uParam3, 1, 1);
	__LIB_3__::func_967(*uParam0, uParam1, iParam4);
}

bool func_836(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_837(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_889(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_983(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_103(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

int func_838(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = __LIB_12__::func_834(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_839(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (__LIB_0__::func_84(&(uParam0->f_206), 16))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam1))
	{
		__LIB_13__::func_578(&(uParam0->f_206), *iParam1, iParam2, iParam3, iParam4, iParam5);
	}
}

void func_840(var uParam0)
{
	__LIB_4__::func_791(0);
	__LIB_4__::func_791(1);
}

void func_841(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_13__::func_664(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_842(var uParam0)
{
	return iLocal_15;
}

void func_843(var uParam0)
{
	*uParam0 = { 1581.761f, -259.821f, 79.8f };
	uParam0->f_3 = 38.32f;
	uParam0->f_4 = { 0f, -0.8f, 0.595f };
	uParam0->f_7 = { 0f, 0f, 180f };
	uParam0->f_10 = { -0.2f, -0.9f, 1.07f };
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0.2f, -0.6f, 1.2f };
	uParam0->f_19 = { 0f, 0f, 180f };
	uParam0->f_22 = { 1590.061f, -258.611f, 79.8f };
	uParam0->f_25 = 321.57f;
	uParam0->f_26 = { 1584.571f, -263.191f, 79.73f };
	uParam0->f_29 = 299.79f;
	uParam0->f_30 = { 1577.721f, -265.591f, 79.73f };
	uParam0->f_33 = 98.86f;
}

int func_844(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 128) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, bParam6, bParam7, bParam8, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !CAM::IS_SCREEN_FADED_OUT())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 128);
	}
	return iVar0;
}

void func_845(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

void func_846(int iParam0, int iParam1, var uParam2, float fParam3)
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
			__LIB_6__::func_831(Global_35, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_5__::func_439(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

int func_847()
{
	int iVar0;
	if (!PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		return 1;
	}
	else if (PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		if (__LIB_3__::func_417(Global_35))
		{
			iVar0 = __LIB_0__::func_147();
		}
		else
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, Global_36, 2f, 9);
		}
	}
	return 0;
}

bool func_848(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_4__::func_452(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_900(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
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

bool func_849(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		__LIB_10__::func_902(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_4__::func_452(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_4__::func_101(uParam4, 0, 0);
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

void func_850(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, var uParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, uParam10);
}

void func_851(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_13__::func_837(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

void func_852(int iParam0)
{
	if (__LIB_8__::func_406(iParam0))
	{
		return;
	}
	iLocal_15 = (iLocal_15 || iParam0);
}

bool func_853()
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 < 6 || iVar0 >= 21)
	{
		return true;
	}
	return false;
}

bool func_854()
{
	return __LIB_0__::func_756(1, 128);
}

bool func_855()
{
	return __LIB_0__::func_756(1, 131072);
}

void func_856()
{
	__LIB_9__::func_770(1, 262144);
}

void func_857()
{
	__LIB_9__::func_770(1, 131072);
}

void func_858(int iParam0)
{
	iLocal_48 = iParam0;
}

bool func_859(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	fVar0 = (fParam4 * 0.5f);
	vVar1 = { vParam0 - Vector(fVar0, fVar0, fVar0) };
	vVar4 = { vParam0 + Vector(fVar0, fVar0, fVar0) };
	if (!bParam5 && *iParam3 != 1)
	{
		*iParam3 = 1;
	}
	switch (*iParam3)
	{
		case 0:
			if (bParam5)
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(vParam0);
			}
			*iParam3++;
			break;
		case 1:
			if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar1, vVar4))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_860()
{
	return __LIB_0__::func_756(1, 262144);
}

void func_861(int iParam0)
{
	if (!__LIB_8__::func_406(iParam0))
	{
		return;
	}
	iLocal_15 = (iLocal_15 - (iLocal_15 && iParam0));
}

void func_862()
{
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	}
}

void func_863(int iParam0)
{
	iLocal_62 = iParam0;
}

void func_864(int iParam0)
{
	iLocal_58 = iParam0;
}

char* func_865()
{
	return "script@proc@shoprobberies@wagonfencer@wagonfencer";
}

void func_866(int iParam0)
{
	iLocal_63 = iParam0;
}

void func_867(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_868(int iParam0)
{
	iLocal_61 = iParam0;
}

void func_869(int iParam0)
{
	iLocal_45 = iParam0;
}

void func_870(int iParam0)
{
	iLocal_60 = iParam0;
}

char* func_871()
{
	return "SCRIPT_RC@RHMR0@IGIG7_HOSEA_CALLS_ARTHUR_IN_STAGECOACH";
}

bool func_872()
{
	return __LIB_0__::func_770(1, 536870912);
}

bool func_873()
{
	return __LIB_4__::func_54(1, 8192);
}

bool func_874()
{
	return __LIB_0__::func_770(1, 32768);
}

void func_875()
{
	__LIB_4__::func_58(1, 131072);
}

void func_876()
{
	__LIB_4__::func_58(1, 262144);
}

bool func_877()
{
	return __LIB_0__::func_770(1, 64);
}

bool func_878()
{
	return __LIB_0__::func_770(1, 128);
}

int func_879(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		__LIB_2__::func_259(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (__LIB_1__::func_568(sParam1))
			{
				return 1;
			}
		}
		else if (__LIB_1__::func_104(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_880(int iParam0)
{
	if (__LIB_0__::func_770(iParam0, 67108864))
	{
		return;
	}
	__LIB_0__::func_896(7, 1);
	__LIB_6__::func_664(iParam0, 67108864);
}

void func_881(int iParam0, bool bParam1)
{
	if (!__LIB_4__::func_56(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
	{
		MAP::REMOVE_BLIP(&(Global_1392240.f_1[iParam0 /*18*/].f_5));
	}
	if (bParam1)
	{
		__LIB_10__::func_683(iParam0);
	}
}

void func_882(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -15 || !__LIB_1__::func_917(iParam1))
	{
		return;
	}
	if (Global_1914319.f_3[iParam0 /*446*/].f_4 != -15)
	{
		if (__LIB_6__::func_683(iParam2, Global_1914319.f_3[iParam0 /*446*/].f_4))
		{
			Global_1914319.f_3[iParam0 /*446*/].f_4 = iParam2;
		}
	}
	else
	{
		Global_1914319.f_3[iParam0 /*446*/].f_4 = iParam2;
	}
}

bool func_883(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
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
	return __LIB_9__::func_913(&(iParam1->f_18), fParam2);
	return true;
}

int func_884(int iParam0)
{
	if (!__LIB_4__::func_56(iParam0))
	{
		return 0;
	}
	if (__LIB_4__::func_264(iParam0))
	{
		return 0;
	}
	if (((!__LIB_1__::func_200(94) && !__LIB_5__::func_353(94)) && !__LIB_1__::func_200(95)) && !__LIB_5__::func_353(95))
	{
	}
	__LIB_4__::func_262(iParam0, 1);
	return 1;
}

bool func_885(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_4__::func_122(iParam1, uParam2, 0);
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

bool func_886(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

bool func_887(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_12__::func_970(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_13__::func_41(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_914(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_468(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_13__::func_42(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_9__::func_178(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_979(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_2__::func_259(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_979(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_888(int iParam0, int iParam1)
{
	if (!__LIB_10__::func_622(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_16 = (Global_1392240.f_1[iParam0 /*18*/].f_16 - (Global_1392240.f_1[iParam0 /*18*/].f_16 && iParam1));
}

void func_889(int iParam0, int iParam1)
{
	if (__LIB_10__::func_622(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_16 = (Global_1392240.f_1[iParam0 /*18*/].f_16 || iParam1);
}

int func_890(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
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

void func_891(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = __LIB_0__::func_23();
		__LIB_4__::func_710(&iVar0, 0, 0, 0, 1, 0, 0);
		Global_40.f_9422[iParam0 /*7*/] = iVar0;
	}
}

bool func_892(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (bParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_6__::func_814(iParam1, uParam2, 0);
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

void func_893(int iParam0, int* iParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_9__::func_912(iParam0, iParam1);
	bVar0 = __LIB_5__::func_439(bParam3 >= 0f, bParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	if (bVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
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

void func_894(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!bParam1)
	{
		__LIB_5__::func_685(iParam0);
	}
	__LIB_13__::func_884(iParam0);
	Global_1392240.f_146 = 0;
	__LIB_4__::func_58(iParam0, 512);
}

void func_895(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if ((iParam1 <= 0 && iParam2 <= 0) && iParam3 <= 0)
	{
		return;
	}
	if (bParam4)
	{
		iVar0 = __LIB_0__::func_23();
	}
	__LIB_1__::func_446(&iVar0, 0, iParam3, iParam2, iParam1, 0, 0, 0);
	__LIB_10__::func_246(iParam0, iVar0, 1, 2, 0);
}

bool func_896(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (__LIB_12__::func_626(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_35(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_897(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_RENDERING(*uParam0))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

int func_898(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
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

void func_899(int iParam0, bool bParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2230271, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2230271, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2230271, 16384, 0, -1, -1, iParam0);
	}
}

bool func_900(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return (iVar0 > -1 && iVar0 < 12);
}

int func_901(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_902(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return (iVar0 > -1 && iVar0 < 7);
}

var func_903(int iParam0)
{
	return AUDIO::_0x5A13586A9447931F(iParam0);
}

int func_904(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_905(int iParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_8__::func_695(iParam0, 2);
	if (iParam1 == 1 && iParam0 != 0)
	{
		__LIB_8__::func_695(iParam0, 512);
	}
	else
	{
		__LIB_8__::func_674(iParam0, 512);
	}
	if (iParam2 == 1 && iParam0 != 0)
	{
		__LIB_8__::func_695(iParam0, 1024);
	}
	else
	{
		__LIB_8__::func_674(iParam0, 1024);
	}
	if (iParam3 == 1 && iParam0 != 0)
	{
		__LIB_8__::func_695(iParam0, 4096);
	}
	else
	{
		__LIB_8__::func_674(iParam0, 4096);
	}
}

void func_906()
{
	__LIB_8__::func_600(0, 0);
	__LIB_8__::func_600(1, 0);
	__LIB_8__::func_600(2, 0);
	__LIB_8__::func_600(3, 0);
	__LIB_1__::func_651(0, 0);
	__LIB_1__::func_651(1, 0);
	__LIB_1__::func_651(2, 0);
	__LIB_1__::func_651(3, 0);
	__LIB_1__::func_663(1, 0);
	__LIB_1__::func_663(2, 0);
	__LIB_1__::func_663(3, 0);
	__LIB_12__::func_623(0);
	__LIB_12__::func_624(0);
	__LIB_1__::func_653(0);
	__LIB_1__::func_658(0);
	__LIB_1__::func_648(1, 0);
	__LIB_1__::func_648(2, 0);
	__LIB_1__::func_648(3, 0);
	__LIB_8__::func_674(0, 2048);
	__LIB_8__::func_674(1, 2048);
	__LIB_8__::func_674(2, 2048);
	__LIB_8__::func_674(3, 2048);
	__LIB_1__::func_659(0);
	__LIB_1__::func_657(0);
	__LIB_1__::func_664(0);
	__LIB_1__::func_665(0);
	__LIB_12__::func_616(0);
	__LIB_1__::func_646(0);
	__LIB_1__::func_666(0);
	__LIB_1__::func_667(0);
	__LIB_1__::func_668(0);
	__LIB_1__::func_669(0);
	__LIB_1__::func_670(0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_617(0);
	__LIB_12__::func_618();
	__LIB_1__::func_671(0f, 0f, 0f);
	HUD::_0x160825DADF1B04B3();
	__LIB_8__::func_675(8);
	__LIB_8__::func_675(2048);
}

void func_907(int iParam0, int iParam1)
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
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, __LIB_1__::func_464(iParam0, 0));
		}
	}
}

void func_908(int iParam0)
{
	iLocal_23 = iParam0;
}

void func_909(bool bParam0)
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
			__LIB_9__::func_240(iVar0, __LIB_1__::func_440(iVar0), 0, 0);
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
			__LIB_9__::func_240(iVar0, __LIB_1__::func_440(iVar0), 0, 0);
		}
	}
}

void func_910(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (__LIB_4__::func_810(iVar0) && MISC::IS_BIT_SET(Global_40.f_9052, iVar0))
		{
			if ((Global_1392626[iVar0 /*32*/].f_10 && iParam0) == 0)
			{
				__LIB_10__::func_234(iVar0, iParam0);
			}
			__LIB_12__::func_92(iVar0);
		}
		iVar0++;
	}
}

bool func_911(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_7__::func_821(__LIB_0__::func_12());
	if (iVar0 == -1)
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1395601.f_5[iVar0 /*28*/].f_24, false))
	{
		return false;
	}
	if (!__LIB_0__::func_630(iParam0))
	{
		return Global_1395601.f_4 != 0;
	}
	return __LIB_10__::func_671(__LIB_10__::func_670(iParam0));
}

void func_912(int iParam0)
{
	Global_1392581.f_44 = *iParam0;
	__LIB_0__::func_7(&(Global_1392581.f_3), 16);
}

float func_913(int iParam0, float fParam1, float fParam2)
{
	return ((IntToFloat(iParam0) * fParam2) + fParam1);
}

void func_914(var uParam0, vector3 vParam1)
{
	uParam0->f_57 = { vParam1 };
}

void func_915(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				__LIB_3__::func_561(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				__LIB_3__::func_557(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			__LIB_1__::func_266(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			__LIB_3__::func_558(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, false, 15);
		}
	}
}

void func_916(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	iVar0 = __LIB_1__::func_710(iParam0);
	iVar1 = __LIB_0__::func_161(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (__LIB_0__::func_779(iParam0) && __LIB_6__::func_107(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && __LIB_0__::func_156(32768)) || Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && iParam0 != Global_1946804.f_1497.f_1[iVar1 /*3*/])
	{
		if (__LIB_0__::func_779(Global_1946804.f_1497.f_1[iVar1 /*3*/]) && __LIB_6__::func_107(Global_1946804.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (__LIB_0__::func_357(iParam0))
		{
			case 81053684:
				if (__LIB_1__::func_549(-525676072, &uVar3))
				{
					iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
						Jump @435; //curOff = 295
						if (__LIB_0__::func_156(32768))
						{
							__LIB_0__::func_968(__LIB_0__::func_158(iVar1, 1));
						}
						if (__LIB_0__::func_156(32768) || (__LIB_1__::func_549(-2061583405, &iVar4) && !__LIB_6__::func_107(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (__LIB_1__::func_549(81053684, &iVar4))
						{
							iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
							}
							Global_1946804.f_2377[iVar1 /*2*/] = iParam0;
							__LIB_3__::func_16(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

void func_917(var uParam0, int iParam1, bool bParam2)
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
	__LIB_13__::func_532(uParam0);
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

bool func_918()
{
	int iVar0;
	iVar0 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	if ((((((((((((((((iVar0 == joaat("RAIN") || iVar0 == joaat("BLIZZARD")) || iVar0 == joaat("WHITEOUT")) || iVar0 == joaat("THUNDERSTORM")) || iVar0 == joaat("SNOW")) || iVar0 == joaat("SNOWLIGHT")) || iVar0 == joaat("SHOWER")) || iVar0 == joaat("MISTY")) || iVar0 == joaat("DRIZZLE")) || iVar0 == joaat("THUNDER")) || iVar0 == joaat("OVERCASTDARK")) || iVar0 == joaat("SNOWCLEARING")) || iVar0 == joaat("HURRICANE")) || iVar0 == joaat("HAIL")) || iVar0 == joaat("SLEET")) || iVar0 == joaat("FOG")) || iVar0 == joaat("GROUNDBLIZZARD"))
	{
		return true;
	}
	return false;
}

void func_919(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 >= 96)
	{
		return;
	}
	StringCopy(&(uParam0->f_5[iVar0 /*2*/]), sParam2, 16);
	uParam0->f_4++;
}

void func_920()
{
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::_0x243CEDE8F916B994();
}

void func_921(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
}

bool func_922(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

void func_923()
{
	MISC::_0x2916B30DC6C41179(joaat("RAIN"));
	MISC::_0x2916B30DC6C41179(joaat("BLIZZARD"));
	MISC::_0x2916B30DC6C41179(joaat("WHITEOUT"));
	MISC::_0x2916B30DC6C41179(joaat("THUNDERSTORM"));
	MISC::_0x2916B30DC6C41179(joaat("SNOW"));
	MISC::_0x2916B30DC6C41179(joaat("SNOWLIGHT"));
	MISC::_0x2916B30DC6C41179(joaat("SHOWER"));
	MISC::_0x2916B30DC6C41179(joaat("MISTY"));
	MISC::_0x2916B30DC6C41179(joaat("DRIZZLE"));
	MISC::_0x2916B30DC6C41179(joaat("THUNDER"));
	MISC::_0x2916B30DC6C41179(joaat("OVERCASTDARK"));
	MISC::_0x2916B30DC6C41179(joaat("SNOWCLEARING"));
	MISC::_0x2916B30DC6C41179(joaat("HURRICANE"));
	MISC::_0x2916B30DC6C41179(joaat("HAIL"));
	MISC::_0x2916B30DC6C41179(joaat("SLEET"));
	MISC::_0x2916B30DC6C41179(joaat("FOG"));
	MISC::_0x2916B30DC6C41179(joaat("GROUNDBLIZZARD"));
}

char* func_924(var uParam0, int iParam1)
{
	if (iParam1 >= 96 || iParam1 > uParam0->f_4)
	{
		return "";
	}
	return __LIB_0__::func_67(uParam0->f_5[iParam1 /*2*/]);
}

bool func_925(int* iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(*iParam0))
	{
		PED::REVIVE_INJURED_PED(*iParam0);
	}
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		__LIB_2__::func_788(iParam0, 1, 0, 1);
		return false;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, vParam1, fParam4, true, false, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::_0x18FF3110CF47115D(*iParam0, 15, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 172, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 324, true);
	AITRANSPORT::_0xBA8818212633500A(*iParam0, 0, 1);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(*iParam0, true);
	if (!bParam5)
	{
		if (!__LIB_0__::func_163(*iParam0, 993674639))
		{
			__LIB_1__::func_473(*iParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, 1, 0, -1082130432 /* Float: -1f */);
		}
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 48, true);
		return true;
	}
	if (__LIB_5__::func_541(*iParam0, vParam1, 10f, 1))
	{
	}
	else
	{
		__LIB_1__::func_473(*iParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, 1, 0, -1082130432 /* Float: -1f */);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 48, true);
	}
	return true;
}

void func_926(int iParam0, vector3 vParam1, float fParam4)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
	}
	ENTITY::SET_ENTITY_COORDS(*iParam0, vParam1, true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(*iParam0, fParam4);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 66, true);
}

void func_927(var uParam0)
{
	uParam0->f_3 = 5;
	__LIB_1__::func_539();
}

void func_928()
{
	__LIB_9__::func_827(18, 0, 0, 0);
	POPULATION::_0xF45E46DEECF7DF6E(14592, 0, 0, -1, -1);
	PED::_0xAB0D553FE20A6E25(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

void func_929(var uParam0, char* sParam1)
{
	uParam0->f_652 = sParam1;
	TASK::REQUEST_WAYPOINT_RECORDING(uParam0->f_652);
}

void func_930(var uParam0, float fParam1)
{
	uParam0->f_611 = fParam1;
}

void func_931(var uParam0, int iParam1)
{
	uParam0->f_395 = iParam1;
}

void func_932(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
		{
			if (!__LIB_0__::func_163(uParam0->f_2[iVar0], 993674639) || bParam1)
			{
				TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, 0, 1, 1);
			}
			uParam0->f_23[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_933(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			EVENT::_0xBB1E41DD3D3C6250(uParam0->f_2[iVar0], "SpGatheringAnimal", 0);
		}
		iVar0++;
	}
}

void func_934(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			EVENT::_0xBB1E41DD3D3C6250(uParam0->f_2[iVar0], "SpHerdingAnimal", 0);
		}
		iVar0++;
	}
}

Vector3 func_935(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	vVar0 = { __LIB_11__::func_467(uParam0, 1) };
	iVar4 = -1;
	fVar5 = 9999f;
	if (!__LIB_0__::func_86(vVar0))
	{
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar3]))
			{
				if (__LIB_0__::func_94(uParam0->f_2[iVar3], vVar0, 1) < fVar5 && FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar3]))
				{
					fVar5 = __LIB_0__::func_94(uParam0->f_2[iVar3], vVar0, 1);
					iVar4 = iVar3;
				}
			}
			iVar3++;
		}
	}
	if (iVar4 != -1)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar4], true, false) };
	}
	else
	{
		if (uParam0->f_189 != 7)
		{
		}
		vVar0 = { __LIB_11__::func_467(uParam0, 0) };
	}
	return vVar0;
}

int func_936(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_937(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar0]))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_358[iVar0]));
		}
		iVar0++;
	}
}

int func_938(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((uParam0->f_190[iVar0 /*9*/] != -1 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_190[iVar0 /*9*/].f_2)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_190[iVar0 /*9*/].f_2))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[iVar0 /*9*/].f_2) == *uParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_939(var uParam0, int iParam1)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	vector3 vVar9;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_445))
	{
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
	{
	}
	if ((((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iParam1]) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_445)) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444)) && ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iParam1], uParam0->f_445, true, 0)) && !__LIB_0__::func_163(uParam0->f_2[iParam1], 713668775)) && !ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iParam1], uParam0->f_444, false, 0)) && !__LIB_11__::func_476(uParam0, iParam1))
	{
		if (!__LIB_4__::func_156(uParam0, 8192))
		{
			if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iParam1]))
			{
				FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iParam1]);
			}
		}
		if (uParam0->f_189 != 7)
		{
			uParam0->f_189 = 7;
		}
		uParam0->f_23[iParam1] = 12;
		if (__LIB_4__::func_156(uParam0, 4))
		{
			fVar0 = 2.5f;
		}
		else if (__LIB_4__::func_156(uParam0, 256))
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 1.75f;
		}
		if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iParam1]))
		{
			MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iParam1], -700928964);
		}
		if (!__LIB_4__::func_156(uParam0, 8192))
		{
			POPULATION::_0xF74E134F40192884(uParam0->f_2[iParam1], 2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iParam1], VOLUME::_GET_VOLUME_COORDS(uParam0->f_444), fVar0, 60000, 0.25f, 13, 40000f);
			vVar1 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
		}
	}
	else if ((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iParam1]) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444)) && ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iParam1], uParam0->f_444, false, 0)) && !__LIB_0__::func_163(uParam0->f_2[iParam1], 1139527981)) && !__LIB_11__::func_476(uParam0, iParam1))
	{
		uParam0->f_23[iParam1] = 13;
		if (!__LIB_4__::func_156(uParam0, 8192))
		{
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iParam1], -1, uParam0->f_444, 1, 1);
		}
	}
	else if ((((((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iParam1]) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_445)) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444)) && !ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iParam1], uParam0->f_445, true, 0)) && !__LIB_0__::func_163(uParam0->f_2[iParam1], 713668775)) && !__LIB_11__::func_476(uParam0, iParam1)) && uParam0->f_189 == 7) && uParam0->f_23[iParam1] != 12) && uParam0->f_23[iParam1] != 13)
	{
		if (!__LIB_4__::func_156(uParam0, 8192))
		{
			if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iParam1]))
			{
				FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iParam1]);
			}
		}
		if (uParam0->f_189 != 7)
		{
			uParam0->f_189 = 7;
		}
		uParam0->f_23[iParam1] = 12;
		if (__LIB_4__::func_156(uParam0, 4))
		{
			fVar4 = 2.5f;
		}
		else if (__LIB_4__::func_156(uParam0, 256))
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = 1.75f;
		}
		if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iParam1]))
		{
			MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iParam1], -700928964);
		}
		if (!__LIB_4__::func_156(uParam0, 8192))
		{
			POPULATION::_0xF74E134F40192884(uParam0->f_2[iParam1], 2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iParam1], VOLUME::_GET_VOLUME_COORDS(uParam0->f_444), fVar4, 60000, 0.25f, 13, 40000f);
			vVar5 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
		}
	}
	else if ((((((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iParam1]) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_445)) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444)) && !ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iParam1], uParam0->f_444, true, 0)) && !__LIB_0__::func_163(uParam0->f_2[iParam1], 713668775)) && !__LIB_11__::func_476(uParam0, iParam1)) && uParam0->f_189 == 7) && uParam0->f_23[iParam1] == 12) || uParam0->f_23[iParam1] == 11)
	{
		if (!__LIB_4__::func_156(uParam0, 8192))
		{
			if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iParam1]))
			{
				FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iParam1]);
			}
		}
		if (uParam0->f_189 != 7)
		{
			uParam0->f_189 = 7;
		}
		uParam0->f_23[iParam1] = 12;
		if (__LIB_4__::func_156(uParam0, 4))
		{
			fVar8 = 2.5f;
		}
		else if (__LIB_4__::func_156(uParam0, 256))
		{
			fVar8 = 1f;
		}
		else
		{
			fVar8 = 1.75f;
		}
		if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iParam1]))
		{
			MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iParam1], -700928964);
		}
		if (!__LIB_4__::func_156(uParam0, 8192))
		{
			POPULATION::_0xF74E134F40192884(uParam0->f_2[iParam1], 2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iParam1], VOLUME::_GET_VOLUME_COORDS(uParam0->f_444), fVar8, 60000, 0.25f, 13, 40000f);
			vVar9 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
		}
	}
}

void func_940(var uParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;
	vector3 vVar6;
	if (__LIB_0__::func_86(uParam0->f_613))
	{
		return;
	}
	if ((VOLUME::_DOES_VOLUME_EXIST(uParam0->f_445) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444)) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_445, uParam0->f_613))
	{
		if (uParam0->f_189 != 7)
		{
			uParam0->f_189 = 7;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (((!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]) && !__LIB_0__::func_163(uParam0->f_2[iVar0], 713668775)) && !ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iVar0], uParam0->f_444, false, 0)) && !__LIB_11__::func_476(uParam0, iVar0))
			{
				if (!__LIB_4__::func_156(uParam0, 8192))
				{
					if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar0]))
					{
						FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar0]);
					}
				}
				uParam0->f_23[iVar0] = 12;
				if (__LIB_4__::func_156(uParam0, 4))
				{
					fVar1 = 2.5f;
				}
				else if (__LIB_4__::func_156(uParam0, 256))
				{
					fVar1 = 1f;
				}
				else
				{
					fVar1 = 1.75f;
				}
				if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar0]))
				{
					MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar0], -700928964);
				}
				if (!__LIB_4__::func_156(uParam0, 8192))
				{
					POPULATION::_0xF74E134F40192884(uParam0->f_2[iVar0], 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar0], VOLUME::_GET_VOLUME_COORDS(uParam0->f_444), fVar1, 60000, 0.25f, 13, 40000f);
					vVar2 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
				}
			}
			else if ((((!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444)) && ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iVar0], uParam0->f_444, false, 0)) && !__LIB_0__::func_163(uParam0->f_2[iVar0], 1139527981)) && !__LIB_11__::func_476(uParam0, iVar0))
			{
				uParam0->f_23[iVar0] = 13;
				if (!__LIB_4__::func_156(uParam0, 8192))
				{
					TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, uParam0->f_444, 1, 1);
				}
			}
			else if ((((((((!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_445)) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444)) && !ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iVar0], uParam0->f_445, true, 0)) && !__LIB_0__::func_163(uParam0->f_2[iVar0], 713668775)) && !__LIB_11__::func_476(uParam0, iVar0)) && uParam0->f_189 == 7) && uParam0->f_23[iVar0] != 12) && uParam0->f_23[iVar0] != 13)
			{
				if (!__LIB_4__::func_156(uParam0, 8192))
				{
					if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar0]))
					{
						FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar0]);
					}
				}
				if (uParam0->f_189 != 7)
				{
					uParam0->f_189 = 7;
				}
				uParam0->f_23[iVar0] = 12;
				if (__LIB_4__::func_156(uParam0, 4))
				{
					fVar5 = 2.5f;
				}
				else if (__LIB_4__::func_156(uParam0, 256))
				{
					fVar5 = 1f;
				}
				else
				{
					fVar5 = 1.75f;
				}
				if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar0]))
				{
					MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar0], -700928964);
				}
				if (!__LIB_4__::func_156(uParam0, 8192))
				{
					POPULATION::_0xF74E134F40192884(uParam0->f_2[iVar0], 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar0], VOLUME::_GET_VOLUME_COORDS(uParam0->f_444), fVar5, 60000, 0.25f, 13, 40000f);
					vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
				}
			}
			iVar0++;
		}
	}
}

Vector3 func_941(var uParam0)
{
	if (__LIB_4__::func_156(uParam0, 2))
	{
		if (TASK::_0x22CD2C33ED4467A1(uParam0->f_788))
		{
			return TASK::_0x91CB5E431F579BA1(uParam0->f_788);
		}
	}
	else
	{
		return uParam0->f_644;
	}
	return 0f, 0f, 0f;
}

int func_942(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	iVar0 = 0;
	iVar1 = 0;
	vVar2 = { __LIB_11__::func_467(uParam0, 1) };
	fVar5 = 0f;
	iVar1 = 0;
	while (iVar1 < 20)
	{
		iVar6 = __LIB_11__::func_506(uParam0, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar6))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar6))
				{
					if ((iVar6 != __LIB_11__::func_506(uParam0, iVar0) && __LIB_0__::func_94(iVar6, vVar2, 1) >= fVar5) && __LIB_11__::func_476(uParam0, iVar1))
					{
						iVar0 = iVar1;
						fVar5 = __LIB_0__::func_94(iVar6, vVar2, 1);
					}
					else if (__LIB_0__::func_94(iVar6, vVar2, 1) < fVar5)
					{
					}
				}
			}
		}
		iVar1++;
	}
	return uParam0->f_2[iVar0];
}

bool func_943(var uParam0)
{
	return __LIB_11__::func_494(uParam0, 1);
}

bool func_944(var uParam0)
{
	return __LIB_11__::func_494(uParam0, 8);
}

bool func_945(var uParam0, var uParam1)
{
	if (*uParam1 == -1)
	{
		return false;
	}
	if (*uParam1 == 1 && ((uParam0->f_210.f_1 == 0 || uParam0->f_210.f_1 == 4) || uParam0->f_210.f_1 == 3))
	{
		return false;
	}
	if (__LIB_4__::func_156(uParam0, 8))
	{
		if (((VOLUME::_DOES_VOLUME_EXIST(uParam0->f_447) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_2)) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2)) && ENTITY::IS_ENTITY_IN_VOLUME(uParam1->f_2, uParam0->f_447, true, 0))
		{
			return false;
		}
	}
	return true;
}

struct<9> func_946(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	fVar1 = 100000f;
	fVar2 = 100000f;
	Var3 = -1;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return Var3;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_190[iVar0 /*9*/] != -1)
		{
			fVar2 = __LIB_0__::func_94(iParam1, __LIB_11__::func_481(&(uParam0->f_190[iVar0 /*9*/])), 1);
			if (fVar2 < fVar1)
			{
				fVar1 = fVar2;
				Var3 = { uParam0->f_190[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	return Var3;
}

float func_947(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_2))
	{
		return 0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iParam2]))
	{
		return 0f;
	}
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2))) < 0.101f && !bParam3)
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iParam2], false, false) - ENTITY::GET_ENTITY_COORDS(uParam1->f_2, false, false) };
	vVar0.f_2 = 0f;
	vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam1->f_2) };
	vVar3.f_2 = 0f;
	vVar3 = { __LIB_0__::func_173(vVar3) };
	fVar6 = __LIB_1__::func_95(vVar3, vVar0);
	if (fVar6 < 0f)
	{
		return 0f;
	}
	vVar7 = { vVar3 * Vector(fVar6, fVar6, fVar6) + ENTITY::GET_ENTITY_COORDS(uParam1->f_2, false, false) };
	vVar7.f_2 = 0f;
	vVar10 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iParam2], false, false) };
	vVar10.f_2 = 0f;
	fVar13 = BUILTIN::VMAG(vVar7 - vVar10);
	if (fVar13 > uParam0->f_690)
	{
		return 0f;
	}
	else
	{
		return 1f;
	}
	return 0f;
}

bool func_948(var uParam0)
{
	return !__LIB_11__::func_494(uParam0, 4);
}

bool func_949(var uParam0, var uParam1)
{
	if (__LIB_11__::func_494(uParam0, 4))
	{
		if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) > (uParam0->f_637 + 5f))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_950(var uParam0)
{
	if (__LIB_4__::func_156(uParam0, 2))
	{
		if (TASK::_0x22CD2C33ED4467A1(uParam0->f_789))
		{
			return TASK::_0x91CB5E431F579BA1(uParam0->f_789);
		}
	}
	else
	{
		return uParam0->f_648;
	}
	return 0f, 0f, 0f;
}

Vector3 func_951(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_4__::func_156(uParam0, 2))
	{
		if (uParam0->f_795 != -1 && TASK::_0x22CD2C33ED4467A1(uParam0->f_790[uParam0->f_795]))
		{
			return TASK::_0x91CB5E431F579BA1(uParam0->f_790[uParam0->f_795]);
		}
	}
	else
	{
		iVar0 = 0;
		vVar1 = { 0f, 0f, 0f };
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(uParam0->f_652, &iVar0);
		if (uParam0->f_653 >= (iVar0 - 1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
			{
				vVar1 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
			}
		}
		else
		{
			TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, uParam0->f_653 + 1, &vVar1);
		}
		return vVar1;
	}
	return 0f, 0f, 0f;
}

int func_952(var uParam0)
{
	__LIB_0__::func_11(uParam0);
	return 5;
}

void func_953(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]) && !MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar0]))
		{
			if (__LIB_11__::func_476(uParam0, iVar0))
			{
				uParam0->f_358[iVar0] = MAP::_BLIP_ADD_FOR_ENTITY(-214162151, uParam0->f_2[iVar0]);
			}
			else
			{
				uParam0->f_358[iVar0] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar0]);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]) && MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar0]))
		{
			if (__LIB_11__::func_476(uParam0, iVar0))
			{
				if (!MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar0], -214162151))
				{
				}
			}
			else if (!MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar0], -700928964))
			{
			}
		}
		iVar0++;
	}
}

void func_954()
{
	if (__LIB_13__::func_918())
	{
		MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), false, true, true, 60f, false);
	}
	__LIB_13__::func_923();
}

void func_955(var uParam0, int iParam1)
{
	if (__LIB_4__::func_156(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_303 = (uParam0->f_303 || iParam1);
}

int func_956(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	iVar0 = 0;
	iVar1 = 0;
	vVar2 = { __LIB_11__::func_467(uParam0, 0) };
	fVar5 = 0f;
	iVar1 = 0;
	while (iVar1 < 20)
	{
		iVar6 = __LIB_11__::func_506(uParam0, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar6))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar6))
				{
					if ((iVar6 != __LIB_11__::func_506(uParam0, iVar0) && __LIB_0__::func_94(iVar6, vVar2, 1) >= fVar5) && (iParam1 == 1 || (iParam1 == 0 && !__LIB_11__::func_476(uParam0, iVar1))))
					{
						iVar0 = iVar1;
						fVar5 = __LIB_0__::func_94(iVar6, vVar2, 1);
					}
					else if (__LIB_0__::func_94(iVar6, vVar2, 1) < fVar5)
					{
					}
					else if (iParam1 == 0 && __LIB_11__::func_476(uParam0, iVar1))
					{
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_957(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	fVar1 = 100000f;
	fVar2 = 100000f;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar4 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4), 0))
				{
					fVar2 = __LIB_0__::func_232(iVar4, iParam1, 1);
					if (fVar2 < fVar1)
					{
						fVar1 = fVar2;
						iVar3 = iVar4;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_958(var uParam0, int iParam1)
{
	if (!__LIB_4__::func_156(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_303 = (uParam0->f_303 - (uParam0->f_303 && iParam1));
}

void func_959(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	if (TASK::_0x22CD2C33ED4467A1(uParam0->f_788))
	{
		if (!__LIB_4__::func_156(uParam0, 512))
		{
			vVar0 = { uParam0->f_613 - vParam1 };
			vVar0 = { __LIB_0__::func_173(vVar0) };
			iVar3 = 0;
			fVar4 = -1f;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (TASK::_0x22CD2C33ED4467A1(uParam0->f_790[iVar3]) && uParam0->f_790[iVar3] != uParam0->f_789)
				{
					vVar5 = { TASK::_0x91CB5E431F579BA1(uParam0->f_790[iVar3]) - TASK::_0x91CB5E431F579BA1(uParam0->f_788) };
					vVar5 = { __LIB_0__::func_173(vVar5) };
					fVar8 = __LIB_1__::func_95(vVar5, vVar0);
					if (fVar8 > fVar4)
					{
						fVar4 = fVar8;
						uParam0->f_795 = iVar3;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_960(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	if (__LIB_4__::func_156(uParam0, 128))
	{
		return;
	}
	vVar0 = { uParam0->f_613 - uParam0->f_644 };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_613, uParam0->f_644, true);
	if (uParam0->f_209 == -1)
	{
		return;
	}
	fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, true, false), uParam0->f_644);
	vVar0 = { __LIB_0__::func_173(vVar0) };
	vVar5 = { vVar0 * Vector(fVar4, fVar4, fVar4) + uParam0->f_644 };
	vVar5 = { vVar5 - ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false) };
	fVar8 = BUILTIN::VDIST(vVar5, 0f, 0f, 0f);
	if (fVar8 < 15f)
	{
		vVar5 = { __LIB_0__::func_173(vVar5) };
		vVar9 = { vVar5 * Vector(15f, 15f, 15f) + ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false) };
		vVar5 = { vVar9 - uParam0->f_613 };
		vVar5 = { __LIB_0__::func_173(vVar5) };
		vVar9 = { uParam0->f_613 + vVar5 * Vector(fVar3, fVar3, fVar3) };
	}
	else
	{
		vVar9 = { uParam0->f_644 };
	}
	uParam0->f_625 = { __LIB_1__::func_367(uParam0->f_631, vVar9, uParam0->f_655) };
	if (__LIB_11__::func_480(uParam0->f_625))
	{
		fVar12 = 1f;
		fVar13 = uParam0->f_655;
		if (uParam0->f_655 < 1f)
		{
			uParam0->f_655 = ((fVar12 + fVar13) / 2f);
		}
		else if (uParam0->f_655 > 1f)
		{
			uParam0->f_655 = 1f;
		}
	}
}

void func_961(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	if (__LIB_4__::func_156(uParam0, 128))
	{
		return;
	}
	if (TASK::_0x22CD2C33ED4467A1(uParam0->f_788))
	{
		vVar0 = { uParam0->f_613 - TASK::_0x91CB5E431F579BA1(uParam0->f_788) };
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_613, TASK::_0x91CB5E431F579BA1(uParam0->f_788), true);
		if (uParam0->f_209 == -1)
		{
			return;
		}
		fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, true, false), TASK::_0x91CB5E431F579BA1(uParam0->f_788));
		vVar0 = { __LIB_0__::func_173(vVar0) };
		vVar5 = { vVar0 * Vector(fVar4, fVar4, fVar4) + TASK::_0x91CB5E431F579BA1(uParam0->f_788) };
		vVar5 = { vVar5 - ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false) };
		fVar8 = BUILTIN::VDIST(vVar5, 0f, 0f, 0f);
		if (fVar8 < 15f)
		{
			vVar5 = { __LIB_0__::func_173(vVar5) };
			vVar9 = { vVar5 * Vector(15f, 15f, 15f) + ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false) };
			vVar5 = { vVar9 - uParam0->f_613 };
			vVar5 = { __LIB_0__::func_173(vVar5) };
			vVar9 = { uParam0->f_613 + vVar5 * Vector(fVar3, fVar3, fVar3) };
		}
		else
		{
			vVar9 = { uParam0->f_780 };
		}
		uParam0->f_625 = { __LIB_1__::func_367(uParam0->f_631, vVar9, uParam0->f_655) };
		if (__LIB_11__::func_480(uParam0->f_625))
		{
			fVar12 = 1f;
			fVar13 = uParam0->f_655;
			if (uParam0->f_655 < 1f)
			{
				uParam0->f_655 = ((fVar12 + fVar13) / 2f);
			}
			else if (uParam0->f_655 > 1f)
			{
				uParam0->f_655 = 1f;
			}
		}
	}
}

void func_962(var uParam0, int iParam1)
{
	if (__LIB_11__::func_494(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_210.f_5 = (uParam0->f_210.f_5 || iParam1);
}

void func_963(var uParam0, int iParam1)
{
	if (!__LIB_11__::func_494(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_210.f_5 = (uParam0->f_210.f_5 - (uParam0->f_210.f_5 && iParam1));
}

int func_964(var uParam0, int iParam1, int iParam2)
{
	if (((((((((((((!((((((__LIB_0__::func_163(uParam0->f_2[iParam1], 1139527981) || __LIB_0__::func_163(uParam0->f_2[iParam1], 518218985)) || __LIB_0__::func_163(uParam0->f_2[iParam1], 242628503)) || __LIB_0__::func_163(uParam0->f_2[iParam1], 713668775)) || __LIB_0__::func_163(uParam0->f_2[iParam1], -1775383291)) || __LIB_0__::func_163(uParam0->f_2[iParam1], 1056466932)) || __LIB_0__::func_163(uParam0->f_2[iParam1], 993674639)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iParam1])) && !PED::IS_PED_FLEEING(uParam0->f_2[iParam1])) && !PED::_0x40C9155AF8BC13F3(uParam0->f_2[iParam1])) && !PED::_0x77525BBF433F2CD6(uParam0->f_2[iParam1])) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_ANIMAL_DETECTED_THREAT"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_ANIMAL_RESPONDED_TO_THREAT"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_ANIMAL_PROVOKED"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_SHOT_FIRED_WHIZZED_BY"))) && !PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iParam1], joaat("EVENT_SHOT_FIRED_WHIZZED_BY_ENTITY"))) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iParam1], 1)) && !(FLOCK::_0x8D913E493BAFE0A3(*uParam0) && FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iParam1]))) && !__LIB_11__::func_493(uParam0, iParam1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
		{
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iParam1], -1, iParam2, 1, 1);
		}
		else
		{
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iParam1], -1, 0, 1, 1);
		}
		return 1;
	}
	return 0;
}

bool func_965(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	if (__LIB_0__::func_86(*uParam2))
	{
	}
	if (!bParam4)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (((uParam0->f_190[iVar0 /*9*/] == 0 || uParam0->f_190[iVar0 /*9*/] == 1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_190[iVar0 /*9*/].f_2)) && !(__LIB_11__::func_494(uParam0, 128) && __LIB_11__::func_494(uParam0, 8)))
			{
				if (__LIB_11__::func_508(uParam0, &(uParam0->f_2[iParam1]), uParam0->f_190[iVar0 /*9*/].f_2, iParam1, uParam2))
				{
					*uParam3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_190[iVar0 /*9*/].f_2, false, false) };
					return true;
				}
			}
			iVar0++;
		}
	}
	else if (__LIB_11__::func_508(uParam0, &(uParam0->f_2[iParam1]), PLAYER::PLAYER_PED_ID(), iParam1, uParam2))
	{
		*uParam3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		return true;
	}
	return false;
}

void func_966(var uParam0, int iParam1)
{
	if (__LIB_11__::func_471(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_487 = (uParam0->f_487 || iParam1);
}

void func_967(var uParam0, int iParam1)
{
	if (!__LIB_11__::func_471(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_487 = (uParam0->f_487 - (uParam0->f_487 && iParam1));
}

int func_968(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	fVar1 = 100000f;
	fVar2 = 100000f;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar4 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4), 0) && (uParam0->f_23[iVar0] == 3 || iParam2 == 1))
				{
					fVar2 = __LIB_1__::func_992(iVar4, __LIB_11__::func_481(uParam1), 1);
					if (fVar2 < fVar1)
					{
						fVar1 = fVar2;
						iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_969(var uParam0)
{
	int iVar0;
	if (uParam0->f_189 == 7)
	{
		return true;
	}
	if (__LIB_11__::func_499(uParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_23[iVar0] == 12)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_970(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	if (__LIB_0__::func_86(uParam0->f_613))
	{
		return 0f, 0f, 0f;
	}
	if (*uParam1 == -1)
	{
		return 0f, 0f, 0f;
	}
	vVar3 = { __LIB_11__::func_481(uParam1) };
	if (!__LIB_0__::func_86(uParam0->f_613))
	{
		vVar0 = { uParam0->f_613 - vVar3 };
	}
	fVar6 = BUILTIN::VMAG(vVar0);
	vVar0 = { __LIB_0__::func_173(vVar0) };
	vVar7 = { __LIB_11__::func_509(uParam1) };
	fVar10 = __LIB_1__::func_95(vVar7, vVar0);
	fVar11 = __LIB_1__::func_95(uParam0->f_619, vVar0);
	fVar12 = BUILTIN::VMAG(uParam0->f_613 - vVar3);
	fVar13 = (IntToFloat(uParam0->f_641) * (fVar11 - fVar10));
	fVar14 = (fVar12 + fVar13);
	fVar15 = (__LIB_11__::func_510(uParam0, uParam1) - fVar14);
	fVar16 = ((fVar15 * IntToFloat(uParam0->f_642)) + __LIB_11__::func_510(uParam0, uParam1));
	if (fVar16 < fVar6)
	{
		fVar16 = fVar6;
	}
	if (fVar10 > 1.5f || ((*uParam1 == 0 && __LIB_11__::func_494(uParam0, 8)) && fVar6 < (__LIB_11__::func_510(uParam0, uParam1) + 5f)))
	{
		fVar16 = (fVar16 + uParam0->f_643);
	}
	fVar16 = (fVar16 - fVar6);
	vVar0 = { vVar0 * Vector(fVar16, fVar16, fVar16) };
	return vVar0;
}

Vector3 func_971(var uParam0, var uParam1, var uParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vVar0 = { *uParam1 - *uParam0 };
	vVar3 = { __LIB_0__::func_173(vVar0) };
	vVar6 = { __LIB_3__::func_744(0f, 0f, 1f, vVar3) };
	vVar6 = { __LIB_0__::func_173(vVar6) };
	vVar9 = { *uParam2 - *uParam0 };
	bVar12 = true;
	if (__LIB_1__::func_95(vVar3, vVar9) < 0f)
	{
		bVar12 = false;
	}
	else if (BUILTIN::VMAG2(vVar9) > BUILTIN::VMAG2(vVar0))
	{
		bVar12 = false;
	}
	else
	{
		fVar13 = BUILTIN::VMAG(vVar9);
		vVar9 = { __LIB_0__::func_173(vVar9) };
		fVar14 = MISC::ACOS(__LIB_1__::func_95(vVar3, vVar9));
		fVar15 = (BUILTIN::SIN(fVar14) * fVar13);
		if (fVar15 > fParam3)
		{
			bVar12 = false;
		}
	}
	if (bVar12)
	{
		vVar16 = { *uParam2 + vVar6 * Vector(fParam3, fParam3, fParam3) };
		if (BUILTIN::VMAG(vVar16 - *uParam0) < 3f)
		{
			return *uParam1;
		}
		return vVar16;
	}
	return *uParam1;
}

void func_972(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	bVar0 = __LIB_11__::func_514(uParam0, iParam1);
	if (__LIB_11__::func_515(uParam0) >= 2)
	{
		return;
	}
	if (!bVar0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_381[iVar1]))
			{
				uParam0->f_381[iVar1] = *iParam1;
				return;
			}
			iVar1++;
		}
	}
}

bool func_973(var uParam0)
{
	int iVar0;
	char* sVar1;
	if (__LIB_11__::func_496(uParam0))
	{
		return true;
	}
	else if (!__LIB_11__::func_482(uParam0, 1))
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if ((__LIB_0__::func_272(uParam0->f_2[iVar0], 0) && __LIB_11__::func_474(uParam0, iVar0)) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
			{
				uParam0->f_23[iVar0] = 14;
				TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_2[iVar0], VOLUME::_GET_VOLUME_COORDS(uParam0->f_444), 3, 0, 400f, -1, 0);
				TASK::_0x3923EC958249657D(uParam0->f_2[iVar0], PLAYER::PLAYER_PED_ID(), -1082130432 /* Float: -1f */);
				if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar0]))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_358[iVar0]));
				}
				__LIB_3__::func_141(uParam0->f_2[iVar0], 1088421888 /* Float: 7f */, 1, 0);
				sVar1 = __LIB_11__::func_460(uParam0);
				PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_2[iVar0], MISC::GET_HASH_KEY(sVar1));
				__LIB_2__::func_788(&(uParam0->f_2[iVar0]), 1, 1, 1);
			}
		}
		iVar0++;
	}
	return false;
}

void func_974(var uParam0, float fParam1)
{
	__LIB_11__::func_520(uParam0, fParam1);
}

int func_975(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (__LIB_11__::func_474(uParam0, iVar0) && __LIB_0__::func_272(uParam0->f_2[iVar0], 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_976(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	fVar1 = 100000f;
	fVar2 = 100000f;
	iVar3 = -1;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar4 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				if (__LIB_0__::func_272(iVar4, 0) && __LIB_11__::func_476(uParam0, iVar0))
				{
					fVar2 = __LIB_0__::func_232(iVar4, iParam1, 1);
					if (fVar2 < fVar1)
					{
						fVar1 = fVar2;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_977(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	fVar1 = 1f;
	fVar2 = 1f;
	if (uParam0->f_209 == -1)
	{
		iVar4 = Global_35;
	}
	else
	{
		iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2);
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar5 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar5))
			{
				if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5), 0) && uParam0->f_23[iVar0] == 3)
				{
					fVar2 = __LIB_1__::func_992(iVar5, ENTITY::GET_ENTITY_COORDS(iVar4, true, false), 1);
					if (fVar2 > fVar1)
					{
						fVar1 = fVar2;
						iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_978(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	char* sVar3;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_6)))
	{
		return true;
	}
	vVar0 = { __LIB_11__::func_492(uParam0, iParam2) };
	sVar3 = __LIB_0__::func_628(&vVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		return true;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0))
	{
		return false;
	}
	if (__LIB_1__::func_104(&(uParam0->f_506), vVar0, 0, -1, 0, 0))
	{
		return true;
	}
	return false;
}

int func_979(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	fVar1 = 100000f;
	fVar2 = 100000f;
	iVar3 = 0;
	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar4 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				if (__LIB_0__::func_272(iVar4, 0) && __LIB_11__::func_474(uParam0, iVar0))
				{
					fVar2 = __LIB_0__::func_232(iVar4, *uParam1, 1);
					if (fVar2 < fVar1)
					{
						fVar1 = fVar2;
						iVar3 = iVar4;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_980(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	sVar0 = __LIB_13__::func_924(uParam1, iParam2);
	if (__LIB_11__::func_764(uParam1, iParam2))
	{
		if (__LIB_6__::func_903(sVar0))
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (!__LIB_0__::func_272(*iParam3, 1))
	{
		return 4;
	}
	if (__LIB_0__::func_665(Global_35, *iParam3, 1, 1) > fParam5)
	{
		if (bParam6)
		{
			__LIB_13__::func_638(uParam1, iParam2);
		}
		return 7;
	}
	if (__LIB_6__::func_904() || (__LIB_5__::func_463() && iParam7 == 0))
	{
		if (bParam4)
		{
			__LIB_5__::func_20(0, 0);
		}
		return 8;
	}
	if (__LIB_12__::func_876(uParam0, sVar0, 0))
	{
		__LIB_13__::func_638(uParam1, iParam2);
		return 1;
	}
	return 6;
}

void func_981(var uParam0)
{
	int iVar0;
	if (__LIB_11__::func_494(uParam0, 8))
	{
		return;
	}
	if (!__LIB_0__::func_474(559) && !__LIB_1__::func_262(559))
	{
		__LIB_1__::func_240(559, 0);
	}
	if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
	{
		iVar0 = 561;
	}
	else
	{
		iVar0 = 560;
	}
	if ((!__LIB_0__::func_474(iVar0) && !__LIB_1__::func_262(iVar0)) && __LIB_0__::func_474(559))
	{
		__LIB_1__::func_240(iVar0, 0);
	}
	if (((!__LIB_0__::func_474(562) && !__LIB_1__::func_262(562)) && __LIB_0__::func_474(559)) && __LIB_0__::func_474(iVar0))
	{
		__LIB_1__::func_240(562, 0);
	}
	if ((((!__LIB_0__::func_474(563) && !__LIB_1__::func_262(563)) && __LIB_0__::func_474(559)) && __LIB_0__::func_474(iVar0)) && __LIB_0__::func_474(562))
	{
		__LIB_1__::func_240(563, 0);
	}
	if (__LIB_11__::func_482(uParam0, 1))
	{
		if (((__LIB_0__::func_474(559) && __LIB_0__::func_474(iVar0)) && __LIB_0__::func_474(562)) && __LIB_0__::func_474(563))
		{
			if (!__LIB_0__::func_474(564) && !__LIB_1__::func_262(564))
			{
				__LIB_1__::func_240(564, 0);
			}
			if ((!__LIB_0__::func_474(565) && !__LIB_1__::func_262(565)) && __LIB_0__::func_474(564))
			{
				__LIB_1__::func_240(565, 0);
			}
		}
	}
}

void func_982(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_652))
	{
		return;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_652))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_613))
	{
		return;
	}
	if (!FLOCK::_0x36486AF7DA93A464(*uParam0))
	{
		FLOCK::_0x6C57BEA886A20C6B(*uParam0, 1);
	}
	if (__LIB_0__::func_86(uParam0->f_644))
	{
		if (uParam0->f_653 == -1)
		{
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(uParam0->f_652, uParam0->f_613, &(uParam0->f_653)))
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, uParam0->f_653, &(uParam0->f_644)))
				{
					uParam0->f_647 = __LIB_11__::func_478(uParam0, uParam0->f_644);
					if (uParam0->f_653 <= 0)
					{
					}
					else if (TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, (uParam0->f_653 - 1), &(uParam0->f_648)))
					{
						uParam0->f_651 = __LIB_11__::func_478(uParam0, uParam0->f_648);
					}
				}
			}
		}
		else if (TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, uParam0->f_653, &(uParam0->f_644)))
		{
			uParam0->f_647 = __LIB_11__::func_478(uParam0, uParam0->f_644);
			if (uParam0->f_653 <= 0)
			{
			}
			else if (TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, (uParam0->f_653 - 1), &(uParam0->f_648)))
			{
				uParam0->f_651 = __LIB_11__::func_478(uParam0, uParam0->f_648);
			}
		}
	}
	else if (__LIB_11__::func_502(uParam0) || MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_613, uParam0->f_644, true) <= uParam0->f_654)
	{
		uParam0->f_648 = { uParam0->f_644 };
		uParam0->f_651 = uParam0->f_647;
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(uParam0->f_652, &iVar0);
		if (uParam0->f_653 < (iVar0 - 1))
		{
			uParam0->f_653++;
			uParam0->f_644 = { 0f, 0f, 0f };
			if (TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, uParam0->f_653, &(uParam0->f_644)))
			{
				uParam0->f_647 = __LIB_11__::func_478(uParam0, uParam0->f_644);
			}
		}
		else if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
		{
			vVar1 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
			vVar1.f_2 = (vVar1.z + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar4, false);
			vVar1.f_2 = uVar4;
			if (!__LIB_0__::func_138(uParam0->f_644, vVar1))
			{
				uParam0->f_644 = { vVar1 };
			}
		}
	}
	else if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(uParam0->f_652, uParam0->f_613, &iVar5))
	{
		if (iVar5 > uParam0->f_653)
		{
			uParam0->f_648 = { uParam0->f_644 };
			uParam0->f_651 = uParam0->f_647;
			uParam0->f_653 = iVar5;
			uParam0->f_644 = { 0f, 0f, 0f };
			if (TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, uParam0->f_653, &(uParam0->f_644)))
			{
				uParam0->f_647 = __LIB_11__::func_478(uParam0, uParam0->f_644);
			}
		}
	}
}

void func_983(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (uParam0->f_395)
	{
		if (!__LIB_0__::func_899(&(uParam0->f_397)))
		{
			if (!__LIB_0__::func_86(uParam0->f_613) && !__LIB_0__::func_86(uParam0->f_616))
			{
				if (__LIB_0__::func_138(uParam0->f_613, uParam0->f_616))
				{
					fVar0 = 0f;
				}
				else
				{
					fVar0 = BUILTIN::VMAG(uParam0->f_613 - uParam0->f_616);
				}
				if (fVar0 != 0f)
				{
					__LIB_2__::func_259(&(uParam0->f_397));
				}
			}
		}
		if (!__LIB_4__::func_156(uParam0, 2))
		{
			vVar1 = { uParam0->f_644 };
		}
		else if (TASK::_0x22CD2C33ED4467A1(uParam0->f_788))
		{
			vVar1 = { TASK::_0x91CB5E431F579BA1(uParam0->f_788) };
		}
		vVar4 = { __LIB_1__::func_367(vVar1, uParam0->f_625, uParam0->f_396) };
		uParam0->f_625 = { vVar4 };
		if (__LIB_0__::func_899(&(uParam0->f_397)) && __LIB_1__::func_592(&(uParam0->f_397)) > 2000)
		{
			uParam0->f_396 = (uParam0->f_396 + 0.05f);
			if (uParam0->f_396 > 1f)
			{
				uParam0->f_395 = 0;
				__LIB_1__::func_561(&(uParam0->f_397));
			}
		}
	}
}

void func_984(var uParam0)
{
	__LIB_2__::func_259(&(uParam0->f_352));
}

void func_985(var uParam0)
{
	char[] cVar0[8];
	if (__LIB_4__::func_156(uParam0, 32768))
	{
		cVar0 = "HERDING_QUIET";
	}
	else
	{
		cVar0 = "HERDING_SHOUT";
	}
	__LIB_2__::func_602(&(uParam0->f_401[0 /*17*/]), cVar0, " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_986(var uParam0)
{
	char[] cVar0[8];
	if (__LIB_4__::func_156(uParam0, 32768))
	{
		cVar0 = "HERDING_QUIET";
	}
	else
	{
		cVar0 = "HERDING_SHOUT";
	}
	__LIB_2__::func_602(&(uParam0->f_311[0 /*17*/]), cVar0, " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

bool func_987(var uParam0, var uParam1)
{
	float fVar0;
	if (uParam0->f_210.f_92 >= uParam0->f_210.f_91 && uParam0->f_210.f_91 != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_899(&(uParam0->f_210.f_88)))
	{
		if (uParam0->f_210.f_92 == 0)
		{
			__LIB_1__::func_585(&(uParam0->f_210.f_88), 30f);
		}
		else
		{
			__LIB_2__::func_259(&(uParam0->f_210.f_88));
		}
	}
	if (!__LIB_0__::func_899(&(uParam0->f_210.f_85)))
	{
		__LIB_2__::func_259(&(uParam0->f_210.f_85));
	}
	else
	{
		fVar0 = BUILTIN::VMAG(__LIB_11__::func_509(uParam1));
		if (fVar0 == 0f)
		{
			if (!__LIB_0__::func_899(&(uParam0->f_210.f_85)))
			{
				__LIB_2__::func_259(&(uParam0->f_210.f_85));
			}
		}
		else if (__LIB_0__::func_899(&(uParam0->f_210.f_85)))
		{
			__LIB_1__::func_561(&(uParam0->f_210.f_85));
		}
		if ((__LIB_0__::func_899(&(uParam0->f_210.f_85)) && __LIB_1__::func_592(&(uParam0->f_210.f_85)) > 10000) && (__LIB_0__::func_899(&(uParam0->f_210.f_88)) && __LIB_1__::func_592(&(uParam0->f_210.f_88)) > 30000))
		{
			return true;
		}
	}
	return false;
}

bool func_988(var uParam0)
{
	if (uParam0->f_210.f_1 == 3 || uParam0->f_210.f_1 == 5)
	{
		return true;
	}
	if (!__LIB_0__::func_899(&(uParam0->f_210.f_31)))
	{
		__LIB_2__::func_259(&(uParam0->f_210.f_31));
	}
	else if (__LIB_1__::func_592(&(uParam0->f_210.f_31)) >= 1500)
	{
		return true;
	}
	return false;
}

void func_989(var uParam0, int iParam1)
{
	if (uParam0->f_497 == 0)
	{
		if (__LIB_0__::func_94(*iParam1, uParam0->f_494, 1) < (35f - 5f))
		{
			uParam0->f_497 = 1;
		}
		if (!__LIB_0__::func_899(&(uParam0->f_210.f_43)))
		{
			__LIB_2__::func_259(&(uParam0->f_210.f_43));
		}
		else if (__LIB_1__::func_592(&(uParam0->f_210.f_43)) < 1500)
		{
			uParam0->f_497 = 1;
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam1, 1.25f);
		}
		if (PED::IS_PED_ON_MOUNT(*iParam1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(*iParam1), 1.25f);
		}
		if (__LIB_0__::func_899(&(uParam0->f_210.f_43)))
		{
			if (__LIB_1__::func_592(&(uParam0->f_210.f_43)) > 1500 && __LIB_0__::func_94(*iParam1, uParam0->f_494, 1) >= 35f)
			{
				uParam0->f_497 = 0;
			}
		}
		else
		{
			__LIB_2__::func_259(&(uParam0->f_210.f_43));
		}
	}
}

void func_990(var uParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	fVar1 = 100000f;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iParam1]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar2 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				if (__LIB_0__::func_272(iVar2, 0) && __LIB_11__::func_474(uParam0, iVar0))
				{
					fVar1 = __LIB_0__::func_665(iVar2, uParam0->f_2[iParam1], 1, 1);
					if (fVar1 <= 20f)
					{
						uParam0->f_44[iVar0] = ((BUILTIN::TO_FLOAT(iVar0) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
						__LIB_2__::func_259(&(uParam0->f_65[iVar0 /*3*/]));
						PED::_0x463803429297117C(uParam0->f_2[iVar0], vParam2, 3, 1);
						uParam0->f_23[iVar0] = 7;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_991(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	if (!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
	{
		__LIB_2__::func_355(559);
		__LIB_2__::func_355(560);
		__LIB_2__::func_355(562);
		__LIB_2__::func_355(564);
		__LIB_2__::func_355(565);
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
			{
				if (FLOCK::_0x8D913E493BAFE0A3(*uParam0) && FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar0]))
				{
					FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar0]);
				}
				if (uParam0->f_23[iVar0] != 14)
				{
					if (!bParam1)
					{
						if (!__LIB_0__::func_163(uParam0->f_2[iVar0], 1139527981))
						{
							TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, 0, 1, 1);
						}
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_2[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					}
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_2[iVar0], true);
			}
			__LIB_3__::func_141(uParam0->f_2[iVar0], 1088421888 /* Float: 7f */, 1, 0);
			sVar1 = __LIB_11__::func_460(uParam0);
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_2[iVar0], MISC::GET_HASH_KEY(sVar1));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_2[iVar0]));
		}
		uParam0->f_23[iVar0] = 3;
		__LIB_0__::func_325(&(uParam0->f_358[iVar0]));
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST(uParam0->f_380))
	{
		PED::REMOVE_GROUP(uParam0->f_380);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_444);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_444);
		VOLUME::_DELETE_VOLUME(uParam0->f_444);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_446))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_446);
		VOLUME::_DELETE_VOLUME(uParam0->f_446);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_445))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_445);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_694))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_694);
	}
	__LIB_11__::func_461(uParam0);
	__LIB_11__::func_522(uParam0);
	MISC::_0xFC6ECB9170145ECE();
	if (HUD::_TEXT_DATABASE_HAS_LOADED("HERDAUD"))
	{
		HUD::_TEXT_DATABASE_DELETE("HERDAUD");
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED("RUST"))
	{
		HUD::_TEXT_DATABASE_DELETE("RUST");
	}
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		return;
	}
	FLOCK::_0x67A43EA3F6FE0076(*uParam0);
	uParam0->f_189 = 0;
	FLOCK::_0xE0961AED72642B80(*uParam0);
}

bool func_992(var uParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7)
{
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		__LIB_13__::func_926(iParam1, vParam3, iParam6);
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam2))
	{
		return false;
	}
	*iParam1 = __LIB_12__::func_885(uParam0, iParam2, vParam3, iParam6, 1, 1, 0, 1, 1, 1, 1, 0);
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		if (bParam7)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
		}
		__LIB_13__::func_926(iParam1, vParam3, iParam6);
		return true;
	}
	return false;
}

void func_993(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(*iParam0, true, false);
	if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(*iParam0, true);
		if (__LIB_3__::func_640(*iParam0, iVar0) == -1)
		{
			TASK::TASK_BOAT_MISSION(*iParam0, iVar0, 0, 0, Global_36, 8, 4f, 524295, 10f, 1436);
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar2);
		if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar2);
		TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar2);
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		bVar1 = true;
	}
	*uParam1 = 1;
}

void func_994(int iParam0, var uParam1, bool bParam2)
{
	struct<4> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return;
	}
	__LIB_7__::func_465(*iParam0, &Var0);
	if (bParam2)
	{
		*uParam1 = __LIB_1__::func_391(*iParam0, 0, 0, 14592);
		__LIB_3__::func_730(*iParam0, 0, 0, 1, 1, 0);
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var0.f_3, 0, 1, 0);
	}
	else
	{
		if (PED::_0x91A5F9CBEBB9D936(*uParam1))
		{
			__LIB_0__::func_484(uParam1, *iParam0, 0);
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 0, 1);
	}
}

int func_995(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, int iParam7)
{
	return __LIB_13__::func_980(uParam0, uParam1, iParam2, iParam3, bParam4, fParam5, bParam6, iParam7);
}

bool func_996(var uParam0)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	fVar0 = uParam0->f_745;
	bVar1 = false;
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_13__::func_224(uParam0, &bVar2, &uVar3, &uVar4, &uVar5, &fVar6);
			if (__LIB_13__::func_617(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, &(uParam0->f_2591), uVar5, uVar4, uVar3, bVar2, fVar6, 0, 0, 1, 1, 1))
			{
				bVar1 = true;
			}
		}
	}
	if (uParam0->f_743 <= fVar0 || bVar1)
	{
		return true;
	}
	return false;
}

int func_997(char[4] cParam0)
{
	return __LIB_13__::func_668(cParam0);
}

void func_998(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_11__::func_574(Global_35, iParam0, &uVar0))
		{
			__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_999(int iParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			__LIB_0__::func_325(&iVar0);
		}
	}
}
