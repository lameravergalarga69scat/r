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
	struct<221> Local_15 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_263 = 0;
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
	struct<63> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, -1, 0, 5, 0, -1, 0, 2, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 5;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	bool bLocal_358 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_358 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_358, 961, 0);
		if (bLocal_358)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			if (__LIB_0__::func_58())
			{
				__LIB_0__::func_11();
			}
			__LIB_17__::func_808();
			switch (Local_15.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						__LIB_2__::func_233(&Local_15, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (__LIB_0__::func_58())
						{
							__LIB_2__::func_233(&Local_15, 2);
						}
						else if (Local_15.f_217 > 0)
						{
							__LIB_2__::func_233(&Local_15, 3);
						}
						else if (Local_15.f_218 > 0)
						{
							__LIB_2__::func_233(&Local_15, 4);
						}
						else if (Local_15.f_216 > 0)
						{
							__LIB_2__::func_233(&Local_15, 5);
						}
						else
						{
							__LIB_2__::func_233(&Local_15, 6);
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_58())
					{
						__LIB_0__::func_11();
					}
					__LIB_2__::func_233(&Local_15, 3);
					break;
				case 3:
					if (__LIB_2__::func_257())
					{
						if (__LIB_0__::func_0())
						{
							__LIB_2__::func_233(&Local_15, 4);
						}
					}
					break;
				case 4:
					if (__LIB_2__::func_258())
					{
						__LIB_2__::func_233(&Local_15, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						__LIB_2__::func_233(&Local_15, 6);
					}
					break;
				case 6:
					if (__LIB_0__::func_0())
					{
						__LIB_2__::func_233(&Local_15, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[Local_15.f_151 /*4*/].f_2 = (1 + Global_40.f_9632[Local_15.f_151 /*4*/].f_2);
						if (__LIB_0__::func_65(&Global_1393447, 65536))
						{
							__LIB_0__::func_380(&Global_1393447, 65536);
						}
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_2__::func_233(&Local_15, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (Local_15.f_20 > (100f - 10f))
						{
							__LIB_2__::func_244();
							__LIB_2__::func_233(&Local_15, 9);
						}
						else
						{
							__LIB_2__::func_234(&Local_15, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						Local_15.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						Local_15.f_226 = __LIB_0__::func_36();
						if (Global_40.f_9632.f_194 != Local_15.f_151)
						{
							switch (Local_15.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									__LIB_2__::func_706(&Local_15, 1);
									break;
							}
						}
						__LIB_2__::func_266();
						__LIB_2__::func_267(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						__LIB_2__::func_391(&Local_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						__LIB_2__::func_234(&Local_15, 16384);
						__LIB_2__::func_233(&Local_15, 10);
					}
					break;
				case 10:
					__LIB_2__::func_736();
					if (__LIB_2__::func_4(&Local_15, 32768) || func_31())
					{
						switch (Local_15.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								__LIB_2__::func_483(&Local_15, 1);
								break;
						}
						__LIB_2__::func_392(&Local_15, 1);
						__LIB_0__::func_747(120, 0, 1);
						__LIB_2__::func_304(1, -1, 0, 0, 0);
						__LIB_2__::func_235(&Local_15);
						__LIB_2__::func_233(&Local_15, 11);
					}
					break;
				case 11:
					__LIB_2__::func_331(&Local_15);
					__LIB_2__::func_332();
					if (__LIB_2__::func_376(&Local_15))
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_1__::func_283(&(Local_15.f_244), 0);
						__LIB_2__::func_233(&Local_15, 12);
					}
					break;
				case 12:
					__LIB_2__::func_333(&Local_15);
					__LIB_2__::func_332();
					if (__LIB_2__::func_405())
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_2__::func_233(&Local_15, 13);
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
		if (__LIB_2__::func_4(&Local_15, 4))
		{
			__LIB_2__::func_6(0);
			__LIB_2__::func_311(&Local_15, 4);
		}
	}
	fVar0 = 8f;
	if (Local_15.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!__LIB_0__::func_0() && !__LIB_1__::func_285(&(Local_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_2__::func_7())
	{
		__LIB_1__::func_283(&(Local_15.f_250), 0);
		return;
	}
	if (__LIB_1__::func_285(&(Local_15.f_250), fVar0))
	{
	}
	__LIB_2__::func_331(&Local_15);
	func_49();
	__LIB_2__::func_337(&Local_15, 0);
	func_51();
	__LIB_2__::func_317(&Local_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_391(&Local_15, 1);
	__LIB_2__::func_380(&Local_15, 0);
	if (Local_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_15.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_237))
	{
		__LIB_2__::func_371(&Local_15);
		func_55(Local_15.f_237);
	}
	__LIB_2__::func_392(&Local_15, 1);
	if (Local_15.f_95 >= 9 && Local_15.f_95 < 11)
	{
		if (__LIB_2__::func_8(Local_15.f_151))
		{
		}
		else if (__LIB_2__::func_172(Local_15.f_151, 1) || __LIB_2__::func_245(Local_15.f_151, 1))
		{
			__LIB_0__::func_47(&Global_1393447, 2048);
			if (!__LIB_0__::func_75(&(Local_15.f_244)))
			{
				__LIB_0__::func_747(120, 0, 1);
			}
		}
	}
	if (__LIB_2__::func_1(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_2__::func_9(Local_15.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	__LIB_2__::func_10(Local_15.f_151);
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
	if (Local_15.f_95 <= 9 && Local_15.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_322(&Local_15))
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
	if (Local_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_15.f_95 < 10 && Local_15.f_96 & 1048576 == 0)
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
			if (!__LIB_0__::func_86(Local_15.f_209))
			{
				if (Local_15.f_20 > 207f)
				{
					if (Local_15.f_223 == 0)
					{
						Local_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_707())
		{
			return true;
		}
		if (func_72(&uVar5))
		{
			fVar4 = func_73();
			iVar3 = 0;
			while (iVar3 < Local_15.f_215)
			{
				if (Local_15.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(Local_15[iVar3], 0, 1))
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

bool func_8(struct<8> Param0, var uParam8)
{
	float fVar0;
	vector3 vVar1;
	bool bVar4;
	if (Global_1879534.f_1)
	{
		return false;
	}
	if (__LIB_0__::func_86(Local_15.f_209))
	{
		__LIB_2__::func_324(&(Local_15.f_152));
		__LIB_2__::func_325(&(Local_15.f_152));
		__LIB_2__::func_104(&(Local_15.f_152), 0);
		__LIB_2__::func_105(&(Local_15.f_152), 1);
		__LIB_1__::func_975(&(Local_15.f_152), 6f);
		Local_15.f_209 = { Param0 };
		Local_15.f_151 = Param0.f_3;
		Local_15.f_221 = Param0.f_4;
		Local_15.f_222 = __LIB_2__::func_12(Local_15.f_151);
		if (Param0.f_7)
		{
			__LIB_2__::func_234(&Local_15, 2);
		}
		if (!__LIB_2__::func_13(Local_15.f_151))
		{
			__LIB_2__::func_233(&Local_15, 12);
			return false;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { func_84(Local_15.f_151, 0, Local_15.f_221) };
				vVar1 = { func_84(Local_15.f_151, 1, Local_15.f_221) };
				if (__LIB_0__::func_58())
				{
					if (__LIB_2__::func_14(&Local_15))
					{
						__LIB_2__::func_234(&Local_15, 1);
					}
				}
				if (!Local_15.f_227)
				{
					if (__LIB_2__::func_15(Local_15.f_181, 0))
					{
						Local_15.f_227 = func_88(Local_15.f_181, -1);
					}
				}
				if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_2__::func_233(&Local_15, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						__LIB_2__::func_377(&Local_15);
						__LIB_2__::func_318(&Local_15, 8672);
					}
					PED::_0xED9582B3DA8F02B4((((Local_15.f_215 + Local_15.f_216) + Local_15.f_217 * 2) + Local_15.f_219) + 1);
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
	while (iVar1 < Local_15.f_216)
	{
		iVar3 = __LIB_2__::func_292(iVar1);
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
		while (iVar1 < Local_15.f_216)
		{
			iVar3 = __LIB_2__::func_292(iVar1);
			iVar2 = __LIB_2__::func_293(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_15.f_66[iVar1]))
			{
				if (iVar2 == __LIB_2__::func_16())
				{
				}
				else
				{
					Local_15.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!PED::_0x610438375E5D1801(Local_15.f_66[iVar1]))
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
				while (iVar1 < Local_15.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = __LIB_2__::func_722(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_15.f_31[iVar1]))
					{
						if (iVar2 == __LIB_2__::func_16())
						{
						}
						else
						{
							Local_15.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!PED::_0x610438375E5D1801(Local_15.f_31[iVar1]))
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

bool func_15()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	if (Local_15.f_216 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_2__::func_292(iVar0);
	vVar2 = { func_108(iVar0) };
	uVar5 = func_109(iVar0);
	uVar6 = __LIB_2__::func_293(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
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
			if (__LIB_2__::func_293(iVar0) == __LIB_2__::func_16())
			{
				Local_15.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_15.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, uVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(Local_15.f_40[iVar0], __LIB_2__::func_293(iVar0));
				PED::_UPDATE_PED_VARIATION(Local_15.f_40[iVar0], false, true, true, true, false);
			}
		}
	}
	if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
	{
		__LIB_1__::func_991(Local_15.f_40[iVar0], 0);
		if (__LIB_2__::func_4(&Local_15, 1))
		{
			iVar7 = __LIB_1__::func_976(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					Local_15.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_LANTERN09X"), vVar2, true, true, false, false, true);
					__LIB_2__::func_236(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_15.f_84[iVar0], Local_15.f_40[iVar0], iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		__LIB_2__::func_20(&(Local_15.f_152), Local_15.f_40[iVar0], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_40[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_40[iVar0], 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_15.f_40[iVar0]);
		ENTITY::SET_ENTITY_VISIBLE(Local_15.f_40[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15.f_40[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_40[iVar0], true, false);
		}
		Local_15.f_220++;
		if (Local_15.f_220 >= Local_15.f_216)
		{
			Local_15.f_220 = 0;
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
	var uVar5;
	int iVar6;
	int iVar7;
	if (Local_15.f_215 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_2__::func_722(iVar0);
	vVar2 = { func_116(iVar0) };
	uVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = __LIB_2__::func_21(Local_15.f_181);
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
			Local_15[iVar0] = __LIB_1__::func_545(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			Local_15[iVar0] = PED::_0xEAF682A14F8E5F53(Local_15.f_31[iVar0], vVar2, uVar5, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
			{
				Local_15[iVar0] = __LIB_1__::func_545(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 277, false);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 233, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_15[iVar0]);
			__LIB_2__::func_22(&(Local_15.f_152), Local_15[iVar0]);
			__LIB_2__::func_23(&(Local_15.f_152), Local_15[iVar0], 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_15[iVar0], false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15[iVar0], true, false);
			}
			if (Local_15.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
			}
			__LIB_2__::func_24(Local_15[iVar0], 1);
			PED::_0xBD75500141E4725C(Local_15[iVar0], iVar7);
			DECORATOR::DECOR_SET_BOOL(Local_15[iVar0], "bBeatPed", true);
			__LIB_2__::func_132(__LIB_1__::func_509(Local_15[iVar0]), Local_15[iVar0]);
		}
		else
		{
			Local_15.f_220 = (Local_15.f_220 - 1);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_215)
	{
		Local_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_20()
{
	int iVar0;
	iVar0 = Local_274.f_42;
	if (iVar0 > 4)
	{
		return true;
	}
	if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
	{
		__LIB_2__::func_133(Local_15[iVar0], func_125(iVar0), 0);
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::_0x931B241409216C1F(Local_15[iVar0], Local_15.f_40[iVar0], 0);
		}
		switch (iVar0)
		{
			case 0:
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
				__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_BOW"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
				break;
			case 1:
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
				__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
				break;
			case 2:
				__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_BOW"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				break;
			default:
				__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[iVar0], 0, -1, 1);
				__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				break;
		}
		__LIB_2__::func_743(&Local_15, iVar0);
	}
	Local_274.f_42++;
	return false;
}

bool func_23()
{
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_2__::func_375(&Local_15, 0);
			if (!__LIB_0__::func_51(&Local_274, 4))
			{
				if (func_134())
				{
					__LIB_2__::func_746();
					func_136();
					__LIB_0__::func_614(&Local_274, 3);
				}
			}
			if (func_138())
			{
				if (func_139())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_0__::func_614(&Local_274, 3);
				}
			}
			else if (func_141())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_234(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else if (func_143())
			{
				__LIB_2__::func_746();
				__LIB_2__::func_706(&Local_15, 1);
				__LIB_2__::func_483(&Local_15, 1);
				__LIB_2__::func_373();
				__LIB_0__::func_614(&Local_274, 1);
			}
			break;
		case 1:
			__LIB_2__::func_375(&Local_15, 0);
			__LIB_2__::func_746();
			if (func_145())
			{
				__LIB_0__::func_614(&Local_274, 3);
			}
			break;
		case 2:
			__LIB_0__::func_614(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_31()
{
	Local_274.f_39 = __LIB_2__::func_374(&Local_15);
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_8[0 /*3*/]), 0);
			func_164();
			__LIB_0__::func_615(&Local_274, 1);
			break;
		case 1:
			func_166();
			if (Local_274.f_39 <= 1)
			{
				Local_274.f_41 = __LIB_2__::func_733(&Local_15);
				if (Local_274.f_41 < 0)
				{
					__LIB_0__::func_615(&Local_274, 4);
				}
				else
				{
					func_168();
					__LIB_0__::func_615(&Local_274, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_51(&Local_274, 2048))
			{
				if (func_169())
				{
					__LIB_0__::func_7(&Local_274, 2048);
				}
			}
			else if (func_171())
			{
				__LIB_0__::func_8(&Local_274, 2048);
			}
			if (Local_274.f_39 <= 0)
			{
				__LIB_2__::func_744();
				__LIB_0__::func_615(&Local_274, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_49()
{
	int iVar0;
	AUDIO::_0x531A78D6BF27014B("GAROA_Sounds");
	__LIB_2__::func_744();
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_15.f_118[iVar0 /*4*/].f_1 = { func_194(&Local_274, iVar0) };
		iVar0++;
	}
	__LIB_2__::func_724(&Local_15, 110, 1065353216 /* Float: 1f */);
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
	while (iVar0 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (__LIB_2__::func_247(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(Local_15[iVar0]);
				PED::DELETE_PED(&(Local_15[iVar0]));
			}
			else
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					if (!__LIB_2__::func_4(&Local_15, 16384))
					{
						__LIB_2__::func_32(&(Local_15[iVar0]));
					}
					__LIB_2__::func_24(Local_15[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 5, true);
					PED::_0x24C82EF607105FAA(Local_15[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(Local_15[iVar0], 993130593);
					if (__LIB_2__::func_178(Local_15[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35) || PED::IS_PED_FLEEING(Local_15[iVar0])) || __LIB_2__::func_25(&Local_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(Local_15[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(Local_15[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15[iVar0], Global_35, 4, iVar1, -1082130432 /* Float: -1f */, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else if ((Local_15.f_215 == Local_15.f_216 && __LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true))
					{
						iVar11 = Local_15.f_40[iVar0];
						PED::_0x931B241409216C1F(Local_15.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar0], 20000, -1, 2f, 1, 0, 0);
						if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(Local_15[iVar0], true)))
						{
							if (PED::_GET_SEAT_PED_IS_USING(Local_15[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(Local_15[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, Local_15.f_118[iVar0 /*4*/].f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(Local_15[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
						}
						else
						{
							if (__LIB_2__::func_33(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(Local_15[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(Local_15[iVar0]), -1) == Local_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(Local_15[iVar0]) && !PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35)) && !__LIB_2__::func_25(&Local_15, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(Local_15[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (__LIB_2__::func_248(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_15.f_84[iVar0]));
				}
				PED::DELETE_PED(&(Local_15.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					if (__LIB_2__::func_306(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(Local_15.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(Local_15.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_15.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_84[iVar0]));
					}
				}
				if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
				{
					if (__LIB_0__::func_75(&(Local_15.f_247)))
					{
						if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], false), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(Local_15.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], true)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (__LIB_2__::func_734(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_15.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_15.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == Local_15.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_15.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[iVar0]))
		{
			if (__LIB_2__::func_307(&Local_15, Local_15.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_15.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_55(int iParam0)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_209(vVar0, 0);
}

bool func_72(var uParam0)
{
	if (Local_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_15.f_21 < (func_73() - 10f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (Local_15.f_151)
	{
		case 29:
		case 30:
			if (Local_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!__LIB_2__::func_4(&Local_15, 512) && !__LIB_2__::func_4(&Local_15, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_73()
{
	if (!__LIB_1__::func_285(&(Local_274.f_8[0 /*3*/]), 25f))
	{
		return 300f;
	}
	return 150f;
}

bool func_83()
{
	float fVar0[2];
	int iVar3;
	int iVar4;
	switch (Local_15.f_221)
	{
		case 0:
			Local_274.f_2 = 0;
			break;
		default:
			Local_274.f_2 = 0;
			break;
	}
	fVar0[0] = 1E+10f;
	fVar0[1] = 1E+10f;
	fVar0[0] = BUILTIN::VDIST2(Global_36, func_84(Local_15.f_151, 0, Local_15.f_221));
	fVar0[1] = BUILTIN::VDIST2(Global_36, func_84(Local_15.f_151, 1, Local_15.f_221));
	iVar4 = 0;
	iVar3 = 1;
	while (iVar3 <= 1)
	{
		if (fVar0[iVar3] < fVar0[iVar4])
		{
			iVar4 = iVar3;
		}
		iVar3++;
	}
	switch (iVar4)
	{
		case 0:
			__LIB_0__::func_7(&Local_274, 1);
			break;
		case 1:
			__LIB_0__::func_7(&Local_274, 2);
			break;
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 5;
	Local_15.f_181 = 3;
	__LIB_2__::func_234(&Local_15, 131072);
	__LIB_2__::func_382(&Local_15, 2, 1);
	__LIB_2__::func_732();
	func_245();
	if (__LIB_0__::func_51(&Local_274, 1))
	{
		__LIB_2__::func_41(&(Local_15.f_182), 1, 0f, 2.001f, 2.5f, 3f, 32768);
	}
	else
	{
		__LIB_2__::func_41(&(Local_15.f_182), 1, 0f, 2f, 2.001f, 2.5f, 32768);
	}
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	func_247(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!func_248(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = __LIB_2__::func_42(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_3)
	{
		case 0:
			__LIB_2__::func_187();
			__LIB_2__::func_730(&Local_15);
			AUDIO::_0xD9130842D7226045("GAROA_Sounds", 0);
			func_258(&Local_274);
			Local_274.f_3 = 1;
			break;
		case 1:
			if (!func_259(&Local_274))
			{
				return false;
			}
			func_260(&Local_274);
			Local_274.f_3 = 2;
			break;
		case 2:
			iVar0 = 1;
			if (!func_261(&Local_274))
			{
				iVar0 = 0;
			}
			if (!AUDIO::_0xD9130842D7226045("GAROA_SOUNDS", 0))
			{
				iVar0 = 0;
			}
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!__LIB_2__::func_731(&Local_15))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_264(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_266(&Local_274, iVar0);
}

var func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_267(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_270(&Local_274, iVar0);
}

var func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_271(&Local_274, iVar0);
}

char* func_125(int iParam0)
{
	int iVar0;
	iVar0 = func_272(iParam0);
	return func_273(iVar0);
}

bool func_134()
{
	if (Local_274.f_38 > 1 || Local_274.f_38 < 0)
	{
		Local_274.f_38 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[Local_274.f_38]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_40[Local_274.f_38], Global_35, 1, 1))
		{
			return true;
		}
	}
	if (__LIB_2__::func_745(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_38), 0, 4, 1))
	{
		return true;
	}
	return false;
}

void func_136()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.1f, 0.4f, 1, 1);
			if (!__LIB_0__::func_51(&Local_274, 32))
			{
				if (__LIB_0__::func_51(&Local_274, 8))
				{
					__LIB_2__::func_336(Local_15[0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, -500314840, 2);
				}
				else
				{
					__LIB_2__::func_336(Local_15[iVar0], Global_35, "GENERIC_FRIGHTENED_HIGH", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				}
				__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				__LIB_0__::func_7(&Local_274, 32);
			}
		}
		iVar0++;
	}
	__LIB_0__::func_7(&Local_274, 4);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_138()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_30[2]))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_30[2], 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_139()
{
	__LIB_0__::func_7(&Local_274, 8);
	func_136();
	return true;
}

bool func_141()
{
	if (__LIB_0__::func_51(&Local_274, 64))
	{
		return true;
	}
	if (!__LIB_1__::func_205(Global_35, Local_274.f_30[2], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_30[1], 1, 0))
		{
			if (!__LIB_1__::func_205(Global_35, Local_274.f_30[3], 1, 0))
			{
				__LIB_0__::func_11(&Local_15, 7);
				__LIB_0__::func_7(&Local_274, 64);
				return true;
			}
		}
	}
	if (func_294(&Local_15))
	{
		__LIB_0__::func_7(&Local_274, 64);
		return true;
	}
	return false;
}

bool func_143()
{
	if (__LIB_2__::func_157(Local_274.f_30[3], Global_36))
	{
		return true;
	}
	return false;
}

bool func_145()
{
	switch (Local_274.f_6)
	{
		case 0:
			__LIB_2__::func_336(Local_15[0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, -500314840, 2);
			func_299();
			__LIB_2__::func_384(&Local_274, 1);
			break;
		case 1:
			__LIB_1__::func_283(&(Local_274.f_8[1 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 1.5f))
			{
				func_301();
				if (__LIB_2__::func_1(Global_1935630.f_40, 0, 0))
				{
					PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 3, 0.8f, 0);
					PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 1, 0.8f, 0);
					PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 3, 0.05f);
					PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 1, 0.05f);
					TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 4, 0, 0);
				}
				__LIB_2__::func_384(&Local_274, 2);
			}
			break;
		case 2:
			func_159();
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), (1.5f + 2f)))
			{
				func_302();
				__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
				__LIB_2__::func_384(&Local_274, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_159()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (PED::IS_PED_SHOOTING(Local_15[iVar0]) || __LIB_1__::func_472(Local_15[iVar0], 40f, 10f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_160()
{
	int iVar0;
	if (__LIB_0__::func_51(&Local_274, 1024))
	{
		return;
	}
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if ((((MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_15[iVar0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_15[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_15[1])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_15[2]))
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_TRAP_MALE", -1073741824 /* Float: -2f */, 1, joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), -1);
				__LIB_0__::func_7(&Local_274, 1024);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_161()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_320(&Local_274, iVar0, 1))
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0) && __LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(Local_15[iVar0]) || ENTITY::IS_ENTITY_ON_SCREEN(Local_15.f_40[iVar0]))
				{
					__LIB_1__::func_148(&(Local_274.f_46[iVar0 /*3*/]));
				}
				else
				{
					__LIB_1__::func_283(&(Local_274.f_46[iVar0 /*3*/]), 0);
					if (((__LIB_1__::func_285(&(Local_274.f_46[iVar0 /*3*/]), 3f) && __LIB_0__::func_51(&Local_274, 4096)) && Local_15.f_9[iVar0] > 72f) && __LIB_0__::func_94(Local_15.f_40[iVar0], Global_36, 1) > 72f)
					{
						iVar1 = PED::GET_MOUNT(Local_15[iVar0]);
						if (iVar1 == 0)
						{
							PED::_SET_PED_ON_MOUNT(Local_15[iVar0], Local_15.f_40[iVar0], -1, true);
							iVar1 = Local_15.f_40[iVar0];
							TASK::TASK_COMBAT_PED(Local_15[iVar0], Global_35, 0, 0);
						}
						ENTITY::SET_ENTITY_HEADING(iVar1, __LIB_0__::func_152(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), Global_36, 1));
						PED::FORCE_PED_MOTION_STATE(iVar1, joaat("MOTIONSTATE_SPRINT"), false, 0, false);
						func_322(&Local_274, iVar0, 1);
					}
				}
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_51(&Local_274, 4096))
	{
		return;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_30[4], Global_36))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, false);
			__LIB_1__::func_733(Local_15[iVar0]);
		}
		iVar0++;
	}
	__LIB_0__::func_7(&Local_274, 4096);
}

void func_162()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_1__::func_313(&(Local_274.f_62[iVar0 /*3*/]), func_323(&Local_274, iVar0)))
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				__LIB_1__::func_733(Local_15[iVar0]);
				PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
			}
		}
		iVar0++;
	}
}

void func_163()
{
	if (!func_320(&Local_274, 0, 2))
	{
		if (!__LIB_2__::func_1(Local_15[0], 0, 1))
		{
			if (PED::_IS_PED_HOGTIED(Local_15[0]))
			{
				TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 0, 0);
			}
			func_322(&Local_274, 0, 2);
		}
		else if (!PED::IS_PED_IN_COMBAT(Local_15[0], 0))
		{
			if ((Local_15.f_9[0] < 6f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15[0], Global_35, 1, 1)) || __LIB_1__::func_285(&(Local_274.f_8[6 /*3*/]), 5f))
			{
				func_325(0, 3f);
				func_322(&Local_274, 0, 2);
			}
		}
		else
		{
			func_322(&Local_274, 0, 2);
		}
	}
	if (!func_320(&Local_274, 1, 2))
	{
		if (!__LIB_2__::func_1(Local_15[1], 0, 1))
		{
			if (PED::_IS_PED_HOGTIED(Local_15[1]))
			{
				TASK::TASK_COMBAT_PED(Local_15[1], Global_35, 0, 0);
			}
			func_322(&Local_274, 1, 2);
		}
		else if (!PED::IS_PED_IN_COMBAT(Local_15[1], 0))
		{
			if ((Local_15.f_9[1] < 6f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15[1], Global_35, 1, 1)) || __LIB_1__::func_285(&(Local_274.f_8[6 /*3*/]), 5f))
			{
				func_325(1, 2.25f);
				func_322(&Local_274, 1, 2);
			}
		}
		else
		{
			func_322(&Local_274, 1, 2);
		}
	}
}

void func_164()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		__LIB_1__::func_283(&(Local_274.f_62[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	switch (Local_274.f_7)
	{
		case 0:
			if (__LIB_0__::func_51(&Local_274, 1024))
			{
				__LIB_1__::func_283(&(Local_274.f_8[3 /*3*/]), 0);
				__LIB_2__::func_664(&Local_274, 1);
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_8[3 /*3*/]), 8f) && __LIB_2__::func_227(-2f, 1, 0, 0))
			{
				iVar0 = func_328(0, 4, 0);
				if (__LIB_2__::func_654(iVar0))
				{
					__LIB_2__::func_336(Local_15[iVar0], Global_35, "GANG_TAUNT_GEN", -1073741824 /* Float: -2f */, 1, 1744022339, -1);
					__LIB_1__::func_148(&(Local_274.f_8[3 /*3*/]));
					__LIB_2__::func_664(&Local_274, 2);
				}
				else
				{
					__LIB_2__::func_462(&(Local_274.f_8[3 /*3*/]), 12f, 1);
					__LIB_2__::func_664(&Local_274, 2);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_8[3 /*3*/]), 8f))
			{
				iVar0 = func_328(0, 4, 1);
				if (__LIB_2__::func_654(iVar0))
				{
					__LIB_2__::func_336(Local_15[iVar0], Global_35, "TAUNT_GEN_LOCATION", -1073741824 /* Float: -2f */, 1, 1744022339, -1);
					__LIB_1__::func_148(&(Local_274.f_8[3 /*3*/]));
					__LIB_2__::func_664(&Local_274, 3);
				}
				else
				{
					__LIB_2__::func_462(&(Local_274.f_8[3 /*3*/]), 12f, 1);
					__LIB_2__::func_664(&Local_274, 3);
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_8[3 /*3*/]), 8f))
			{
				iVar0 = func_328(0, 4, -1);
				if (__LIB_2__::func_654(iVar0))
				{
					__LIB_2__::func_336(Local_15[iVar0], Global_35, "TAUNT_GEN_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 4);
					__LIB_1__::func_148(&(Local_274.f_8[3 /*3*/]));
					__LIB_2__::func_664(&Local_274, 4);
				}
				else
				{
					__LIB_2__::func_462(&(Local_274.f_8[3 /*3*/]), 12f, 1);
					__LIB_2__::func_664(&Local_274, 4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_168()
{
	if (PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_41]))
	{
		PED::_0x1854217C640B39EC(Local_15[Local_274.f_41], Global_35, 0f, 0f, 0f, 12f, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[Local_274.f_41], 51, true);
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[Local_274.f_41], 51, false);
		PED::_0x1854217C640B39EC(Local_15[Local_274.f_41], Global_35, 0f, 0f, 0f, 8f, 0, 0);
	}
	PED::SET_PED_COMBAT_RANGE(Local_15[Local_274.f_41], 0);
}

bool func_169()
{
	int iVar0;
	int iVar1;
	if ((Local_15.f_9[Local_274.f_41] > 18f || PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_41])) || PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_41], joaat("WEAPON_MELEE_KNIFE")))
	{
		iVar0 = joaat("WEAPON_MELEE_KNIFE");
	}
	else if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_41], joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
	{
		iVar0 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_41], iVar0, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(Local_15[Local_274.f_41], 1, 1, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_MELEE(0, Global_35, 0, 1, 1, 2f, 1, -1082130432 /* Float: -1f */);
	__LIB_1__::func_474(Local_15[Local_274.f_41], &iVar1, 0, 0, 1, 1);
	return true;
}

bool func_171()
{
	int iVar0;
	int iVar1;
	if ((PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_41]) || PED::IS_PED_ON_MOUNT(Global_35)) || Local_15.f_9[Local_274.f_41] > 30f)
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(Local_15[Local_274.f_41], false, false);
		if (!WEAPON::IS_WEAPON_VALID(iVar0))
		{
			return false;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_41], iVar0, false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Local_15[Local_274.f_41], 1, 1, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[Local_274.f_41], &iVar1, 0, 0, 1, 1);
		return true;
	}
	return false;
}

Vector3 func_194(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_351(uParam0, iParam1) };
	return vVar0;
}

void func_209(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (__LIB_0__::func_86(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_376(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_245()
{
	switch (Local_274.f_2)
	{
		case 0:
			func_383(&Local_15, &Local_274);
			break;
	}
}

void func_247(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	struct<4> Var0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -98.0465f, 227.8637f, 99.6174f, 342f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							__LIB_2__::func_68(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							__LIB_2__::func_68(&Var0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							Jump @4892; //curOff = 4860
							__LIB_2__::func_68(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							Jump @5957; //curOff = 4892
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
									break;
							}
							Jump @5957; //curOff = 4938
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
									break;
							}
							Jump @5957; //curOff = 4984
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
									break;
								case 2:
									__LIB_2__::func_68(&Var0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
									break;
								case 3:
									__LIB_2__::func_68(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
									break;
							}
							Jump @5957; //curOff = 5135
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
									break;
							}
							Jump @5957; //curOff = 5181
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
									break;
							}
							Jump @5957; //curOff = 5227
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
									break;
							}
							Jump @5957; //curOff = 5273
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
									break;
							}
							Jump @5957; //curOff = 5319
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
									break;
							}
							Jump @5957; //curOff = 5365
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
									break;
							}
							Jump @5957; //curOff = 5411
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
									break;
							}
							Jump @5957; //curOff = 5492
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
									break;
							}
							Jump @5957; //curOff = 5538
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
									break;
							}
							Jump @5957; //curOff = 5584
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
									break;
							}
							Jump @5957; //curOff = 5630
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
									break;
							}
							Jump @5957; //curOff = 5676
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							Jump @5957; //curOff = 5757
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
									break;
							}
							Jump @5957; //curOff = 5803
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
									break;
								case 2:
									__LIB_2__::func_68(&Var0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
									break;
								case 3:
									__LIB_2__::func_68(&Var0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
									break;
							}
							Jump @6225; //curOff = 5957
							switch (iParam0)
							{
								case 13:
									switch (iParam4)
									{
										case 0:
											__LIB_2__::func_68(&Var0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
											break;
										case 1:
											__LIB_2__::func_68(&Var0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
											break;
									}
									break;
								case 33:
									switch (iParam4)
									{
										case 0:
											__LIB_2__::func_68(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
											break;
										case 1:
											__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
											break;
									}
									break;
								case 0:
									switch (iParam4)
									{
										case 1:
											__LIB_2__::func_68(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
											break;
									}
									break;
							}
							Jump @6225; //curOff = 6194
							*uParam2 = { 0f, 0f, 0f };
							*uParam3 = 0f;
							Jump @6225; //curOff = 6208
							*uParam2 = { 0f, 0f, 0f };
							*uParam3 = 0f;
							*uParam2 = { Var0 };
							*uParam3 = Var0.f_3;
							if (__LIB_0__::func_86(*uParam2))
							{
								*uParam2 = { 0f, 0f, 0f };
								*uParam3 = 0f;
							}
						}
bool func_248(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

void func_258(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_394(uParam0, iVar0, 0, 1);
		iVar0++;
	}
}

bool func_259(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_395(uParam0, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_260(var uParam0)
{
	func_397(uParam0, 0, func_396(uParam0, 0));
	func_397(uParam0, 0, func_398(uParam0, 0));
	func_397(uParam0, 1, func_396(uParam0, 1));
	func_397(uParam0, 1, func_398(uParam0, 1));
}

bool func_261(var uParam0)
{
	if (!func_399(uParam0, 0, func_396(uParam0, 0)))
	{
		return false;
	}
	if (!func_399(uParam0, 0, func_398(uParam0, 0)))
	{
		return false;
	}
	if (!func_399(uParam0, 1, func_396(uParam0, 1)))
	{
		return false;
	}
	if (!func_399(uParam0, 1, func_398(uParam0, 1)))
	{
		return false;
	}
	return true;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -440759658;
		case 1:
			return -678891981;
		case 2:
			return -959492928;
		case 3:
			return -387344661;
		case 4:
			return 388723566;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_266(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_400(uParam0, iParam1) };
	return vVar0;
}

var func_267(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_400(uParam0, iParam1) };
	return Var0.f_3;
}

Vector3 func_270(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_406(uParam0, iParam1) };
	return vVar0;
}

var func_271(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_406(uParam0, iParam1) };
	return Var0.f_3;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 4:
			return 0;
		case 3:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0259_G_M_M_UniMountainMen_03_NATIVE_01";
		case 1:
			return "0258_G_M_M_UniMountainMen_02_WHITE_02";
		default:
			break;
	}
	return "NULL VOICE";
}

bool func_294(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (__LIB_2__::func_256(uParam0))
			{
				__LIB_0__::func_11(uParam0, 1);
				return true;
			}
			break;
		case 1:
			if (__LIB_2__::func_346(uParam0))
			{
				__LIB_0__::func_11(uParam0, 2);
				return true;
			}
			break;
		case 2:
			if (__LIB_2__::func_321(uParam0))
			{
				__LIB_0__::func_11(uParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_426(uParam0))
			{
				__LIB_0__::func_11(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_427(uParam0))
			{
				__LIB_0__::func_11(uParam0, 5);
				return true;
			}
			break;
		case 5:
			if (__LIB_2__::func_422(uParam0))
			{
				__LIB_0__::func_11(uParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	uParam0->f_224++;
	uParam0->f_224 = (uParam0->f_224 % 7);
	return false;
}

void func_299()
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	fVar2 = 0f;
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			vVar3 = { func_429(&Local_274, iVar0) };
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], vVar3, 4f, 1, 0, 0);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
			{
				PED::FORCE_PED_MOTION_STATE(Local_15.f_40[iVar0], 1619979220, false, 0, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 3f, 20000, 3f, 1, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, fVar2, 0, 1, 1);
		}
		iVar0++;
	}
}

void func_301()
{
	vector3 vVar0;
	int iVar4;
	if (__LIB_0__::func_51(&Local_274, 16))
	{
		return;
	}
	vVar0 = { func_430(&Local_274, 0) };
	if (__LIB_2__::func_1(Local_15[0], 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 2f, 20000, 4f, 1, vVar0.f_3);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 2f, 0, 2f, 2.5f, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[0], &iVar4, 0, 0, 1, 1);
		PED::SET_COMBAT_FLOAT(Local_15[0], 32, 3f);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[0], vVar0, func_431(&Local_274, 0), 1, 0, 0);
	}
	vVar0 = { func_430(&Local_274, 1) };
	if (__LIB_2__::func_1(Local_15[1], 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 2f, 20000, 4f, 1, vVar0.f_3);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 2f, 0, 2f, 2.5f, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[1], &iVar4, 0, 0, 1, 1);
		PED::SET_COMBAT_FLOAT(Local_15[1], 32, 2.25f);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[1], vVar0, func_431(&Local_274, 1), 1, 0, 0);
	}
	if (__LIB_2__::func_1(Local_15[2], 0, 0))
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[2], func_429(&Local_274, 2), func_431(&Local_274, 2), 1, 0, 0);
		TASK::TASK_COMBAT_PED(Local_15[2], Global_35, 0, 0);
	}
	__LIB_1__::func_283(&(Local_274.f_8[6 /*3*/]), 0);
	__LIB_0__::func_7(&Local_274, 16);
}

void func_302()
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 0f;
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, fVar2, 0, 1, 1);
		}
		iVar0++;
	}
}

bool func_320(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_78[iParam1] && iParam2) != 0;
}

void func_322(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_78[iParam1] = (uParam0->f_78[iParam1] || iParam2);
}

float func_323(var uParam0, int iParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 3f;
					case 1:
						return 3f;
					case 2:
						return 10f;
					case 3:
						return 2f;
					case 4:
						return 2f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 3f;
					case 1:
						return 3f;
					case 2:
						return 10f;
					case 3:
						return 2f;
					case 4:
						return 2f;
					default:
						break;
				}
			}
			break;
	}
	return 0f;
}

void func_325(int iParam0, float fParam1)
{
	PED::SET_COMBAT_FLOAT(Local_15[iParam0], 32, fParam1);
	TASK::TASK_COMBAT_PED(Local_15[iParam0], Global_35, 100663296, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iParam0], ENTITY::GET_ENTITY_COORDS(Local_15[iParam0], false, false), func_431(&Local_274, iParam0), 1, 0, 0);
}

int func_328(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	fVar2 = 1E+09f;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (func_272(iVar0) == iParam2 || iParam2 == -1)
			{
				fVar3 = __LIB_1__::func_992(Local_15[iVar0], Global_36, 0);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

struct<4> func_351(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_2)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
					case 1:
					case 2:
						return func_446(0, 15);
					case 3:
					case 4:
						return func_446(0, 16);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
					case 1:
					case 2:
						return func_446(1, 15);
					case 3:
					case 4:
						return func_446(1, 16);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

bool func_376(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.f_1)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_383(var uParam0, var uParam1)
{
	vector3 vVar0;
	if (__LIB_0__::func_51(uParam1, 1))
	{
		uParam1->f_30[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_30[3], -1542.637f, -1218.391f, 81.70453f, 0f, 0f, 0f, 81.558f, 50f, 20f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_30[3], -1549.831f, -1192.118f, 81.70453f, 0f, 0f, 30f, 81.558f, 50f, 20f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_30[3], -1548.659f, -1234.064f, 81.70453f, 0f, 0f, -43f, 81.558f, 50f, 20f);
		uParam1->f_30[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_30[1], -1573.147f, -1374.548f, 76.45531f, 0f, 0f, -93.5179f, 240f, 85.22054f, 100f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_30[1], -1534.233f, -1054.369f, 61.73892f, 0f, 0f, -90.04591f, 240f, 30f, 100f);
		uParam1->f_30[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1596.85f, -1219.203f, 81.59963f, 0f, 0f, 9.999998f, 120f, 60f, 22f, "volCenter");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0x39816F6F94F385AD(uParam0->f_182[0], -1482.383f, -1228.075f, 80.66719f, 0f, 0f, -29.34534f, 50f, 42.33862f, 20f);
		VOLUME::_0x39816F6F94F385AD(uParam0->f_182[0], -1521.568f, -1217.329f, 80.66719f, 0f, 0f, -7.414361f, 98.46413f, 58.40728f, 20f);
		uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1501.019f, -1218.987f, 80.66719f, 0f, 0f, -8.345336f, 50f, 50f, 40f, "volSlower");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1530.075f, -1217.147f, 80.66718f, 0f, 0f, 0f, 50f, 50f, 40f, "volSlowest");
		vVar0 = { -1604.137f, -1211.528f, 73.686f };
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 120f, 120f, 40f, "volAvoidance");
	}
	else if (__LIB_0__::func_51(uParam1, 2))
	{
		uParam1->f_30[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1599.013f, -1218.391f, 78.70453f, 0f, 0f, 0f, 67.39491f, 50f, 20f, "volTrigger");
		uParam1->f_30[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_30[1], -1474.001f, -1324.089f, 76.45531f, 0f, 0f, -65.87521f, 240f, 159.1742f, 100f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_30[1], -1584.504f, -1064.411f, 61.73892f, 0f, 0f, -72.43196f, 240f, 152.7547f, 100f);
		uParam1->f_30[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1554.124f, -1211.669f, 81.59963f, 0f, 0f, 9.999996f, 120f, 60f, 22f, "volCenter");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0x39816F6F94F385AD(uParam0->f_182[0], -1612.589f, -1218.997f, 76.56673f, 0f, 0f, 179.5794f, 74.07483f, 88.18665f, 20f);
		VOLUME::_0x39816F6F94F385AD(uParam0->f_182[0], -1565.211f, -1214.525f, 80.66719f, 0f, 0f, -178.4896f, 98.46413f, 58.40728f, 20f);
		uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1610.85f, -1218.876f, 80.66719f, 0f, 0f, -1.543747f, 50f, 50f, 40f, "volSlower");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1583.123f, -1216.809f, 80.66718f, 0f, 0f, 0f, 50f, 50f, 40f, "volSlowest");
		uParam1->f_30[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1560.341f, -1254.811f, 103.0061f, 0f, 0f, 22.57251f, 67.39491f, 50f, 98.98704f, "volBypass");
		vVar0 = { -1560.237f, -1211.528f, 73.686f };
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 120f, 120f, 40f, "volAvoidance");
	}
}

void func_394(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	char* sVar0;
	sVar0 = func_455(uParam0, iParam1);
	if (bParam3)
	{
		uParam0->f_43[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sParam2, false, true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_43[iParam1], true, false))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_43[iParam1]);
}

bool func_395(var uParam0, int iParam1)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_43[iParam1]))
	{
		return false;
	}
	sVar0 = func_455(uParam0, iParam1);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_43[iParam1], true, false))
	{
		return false;
	}
	return true;
}

char* func_396(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				return "PBL_ACTION_A";
			}
			else
			{
				return "PBL_ACTION_B";
			}
			break;
		case 1:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				return "PBL_ACTION_B";
			}
			else
			{
				return "PBL_ACTION_B";
			}
			break;
	}
	return "";
}

void func_397(var uParam0, int iParam1, char* sParam2)
{
	__LIB_2__::func_544(uParam0->f_43[iParam1], sParam2, func_455(uParam0, iParam1));
}

char* func_398(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				return "PBL_BREAKOUT_A";
			}
			else
			{
				return "PBL_BREAKOUT_B";
			}
			break;
		case 1:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				return "PBL_BREAKOUT_B";
			}
			else
			{
				return "PBL_BREAKOUT_B";
			}
			break;
	}
	return "";
}

bool func_399(var uParam0, int iParam1, char* sParam2)
{
	if (__LIB_2__::func_545(uParam0->f_43[iParam1], sParam2, func_455(uParam0, iParam1)))
	{
		return true;
	}
	return false;
}

struct<4> func_400(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_2)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_446(0, 10);
					case 1:
						return func_446(0, 11);
					case 2:
						return func_446(0, 12);
					case 3:
						return func_446(0, 13);
					case 4:
						return func_446(0, 14);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_446(1, 10);
					case 1:
						return func_446(1, 11);
					case 2:
						return func_446(1, 12);
					case 3:
						return func_446(1, 13);
					case 4:
						return func_446(1, 14);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_406(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_2)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_446(0, 0);
					case 1:
						return func_446(0, 2);
					case 2:
						return func_446(0, 4);
					case 3:
						return func_446(0, 6);
					case 4:
						return func_446(0, 8);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_446(1, 0);
					case 1:
						return func_446(1, 2);
					case 2:
						return func_446(1, 4);
					case 3:
						return func_446(1, 6);
					case 4:
						return func_446(1, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

bool func_426(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 262144))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_533(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_427(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 524288))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_534(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_429(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_430(uParam0, iParam1) };
	return vVar0;
}

struct<4> func_430(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_2)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_446(0, 1);
					case 1:
						return func_446(0, 3);
					case 2:
						return func_446(0, 5);
					case 3:
						return func_446(0, 7);
					case 4:
						return func_446(0, 9);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_446(1, 1);
					case 1:
						return func_446(1, 3);
					case 2:
						return func_446(1, 5);
					case 3:
						return func_446(1, 7);
					case 4:
						return func_446(1, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

float func_431(var uParam0, int iParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 3f;
					case 1:
						return 3f;
					case 2:
						return 11f;
					case 3:
						return 7f;
					case 4:
						return 11f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 3f;
					case 1:
						return 2f;
					case 2:
						return 7f;
					case 3:
						return 5f;
					case 4:
						return 5f;
					default:
						break;
				}
			}
			break;
	}
	return 0f;
}

struct<4> func_446(int iParam0, int iParam1)
{
	return func_537(iParam0, iParam1);
}

char* func_455(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return "script@proc@ambushes@savage_tree_line_a";
			case 1:
				return "script@proc@ambushes@savage_tree_line_d";
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "script@proc@ambushes@savage_tree_line_b";
			case 1:
				return "script@proc@ambushes@savage_tree_line_c";
			default:
				break;
		}
	}
	return "";
}

