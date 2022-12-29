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
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280[5] = { 0, 0, 0, 0, 0 };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_303 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_303, 961, 0);
		if (bLocal_303)
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
					if (__LIB_2__::func_257())
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
					if (__LIB_2__::func_547())
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
			__LIB_2__::func_149(&Local_15, 4);
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
	__LIB_2__::func_418(&Local_15);
	func_49();
	__LIB_2__::func_423(&Local_15, 0);
	__LIB_2__::func_420();
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
		if (__LIB_2__::func_421())
		{
			return true;
		}
		if (__LIB_2__::func_415(&uVar5))
		{
			fVar4 = __LIB_2__::func_381();
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
				if (__LIB_0__::func_58())
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
	vVar2 = { func_105(iVar0) };
	fVar5 = func_106(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
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
		if (__LIB_0__::func_0(iVar0))
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
	vector3 vVar4;
	float fVar7;
	float fVar8;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_125(iVar0), 0);
			if (iVar0 != func_127() && iVar0 != 4)
			{
				func_128(&Local_15, iVar0, 0);
			}
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], true, true);
			switch (iVar0)
			{
				case 0:
				case 1:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 4:
					__LIB_2__::func_279(Local_15[iVar0], 1);
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				default:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
			}
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
			__LIB_2__::func_314(&Local_15, iVar0, 55, 70);
		}
		iVar0++;
	}
	func_132(&vVar1, &vVar4);
	ENTITY::SET_ENTITY_COORDS(Local_15.f_52[0], vVar1, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(Local_15.f_52[0], vVar4, 2, true);
	ENTITY::_0x3F08C6163A4AB1D6(Local_15.f_52[0]);
	ENTITY::FREEZE_ENTITY_POSITION(Local_15.f_52[0], true);
	if (Local_15.f_221 == 0 && __LIB_0__::func_51(&uLocal_278, 256))
	{
		fVar7 = 38f;
		fVar8 = 16f;
	}
	else
	{
		fVar7 = 33f;
		fVar8 = 17f;
	}
	iLocal_280[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false), 0f, 0f, 0f, fVar7, fVar7, 20f, "volTrigger");
	iLocal_280[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false), 0f, 0f, 0f, fVar8, fVar8, 20f, "volTriggerFoot");
	return true;
}

bool func_23()
{
	vector3 vVar0;
	var uVar4;
	if (iLocal_274 <= 1)
	{
		if (func_136(&uVar4))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			func_137(&uVar4);
			iLocal_274 = 5;
		}
	}
	if (iLocal_279 == 0 || iLocal_279 == 1)
	{
		func_138();
	}
	if (iLocal_274 > 0)
	{
		func_139();
	}
	func_140();
	switch (iLocal_274)
	{
		case 0:
			if (func_141())
			{
				if (func_142())
				{
					vVar0 = { func_143(0) };
					AUDIO::_0x374F0E716BFCDE82("EXPLOSIONS_SCRIPTED_WAGON_WOOD_BIG", vVar0);
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
					__LIB_2__::func_483(&Local_15, 1);
					__LIB_1__::func_148(&uLocal_289);
					iLocal_274 = 2;
				}
			}
			else if (func_145())
			{
				if (func_146())
				{
					__LIB_0__::func_7(&uLocal_278, 64);
				}
			}
			else if (func_148())
			{
				if (func_149())
				{
					__LIB_2__::func_233(&Local_15, 12);
				}
			}
			break;
		case 1:
			if (func_141())
			{
				if (func_142())
				{
					vVar0 = { func_143(0) };
					AUDIO::_0x374F0E716BFCDE82("EXPLOSIONS_SCRIPTED_WAGON_WOOD_BIG", vVar0);
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
					__LIB_2__::func_483(&Local_15, 1);
					__LIB_1__::func_148(&uLocal_289);
					iLocal_274 = 2;
				}
			}
			break;
		case 2:
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			func_150();
			if (__LIB_0__::func_51(&uLocal_278, 2))
			{
				vLocal_286 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -3f, -5f, 0f) };
				__LIB_2__::func_106(&vLocal_286, 1, 10, 0);
				iLocal_280[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_36, 0f, 0f, 0f, 15f, 15f, 15f, "volHorseStayout");
				iLocal_274 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_51(&uLocal_278, 8192))
			{
				__LIB_2__::func_417(&Local_15, iLocal_280[2], vLocal_286, 2.001f, 30f, 2f, 1);
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			if (func_152())
			{
				iLocal_274 = 4;
			}
			break;
		case 4:
			func_153();
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			if (HUD::IS_RADAR_HIDDEN())
			{
				MAP::DISPLAY_RADAR(true);
			}
			if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			}
			__LIB_2__::func_430(0, 7);
			iLocal_274 = 5;
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	bool bVar1;
	func_167();
	switch (iLocal_275)
	{
		case 0:
			__LIB_1__::func_283(&uLocal_295, 0);
			func_168();
			func_169(&Local_15, 1, 0, -1);
			iLocal_275 = 1;
			break;
		case 1:
			if (func_170())
			{
				iLocal_275 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				if (__LIB_2__::func_374(&Local_15) <= 3 || __LIB_1__::func_285(&uLocal_295, 15f))
				{
					PLAYER::_0x93F499CAE53FCD05(PLAYER::PLAYER_ID(), 4, 0.85f);
					iVar0 = 0;
					while (iVar0 <= 4)
					{
						if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
						{
							__LIB_1__::func_733(Local_15[iVar0]);
							PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
							if (!bVar1)
							{
								if (__LIB_0__::func_51(&uLocal_278, 8))
								{
									if (func_174(Local_15[iVar0], Global_35, "AMBUSH_WAB_TRIGGER", 100f, 0, -500314840))
									{
										bVar1 = true;
									}
								}
							}
						}
						iVar0++;
					}
					iLocal_275 = 3;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_374(&Local_15) <= 0)
			{
				PLAYER::_0x93F499CAE53FCD05(PLAYER::PLAYER_ID(), 4, 1f);
				iLocal_275 = 4;
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
	STREAMING::_REMOVE_IMAP(612040624);
	STREAMING::_REMOVE_IMAP(-105525329);
	STREAMING::_REMOVE_IMAP(-1389718656);
	STREAMING::_REMOVE_IMAP(-1176903838);
	PLAYER::_0x93F499CAE53FCD05(PLAYER::PLAYER_ID(), 4, 1f);
	__LIB_2__::func_161(Local_15.f_209, __LIB_2__::func_34(13), 5);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_172(iLocal_280[iVar0]);
		iVar0++;
	}
}

bool func_83()
{
	float fVar0[3];
	int iVar4;
	int iVar5;
	switch (Local_15.f_221)
	{
		case 0:
			iLocal_279 = 0;
			break;
		case 1:
			iLocal_279 = 1;
			break;
		default:
			iLocal_279 = 0;
			break;
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 0;
	Local_15.f_216 = 0;
	Local_15.f_181 = 2;
	switch (iLocal_279)
	{
		case 1:
			Local_15.f_218 = 1;
			break;
		default:
			Local_15.f_218 = 1;
			break;
	}
	fVar0[0] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(13, 0, Local_15.f_221));
	fVar0[1] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(13, 1, Local_15.f_221));
	fVar0[2] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(13, 2, Local_15.f_221));
	iVar5 = 0;
	iVar4 = 1;
	while (iVar4 <= 2)
	{
		if (fVar0[iVar4] < fVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	switch (iVar5)
	{
		case 0:
			switch (iLocal_279)
			{
				case 0:
					STREAMING::_REQUEST_IMAP(612040624);
					break;
				case 1:
					STREAMING::_REQUEST_IMAP(-1176903838);
					break;
			}
			__LIB_0__::func_7(&uLocal_278, 4);
			break;
		case 1:
			switch (iLocal_279)
			{
				case 0:
					STREAMING::_REQUEST_IMAP(-105525329);
					break;
				case 1:
					STREAMING::_REQUEST_IMAP(-1176903838);
					break;
			}
			__LIB_0__::func_7(&uLocal_278, 128);
			break;
		case 2:
			switch (iLocal_279)
			{
				case 0:
					STREAMING::_REQUEST_IMAP(-1389718656);
					break;
				case 1:
					STREAMING::_REQUEST_IMAP(-1176903838);
					break;
			}
			__LIB_0__::func_7(&uLocal_278, 256);
			break;
	}
	func_243();
	__LIB_2__::func_111(&(Local_15.f_152), 1);
	__LIB_2__::func_182(&(Local_15.f_152), 0);
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 3, 1);
	return true;
}

