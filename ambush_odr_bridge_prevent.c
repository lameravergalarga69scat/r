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
	struct<248> Local_15 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<21> Local_274[1];
	struct<17> Local_296[2];
	bool bLocal_331 = false;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_351[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_360[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	float fLocal_371 = 0f;
	vector3 vLocal_372[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_388[3] = { 0, 0, 0 };
	int iLocal_392[5] = { 0, 0, 0, 0, 0 };
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	int iLocal_411[3] = { 0, 0, 0 };
	bool bLocal_415 = false;
	bool bLocal_416 = false;
	vector3 vLocal_417 = { 0f, 0f, 0f };
	float fLocal_420 = 0f;
	int iLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = -1082130432;
	var uLocal_429 = -1082130432;
	var uLocal_430 = -1082130432;
	var uLocal_431 = -1082130432;
	var uLocal_432 = -1082130432;
	var uLocal_433 = -1082130432;
	var uLocal_434 = -1;
	var uLocal_435 = -1;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	bool bLocal_439 = false;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	bool bLocal_443 = false;
	int iLocal_444 = 0;
	int iLocal_445[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_454 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_338 = -1;
	fLocal_420 = -1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_454 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_454, 969, 0);
		if (bLocal_454)
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
			__LIB_2__::func_435();
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
					if (func_12())
					{
						if (__LIB_0__::func_0())
						{
							__LIB_2__::func_233(&Local_15, 4);
						}
					}
					break;
				case 4:
					if (func_14())
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
							__LIB_2__::func_147(&Local_15, 16);
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
									__LIB_2__::func_671(&Local_15, 1);
									break;
							}
						}
						__LIB_2__::func_266();
						__LIB_2__::func_267(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						__LIB_2__::func_428(&Local_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						__LIB_2__::func_147(&Local_15, 16384);
						__LIB_2__::func_233(&Local_15, 10);
					}
					break;
				case 10:
					__LIB_2__::func_721();
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
						__LIB_2__::func_457(&Local_15, 1);
						__LIB_0__::func_747(120, 0, 1);
						__LIB_2__::func_304(1, -1, 0, 0, 0);
						__LIB_2__::func_235(&Local_15);
						__LIB_2__::func_233(&Local_15, 11);
					}
					break;
				case 11:
					__LIB_2__::func_418(&Local_15);
					__LIB_2__::func_332();
					if (func_39(&Local_15))
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
					if (func_42())
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
			__LIB_2__::func_149(&Local_15, 4);
		}
	}
	fVar0 = 8f;
	if (Local_15.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!func_46() && !__LIB_1__::func_285(&(Local_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_2__::func_7())
	{
		__LIB_1__::func_283(&(Local_15.f_250), 0);
		return;
	}
	if (__LIB_1__::func_285(&(Local_15.f_250), fVar0))
	{
	}
	__LIB_2__::func_418(&Local_15);
	func_49();
	__LIB_2__::func_423(&Local_15, 0);
	func_51();
	__LIB_2__::func_317(&Local_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_428(&Local_15, 1);
	__LIB_2__::func_445(&Local_15, 0);
	if (Local_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_15.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_237))
	{
		__LIB_2__::func_371(&Local_15);
		__LIB_1__::func_544(Local_15.f_237);
	}
	__LIB_2__::func_457(&Local_15, 1);
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
	if (func_65())
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
			if (__LIB_2__::func_205(&Local_15))
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
		if (__LIB_2__::func_604())
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
		__LIB_2__::func_432(&(Local_15.f_152));
		__LIB_2__::func_433(&(Local_15.f_152));
		__LIB_2__::func_104(&(Local_15.f_152), 0);
		__LIB_2__::func_105(&(Local_15.f_152), 1);
		__LIB_1__::func_975(&(Local_15.f_152), 6f);
		Local_15.f_209 = { Param0 };
		Local_15.f_151 = Param0.f_3;
		Local_15.f_221 = Param0.f_4;
		Local_15.f_222 = __LIB_2__::func_12(Local_15.f_151);
		if (Param0.f_7)
		{
			__LIB_2__::func_147(&Local_15, 2);
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
				vVar1 = { __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221) };
				vVar1 = { __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221) };
				if (__LIB_0__::func_0())
				{
					if (__LIB_2__::func_14(&Local_15))
					{
						__LIB_2__::func_147(&Local_15, 1);
					}
				}
				if (!Local_15.f_227)
				{
					if (__LIB_2__::func_15(Local_15.f_181, 0))
					{
						Local_15.f_227 = __LIB_2__::func_284(Local_15.f_181, -1);
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
					iVar4 = func_97(iVar1);
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

bool func_12()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (Local_15.f_217 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_2__::func_635(iVar0);
	vVar2 = { func_99(iVar0) };
	fVar5 = func_100(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_15.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_15.f_49[iVar0], 0f);
		ENTITY::SET_ENTITY_VISIBLE(Local_15.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(Local_15.f_49[iVar0]);
		__LIB_2__::func_19(Local_15.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_49[iVar0], true, false);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_217)
	{
		Local_15.f_220 = 0;
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
	if (Local_15.f_218 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = func_104(iVar0);
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	if (iVar1 != 0)
	{
		if (func_107(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_15.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_15.f_52[iVar0], 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(Local_15.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_52[iVar0], true, false);
		}
		if (func_107(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_15.f_52[iVar0], 0);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_218)
	{
		Local_15.f_220 = 0;
		return true;
	}
	return false;
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
	float fVar5;
	int iVar6;
	int iVar7;
	if (Local_15.f_215 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) };
	fVar5 = func_117(iVar0);
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
			Local_15[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			Local_15[iVar0] = PED::_0xEAF682A14F8E5F53(Local_15.f_31[iVar0], vVar2, fVar5, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
			{
				Local_15[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
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
	vector3 vVar1;
	float fVar4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_15.f_49[0], false, false))
	{
		func_125(1);
		PROPSET::_0xD80FAF919A2E56EA(Local_15.f_49[0], joaat("PG_RE_ODRISCOLLWAGON01X"));
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			PED::_0x8ACC0506743A8A5C(Local_15[iVar0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 246, true);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			PED::SET_COMBAT_FLOAT(Local_15[iVar0], 39, 8f);
			__LIB_2__::func_314(&Local_15, iVar0, -1, -1);
			func_127(iVar0);
		}
		iVar0++;
	}
	__LIB_2__::func_594(iLocal_339, func_128());
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_15.f_49[0], false, false) };
	fVar4 = ENTITY::GET_ENTITY_HEADING(Local_15.f_49[0]);
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_49[0], -2f, 3f, 0f) };
	iLocal_341[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar1, 0f, 0f, fVar4, 4f, 14f, 6f, "volDefAreaWagon");
	func_130(&uLocal_422, joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), "bridgeBlock", ENTITY::GET_ENTITY_COORDS(Local_15[0], false, false), 0f, 80f, 80f, 80f);
	PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(Local_15.f_49[0], joaat("PG_TEAMSTER_WAGON02X_LIGHTUPGRADE1"));
	return true;
}

bool func_23()
{
	vector3 vVar0;
	int iVar3;
	iVar3 = -1;
	if (iLocal_333 < 6)
	{
		if (func_133())
		{
			if (func_134())
			{
				func_125(0);
				iLocal_333 = 6;
			}
		}
		else if (func_135())
		{
			func_125(0);
			iLocal_333 = 6;
		}
		if (iLocal_333 == 6)
		{
			func_125(0);
		}
	}
	if (iLocal_333 > 0 || iLocal_332 > 0)
	{
		func_136();
		iVar3 = func_137();
	}
	func_138();
	switch (iLocal_333)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				vVar0 = { __LIB_2__::func_114(Global_35, 1.5f) };
			}
			else
			{
				vVar0 = { __LIB_2__::func_114(Global_35, 0.5f) };
			}
			if (!__LIB_0__::func_51(&uLocal_335, 4) && !__LIB_0__::func_51(&uLocal_335, 8))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_209, true) < 150f)
				{
					if (__LIB_2__::func_720(&Local_15))
					{
						if (__LIB_0__::func_0())
						{
							__LIB_2__::func_147(&Local_15, 16);
							__LIB_2__::func_233(&Local_15, 13);
						}
						else
						{
							if (func_143())
							{
								if (__LIB_1__::func_205(Global_35, iLocal_341[1], 1, 0) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_341[1], vVar0))
								{
									if (!__LIB_0__::func_51(&uLocal_335, 4))
									{
										__LIB_0__::func_7(&uLocal_335, 4);
									}
									if (func_146())
									{
										iLocal_333 = 1;
									}
								}
								else if (__LIB_1__::func_205(Global_35, iLocal_341[8], 1, 0))
								{
									if (!__LIB_0__::func_51(&uLocal_335, 8))
									{
										__LIB_0__::func_7(&uLocal_335, 8);
									}
									if (func_146())
									{
										iLocal_333 = 1;
									}
								}
							}
							Jump @777; //curOff = 405
							if (iVar3 == -1 && func_147())
							{
								__LIB_0__::func_8(&uLocal_335, 4096);
								__LIB_1__::func_148(&(vLocal_372[0 /*3*/]));
								iLocal_333 = 2;
							}
							else if (__LIB_1__::func_285(&(vLocal_372[0 /*3*/]), 3f))
							{
								if (!bLocal_439 && iVar3 == -1)
								{
									if (Local_274[0 /*21*/].f_1 == -1)
									{
										func_150(1);
										bLocal_439 = true;
									}
								}
								switch (iVar3)
								{
									case 0:
										__LIB_0__::func_7(&uLocal_335, 8192);
										func_150(0);
										__LIB_1__::func_148(&(vLocal_372[0 /*3*/]));
										__LIB_0__::func_7(&uLocal_335, 4096);
										break;
									case 1:
										func_150(0);
										__LIB_0__::func_7(&uLocal_335, 1024);
										break;
								}
							}
							Jump @777; //curOff = 578
							if (iVar3 == -1 && func_151())
							{
								__LIB_0__::func_8(&uLocal_335, 4096);
								iLocal_333 = 3;
							}
							else if (__LIB_1__::func_285(&(vLocal_372[0 /*3*/]), 6f) && __LIB_2__::func_227(0, 1, Local_15[0], 1))
							{
								if (Local_274[0 /*21*/].f_1 == -1)
								{
									func_150(1);
								}
								switch (iVar3)
								{
									case 0:
										__LIB_0__::func_7(&uLocal_335, 8192);
										func_150(0);
										__LIB_1__::func_148(&(vLocal_372[0 /*3*/]));
										__LIB_0__::func_7(&uLocal_335, 4096);
										break;
									case 1:
										func_150(0);
										__LIB_0__::func_7(&uLocal_335, 1024);
										break;
								}
							}
							Jump @777; //curOff = 738
							func_153();
							if (func_154())
							{
								iLocal_333 = 6;
							}
							Jump @777; //curOff = 756
							__LIB_2__::func_480(&Local_296, 1, 1, 1, 0);
							return true;
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

bool func_31()
{
	int iVar0;
	vector3 vVar1;
	char[] cVar5[8];
	func_168();
	func_138();
	func_169();
	func_170();
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (!iLocal_445[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
			{
				if (__LIB_2__::func_398(Local_15[iVar0]))
				{
					__LIB_2__::func_603(&(Local_15[iVar0]), &(Local_274[0 /*21*/]), &Local_296, 1, 1);
					iLocal_445[iVar0] = 1;
				}
			}
			else
			{
				iLocal_445[iVar0] = 1;
			}
		}
		iVar0++;
	}
	switch (iLocal_334)
	{
		case 0:
			__LIB_1__::func_283(&(vLocal_372[3 /*3*/]), 0);
			if (!__LIB_0__::func_65(&Global_1393447, 16))
			{
				__LIB_2__::func_671(&Local_15, 1);
				__LIB_2__::func_483(&Local_15, 1);
			}
			if (__LIB_2__::func_1(Local_15[4], 0, 0))
			{
				__LIB_2__::func_73(Local_15[4], &(Local_15.f_22[4]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				vVar1 = { func_174() };
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[4], vVar1, 3f, 1, 0, 0);
				PED::_0x78815FC52832B690(Local_15[4], 1);
				TASK::TASK_COMBAT_PED(Local_15[4], Global_35, 0, 0);
			}
			Local_15.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			iLocal_334 = 1;
			break;
		case 1:
			if (__LIB_1__::func_285(&(vLocal_372[3 /*3*/]), 2.5f))
			{
				func_175();
				iLocal_334 = 3;
			}
			break;
		case 2:
			break;
		case 3:
			func_176();
			func_177();
			if (!__LIB_0__::func_51(&uLocal_335, 65536))
			{
				if (__LIB_1__::func_285(&(vLocal_372[3 /*3*/]), 7f))
				{
					func_178();
					__LIB_0__::func_7(&uLocal_335, 65536);
				}
			}
			else if (!__LIB_0__::func_51(&uLocal_335, 131072))
			{
				if (__LIB_2__::func_207(&Local_15) <= 3)
				{
					func_180();
					__LIB_0__::func_7(&uLocal_335, 131072);
				}
			}
			switch (iLocal_337)
			{
				case 0:
					cVar5 = "AMBUSH_BRP_FLEE";
					break;
				case 1:
					cVar5 = "AMBUSH_BRP_V2_FLEE";
					break;
				default:
					cVar5 = "COMBAT_FLEE";
					break;
			}
			if (func_181(&Local_15, &iLocal_338, &(Local_15.f_241), cVar5, 10f))
			{
				__LIB_2__::func_601(&uLocal_398, 0);
				iLocal_334 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_39(var uParam0)
{
	if (!bLocal_416)
	{
		bLocal_416 = __LIB_2__::func_333(uParam0);
	}
	else
	{
		switch (iLocal_337)
		{
			case 0:
				return __LIB_2__::func_478(Global_35, 0, "AMBUSH_BRP_VI_POST_FINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			case 1:
				return __LIB_2__::func_478(Global_35, 0, "AMBUSH_BRP_V2_POST_FINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			case 2:
				return __LIB_2__::func_478(Global_35, 0, "AMBUSH_BRP_V3_POST_FINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			case 3:
				return __LIB_2__::func_478(Global_35, 0, "AMBUSH_BRP_V4_POST_FINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			default:
				return true;
		}
	}
	return false;
}

bool func_42()
{
	if (__LIB_1__::func_285(&(Local_15.f_244), 45f) && func_200())
	{
		__LIB_2__::func_371(&Local_15);
		__LIB_0__::func_37(&(Local_15.f_244));
	}
	return false;
}

bool func_46()
{
	if (__LIB_2__::func_4(&Local_15, 16384))
	{
		return true;
	}
	return func_202();
}

int func_49()
{
	__LIB_2__::func_601(&uLocal_398, 0);
	if (!__LIB_0__::func_86(vLocal_417))
	{
		func_204(&Local_15, vLocal_417, fLocal_420);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]))
	{
		if (!func_205(Local_15.f_49[0], 200f, 100f))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_15.f_49[0]));
		}
	}
	if (iLocal_421 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_421);
	}
	return 1;
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
					if (func_213(iVar0))
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
			if (__LIB_2__::func_297(iVar0))
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
			if (func_215(&Local_15, Local_15.f_52[iVar0]))
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

bool func_65()
{
	if (Local_15.f_95 > 0 && Local_15.f_95 < 10)
	{
		if (iLocal_333 <= 0 && !__LIB_0__::func_51(&uLocal_335, 4))
		{
			if (func_226())
			{
				return true;
			}
		}
	}
	return false;
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
	return 160f;
}

bool func_83()
{
	int iVar0;
	switch (Local_15.f_221)
	{
		case 0:
			iLocal_336 = 0;
			break;
		case 1:
			iLocal_336 = 1;
			break;
		case 2:
			iLocal_336 = 2;
			break;
		default:
			iLocal_336 = 0;
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221), true))
	{
		__LIB_0__::func_7(&uLocal_335, 1);
	}
	iVar0 = 6;
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				vLocal_417 = { -604.3809f, 416.4008f, 95.68143f };
				fLocal_420 = 130f;
				iVar0 = 6;
			}
			else
			{
				vLocal_417 = { -604.3809f, 416.4008f, 95.68143f };
				fLocal_420 = 130f;
				iVar0 = 6;
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				vLocal_417 = { 630.6806f, -475.5303f, 82.7373f };
				fLocal_420 = 50f;
				iVar0 = 6;
			}
			else
			{
				vLocal_417 = { 630.6806f, -475.5303f, 82.7373f };
				fLocal_420 = 50f;
				iVar0 = 6;
			}
			break;
		case 2:
			break;
	}
	if (!func_254())
	{
		switch ((Local_15.f_222 % 2))
		{
			case 0:
				iLocal_337 = 0;
				break;
			case 1:
				iLocal_337 = 1;
				break;
		}
	}
	else
	{
		switch ((Local_15.f_222 % 2))
		{
			case 0:
				iLocal_337 = 2;
				break;
			case 1:
				iLocal_337 = 3;
				break;
		}
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 1;
	Local_15.f_218 = 0;
	Local_15.f_216 = 3;
	if (func_254())
	{
		Local_15.f_181 = -1;
	}
	else
	{
		Local_15.f_181 = 0;
	}
	func_255();
	__LIB_2__::func_433(&(Local_15.f_152));
	__LIB_2__::func_432(&(Local_15.f_152));
	__LIB_2__::func_104(&(Local_15.f_152), 1);
	iLocal_339 = ANIMSCENE::_CREATE_ANIM_SCENE(func_128(), 0, "PBL_Initial_Encounter", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_339);
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 3, 1);
	if (!__LIB_0__::func_86(vLocal_417))
	{
		func_257(&Local_15, vLocal_417, fLocal_420, iVar0);
	}
	return true;
}

bool func_95()
{
	int iVar0;
	int iVar1;
	STREAMING::REQUEST_MODEL(func_97(0), false);
	STREAMING::REQUEST_MODEL(__LIB_2__::func_635(0), false);
	STREAMING::REQUEST_ANIM_DICT("SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@BRIDGE_BLOCK");
	PROPSET::_REQUEST_PROPSET(joaat("PG_RE_ODRISCOLLWAGON01X"));
	PROPSET::_REQUEST_PROPSET(joaat("PG_TEAMSTER_WAGON02X_LIGHTUPGRADE1"));
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::REQUEST_MODEL(func_104(iVar0), false);
		iVar0++;
	}
	iVar1 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(func_97(0)))
	{
		iVar1 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_635(0)))
	{
		iVar1 = 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_339, true, false))
	{
		iVar1 = 0;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_339, true, false))
	{
		__LIB_2__::func_544(iLocal_339, "PBL_Initial_Encounter", func_128());
		if (!__LIB_2__::func_545(iLocal_339, "PBL_Initial_Encounter", func_128()))
		{
			iVar1 = 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@BRIDGE_BLOCK"))
	{
		iVar1 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar1 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_104(iVar0)))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED(joaat("PG_RE_ODRISCOLLWAGON01X")))
	{
		iVar1 = 0;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED(joaat("PG_TEAMSTER_WAGON02X_LIGHTUPGRADE1")))
	{
		iVar1 = 0;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_339, true, false))
	{
		if (__LIB_0__::func_51(&uLocal_335, 1))
		{
			func_271(iLocal_339, func_128(), func_269(), func_270());
		}
		else
		{
			func_271(iLocal_339, func_128(), func_272(), func_273());
		}
	}
	return iVar1;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_274(iVar0);
}