int func_533(var uParam0, float fParam1, int iParam2)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	bool bVar6;
	iVar4 = 0;
	while (iVar4 < uParam0->f_217)
	{
		iVar0[iVar5] = uParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0[iVar5] = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iVar5++;
	}
	return func_636(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584 /* Float: 5f */, bVar6, iParam2);
}

bool func_534(var uParam0, float fParam1, int iParam2)
{
	var uVar0[5];
	var uVar6[9];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	iVar16 = 0;
	while (iVar16 < uParam0->f_216)
	{
		uVar6[iVar17] = uParam0->f_40[iVar16];
		iVar17++;
		iVar16++;
	}
	uVar6[iVar17] = uParam0->f_56;
	iVar17++;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		iVar18 = __LIB_2__::func_129(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = __LIB_2__::func_202(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
	}
	iVar16 = 0;
	while (iVar16 < iVar18)
	{
		iVar19 = 0;
		iVar27 = PED::_GET_RIDER_OF_MOUNT(uVar0[iVar16], false);
		if (iVar27 != 0 && iVar27 != Global_35)
		{
			vVar21 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar16], true, false) };
			if (!__LIB_0__::func_86(vVar21))
			{
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar21, &vVar24, 1, 3f, 0f))
				{
					if (func_376(vVar21, vVar24, 5f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, uParam0->f_209, 40f))
					{
						iVar19 = 1;
						iVar20 = 1;
					}
				}
			}
		}
		iVar16++;
	}
	return iVar20;
}