bool func_95()
{
	int iVar0;
	STREAMING::REQUEST_MODEL(joaat("G_M_O_UNIEXCONFEDS_01"), false);
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_UNIEXCONFEDS_01"), false);
	STREAMING::REQUEST_MODEL(joaat("S_WAGONPARKED01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_TNTWAGON02X"), false);
	iVar0 = 1;
	if (((!STREAMING::HAS_MODEL_LOADED(joaat("G_M_O_UNIEXCONFEDS_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_UNIEXCONFEDS_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_WAGONPARKED01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_TNTWAGON02X")))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_254(iVar0);
}

int func_97(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_255(iVar0);
}

int func_104(var uParam0)
{
	int iVar0;
	iVar0 = uParam0;
	return func_257(iVar0);
}

Vector3 func_105(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_143(iVar0) };
	return vVar1;
}

var func_106(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = uParam0;
	Var1 = { func_143(iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_260(iVar0) };
	return vVar1;
}

float func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_260(iVar0) };
	return Var1.f_3;
}

char* func_125(int iParam0)
{
	int iVar0;
	iVar0 = func_261(iParam0);
	return func_262(iVar0);
}

int func_127()
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_279)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				iVar0 = 1;
			}
			else if (__LIB_0__::func_51(&uLocal_278, 256))
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				iVar0 = 2;
			}
			break;
	}
	return iVar0;
}

void func_128(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_VISIBLE((*uParam0)[iParam1]))
		{
			ENTITY::_0xA91E6CF94404E8C9((*uParam0)[iParam1]);
			ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iParam1], true);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iParam1], true);
		}
		ENTITY::SET_ENTITY_COLLISION((*uParam0)[iParam1], true, false);
		ENTITY::SET_ENTITY_PROOFS((*uParam0)[iParam1], 0, false);
		ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iParam1], false);
		__LIB_2__::func_239(uParam0, iParam1, 4);
	}
	else
	{
		ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iParam1], false);
		ENTITY::SET_ENTITY_COLLISION((*uParam0)[iParam1], false, false);
		ENTITY::SET_ENTITY_PROOFS((*uParam0)[iParam1], 127, false);
		ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iParam1], true);
		__LIB_2__::func_152(uParam0, iParam1, 4);
	}
}

void func_132(var uParam0, var uParam1)
{
	switch (iLocal_279)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				*uParam0 = { 915.95f, -1128.921f, 53.177f };
				*uParam1 = { 5.927f, -5.88f, -45.075f };
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				*uParam0 = { 925.7f, -1171.3f, 54.175f };
				*uParam1 = { -4.473f, 6.62f, 149.925f };
			}
			else if (__LIB_0__::func_51(&uLocal_278, 256))
			{
				*uParam0 = { 943.8f, -1155.1f, 56.095f };
				*uParam1 = { 4.927f, 2.82f, -138.775f };
			}
			break;
		case 1:
			*uParam0 = { 1483.9f, -1043.9f, 54.4f };
			*uParam1 = { 10.127f, 5.42f, 76.225f };
			break;
	}
}

bool func_136(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_735(Local_15[iVar0], 0, &(Local_15.f_152), &(Local_15.f_180), 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	if (__LIB_0__::func_51(&uLocal_278, 64))
	{
		*uParam0 = 1;
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_15.f_52[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(Local_15.f_52[0], Global_35, 1, 1))
	{
		*uParam0 = 1;
		return true;
	}
	if (!__LIB_2__::func_172(13, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[0]))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Local_15.f_52[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_15.f_52[0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_15.f_52[0]))
			{
				return true;
			}
		}
	}
	return false;
}

void func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!func_267(&Local_15, iVar0))
			{
				if (!func_268(iVar0))
				{
					PED::DELETE_PED(&(Local_15[iVar0]));
					Jump @226; //curOff = 64
				}
				else
				{
					func_128(&Local_15, iVar0, 1);
				}
			}
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.3f, 1f, 1, 1);
			if (!*uParam0)
			{
				if (func_97(iVar0) == joaat("G_M_Y_UNIEXCONFEDS_01"))
				{
					func_174(Local_15[iVar0], Global_35, "AMBUSH_WAB_BYPASS", -1073741824 /* Float: -2f */, 0, -500314840);
					*uParam0 = 1;
				}
			}
			func_128(&Local_15, iVar0, 1);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
	__LIB_0__::func_7(&uLocal_278, 1);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