int func_97(int iParam0)
{
	switch (iLocal_337)
	{
		case 2:
		case 3:
			return joaat("G_M_M_UNICRIMINALS_01");
	}
	return joaat("G_M_M_UNIDUSTER_01");
}

Vector3 func_99(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_275(iParam0) };
	return vVar0;
}

var func_100(int iParam0)
{
	struct<4> Var0;
	Var0 = { func_275(iParam0) };
	return Var0.f_3;
}

int func_104(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return joaat("P_TRUNK04X");
		case 1:
			return joaat("S_LOOTABLEAMMOCASE");
		default:
			break;
	}
	return 0;
}

bool func_107(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			return false;
		default:
			break;
	}
	return true;
}

Vector3 func_108(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_277(iParam0) };
	return vVar0;
}

var func_109(int iParam0)
{
	struct<4> Var0;
	Var0 = { func_277(iParam0) };
	return Var0.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_280(iVar0) };
	return vVar1;
}

float func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_280(iVar0) };
	return Var1.f_3;
}

void func_125(bool bParam0)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_15.f_49[0], bParam0);
	if (bParam0)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_15.f_49[0], 0f);
	}
	func_281(bParam0);
}

void func_127(int iParam0)
{
	int iVar0;
	char* sVar1;
	vector3 vVar2;
	float fVar5;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
			switch (iLocal_337)
			{
				case 0:
					__LIB_2__::func_133(Local_15[iParam0], "0361_G_M_M_UniDuster_03_WHITE_01", 0);
					break;
				case 1:
					__LIB_2__::func_133(Local_15[iParam0], "0360_G_M_M_UniDuster_03_IRISH_01", 0);
					break;
				case 2:
					__LIB_2__::func_133(Local_15[iParam0], "1056_G_M_M_UniCriminals_01_WHITE_03", 0);
					break;
				case 3:
					__LIB_2__::func_133(Local_15[iParam0], "1064_G_M_M_UniCriminals_01_BLACK_03", 0);
					break;
			}
			break;
		default:
			switch (iLocal_337)
			{
				case 0:
					__LIB_2__::func_133(Local_15[iParam0], "0359_G_M_M_UniDuster_02_IRISH_01", 0);
					break;
				case 1:
					__LIB_2__::func_133(Local_15[iParam0], "0358_G_M_M_UniDuster_02_WHITE_02", 0);
					break;
				case 2:
					__LIB_2__::func_133(Local_15[iParam0], "1064_G_M_M_UniCriminals_01_BLACK_03", 0);
					break;
				case 3:
					__LIB_2__::func_133(Local_15[iParam0], "1056_G_M_M_UniCriminals_01_WHITE_03", 0);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1:
			func_283(&iLocal_339, "PEDC", Local_15[iParam0], func_128(), 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], true, true);
			__LIB_2__::func_272(Local_15[iParam0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_314(&Local_15, iParam0, -1, -1);
			break;
		case 0:
			vVar2 = { __LIB_9__::func_81(iLocal_339, "PEDA", 0) };
			fVar5 = __LIB_9__::func_82(iLocal_339, "PEDA", 0);
			func_283(&iLocal_339, "PEDA", Local_15[iParam0], func_128(), 0);
			func_287(Local_15[iParam0], vVar2, fVar5, 1, 1073741824 /* Float: 2f */);
			__LIB_2__::func_106(&vVar2, 1, 10, 0);
			__LIB_2__::func_272(Local_15[iParam0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_314(&Local_15, iParam0, -1, -1);
			break;
		case 4:
			__LIB_1__::func_473(Local_15[iParam0], joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
			__LIB_2__::func_272(Local_15[iParam0], joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			break;
		default:
			if (iParam0 == 2)
			{
				vVar2 = { func_116(iParam0) };
				fVar5 = func_117(iParam0);
				__LIB_2__::func_106(&vVar2, 1, 10, 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], true, true);
				__LIB_2__::func_272(Local_15[iParam0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				iVar0 = joaat("WORLD_HUMAN_LEAN_POST_RIGHT");
				sVar1 = "WORLD_HUMAN_LEAN_POST_RIGHT_MALE_A";
				uLocal_388[2] = __LIB_3__::func_408(iVar0, vVar2, fVar5, 0, 0, 1);
				TASK::_TASK_USE_SCENARIO_POINT(Local_15[iParam0], uLocal_388[2], sVar1, -1, false, true, 0, false, -1f, false);
				__LIB_2__::func_314(&Local_15, iParam0, -1, -1);
			}
			else if (iParam0 == 3)
			{
				__LIB_2__::func_597(&(Local_15[iParam0]), &(Local_15.f_49[0]), -1, 1);
				__LIB_2__::func_272(Local_15[iParam0], joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_314(&Local_15, iParam0, -1, -1);
			}
			break;
	}
}

char* func_128()
{
	return "script@proc@bridgerobberies@bridgeblock";
}

void func_130(var uParam0, int iParam1, char* sParam2, vector3 vParam3, float fParam6, float fParam7, var uParam8, var uParam9)
{
	__LIB_2__::func_663(uParam0);
	*uParam0 = iParam1;
	uParam0->f_8 = fParam7;
	uParam0->f_6 = fParam6;
	uParam0->f_11 = uParam8;
	uParam0->f_7 = fParam7;
	uParam0->f_3 = { vParam3 };
	uParam0->f_9 = uParam9;
	__LIB_2__::func_668(&uLocal_398, uParam0, sParam2);
}

bool func_133()
{
	float fVar0;
	if (__LIB_0__::func_51(&uLocal_335, 512))
	{
		return true;
	}
	if (__LIB_2__::func_720(&Local_15))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_209, true) < 40f)
		{
			if (func_143())
			{
				if (!__LIB_0__::func_51(&uLocal_335, 512))
				{
					__LIB_0__::func_7(&uLocal_335, 512);
				}
				return true;
			}
		}
	}
	fVar0 = 5f;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		fVar0 = 8.5f;
	}
	if (__LIB_0__::func_94(Local_15[iLocal_444], Global_36, 0) < fVar0)
	{
		if (!__LIB_0__::func_51(&uLocal_335, 512))
		{
			__LIB_0__::func_7(&uLocal_335, 512);
		}
		return true;
	}
	if (func_293(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &iLocal_444, 0, (Local_15.f_215 - 1), 1))
	{
		if (!__LIB_0__::func_51(&uLocal_335, 512))
		{
			__LIB_0__::func_7(&uLocal_335, 512);
		}
		return true;
	}
	return false;
}

bool func_134()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	if (!__LIB_0__::func_51(&uLocal_335, 512))
	{
		__LIB_0__::func_7(&uLocal_335, 512);
	}
	func_294();
	bVar5 = Local_15.f_180 != false;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			iVar3 = iVar0;
			if (bVar5)
			{
			}
			__LIB_2__::func_357(Local_15[iVar0], Global_36, 3, 0, 3);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_15[iVar0], 512, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 21, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 6, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 167, false);
			PED::_0x78815FC52832B690(Local_15[iVar0], 1);
			switch (iVar3)
			{
				case 1:
					fVar4 = 0.5f;
					break;
				case 3:
					fVar4 = 0.75f;
					break;
				case 2:
					fVar4 = 0.75f;
					break;
				case 0:
					fVar4 = 1f;
					break;
				case 4:
					fVar4 = 0.25f;
					break;
				default:
					fVar4 = 0.25f;
					break;
			}
			PED::SET_COMBAT_FLOAT(Local_15[iVar0], 32, fVar4);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0f, 0.15f, 1, 1);
			if (!bVar2)
			{
				switch (iLocal_337)
				{
					case 0:
						__LIB_2__::func_478(Local_15[1], Global_35, "AMBUSH_BRP_TRIGGER", 0, 70f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						break;
					case 1:
						__LIB_2__::func_478(Local_15[1], Global_35, "AMBUSH_BRP_V2_TRIGGER", 0, 70f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						break;
					default:
						__LIB_2__::func_478(Local_15[1], Global_35, "OPENS_FIRE", 0, 70f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						break;
				}
				bVar2 = true;
			}
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], ENTITY::GET_ENTITY_COORDS(Local_15.f_49[0], false, false), 6f, 0, 0, 0);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
	if (!__LIB_0__::func_65(&Global_1393447, 16))
	{
		__LIB_2__::func_224(Local_15.f_151, 1);
	}
	return true;
}

bool func_135()
{
	if (__LIB_0__::func_51(&uLocal_335, 1024))
	{
		if (func_297())
		{
			return true;
		}
	}
	else if ((func_168() && !__LIB_0__::func_51(&uLocal_335, 8)) && __LIB_0__::func_51(&uLocal_335, 4))
	{
		if (func_297())
		{
			return true;
		}
	}
	else if (func_298())
	{
		if (__LIB_1__::func_285(&(vLocal_372[2 /*3*/]), 1f))
		{
			if (func_297())
			{
				__LIB_0__::func_37(&(vLocal_372[2 /*3*/]));
				return true;
			}
		}
	}
	return false;
}

void func_136()
{
	var uVar0;
	switch (iLocal_337)
	{
		case 0:
		case 1:
			return;
	}
	switch (iLocal_340)
	{
		case 0:
			if (__LIB_2__::func_448(Local_15[0], joaat("AMBUSH_BRP_REVEAL"), "AMBUSH_BRP_REVEAL", uVar0, 1.4f, 0))
			{
				__LIB_2__::func_478(Local_15[0], Global_35, "GANG_INTERACT_STOP_RIGHT_THERE", "", -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_340++;
			}
			break;
		case 1:
			if (__LIB_2__::func_448(Local_15[0], joaat("AMBUSH_BRP_WFIRST"), "AMBUSH_BRP_WFIRST", uVar0, 1.4f, 0))
			{
				__LIB_2__::func_478(Local_15[0], Global_35, "GANG_HOLD_IT_SUPPORT", "", -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_340++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0f, 1, Local_15[0], 1))
			{
				__LIB_2__::func_478(Local_15[0], Global_35, "HEADS_UP_CONFRONT", "", -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
				iLocal_340++;
			}
			break;
		case 3:
			if ((__LIB_0__::func_163(Local_15[0], -1073489615) || __LIB_0__::func_163(Local_15[0], 1630799643)) || iLocal_333 == 3)
			{
				__LIB_2__::func_478(Local_15[0], Global_35, "GET_OUT", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_340++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0f, 1, Local_15[0], 1))
			{
				__LIB_2__::func_478(Local_15[0], Global_35, "FINAL_WARNING", "", -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_340++;
			}
			break;
	}
}

int func_137()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = func_302(&(Local_15[0]), &(Local_274[0 /*21*/]), (fLocal_371 + 3f), &Local_296, &iVar2, 2f, 1, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), iLocal_341[1], 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = iVar0;
	if (__LIB_2__::func_341(&(Local_274[0 /*21*/])))
	{
		if (!bLocal_331)
		{
			if (Local_274[0 /*21*/].f_1 == 1)
			{
				if (!__LIB_0__::func_51(&uLocal_335, 8192))
				{
					__LIB_0__::func_7(&uLocal_335, 8192);
				}
			}
			if (Local_274[0 /*21*/].f_1 != -1)
			{
				func_150(0);
				switch (Local_274[0 /*21*/].f_1)
				{
					case 0:
						__LIB_2__::func_482(&(Local_296[0 /*17*/]), 1, 1);
						break;
					case 1:
						__LIB_2__::func_592(&Local_296, 1, 1);
						break;
				}
			}
			__LIB_2__::func_504(Local_15[0], 500);
			__LIB_2__::func_504(Local_15[1], 300);
			__LIB_2__::func_504(Local_15[2], 200);
			bLocal_331 = true;
		}
	}
	switch (iVar1)
	{
		case 1:
			bLocal_331 = false;
			break;
		case 0:
			bLocal_331 = false;
			break;
	}
	return iVar1;
}

void func_138()
{
	int iVar0;
	if (!__LIB_2__::func_1(Global_35, 0, 1))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (!__LIB_0__::func_51(&uLocal_335, 16))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_341[4], 1, 0))
		{
			if (!__LIB_0__::func_75(&(vLocal_372[1 /*3*/])))
			{
				__LIB_1__::func_283(&(vLocal_372[1 /*3*/]), 0);
			}
		}
	}
	else if (!__LIB_0__::func_75(&(vLocal_372[1 /*3*/])))
	{
		return;
	}
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		if (!__LIB_1__::func_285(&(vLocal_372[1 /*3*/]), 5f))
		{
			if (__LIB_0__::func_51(&uLocal_335, 32))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
			}
			else if ((((iLocal_333 >= 0 && iLocal_333 <= 3) && __LIB_1__::func_285(&(vLocal_372[1 /*3*/]), 1.5f)) && __LIB_2__::func_1(Local_15[1], 0, 1)) && PED::IS_PED_FACING_PED(Global_35, Local_15[1], 80f))
			{
				if ((!__LIB_0__::func_51(&uLocal_335, 16) && __LIB_1__::func_205(Global_35, iLocal_341[4], 1, 0)) || __LIB_2__::func_118(Local_15[1], 1, 1) < 25f)
				{
					if (!__LIB_0__::func_51(&uLocal_335, 16))
					{
						__LIB_0__::func_7(&uLocal_335, 16);
					}
					PED::SET_PED_MOVE_RATE_OVERRIDE(iVar0, 1f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
				}
			}
			else if (__LIB_1__::func_205(Global_35, iLocal_341[4], 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
			}
		}
	}
	__LIB_1__::func_313(&(vLocal_372[1 /*3*/]), 9.5f);
}

