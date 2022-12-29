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
	int iLocal_15 = 0;
	struct<222> Local_16 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	struct<23> Local_319 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1 } ;
	var uLocal_342 = -1;
	var uLocal_343 = -1;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357[3] = { 0, 0, 0 };
	int iLocal_361[3] = { 0, 0, 0 };
	float fLocal_365 = 0f;
	int iLocal_366 = 0;
	struct<4> Local_367 = { 0, 0, 0, 0 } ;
	var uLocal_371 = 0;
	var uLocal_372 = 1065353216;
	var uLocal_373 = 1119092736;
	var uLocal_374 = 1092616192;
	var uLocal_375 = 1085276160;
	struct<21> Local_376[3];
	struct<17> Local_440[2];
	bool bLocal_475 = false;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	bool bLocal_478 = false;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	vector3 vLocal_486 = { 0f, 0f, 0f };
	var uLocal_489 = 0;
	int iLocal_490 = 0;
	bool bLocal_491 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_356 = -1;
	fLocal_365 = -1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_491 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_491, 969, 0);
		if (bLocal_491)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_16.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					__LIB_2__::func_146(&Local_16, 13);
				}
			}
			if (__LIB_0__::func_58())
			{
				__LIB_0__::func_11();
			}
			func_7();
			switch (Local_16.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						__LIB_2__::func_146(&Local_16, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (__LIB_0__::func_58())
						{
							__LIB_2__::func_146(&Local_16, 2);
						}
						else if (Local_16.f_217 > 0)
						{
							__LIB_2__::func_146(&Local_16, 3);
						}
						else if (Local_16.f_218 > 0)
						{
							__LIB_2__::func_146(&Local_16, 4);
						}
						else if (Local_16.f_216 > 0)
						{
							__LIB_2__::func_146(&Local_16, 5);
						}
						else
						{
							__LIB_2__::func_146(&Local_16, 6);
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_58())
					{
						__LIB_0__::func_11();
					}
					__LIB_2__::func_146(&Local_16, 3);
					break;
				case 3:
					if (func_12())
					{
						if (__LIB_0__::func_0())
						{
							__LIB_2__::func_146(&Local_16, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						__LIB_2__::func_146(&Local_16, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						__LIB_2__::func_146(&Local_16, 6);
					}
					break;
				case 6:
					if (__LIB_0__::func_0())
					{
						__LIB_2__::func_146(&Local_16, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[Local_16.f_151 /*4*/].f_2 = (1 + Global_40.f_9632[Local_16.f_151 /*4*/].f_2);
						if (__LIB_0__::func_65(&Global_1393447, 65536))
						{
							__LIB_0__::func_380(&Global_1393447, 65536);
						}
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_2__::func_146(&Local_16, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (Local_16.f_20 > (100f - 10f))
						{
							func_21();
							__LIB_2__::func_146(&Local_16, 9);
						}
						else
						{
							__LIB_2__::func_147(&Local_16, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						Local_16.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						Local_16.f_226 = __LIB_0__::func_36();
						if (Global_40.f_9632.f_194 != Local_16.f_151)
						{
							switch (Local_16.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									__LIB_2__::func_442(&Local_16, 1);
									break;
							}
						}
						func_26();
						__LIB_2__::func_222(&Local_16);
						Local_16.f_21 = Local_16.f_20;
						__LIB_2__::func_282(&Local_16, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						__LIB_2__::func_147(&Local_16, 16384);
						__LIB_2__::func_146(&Local_16, 10);
					}
					break;
				case 10:
					func_29();
					if (__LIB_2__::func_4(&Local_16, 32768) || func_31())
					{
						switch (Local_16.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								__LIB_2__::func_500(&Local_16, 1);
								break;
						}
						__LIB_2__::func_283(&Local_16, 1);
						__LIB_0__::func_747(120, 0, 1);
						__LIB_2__::func_304(1, -1, 0, 0, 0);
						__LIB_2__::func_148(&Local_16);
						__LIB_2__::func_146(&Local_16, 11);
					}
					break;
				case 11:
					__LIB_2__::func_301(&Local_16);
					func_38();
					if (func_39(&Local_16))
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_8__::func_901(&(Local_16.f_244), 0);
						__LIB_2__::func_146(&Local_16, 12);
					}
					break;
				case 12:
					func_41(&Local_16);
					func_38();
					if (func_42())
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_2__::func_146(&Local_16, 13);
					}
					break;
				case 13:
					func_1();
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
}

void func_1()
{
	float fVar0;
	if (__LIB_0__::func_65(&Global_1393447, 2))
	{
		__LIB_0__::func_380(&Global_1393447, 2);
	}
	if (__LIB_0__::func_65(&Global_1393447, 16))
	{
		__LIB_0__::func_380(&Global_1393447, 16);
	}
	if (__LIB_0__::func_65(&Global_1393447, 32768))
	{
		__LIB_0__::func_380(&Global_1393447, 32768);
	}
	if (__LIB_2__::func_5())
	{
		if (__LIB_2__::func_4(&Local_16, 4))
		{
			__LIB_2__::func_6(0);
			__LIB_2__::func_149(&Local_16, 4);
		}
	}
	fVar0 = 8f;
	if (Local_16.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!__LIB_0__::func_0() && !__LIB_11__::func_410(&(Local_16.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_2__::func_7())
	{
		__LIB_8__::func_901(&(Local_16.f_250), 0);
		return;
	}
	if (__LIB_11__::func_410(&(Local_16.f_250), fVar0))
	{
	}
	__LIB_2__::func_301(&Local_16);
	func_49();
	__LIB_2__::func_310(&Local_16, 0);
	func_51();
	__LIB_2__::func_171(&Local_16);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_282(&Local_16, 1);
	__LIB_2__::func_273(&Local_16, 0);
	if (Local_16.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_16.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_16.f_237))
	{
		__LIB_2__::func_492(&Local_16);
		__LIB_1__::func_544(Local_16.f_237);
	}
	__LIB_2__::func_283(&Local_16, 1);
	if (Local_16.f_95 >= 9 && Local_16.f_95 < 11)
	{
		if (__LIB_2__::func_8(Local_16.f_151))
		{
		}
		else if (__LIB_2__::func_172(Local_16.f_151, 1) || __LIB_2__::func_245(Local_16.f_151, 1))
		{
			__LIB_0__::func_47(&Global_1393447, 2048);
			if (!__LIB_2__::func_618(&(Local_16.f_244)))
			{
				__LIB_0__::func_747(120, 0, 1);
			}
		}
	}
	if (__LIB_2__::func_1(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (__LIB_2__::func_1(Local_16.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_16.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_2__::func_9(Local_16.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	__LIB_2__::func_10(Local_16.f_151);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (Local_16.f_95 <= 9 && Local_16.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_205(&Local_16))
			{
				__LIB_0__::func_380(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		__LIB_0__::func_380(&Global_1393447, 2);
		return false;
	}
	if (Local_16.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_16.f_95 < 10 && Local_16.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_131())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!__LIB_0__::func_86(Local_16.f_209))
			{
				if (Local_16.f_20 > 207f)
				{
					if (Local_16.f_223 == 0)
					{
						Local_16.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_16.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_16.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (func_71())
		{
			return true;
		}
		if (func_72(&uVar5))
		{
			fVar4 = func_73();
			iVar3 = 0;
			while (iVar3 < Local_16.f_215)
			{
				if (Local_16.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(Local_16[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

void func_7()
{
	func_74();
	func_75();
}

bool func_8(struct<8> Param0, var uParam8)
{
	float fVar0;
	vector3 vVar1;
	bool bVar4;
	if (Global_1879534.f_1)
	{
		return false;
	}
	if (__LIB_0__::func_86(Local_16.f_209))
	{
		__LIB_2__::func_289(&(Local_16.f_152));
		__LIB_2__::func_290(&(Local_16.f_152));
		__LIB_2__::func_104(&(Local_16.f_152), 0);
		__LIB_2__::func_105(&(Local_16.f_152), 1);
		__LIB_1__::func_975(&(Local_16.f_152), 6f);
		Local_16.f_209 = { Param0 };
		Local_16.f_151 = Param0.f_3;
		Local_16.f_221 = Param0.f_4;
		Local_16.f_222 = __LIB_2__::func_12(Local_16.f_151);
		if (Param0.f_7)
		{
			__LIB_2__::func_147(&Local_16, 2);
		}
		if (!__LIB_2__::func_13(Local_16.f_151))
		{
			__LIB_2__::func_146(&Local_16, 12);
			return false;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_16.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { __LIB_2__::func_291(Local_16.f_151, 0, Local_16.f_221) };
				vVar1 = { __LIB_2__::func_291(Local_16.f_151, 1, Local_16.f_221) };
				if (__LIB_0__::func_58())
				{
					if (__LIB_2__::func_14(&Local_16))
					{
						__LIB_2__::func_147(&Local_16, 1);
					}
				}
				if (!Local_16.f_227)
				{
					if (__LIB_2__::func_15(Local_16.f_181, 0))
					{
						Local_16.f_227 = __LIB_2__::func_284(Local_16.f_181, -1);
					}
				}
				if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_2__::func_146(&Local_16, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						__LIB_2__::func_498(&Local_16);
						__LIB_2__::func_174(&Local_16, 8672);
					}
					PED::_0xED9582B3DA8F02B4((((Local_16.f_215 + Local_16.f_216) + Local_16.f_217 * 2) + Local_16.f_219) + 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_9()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < Local_16.f_216)
	{
		iVar3 = func_92(iVar1);
		STREAMING::REQUEST_MODEL(iVar3, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < Local_16.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_16.f_66[iVar1]))
			{
				if (iVar2 == __LIB_2__::func_16())
				{
				}
				else
				{
					Local_16.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!PED::_0x610438375E5D1801(Local_16.f_66[iVar1]))
					{
						bVar0 = false;
					}
				}
				iVar1++;
				STREAMING::REQUEST_MODEL(joaat("P_LANTERN09X"), false);
				if (!func_95())
				{
					return false;
				}
				iVar1 = 0;
				while (iVar1 < Local_16.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_16.f_31[iVar1]))
					{
						if (iVar2 == __LIB_2__::func_16())
						{
						}
						else
						{
							Local_16.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!PED::_0x610438375E5D1801(Local_16.f_31[iVar1]))
							{
								bVar0 = false;
							}
						}
						iVar1++;
						if (!STREAMING::HAS_MODEL_LOADED(joaat("P_LANTERN09X")))
						{
							bVar0 = false;
						}
						if (!PED::_0x5E420FF293EE5472())
						{
							bVar0 = false;
						}
						return bVar0;
					}
				}
			}
		}
	}
}

bool func_12()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (Local_16.f_217 <= 0)
	{
		return true;
	}
	iVar0 = Local_16.f_220;
	iVar1 = __LIB_1__::func_976(iVar0);
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_16.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_16.f_49[iVar0], 0f);
		ENTITY::SET_ENTITY_VISIBLE(Local_16.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(Local_16.f_49[iVar0]);
		__LIB_2__::func_19(Local_16.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_16.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_16.f_49[iVar0], true, false);
		}
	}
	Local_16.f_220++;
	if (Local_16.f_220 >= Local_16.f_217)
	{
		Local_16.f_220 = 0;
		return true;
	}
	return false;
}

bool func_14()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (Local_16.f_218 <= 0)
	{
		return true;
	}
	iVar0 = Local_16.f_220;
	iVar1 = __LIB_1__::func_976(iVar0);
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_16.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_16.f_52[iVar0], 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(Local_16.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_16.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_16.f_52[iVar0], true, false);
		}
		if (__LIB_0__::func_0(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_16.f_52[iVar0], 0);
		}
	}
	Local_16.f_220++;
	if (Local_16.f_220 >= Local_16.f_218)
	{
		Local_16.f_220 = 0;
		return true;
	}
	return false;
}

bool func_15()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	if (Local_16.f_216 <= 0)
	{
		return true;
	}
	iVar0 = Local_16.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) };
	fVar5 = func_109(iVar0);
	iVar6 = func_93(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_16.f_40[iVar0]))
	{
		if (iVar1 != 0)
		{
			if (__LIB_0__::func_0(iVar0))
			{
				if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
				{
					return false;
				}
			}
			if (func_93(iVar0) == __LIB_2__::func_16())
			{
				Local_16.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_16.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(Local_16.f_40[iVar0], func_93(iVar0));
				PED::_UPDATE_PED_VARIATION(Local_16.f_40[iVar0], false, true, true, true, false);
			}
		}
	}
	if (__LIB_2__::func_1(Local_16.f_40[iVar0], 0, 1))
	{
		__LIB_1__::func_991(Local_16.f_40[iVar0], 0);
		if (__LIB_2__::func_4(&Local_16, 1))
		{
			iVar7 = __LIB_1__::func_976(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_16.f_84[iVar0]))
				{
					Local_16.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_LANTERN09X"), vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_16.f_84[iVar0], Local_16.f_40[iVar0], iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		__LIB_2__::func_20(&(Local_16.f_152), Local_16.f_40[iVar0], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_16.f_40[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(Local_16.f_40[iVar0], 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_16.f_40[iVar0]);
		ENTITY::SET_ENTITY_VISIBLE(Local_16.f_40[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_16.f_40[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_16.f_40[iVar0], true, false);
		}
		Local_16.f_220++;
		if (Local_16.f_220 >= Local_16.f_216)
		{
			Local_16.f_220 = 0;
			return true;
		}
	}
	return false;
}

bool func_17()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	if (Local_16.f_215 <= 0)
	{
		return true;
	}
	iVar0 = Local_16.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) };
	fVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = __LIB_2__::func_21(Local_16.f_181);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		if (iVar6 == __LIB_2__::func_16())
		{
			Local_16[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			Local_16[iVar0] = PED::_0xEAF682A14F8E5F53(Local_16.f_31[iVar0], vVar2, fVar5, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_16[iVar0]))
			{
				Local_16[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_16[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_16[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(Local_16[iVar0], 277, false);
			PED::SET_PED_CONFIG_FLAG(Local_16[iVar0], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_16[iVar0], 233, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_16[iVar0]);
			__LIB_2__::func_22(&(Local_16.f_152), Local_16[iVar0]);
			__LIB_2__::func_23(&(Local_16.f_152), Local_16[iVar0], 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_16[iVar0], false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_16[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_16[iVar0], true, false);
			}
			if (Local_16.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_16[iVar0], joaat("REL_PLAYER_DISLIKE"));
			}
			__LIB_2__::func_24(Local_16[iVar0], 1);
			PED::_0xBD75500141E4725C(Local_16[iVar0], iVar7);
			DECORATOR::DECOR_SET_BOOL(Local_16[iVar0], "bBeatPed", true);
			__LIB_2__::func_132(__LIB_1__::func_509(Local_16[iVar0]), Local_16[iVar0]);
		}
		else
		{
			Local_16.f_220 = (Local_16.f_220 - 1);
		}
	}
	Local_16.f_220++;
	if (Local_16.f_220 >= Local_16.f_215)
	{
		Local_16.f_220 = 0;
		return true;
	}
	return false;
}

bool func_20()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_2__::func_1(Local_16[iVar0], 0, 0))
		{
		}
		else
		{
			__LIB_2__::func_429(&Local_16, iVar0, 0);
			__LIB_2__::func_150(&Local_16, iVar0, -1, -1);
			PED::SET_PED_HEARING_RANGE(Local_16[iVar0], 5f);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_16[iVar0], true, 0, false);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_16[iVar0], true, true);
			PED::SET_PED_CONFIG_FLAG(Local_16[iVar0], 6, true);
			PED::_0x8ACC0506743A8A5C(Local_16[iVar0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			__LIB_2__::func_133(Local_16[iVar0], func_127(iVar0), 0);
			switch (iVar0)
			{
				case 0:
					__LIB_2__::func_272(Local_16[0], joaat("GROUP_REPEATER"), 99, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					TASK::TASK_PLAY_ANIM(Local_16[0], __LIB_2__::func_606(), __LIB_2__::func_607(2), 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					break;
				case 1:
					__LIB_2__::func_272(Local_16[1], joaat("GROUP_REVOLVER"), 99, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					TASK::TASK_PLAY_ANIM(Local_16[1], __LIB_2__::func_606(), __LIB_2__::func_607(3), 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					break;
				case 2:
					__LIB_2__::func_272(Local_16[2], joaat("GROUP_REVOLVER"), 99, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
			}
		}
		iVar0++;
	}
	return true;
}

void func_21()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_16.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_16[iVar0]);
			if (!__LIB_2__::func_25(&Local_16, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_16[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_16.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_40[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_16.f_40[iVar0]);
			if (!__LIB_2__::func_26(&Local_16, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_16.f_40[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_16.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_49[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_16.f_49[iVar0]);
			ENTITY::SET_ENTITY_VISIBLE(Local_16.f_49[iVar0], true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_16.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_52[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_16.f_52[iVar0], true);
		}
		iVar0++;
	}
}

bool func_23()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar6 = -1;
	if (iLocal_275 <= 5 || iLocal_275 == 8)
	{
		iVar6 = func_134(&uVar4);
	}
	if (iLocal_275 < 10)
	{
		if (iLocal_275 <= 6)
		{
			if (func_135())
			{
				__LIB_0__::func_7(&uLocal_279, 64);
			}
		}
		if (iLocal_275 > 2 && iLocal_275 < 6)
		{
			vVar1 = { func_137(1) };
			if (__LIB_0__::func_266(Local_16[1], vVar1, 1f, 1, 1))
			{
				TASK::CLEAR_PED_TASKS(Local_16[1], true, false);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_16[1], Global_35, -1, false, 1);
			}
		}
		if (func_139() || ((iLocal_275 > 0 && iLocal_275 < 4) && Global_1935630.f_40 == 0))
		{
			__LIB_2__::func_691(&uLocal_484, Local_16[2], 0, 30f);
			func_141();
			func_142();
			func_143(10);
		}
	}
	if (iLocal_275 > 0)
	{
		if (iLocal_275 <= 5)
		{
			func_144();
			if (iLocal_275 <= 3)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
			}
		}
	}
	if (__LIB_0__::func_51(&uLocal_279, 16384))
	{
		func_146(&(Local_16.f_56), 0, Local_16[2], 34606, 0f, 0.4f, 0f);
	}
	switch (iLocal_275)
	{
		case 0:
			if (__LIB_1__::func_205(Global_35, iLocal_282[0], 1, 0))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					iVar7 = PED::GET_MOUNT(Global_35);
					if (__LIB_2__::func_1(iVar7, 0, 1))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar7, 1.75f);
					}
					if (!__LIB_0__::func_51(&uLocal_279, 16))
					{
						__LIB_0__::func_7(&uLocal_279, 16);
					}
				}
			}
			if (func_148())
			{
				func_149();
				func_144();
				__LIB_5__::func_107(&uLocal_295);
				func_143(1);
			}
			else if (func_151())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_16, 16);
					__LIB_2__::func_146(&Local_16, 13);
				}
			}
			break;
		case 1:
			func_153();
			func_154();
			func_155();
			func_156();
			func_157();
			__LIB_2__::func_510(&Local_16);
			if (__LIB_2__::func_1(Local_16[0], 0, 1))
			{
				if (!__LIB_0__::func_51(&uLocal_279, 2))
				{
					if (__LIB_2__::func_598(Local_16[0], iLocal_361[0], "PEDB", joaat("BREAKOUT"), 0, 1, 0))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_361[0], false))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_361[0], "PEDB", Local_16[0]);
						}
						__LIB_2__::func_73(Local_16[0], &(Local_16.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
						PED::FORCE_PED_MOTION_STATE(Local_16[0], joaat("MOTIONSTATE_AIMING"), false, 1, false);
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_16[0], Global_35, -1, true, 0);
						__LIB_0__::func_7(&uLocal_279, 2);
					}
				}
			}
			if (__LIB_2__::func_1(Local_16[1], 0, 1))
			{
				if (!__LIB_0__::func_51(&uLocal_279, 4))
				{
					if (__LIB_2__::func_598(Local_16[1], iLocal_361[0], "PEDC", joaat("BREAKOUT"), 0, 1, 0))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_361[0], false))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_361[0], "PEDC", Local_16[1]);
						}
						__LIB_2__::func_73(Local_16[1], &(Local_16.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
						PED::FORCE_PED_MOTION_STATE(Local_16[1], joaat("MOTIONSTATE_AIMING"), false, 1, false);
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_16[1], Global_35, -1, true, 0);
						__LIB_0__::func_7(&uLocal_279, 4);
					}
				}
			}
			if ((__LIB_0__::func_51(&uLocal_279, 2) && __LIB_0__::func_51(&uLocal_279, 4)) || __LIB_11__::func_410(&uLocal_295, 10f))
			{
				func_161(0);
				func_162(0);
				func_163();
				func_164(&Local_367);
				__LIB_5__::func_107(&uLocal_295);
				__LIB_2__::func_608(&uLocal_295);
				func_143(2);
			}
			break;
		case 2:
			func_156();
			__LIB_2__::func_609();
			func_153();
			func_154();
			__LIB_2__::func_510(&Local_16);
			func_155();
			__LIB_8__::func_901(&uLocal_295, 0);
			if ((__LIB_2__::func_4(&Local_16, 4096) && ENTITY::GET_ENTITY_SPEED(Global_35) < 0.2f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_167(), false) < 1f)
			{
				func_157();
				__LIB_5__::func_107(&uLocal_295);
				func_143(3);
			}
			break;
		case 3:
			__LIB_2__::func_609();
			func_153();
			func_154();
			__LIB_2__::func_510(&Local_16);
			if (func_157())
			{
				if (!__LIB_0__::func_51(&uLocal_279, 262144))
				{
					func_168();
					__LIB_0__::func_7(&uLocal_279, 262144);
				}
				if (!__LIB_0__::func_51(&uLocal_279, 65536) && !func_169(&Local_16))
				{
					func_170();
				}
				__LIB_2__::func_356(Global_35, Local_16[2], 2, 1, 10000, 0);
				func_143(4);
			}
			break;
		case 4:
			__LIB_2__::func_609();
			func_153();
			func_154();
			__LIB_2__::func_510(&Local_16);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_172();
				if (!__LIB_0__::func_51(&uLocal_279, 65536) && !func_169(&Local_16))
				{
					func_170();
				}
				if (((!__LIB_0__::func_51(&uLocal_279, 65536) && __LIB_11__::func_410(&uLocal_295, (15f - 3f))) && func_173(0, 1, 0, 0)) || __LIB_0__::func_51(&uLocal_279, 2097152))
				{
					if (!func_174())
					{
						__LIB_4__::func_453(&(Local_440[0 /*17*/]), 1, 1);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_PLAY_ANIM(0, __LIB_2__::func_606(), __LIB_2__::func_607(5), 8f, -8f, -1, 0, 0f, true, 0, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, __LIB_2__::func_606(), __LIB_2__::func_607(0), 8f, -8f, -1, 65537, 0f, true, 0, false, 0, false);
						__LIB_1__::func_474(Local_16[2], &iVar0, 0, 0, 1, 1);
						__LIB_2__::func_505(&Local_16);
						func_143(5);
					}
				}
				else
				{
					switch (iVar6)
					{
						case 0:
							__LIB_0__::func_7(&uLocal_279, 2097152);
							break;
						case 1:
							__LIB_0__::func_7(&uLocal_279, 64);
							break;
					}
				}
			}
			else
			{
				if (!__LIB_0__::func_51(&uLocal_279, 65536))
				{
					func_170();
				}
				__LIB_5__::func_107(&uLocal_295);
				func_143(5);
			}
			break;
		case 5:
			__LIB_2__::func_609();
			func_153();
			func_154();
			__LIB_2__::func_510(&Local_16);
			func_172();
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_2__::func_505(&Local_16);
				if (!__LIB_0__::func_51(&uLocal_279, 8))
				{
					if (__LIB_2__::func_1(Local_16[2], 0, 1))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_16[2]);
						PED::FORCE_PED_MOTION_STATE(Local_16[2], joaat("MOTIONSTATE_AIMING"), false, 1, true);
						TASK::TASK_AIM_AT_ENTITY(Local_16[2], Global_35, -1, 0, 0);
						PED::_0x2208438012482A1A(Local_16[2], true, false);
						__LIB_0__::func_7(&uLocal_279, 8);
					}
				}
				if (func_173(-3.5f, 1, 0, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					MAP::DISPLAY_RADAR(true);
					func_178();
					__LIB_5__::func_107(&uLocal_295);
					__LIB_2__::func_310(&Local_16, 0);
					func_143(6);
				}
			}
			else
			{
				if (!__LIB_0__::func_51(&uLocal_279, 65536))
				{
					func_170();
				}
				if (!__LIB_0__::func_51(&uLocal_279, 65536) && __LIB_18__::func_376(&uLocal_295, 23f))
				{
					if (!func_174())
					{
						__LIB_17__::func_832(&Local_440, 1, 1);
						PED::FORCE_PED_MOTION_STATE(Local_16[2], joaat("MOTIONSTATE_AIMING"), false, 0, false);
						__LIB_0__::func_7(&uLocal_279, 67108864);
						func_143(9);
					}
				}
				else
				{
					switch (iVar6)
					{
						case 0:
							__LIB_0__::func_7(&uLocal_279, 2097152);
							break;
						case 1:
							__LIB_0__::func_7(&uLocal_279, 64);
							break;
					}
				}
			}
			break;
		case 6:
			func_172();
			__LIB_2__::func_609();
			__LIB_2__::func_510(&Local_16);
			func_163();
			__LIB_2__::func_505(&Local_16);
			if (__LIB_0__::func_51(&uLocal_279, 16384))
			{
				__LIB_0__::func_8(&uLocal_279, 16384);
				__LIB_1__::func_281(&iLocal_15, 1, 1);
			}
			if (func_135())
			{
				__LIB_0__::func_7(&uLocal_279, 64);
			}
			else if (__LIB_0__::func_71(Global_35))
			{
				if (func_184())
				{
					__LIB_0__::func_7(&uLocal_279, 64);
				}
			}
			else
			{
				__LIB_2__::func_417(&Local_16, iLocal_282[8], func_185(), 1067450368 /* Float: 1.25f */, 2f, 0.5f, 0);
				if (((!__LIB_0__::func_51(&uLocal_279, 131072) && __LIB_2__::func_1(Local_16[1], 0, 1)) && func_173(0, 1, 0, 0)) && func_173(0f, 1, Global_35, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
					__LIB_1__::func_474(Local_16[1], &iVar0, 0, 0, 1, 1);
					switch (iLocal_477)
					{
						case 0:
							sVar5 = "AMBUSH_BRT_ENTER";
							break;
						case 1:
							sVar5 = "AMBUSH_BRT_V2_ENTER";
							break;
						case 3:
							sVar5 = "HANDS_UP";
							iVar8 = 1;
							break;
						case 2:
							sVar5 = "HANDS_UP";
							break;
					}
					func_187(Local_16[1], Global_35, sVar5, "", -1082130432 /* Float: -1f */, iVar8, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_180(&(Local_16.f_152), 0);
					__LIB_0__::func_7(&uLocal_279, 131072);
				}
				func_178();
				if (__LIB_0__::func_86(vLocal_292))
				{
					vLocal_292 = { Global_36 };
				}
				if ((__LIB_0__::func_51(&uLocal_279, 131072) && (func_173(-5f, 1, 0, 0) || iLocal_490 > 0)) && func_189())
				{
					__LIB_2__::func_691(&uLocal_484, Local_16[2], 0, 30f);
					if (Local_319.f_4)
					{
						__LIB_2__::func_282(&Local_16, 1);
						__LIB_2__::func_469();
						__LIB_5__::func_107(&uLocal_295);
						func_161(1);
						__LIB_4__::func_453(&(Local_440[0 /*17*/]), 1, 1);
						func_143(7);
					}
					else
					{
						__LIB_8__::func_901(&uLocal_304, 0);
						if (__LIB_11__::func_410(&uLocal_304, 1.5f))
						{
							func_143(9);
						}
					}
				}
				else if (Local_319.f_4)
				{
					__LIB_2__::func_282(&Local_16, 1);
					__LIB_2__::func_691(&uLocal_484, Local_16[2], 0, 30f);
					__LIB_2__::func_469();
					__LIB_5__::func_107(&uLocal_295);
					func_161(1);
					__LIB_4__::func_453(&(Local_440[0 /*17*/]), 1, 1);
					func_143(7);
				}
			}
			break;
		case 7:
			if (Local_319.f_4)
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_16[2], false);
				PED::SET_PED_CAN_RAGDOLL(Local_16[2], false);
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_282[7]))
				{
					iLocal_282[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Global_36, 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 1f, 2.5f, 2f, "volPlayerBlocker");
					PATHFIND::_0x19C7567D2F2287D6(iLocal_282[7], 7);
				}
			}
			func_163();
			if (!PED::IS_PED_RAGDOLL(Global_35))
			{
				if (((__LIB_0__::func_51(&uLocal_279, 4096) || PED::IS_PED_PRONE(Global_35)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_191(), func_192(), 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_191(), func_192()) > 0.35f)) || __LIB_11__::func_410(&uLocal_295, 1f))
				{
					if (!__LIB_0__::func_51(&uLocal_279, 8192))
					{
						func_193();
					}
					if (!__LIB_0__::func_51(&uLocal_279, 4096))
					{
						__LIB_0__::func_7(&uLocal_279, 4096);
						PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, 5000, 5000, 2, -0.447214f, -0.894427f, 0f, 2f, 0f, 0f, 0f, 0f, 0f, 0f);
					}
					else
					{
						PED::SET_PED_TO_RAGDOLL(Global_35, 5000, 5000, 0, false, false, false);
					}
				}
			}
			else
			{
				if (!__LIB_0__::func_51(&uLocal_279, 8192))
				{
					func_193();
				}
				if (__LIB_2__::func_118(Local_16[2], 1, 1) > 3f && __LIB_0__::func_51(&uLocal_279, 8192))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_282[7]))
					{
						PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_282[7]);
					}
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_16[2], true);
					PED::SET_PED_CAN_RAGDOLL(Local_16[2], true);
					__LIB_2__::func_289(&(Local_16.f_152));
					__LIB_3__::func_407(&(Local_16.f_152), 25f);
					func_143(8);
				}
			}
			break;
		case 8:
			func_196();
			func_197();
			if (func_198(iVar6))
			{
				func_143(9);
			}
			break;
		case 9:
			func_142();
			func_199();
			__LIB_2__::func_691(&uLocal_484, Local_16[2], 0, 30f);
			__LIB_5__::func_107(&uLocal_295);
			func_143(10);
			break;
		case 10:
			__LIB_1__::func_281(&iLocal_15, 1, 1);
			func_200(2, "HORSE", Local_16.f_56);
			return true;
	}
	return false;
}