void func_138()
{
	vector3 vVar0;
	char* sVar3;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_302))
	{
		if (iLocal_279 == 0)
		{
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				vVar0 = { func_105(0) };
				sVar3 = "DES_gang_wagon_front";
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				vVar0 = { func_105(0) };
				sVar3 = "DES_gang_wagon_back";
			}
			else if (__LIB_0__::func_51(&uLocal_278, 256))
			{
				vVar0 = { func_105(0) };
				sVar3 = "DES_gang_wagon_side";
			}
		}
		else if (iLocal_279 == 1)
		{
			vVar0 = { func_105(0) };
			sVar3 = "DES_gang_wagon_rhodes_ne";
		}
		iLocal_302 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vVar0, 5f, sVar3);
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_302, 4);
	}
}

void func_139()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (!func_267(&Local_15, iVar0))
		{
			if (func_268(iVar0))
			{
				func_128(&Local_15, iVar0, 1);
			}
		}
		iVar0++;
	}
}

void func_140()
{
	if (!__LIB_0__::func_51(&uLocal_278, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[0]))
		{
			if (__LIB_0__::func_94(Local_15.f_52[0], Global_36, 1) < 80f && OBJECT::IS_OBJECT_VISIBLE(Local_15.f_52[0]))
			{
				__LIB_0__::func_7(&uLocal_278, 16384);
			}
		}
	}
}

bool func_141()
{
	vector3 vVar0;
	int iVar3;
	if (__LIB_0__::func_51(&uLocal_278, 32))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(Global_35) > 6.5f)
	{
		vVar0 = { __LIB_2__::func_114(Global_35, 0.5f) };
		iVar3 = iLocal_280[3];
	}
	else
	{
		vVar0 = { Global_36 };
		iVar3 = iLocal_280[4];
	}
	switch (iLocal_276)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[0]))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar3, vVar0))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
					__LIB_1__::func_148(&uLocal_289);
					__LIB_2__::func_671(&Local_15, 1);
					func_174(Local_15[4], Global_35, "AMBUSH_WAB_REVEAL_MISSION", 200f, 0, -500314840);
					func_272();
					__LIB_0__::func_7(&uLocal_278, 16);
					iLocal_276 = 1;
					iLocal_274 = 1;
				}
			}
			break;
		case 1:
			if (func_273(vVar0))
			{
				iLocal_276 = 2;
			}
			break;
		case 2:
			if (func_274(vVar0))
			{
				func_150();
				iLocal_276 = 3;
			}
			break;
		case 3:
			func_150();
			if (iLocal_279 == 0 || iLocal_279 == 1)
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_302) == 5)
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_142()
{
	struct<13> Var0;
	float fVar20;
	vector3 vVar21;
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false), false) < 22f)
	{
		if (__LIB_2__::func_1(Global_35, 0, 1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false), false) < (22f * 0.5f))
			{
				ENTITY::_SET_ENTITY_HEALTH(Global_35, BUILTIN::FLOOR((0.4f * IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35)))), 0);
			}
			else
			{
				ENTITY::_SET_ENTITY_HEALTH(Global_35, BUILTIN::FLOOR((0.6f * IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35)))), 0);
			}
		}
	}
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	}
	__LIB_2__::func_430(1, 7);
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[0]))
	{
		Var0.f_8 = -1082130432;
		Var0 = { func_275() };
		Var0.f_3 = { func_276() };
		Var0.f_6 = joaat("WEAPON_REPEATER_CARBINE");
		Var0.f_7 = 100f;
		Var0.f_10 = Local_15.f_52[0];
		Var0.f_12 = 1;
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
		if (iLocal_279 == 0 || iLocal_279 == 1)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_302, 6);
		}
		if (!__LIB_0__::func_71(Global_35))
		{
			fVar20 = __LIB_0__::func_152(Global_36, ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], true, false), 1);
			vVar21 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, fVar20, 0f, 0.8f, 0f) };
			FIRE::ADD_EXPLOSION(vVar21, 25, 0.2f, false, true, 1f);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		}
		else
		{
			func_150();
		}
		return true;
	}
	return false;
}

struct<4> func_143(int iParam0)
{
	struct<4> Var0;
	switch (iLocal_279)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 1:
						Var0 = { func_279(2, 4) };
						break;
					case 0:
						Var0 = { func_279(2, 4) };
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 1:
						Var0 = { func_279(1, 0) };
						break;
					case 0:
						Var0 = { func_279(1, 0) };
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						Var0 = { func_279(0, 0) };
						break;
					case 0:
						Var0 = { func_279(0, 0) };
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 1:
						Var0 = { func_279(3, 0) };
						break;
					case 0:
						Var0 = { func_279(3, 0) };
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 1:
						Var0 = { func_279(4, 0) };
						break;
					case 0:
						Var0 = { func_279(4, 0) };
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 1:
						Var0 = { func_279(5, 0) };
						break;
					case 0:
						Var0 = { func_279(5, 0) };
						break;
				}
			}
			break;
	}
	if (iParam0 == 0)
	{
		Var0 = { Var0 + Vector(0f, 2f, 2f) };
	}
	return Var0;
}

bool func_145()
{
	if (__LIB_0__::func_51(&uLocal_278, 16))
	{
		return false;
	}
	if (__LIB_0__::func_51(&uLocal_278, 32))
	{
		return true;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_280[0], 1, 0))
	{
		__LIB_1__::func_283(&uLocal_292, 0);
		return true;
	}
	return false;
}

bool func_146()
{
	if (!__LIB_0__::func_51(&uLocal_278, 32))
	{
		__LIB_1__::func_283(&uLocal_292, 0);
		func_174(Local_15[1], Global_35, "AMBUSH_WAB_BYPASS", -1073741824 /* Float: -2f */, 0, -500314840);
		__LIB_2__::func_671(&Local_15, 1);
		__LIB_2__::func_224(Local_15.f_151, 1);
		__LIB_0__::func_7(&uLocal_278, 32);
	}
	else if (__LIB_1__::func_285(&uLocal_292, 0.25f))
	{
		return true;
	}
	return false;
}