bool func_143()
{
	if (__LIB_2__::func_1(Local_15[iLocal_444], 0, 0))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[iLocal_444], Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_146()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iLocal_332)
	{
		case 0:
			if (__LIB_2__::func_1(Local_15[1], 0, 0))
			{
				__LIB_2__::func_357(Local_15[1], Global_36, 1, 1, 1);
				func_317(Local_15[1], -1);
				__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
			if (__LIB_2__::func_1(Local_15[2], 0, 0))
			{
				__LIB_2__::func_357(Local_15[2], Global_36, 3, 0, 3);
				iVar0 = WEAPON::GET_BEST_PED_WEAPON(Local_15[2], false, false);
				if (__LIB_0__::func_154(iVar0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_15[2], iVar0, false, 0, false, false);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
				if (__LIB_0__::func_154(iVar0))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(Local_15[2], &iVar1, 1f, 0, 1, 1);
				PED::_0x89F5E7ADECCCB49C(Local_15[2], "intimidate");
			}
			if (__LIB_2__::func_1(Local_15[3], 0, 1))
			{
				func_317(Local_15[3], -1);
			}
			if (__LIB_2__::func_1(Local_15[0], 0, 0))
			{
				func_317(Local_15[0], -1);
			}
			if (__LIB_2__::func_1(Local_15[4], 0, 0))
			{
				__LIB_2__::func_357(Local_15[4], Global_36, 3, 0, 2);
				func_317(Local_15[4], -1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[4], Global_35, -1, -1f, -1f, -1f);
			}
			fLocal_371 = __LIB_0__::func_665(Global_35, Local_15[0], 1, 1);
			__LIB_1__::func_283(&(vLocal_372[0 /*3*/]), 1);
			func_320(&iLocal_339, "base_bool", 1, func_128());
			__LIB_2__::func_671(&Local_15, 1);
			__LIB_2__::func_483(&Local_15, 1);
			func_321();
			func_150(0);
			__LIB_2__::func_51(&(Local_15.f_152), 1);
			__LIB_2__::func_595(&(Local_15.f_152), 50f);
			__LIB_2__::func_507(&(Local_15.f_152), 500);
			iLocal_332 = 1;
			break;
		case 1:
			if (__LIB_2__::func_1(Local_15[1], 0, 0))
			{
				if (!__LIB_0__::func_51(&uLocal_335, 256))
				{
					if (!__LIB_0__::func_163(Local_15[1], 242628503))
					{
						if (__LIB_2__::func_598(Local_15[1], iLocal_339, "PEDC", 0, 0, 1, 0))
						{
							__LIB_0__::func_7(&uLocal_335, 256);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_339, "PEDC", Local_15[1]);
							iVar3 = WEAPON::GET_BEST_PED_WEAPON(Local_15[1], false, false);
							if (__LIB_0__::func_154(iVar3))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Local_15[1], iVar3, false, 0, false, false);
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
							if (__LIB_0__::func_154(iVar3))
							{
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							__LIB_1__::func_474(Local_15[1], &iVar2, 0, 0, 1, 1);
							PED::_0x89F5E7ADECCCB49C(Local_15[1], "angry");
							__LIB_2__::func_73(Local_15[3], &(Local_15.f_22[3]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							__LIB_2__::func_73(Local_15[2], &(Local_15.f_22[2]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							func_317(Local_15[1], -1);
						}
					}
				}
			}
			else if (!__LIB_0__::func_51(&uLocal_335, 256))
			{
				__LIB_0__::func_7(&uLocal_335, 256);
			}
			if (__LIB_2__::func_1(Local_15[3], 0, 1))
			{
				if (!__LIB_0__::func_51(&uLocal_335, 128))
				{
					if (!__LIB_0__::func_163(Local_15[3], 242628503))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
						__LIB_1__::func_474(Local_15[3], &iVar2, 2f, 0, 1, 1);
						func_317(Local_15[3], -1);
						__LIB_0__::func_7(&uLocal_335, 128);
					}
				}
			}
			else if (!__LIB_0__::func_51(&uLocal_335, 128))
			{
				__LIB_0__::func_7(&uLocal_335, 128);
			}
			if (__LIB_2__::func_1(Local_15[0], 0, 0))
			{
				if (!__LIB_0__::func_163(Local_15[0], 242628503) && !__LIB_0__::func_51(&uLocal_335, 64))
				{
					if (__LIB_2__::func_598(Local_15[0], iLocal_339, "PEDA", 0, 0, 1, 0))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_339, "PEDA", Local_15[0]);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						__LIB_1__::func_474(Local_15[0], &iVar2, 0.2f, 0.2f, 1, 1);
						func_317(Local_15[0], -1);
						__LIB_0__::func_7(&uLocal_335, 64);
					}
					else if (!bLocal_443)
					{
						if (__LIB_1__::func_285(&(vLocal_372[0 /*3*/]), 2f))
						{
							if (__LIB_2__::func_227(0f, 1, Local_15[0], 1))
							{
								func_150(1);
								bLocal_443 = true;
							}
						}
					}
				}
			}
			else if (!__LIB_0__::func_51(&uLocal_335, 64))
			{
				__LIB_0__::func_7(&uLocal_335, 64);
			}
			if (__LIB_0__::func_51(&uLocal_335, 64) && __LIB_0__::func_51(&uLocal_335, 256))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_339);
				return true;
			}
			break;
	}
	return false;
}