struct<4> func_537(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_644(iParam0, iParam1) };
	Var0.f_3 = func_645(iParam0, iParam1);
	return Var0;
}

int func_636(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
{
	int iVar0[5];
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam9))
	{
		iVar12 = __LIB_2__::func_130(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = __LIB_2__::func_203(&iVar0, iParam0, iVar0, vParam1, iParam4);
	}
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = 0;
		if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0[iVar13])))
		{
		}
		else if ((!bParam6 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0[iVar13], -1) != 0) && (!bParam5 || ENTITY::GET_ENTITY_SPEED(iVar0[iVar13]) >= 1f))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0[iVar13], true, false) };
			if (!__LIB_0__::func_86(vVar6))
			{
				vVar9 = { 0f, 0f, 0f };
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar6, &vVar9, 1, 3f, 0f))
				{
					if (func_376(vVar6, vVar9, iParam7, 0))
					{
						iVar14 = 1;
						iVar15 = 1;
					}
				}
			}
		}
		iVar13++;
	}
	return iVar15;
}

Vector3 func_644(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1585.985f, -1227.106f, 73.9059f;
				case 1:
					return -1583.833f, -1218.433f, 73.8641f;
				case 2:
					return -1579.018f, -1204.936f, 74.0425f;
				case 3:
					return -1575.301f, -1211.091f, 73.5777f;
				case 4:
					return -1633.156f, -1202.183f, 77.5955f;
				case 5:
					return -1625.015f, -1214.545f, 76.3667f;
				case 6:
					return -1650.596f, -1164.839f, 77.3509f;
				case 7:
					return -1621.744f, -1216.257f, 76.0946f;
				case 8:
					return -1656.902f, -1159.317f, 76.8231f;
				case 9:
					return -1633.914f, -1225.551f, 76.9151f;
				case 10:
					return -1591.575f, -1193.35f, 74.9188f;
				case 11:
					return -1589.209f, -1193.883f, 74.9859f;
				case 12:
					return -1640.897f, -1194.591f, 77.1466f;
				case 13:
					return -1650.583f, -1164.761f, 77.3499f;
				case 14:
					return -1656.938f, -1159.099f, 76.7861f;
				case 15:
					return -1605.67f, -1220.157f, 74.6186f;
				case 16:
					return -1633.568f, -1228.971f, 76.9986f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1575.604f, -1204.307f, 74.0553f;
				case 1:
					return -1575.218f, -1210.948f, 73.5759f;
				case 2:
					return -1580.551f, -1225.989f, 73.855f;
				case 3:
					return -1583.831f, -1221.589f, 73.8885f;
				case 4:
					return -1500.199f, -1241.778f, 75.8749f;
				case 5:
					return -1524.925f, -1234.954f, 75.6117f;
				case 6:
					return -1542.497f, -1151.738f, 74.8044f;
				case 7:
					return -1542.699f, -1193.379f, 76.3492f;
				case 8:
					return -1537.387f, -1143.066f, 73.4381f;
				case 9:
					return -1529.507f, -1199.57f, 74.8505f;
				case 10:
					return -1535.509f, -1188.007f, 76.2348f;
				case 11:
					return -1535.526f, -1191.02f, 75.702f;
				case 12:
					return -1494.656f, -1237.089f, 76.172f;
				case 13:
					return -1542.516f, -1151.754f, 74.8046f;
				case 14:
					return -1537.331f, -1143.061f, 73.4374f;
				case 15:
					return -1532.607f, -1212.738f, 74.4779f;
				case 16:
					return -1466.475f, -1240.286f, 76.7259f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_645(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 337.9035f;
				case 1:
					return 283.9035f;
				case 2:
					return 265.9035f;
				case 3:
					return 271.9035f;
				case 4:
					return 249.0514f;
				case 5:
					return 261.0514f;
				case 6:
					return 199.162f;
				case 7:
					return 203.162f;
				case 8:
					return 183.0514f;
				case 9:
					return 229.0514f;
				case 10:
					return 165.08f;
				case 11:
					return 149.463f;
				case 12:
					return 203.6293f;
				case 13:
					return 185.6293f;
				case 14:
					return 215.6293f;
				case 15:
					return 121.6181f;
				case 16:
					return 95.6181f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 191.9035f;
				case 1:
					return 117.9035f;
				case 2:
					return 29.9037f;
				case 3:
					return 95.9037f;
				case 4:
					return 85.0515f;
				case 5:
					return 61.0515f;
				case 6:
					return 187.9106f;
				case 7:
					return 151.9106f;
				case 8:
					return 205.162f;
				case 9:
					return 163.162f;
				case 10:
					return -92.92f;
				case 11:
					return 239.463f;
				case 12:
					return 355.6293f;
				case 13:
					return 195.6293f;
				case 14:
					return 203.6293f;
				case 15:
					return 265.6181f;
				case 16:
					return 239.6181f;
			}
			break;
	}
	return 0f;
}