bool func_148()
{
	if (__LIB_0__::func_51(&uLocal_278, 32) || __LIB_0__::func_51(&uLocal_278, 16))
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_280[1], 1, 0))
	{
		__LIB_0__::func_11(&Local_15, 7);
		return true;
	}
	if (func_283(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_149()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_51(&uLocal_278, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_15.f_52[0]));
		}
	}
	iVar0 = 553856;
	iVar1 = 0;
	while (iVar1 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar1]))
		{
			if (func_284(iVar1))
			{
				PED::DELETE_PED(&(Local_15[iVar1]));
			}
			else
			{
				if (__LIB_2__::func_1(Local_15[iVar1], 0, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar1], 5, true);
					PED::_0x24C82EF607105FAA(Local_15[iVar1], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(Local_15[iVar1], 993130593);
					if (!__LIB_2__::func_4(&Local_15, 16384))
					{
						__LIB_2__::func_32(&(Local_15[iVar1]));
					}
					if (__LIB_2__::func_178(Local_15[iVar1]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15[iVar1], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar1], false, 0, false);
					if (PED::IS_PED_IN_COMBAT(Local_15[iVar1], Global_35))
					{
						TASK::CLEAR_PED_TASKS(Local_15[iVar1], false, false);
						TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15[iVar1], Global_35, 4, iVar0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(Local_15[iVar1], true);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_15[iVar1], false, false);
						TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15[iVar1], Global_35, 4, iVar0, -1082130432 /* Float: -1f */, -1, 0);
					}
				}
				PED::_0x39A2FC5AF55A52B1(Local_15[iVar1], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar1]));
			}
		}
		iVar1++;
	}
	return true;
}

void func_150()
{
	if (__LIB_0__::func_51(&uLocal_278, 1))
	{
		return;
	}
	if (!__LIB_0__::func_51(&uLocal_278, 2))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false), false) < 22f)
		{
			if (__LIB_2__::func_710(Global_35, &(Local_15.f_182.f_26), 1, 0, 256, 0))
			{
				__LIB_0__::func_7(&uLocal_278, 2);
			}
		}
		else
		{
			func_286(&Local_15, 1061997773 /* Float: 0.8f */, 1061997773 /* Float: 0.8f */, 1028443341 /* Float: 0.05f */, 1028443341 /* Float: 0.05f */);
			__LIB_0__::func_7(&uLocal_278, 2);
		}
		func_287();
	}
}

bool func_152()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	switch (iLocal_277)
	{
		case 0:
			if (!__LIB_0__::func_51(&uLocal_278, 2048))
			{
				if (__LIB_1__::func_285(&uLocal_289, 0.75f))
				{
					if (__LIB_2__::func_1(Local_15[4], 0, 0))
					{
						vVar0 = { func_288(4) };
						fVar3 = func_289(4);
						PED::SET_PED_ACCURACY(Local_15[4], 5);
						PED::_SET_PED_CROUCH_MOVEMENT(Local_15[4], false, 0, false);
						__LIB_2__::func_73(Local_15[4], &(Local_15.f_22[4]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[4], vVar0, 3f, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar4);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 2f, 20000, 0.25f, 2112, fVar3);
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
						__LIB_1__::func_474(Local_15[4], &iVar4, 0, 0, 1, 1);
					}
					__LIB_0__::func_7(&uLocal_278, 2048);
				}
			}
			if (__LIB_1__::func_285(&uLocal_289, 2f))
			{
				__LIB_1__::func_148(&uLocal_289);
				__LIB_0__::func_7(&uLocal_278, 8);
				if (__LIB_2__::func_1(Local_15[0], 0, 0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
				}
				iLocal_277 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&uLocal_289, 0.1f))
			{
				iVar5 = 0;
				while (iVar5 < Local_15.f_215)
				{
					if (__LIB_2__::func_1(Local_15[iVar5], 0, 0))
					{
						if (!bVar6)
						{
						}
						PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar5], false, 0, false);
					}
					iVar5++;
				}
				__LIB_1__::func_148(&uLocal_289);
				iLocal_277 = 2;
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&uLocal_289, 0.3f))
			{
				iLocal_277 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_153()
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (!func_267(&Local_15, iVar0))
			{
				if (func_268(iVar0))
				{
					func_128(&Local_15, iVar0, 1);
				}
			}
			if (func_267(&Local_15, iVar0))
			{
				if (!bVar1)
				{
					if (func_97(iVar0) == joaat("G_M_Y_UNIEXCONFEDS_01"))
					{
						if (!__LIB_0__::func_51(&uLocal_278, 8))
						{
							func_174(Local_15[iVar0], Global_35, "AMBUSH_WAB_TRIGGER", -1073741824 /* Float: -2f */, 0, -500314840);
						}
						bVar1 = true;
					}
				}
				TASK::TASK_COMBAT_PED(Local_15[iVar0], Global_35, 0, 0);
				__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
			else
			{
				PED::DELETE_PED(&(Local_15[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_167()
{
	int iVar0;
	if (__LIB_1__::func_285(&uLocal_295, 5f))
	{
		return;
	}
	if (!__LIB_0__::func_51(&uLocal_278, 64))
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (func_307(iVar0))
			{
				PED::SET_PED_RESET_FLAG(Local_15[iVar0], 27, true);
			}
			iVar0++;
		}
	}
}

void func_168()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	iVar5 = 0;
	while (iVar5 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar5], 0, 0))
		{
			vVar0 = { func_288(iVar5) };
			if (!__LIB_0__::func_86(vVar0))
			{
				fVar3 = func_308(iVar5);
				iVar4 = __LIB_1__::func_976(iVar5);
				if (fVar3 > 0f)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar5], vVar0, fVar3, iVar4, 0, 0);
				}
				if (__LIB_0__::func_0(iVar5) || __LIB_0__::func_51(&uLocal_278, 64))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar5], 45, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar5], 51, false);
				}
			}
			PED::_0x1F44B7E283C09EDE(Local_15[iVar5], 0f, 6000);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar5], 0);
		}
		iVar5++;
	}
	PLAYER::_0x93F499CAE53FCD05(PLAYER::PLAYER_ID(), 4, 0.2f);
}