bool func_147()
{
	int iVar0;
	int iVar1;
	if (func_326())
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				if (iVar0 == 0)
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(Local_15[iVar0], "SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@BRIDGE_BLOCK", "DIA_01_PEDA", Global_35, -1, 8f, -8f, 0, 0f, false, false, -1f, 0, 0, -1f);
				}
				if (iVar0 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_15[iVar0], &iVar1, 1f, 0, 1, 1);
				}
			}
			iVar0++;
		}
		func_125(0);
		__LIB_1__::func_148(&(vLocal_372[0 /*3*/]));
		return true;
	}
	return false;
}

void func_150(bool bParam0)
{
	if (bParam0)
	{
		if ((!__LIB_1__::func_489(&(Local_296[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_296[0 /*17*/]), 4)) && !__LIB_1__::func_489(&(Local_296[0 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_296[0 /*17*/]), 1, 0);
		}
		if ((!__LIB_1__::func_489(&(Local_296[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_296[1 /*17*/]), 4)) && !__LIB_1__::func_489(&(Local_296[1 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_296[1 /*17*/]), 1, 0);
		}
	}
	else
	{
		if ((__LIB_1__::func_489(&(Local_296[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_296[0 /*17*/]), 4)) && !__LIB_1__::func_489(&(Local_296[0 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_296[0 /*17*/]), 0, 0);
		}
		if ((__LIB_1__::func_489(&(Local_296[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_296[1 /*17*/]), 4)) && !__LIB_1__::func_489(&(Local_296[1 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_296[1 /*17*/]), 0, 0);
		}
	}
}

bool func_151()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (func_330())
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				if (iVar0 == 0)
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_15[iVar0], true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_15[iVar0]) };
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					switch (iLocal_337)
					{
						case 0:
						case 1:
							TASK::TASK_PLAY_ANIM(0, "SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@BRIDGE_BLOCK", "DIA_02_PEDA", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
							TASK::TASK_STAND_STILL(0, 1000);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar2, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							break;
						case 2:
						case 3:
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 5000, false, 1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar2, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							break;
					}
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true))
					{
						vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_15[iVar0], true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_15[iVar0]) };
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar2, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					}
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_15[iVar0], &iVar1, (2f + IntToFloat(iVar0)), 0, 1, 1);
				}
			}
			iVar0++;
		}
		__LIB_1__::func_148(&(vLocal_372[0 /*3*/]));
		return true;
	}
	return false;
}

void func_153()
{
	int iVar0;
	if (iLocal_337 != 0 && iLocal_337 != 1)
	{
		return;
	}
	if (!bLocal_415)
	{
		if (!__LIB_2__::func_227(0f, 1, Local_15[0], 1))
		{
			bLocal_415 = true;
			__LIB_1__::func_283(&(vLocal_372[4 /*3*/]), 0);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			func_333(iVar0);
			iVar0++;
		}
	}
}

bool func_154()
{
	if (((__LIB_1__::func_285(&(vLocal_372[0 /*3*/]), 10f) && __LIB_2__::func_227(0f, 1, Local_15[0], 1)) && __LIB_0__::func_665(Global_35, Local_15[1], 1, 1) < (fLocal_371 + 5f)) && func_143())
	{
		if (func_297())
		{
			return true;
		}
	}
	return false;
}

bool func_168()
{
	if (__LIB_1__::func_205(Global_35, iLocal_341[3], 1, 0))
	{
		if (!__LIB_0__::func_51(&uLocal_335, 32))
		{
			__LIB_0__::func_7(&uLocal_335, 32);
			__LIB_1__::func_148(&(vLocal_372[1 /*3*/]));
		}
		return true;
	}
	return false;
}

void func_169()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (func_353() > 2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_15.f_40[iVar0]))
			{
				iVar2 = PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], true);
				if (!__LIB_2__::func_1(iVar2, 0, 1))
				{
					fVar1 = BUILTIN::TO_FLOAT(iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_15.f_209, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_1__::func_474(Local_15.f_40[iVar0], &iVar3, fVar1, (fVar1 + 0.5f), 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_170()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_354(iVar0))
		{
			PED::SET_PED_RESET_FLAG(Local_15[iVar0], 27, true);
		}
		iVar0++;
	}
}

struct<4> func_174()
{
	struct<4> Var0;
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				return func_358(0, 12);
			}
			else
			{
				return func_358(1, 12);
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				return func_358(2, 12);
			}
			else
			{
				return func_358(3, 12);
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				return func_358(4, 12);
			}
			else
			{
				return func_358(5, 12);
			}
			break;
	}
	return Var0;
}

void func_175()
{
	int iVar0;
	vector3 vVar1;
	float fVar5;
	bool bVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			vVar1 = { func_359(iVar0) };
			fVar5 = func_360(iVar0);
			bVar6 = func_361(iVar0);
			if (bVar6)
			{
				iLocal_392[iVar0] = TASK::ADD_COVER_POINT(vVar1, vVar1.f_3, 3, 0, 1, false);
				if (Local_15.f_9[iVar0] > 8f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar7);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar1, 500, 1, 0, 0, 0, iLocal_392[iVar0], 1, 0, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_15[iVar0], &iVar7, 0, 0, 1, 1);
				}
				else
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], ENTITY::GET_ENTITY_COORDS(Local_15.f_49[0], false, false), 8f, 0, 1, 0);
				}
				else
				{
					if (fVar5 > 0f)
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], vVar1, fVar5, 0, 0, 0);
					}
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], ENTITY::GET_ENTITY_COORDS(Local_15.f_49[0], false, false), 8f, 0, 1, 0);
				}
				iVar0++;
			}
		}
	}
}

void func_176()
{
	vector3 vVar0;
	if (!__LIB_0__::func_51(&uLocal_335, 2))
	{
		vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
		if (((__LIB_1__::func_205(Global_35, iLocal_341[3], 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_341[4], 1, 0)) && PED::IS_PED_ON_MOUNT(Global_35)) || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Local_15.f_209, true) > 70f)
		{
			func_362(1);
			__LIB_0__::func_7(&uLocal_335, 2);
		}
	}
}

void func_177()
{
	int iVar0;
	if (__LIB_0__::func_51(&uLocal_335, 2048))
	{
		return;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_15.f_237, Global_36))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_15)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_3__::func_442(Local_15[iVar0], iLocal_341[5], 0, 0);
		}
		iVar0++;
	}
	__LIB_0__::func_7(&uLocal_335, 2048);
}

void func_178()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (iVar0 == 4)
			{
				__LIB_1__::func_733(Local_15[iVar0]);
			}
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
		}
		iVar0++;
	}
}

void func_180()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 51, true);
			iVar1++;
			if (iVar1 >= 2)
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_181(int iParam0, int iParam1, var uParam2, char* sParam3, float fParam4)
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
					__LIB_1__::func_148(uParam2);
					*iParam1 = iVar2;
				}
			}
			else if (iVar1 == 0)
			{
				return true;
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_75(uParam2))
		{
			if (__LIB_2__::func_1((*iParam0)[*iParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2((*iParam0)[*iParam1], Global_35, 1, 0);
			}
		}
		__LIB_1__::func_283(uParam2, 0);
		if (__LIB_1__::func_285(uParam2, fParam4))
		{
			if (__LIB_2__::func_1((*iParam0)[*iParam1], 0, 1))
			{
				if (__LIB_2__::func_211(iParam0, *iParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[*iParam1], Global_35, 4, 524292, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[*iParam1], true);
					__LIB_1__::func_733((*iParam0)[*iParam1]);
					__LIB_2__::func_56((*iParam0)[*iParam1], 0, 1);
					__LIB_2__::func_478((*iParam0)[*iParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					return true;
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

bool func_200()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]))
	{
		if (!__LIB_2__::func_1(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_15.f_49[0], -1), 0, 1))
		{
			if (!func_205(Local_15.f_49[0], 200f, 100f))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_15.f_49[0]));
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_86(vLocal_417))
		{
			func_204(&Local_15, vLocal_417, fLocal_420);
		}
		return true;
	}
	return false;
}