void func_26()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_16.f_216)
	{
		if (__LIB_2__::func_1(Local_16.f_40[iVar1], 0, 0))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(Local_16.f_40[iVar1], false);
			if (__LIB_2__::func_1(iVar0, 0, 0))
			{
				PED::_0x931B241409216C1F(iVar0, Local_16.f_40[iVar1], 0);
				__LIB_2__::func_28(&Local_16, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_29()
{
	int iVar0;
	__LIB_8__::func_901(&(Local_16.f_247), 0);
	if (__LIB_11__::func_410(&(Local_16.f_247), 5f))
	{
		__LIB_2__::func_310(&Local_16, 0);
	}
	if (__LIB_11__::func_410(&(Local_16.f_247), 3f))
	{
		__LIB_2__::func_295(&Local_16);
	}
	func_38();
	if (!__LIB_2__::func_4(&Local_16, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_16, 4194304))
		{
			if (Local_16.f_181 == 2)
			{
				__LIB_2__::func_206(&Local_16, 1.1f);
			}
			else
			{
				__LIB_2__::func_206(&Local_16, 1.2f);
			}
			__LIB_2__::func_147(&Local_16, 4194304);
		}
		if (__LIB_2__::func_4(&Local_16, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_16.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_16.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_206(&Local_16, 1f);
				__LIB_2__::func_147(&Local_16, 8388608);
			}
		}
	}
}

bool func_31()
{
	int iVar0;
	if (iLocal_276 < 2)
	{
		if (func_213())
		{
			iLocal_276 = 3;
		}
	}
	func_214(&Local_319);
	func_215();
	func_216(&Local_16, &Local_376, &Local_440);
	iVar0 = 0;
	while (iVar0 < Local_16.f_215)
	{
		__LIB_2__::func_208(&Local_16, iVar0, Local_16.f_40[iVar0]);
		iVar0++;
	}
	switch (iLocal_276)
	{
		case 0:
			__LIB_2__::func_282(&Local_16, 1);
			func_218();
			__LIB_8__::func_901(&uLocal_301, 0);
			func_219();
			iLocal_276 = 1;
			break;
		case 1:
			func_220();
			if (func_221())
			{
				func_222();
				iLocal_276 = 2;
			}
			break;
		case 2:
			if (func_213())
			{
				iLocal_276 = 3;
			}
			break;
		case 3:
			if (func_223(&uLocal_479, &Local_16, 0, -1, 1073741824 /* Float: 2f */, 4))
			{
				func_224();
				iLocal_276 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_38()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_16.f_216)
	{
		if (!__LIB_2__::func_26(&Local_16, iVar0, 16))
		{
			if (__LIB_2__::func_1(Local_16.f_40[iVar0], 0, 0))
			{
				if (func_238(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_16.f_40[iVar0], Local_16.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(Local_16.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_16.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_16.f_40[iVar0]));
					__LIB_2__::func_28(&Local_16, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

int func_39(int iParam0)
{
	return func_41(iParam0);
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_8__::func_901(&(iParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(iParam0->f_22[iVar0]))
			{
				if (__LIB_0__::func_94((*iParam0)[iVar0], Global_36, 1) > 40f || __LIB_11__::func_410(&(iParam0->f_241), 15f))
				{
					__LIB_0__::func_325(&(iParam0->f_22[iVar0]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar0]);
					return 1;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iParam0->f_215)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	if (__LIB_11__::func_410(&(Local_16.f_244), 45f) && __LIB_0__::func_0())
	{
		__LIB_2__::func_492(&Local_16);
		__LIB_2__::func_608(&(Local_16.f_244));
	}
	return false;
}

void func_49()
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	__LIB_2__::func_503(&Local_16, 1);
	MAP::DISPLAY_RADAR(true);
	PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	__LIB_2__::func_691(&uLocal_484, Local_16[2], 0, 30f);
	if (!ENTITY::IS_ENTITY_DEAD(Local_16.f_56))
	{
		func_200(2, "HORSE", Local_16.f_56);
		PED::SET_PED_CONFIG_FLAG(Local_16.f_56, 301, false);
		PED::_0x2EB75FB86C41F026(Local_16.f_56, 3, 1);
		PED::_0x58F7DB5BD8FA2288(Local_16.f_56);
		TASK::CLEAR_PED_SECONDARY_TASK(Local_16.f_56);
		__LIB_2__::func_145(Local_16.f_56, 0);
	}
	__LIB_1__::func_281(&iLocal_15, 1, 1);
	func_245(&uLocal_484, &Local_16);
	func_163();
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;
	int iVar12;
	int iVar13;
	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < Local_16.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16[iVar0]))
		{
			if (func_246(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(Local_16[iVar0]);
				PED::DELETE_PED(&(Local_16[iVar0]));
			}
			else
			{
				if (__LIB_2__::func_1(Local_16[iVar0], 0, 0))
				{
					if (!__LIB_2__::func_4(&Local_16, 16384))
					{
						__LIB_2__::func_32(&(Local_16[iVar0]));
					}
					__LIB_2__::func_24(Local_16[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_16[iVar0], 5, true);
					PED::_0x24C82EF607105FAA(Local_16[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(Local_16[iVar0], 993130593);
					if (__LIB_2__::func_178(Local_16[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_16[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_16[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(Local_16[iVar0], Global_35) || PED::IS_PED_FLEEING(Local_16[iVar0])) || __LIB_2__::func_25(&Local_16, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(Local_16[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(Local_16[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_16[iVar0], Global_35, 4, iVar1, -1f, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(Local_16[iVar0], true);
					}
					else if ((Local_16.f_215 == Local_16.f_216 && __LIB_2__::func_1(Local_16.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_16[iVar0], true))
					{
						iVar11 = Local_16.f_40[iVar0];
						PED::_0x931B241409216C1F(Local_16.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, Local_16.f_40[iVar0], 20000, -1, 2f, 1, 0, 0);
						if (!__LIB_0__::func_86(Local_16.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_16.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						__LIB_1__::func_474(Local_16[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(Local_16[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_16[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(Local_16[iVar0], true)))
						{
							if (PED::_GET_SEAT_PED_IS_USING(Local_16[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(Local_16[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!__LIB_0__::func_86(Local_16.f_118[iVar0 /*4*/].f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, Local_16.f_118[iVar0 /*4*/].f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								__LIB_1__::func_474(Local_16[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(Local_16[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!__LIB_0__::func_86(Local_16.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_16.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							__LIB_1__::func_474(Local_16[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(Local_16[iVar0], true);
						}
						else
						{
							if (func_249(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1f, -1, 0);
								__LIB_1__::func_474(Local_16[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(Local_16[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								__LIB_1__::func_474(Local_16[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(Local_16[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_16[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(Local_16[iVar0]), -1) == Local_16[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_16[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(Local_16[iVar0]) && !PED::IS_PED_IN_COMBAT(Local_16[iVar0], Global_35)) && !__LIB_2__::func_25(&Local_16, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(Local_16[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_16[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_16.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_40[iVar0]))
		{
			if (func_250(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_16.f_84[iVar0]));
				}
				PED::DELETE_PED(&(Local_16.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_84[iVar0]))
				{
					if (func_251(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(Local_16.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(Local_16.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_16.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_16.f_84[iVar0]));
					}
				}
				if (__LIB_2__::func_1(Local_16.f_40[iVar0], 0, 1))
				{
					if (__LIB_2__::func_618(&(Local_16.f_247)))
					{
						if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_16.f_40[iVar0], false), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_16.f_40[iVar0], Local_16.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_16.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(Local_16.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Local_16.f_40[iVar0], true)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_16.f_40[iVar0], Local_16.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(Local_16.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_16.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_16.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_49[iVar0]))
		{
			if (func_252(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_16.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_16.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == Local_16.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_16.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_16.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_52[iVar0]))
		{
			if (__LIB_2__::func_307(&Local_16, Local_16.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_16.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_16.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

bool func_71()
{
	int iVar0;
	if (!__LIB_2__::func_4(&Local_16, 16384))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 105:
			if (__LIB_2__::func_230() && func_273())
			{
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_230() && func_273())
			{
				return true;
			}
			break;
	}
	if (func_273())
	{
		if (Local_16.f_151 != 43)
		{
			if (__LIB_1__::func_923())
			{
				if (__LIB_2__::func_38(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						__LIB_8__::func_901(&(Local_16.f_253), 0);
						if (__LIB_11__::func_410(&(Local_16.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_72(var uParam0)
{
	if (Local_16.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_16.f_21 < (func_73() - 10f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_16.f_20 > *uParam0)
	{
		return true;
	}
	switch (Local_16.f_151)
	{
		case 29:
		case 30:
			if (Local_16.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!__LIB_2__::func_4(&Local_16, 512) && !__LIB_2__::func_4(&Local_16, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_73()
{
	if (__LIB_0__::func_51(&uLocal_279, 32768))
	{
		return 180f;
	}
	return 140f;
}

void func_74()
{
	if (Local_16.f_95 <= 8)
	{
		Local_16.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_16.f_209, true);
		if (Local_16.f_21 == 0f || Local_16.f_21 > Local_16.f_20)
		{
			Local_16.f_21 = Local_16.f_20;
		}
		return;
	}
	if (Local_16.f_18 < 0)
	{
		Local_16.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_16.f_209, true);
		if (Local_16.f_21 == 0f || Local_16.f_21 > Local_16.f_20)
		{
			Local_16.f_21 = Local_16.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_16[Local_16.f_18]))
	{
		Local_16.f_9[Local_16.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Local_16[Local_16.f_18], false, true));
	}
	Local_16.f_18++;
	if (Local_16.f_18 >= Local_16.f_215)
	{
		Local_16.f_18 = -1;
	}
}

void func_75()
{
	int iVar0;
	if (Local_16.f_19 < Local_16.f_215)
	{
		iVar0 = Local_16.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_16[iVar0]))
		{
			if (!__LIB_2__::func_25(&Local_16, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_16[iVar0], 200f, -1082130432 /* Float: -1f */, Local_16.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_152(&Local_16, iVar0, 8);
				}
			}
		}
	}
	else if (Local_16.f_19 < (Local_16.f_215 + Local_16.f_216))
	{
		iVar0 = (Local_16.f_19 - Local_16.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&Local_16, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_16.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&Local_16, iVar0, 8);
				}
			}
		}
	}
	else if (Local_16.f_19 < ((Local_16.f_215 + Local_16.f_216) + Local_16.f_217))
	{
		iVar0 = ((Local_16.f_19 - Local_16.f_215) - Local_16.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_16.f_49[iVar0]))
		{
			if (!__LIB_2__::func_39(&Local_16, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_16.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_16.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(Local_16.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_153(&Local_16, iVar0, 8);
					}
				}
			}
		}
	}
	Local_16.f_19++;
	if (Local_16.f_19 >= ((Local_16.f_215 + Local_16.f_216) + Local_16.f_217))
	{
		Local_16.f_19 = 0;
	}
}

bool func_83()
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -1072.402f, 12.7514f, 55.3079f, true);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -1078.22f, 249.682f, 58.1359f, true);
	iLocal_282[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-981.8777f, 164.84f, 73.77f, 0f, 0f, 26.86765f, 216.726f, 82f, 45.57f, "volNoSpawn");
	if (fVar0 < fVar1 && !__LIB_1__::func_205(Global_35, iLocal_282[4], 1, 0))
	{
		__LIB_0__::func_7(&uLocal_279, 1);
	}
	__LIB_2__::func_289(&(Local_16.f_152));
	__LIB_2__::func_180(&(Local_16.f_152), 0);
	Local_16.f_215 = 3;
	Local_16.f_217 = 0;
	Local_16.f_218 = 0;
	Local_16.f_216 = 3;
	if (func_290())
	{
		Local_16.f_181 = -1;
		switch ((Local_16.f_222 % 2))
		{
			case 0:
				iLocal_477 = 2;
				break;
			case 1:
				iLocal_477 = 3;
				break;
		}
	}
	else
	{
		Local_16.f_181 = 0;
		switch ((Local_16.f_222 % 2))
		{
			case 0:
				iLocal_477 = 0;
				break;
			case 1:
				iLocal_477 = 1;
				break;
		}
	}
	iLocal_282[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1110.137f, 125.507f, 56.91f, 0f, 0f, -15.164f, 4.936f, 34.38f, 3.57f, "volBridgeSafe");
	iLocal_282[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeFast");
	VOLUME::_0x39816F6F94F385AD(iLocal_282[0], -1110.137f, 125.507f, 56.91f, 0f, 0f, -15.164f, 4.936f, 28.48f, 3.57f);
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_282[0], -1114.499f, 109.4094f, 56.36003f, 0f, 0f, -15.164f, 11.59814f, 11.73431f, 5.59591f);
	}
	else
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_282[0], -1105.688f, 141.922f, 56.36003f, 0f, 0f, -15.164f, 11.59814f, 11.73431f, 5.59591f);
	}
	iLocal_282[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1110.137f, 125.507f, 56.91f, 0f, 0f, -15.164f, 4.936f, 13.41f, 3.57f, "volBridgeMedium");
	iLocal_282[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1110.137f, 125.507f, 56.91f, 0f, 0f, -15.164f, 4.936f, 6.912f, 3.57f, "volBridgeSlow");
	iLocal_282[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_282[6], -1201.736f, 150.3323f, 56.91f, 0f, 0f, -15.164f, 187.1047f, 29.97863f, 68.89426f);
		VOLUME::_0x39816F6F94F385AD(iLocal_282[6], -1182.664f, 120.0132f, 48.16164f, 0f, 0f, 75.16401f, 55.42078f, 123.636f, 19.18459f);
		VOLUME::_0x39816F6F94F385AD(iLocal_282[6], -1013.557f, 134.9051f, 56.91f, 0f, 0f, 3.071611f, 193.4855f, 29.97863f, 68.89426f);
		VOLUME::_0x39816F6F94F385AD(iLocal_282[6], -1052.486f, 113.1258f, 56.91f, 0f, 0f, -12.36279f, 118.0988f, 29.97863f, 68.89426f);
	}
	else
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_282[6], -1207.184f, 151.8086f, 56.91f, 0f, 0f, -15.164f, 197.68f, 29.97863f, 68.89426f);
		VOLUME::_0x39816F6F94F385AD(iLocal_282[6], -1213.413f, 164.5737f, 55.83302f, 0f, 0f, 70.71906f, 59.76054f, 193.7126f, 36.63369f);
		VOLUME::_0x39816F6F94F385AD(iLocal_282[6], -1052.743f, 38.11969f, 63.47567f, 0f, 0f, 47.74252f, 82.52467f, 193.7126f, 74.58458f);
		VOLUME::_0x39816F6F94F385AD(iLocal_282[6], -976.3122f, 23.90312f, 63.47568f, 0f, 0f, 64.09356f, 82.52467f, 193.7126f, 74.58458f);
	}
	Local_16.f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
	VOLUME::_0x39816F6F94F385AD(Local_16.f_239, -1105.991f, 63.23259f, 56.91f, 0f, 0f, 28.83601f, 7.558568f, 67.51287f, 22.0105f);
	VOLUME::_0x39816F6F94F385AD(Local_16.f_239, -1110.042f, 125.8571f, 56.91f, 0f, 0f, -15.164f, 7.558568f, 75.08723f, 22.0105f);
	iLocal_361[0] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_2__::func_610(), 0, 0, false, true);
	iLocal_361[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_292(), 0, 0, false, true);
	iLocal_361[2] = ANIMSCENE::_CREATE_ANIM_SCENE(func_293(), 0, 0, false, true);
	vVar2 = { func_167() };
	iLocal_282[8] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar2, 0f, 0f, 0f, 2f, 2f, 2f, "volHorseStayout");
	iVar5 = 0;
	while (iVar5 < 3)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_361[iVar5]);
		iVar5++;
	}
	func_294();
	__LIB_2__::func_147(&Local_16, 16777216);
	return true;
}

int func_92(int iParam0)
{
	if (Local_16.f_57[iParam0] == 0)
	{
		if (!__LIB_2__::func_15(Local_16.f_181, 1))
		{
			Local_16.f_57[iParam0] = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
		}
		else
		{
			Local_16.f_57[iParam0] = __LIB_2__::func_185(Local_16.f_181, 0, 1);
		}
	}
	return Local_16.f_57[iParam0];
}

int func_93(int iParam0)
{
	if (Local_16.f_75[iParam0] == 0)
	{
		if (Local_16.f_181 != -1 && Local_16.f_181 != 1)
		{
			Local_16.f_75[iParam0] = __LIB_2__::func_186(Local_16.f_181, iParam0, 0);
		}
		else
		{
			Local_16.f_75[iParam0] = __LIB_2__::func_16();
		}
		if (Local_16.f_75[iParam0] == joaat("META_HORSE_SADDLE_ONLY"))
		{
			Local_16.f_75[iParam0] = __LIB_2__::func_16();
		}
	}
	return Local_16.f_75[iParam0];
}

bool func_95()
{
	int iVar0;
	int iVar1;
	STREAMING::REQUEST_MODEL(func_304(0), false);
	STREAMING::REQUEST_ANIM_DICT(__LIB_2__::func_606());
	iVar0 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(func_304(0)))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_2__::func_606()))
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_361[iVar1], true, false))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_305(iVar0);
}

int func_97(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_304(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_307(iVar0);
}

float func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_308(iVar0);
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			if ((iParam0 % 2) == 0)
			{
				iParam1 = 1;
			}
			else
			{
				iParam1 = 2;
			}
			break;
	}
	switch (iParam1)
	{
		case 1:
			*uParam2 = { -0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, 50f, 90f };
			break;
		case 2:
			*uParam2 = { 0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, -50f, 90f };
			break;
	}
	*iParam4 = PED::GET_PED_BONE_INDEX(Local_16.f_40[iParam0], 62111);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_311(iVar0);
}

float func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_312(iVar0);
}

char* func_127(int iParam0)
{
	switch (iLocal_477)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "0355_G_M_M_UniDuster_01_WHITE_01";
				case 1:
					return "0355_G_M_M_UniDuster_01_WHITE_01";
				case 2:
					return "0357_G_M_M_UniDuster_02_WHITE_01";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "1018_G_M_M_UniDuster_01_IRISH_01";
				case 1:
					return "1018_G_M_M_UniDuster_01_IRISH_01";
				case 2:
					return "0360_G_M_M_UniDuster_03_IRISH_01";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "1060_G_M_M_UniCriminals_01_WHITE_07";
				case 1:
					return "1060_G_M_M_UniCriminals_01_WHITE_07";
				case 2:
					return "1058_G_M_M_UniCriminals_01_WHITE_05";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "1058_G_M_M_UniCriminals_01_WHITE_05";
				case 1:
					return "1058_G_M_M_UniCriminals_01_WHITE_05";
				case 2:
					return "1059_G_M_M_UniCriminals_01_WHITE_06";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_134(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = -1;
	iVar2 = 1;
	*uParam0 = 1;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		iVar0 = func_317(&(Local_16[iVar3]), &(Local_376[iVar3 /*21*/]), 30f, &Local_440, &iVar2, 2f, 1, 0, "", 524288 | __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (Local_376[iVar3 /*21*/].f_1 != -1)
		{
			if (!bLocal_475)
			{
				if (Local_376[iVar3 /*21*/].f_1 == 0)
				{
					if (!__LIB_2__::func_572(&(Local_440[0 /*17*/]), 0))
					{
						__LIB_4__::func_453(&(Local_440[0 /*17*/]), 1, 1);
					}
				}
				else if (Local_376[iVar3 /*21*/].f_1 == 1)
				{
					if (!__LIB_2__::func_572(&(Local_440[1 /*17*/]), 0))
					{
						__LIB_17__::func_832(&Local_440, 1, 1);
					}
					__LIB_2__::func_691(&uLocal_484, Local_16[2], 0, 30f);
				}
				func_162(0);
				__LIB_2__::func_504(Local_16[2], 500);
				bLocal_475 = true;
			}
		}
		if (iVar0 > -1)
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				bLocal_475 = false;
				switch (iVar1)
				{
					case 1:
						bLocal_475 = false;
						break;
					case 0:
						bLocal_475 = false;
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar1;
}

bool func_135()
{
	if (iLocal_277 >= 3 && !Local_319.f_4)
	{
		if (func_320(&Local_16))
		{
			return true;
		}
	}
	if (__LIB_0__::func_86(vLocal_292))
	{
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_292, Global_36, false) > 6f)
	{
		return true;
	}
	return false;
}

Vector3 func_137(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_321(0, 8);
			case 1:
				return func_321(0, 7);
			case 2:
				return func_321(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_321(1, 7);
			case 1:
				return func_321(1, 8);
			case 2:
				return func_321(1, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

bool func_139()
{
	int iVar0;
	if (!Local_319.f_4)
	{
		if (__LIB_0__::func_94(Global_35, func_116(0), 0) < 4f)
		{
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_16.f_215)
	{
		if (__LIB_2__::func_630(Local_16[iVar0], 0, &(Local_16.f_152), &(Local_16.f_180), 0, 0))
		{
			if (!__LIB_0__::func_51(&uLocal_279, 8388608))
			{
				if (Local_16.f_180 == 2)
				{
					__LIB_0__::func_7(&uLocal_279, 4194304);
					return false;
				}
				return false;
			}
			return true;
		}
		iVar0++;
	}
	if (__LIB_0__::func_51(&uLocal_279, 64))
	{
		return true;
	}
	return false;
}

void func_141()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	int iVar4;
	func_163();
	MAP::DISPLAY_RADAR(true);
	if (__LIB_0__::func_51(&uLocal_279, 128))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (__LIB_2__::func_1(Local_16[0], 0, 1))
		{
			switch (iLocal_477)
			{
				case 0:
					sVar3 = "AMBUSH_BRT_TRIGGER";
					break;
				case 1:
					sVar3 = "AMBUSH_BRT_V2_TRIGGER";
					break;
				case 2:
					sVar3 = "CALLOUT_JUST_KILL_EM_MALE";
					iVar4 = 2;
					break;
				case 3:
					sVar3 = "CALLOUT_JUST_KILL_EM_MALE";
					iVar4 = 2;
					break;
			}
			func_187(Local_16[0], Global_35, sVar3, 0, 70f, iVar4, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			bVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_16.f_215)
	{
		if (__LIB_2__::func_1(Local_16[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_16[iVar0], false, 0, false);
			PED::SET_PED_COMBAT_RANGE(Local_16[iVar0], 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_16[iVar0], 1);
			if (iVar0 == 0)
			{
				PED::SET_COMBAT_FLOAT(Local_16[iVar0], 32, 1f);
			}
			else if (iVar0 == 1)
			{
				PED::SET_COMBAT_FLOAT(Local_16[iVar0], 32, 1.5f);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
			__LIB_1__::func_474(Local_16[iVar0], &iVar1, 0f, 0.15f, 1, 1);
			if (!bVar2)
			{
				switch (iLocal_477)
				{
					case 0:
						sVar3 = "AMBUSH_BRT_ECOMBAT";
						break;
					case 1:
						sVar3 = "AMBUSH_BRT_V2_ECOMBAT";
						break;
					case 3:
						sVar3 = "CALLOUT_JUST_KILL_EM_MALE";
						iVar4 = 1;
						break;
					case 2:
						sVar3 = "CALLOUT_JUST_KILL_EM_MALE";
						break;
				}
				func_187(Local_16[iVar0], Global_35, sVar3, 0, 70f, iVar4, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bVar2 = true;
			}
			__LIB_2__::func_429(&Local_16, iVar0, 1);
			__LIB_2__::func_73(Local_16[iVar0], &(Local_16.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (Global_40.f_9632[Local_16.f_151 /*4*/].f_1 < Global_40.f_9632[Local_16.f_151 /*4*/])
	{
		__LIB_2__::func_224(Local_16.f_151, 1);
	}
}

void func_142()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_327(&(Local_16[iVar0]), &(Local_376[iVar0 /*21*/]), &Local_440, 1, 1);
		iVar0++;
	}
}

void func_143(int iParam0)
{
	iLocal_275 = iParam0;
}

void func_144()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	switch (iLocal_477)
	{
		case 0:
		case 1:
			return;
	}
	iVar0 = iLocal_281;
	switch (iLocal_281)
	{
		case 0:
			iLocal_281++;
			break;
		case 1:
			if (__LIB_2__::func_448(Local_16[1], joaat("AMBUSH_BRT_RFRONT"), "AMBUSH_BRT_RFRONT", __LIB_1__::func_976(), 1.3f, 1))
			{
				switch (iLocal_477)
				{
					case 2:
						sVar2 = "GANG_STOP_OR_WE_SHOOT";
						iVar1 = 2;
						break;
					case 3:
						sVar2 = "GANG_INTERACT_STOP_RIGHT_THERE";
						iVar1 = 1;
						break;
				}
				func_187(Local_16[0], Global_35, sVar2, "", -1f, iVar1, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				iLocal_281++;
			}
			break;
		case 2:
			if (__LIB_2__::func_448(Local_16[2], joaat("AMBUSH_BRT_HRBACK"), "AMBUSH_BRT_HRBACK", __LIB_1__::func_976(), 1.3f, 1))
			{
				switch (iLocal_477)
				{
					case 2:
						iVar1 = 1;
						break;
					case 3:
						iVar1 = 2;
						break;
				}
				func_187(Local_16[2], Global_35, "ACQUIRED_TARGET", "", -1f, iVar1, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_281++;
			}
			break;
		case 3:
			if (__LIB_2__::func_448(Local_16[2], joaat("AMBUSH_BRT_HRBACKB"), "AMBUSH_BRT_HRBACKB", __LIB_1__::func_976(), 1.3f, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_16[2], "script_proc@robberies@bridge@odriscoll@ambush_trap", "dia_01_peda", 1))
			{
				iLocal_281++;
			}
			break;
		case 4:
			if (func_173(0f, 1, Local_16[2], 1))
			{
				switch (iLocal_477)
				{
					case 3:
						sVar2 = "ORDER_DISMOUNT";
						iVar1 = 2;
						break;
					case 2:
						sVar2 = "ORDER_DISMOUNT_HORSE";
						iVar1 = 1;
						break;
				}
				func_187(Local_16[2], Global_35, sVar2, "", -1f, iVar1, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_281++;
			}
			break;
		case 5:
			if (__LIB_2__::func_448(Local_16[2], joaat("AMBUSH_BRT_HRBACK2"), "AMBUSH_BRT_HRBACK2", __LIB_1__::func_976(), 1.3f, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_16[2], "script_proc@robberies@bridge@odriscoll@ambush_trap", "dia_02_peda", 1))
			{
				iLocal_281++;
			}
			break;
		case 6:
			if (func_173(0f, 1, Local_16[2], 1))
			{
				func_187(Local_16[2], Global_35, "ORDER_DISMOUNT_HORSE_ESCALATED", "", -1f, 1, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_281++;
			}
			break;
	}
	if (iVar0 != iLocal_281)
	{
	}
}

void func_146(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, float fParam6)
{
	struct<23> Var0;
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
	Var0 = { fParam4, fParam5, fParam6 };
	Var0.f_4 = iParam3;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

bool func_148()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	char* sVar5;
	vVar0 = { __LIB_2__::func_114(Global_35, 1.75f) };
	if (!__LIB_1__::func_205(Global_35, iLocal_282[3], 1, 0))
	{
		return false;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(Global_35);
	if (fVar3 < 7f)
	{
		sVar5 = "Slow";
		iVar4 = iLocal_282[2];
	}
	else if (fVar3 < 11f)
	{
		sVar5 = "Medium";
		iVar4 = iLocal_282[1];
	}
	else
	{
		sVar5 = "Fast";
		iVar4 = iLocal_282[0];
	}
	if (__LIB_1__::func_205(Global_35, iVar4, 1, 0) || __LIB_2__::func_157(iVar4, vVar0))
	{
		return true;
	}
	return false;
}

void func_149()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_16[iVar0], 0, 1))
		{
			if (iVar0 != 2)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_16[iVar0], false, 0, false);
				__LIB_2__::func_429(&Local_16, iVar0, 1);
			}
		}
		iVar0++;
	}
	__LIB_0__::func_7(&uLocal_279, 8388608);
	if (!__LIB_0__::func_139(iLocal_15))
	{
		iLocal_15 = __LIB_2__::func_512("LEAVE", joaat("INPUT_CONTEXT_A"), Global_35, 1, 0, 0, 0, 7, 1070386381 /* Float: 1.6f */, 570, 4000, 4, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_1__::func_382(iLocal_15, 0, 1);
	}
	vVar1 = { func_335() };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_336(), vVar1.z, -0.1f, 0f, 0f) };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_361[0], vVar4, func_335(), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_361[0], "PEDB", Local_16[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_361[0], "PEDC", Local_16[1], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_361[0]);
	switch (iLocal_477)
	{
		case 2:
		case 3:
			break;
	}
	__LIB_1__::func_397(&(Local_367.f_3), 1);
	__LIB_0__::func_7(&(Local_367.f_3), 128);
	__LIB_2__::func_619(&(Local_367.f_3), 1);
	func_156();
	__LIB_2__::func_442(&Local_16, 1);
	__LIB_2__::func_500(&Local_16, 1);
}

bool func_151()
{
	if (!__LIB_1__::func_205(Global_35, iLocal_282[3], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_282[6], 1, 0))
		{
			__LIB_0__::func_11(&Local_16, 7);
			return true;
		}
	}
	if (func_342(&Local_16))
	{
		return true;
	}
	if (__LIB_0__::func_51(&uLocal_279, 4194304))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_16.f_40[iLocal_476], Global_35, 1, 1))
	{
		return true;
	}
	iLocal_476++;
	if (iLocal_476 == 3)
	{
		iLocal_476 = 0;
	}
	return false;
}

void func_153()
{
	if (!__LIB_2__::func_4(&Local_16, 4096))
	{
		__LIB_1__::func_221(iLocal_15, 0, 1);
		return;
	}
	if (__LIB_0__::func_51(&uLocal_279, 32768))
	{
		__LIB_1__::func_221(iLocal_15, 0, 1);
		return;
	}
	if (__LIB_4__::func_863(iLocal_15, 1))
	{
		__LIB_1__::func_221(iLocal_15, 1, 1);
		__LIB_1__::func_382(iLocal_15, 0, 1);
	}
	if (__LIB_0__::func_567(iLocal_15, 1))
	{
		__LIB_0__::func_7(&uLocal_279, 32768);
		__LIB_1__::func_281(&iLocal_15, 1, 1);
		func_143(9);
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		func_200(2, "HORSE", Local_16.f_56);
		func_163();
		MAP::DISPLAY_RADAR(true);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

void func_154()
{
	int iVar0;
	var uVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_0__::func_51(&uLocal_279, 32768))
	{
		return;
	}
	if (!__LIB_2__::func_1(Global_35, 0, 1))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (__LIB_2__::func_4(&Local_16, 4096))
	{
		if (__LIB_2__::func_1(iVar0, 0, 1))
		{
			PED::SET_PED_MOVE_RATE_OVERRIDE(iVar0, 0f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 0f);
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		func_346();
		return;
	}
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_361[0], false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_361[0]) > 0.4f)
		{
			if (func_347())
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			}
			else if (func_348())
			{
				if (!__LIB_0__::func_51(&uLocal_279, 16))
				{
					__LIB_0__::func_7(&uLocal_279, 16);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
			}
			else if (func_349() || __LIB_1__::func_205(Global_35, iLocal_282[0], 1, 0))
			{
				if (!__LIB_0__::func_51(&uLocal_279, 16))
				{
					__LIB_0__::func_7(&uLocal_279, 16);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
			}
		}
		if (__LIB_1__::func_205(Global_35, iLocal_282[0], 1, 0))
		{
			if (!__LIB_0__::func_51(&uLocal_279, 16))
			{
				__LIB_0__::func_7(&uLocal_279, 16);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if (!__LIB_0__::func_51(&uLocal_279, 2048))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_282[3], 1, 0))
			{
				if (fLocal_365 < 0f)
				{
					fLocal_365 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_167(), false);
				}
				__LIB_2__::func_282(&Local_16, 0);
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				iVar3 = PED::_GET_LAST_MOUNT(Global_35);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::_0xF60165E1D2C5370B(iVar3, &uVar1, &fVar2);
				}
				else
				{
					PED::_0xF60165E1D2C5370B(Global_35, &uVar1, &fVar2);
				}
				PED::_0x2EB75FB86C41F026(iVar3, 3, 0);
				MAP::DISPLAY_RADAR(false);
				__LIB_1__::func_581(&uLocal_280, 512);
				if (fVar2 < 1f)
				{
					fVar2 = 1f;
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_167(), (1.1f * fVar2), 20000, func_351(), 0.25f, 0);
				__LIB_1__::func_474(Global_35, &iVar4, 0, 0, 1, 1);
				func_352();
				__LIB_0__::func_7(&uLocal_279, 2048);
			}
		}
	}
	if (!__LIB_2__::func_4(&Local_16, 4096))
	{
		if (func_353() || __LIB_2__::func_4(&Local_16, 8))
		{
			if (!__LIB_2__::func_4(&Local_16, 8))
			{
				__LIB_2__::func_147(&Local_16, 8);
			}
			if ((__LIB_0__::func_51(&uLocal_279, 2048) && __LIB_2__::func_1(iVar0, 0, 1)) && ENTITY::GET_ENTITY_SPEED(iVar0) < 0.1f)
			{
				MAP::DISPLAY_RADAR(true);
				iVar5 = PED::_GET_LAST_MOUNT(Global_35);
				if (__LIB_2__::func_1(iVar5, 0, 1))
				{
					PED::FORCE_PED_MOTION_STATE(iVar5, joaat("MOTIONSTATE_IDLE"), true, 0, false);
				}
				__LIB_2__::func_147(&Local_16, 4096);
			}
		}
	}
}

void func_155()
{
	if (!__LIB_0__::func_51(&uLocal_279, 32))
	{
		if (__LIB_2__::func_1(Local_16[2], 0, 1))
		{
			if (__LIB_0__::func_51(&uLocal_279, 16))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_16[2], 5000, 48, 31, 0);
				__LIB_0__::func_7(&uLocal_279, 32);
			}
		}
		else
		{
			__LIB_0__::func_7(&uLocal_279, 32);
		}
	}
}

void func_156()
{
	vector3 vVar0;
	vector3 vVar3;
	if (!bLocal_478)
	{
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
		PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (__LIB_0__::func_51(&uLocal_279, 268435456))
	{
		return;
	}
	vVar0 = { func_354() };
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0))
	{
		if (!bLocal_478)
		{
			if (__LIB_0__::func_86(vLocal_486))
			{
				vLocal_486 = { __LIB_2__::func_621() };
			}
			func_356(vLocal_486, vVar0, &uLocal_489, 1000, 0);
		}
	}
	else
	{
		func_357(vVar0, &Local_367, vVar3, 1106247680 /* Float: 30f */, 40f, 4000, 4000, 1000, 1);
	}
}

bool func_157()
{
	int iVar0;
	if (iLocal_277 > 2)
	{
		func_358();
	}
	switch (iLocal_277)
	{
		case 0:
			iLocal_277 = 1;
			break;
		case 1:
			if (func_359())
			{
				if (func_360())
				{
					iLocal_277 = 2;
				}
			}
			break;
		case 2:
			if (((ENTITY::IS_ENTITY_ON_SCREEN(Local_16[2]) || PED::_0xA0BC8FAED8CFEB3C(Local_16[2])) || WEAPON::_0xFF07CF465F48B830(__LIB_3__::func_619(Local_16[2], 0, 0))) || ENTITY::IS_ENTITY_ON_SCREEN(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_16[2], 0)))
			{
				__LIB_8__::func_901(&uLocal_316, 0);
				if (__LIB_11__::func_410(&uLocal_316, 0.02f))
				{
					if (!__LIB_0__::func_51(&uLocal_279, 16777216))
					{
						__LIB_0__::func_7(&uLocal_279, 268435456);
						func_163();
						func_164(&Local_367);
						__LIB_1__::func_397(&(Local_367.f_3), 0);
						__LIB_2__::func_619(&(Local_367.f_3), 0);
						__LIB_0__::func_8(&(Local_367.f_3), 128);
						__LIB_0__::func_7(&uLocal_279, 16777216);
					}
					if (__LIB_11__::func_410(&uLocal_316, 1.5f))
					{
						func_358();
					}
				}
			}
			if (__LIB_2__::func_598(Local_16[2], iLocal_361[1], "PEDA", 0, 0, 1, 0))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_361[1], false))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_361[1], "PEDA", Local_16[2]);
				}
				TASK::TASK_PLAY_ANIM(Local_16[2], __LIB_2__::func_606(), __LIB_2__::func_607(0), 16f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				PED::SET_PED_USING_ACTION_MODE(Local_16[2], true, -1, 0);
				__LIB_2__::func_356(Global_35, Local_16[2], 2, 1, 10000, 0);
				__LIB_0__::func_7(&uLocal_279, 16384);
				iLocal_277 = 3;
			}
			break;
		case 3:
			if (__LIB_2__::func_123(Local_16[2], Global_35, 0.5f))
			{
				__LIB_5__::func_107(&uLocal_307);
				__LIB_2__::func_73(Local_16[2], &(Local_16.f_22[2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, __LIB_2__::func_606(), __LIB_2__::func_607(4), 8f, -8f, -1, 0, 0f, true, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, __LIB_2__::func_606(), __LIB_2__::func_607(0), 8f, -8f, -1, 1, 0f, true, 0, false, 0, false);
				__LIB_1__::func_474(Local_16[2], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_USING_ACTION_MODE(Local_16[2], true, -1, 0);
				func_162(1);
				iLocal_277 = 6;
			}
			break;
		case 5:
			if (__LIB_11__::func_410(&uLocal_307, 1.5f))
			{
				__LIB_0__::func_7(&uLocal_279, 64);
				iLocal_277 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_161(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 0;
	if (!__LIB_0__::func_181())
	{
		if (!bParam0)
		{
			switch (iLocal_477)
			{
				case 0:
					sVar0 = "AMBUSH_BRT_ILO_POS";
					sVar1 = "AMBUSH_BRT_ILO_NEG";
					break;
				case 1:
					sVar0 = "AMBUSH_BRT_V2_ILO_POS";
					if (__LIB_2__::func_155(0, 1))
					{
						sVar1 = "AMBUSH_BRT_V2_ILO_NEG";
					}
					else
					{
						sVar1 = "AMBUSH_BRT_V2_ILO_NEG_ALT";
					}
					break;
				case 2:
					sVar0 = "AMBUSH_BRT_ILO_POS";
					sVar1 = "AMBUSH_BRT_ILO_NEG";
					break;
				case 3:
					sVar0 = "AMBUSH_BRT_V2_ILO_POS";
					sVar1 = "AMBUSH_BRT_V2_ILO_NEG_ALT";
					break;
			}
		}
		else
		{
			switch (iLocal_477)
			{
				case 0:
					sVar0 = "";
					sVar1 = "INSULT_SHOUT_AFTER_MALE_CONV_PART1";
					iVar2 = 4;
					break;
				case 1:
					sVar0 = "";
					sVar1 = "INSULT_SHOUT_AFTER_MALE_CONV_PART1";
					iVar2 = 5;
					break;
				case 2:
					sVar0 = "";
					sVar1 = "INSULT_SHOUT_AFTER_MALE_CONV_PART1";
					iVar2 = 4;
					break;
				case 3:
					sVar0 = "";
					sVar1 = "INSULT_SHOUT_AFTER_MALE_CONV_PART1";
					iVar2 = 5;
					break;
			}
		}
	}
	else if (!bParam0)
	{
		switch (iLocal_477)
		{
			case 2:
				sVar0 = "AMBUSH_BRT_ILO_POS";
				sVar1 = "AMBUSH_BRT_ILO_NEG";
				break;
			case 3:
				sVar0 = "AMBUSH_BRT_V2_ILO_POS";
				sVar1 = "AMBUSH_BRT_V2_ILO_NEG";
				break;
		}
	}
	else
	{
		switch (iLocal_477)
		{
			case 2:
				sVar0 = "";
				sVar1 = "INSULT_SHOUT_AFTER_MALE_CONV_PART1";
				iVar2 = 1;
				break;
			case 3:
				sVar0 = "";
				sVar1 = "INSULT_SHOUT_AFTER_MALE_CONV_PART1";
				iVar2 = 2;
				break;
		}
	}
	__LIB_2__::func_602(&(Local_440[0 /*17*/]), "INTERACT_DEFUSE", sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, iVar2);
	__LIB_2__::func_602(&(Local_440[1 /*17*/]), "INTERACT_INSULT", sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, iVar2);
	if (__LIB_0__::func_181())
	{
		__LIB_4__::func_453(&(Local_440[0 /*17*/]), 1, 1);
	}
}

void func_162(bool bParam0)
{
	if (bParam0)
	{
		if (!__LIB_1__::func_489(&(Local_440[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_440[0 /*17*/]), 13))
		{
			__LIB_3__::func_515(&(Local_440[0 /*17*/]), 1, 0);
		}
		if (!__LIB_1__::func_489(&(Local_440[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_440[1 /*17*/]), 13))
		{
			__LIB_3__::func_515(&(Local_440[1 /*17*/]), 1, 0);
		}
	}
	else
	{
		if (__LIB_1__::func_489(&(Local_440[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_440[0 /*17*/]), 13))
		{
			__LIB_3__::func_515(&(Local_440[0 /*17*/]), 0, 0);
		}
		if (__LIB_1__::func_489(&(Local_440[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_440[1 /*17*/]), 13))
		{
			__LIB_3__::func_515(&(Local_440[1 /*17*/]), 0, 0);
		}
	}
}

void func_163()
{
	bLocal_478 = true;
	__LIB_1__::func_539();
}

void func_164(var uParam0)
{
	__LIB_2__::func_608(uParam0);
	__LIB_0__::func_8(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
}

Vector3 func_167()
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		return func_321(0, 13);
	}
	else
	{
		return func_321(1, 13);
	}
	return 0f, 0f, 0f;
}

void func_168()
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_2__::func_1(Local_16[0], 0, 0))
	{
		vVar1 = { func_137(0) };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 2f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
		__LIB_1__::func_474(Local_16[0], &iVar0, 4f, 0, 1, 1);
	}
	if (__LIB_2__::func_1(Local_16[1], 0, 0))
	{
		vVar1 = { func_137(1) };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 10, true, 1);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 2f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
		__LIB_1__::func_474(Local_16[1], &iVar0, 0, 0, 1, 1);
		PED::SET_PED_CONFIG_FLAG(Local_16[1], 268, true);
	}
}

bool func_169(int iParam0)
{
	return __LIB_2__::func_4(iParam0, 64);
}

void func_170()
{
	int iVar0;
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ENTER"))) || __LIB_0__::func_51(&uLocal_279, 1048576))
	{
		if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			__LIB_0__::func_7(&uLocal_279, 1048576);
			__LIB_0__::func_7(&uLocal_279, 65536);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, __LIB_2__::func_606(), __LIB_2__::func_607(7), 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
			__LIB_1__::func_474(Local_16[2], &iVar0, 0, 0, 1, 1);
			vLocal_292 = { Global_36 };
		}
	}
}

void func_172()
{
	char* sVar0;
	float fVar1;
	__LIB_2__::func_714(&uLocal_484, 30f);
	switch (iLocal_278)
	{
		case 0:
			if (!func_173(0f, 1, Local_16[2], 1))
			{
				__LIB_2__::func_691(&uLocal_484, Local_16[2], 1, 30f);
				PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
				sVar0 = func_372();
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), sVar0);
				}
				__LIB_11__::func_246(1);
			}
			break;
		case 1:
			if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()) || !__LIB_0__::func_396(Global_35))
			{
				__LIB_2__::func_503(&Local_16, 0);
				__LIB_2__::func_691(&uLocal_484, Local_16[2], 0, 30f);
				if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
				{
					sVar0 = func_372();
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
					{
						func_187(Global_35, Local_16[2], sVar0, 0, 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_2__::func_504(Local_16[2], 250);
				fVar1 = __LIB_5__::func_53(&uLocal_295);
				if (fVar1 < 5f)
				{
					fVar1 = 5f;
				}
				__LIB_2__::func_620(&uLocal_295, (fVar1 - 5f));
				__LIB_11__::func_246(2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_396(Global_35))
			{
				__LIB_2__::func_45(Global_35, Local_16[2], 2000);
				__LIB_8__::func_901(&uLocal_310, 0);
				__LIB_11__::func_246(3);
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

bool func_173(float fParam0, int iParam1, int iParam2, bool bParam3)
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
	if (func_378(fParam0))
	{
		return false;
	}
	return true;
}

bool func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_341(&(Local_376[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_178()
{
	if (__LIB_2__::func_1(Local_16[2], 0, 1))
	{
		if (__LIB_2__::func_1(Local_16.f_56, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(Local_16.f_56, 277, true);
		}
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_16[2], true, 15f);
	}
}

bool func_184()
{
	if (__LIB_0__::func_71(Global_35))
	{
		if (__LIB_11__::func_410(&uLocal_295, 5f))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_185()
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		return func_321(0, 20);
	}
	else
	{
		return func_321(1, 20);
	}
	return 0f, 0f, 0f;
}

bool func_187(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return __LIB_18__::func_380(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_189()
{
	switch (iLocal_490)
	{
		case 0:
			iLocal_490 = 1;
			break;
		case 1:
			iLocal_490 = 2;
			break;
		case 2:
			if (__LIB_11__::func_410(&uLocal_310, 3f))
			{
				if (func_385(Local_16[2], &Local_319, 0.25f, 0, -2.5f, 2, 0, 0, 0, -1, 0, 1))
				{
					iLocal_490 = 4;
					return true;
				}
			}
			break;
		case 3:
			break;
		case 4:
			return true;
	}
	return false;
}

char* func_191()
{
	return "script_re@mech_patdown";
}

char* func_192()
{
	return "loot_pistol_whip_fall_player";
}

void func_193()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (!__LIB_0__::func_51(&uLocal_279, 33554432))
	{
		if (!__LIB_2__::func_618(&uLocal_295))
		{
			__LIB_5__::func_107(&uLocal_295);
		}
		switch (iLocal_477)
		{
			case 0:
				sVar2 = "AMBUSH_BRT_HITLINE";
				break;
			case 1:
				sVar2 = "AMBUSH_BRT_V2_HITLINE";
				break;
			case 3:
				sVar2 = "CALLOUT_FOLLOW_ROB_FLEE_MALE";
				iVar3 = 2;
				break;
			case 2:
				sVar2 = "CALLOUT_FOLLOW_ROB_FLEE_MALE";
				break;
		}
		if (func_187(Local_16[2], Global_35, sVar2, 0, 15f, iVar3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
		{
			__LIB_0__::func_7(&uLocal_279, 33554432);
		}
	}
	else if (__LIB_11__::func_410(&uLocal_295, 3.5f))
	{
		vVar5 = { func_387() };
		iVar0 = 0;
		while (iVar0 < 3)
		{
			switch (iVar0)
			{
				case 2:
					fVar4 = 0f;
					break;
				case 1:
					fVar4 = 0.35f;
					break;
				case 0:
					fVar4 = 0.75f;
					break;
			}
			vVar8 = { func_388(iVar0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (iVar0 == 2)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar8, 3f, 20000, 6f, 5244997, 40000f);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar8, 3f, 20000, 6f, 1, 40000f);
			}
			TASK::TASK_MOUNT_ANIMAL(0, Local_16.f_40[iVar0], 20000, -1, 3f, 1, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar5, 5f, 2f, 0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(0, Global_35, 4, vVar5, 29440, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(Local_16[iVar0], &iVar1, fVar4, 0, 1, 1);
			__LIB_1__::func_733(Local_16[iVar0]);
			PED::SET_PED_KEEP_TASK(Local_16[iVar0], true);
			iVar0++;
		}
		__LIB_0__::func_7(&uLocal_279, 8192);
	}
}

void func_196()
{
	char* sVar0;
	if (!__LIB_0__::func_51(&uLocal_279, 134217728))
	{
		if (!PED::IS_PED_RAGDOLL(Global_35) && !TASK::IS_PED_GETTING_UP(Global_35))
		{
			if (func_173(0f, 1, Global_35, 1))
			{
				if (!__LIB_0__::func_181())
				{
					switch (iLocal_477)
					{
						case 0:
							if (__LIB_2__::func_155(0, 1))
							{
								sVar0 = "AMBUSH_BRT_ROBOVER_KNOWN";
							}
							else
							{
								sVar0 = "AMBUSH_BRT_ROBOVER";
							}
							break;
						case 1:
							if (__LIB_2__::func_155(0, 1))
							{
								sVar0 = "AMBUSH_BRT_V2_ROBOVER_KNOWN";
							}
							else
							{
								sVar0 = "AMBUSH_BRT_V2_ROBOVER";
							}
							break;
						case 2:
							sVar0 = "AMBUSH_BRT_ROBOVER";
							break;
						case 3:
							sVar0 = "AMBUSH_BRT_V2_ROBOVER";
							break;
					}
				}
				else
				{
					switch (iLocal_477)
					{
						case 2:
							sVar0 = "AMBUSH_BRT_ROBOVER";
							break;
						case 3:
							sVar0 = "AMBUSH_BRT_V2_ROBOVER";
							break;
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					func_187(Global_35, Global_35, sVar0, "", -1f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_0__::func_7(&uLocal_279, 134217728);
			}
		}
	}
}

void func_197()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(Local_16[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(Local_16.f_22[iVar0]) && PED::IS_PED_ON_MOUNT(Local_16[iVar0]))
			{
				MAP::REMOVE_BLIP(&(Local_16.f_22[iVar0]));
			}
		}
		iVar0++;
	}
}

bool func_198(int iParam0)
{
	float fVar0;
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return false;
	}
	if (!__LIB_1__::func_205(Global_35, iLocal_282[3], 1, 0) && __LIB_0__::func_636(Global_36, Local_16.f_209) > 28f)
	{
		fVar0 = __LIB_2__::func_625(&Local_16, 0, 2);
		func_393(&(Local_16.f_152), &Local_16, 4f, 0, 2);
		if (fVar0 < 12f)
		{
			if (Local_16.f_152.f_1 & 131072 != 0)
			{
				__LIB_0__::func_516(&(Local_16.f_152.f_1), 131072);
			}
		}
		else if (!Local_16.f_152.f_1 & 131072 != 0)
		{
			__LIB_1__::func_336(&(Local_16.f_152.f_1), 131072);
		}
		if (fVar0 < 15f)
		{
			return true;
		}
		if (__LIB_7__::func_918(&Local_16, &(Local_16.f_152), &(Local_16.f_180), 0, -1))
		{
			return true;
		}
	}
	if (iParam0 == 1)
	{
		return true;
	}
	return false;
}

void func_199()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	char* sVar6;
	int iVar7;
	__LIB_2__::func_145(Local_16.f_56, 0);
	func_163();
	MAP::DISPLAY_RADAR(true);
	PED::_0x2EB75FB86C41F026(Local_16.f_56, 3, 1);
	PED::_0x58F7DB5BD8FA2288(Local_16.f_56);
	TASK::CLEAR_PED_SECONDARY_TASK(Local_16.f_56);
	iVar0 = 0;
	while (iVar0 < Local_16.f_215)
	{
		if (__LIB_2__::func_1(Local_16[iVar0], 0, 1))
		{
			if (!bVar5)
			{
				switch (iLocal_477)
				{
					case 0:
						sVar6 = "AMBUSH_BRT_TRIGGER";
						break;
					case 1:
						sVar6 = "AMBUSH_BRT_V2_TRIGGER";
						break;
					case 2:
						sVar6 = "CALLOUT_JUST_KILL_EM_MALE";
						iVar7 = 2;
						break;
					case 3:
						sVar6 = "CALLOUT_JUST_KILL_EM_MALE";
						iVar7 = 2;
						break;
				}
				func_187(Local_16[iVar0], Global_35, sVar6, 0, 70f, iVar7, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				bVar5 = true;
			}
			if (!Local_319.f_4 && !__LIB_0__::func_51(&uLocal_279, 32768))
			{
				vVar2 = { func_395(iVar0) };
				if (!__LIB_0__::func_86(vVar2))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_16[iVar0], vVar2, 3f, 0, 0, 0);
				}
			}
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_16[iVar0], 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (iVar0 == 0)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 3000, false, 1);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
			if (Local_319.f_4)
			{
				__LIB_1__::func_474(Local_16[iVar0], &iVar1, (IntToFloat(iVar0) * 1f), 0, 1, 1);
			}
			else
			{
				__LIB_1__::func_474(Local_16[iVar0], &iVar1, (IntToFloat(iVar0) * 1f), (IntToFloat(iVar0) * 1f), 1, 1);
			}
			if (!MAP::DOES_BLIP_EXIST(Local_16.f_22[iVar0]))
			{
				__LIB_2__::func_73(Local_16[iVar0], &(Local_16.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_200(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	sVar0 = func_396(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_361[iParam0]))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_361[iParam0], sParam1, iParam2);
}

int func_213()
{
	return func_413(&Local_16, &iLocal_356, &(Local_16.f_241), func_412(), 4f);
}

void func_214(int iParam0)
{
	if (iParam0->f_35)
	{
		return;
	}
	if (!iParam0->f_8)
	{
		return;
	}
	if (iParam0->f_14 && !iParam0->f_13)
	{
		if (__LIB_0__::func_154(Global_1935630.f_44) || iParam0->f_6)
		{
			if (__LIB_0__::func_139(iParam0->f_36))
			{
				__LIB_1__::func_281(&(iParam0->f_36), 1, 1);
				iParam0->f_13 = 1;
			}
		}
	}
	if (!__LIB_2__::func_618(&(iParam0->f_29)))
	{
		if (__LIB_2__::func_342(iParam0->f_28))
		{
			__LIB_8__::func_901(&(iParam0->f_29), 0);
		}
	}
	else if (iParam0->f_6 && !iParam0->f_1)
	{
		if (__LIB_11__::func_410(&(iParam0->f_29), 3f) && __LIB_2__::func_342(iParam0->f_28))
		{
			__LIB_0__::func_105(1);
			iParam0->f_35 = 1;
			if (!__LIB_11__::func_410(&(iParam0->f_29), 6f) && !iParam0->f_4)
			{
				__LIB_2__::func_355(609);
			}
		}
	}
}

void func_215()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_16.f_215)
	{
		if (func_418(iVar0))
		{
			PED::SET_PED_RESET_FLAG(Local_16[iVar0], 27, true);
		}
		iVar0++;
	}
}

void func_216(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (iVar0 < *uParam1)
		{
			if (!iParam0->f_228[iVar0])
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
				{
					if (__LIB_2__::func_398((*iParam0)[iVar0]))
					{
						func_327(iParam0[iVar0], uParam1[iVar0 /*21*/], uParam2, 1, 1);
						iParam0->f_228[iVar0] = 1;
					}
				}
				else
				{
					iParam0->f_228[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_218()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_16)
	{
		if (__LIB_2__::func_1(Local_16[iVar0], 0, 0))
		{
			if (!__LIB_2__::func_159(&Local_16, iVar0))
			{
				__LIB_2__::func_429(&Local_16, iVar0, 1);
			}
		}
		iVar0++;
	}
}

void func_219()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (!__LIB_1__::func_205(Global_35, iLocal_282[3], 1, 0))
	{
		__LIB_0__::func_7(&uLocal_279, 256);
	}
	if (__LIB_2__::func_1(Local_16[0], 0, 0))
	{
		PED::_0x78815FC52832B690(Local_16[0], 1);
		vVar0 = { func_395(0) };
		fVar3 = func_421(0);
		iLocal_357[0] = TASK::ADD_COVER_POINT(vVar0, fVar3, 1, 1, 5, false);
		if (!__LIB_0__::func_51(&uLocal_279, 128) && !__LIB_0__::func_51(&uLocal_279, 256))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_16[0], vVar0, 1.25f, 1, 0, 0);
		}
		PED::SET_COMBAT_FLOAT(Local_16[0], 32, 2f);
	}
	if (__LIB_2__::func_1(Local_16[1], 0, 0))
	{
		PED::_0x78815FC52832B690(Local_16[1], 1);
		vVar0 = { func_395(1) };
		fVar3 = func_421(1);
		iLocal_357[1] = TASK::ADD_COVER_POINT(vVar0, fVar3, 0, 1, 4, false);
		PED::_0xFC3DB99C8144CD81(Local_16[1], iLocal_282[1], 0, 0, 0);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_16[1], 1);
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
		__LIB_1__::func_474(Local_16[1], &iVar4, 1.5f, 0, 1, 1);
	}
	if (__LIB_2__::func_1(Local_16[2], 0, 0))
	{
		PED::_0x78815FC52832B690(Local_16[2], 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_16[2], 1);
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
		__LIB_1__::func_474(Local_16[2], &iVar4, 0.5f, 0, 1, 1);
	}
}

void func_220()
{
	if (__LIB_11__::func_410(&uLocal_295, 1.5f))
	{
		if (__LIB_2__::func_1(Local_16[2], 0, 1))
		{
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_16[2], false, 15f);
		}
	}
}

bool func_221()
{
	int iVar0;
	if (!__LIB_1__::func_205(Global_35, iLocal_282[3], 1, 0))
	{
		return true;
	}
	if (__LIB_11__::func_410(&uLocal_295, 5f))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (__LIB_2__::func_1(Local_16[iVar0], 0, 0))
			{
				if (__LIB_0__::func_94(Local_16[iVar0], Global_36, 0) < 5f || __LIB_0__::func_94(Local_16[iVar0], Global_36, 0) > 23f)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_222()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_16.f_215)
	{
		if (__LIB_2__::func_1(Local_16[iVar0], 0, 0))
		{
			__LIB_1__::func_733(Local_16[iVar0]);
			PED::SET_PED_COMBAT_MOVEMENT(Local_16[iVar0], 2);
			PED::SET_PED_COMBAT_RANGE(Local_16[iVar0], 0);
		}
		iVar0++;
	}
}

bool func_223(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5)
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
		__LIB_8__::func_901(&(iParam0->f_1), 0);
		__LIB_1__::func_683(iParam0, 1);
	}
	if (__LIB_0__::func_27(*iParam0, 1))
	{
		if (__LIB_11__::func_410(&(iParam0->f_1), (fParam4 + 4f)))
		{
			__LIB_1__::func_683(iParam0, 4);
			return false;
		}
		if (!__LIB_11__::func_410(&(iParam0->f_1), fParam4))
		{
			return false;
		}
		if (!func_173(0f, 1, Global_35, 1))
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

void func_224()
{
	char* sVar0;
	int iVar1;
	if (!__LIB_0__::func_181())
	{
		switch (iLocal_477)
		{
			case 0:
				if (__LIB_2__::func_155(0, 1))
				{
					sVar0 = "AMBUSH_BRT_COMBATOVER_KNOWN";
				}
				else
				{
					sVar0 = "AMBUSH_BRT_COMBATOVER";
				}
				break;
			case 1:
				if (__LIB_2__::func_155(0, 1))
				{
					sVar0 = "AMBUSH_BRT_V2_COMBATOVER_KNOWN";
				}
				else
				{
					sVar0 = "AMBUSH_BRT_V2_COMBATOVER";
				}
				break;
			case 2:
			case 3:
				iVar1 = __LIB_2__::func_637(&uLocal_479, Local_16.f_225, Local_16.f_226);
				sVar0 = __LIB_2__::func_638(&uLocal_479, Local_16.f_181, 0, iVar1);
				break;
		}
	}
	else
	{
		switch (iLocal_477)
		{
			case 2:
				sVar0 = "AMBUSH_BRT_COMBATOVER";
				break;
			case 3:
				sVar0 = "AMBUSH_BRT_COMBATOVER";
				break;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_187(Global_35, Global_35, sVar0, "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
	}
}

bool func_238(int iParam0)
{
	float fVar0;
	if (__LIB_2__::func_26(&Local_16, iParam0, 32))
	{
		if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_16.f_40[iParam0], false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_16.f_40[iParam0], true), 0, 1))
	{
		return false;
	}
	if (Local_16.f_216 == Local_16.f_215)
	{
		if (!__LIB_2__::func_1(Local_16[iParam0], 0, 1))
		{
			return true;
		}
	}
	if (!__LIB_2__::func_26(&Local_16, iParam0, 64))
	{
		fVar0 = __LIB_5__::func_51(&(Local_16.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_245(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (*uParam0 == (*iParam1)[iVar0])
			{
				__LIB_2__::func_691(uParam0, (*iParam1)[iVar0], 0, 30f);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

bool func_246(int iParam0)
{
	if (__LIB_2__::func_25(&Local_16, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_25(&Local_16, iParam0, 128))
	{
		return false;
	}
	if (__LIB_2__::func_25(&Local_16, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_64(&Local_16, Local_16[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_25(&Local_16, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_249(int iParam0)
{
	switch (Local_16.f_151)
	{
		case 24:
		case 26:
		case 27:
			return true;
	}
	return false;
}

bool func_250(int iParam0, int iParam1)
{
	if (__LIB_2__::func_26(&Local_16, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_26(&Local_16, iParam0, 4))
	{
		return true;
	}
	if (__LIB_1__::func_248(Local_16.f_40[iParam0], iParam1))
	{
		return true;
	}
	if (__LIB_2__::func_64(&Local_16, Local_16.f_40[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_26(&Local_16, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_251(int iParam0)
{
	float fVar0;
	if (__LIB_2__::func_117(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (__LIB_2__::func_269(Local_16.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_16.f_84[iParam0], Global_36, 1) < 10f)
	{
		return false;
	}
	return true;
}

bool func_252(int iParam0)
{
	if (__LIB_2__::func_39(&Local_16, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_16.f_49[iParam0], true))
	{
		return false;
	}
	if (__LIB_2__::func_39(&Local_16, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_193(&Local_16, Local_16.f_49[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_39(&Local_16, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_273()
{
	if (Local_16.f_151 != 11)
	{
		return true;
	}
	if (Local_16.f_221 == 2)
	{
		return false;
	}
	return true;
}

bool func_290()
{
	switch (Local_16.f_151)
	{
		case 35:
			return true;
		default:
			break;
	}
	return false;
}

char* func_292()
{
	return "script@proc@bridgerobberies@bridgetrapgrabhorse";
}

char* func_293()
{
	return "script@proc@bridgerobberies@bridgetraphorseidle";
}

void func_294()
{
	Local_319 = 0;
	switch (iLocal_477)
	{
		case 0:
			Local_319.f_17 = "AMBUSH_BRT_ROBMONEY";
			break;
		case 1:
			Local_319.f_17 = "AMBUSH_BRT_V2_ROBMONEY";
			break;
		case 3:
			Local_319.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
			Local_319.f_22 = 2;
			break;
		case 2:
			Local_319.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
			break;
	}
}

int func_304(int iParam0)
{
	switch (iLocal_477)
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					return joaat("G_M_M_UNIDUSTER_03");
				default:
					break;
			}
			break;
	}
	return joaat("G_M_M_UNICRIMINALS_01");
}

int func_305(int iParam0)
{
	switch (iLocal_477)
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1356952956;
				case 1:
					return -510627993;
				case 2:
					return -794178150;
				default:
					break;
			}
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_307(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_321(0, 17);
			case 1:
				return func_321(0, 18);
			case 2:
				return func_321(0, 19);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_321(1, 17);
			case 1:
				return func_321(1, 18);
			case 2:
				return func_321(1, 19);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_308(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_478(0, 17);
			case 1:
				return func_478(0, 18);
			case 2:
				return func_478(0, 19);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_478(1, 17);
			case 1:
				return func_478(1, 18);
			case 2:
				return func_478(1, 19);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_311(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_321(0, 0);
			case 1:
				return func_321(0, 1);
			case 2:
				return func_321(0, 4);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_321(1, 0);
			case 1:
				return func_321(1, 1);
			case 2:
				return func_321(1, 4);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_312(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_478(0, 0);
			case 1:
				return func_478(0, 1);
			case 2:
				return func_478(0, 4);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_478(1, 0);
			case 1:
				return func_478(1, 1);
			case 2:
				return func_478(1, 4);
			default:
				break;
		}
	}
	return 0f;
}

int func_317(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_489(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		func_490(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
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

bool func_320(int iParam0)
{
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		__LIB_8__::func_901(&(iParam0->f_256), 0);
		if (__LIB_11__::func_410(&(iParam0->f_256), 1.5f))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	return false;
}

Vector3 func_321(int iParam0, int iParam1)
{
	return func_493(iParam0, iParam1);
}

void func_327(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		__LIB_2__::func_344(uParam0);
		__LIB_17__::func_785(iParam1, uParam2);
	}
	__LIB_2__::func_56(*uParam0, 1, bParam4);
}

Vector3 func_335()
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		return 0f, 0f, -13.815f;
	}
	return 0f, 0f, 166.185f;
}

Vector3 func_336()
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		return -1110.74f, 125.517f, 56.327f;
	}
	return -1109.835f, 125.295f, 56.363f;
}

bool func_342(int iParam0)
{
	switch (iParam0->f_224)
	{
		case 0:
			if (__LIB_2__::func_256(iParam0))
			{
				__LIB_0__::func_11(iParam0, 1);
				return true;
			}
			break;
		case 1:
			if (func_537(iParam0))
			{
				__LIB_0__::func_11(iParam0, 2);
				return true;
			}
			break;
		case 2:
			if (__LIB_2__::func_194(iParam0))
			{
				__LIB_0__::func_11(iParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_539(iParam0))
			{
				__LIB_0__::func_11(iParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_540(iParam0))
			{
				__LIB_0__::func_11(iParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_541(iParam0))
			{
				__LIB_0__::func_11(iParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	iParam0->f_224++;
	iParam0->f_224 = (iParam0->f_224 % 7);
	return false;
}

void func_346()
{
	if (!__LIB_0__::func_51(&uLocal_279, 1024))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UP_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_DOWN_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LEFT_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_RIGHT_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ACCELERATE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UP_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_DOWN_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LEFT_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
		if (iLocal_278 <= 0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		}
	}
}

bool func_347()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_167(), false) < (0.33f * fLocal_365))
	{
		return true;
	}
	return false;
}

bool func_348()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_167(), false) < (0.67f * fLocal_365))
	{
		return true;
	}
	return false;
}

bool func_349()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_167(), false) < fLocal_365)
	{
		return true;
	}
	return false;
}

float func_351()
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		return func_478(0, 13);
	}
	else
	{
		return func_478(1, 13);
	}
	return 0f;
}

void func_352()
{
	int iVar0;
	iVar0 = __LIB_2__::func_379(&Local_16, 0);
	if (Global_1935630.f_40 != iVar0)
	{
		if (__LIB_2__::func_1(iVar0, 0, 1))
		{
			FLOCK::_0xFF1E339CE40EAAAF(iVar0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, Global_35, 6, 0, 10f, 10000, 0);
		}
	}
}

bool func_353()
{
	float fVar0;
	if (func_347())
	{
		__LIB_8__::func_901(&uLocal_298, 0);
	}
	else
	{
		__LIB_2__::func_608(&uLocal_298);
	}
	fVar0 = __LIB_5__::func_53(&uLocal_298);
	if (__LIB_11__::func_410(&uLocal_298, 1f))
	{
		return true;
	}
	return false;
}

Vector3 func_354()
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		return -1105.416f, 140.9475f, 56.74777f;
	}
	return -1114.462f, 110.126f, 56.79839f;
}

int func_356(vector3 vParam0, vector3 vParam3, var uParam6, int iParam7, int iParam8)
{
	float fVar0;
	if (*uParam6 == 0)
	{
		*uParam6 = __LIB_0__::func_485();
	}
	fVar0 = (BUILTIN::TO_FLOAT((__LIB_0__::func_485() - *uParam6)) / BUILTIN::TO_FLOAT(iParam7));
	vParam3 = { __LIB_1__::func_367(vParam0, vParam3, fVar0) };
	return __LIB_8__::func_895(vParam3, iParam8);
}

void func_357(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (__LIB_0__::func_51(&(iParam3->f_3), 1))
	{
		func_551(iParam3);
		if (__LIB_1__::func_378(vParam0, fParam8, 2.5f, fParam12, 1084227584 /* Float: 5f */))
		{
			__LIB_1__::func_539();
		}
	}
	if (func_553(vParam0, iParam3, fParam8))
	{
		if (__LIB_0__::func_51(&(iParam3->f_3), 128))
		{
			__LIB_18__::func_640(iParam3, vParam0, iParam7, iParam10);
		}
		CAM::SET_GAMEPLAY_COORD_HINT(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
		if (!__LIB_0__::func_51(&(iParam3->f_3), 128))
		{
			__LIB_18__::func_640(iParam3, vParam0, iParam7, iParam10);
		}
	}
}

void func_358()
{
	func_555(Local_16[2], &Local_367, 0f, 0f, 0.25f, 1, 37f, 1092616192 /* Float: 10f */, 4000, 4000, 1000, 0f, 1, 1, 1084227584 /* Float: 5f */);
}

bool func_359()
{
	if (__LIB_2__::func_4(&Local_16, 4096) && ENTITY::GET_ENTITY_SPEED(PED::GET_MOUNT(Global_35)) < 0.1f)
	{
		if (!__LIB_2__::func_618(&uLocal_313))
		{
			if (!__LIB_2__::func_1(Local_16.f_56, 0, 1))
			{
				Local_16.f_56 = PED::GET_MOUNT(Global_35);
			}
			if (!__LIB_2__::func_1(Local_16.f_56, 0, 1))
			{
				return false;
			}
			PED::_0x2EB75FB86C41F026(Local_16.f_56, 3, 0);
			PED::_0x89F5E7ADECCCB49C(Local_16.f_56, "normal_basic_idle");
			PED::SET_PED_CONFIG_FLAG(Local_16.f_56, 301, true);
			TASK::TASK_PLAY_ANIM(Local_16.f_56, "CREATURES_MAMMAL@HORSE@NORMAL@IDLE", "idle", 2f, -8f, -1, 24, 0f, false, 0, false, 0, false);
			__LIB_8__::func_901(&uLocal_313, 0);
		}
		if (__LIB_11__::func_410(&uLocal_313, 1f))
		{
			return true;
		}
	}
	return false;
}

bool func_360()
{
	float fVar0;
	fVar0 = func_556(iLocal_366);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_16[2], func_557(iLocal_366), fVar0, true, false, true);
	PED::_SET_PED_CROUCH_MOVEMENT(Local_16[2], false, 0, false);
	__LIB_2__::func_429(&Local_16, 2, 1);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_361[1], ENTITY::GET_ENTITY_COORDS(Local_16.f_56, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_16.f_56), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_361[1], "PEDA", Local_16[2], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_361[1]);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_361[2], ENTITY::GET_ENTITY_COORDS(Local_16.f_56, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_16.f_56), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_361[2], "HORSE", Local_16.f_56, 0);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_361[2], "IDLE_BOOL", false, false);
	ANIMSCENE::START_ANIM_SCENE(iLocal_361[2]);
	return true;
}

char* func_372()
{
	if (!__LIB_0__::func_181())
	{
		switch (iLocal_477)
		{
			case 0:
				return "AMBUSH_BRT_DISMOUNT";
			case 1:
				return "AMBUSH_BRT_V2_DISMOUNT";
			case 2:
				return "AMBUSH_BRT_DISMOUNT";
			case 3:
				return "AMBUSH_BRT_V2_DISMOUNT";
			default:
				break;
		}
	}
	else
	{
		switch (iLocal_477)
		{
			case 2:
				return "AMBUSH_BRT_DISMOUNT";
			case 3:
				return "AMBUSH_BRT_V2_DISMOUNT";
			default:
				break;
		}
	}
	return "";
}

bool func_378(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_2__::func_618(&uLocal_0) && !__LIB_18__::func_376(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_385(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	func_214(iParam1);
	if (Global_1935630.f_12)
	{
		iParam1->f_1 = 0;
		iParam1->f_2 = 1;
		return true;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_COLLECT"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 194, true);
	switch (*iParam1)
	{
		case 0:
			if (!iParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_16))
				{
					if (bParam3)
					{
						func_568(0);
					}
					if (func_173(fParam4, 1, 0, 0))
					{
						func_187(iParam0, Global_35, iParam1->f_16, 0, -1082130432 /* Float: -1f */, iParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_IS_PED_FALLING_2(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !__LIB_0__::func_163(Global_35, 501393341)) && !__LIB_0__::func_163(Global_35, 1553520516)) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				iParam1->f_25 = { Global_36 };
				if (__LIB_0__::func_27(iParam5, 4))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), false, 0, false);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				if (__LIB_0__::func_154(Global_1935630.f_44))
				{
					__LIB_8__::func_901(&(iParam1->f_32), 0);
				}
				else
				{
					__LIB_13__::func_531(&(iParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!__LIB_0__::func_474(609))
				{
					__LIB_0__::func_105(1);
					iParam1->f_28 = __LIB_0__::func_45("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					__LIB_0__::func_378(609, &uVar0, &uVar1);
					__LIB_2__::func_447(&uVar0, &uVar1);
				}
				iParam1->f_8 = 1;
				*iParam1 = 2;
			}
			break;
		case 2:
			if (((!iParam1->f_12 && !iParam1->f_13) && __LIB_11__::func_410(&(iParam1->f_32), 2f)) && __LIB_2__::func_448(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_574(&(iParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					iParam1->f_12 = 1;
				}
				if (!iParam1->f_14)
				{
					if (__LIB_0__::func_139(iParam1->f_36))
					{
						iParam1->f_14 = 1;
					}
				}
			}
			if (iParam1->f_14)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BENDSUCCESS"), "bEndSuccess", 1, 1.8f, 1))
				{
					__LIB_1__::func_281(&(iParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				iParam1->f_1 = 1;
				return true;
			}
			bVar2 = false;
			if (__LIB_2__::func_470() && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
			else if (Global_1935630.f_25)
			{
				bVar2 = true;
			}
			else if (PED::IS_PED_IN_COMBAT(iParam0, 0) && __LIB_0__::func_163(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (func_576(iParam1))
			{
				bVar2 = true;
			}
			else if (__LIB_2__::func_612(iParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((__LIB_0__::func_27(iParam5, 16) && !__LIB_0__::func_163(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				bVar2 = true;
			}
			if (!iParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_20))
				{
					if (bParam3)
					{
						func_568(0);
					}
					if (func_173(fParam4, 1, 0, 0))
					{
						func_187(Global_35, iParam0, iParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_281(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				iParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_578(iParam6, 1, 0, -142743235, 0);
					__LIB_2__::func_463(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(__LIB_0__::func_492(1)) * fParam2));
				if (iVar3 > 0)
				{
					__LIB_2__::func_522(iVar3, 0, 0, 1, 1);
					__LIB_2__::func_449(iVar3);
					__LIB_2__::func_55(iParam0, &iVar4);
					__LIB_2__::func_190(iParam0, (iVar4 + iVar3));
				}
				PAD::SET_PAD_SHAKE(0, 100, 100);
				if (!iParam1->f_3)
				{
					iParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BBEFOREHITBREAKOUT"), "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					iParam1->f_5 = 1;
					return true;
				}
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_INTRO"), "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_17))
				{
					if (bParam3)
					{
						func_568(0);
					}
					if (func_173(0f, 1, iParam0, 1))
					{
						func_187(iParam0, Global_35, iParam1->f_17, 0, -1082130432 /* Float: -1f */, iParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_15 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_HIT"), "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						func_568(0);
					}
				}
				if (iParam1->f_11)
				{
					if (func_173(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
						{
							func_187(iParam0, Global_35, iParam1->f_18, 0, -1082130432 /* Float: -1f */, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (func_173(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						func_187(iParam0, Global_35, iParam1->f_18, 0, -1082130432 /* Float: -1f */, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_281(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				iParam1->f_4 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_FAILED"), "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_19))
				{
					if (bParam3)
					{
						func_568(0);
					}
					if (func_173(fParam4, 1, 0, 0))
					{
						func_187(iParam0, Global_35, iParam1->f_19, 0, -1082130432 /* Float: -1f */, iParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_2 = 0;
				iParam1->f_3 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("BLENDOUT"), "Blendout", iParam8, 0.8f, 0) || !__LIB_0__::func_163(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_387()
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		return -1129.451f, 463.6884f, 56.5105f;
	}
	else
	{
		return -318.1832f, 393.2269f, 53.637f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_388(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_321(0, 14);
			case 1:
				return func_321(0, 15);
			case 2:
				return func_321(0, 16);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_321(1, 14);
			case 1:
				return func_321(1, 15);
			case 2:
				return func_321(1, 16);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

int func_393(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = (*iParam1 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0]))
		{
			if (__LIB_0__::func_665((*iParam1)[iVar0], Global_35, 1, 1) < fParam2)
			{
				if (!*iParam0 & 4 != 0)
				{
					__LIB_2__::func_613(iParam0, 1);
					return 1;
				}
				return 0;
			}
		}
		iVar0++;
	}
	if (*iParam0 & 4 != 0)
	{
		__LIB_2__::func_613(iParam0, 0);
		return 1;
	}
	return 0;
}

Vector3 func_395(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_321(3, 0);
			case 1:
				return func_321(3, 1);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_321(2, 0);
			case 1:
				return func_321(2, 1);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

char* func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_2__::func_610();
		case 1:
			return func_292();
		case 2:
			return func_293();
		default:
			break;
	}
	return "";
}

char[] func_412()
{
	switch (iLocal_477)
	{
		case 0:
			return "AMBUSH_BRT_FLEE";
		case 1:
			return "AMBUSH_BRT_V2_FLEE";
		default:
			break;
	}
	return "COMBAT_FLEE";
}

int func_413(int iParam0, int iParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (*iParam1 < 0)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_215)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
			{
				iVar1++;
				iVar2 = iVar0;
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (iVar2 >= 0)
			{
				if (!__LIB_2__::func_25(iParam0, iVar2, 1))
				{
					__LIB_5__::func_107(uParam2);
					*iParam1 = iVar2;
				}
			}
			else if (iVar1 == 0)
			{
				return 1;
			}
		}
	}
	else
	{
		if (!__LIB_2__::func_618(uParam2))
		{
			if (__LIB_2__::func_1((*iParam0)[*iParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2((*iParam0)[*iParam1], Global_35, 1, 0);
			}
		}
		__LIB_8__::func_901(uParam2, 0);
		if (__LIB_11__::func_410(uParam2, fParam4))
		{
			if (__LIB_2__::func_1((*iParam0)[*iParam1], 0, 1))
			{
				if (__LIB_2__::func_211(iParam0, *iParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[*iParam1], Global_35, 4, 524292, -1f, -1, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[*iParam1], true);
					__LIB_1__::func_733((*iParam0)[*iParam1]);
					__LIB_2__::func_56((*iParam0)[*iParam1], 0, 1);
					func_187((*iParam0)[*iParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_418(int iParam0)
{
	float fVar0;
	if (!__LIB_2__::func_1(Local_16[iParam0], 0, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_16[iParam0]))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_16[iParam0], Global_36, 1) < 4f)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 0.75f;
			break;
		case 2:
			fVar0 = 2f;
			break;
	}
	if (__LIB_11__::func_410(&uLocal_301, fVar0))
	{
		return false;
	}
	return true;
}

float func_421(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_478(3, 0);
			case 1:
				return func_478(3, 1);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_478(2, 0);
			case 1:
				return func_478(2, 1);
			default:
				break;
		}
	}
	return 0f;
}

float func_478(int iParam0, int iParam1)
{
	return func_607(iParam0, iParam1);
}

int func_489(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_5__::func_107(&(iParam1->f_13));
		}
		if (__LIB_3__::func_519(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_623(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_489(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_17__::func_866(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_629(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_17__::func_786(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_634(uParam0, iParam1, fParam4, bVar6))
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
					__LIB_13__::func_220(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_629(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_17__::func_866(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (func_634(uParam0, iParam1, fParam4, bVar6))
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
			__LIB_17__::func_785(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_490(int* iParam0, var uParam1, var uParam2)
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
			func_187(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

Vector3 func_493(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1102.824f, 139.34f, 55.242f;
				case 1:
					return -1109.598f, 141.54f, 55.214f;
				case 2:
					return -1107.376f, 140.5849f, 55.3398f;
				case 3:
					return -1105.499f, 140.0828f, 55.3397f;
				case 4:
					return -1108.149f, 108.5829f, 55.8786f;
				case 5:
					return -1114.504f, 107.2483f, 55.212f;
				case 6:
					return -1110.968f, 107.41f, 55.4675f;
				case 7:
					return -1107.877f, 138.3421f, 55.2895f;
				case 8:
					return -1105.835f, 137.7275f, 55.2907f;
				case 9:
					return -1113.826f, 112.6403f, 55.3002f;
				case 10:
					return -1111.354f, 117.8676f, 55.308f;
				case 11:
					return -1111.816f, 116.1122f, 55.3055f;
				case 12:
					return -1112.213f, 114.5407f, 55.3032f;
				case 13:
					return -1110.061f, 126.3949f, 55.3058f;
				case 14:
					return -1107.684f, 152.2268f, 56.645f;
				case 15:
					return -1106.339f, 153.7975f, 56.7597f;
				case 16:
					return -1105.246f, 155.5401f, 56.9492f;
				case 17:
					return -1109.294f, 153.3766f, 56.7614f;
				case 18:
					return -1108.227f, 155.3161f, 56.9434f;
				case 19:
					return -1107.056f, 157.0954f, 57.0827f;
				case 20:
					return -1108.032f, 128.8798f, 55.2246f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1117.739f, 112.45f, 54.141f;
				case 1:
					return -1111.25f, 109.474f, 55.304f;
				case 2:
					return -1113.257f, 109.6882f, 55.2964f;
				case 3:
					return -1115.249f, 110.148f, 55.296f;
				case 4:
					return -1113.439f, 159.6428f, 55.7819f;
				case 5:
					return -1106.929f, 142.0276f, 55.3179f;
				case 6:
					return -1109.326f, 142.8264f, 55.4573f;
				case 7:
					return -1115.122f, 113.2455f, 55.3343f;
				case 8:
					return -1112.723f, 112.6048f, 55.3277f;
				case 9:
					return -1106.984f, 138.1212f, 55.3378f;
				case 10:
					return -1109.78f, 132.589f, 55.328f;
				case 11:
					return -1109.204f, 134.7467f, 55.3311f;
				case 12:
					return -1108.681f, 136.9682f, 55.3344f;
				case 13:
					return -1110.51f, 124.7735f, 55.3092f;
				case 14:
					return -1116.826f, 92.2873f, 53.9912f;
				case 15:
					return -1117.222f, 88.3746f, 53.708f;
				case 16:
					return -1116.514f, 84.7681f, 53.5089f;
				case 17:
					return -1113.382f, 92.6796f, 54.3505f;
				case 18:
					return -1113.758f, 90.2796f, 54.1417f;
				case 19:
					return -1113.509f, 86.7248f, 53.8658f;
				case 20:
					return -1112.425f, 121.9957f, 55.2246f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1117.195f, 110.4842f, 55.2401f;
				case 1:
					return -1111.655f, 108.9829f, 55.297f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1103.188f, 140.3852f, 55.3442f;
				case 1:
					return -1108.894f, 141.9893f, 55.2694f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_537(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 131072))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!__LIB_2__::func_4(iParam0, 16777216) || iParam0->f_20 < 35f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_539(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 262144))
	{
		if (iParam0->f_20 < 35f)
		{
			if (__LIB_2__::func_437(iParam0, 35f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_540(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 524288))
	{
		if (iParam0->f_20 < 35f)
		{
			if (__LIB_2__::func_300(iParam0, 35f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_541(int iParam0)
{
	if (!__LIB_2__::func_8(iParam0->f_151))
	{
		if (iParam0->f_20 < 35f)
		{
			if (__LIB_2__::func_232(iParam0->f_151, iParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

void func_551(int iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_691(iParam0) || __LIB_0__::func_51(&(iParam0->f_3), 4)) && !__LIB_0__::func_51(&(iParam0->f_3), 256))
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
	if (func_692(iParam0))
	{
		__LIB_1__::func_539();
	}
	if (!__LIB_0__::func_51(&(iParam0->f_3), 16))
	{
		if (__LIB_2__::func_618(iParam0))
		{
			if (__LIB_5__::func_28(iParam0) < iParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

bool func_553(vector3 vParam0, int iParam3, float fParam4)
{
	float fVar0;
	if (!__LIB_1__::func_379(iParam3->f_7, iParam3->f_8))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(iParam3->f_3), 1))
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
	if (!func_695(vParam0, iParam3))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(iParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_696(vParam0, iParam3))
		{
			return false;
		}
	}
	return true;
}

void func_555(int iParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(iParam1->f_3), 1))
	{
		func_551(iParam1);
		if (__LIB_4__::func_77(iParam0, iParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (func_553(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_18__::func_640(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

float func_556(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_478(0, 10);
			case 1:
				return func_478(0, 11);
			case 2:
				return func_478(0, 12);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_478(1, 10);
			case 1:
				return func_478(1, 11);
			case 2:
				return func_478(1, 12);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_557(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_279, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_321(0, 10);
			case 1:
				return func_321(0, 11);
			case 2:
				return func_321(0, 12);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_321(1, 10);
			case 1:
				return func_321(1, 11);
			case 2:
				return func_321(1, 12);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_568(int iParam0)
{
	__LIB_2__::func_608(&uLocal_0);
	__LIB_0__::func_82(1, iParam0, 0);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_2__::func_348();
}

bool func_574(int iParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
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
				__LIB_2__::func_522(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				__LIB_2__::func_590(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		__LIB_1__::func_281(iParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_576(int iParam0)
{
	if (iParam0->f_4)
	{
		return false;
	}
	if (iParam0->f_9)
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
	if (__LIB_11__::func_410(&(iParam0->f_32), 1f))
	{
		if (!__LIB_0__::func_163(Global_35, 716706914))
		{
			return true;
		}
	}
	return false;
}

int func_578(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_2__::func_465(iParam0, 1);
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
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_2__::func_591(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) < 0)
		{
			func_578(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!__LIB_2__::func_481(iParam0, iParam1, iParam3, bParam2, bParam4))
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
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_10__::func_207(iParam0, iParam1);
	return 1;
}

float func_607(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 17.28f;
				case 1:
					return 310.32f;
				case 2:
					return 170.0674f;
				case 3:
					return 164.0674f;
				case 4:
					return 106.0674f;
				case 5:
					return 2.0674f;
				case 6:
					return 47.52f;
				case 7:
					return 165.6f;
				case 8:
					return 162f;
				case 9:
					return 344.9192f;
				case 10:
					return 346.5486f;
				case 11:
					return 346.5486f;
				case 12:
					return 344.5486f;
				case 13:
					return 344.88f;
				case 14:
					return 0f;
				case 15:
					return 335.446f;
				case 16:
					return 335.446f;
				case 17:
					return -57.28f;
				case 18:
					return -61.2f;
				case 19:
					return -62.88f;
				case 20:
					return -25.0117f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 146.88f;
				case 1:
					return -150.48f;
				case 2:
					return -9.2967f;
				case 3:
					return -11.2967f;
				case 4:
					return 224.7033f;
				case 5:
					return 180.7033f;
				case 6:
					return 239.3716f;
				case 7:
					return 341.28f;
				case 8:
					return 348.48f;
				case 9:
					return 164.9192f;
				case 10:
					return 164.5486f;
				case 11:
					return 166.5486f;
				case 12:
					return 164.5486f;
				case 13:
					return 165.6f;
				case 14:
					return 335.446f;
				case 15:
					return 335.446f;
				case 16:
					return 335.446f;
				case 17:
					return 104.8f;
				case 18:
					return 121.52f;
				case 19:
					return 128.08f;
				case 20:
					return 152.9883f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -13.9016f;
				case 1:
					return -13.9016f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 162.0984f;
				case 1:
					return 164f;
			}
			break;
	}
	return 0f;
}

bool func_623(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_14__::func_65(iParam1, uParam2, 0);
		iVar5 = __LIB_4__::func_455(*uParam0, iParam1, uParam2, fParam3, bVar4);
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

bool func_629(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		__LIB_4__::func_457(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_14__::func_65(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

bool func_634(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
	return __LIB_18__::func_376(&(iParam1->f_18), fParam2);
	return true;
}

bool func_691(int iParam0)
{
	if (!__LIB_17__::func_784(*iParam0, iParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_692(int iParam0)
{
	if (!func_691(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_876(iParam0->f_7, iParam0->f_8, __LIB_0__::func_51(&(iParam0->f_3), 4)))
	{
		return true;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_3), 4))
	{
		if (__LIB_1__::func_383())
		{
			return true;
		}
	}
	return false;
}

bool func_695(vector3 vParam0, int iParam3)
{
	if (!__LIB_0__::func_51(&(iParam3->f_3), 8))
	{
		return true;
	}
	if (__LIB_1__::func_373(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_696(vector3 vParam0, int iParam3)
{
	float fVar0;
	fVar0 = __LIB_1__::func_874(vParam0, 1);
	return fVar0 < iParam3->f_6;
}