void func_169(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = (uParam0->f_215 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 0))
			{
				if (!func_267(uParam0, iVar0))
				{
					func_128(uParam0, iVar0, 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 0))
			{
				if (func_267(uParam0, iVar0))
				{
					func_128(uParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

bool func_170()
{
	int iVar0;
	var uVar1[5];
	int iVar7;
	if (!__LIB_2__::func_227(-2f, 1, 0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_15[iVar0]) == joaat("G_M_Y_UNIEXCONFEDS_01"))
			{
				uVar1[iVar7] = Local_15[iVar0];
				iVar7++;
			}
		}
		iVar0++;
	}
	if (iVar7 < 1)
	{
		return true;
	}
	__LIB_14__::func_637(&uVar1, iVar7, Global_36, 1, 1, __LIB_0__::func_58());
	func_174(uVar1[0], Global_35, "AMBUSH_WAB_FLEE", 100f, 0, -500314840);
	return true;
}

bool func_174(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4, int iParam5)
{
	return __LIB_2__::func_303(iParam0, iParam1, sParam2, "", fParam3, iParam4, 0, 0, 1, fParam3 > 0f, 1, iParam5, 1, 0, 0);
}

void func_243()
{
	switch (iLocal_279)
	{
		case 0:
			func_360();
			break;
		case 1:
			func_361();
			break;
	}
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1797971034;
		case 1:
			return -1087408038;
		case 2:
			return -130032219;
		case 3:
			return -109387749;
		case 4:
			return -727597974;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("G_M_O_UNIEXCONFEDS_01");
		case 1:
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		case 2:
			return joaat("G_M_O_UNIEXCONFEDS_01");
		case 3:
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		case 4:
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		default:
			break;
	}
	return 0;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("S_WAGONPARKED01X");
		case 0:
			return joaat("P_TNTWAGON02X");
		default:
			break;
	}
	return 0;
}

struct<4> func_260(int iParam0)
{
	struct<4> Var0;
	switch (iLocal_279)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 0:
						return func_279(2, 0);
					case 1:
						return func_279(2, 1);
					case 2:
						return func_279(2, 2);
					case 3:
						return func_279(2, 3);
					case 4:
						return func_279(2, 5);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 0:
						return func_279(1, 2);
					case 1:
						return func_279(1, 1);
					case 2:
						return func_279(1, 3);
					case 3:
						return func_279(1, 4);
					case 4:
						return func_279(1, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return func_279(0, 1);
					case 1:
						return func_279(0, 2);
					case 2:
						return func_279(0, 3);
					case 3:
						return func_279(0, 4);
					case 4:
						return func_279(0, 5);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 0:
						return func_279(3, 1);
					case 1:
						return func_279(3, 2);
					case 2:
						return func_279(3, 3);
					case 3:
						return func_279(3, 4);
					case 4:
						return func_279(3, 5);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 0:
						return func_279(4, 1);
					case 1:
						return func_279(4, 2);
					case 2:
						return func_279(4, 3);
					case 3:
						return func_279(4, 4);
					case 4:
						return func_279(4, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return func_279(5, 1);
					case 1:
						return func_279(5, 2);
					case 2:
						return func_279(5, 3);
					case 3:
						return func_279(5, 4);
					case 4:
						return func_279(5, 5);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0174_G_M_O_UniExConfeds_01_WHITE_01";
		case 1:
			return "1026_G_M_Y_UniExConfeds_01_WHITE_04";
		default:
			break;
	}
	return "";
}

bool func_267(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT((*uParam0)[iParam1]) || ENTITY::IS_ENTITY_VISIBLE((*uParam0)[iParam1]))
	{
		return true;
	}
	if (!__LIB_2__::func_25(uParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

bool func_268(int iParam0)
{
	if ((ENTITY::IS_ENTITY_OCCLUDED(Local_15[iParam0]) || !ENTITY::IS_ENTITY_ON_SCREEN(Local_15[iParam0])) || __LIB_3__::func_886())
	{
		return true;
	}
	if (Local_15.f_9[iParam0] > 12f)
	{
		if (!__LIB_2__::func_0(Local_15[iParam0], 0.2f, 0.8f, 0.1f, 0.9f))
		{
			return true;
		}
		if (Local_15.f_182.f_26 >= 2)
		{
			return true;
		}
	}
	return false;
}

void func_272()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	iVar0 = func_127();
	vVar1 = { 0.2f, -0.2f, 0.8f };
	if (iLocal_279 == 1 && __LIB_0__::func_51(&uLocal_278, 4))
	{
		vVar1 = { 0.2f, -0.3f, 0.9f };
	}
	if (iLocal_279 == 0 && __LIB_0__::func_51(&uLocal_278, 4))
	{
		vVar1 = { 0.2f, -0.2f, 1f };
	}
	if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
		vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_52[0], vVar1) };
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_AIM_AT_COORD(0, vVar5, -1, 1, 1);
		__LIB_1__::func_474(Local_15[iVar0], &iVar4, 0, 0, 1, 1);
	}
}

bool func_273(vector3 vParam0)
{
	if (__LIB_1__::func_285(&uLocal_289, 5f))
	{
		return true;
	}
	if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 6.5f)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false), false) < 15f)
		{
			return true;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false), false) <= 10f)
	{
		return true;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_280[0], __LIB_1__::func_367(Global_36, vParam0, 0.2f)))
	{
		return true;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_280[1], __LIB_1__::func_367(Global_36, vParam0, 0.2f)))
	{
		return true;
	}
	return false;
}

bool func_274(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	iVar0 = func_127();
	fVar1 = func_414();
	bVar2 = func_273(vParam0);
	if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
	{
		if (__LIB_1__::func_285(&uLocal_289, fVar1) || bVar2)
		{
			if (!__LIB_0__::func_51(&uLocal_278, 4096))
			{
				vVar3 = { 0.2f, -0.2f, 0.8f };
				if (iLocal_279 == 1 && __LIB_0__::func_51(&uLocal_278, 4))
				{
					vVar3 = { 0.2f, -0.3f, 0.9f };
				}
				if (iLocal_279 == 0 && __LIB_0__::func_51(&uLocal_278, 4))
				{
					vVar3 = { 0.2f, -0.2f, 1f };
				}
				__LIB_2__::func_634(&(Local_15.f_152), 0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar6);
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_52[0], vVar3), -1, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
				TASK::CLOSE_SEQUENCE_TASK(iVar6);
				TASK::TASK_PERFORM_SEQUENCE(Local_15[iVar0], iVar6);
				if (bVar2)
				{
					__LIB_14__::func_337(Local_15[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_52[0], vVar3), 0, 0, 0, 0, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 27, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 30, true);
				__LIB_1__::func_283(&uLocal_298, 0);
				__LIB_0__::func_7(&uLocal_278, 4096);
			}
			else if (__LIB_1__::func_285(&uLocal_289, (fVar1 + 2.5f)) || (bVar2 && __LIB_1__::func_285(&uLocal_298, 0.2f)))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 27, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 30, false);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	if (MISC::_0x7A76104CC2CC69E8(Local_15.f_52[0], 0, 0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 30, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 27, false);
		return true;
	}
	return false;
}

Vector3 func_275()
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_52[0], 0.5f, -3f, 2f);
}