bool func_202()
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar1], 0, 0))
		{
		}
		else
		{
			if (PED::IS_PED_IN_COMBAT(Local_15[iVar1], 0))
			{
				return true;
			}
			if (!__LIB_2__::func_25(&Local_15, iVar1, 2))
			{
				__LIB_2__::func_152(&Local_15, iVar1, 2);
				PED::_0x24C82EF607105FAA(Local_15[iVar1], joaat("AGGRESSIVE"));
				__LIB_2__::func_603(&(Local_15[iVar1]), &(Local_274[0 /*21*/]), &Local_296, 1, 1);
			}
			switch (iVar1)
			{
				case 3:
					if ((!__LIB_2__::func_343(Local_15[iVar1], Local_15.f_49[0], 0) && !PED::IS_PED_SITTING_IN_VEHICLE(Local_15[iVar1], Local_15.f_49[0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_15.f_49[0], false, false))
					{
						bVar0 = false;
						if (!__LIB_0__::func_163(Local_15[iVar1], -1794415470))
						{
							if (__LIB_2__::func_25(&Local_15, iVar1, 8))
							{
								__LIB_2__::func_596(Local_15[iVar1], Local_15.f_49[0], -1, 2f, -1, 1);
							}
							else
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(Local_15[iVar1], Local_15.f_49[0], -1);
							}
						}
						else if (!__LIB_1__::func_472(Local_15[iVar1], 200f, 40f, Local_15.f_9[iVar1], -1082130432 /* Float: -1f */))
						{
							TASK::TASK_WARP_PED_INTO_VEHICLE(Local_15[iVar1], Local_15.f_49[0], -1);
						}
					}
					break;
				case 0:
					if ((!__LIB_2__::func_343(Local_15[iVar1], Local_15.f_49[0], 0) && !PED::IS_PED_SITTING_IN_VEHICLE(Local_15[iVar1], Local_15.f_49[0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_15.f_49[0], false, false))
					{
						bVar0 = false;
						if (!__LIB_0__::func_163(Local_15[iVar1], -1794415470))
						{
							if (__LIB_2__::func_25(&Local_15, iVar1, 8))
							{
								__LIB_2__::func_596(Local_15[iVar1], Local_15.f_49[0], 0, 2f, -1, 1);
							}
							else
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(Local_15[iVar1], Local_15.f_49[0], 0);
							}
						}
						else if (!__LIB_1__::func_472(Local_15[iVar1], 200f, 40f, Local_15.f_9[iVar1], -1082130432 /* Float: -1f */))
						{
							TASK::TASK_WARP_PED_INTO_VEHICLE(Local_15[iVar1], Local_15.f_49[0], 0);
						}
					}
					break;
				case 1:
					if (!__LIB_0__::func_71(Local_15[iVar1]) && __LIB_2__::func_1(Local_15.f_40[0], 0, 1))
					{
						bVar0 = false;
						if (!__LIB_0__::func_163(Local_15[iVar1], 1868526510))
						{
							if ((__LIB_2__::func_25(&Local_15, iVar1, 8) || __LIB_2__::func_26(&Local_15, 0, 8)) && __LIB_1__::func_472(Local_15[iVar1], 200f, 40f, Local_15.f_9[iVar1], -1082130432 /* Float: -1f */))
							{
								__LIB_1__::func_562(Local_15[iVar1], Local_15.f_40[0], 0, 2f, 20000);
							}
							else
							{
								PED::_SET_PED_ON_MOUNT(Local_15[iVar1], Local_15.f_40[0], -1, true);
							}
						}
						else if (!__LIB_1__::func_472(Local_15[iVar1], 200f, 40f, Local_15.f_9[iVar1], -1082130432 /* Float: -1f */))
						{
							PED::_SET_PED_ON_MOUNT(Local_15[iVar1], Local_15.f_40[0], -1, true);
						}
					}
					break;
				case 2:
					if (!__LIB_0__::func_71(Local_15[iVar1]) && __LIB_2__::func_1(Local_15.f_40[2], 0, 1))
					{
						bVar0 = false;
						if (!__LIB_0__::func_163(Local_15[iVar1], 1868526510))
						{
							if ((__LIB_2__::func_25(&Local_15, iVar1, 8) || __LIB_2__::func_26(&Local_15, 2, 8)) && __LIB_1__::func_472(Local_15[iVar1], 200f, 40f, Local_15.f_9[iVar1], -1082130432 /* Float: -1f */))
							{
								__LIB_1__::func_562(Local_15[iVar1], Local_15.f_40[2], 0, 2f, 20000);
							}
							else
							{
								PED::_SET_PED_ON_MOUNT(Local_15[iVar1], Local_15.f_40[2], -1, true);
							}
						}
						else if (!__LIB_1__::func_472(Local_15[iVar1], 200f, 40f, Local_15.f_9[iVar1], -1082130432 /* Float: -1f */))
						{
							PED::_SET_PED_ON_MOUNT(Local_15[iVar1], Local_15.f_40[2], -1, true);
						}
					}
					break;
				case 4:
					if (!__LIB_0__::func_71(Local_15[iVar1]) && __LIB_2__::func_1(Local_15.f_40[1], 0, 1))
					{
						bVar0 = false;
						if (!__LIB_0__::func_163(Local_15[iVar1], 1868526510))
						{
							if ((__LIB_2__::func_25(&Local_15, iVar1, 8) || __LIB_2__::func_26(&Local_15, 1, 8)) && __LIB_1__::func_472(Local_15[iVar1], 200f, 40f, Local_15.f_9[iVar1], -1082130432 /* Float: -1f */))
							{
								__LIB_1__::func_562(Local_15[iVar1], Local_15.f_40[1], 0, 2f, 20000);
							}
							else
							{
								PED::_SET_PED_ON_MOUNT(Local_15[iVar1], Local_15.f_40[1], -1, true);
							}
						}
						else if (!__LIB_1__::func_472(Local_15[iVar1], 200f, 40f, Local_15.f_9[iVar1], -1082130432 /* Float: -1f */))
						{
							PED::_SET_PED_ON_MOUNT(Local_15[iVar1], Local_15.f_40[1], -1, true);
						}
					}
					break;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

void func_204(var uParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { vParam1 + Vector(-40f, -fParam4, -fParam4) };
	vVar3 = { vParam1 + Vector(40f, fParam4, fParam4) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0) };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	__LIB_2__::func_161(vParam1, fParam4, 5);
}

bool func_205(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(iParam0, Global_36, 1);
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_213(int iParam0)
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
	if (func_405(Local_15.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_15.f_84[iParam0], Global_36, 1) < 10f)
	{
		return false;
	}
	return true;
}

bool func_215(int iParam0, int iParam1)
{
	if (func_405(iParam1, 1114636288 /* Float: 60f */) || __LIB_2__::func_118(iParam1, 1, 1) <= 30f)
	{
		return false;
	}
	return true;
}

bool func_226()
{
	switch (iLocal_442)
	{
		case 0:
			if (iLocal_440 >= iLocal_369)
			{
				iLocal_440 = 0;
				iLocal_442 = 1;
			}
			break;
		case 1:
			if (iLocal_441 >= iLocal_370)
			{
				iLocal_441 = 0;
				iLocal_442 = 0;
			}
			break;
	}
	if (func_410(iLocal_442))
	{
		return true;
	}
	return false;
}

bool func_254()
{
	switch (Local_15.f_151)
	{
		case 42:
			return true;
		default:
			break;
	}
	return false;
}

void func_255()
{
	switch (iLocal_336)
	{
		case 0:
			func_415();
			break;
		case 1:
			func_416();
			break;
		case 2:
			func_417();
			break;
	}
}

void func_257(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { iParam0->f_209 + Vector(-40f, -fParam4, -fParam4) };
	vVar3 = { iParam0->f_209 + Vector(40f, fParam4, fParam4) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0) };
	if (__LIB_2__::func_69(iParam0->f_151))
	{
		__LIB_2__::func_165(vParam1, fParam4, 0, 0, iParam5);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(vParam1, fParam4);
	__LIB_2__::func_70(vParam1, fParam4, 0);
}

Vector3 func_269()
{
	switch (iLocal_336)
	{
		case 0:
			return -611.731f, 403.692f, 95.947f;
		case 1:
			return 633.161f, -556.16f, 75.023f;
		case 2:
			return 167.856f, 607.164f, 125.325f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_270()
{
	switch (iLocal_336)
	{
		case 0:
			return 0f, 0f, 89.467f;
		case 1:
			return 0f, 0f, -19.738f;
		case 2:
			return 0f, 0f, 251f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_271(int iParam0, char* sParam1, vector3 vParam2, vector3 vParam5)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0, vParam2, vParam5, 2);
}

Vector3 func_272()
{
	switch (iLocal_336)
	{
		case 0:
			return -596.24f, 429.185f, 96.398f;
		case 1:
			return 658.6f, -572.86f, 74.43f;
		case 2:
			return 145.209f, 571.468f, 125.457f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_273()
{
	switch (iLocal_336)
	{
		case 0:
			return 0f, 0f, -101.673f;
		case 1:
			return 0f, 0f, 165.791f;
		case 2:
			return 0f, 0f, 85f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_274(int iParam0)
{
	switch (iLocal_337)
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1640618693;
				case 1:
					return 1411006310;
				default:
					break;
			}
			break;
	}
	return __LIB_2__::func_16();
}

struct<4> func_275(int iParam0)
{
	struct<4> Var0;
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return func_358(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return func_358(1, 7);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return func_358(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return func_358(3, 7);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return func_358(4, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return func_358(5, 7);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_277(int iParam0)
{
	struct<4> Var0;
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return func_358(0, 5);
					case 1:
						return func_358(0, 6);
					case 2:
						return func_358(0, 18);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return func_358(1, 5);
					case 1:
						return func_358(1, 6);
					case 2:
						return func_358(1, 18);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return func_358(2, 5);
					case 1:
						return func_358(2, 6);
					case 2:
						return func_358(2, 18);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return func_358(3, 5);
					case 1:
						return func_358(3, 6);
					case 2:
						return func_358(3, 18);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return func_358(4, 5);
					case 1:
						return func_358(4, 6);
					case 2:
						return func_358(4, 18);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return func_358(5, 5);
					case 1:
						return func_358(5, 6);
					case 2:
						return func_358(5, 18);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_280(int iParam0)
{
	struct<4> Var0;
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return func_358(0, 1);
					case 3:
						return func_358(0, 3);
					case 2:
						return func_358(0, 2);
					case 0:
						return func_358(0, 0);
					case 4:
						return func_358(0, 4);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return func_358(1, 1);
					case 3:
						return func_358(1, 3);
					case 2:
						return func_358(1, 2);
					case 0:
						return func_358(1, 0);
					case 4:
						return func_358(1, 4);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return func_358(2, 1);
					case 3:
						return func_358(2, 3);
					case 2:
						return func_358(2, 2);
					case 0:
						return func_358(2, 0);
					case 4:
						return func_358(2, 4);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return func_358(3, 1);
					case 3:
						return func_358(3, 3);
					case 2:
						return func_358(3, 2);
					case 0:
						return func_358(3, 0);
					case 4:
						return func_358(3, 4);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return func_358(4, 1);
					case 3:
						return func_358(4, 3);
					case 2:
						return func_358(4, 2);
					case 0:
						return func_358(4, 0);
					case 4:
						return func_358(4, 4);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return func_358(5, 1);
					case 3:
						return func_358(5, 3);
					case 2:
						return func_358(5, 2);
					case 0:
						return func_358(5, 0);
					case 4:
						return func_358(5, 4);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_281(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_15.f_49[0], iVar1);
		if (__LIB_2__::func_1(iVar0, 0, 1))
		{
			if (bParam0)
			{
			}
			__LIB_1__::func_991(iVar0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, bParam0);
			PED::_0x2EB75FB86C41F026(iVar0, 3, !bParam0);
			if (bParam0)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 113, false);
			}
		}
		iVar1++;
	}
}

void func_283(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!__LIB_2__::func_1(iParam2, 0, 1))
		{
			return;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, sParam1, iParam2, 0);
}

void func_287(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_287(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_287(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_293(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_653((*uParam0)[*iParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_294()
{
	__LIB_2__::func_504(Local_15[1], 0);
	__LIB_2__::func_504(Local_15[3], 0);
	__LIB_2__::func_504(Local_15[2], 0);
	__LIB_2__::func_504(Local_15[0], 0);
}

bool func_297()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_51(&uLocal_335, 1024))
	{
		__LIB_0__::func_7(&uLocal_335, 1024);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_339) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_339, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_RATE(iLocal_339) < 3f)
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(iLocal_339, 3f);
		}
		return false;
	}
	if (__LIB_2__::func_1(Local_15[1], 0, 1))
	{
		PED::SET_COMBAT_FLOAT(Local_15[1], 32, 1f);
	}
	if (__LIB_2__::func_1(Local_15[0], 0, 1))
	{
		PED::SET_COMBAT_FLOAT(Local_15[0], 32, 0.5f);
	}
	func_294();
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (iVar0 == 0)
			{
				switch (iLocal_337)
				{
					case 0:
						__LIB_2__::func_478(Local_15[1], Global_35, "AMBUSH_BRP_TRIGGER", 0, 70f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						break;
					case 1:
						__LIB_2__::func_478(Local_15[1], Global_35, "AMBUSH_BRP_V2_TRIGGER", 0, 70f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						break;
					default:
						__LIB_2__::func_478(Local_15[1], Global_35, "OPENS_FIRE", 0, 70f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						break;
				}
			}
			PED::SET_PED_FLEE_ATTRIBUTES(Local_15[iVar0], 512, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 6, false);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], ENTITY::GET_ENTITY_COORDS(Local_15.f_49[0], false, false), 6f, 0, 0, 0);
			PED::_0x78815FC52832B690(Local_15[iVar0], 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, (IntToFloat(iVar0) * 0.05f), (IntToFloat(iVar0) * 0.1f), 1, 1);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
	return true;
}

bool func_298()
{
	if (__LIB_1__::func_205(Global_35, iLocal_341[0], 1, 0) || __LIB_0__::func_94(Global_35, func_116(0), 1) < 8f)
	{
		if (!__LIB_0__::func_75(&(vLocal_372[2 /*3*/])))
		{
			__LIB_1__::func_283(&(vLocal_372[2 /*3*/]), 0);
		}
		return true;
	}
	else
	{
		__LIB_0__::func_37(&(vLocal_372[2 /*3*/]));
	}
	return false;
}

int func_302(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_443(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
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

void func_317(var uParam0, int iParam1)
{
	struct<22> Var0;
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
	Var0.f_8 = 4;
	Var0.f_19 = 4;
	Var0.f_21 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_7 = iParam1;
	Var0.f_3 = Global_35;
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0, &Var0);
}

void func_320(int iParam0, char* sParam1, bool bParam2, char* sParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		return;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(*iParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam0, sParam1, bParam2, false);
	}
}

void func_321()
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	__LIB_2__::func_451(&(Local_274[0 /*21*/]), 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 != 0)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 301, true);
				PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 317, false);
				PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 297, false);
			}
		}
		iVar0++;
	}
	switch (iLocal_337)
	{
		case 0:
			sVar1 = "AMBUSH_BRP_V1_ILO_POS";
			sVar2 = "AMBUSH_BRP_V1_ILO_NEG";
			break;
		case 1:
			sVar1 = "AMBUSH_BRP_V2_ILO_POS";
			sVar2 = "AMBUSH_BRP_V2_ILO_NEG";
			break;
		case 2:
			sVar1 = "AMBUSH_BRP_V3_ILO_POS";
			sVar2 = "AMBUSH_BRP_V3_ILO_NEG";
			break;
		case 3:
			sVar1 = "AMBUSH_BRP_V4_ILO_POS";
			sVar2 = "AMBUSH_BRP_V4_ILO_NEG";
			break;
	}
	__LIB_2__::func_602(&(Local_296[0 /*17*/]), "INTERACT_DEFUSE", sVar1, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_296[1 /*17*/]), "INTERACT_INSULT", sVar2, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_526(&Local_296, 0, 0);
}

bool func_326()
{
	if (__LIB_0__::func_51(&uLocal_335, 4096))
	{
		return true;
	}
	if (__LIB_2__::func_341(&(Local_274[0 /*21*/])))
	{
		return false;
	}
	if (!__LIB_1__::func_285(&(vLocal_372[0 /*3*/]), 9.5f))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&uLocal_335, 8))
	{
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_341[2], Global_36))
		{
			return false;
		}
	}
	else if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_341[8], Global_36))
	{
		return false;
	}
	if (__LIB_0__::func_75(&(vLocal_372[2 /*3*/])))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_15[0], Global_36, 1) < (fLocal_371 + 5f))
	{
		if (PED::IS_PED_FACING_PED(Global_35, Local_15[0], 90f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f)
		{
			if (func_143())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_330()
{
	if (__LIB_0__::func_51(&uLocal_335, 4096))
	{
		return true;
	}
	if (__LIB_2__::func_341(&(Local_274[0 /*21*/])))
	{
		return false;
	}
	if (!__LIB_1__::func_285(&(vLocal_372[0 /*3*/]), 12f))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&uLocal_335, 8))
	{
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_341[2], Global_36))
		{
			return false;
		}
	}
	else if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_341[8], Global_36))
	{
		return false;
	}
	if (__LIB_0__::func_75(&(vLocal_372[2 /*3*/])))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_15[0], Global_36, 1) < (fLocal_371 + 5f))
	{
		if (PED::IS_PED_FACING_PED(Global_35, Local_15[0], 90f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f)
		{
			if (func_143())
			{
				return true;
			}
		}
	}
	return false;
}

void func_333(int iParam0)
{
	char* sVar0;
	bool bVar1;
	float fVar2;
	bVar1 = true;
	if (iLocal_337 == 0)
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	switch (iLocal_411[iParam0])
	{
		case 0:
			if (bVar1)
			{
				sVar0 = "AMBUSH_BRP_LAUGH_A";
			}
			else
			{
				sVar0 = "AMBUSH_BRP_V2_LAUGH_A";
			}
			switch (iParam0)
			{
				case 0:
					func_463(iParam0, 3);
					return;
				case 1:
					fVar2 = 3f;
					break;
				case 2:
					fVar2 = 3f;
					break;
			}
			if (__LIB_1__::func_285(&(vLocal_372[4 /*3*/]), fVar2))
			{
				__LIB_2__::func_478(Local_15[iParam0], Global_35, sVar0, "", 60f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_463(iParam0, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, Local_15[iParam0], 1))
			{
				__LIB_2__::func_478(Local_15[iParam0], Global_35, sVar0, "", 60f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_463(iParam0, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0f, 1, Local_15[iParam0], 1))
			{
				func_463(iParam0, 3);
			}
			break;
		case 3:
			break;
	}
}

int func_353()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar1], 0, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_354(int iParam0)
{
	float fVar0;
	if (!__LIB_2__::func_1(Local_15[iParam0], 0, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_15[iParam0]))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_15[iParam0], Global_36, 1) < 3f)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 1.2f;
			break;
		case 1:
			fVar0 = 1.6f;
			break;
		case 2:
			fVar0 = 1.4f;
			break;
		case 3:
			fVar0 = 1.2f;
			break;
		case 4:
			fVar0 = 1.6f;
			break;
	}
	if (__LIB_1__::func_285(&(vLocal_372[3 /*3*/]), fVar0))
	{
		return false;
	}
	return true;
}

struct<4> func_358(int iParam0, int iParam1)
{
	return func_472(iParam0, iParam1);
}

struct<4> func_359(int iParam0)
{
	struct<4> Var0;
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return func_358(0, 14);
					case 3:
						return func_358(0, 15);
					case 2:
						return func_358(0, 16);
					case 0:
						return func_358(0, 13);
					case 4:
						return func_358(0, 17);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return func_358(1, 14);
					case 3:
						return func_358(1, 15);
					case 2:
						return func_358(1, 16);
					case 0:
						return func_358(1, 13);
					case 4:
						return func_358(1, 17);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return func_358(2, 14);
					case 3:
						return func_358(2, 15);
					case 2:
						return func_358(2, 16);
					case 0:
						return func_358(2, 13);
					case 4:
						return func_358(2, 17);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return func_358(3, 14);
					case 3:
						return func_358(3, 15);
					case 2:
						return func_358(3, 16);
					case 0:
						return func_358(3, 13);
					case 4:
						return func_358(3, 17);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return func_358(4, 14);
					case 3:
						return func_358(4, 15);
					case 2:
						return func_358(4, 16);
					case 0:
						return func_358(4, 13);
					case 4:
						return func_358(4, 17);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return func_358(5, 14);
					case 3:
						return func_358(5, 15);
					case 2:
						return func_358(5, 16);
					case 0:
						return func_358(5, 13);
					case 4:
						return func_358(5, 17);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

float func_360(int iParam0)
{
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return 1.5f;
					case 1:
						return 1.5f;
					case 2:
						return 3f;
					case 3:
						return 5f;
					case 4:
						return 3.5f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return 1.5f;
					case 1:
						return 1.5f;
					case 2:
						return 3.5f;
					case 3:
						return 4f;
					case 4:
						return 1.5f;
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return 1.5f;
					case 1:
						return 1.5f;
					case 2:
						return 3.5f;
					case 3:
						return 5f;
					case 4:
						return 3f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return 2f;
					case 1:
						return 2f;
					case 2:
						return 2f;
					case 3:
						return 5f;
					case 4:
						return 2f;
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 0:
						return 2f;
					case 1:
						return 2f;
					case 2:
						return 2f;
					case 3:
						return 5f;
					case 4:
						return 2f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return 2f;
					case 1:
						return 2f;
					case 2:
						return 2f;
					case 3:
						return 5f;
					case 4:
						return 2f;
					default:
						break;
				}
			}
			break;
	}
	return -1f;
}

int func_361(int iParam0)
{
	switch (iLocal_336)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return 1;
					case 0:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return 1;
					case 0:
						return 1;
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return 1;
					case 0:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return 1;
					case 0:
						return 1;
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&uLocal_335, 1))
			{
				switch (iParam0)
				{
					case 1:
						return 1;
					case 2:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						return 1;
					case 0:
						return 1;
					default:
						break;
				}
			}
			break;
	}
	return 0;
}

void func_362(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_216)
		{
			if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Local_15.f_40[iVar0], 214, false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 167, true);
				__LIB_1__::func_733(Local_15[iVar0]);
			}
			iVar0++;
		}
		if (__LIB_2__::func_1(Local_15[1], 0, 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!__LIB_0__::func_71(Local_15[1]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[0], 20000, -1, 3f, 1, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[1], &iVar1, 0, 0, 1, 1);
		}
		if (__LIB_2__::func_1(Local_15[0], 0, 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!__LIB_0__::func_71(Local_15[0]) && !PED::IS_PED_FLEEING(Local_15.f_40[0]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[0], 20000, -1, 3f, 1, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[0], &iVar1, 0, 0, 1, 1);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_216)
		{
			if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Local_15.f_40[iVar0], 214, true);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 167, false);
			}
			iVar0++;
		}
	}
}

bool func_405(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && __LIB_17__::func_557(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_410(int iParam0)
{
	int iVar0[5];
	int iVar6[2];
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	iVar6[0] = Local_15.f_49[0];
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar11 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		iVar6[1] = iVar11;
	}
	switch (iParam0)
	{
		case 0:
			iVar12 = iLocal_351[iLocal_440];
			break;
		case 1:
			iVar12 = iLocal_360[iLocal_441];
			break;
	}
	iVar9 = __LIB_2__::func_130(&iVar0, &iVar6, iVar12, iVar0);
	if (iVar9 > 0)
	{
	}
	iVar10 = 0;
	while (iVar10 < iVar9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar10]) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0[iVar10])))
		{
			vVar13 = { ENTITY::GET_ENTITY_COORDS(iVar0[iVar10], true, false) };
			if ((__LIB_1__::func_374(iVar0[iVar10], Local_15.f_209, 0) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0[iVar10]))) && PLAYER::GET_PLAYERS_LAST_VEHICLE() != iVar0[iVar10])
			{
				if (!__LIB_2__::func_109(iVar0[iVar10], 200f, 70f))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0[iVar10]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0[iVar10], true, true);
						VEHICLE::DELETE_VEHICLE(&(iVar0[iVar10]));
					}
				}
				else
				{
					return true;
				}
			}
		}
		iVar10++;
	}
	switch (iParam0)
	{
		case 0:
			iLocal_440++;
			break;
		case 1:
			iLocal_441++;
			break;
	}
	return false;
}

void func_415()
{
	iLocal_341[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-603.121f, 419.303f, 98.765f, 0f, 0f, -25.40426f, 23.282f, 64.031f, 9.393f, "volBridgeWarn");
	iLocal_341[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-605.161f, 415.945f, 84.84837f, 0f, 0f, 0f, 100f, 100f, 35.485f, "volDefGiveup");
	iLocal_341[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volPedAvoid");
	VOLUME::_0x39816F6F94F385AD(iLocal_341[6], -618.555f, 416.442f, 97.538f, 0f, 0f, -25.712f, 15f, 5f, 10f);
	VOLUME::_0x39816F6F94F385AD(iLocal_341[6], -601.895f, 396.913f, 97.538f, 0f, 0f, -91.763f, 15f, 5f, 10f);
	POPULATION::_0xB56D41A694E42E86(iLocal_341[6], 8192, 0, 0, -1, -1, 0);
	if (__LIB_0__::func_51(&uLocal_335, 1))
	{
		iLocal_341[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-603.4852f, 418.536f, 98.041f, 0f, 0f, -25.404f, 22.84262f, 30.93513f, 6.311f, "volBridgeWarnClose");
		iLocal_341[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-608.0754f, 408.8718f, 98.041f, 0f, 0f, -25.40425f, 9.974f, 11.5439f, 6.311f, "volBridge");
		iLocal_341[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-611.5367f, 402.9758f, 90.08746f, 0f, 0f, 153.5684f, 22.85999f, 19.6497f, 25.96892f, "volReturnAggro");
		iLocal_341[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-600.1835f, 425.4881f, 98.041f, 0f, 0f, -25.40426f, 17.81569f, 44.25668f, 6.311f, "volBridgeSlow");
		iLocal_341[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBackTrigger");
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], -624.3751f, 385.9375f, 98.765f, 0f, 0f, -4.40426f, 23.282f, 25.39223f, 24.27885f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], -625.3293f, 405.4551f, 98.765f, 0f, 0f, -25.40425f, 23.282f, 22.25188f, 24.27885f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], -621.497f, 380.611f, 98.765f, 0f, 0f, -25.40426f, 23.282f, 39.29145f, 24.27885f);
	}
	else
	{
		iLocal_341[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-606.5178f, 412.1511f, 98.041f, 0f, 0f, -25.404f, 22.84262f, 30.93513f, 8.339409f, "volBridgeWarnClose");
		iLocal_341[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-603.454f, 418.601f, 98.041f, 0f, 0f, -25.40426f, 9.974f, 9.294f, 6.311f, "volBridge");
		iLocal_341[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-593.4773f, 437.5312f, 90.08746f, 0f, 0f, 151.6321f, 31.80865f, 29.27251f, 25.96892f, "volReturnAggro");
		iLocal_341[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-608.881f, 407.176f, 98.041f, 0f, 0f, -25.40426f, 17.81569f, 46.05367f, 6.311f, "volBridgeSlow");
		iLocal_341[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBackTrigger");
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], -585.7942f, 437.1736f, 98.765f, 0f, 0f, -25.40426f, 26.5913f, 30.39082f, 32.27533f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], -592.949f, 444.8731f, 98.765f, 0f, 0f, -25.40425f, 26.5913f, 41.53144f, 9.393f);
	}
	iLocal_360[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-633.447f, 368.313f, 97.23715f, 0f, 0f, -38f, 12.06777f, 45.33761f, 21.88704f, "volTrafficBack0");
	iLocal_360[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-658.1362f, 344.2885f, 97.23715f, 0f, 0f, -58f, 12.06777f, 30.5146f, 21.88704f, "volTrafficBack1");
	iLocal_360[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-700.9745f, 331.5326f, 97.23715f, 0f, 0f, -78.00001f, 12.06777f, 65.64038f, 21.88704f, "volTrafficBack2");
	iLocal_360[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-767.9133f, 304.1609f, 97.23715f, 0f, 0f, -61.00001f, 20.16416f, 86.57806f, 21.88704f, "volTrafficBack3");
	iLocal_360[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-855.0063f, 254.5078f, 97.23715f, 0f, 0f, -61.00001f, 14.70411f, 115.4348f, 21.88704f, "volTrafficBack4");
	iLocal_360[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-957.7535f, 177.2193f, 85.84882f, 0f, 0f, -45.08953f, 14.70411f, 152.436f, 36.39469f, "volTrafficBack5");
	iLocal_369 = 6;
	iLocal_351[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-604.1119f, 416.9674f, 100.4733f, 0f, 0f, -28f, 12.06777f, 70.72504f, 15.26824f, "volTrafficFront0");
	iLocal_351[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-565.431f, 464.6201f, 100.4733f, 0f, 0f, -55f, 12.06777f, 61.44958f, 15.26824f, "volTrafficFront1");
	iLocal_351[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-527.3674f, 513.132f, 107.064f, 0f, 0f, -27f, 12.06777f, 77.57748f, 22.42567f, "volTrafficFront2");
	iLocal_351[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-475.2545f, 553.2931f, 107.5697f, 0f, 0f, -71.00001f, 12.06777f, 77.57748f, 15.26824f, "volTrafficFront3");
	iLocal_351[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-405.959f, 577.1532f, 107.5697f, 0f, 0f, -71.00001f, 12.06777f, 69.05878f, 15.26824f, "volTrafficFront4");
	iLocal_351[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-367.6408f, 586.2776f, 107.5697f, 0f, 0f, -98.63483f, 12.06777f, 29.95085f, 15.26824f, "volTrafficFront5");
	iLocal_370 = 6;
}