Vector3 func_276()
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_52[0], -0.5f, -0.3f, -0.1f);
}

struct<4> func_279(int iParam0, int iParam1)
{
	return func_417(iParam0, iParam1);
}

bool func_283(var uParam0)
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
			if (func_423(uParam0))
			{
				__LIB_0__::func_11(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (__LIB_2__::func_406(uParam0))
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

bool func_284(int iParam0)
{
	if (__LIB_2__::func_25(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_25(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_64(&Local_15, Local_15[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_25(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_286(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_2__::func_1(Global_1935630.f_40, 0, 0))
	{
		PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 3, iParam1, 0);
		PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 1, iParam2, 0);
		PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 3, iParam3);
		PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 1, iParam4);
		TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 4, 0, 0);
	}
}

void func_287()
{
	var uVar0[8];
	var uVar9[8];
	var uVar18[1];
	int iVar20;
	int iVar21;
	vector3 vVar22;
	int iVar25;
	var uVar26;
	int iVar27;
	var uVar28[3];
	var uVar32;
	int iVar34;
	int iVar35;
	vector3 vVar36;
	vector3 vVar39;
	if (!__LIB_0__::func_51(&uLocal_278, 512))
	{
		uVar18[0] = Global_35;
		vVar22 = { ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false) };
		iVar27 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_TERRIFYING"), vVar22, -1f, -1f, -1f, -1f, -1f, -1, -1);
		iVar20 = __LIB_17__::func_770(&uVar0, &uVar18, 8, vVar22, 15f, 0, 0, 0, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			if (__LIB_2__::func_1(uVar0[iVar21], 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar25);
				TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vVar22, 3, 4096, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(uVar0[iVar21], &iVar25, 0f, 0.5f, 1, 1);
				PED::APPLY_DAMAGE_TO_PED(uVar0[iVar21], 50, 0, -1, 0);
			}
			iVar21++;
		}
		iVar20 = func_429(&uVar9, &uVar26, 8, vVar22, 15f, 0);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			if (__LIB_2__::func_1(uVar9[iVar21], 0, 0))
			{
				if (__LIB_0__::func_125(uVar9[iVar21]))
				{
					if (PED::_GET_RIDER_OF_MOUNT(uVar9[iVar21], true) != Global_35)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar25);
						TASK::TASK_HORSE_ACTION(0, 2, 0, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vVar22, 4, 4096, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_1__::func_474(uVar9[iVar21], &iVar25, 0, 0, 1, 1);
					}
				}
				else
				{
					__LIB_1__::func_864(uVar9[iVar21], 0, 0);
				}
			}
			iVar21++;
		}
		__LIB_0__::func_7(&uLocal_278, 512);
	}
	else if (!__LIB_0__::func_51(&uLocal_278, 1024))
	{
		uVar32 = 1;
		vVar36 = { ENTITY::GET_ENTITY_COORDS(Local_15.f_52[0], false, false) };
		iVar34 = func_432(&uVar28, &uVar32, 3, vVar36, 15f);
		iVar35 = 0;
		while (iVar35 < iVar34)
		{
			vVar39 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uVar28[iVar35]) };
			if (__LIB_0__::func_195(ENTITY::GET_ENTITY_COORDS(uVar28[iVar35], true, false), ENTITY::GET_ENTITY_COORDS(uVar28[iVar35], true, false) + vVar39, vVar36))
			{
				VEHICLE::_0xC372B6A88F6E4AD8(uVar28[iVar35], 0, 100f);
				VEHICLE::_0xC372B6A88F6E4AD8(uVar28[iVar35], 4, 100f);
			}
			else
			{
				VEHICLE::_0xC372B6A88F6E4AD8(uVar28[iVar35], 1, 100f);
				VEHICLE::_0xC372B6A88F6E4AD8(uVar28[iVar35], 5, 100f);
			}
			VEHICLE::SET_VEHICLE_DAMAGE(uVar28[iVar35], ENTITY::GET_ENTITY_COORDS(uVar28[iVar35], true, false), 80f, 0.25f, false);
			iVar35++;
		}
		__LIB_0__::func_7(&uLocal_278, 1024);
	}
}

Vector3 func_288(int iParam0)
{
	switch (iLocal_279)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 2:
						return func_434(2, 6);
					case 3:
						return func_434(2, 7);
					case 4:
						return func_434(2, 8);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 2:
						return func_434(1, 6);
					case 3:
						return func_434(1, 7);
					case 4:
						return func_434(1, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 2:
						return func_434(0, 6);
					case 3:
						return func_434(0, 7);
					case 4:
						return func_434(0, 8);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 2:
						return func_434(3, 6);
					case 3:
						return func_434(3, 7);
					case 4:
						return func_434(3, 8);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 2:
						return func_434(4, 6);
					case 3:
						return func_434(4, 7);
					case 4:
						return func_434(4, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 2:
						return func_434(5, 6);
					case 3:
						return func_434(5, 7);
					case 4:
						return func_434(5, 8);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_289(int iParam0)
{
	switch (iLocal_279)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 4:
						return func_435(2, 8);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 4:
						return func_435(1, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 4:
						return func_435(0, 8);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 4:
						return func_435(3, 8);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 4:
						return func_435(4, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 4:
						return func_435(5, 8);
					default:
						break;
				}
			}
			break;
	}
	return 0f;
}

bool func_307(int iParam0)
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
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 3.5f;
			break;
		case 1:
			fVar0 = 2f;
			break;
		case 2:
			fVar0 = 2.75f;
			break;
		case 3:
			fVar0 = 2.5f;
			break;
		case 4:
			fVar0 = 3.25f;
			break;
	}
	if (__LIB_1__::func_285(&uLocal_295, fVar0))
	{
		return false;
	}
	return true;
}