void func_416()
{
	iLocal_341[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(647.751f, -565.954f, 72.126f, 0f, 0f, 0f, 100f, 100f, 35.485f, "volDefGiveup");
	if (__LIB_0__::func_51(&uLocal_335, 1))
	{
		iLocal_341[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(647.4061f, -565.9747f, 75.88709f, 0f, 0f, -125.9937f, 24.09573f, 32.06016f, 6.311f, "volBridgeWarnClose");
		iLocal_341[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeWarn");
		VOLUME::_0x39816F6F94F385AD(iLocal_341[1], 633.6946f, -554.2732f, 77.4618f, 0f, 0f, 57.07339f, 30.05375f, 24.54822f, 9.469954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[1], 641.2242f, -566.9386f, 77.4618f, 0f, 0f, 57.07339f, 16.97533f, 51.01271f, 9.469954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[1], 656.9911f, -571.0037f, 77.4618f, 0f, 0f, 18.63651f, 22.57937f, 12.01573f, 9.469954f);
		iLocal_341[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(640.586f, -561.0209f, 76.48084f, 0f, 0f, -125.9937f, 7.150814f, 10.1032f, 6.311f, "volBridge");
		iLocal_341[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(621.6718f, -546.5735f, 72.34702f, 0f, 0f, 62.04675f, 36.86057f, 30.67492f, 25.96892f, "volReturnAggro");
		iLocal_341[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(645.2687f, -564.441f, 75.41017f, 0f, 0f, -124.9937f, 21.47498f, 44.42463f, 6.311f, "volBridgeSlow");
		iLocal_341[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(630.5252f, -548.0726f, 80.98422f, 0f, 0f, 57.07339f, 38.82167f, 29.95142f, 17.91206f, "volBackTrigger");
	}
	else
	{
		iLocal_341[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(642.1268f, -562.14f, 75.88709f, 0f, 0f, -125.9937f, 24.09573f, 32.06016f, 6.311f, "volBridgeWarnClose");
		iLocal_341[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeWarn");
		VOLUME::_0x39816F6F94F385AD(iLocal_341[1], 633.6946f, -554.2732f, 77.4618f, 0f, 0f, 57.07339f, 30.05375f, 24.54822f, 9.469954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[1], 641.2242f, -566.9386f, 77.4618f, 0f, 0f, 57.07339f, 16.97533f, 51.01271f, 9.469954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[1], 656.9911f, -571.0037f, 77.4618f, 0f, 0f, 18.63651f, 22.57937f, 12.01573f, 9.469954f);
		iLocal_341[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(650.1728f, -567.9846f, 76.48084f, 0f, 0f, -125.9937f, 7.150814f, 10.33028f, 6.311f, "volBridge");
		iLocal_341[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(676.1198f, -576.1379f, 72.34702f, 0f, 0f, -4.391457f, 31.5306f, 34.08573f, 25.96892f, "volReturnAggro");
		iLocal_341[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(644.7291f, -564.0631f, 75.41017f, 0f, 0f, -124.9937f, 21.47498f, 38.3907f, 9.308f, "volBridgeSlow");
		iLocal_341[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBackTrigger");
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], 664.1025f, -573.9651f, 77.4618f, 0f, 0f, 57.07339f, 30.05375f, 24.54822f, 9.469954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], 676.4772f, -576.0358f, 77.4618f, 0f, 0f, 103.0734f, 30.05375f, 24.54822f, 9.469954f);
	}
	iLocal_351[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(632.0735f, -554.4664f, 78.66035f, 0f, 0f, -35f, 100.3491f, 10f, 15f, "volTrafficFront0");
	iLocal_351[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(696.9577f, -571.5548f, 78.66034f, 0f, 0f, 7.999999f, 65.35942f, 18.43743f, 15f, "volTrafficFront1");
	iLocal_351[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(793.002f, -573.3525f, 78.66034f, 0f, 0f, -4f, 65.35942f, 18.43743f, 15f, "volTrafficFront2");
	iLocal_351[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(835.3141f, -594.6071f, 78.66034f, 0f, 0f, -62.03914f, 56.33904f, 12.90794f, 15f, "volTrafficFront3");
	iLocal_351[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(836.5599f, -692.8458f, 68.8091f, 0f, 0f, -100.0391f, 126.8973f, 12.90794f, 37.86209f, "volTrafficFront4");
	iLocal_351[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(815.5601f, -817.1467f, 68.80911f, 0f, 0f, -97.03909f, 126.8973f, 12.90794f, 37.86209f, "volTrafficFront5");
	iLocal_369 = 6;
	iLocal_360[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(592.7881f, -499.8545f, 84.14195f, 0f, 0f, 7.999999f, 57.30478f, 27.17824f, 20.46331f, "volTrafficBack0");
	iLocal_360[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(649.293f, -459.9375f, 88.25809f, 0f, 0f, 36f, 87.80305f, 9.756142f, 20.46331f, "volTrafficBack1");
	iLocal_360[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(710.0963f, -406.305f, 88.2581f, 0f, 0f, 47f, 77.20781f, 9.756142f, 20.46331f, "volTrafficBack2");
	iLocal_360[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(742.8212f, -341.375f, 88.2581f, 0f, 0f, 83f, 82.61906f, 9.756142f, 52.34641f, "volTrafficBack3");
	iLocal_360[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(765.9642f, -280.7814f, 88.25812f, 0f, 0f, 50.00002f, 66.04215f, 9.756142f, 52.34641f, "volTrafficBack4");
	iLocal_360[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(786.3411f, -248.5615f, 88.25812f, 0f, 0f, 77.00007f, 33.02288f, 9.756142f, 52.34641f, "volTrafficBack5");
	iLocal_370 = 6;
}

void func_417()
{
	iLocal_341[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(158.1181f, 591.0483f, 125.1889f, 0f, 0f, 0f, 140f, 140f, 50.485f, "volDefGiveup");
	iLocal_341[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(155.736f, 588.315f, 126.798f, 0f, 0f, 148.41f, 7.150814f, 34.575f, 6.311f, "volBridgeWarnClose");
	if (__LIB_0__::func_51(&uLocal_335, 1))
	{
		iLocal_341[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeWarn");
		VOLUME::_0x39816F6F94F385AD(iLocal_341[1], 160.6319f, 594.6544f, 132.2973f, 0f, 0f, -32.46052f, 25.06345f, 37.04864f, 15.20209f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[1], 147.5023f, 574.0135f, 132.2973f, 0f, 0f, -32.46052f, 15.19245f, 12.40347f, 15.20209f);
		iLocal_341[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(161.8954f, 598.3298f, 126.7984f, 0f, 0f, 148.4096f, 7.150814f, 10.1032f, 6.311f, "volBridge");
		iLocal_341[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(156.5932f, 587.8571f, 127.5994f, 0f, 0f, 145.4724f, 21.47498f, 44.42463f, 6.311f, "volBridgeSlow");
		iLocal_341[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(169.2314f, 614.4426f, 132.007f, 0f, 0f, -30.706f, 28.44364f, 23.52666f, 25.96892f, "volReturnAggro");
		iLocal_341[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(171.4886f, 615.9463f, 131.1137f, 0f, 0f, -32.46052f, 39.29245f, 30.85864f, 15.20209f, "volBackTrigger");
	}
	else
	{
		iLocal_341[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(158.1274f, 592.0658f, 129.0014f, 0f, 0f, -28.52877f, 15.69096f, 40.99126f, 10.87629f, "volBridgeWarn");
		iLocal_341[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(149.5695f, 577.5963f, 125.8169f, 0f, 0f, 150.4042f, 5.583646f, 10.33028f, 6.311f, "volBridge");
		iLocal_341[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(156.5718f, 591.8376f, 128.1131f, 0f, 0f, 149.4041f, 21.47498f, 38.3907f, 9.308f, "volBridgeSlow");
		iLocal_341[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(143.0135f, 569.6654f, 124.3309f, 0f, 0f, 57.37022f, 20.11629f, 27.99249f, 19.95054f, "volReturnAggro");
		iLocal_341[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBackTrigger");
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], 138.0251f, 562.7319f, 129.0014f, 0f, 0f, -28.52877f, 32.13404f, 40.99126f, 10.87629f);
		VOLUME::_0x39816F6F94F385AD(iLocal_341[8], 125.5574f, 569.5095f, 132.5338f, 0f, 0f, -28.52877f, 32.13404f, 40.99126f, 7.79227f);
	}
	iLocal_351[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(73.78506f, 578.5472f, 131.1019f, 0f, 0f, 101.3742f, 10.87676f, 38.76033f, 23.26453f, "volTrafficFront2");
	iLocal_351[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(116.2927f, 574.9263f, 131.1019f, 0f, 0f, 70.37415f, 10.87676f, 55.24675f, 23.26453f, "volTrafficFront1");
	iLocal_351[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(155.4552f, 587.8574f, 130.7243f, 0f, 0f, 148.4095f, 10.87676f, 55.24675f, 14.44145f, "volTrafficFront0");
	iLocal_369 = 3;
	iLocal_360[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(270.7167f, 696.313f, 145.0663f, 0f, 0f, 136.4096f, 17.81065f, 50.21223f, 24.87616f, "volTrafficBack0");
	iLocal_360[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(184.1633f, 634.539f, 136.7988f, 0f, 0f, 148.4095f, 17.81065f, 55.24675f, 26.25664f, "volTrafficBack1");
	iLocal_360[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(229.17f, 664.6456f, 145.0663f, 0f, 0f, 115.4096f, 17.81065f, 70.72808f, 24.87616f, "volTrafficBack2");
	iLocal_370 = 3;
}

int func_443(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_443(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_463(int iParam0, int iParam1)
{
	iLocal_411[iParam0] = iParam1;
}

struct<4> func_472(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_560(iParam0, iParam1) };
	Var0.f_3 = func_561(iParam0, iParam1);
	return Var0;
}

Vector3 func_560(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -611.1245f, 405.3456f, 94.8194f;
				case 1:
					return -608.8385f, 403.9398f, 94.8737f;
				case 2:
					return -618.5556f, 407.0042f, 97.3039f;
				case 3:
					return -614.6684f, 397.761f, 94.9115f;
				case 4:
					return -605.3867f, 398.1589f, 95.0628f;
				case 5:
					return -608.8666f, 392.4867f, 94.9508f;
				case 6:
					return -615.6914f, 397.3817f, 95.0502f;
				case 7:
					return -610.619f, 402.311f, 94.8764f;
				case 8:
					return -609.9176f, 407.1404f, 95.1032f;
				case 9:
					return -607.9185f, 406.2542f, 95.1175f;
				case 10:
					return -613.2853f, 400.8653f, 94.8283f;
				case 11:
					return -608.6659f, 397.7701f, 95.0588f;
				case 12:
					return -605.8256f, 396.8602f, 95.1319f;
				case 13:
					return -612.4907f, 408.9113f, 95.14f;
				case 14:
					return -606.0529f, 405.5781f, 94.9927f;
				case 15:
					return -610.9216f, 399.271f, 95.1319f;
				case 16:
					return -619.8245f, 406.6147f, 97.5964f;
				case 17:
					return -605.7453f, 396.8016f, 95.1027f;
				case 18:
					return -623.5609f, 406.6214f, 97.8497f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -598.9288f, 429.7303f, 95.2501f;
				case 1:
					return -599.8478f, 431.4405f, 95.3883f;
				case 2:
					return -587.6171f, 428.299f, 94.8931f;
				case 3:
					return -599.2002f, 432.6502f, 95.4262f;
				case 4:
					return -605.365f, 431.263f, 95.437f;
				case 5:
					return -604.5418f, 435.8992f, 95.3983f;
				case 6:
					return -602.2969f, 434.9793f, 95.6161f;
				case 7:
					return -597.446f, 430.717f, 95.387f;
				case 8:
					return -597.9269f, 426.2073f, 95.3941f;
				case 9:
					return -600.4075f, 428.6143f, 95.3234f;
				case 10:
					return -594.3365f, 430.9203f, 95.1069f;
				case 11:
					return -600.1885f, 435.9804f, 95.6977f;
				case 12:
					return -605.769f, 429.2039f, 95.2814f;
				case 13:
					return -596.4176f, 423.2426f, 95.4031f;
				case 14:
					return -603.2858f, 427.1719f, 95.2551f;
				case 15:
					return -597.5562f, 433.4067f, 95.1998f;
				case 16:
					return -588.1832f, 429.0511f, 95.2352f;
				case 17:
					return -610.2208f, 430.0487f, 95.2781f;
				case 18:
					return -583.6309f, 436.9278f, 97.1811f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 634.0073f, -557.6993f, 73.5556f;
				case 1:
					return 632.2779f, -559.0392f, 73.6795f;
				case 2:
					return 639.1818f, -544.5364f, 75.0334f;
				case 3:
					return 631.9969f, -554.2656f, 73.9663f;
				case 4:
					return 629.6702f, -563.7369f, 73.5415f;
				case 5:
					return 626.8428f, -560.1967f, 73.7922f;
				case 6:
					return 628.0094f, -557.3495f, 73.7545f;
				case 7:
					return 632.961f, -556.06f, 74.623f;
				case 8:
					return 635.3682f, -557.8059f, 73.7571f;
				case 9:
					return 633.6229f, -559.4942f, 73.6552f;
				case 10:
					return 630.593f, -558.6002f, 73.725f;
				case 11:
					return 630.7067f, -554.9304f, 74.0251f;
				case 12:
					return 629.2811f, -566.0851f, 73.2071f;
				case 13:
					return 637.9544f, -553.7878f, 73.6649f;
				case 14:
					return 633.0051f, -561.0933f, 73.5536f;
				case 15:
					return 632.0001f, -554.4648f, 73.9423f;
				case 16:
					return 635.0642f, -550.7635f, 73.9726f;
				case 17:
					return 629.3401f, -566.1298f, 73.2055f;
				case 18:
					return 639.2302f, -542.2399f, 75.2692f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 657.5958f, -572.2556f, 73.4153f;
				case 1:
					return 658.9864f, -570.0203f, 73.4152f;
				case 2:
					return 654.9276f, -581.6813f, 73.5933f;
				case 3:
					return 659.5045f, -575.8531f, 73.4135f;
				case 4:
					return 662.7193f, -566.3474f, 73.352f;
				case 5:
					return 668.3588f, -569.7413f, 73.592f;
				case 6:
					return 666.7034f, -570.6962f, 73.6557f;
				case 7:
					return 658.56f, -573.16f, 74.43f;
				case 8:
					return 655.4662f, -571.4948f, 73.4866f;
				case 9:
					return 657.7796f, -569.5179f, 73.4152f;
				case 10:
					return 661.5032f, -571.3283f, 73.4152f;
				case 11:
					return 661.4101f, -574.5912f, 73.422f;
				case 12:
					return 664.9859f, -567.2193f, 73.2829f;
				case 13:
					return 652.2612f, -574.8112f, 73.4207f;
				case 14:
					return 657.4054f, -568.0789f, 73.4152f;
				case 15:
					return 660.6553f, -574.7538f, 73.4152f;
				case 16:
					return 648.8655f, -580.9855f, 73.6069f;
				case 17:
					return 664.9859f, -567.2193f, 73.2829f;
				case 18:
					return 659.1113f, -581.4687f, 73.5923f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 166.7869f, 605.8944f, 124.2664f;
				case 1:
					return 165.1028f, 607.7051f, 124.3675f;
				case 2:
					return 168.5032f, 602.4894f, 124.1373f;
				case 3:
					return 165.0677f, 610.5119f, 124.588f;
				case 4:
					return 162.4056f, 612.8509f, 124.9476f;
				case 5:
					return 162.6719f, 619.9248f, 126.0605f;
				case 6:
					return 164.3079f, 618.0686f, 125.7382f;
				case 7:
					return 166.956f, 608.864f, 125.425f;
				case 8:
					return 166.0946f, 604.6896f, 124.3453f;
				case 9:
					return 164.2992f, 606.3058f, 124.1654f;
				case 10:
					return 170.429f, 611.5747f, 124.8414f;
				case 11:
					return 165.603f, 613.8556f, 124.9976f;
				case 12:
					return 162.0633f, 614.9688f, 125.2411f;
				case 13:
					return 168.105f, 607.5378f, 124.451f;
				case 14:
					return 162.91f, 606.9412f, 124.1815f;
				case 15:
					return 168.3227f, 615.0331f, 125.1133f;
				case 16:
					return 168.844f, 603.5464f, 124.3343f;
				case 17:
					return 162.1922f, 614.1418f, 125.1256f;
				case 18:
					return 171.8298f, 606.1663f, 124.9314f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 147.0648f, 572.8252f, 124.4478f;
				case 1:
					return 147.8266f, 571.4056f, 124.4724f;
				case 2:
					return 144.6792f, 580.0371f, 124.4745f;
				case 3:
					return 143.5594f, 569.5858f, 124.8164f;
				case 4:
					return 145.8617f, 564.0312f, 125.1462f;
				case 5:
					return 137.6405f, 564.9068f, 126.7943f;
				case 6:
					return 139.1305f, 576.1251f, 125.4169f;
				case 7:
					return 144.809f, 571.268f, 125.457f;
				case 8:
					return 146.924f, 574.2375f, 124.4518f;
				case 9:
					return 149.0296f, 572.4706f, 124.4709f;
				case 10:
					return 140.1848f, 573.7069f, 125.4338f;
				case 11:
					return 140.7471f, 568.0758f, 125.5444f;
				case 12:
					return 141.9623f, 560.896f, 125.8675f;
				case 13:
					return 143.6848f, 574.5667f, 124.5902f;
				case 14:
					return 149.7793f, 570.938f, 124.3232f;
				case 15:
					return 143.912f, 568.7972f, 124.9267f;
				case 16:
					return 144.1788f, 580.1666f, 124.5295f;
				case 17:
					return 141.9623f, 560.896f, 125.8675f;
				case 18:
					return 139.6767f, 579.9559f, 125.1209f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_561(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 338.28f;
				case 1:
					return -79.239f;
				case 2:
					return 278.761f;
				case 3:
					return 338.28f;
				case 4:
					return 4.973f;
				case 5:
					return -236.4f;
				case 6:
					return 168.689f;
				case 7:
					return 174.073f;
				case 8:
					return -31.0601f;
				case 9:
					return -27.0829f;
				case 10:
					return 162.3347f;
				case 11:
					return 156.3347f;
				case 12:
					return 338.973f;
				case 13:
					return 322.973f;
				case 14:
					return 354.973f;
				case 15:
					return 344.973f;
				case 16:
					return 300.973f;
				case 17:
					return 352.973f;
				case 18:
					return 167.4478f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 92.405f;
				case 1:
					return 104f;
				case 2:
					return 104f;
				case 3:
					return 0.7f;
				case 4:
					return 186.973f;
				case 5:
					return -65.5442f;
				case 6:
					return 318.24f;
				case 7:
					return 354.9277f;
				case 8:
					return 148.8999f;
				case 9:
					return 152.8999f;
				case 10:
					return -23.6652f;
				case 11:
					return -41.6652f;
				case 12:
					return 176.973f;
				case 13:
					return 124.8999f;
				case 14:
					return 178.8999f;
				case 15:
					return -175.6652f;
				case 16:
					return 94.3348f;
				case 17:
					return 194.973f;
				case 18:
					return 9.4478f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -109.72f;
				case 1:
					return -185.239f;
				case 2:
					return -167.239f;
				case 3:
					return 344.761f;
				case 4:
					return 12.4815f;
				case 5:
					return 21.6f;
				case 6:
					return 20.689f;
				case 7:
					return -19.74f;
				case 8:
					return -123.0601f;
				case 9:
					return -121.0829f;
				case 10:
					return 78.3347f;
				case 11:
					return 72.3347f;
				case 12:
					return -101.1895f;
				case 13:
					return -163.0601f;
				case 14:
					return -93.0829f;
				case 15:
					return 246.3347f;
				case 16:
					return -141.6653f;
				case 17:
					return -101.1895f;
				case 18:
					return 445.8533f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 74.405f;
				case 1:
					return 0f;
				case 2:
					return 26f;
				case 3:
					return 160.7f;
				case 4:
					return 7.7153f;
				case 5:
					return -119.5442f;
				case 6:
					return 204.24f;
				case 7:
					return 165.79f;
				case 8:
					return 54.8999f;
				case 9:
					return 66.8999f;
				case 10:
					return -119.6652f;
				case 11:
					return -117.6652f;
				case 12:
					return 98.5941f;
				case 13:
					return 12.8999f;
				case 14:
					return 92.8999f;
				case 15:
					return 64.3348f;
				case 16:
					return -3.6652f;
				case 17:
					return 98.5941f;
				case 18:
					return 309.8533f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -195.72f;
				case 1:
					return -275.239f;
				case 2:
					return -121.239f;
				case 3:
					return -17.239f;
				case 4:
					return 219.4203f;
				case 5:
					return -44.4f;
				case 6:
					return -37.311f;
				case 7:
					return 350f;
				case 8:
					return -215.0601f;
				case 9:
					return -195.0829f;
				case 10:
					return -15.6653f;
				case 11:
					return -29.6653f;
				case 12:
					return 183.4203f;
				case 13:
					return -215.0601f;
				case 14:
					return -187.0829f;
				case 15:
					return -187.6653f;
				case 16:
					return 124.3347f;
				case 17:
					return 193.4203f;
				case 18:
					return 364.5374f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -9.595f;
				case 1:
					return 270f;
				case 2:
					return 166f;
				case 3:
					return 80.7f;
				case 4:
					return 349.4203f;
				case 5:
					return 74.4558f;
				case 6:
					return 114.24f;
				case 7:
					return 85f;
				case 8:
					return 328.8999f;
				case 9:
					return 324.8999f;
				case 10:
					return 106.3348f;
				case 11:
					return -269.6652f;
				case 12:
					return 333.4203f;
				case 13:
					return 300.8999f;
				case 14:
					return 350.8999f;
				case 15:
					return -21.6652f;
				case 16:
					return -63.6652f;
				case 17:
					return 333.4203f;
				case 18:
					return 158.5374f;
			}
			break;
	}
	return 0f;
}