float func_308(int iParam0)
{
	switch (iLocal_279)
	{
		case 0:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 2:
						return 2f;
					case 3:
						return 2f;
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 2:
						return 2f;
					case 3:
						return 2f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 2:
						return 2f;
					case 3:
						return 2f;
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&uLocal_278, 4))
			{
				switch (iParam0)
				{
					case 2:
						return 2f;
					case 3:
						return 2f;
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(&uLocal_278, 128))
			{
				switch (iParam0)
				{
					case 2:
						return 2f;
					case 3:
						return 2f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 2:
						return 2f;
					case 3:
						return 2f;
					default:
						break;
				}
			}
			break;
	}
	return -1f;
}

void func_360()
{
	iLocal_280[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushBypass");
	iLocal_280[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushKill");
	if (__LIB_0__::func_51(&uLocal_278, 4))
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 919.9129f, -1142.319f, 58.9201f, 0f, 0f, 85.55064f, 22.9198f, 68.99059f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 940.0757f, -1130.841f, 58.9201f, 0f, 0f, 162.7497f, 22.9198f, 26.60962f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 895.0365f, -1125.038f, 58.9201f, 0f, 0f, -86.32182f, 22.9198f, 26.60962f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 938.5794f, -1268.628f, 58.9201f, 0f, 0f, 102.2903f, 240.7625f, 413.3715f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1016.263f, -1156.188f, 58.9201f, 0f, 0f, -7.625053f, 154.6291f, 203.5814f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 818.122f, -1179.718f, 58.9201f, 0f, 0f, 1.687667f, 168.8384f, 203.5814f, 58.83871f);
	}
	else if (__LIB_0__::func_51(&uLocal_278, 128))
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 928.2882f, -1160.344f, 58.9201f, 0f, 0f, 93.32861f, 22.9198f, 68.99059f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 901.4467f, -1171.426f, 58.9201f, 0f, 0f, 178.1586f, 24.73056f, 42.81178f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 942.963f, -1171.131f, 58.9201f, 0f, 0f, -163.7904f, 22.9198f, 37.41507f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 920.9067f, -1042.365f, 58.9201f, 0f, 0f, -85.31746f, 240.7625f, 413.3715f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 815.5959f, -1162.613f, 58.9201f, 0f, 0f, -1.985029f, 191.5743f, 203.5814f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1026.71f, -1145.781f, 58.9201f, 0f, 0f, 7.970647f, 175.5276f, 109.6086f, 58.83871f);
	}
	else
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 927.8225f, -1148.209f, 58.9201f, 0f, 0f, -12.33349f, 22.9198f, 68.99059f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 929.8199f, -1173.013f, 58.9201f, 0f, 0f, 21.46918f, 22.9198f, 26.60962f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 949.7383f, -1136.613f, 58.9201f, 0f, 0f, 3.11025f, 22.9198f, 26.60962f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 818.1218f, -1164.378f, 58.9201f, 0f, 0f, 2.940468f, 240.7625f, 413.3715f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 930.6552f, -1276.798f, 58.9201f, 0f, 0f, -129.5257f, 154.6291f, 203.5814f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 982.3572f, -1059.821f, 58.9201f, 0f, 0f, -104.3027f, 187.8317f, 146.189f, 58.83871f);
	}
}

void func_361()
{
	iLocal_280[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushBypass");
	iLocal_280[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushKill");
	if (__LIB_0__::func_51(&uLocal_278, 4))
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 1461.022f, -1036.259f, 58.9201f, 0f, 0f, -149.5055f, 22.9198f, 53.53887f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 1491.532f, -1059.379f, 58.9201f, 0f, 0f, -94.92382f, 24.73056f, 42.81178f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1333.364f, -1018.002f, 58.9201f, 0f, 0f, -44.58528f, 200.4494f, 215.5016f, 102.0099f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1403.921f, -1161.298f, 58.9201f, 0f, 0f, -7.757735f, 140.9638f, 194.7786f, 94.92717f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1453.261f, -994.6071f, 58.9201f, 0f, 0f, -78.58529f, 38.12796f, 40.25013f, 102.0099f);
	}
	else if (__LIB_0__::func_51(&uLocal_278, 128))
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 1487.767f, -1023.813f, 58.9201f, 0f, 0f, 86.756f, 22.9198f, 40.94622f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 1467.374f, -1050.545f, 58.9201f, 0f, 0f, 171.586f, 24.73056f, 42.81178f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1349.461f, -924.8898f, 58.9201f, 0f, 0f, -85.31746f, 240.7625f, 253.303f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1360.439f, -1088.001f, 58.9201f, 0f, 0f, -9.757735f, 252.8302f, 83.03677f, 58.83871f);
	}
	else
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 1492.816f, -1050.349f, 58.9201f, 0f, 0f, -166.4329f, 22.9198f, 68.99059f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 1466.395f, -1026.811f, 58.9201f, 0f, 0f, -92.92725f, 22.9198f, 26.60962f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[0], 1479.639f, -1073.008f, 58.9201f, 0f, 0f, -150.9891f, 22.9198f, 26.60962f, 33.29299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1603.897f, -1035.163f, 58.9201f, 0f, 0f, -169.6827f, 240.7625f, 413.3715f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1485.326f, -920.2891f, 58.9201f, 0f, 0f, -179.3547f, 154.6291f, 203.5814f, 58.83871f);
		VOLUME::_0x39816F6F94F385AD(iLocal_280[1], 1538.523f, -1134.953f, 58.9201f, 0f, 0f, 113.8741f, 187.8317f, 146.189f, 58.83871f);
	}
}

float func_414()
{
	float fVar0;
	float fVar1;
	fVar0 = ENTITY::GET_ENTITY_SPEED(Global_35);
	fVar1 = 3.2f;
	if (fVar0 >= 12f)
	{
		fVar1 = 1.5f;
	}
	else if (fVar0 >= 10f)
	{
		fVar1 = 2f;
	}
	else if (fVar0 >= 5f)
	{
		fVar1 = 2.6f;
	}
	return fVar1;
}

struct<4> func_417(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_510(iParam0, iParam1) };
	Var0.f_3 = func_511(iParam0, iParam1);
	return Var0;
}

bool func_423(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 262144))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_516(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

int func_429(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = __LIB_19__::func_109(uParam0, uParam1, iParam2, iVar0, bParam7);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

int func_432(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = __LIB_2__::func_130(iParam0, iParam1, iVar0, iParam2);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

Vector3 func_434(int iParam0, int iParam1)
{
	return func_510(iParam0, iParam1);
}

float func_435(int iParam0, int iParam1)
{
	return func_511(iParam0, iParam1);
}

Vector3 func_510(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 944.6199f, -1156.129f, 55.2224f;
				case 1:
					return 924.3226f, -1157.641f, 52.844f;
				case 2:
					return 928.3649f, -1133.895f, 52.4148f;
				case 3:
					return 895.1608f, -1127.781f, 52.585f;
				case 4:
					return 906.241f, -1170.837f, 51.1941f;
				case 5:
					return 935.1541f, -1192.209f, 53.1654f;
				case 6:
					return 928.8822f, -1132.282f, 52.5128f;
				case 7:
					return 925.0626f, -1154.328f, 52.9968f;
				case 8:
					return 938.1512f, -1165.332f, 54.615f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 925.3887f, -1171.95f, 52.3773f;
				case 1:
					return 903.4492f, -1162.202f, 51.1331f;
				case 2:
					return 929.2743f, -1154.463f, 53.3069f;
				case 3:
					return 933.4634f, -1136.6f, 53.0103f;
				case 4:
					return 895.4594f, -1127.113f, 53.0858f;
				case 5:
					return 907.392f, -1166.673f, 51.3207f;
				case 6:
					return 926.3983f, -1153.626f, 53.149f;
				case 7:
					return 894.1521f, -1159.032f, 52.3684f;
				case 8:
					return 911.1718f, -1173.137f, 51.1831f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 930.9462f, -1138.371f, 52.8801f;
				case 1:
					return 929.5027f, -1159.205f, 53.4486f;
				case 2:
					return 906.2791f, -1170.833f, 51.1952f;
				case 3:
					return 897.9084f, -1167.252f, 52.0691f;
				case 4:
					return 917.1979f, -1128.321f, 52.147f;
				case 5:
					return 933.2089f, -1136.467f, 52.9908f;
				case 6:
					return 926.0529f, -1160.513f, 53.0602f;
				case 7:
					return 895.1224f, -1128.823f, 52.4881f;
				case 8:
					return 931.3846f, -1131.558f, 52.7544f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1482.919f, -1043.051f, 53.2911f;
				case 1:
					return 1447.779f, -1011.353f, 50.6486f;
				case 2:
					return 1441.465f, -1017.135f, 51.3399f;
				case 3:
					return 1466.973f, -1074.66f, 58.6449f;
				case 4:
					return 1473.439f, -1074.482f, 56.8722f;
				case 5:
					return 1455.918f, -1010.985f, 51.2953f;
				case 6:
					return 1471.891f, -1054.264f, 55.821f;
				case 7:
					return 1476.448f, -1056.166f, 54.7931f;
				case 8:
					return 1476.913f, -1024.863f, 52.4509f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1482.919f, -1043.051f, 53.3941f;
				case 1:
					return 1466.967f, -1008.977f, 51.5849f;
				case 2:
					return 1455.143f, -1012.323f, 51.2968f;
				case 3:
					return 1459.374f, -1070.282f, 60.2151f;
				case 4:
					return 1463.716f, -1071.867f, 59.2668f;
				case 5:
					return 1463.044f, -1066.187f, 58.8866f;
				case 6:
					return 1469.519f, -1061.324f, 56.8935f;
				case 7:
					return 1466.761f, -1058.609f, 57.3952f;
				case 8:
					return 1476.436f, -1059.167f, 55.0332f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1482.919f, -1043.051f, 53.3941f;
				case 1:
					return 1503.187f, -1039.759f, 49.1812f;
				case 2:
					return 1505.395f, -1043.902f, 48.8266f;
				case 3:
					return 1487.033f, -1060.387f, 52.2536f;
				case 4:
					return 1484.465f, -1071.217f, 53.7659f;
				case 5:
					return 1475.032f, -1073.937f, 56.4009f;
				case 6:
					return 1478.809f, -1054.65f, 54.0527f;
				case 7:
					return 1490.964f, -1064.453f, 51.366f;
				case 8:
					return 1469.931f, -1060.083f, 56.6972f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_511(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 221.4668f;
				case 1:
					return 240.1027f;
				case 2:
					return 206.1027f;
				case 3:
					return 234.2949f;
				case 4:
					return 286.2949f;
				case 5:
					return 327.6083f;
				case 6:
					return 219.0586f;
				case 7:
					return 261.0586f;
				case 8:
					return 288.1534f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 150.1349f;
				case 1:
					return -117.8651f;
				case 2:
					return 164.1349f;
				case 3:
					return -201.8651f;
				case 4:
					return -165.8651f;
				case 5:
					return 250.2242f;
				case 6:
					return -187.4017f;
				case 7:
					return -123.4017f;
				case 8:
					return 268.3977f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 55.3639f;
				case 1:
					return 9.3639f;
				case 2:
					return 313.3639f;
				case 3:
					return 347.3639f;
				case 4:
					return -44.6361f;
				case 5:
					return -7.2467f;
				case 6:
					return 11.3639f;
				case 7:
					return 287.3639f;
				case 8:
					return 46.7847f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 75.3639f;
				case 1:
					return -138.6361f;
				case 2:
					return 227.3639f;
				case 3:
					return 345.3639f;
				case 4:
					return 343.3639f;
				case 5:
					return -139.2467f;
				case 6:
					return 339.3639f;
				case 7:
					return 337.3639f;
				case 8:
					return -107.2153f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 75.3639f;
				case 1:
					return 220.1349f;
				case 2:
					return -139.8651f;
				case 3:
					return -25.8651f;
				case 4:
					return -47.8651f;
				case 5:
					return 322.2242f;
				case 6:
					return -17.4017f;
				case 7:
					return 312.5983f;
				case 8:
					return 310.3977f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 75.3639f;
				case 1:
					return 96.1027f;
				case 2:
					return 98.1027f;
				case 3:
					return 56.2949f;
				case 4:
					return 72.2948f;
				case 5:
					return 15.6082f;
				case 6:
					return 73.0585f;
				case 7:
					return 65.0585f;
				case 8:
					return 28.1534f;
			}
			break;
	}
	return 0f;
}

int func_516(var uParam0, float fParam1, int iParam2)
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
	return func_559(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584 /* Float: 5f */, bVar6, iParam2);
}

int func_559(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
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
		iVar12 = func_432(&iVar0, iParam0, iVar0, vParam1, fParam4);
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
					if (__LIB_0__::func_175(vVar6, vVar9, iParam7, 0))
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

