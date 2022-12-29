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
	struct<348> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 5 } ;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	vector3 vLocal_627 = { 0f, 0f, 0f };
	bool bLocal_630 = false;
	var uLocal_631 = 0;
	bool bLocal_632 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_632 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_632, 961, 0);
		if (bLocal_632)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					__LIB_2__::func_146(&Local_15, 13);
				}
			}
			if (__LIB_0__::func_58())
			{
				__LIB_0__::func_11();
			}
			func_7();
			switch (Local_15.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						__LIB_2__::func_146(&Local_15, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (__LIB_0__::func_58())
						{
							__LIB_2__::func_146(&Local_15, 2);
						}
						else if (Local_15.f_217 > 0)
						{
							__LIB_2__::func_146(&Local_15, 3);
						}
						else if (Local_15.f_218 > 0)
						{
							__LIB_2__::func_146(&Local_15, 4);
						}
						else if (Local_15.f_216 > 0)
						{
							__LIB_2__::func_146(&Local_15, 5);
						}
						else
						{
							__LIB_2__::func_146(&Local_15, 6);
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_58())
					{
						__LIB_0__::func_11();
					}
					__LIB_2__::func_146(&Local_15, 3);
					break;
				case 3:
					if (__LIB_2__::func_257())
					{
						if (__LIB_0__::func_0())
						{
							__LIB_2__::func_146(&Local_15, 4);
						}
					}
					break;
				case 4:
					if (__LIB_2__::func_258())
					{
						__LIB_2__::func_146(&Local_15, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						__LIB_2__::func_146(&Local_15, 6);
					}
					break;
				case 6:
					if (__LIB_0__::func_0())
					{
						__LIB_2__::func_146(&Local_15, 7);
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
						__LIB_2__::func_146(&Local_15, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (Local_15.f_20 > (100f - 10f))
						{
							func_21();
							__LIB_2__::func_146(&Local_15, 9);
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
									__LIB_2__::func_529(&Local_15, 1);
									break;
							}
						}
						__LIB_2__::func_266();
						__LIB_2__::func_267(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						__LIB_2__::func_282(&Local_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						__LIB_2__::func_147(&Local_15, 16384);
						__LIB_2__::func_146(&Local_15, 10);
					}
					break;
				case 10:
					func_29();
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
						__LIB_2__::func_146(&Local_15, 11);
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
						__LIB_2__::func_146(&Local_15, 12);
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
						__LIB_2__::func_146(&Local_15, 13);
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
	func_51();
	__LIB_2__::func_317(&Local_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_282(&Local_15, 1);
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
			if (func_67(&Local_15))
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

void func_7()
{
	__LIB_2__::func_11();
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
			__LIB_2__::func_146(&Local_15, 12);
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
						__LIB_2__::func_147(&Local_15, 1);
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
					__LIB_2__::func_146(&Local_15, 13);
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
					iVar4 = __LIB_2__::func_502(iVar1);
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
	float fVar5;
	int iVar6;
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
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	iVar6 = __LIB_2__::func_293(iVar0);
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
				Local_15.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_15.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
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
					__LIB_2__::func_274(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
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
	iVar1 = __LIB_2__::func_502(iVar0);
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
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			__LIB_2__::func_429(&Local_15, iVar0, 0);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, false);
			__LIB_2__::func_133(Local_15[iVar0], func_126(iVar0, 0), 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 46, true);
		}
		iVar0++;
	}
	func_128();
	return true;
}

void func_21()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_15[iVar0]);
			if (!func_129(&Local_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_15[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_15.f_40[iVar0]);
			if (!__LIB_2__::func_26(&Local_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_15.f_40[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_15.f_49[iVar0]);
			ENTITY::SET_ENTITY_VISIBLE(Local_15.f_49[iVar0], true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_15.f_52[iVar0], true);
		}
		iVar0++;
	}
}

bool func_23()
{
	int iVar0;
	if (!__LIB_3__::func_381(&Local_274, 16384) && !__LIB_3__::func_381(&Local_274, 262144))
	{
		__LIB_2__::func_436(&Local_15, 0);
	}
	else if (!__LIB_3__::func_381(&Local_274, 256))
	{
		__LIB_1__::func_683(&Local_274, 256);
	}
	iVar0 = -1;
	if (Local_274.f_3 < 2)
	{
		if (Local_274.f_3 >= 0)
		{
			func_134();
		}
		if (func_135())
		{
			func_136();
			func_137();
			__LIB_0__::func_613(&Local_274, 2);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			func_139();
			if (func_140())
			{
				__LIB_0__::func_613(&Local_274, 1);
			}
			else if (func_141())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_146(&Local_15, 13);
				}
			}
			break;
		case 1:
			func_139();
			iVar0 = func_143(&(Local_274.f_121));
			if (iVar0 == -1)
			{
				if (__LIB_2__::func_227(0f, 1, Local_274.f_346, 1))
				{
					if (__LIB_1__::func_285(&(Local_274.f_288[7 /*3*/]), 3f))
					{
						func_145(&Local_274, &(Local_274.f_121));
						func_146(&(Local_274.f_121), 1, 0);
						__LIB_0__::func_37(&(Local_274.f_288[7 /*3*/]));
					}
				}
			}
			else if (iVar0 == 1)
			{
				if (!__LIB_3__::func_381(&Local_274, 2097152))
				{
					__LIB_1__::func_683(&Local_274, 2097152);
				}
			}
			func_148(&Local_15, &(Local_15.f_22), 1, 4);
			switch (Local_274.f_10)
			{
				case 1:
					if (func_149())
					{
						__LIB_0__::func_613(&Local_274, 2);
					}
					break;
				case 0:
					if (func_150())
					{
					}
					break;
			}
			break;
		case 2:
			if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
			{
				func_151(&Local_274, 8, "HORSE", Local_15.f_56);
				func_152(&Local_274, 8);
				__LIB_2__::func_145(Local_15.f_56, 0);
			}
			__LIB_1__::func_283(&(Local_274.f_288[1 /*3*/]), 0);
			return true;
	}
	return false;
}

void func_29()
{
	int iVar0;
	__LIB_1__::func_283(&(Local_15.f_247), 0);
	if (__LIB_1__::func_285(&(Local_15.f_247), 5f))
	{
		__LIB_2__::func_423(&Local_15, 0);
	}
	if (__LIB_1__::func_285(&(Local_15.f_247), 3f))
	{
		func_164(&Local_15);
	}
	__LIB_2__::func_332();
	if (!__LIB_2__::func_4(&Local_15, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				__LIB_2__::func_260(&Local_15, 1.1f);
			}
			else
			{
				__LIB_2__::func_260(&Local_15, 1.2f);
			}
			__LIB_2__::func_147(&Local_15, 4194304);
		}
		if (__LIB_2__::func_4(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_260(&Local_15, 1f);
				__LIB_2__::func_147(&Local_15, 8388608);
			}
		}
	}
}

bool func_31()
{
	int iVar0;
	func_166();
	func_134();
	__LIB_2__::func_527(&(Local_274.f_84));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_274.f_347[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
			{
				if (__LIB_2__::func_398(Local_15[iVar0]))
				{
					__LIB_2__::func_603(&(Local_15[iVar0]), &(Local_274.f_121[iVar0 /*21*/]), &(Local_274.f_121.f_127), 1, 1);
					Local_274.f_347[iVar0] = 1;
				}
			}
			else
			{
				Local_274.f_347[iVar0] = 1;
			}
		}
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_322))
			{
				if (!PED::_0x33FA048675821DA7(Local_274.f_322, 3))
				{
					PED::_0x2EB75FB86C41F026(Local_274.f_322, 3, 1);
				}
				if (!PED::_0x33FA048675821DA7(Local_274.f_322, 1))
				{
					PED::_0x2EB75FB86C41F026(Local_274.f_322, 1, 1);
				}
			}
			__LIB_1__::func_748(&(Local_274.f_316), 1, 1);
			func_171();
			__LIB_0__::func_614(&Local_274, 1);
			break;
		case 1:
			if (func_173())
			{
				func_174();
				__LIB_0__::func_614(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_207(&Local_15) <= 2)
			{
				func_176();
				__LIB_0__::func_614(&Local_274, 3);
			}
			break;
		case 3:
			if (func_177(&Local_15, &(Local_274.f_345), &(Local_15.f_241), "COMBAT_FLEE", 4f))
			{
				__LIB_0__::func_614(&Local_274, 5);
			}
			break;
		case 4:
			func_178();
			if (__LIB_2__::func_207(&Local_15) <= 0)
			{
				__LIB_0__::func_614(&Local_274, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_49()
{
	char* sVar0;
	__LIB_1__::func_748(&(Local_274.f_316), 1, 1);
	sVar0 = func_198(&Local_274);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sVar0);
	}
	func_199(&Local_274, 1);
	__LIB_2__::func_503(&Local_15, 1);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_2__::func_1(PED::GET_MOUNT(Global_35), 0, 1))
		{
			if (__LIB_0__::func_163(Global_35, 658540077))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			if (__LIB_0__::func_163(PED::GET_MOUNT(Global_35), 658540077))
			{
				TASK::CLEAR_PED_TASKS(PED::GET_MOUNT(Global_35), true, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_322))
	{
		if (!PED::_0x33FA048675821DA7(Local_274.f_322, 3))
		{
			PED::_0x2EB75FB86C41F026(Local_274.f_322, 3, 1);
		}
		if (!PED::_0x33FA048675821DA7(Local_274.f_322, 1))
		{
			PED::_0x2EB75FB86C41F026(Local_274.f_322, 1, 1);
		}
	}
	if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
	{
		func_151(&Local_274, 8, "HORSE", Local_15.f_56);
		func_152(&Local_274, 8);
		__LIB_2__::func_145(Local_15.f_56, 0);
	}
	if (__LIB_2__::func_1(Local_274.f_317[0], 0, 1))
	{
		__LIB_0__::func_490(&(Local_274.f_317[0]), 0);
	}
	func_203();
	__LIB_2__::func_691(&(Local_274.f_73), Local_15[0], 0, 30f);
	func_137();
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
			if (func_205(iVar0))
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
					if ((PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35) || PED::IS_PED_FLEEING(Local_15[iVar0])) || func_129(&Local_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(Local_15[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(Local_15[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15[iVar0], Global_35, 4, iVar1, -1f, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else if ((Local_15.f_215 == Local_15.f_216 && __LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true))
					{
						iVar11 = Local_15.f_40[iVar0];
						PED::_0x931B241409216C1F(Local_15.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
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
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1f, -1, 0);
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
				else if ((!PED::IS_PED_FLEEING(Local_15[iVar0]) && !PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35)) && !func_129(&Local_15, iVar0, 128))
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

bool func_67(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if (func_129(iParam0, iVar0, 8))
			{
				if (__LIB_1__::func_992((*iParam0)[iVar0], Global_36, 1) < (70f * 70f) || __LIB_1__::func_472((*iParam0)[iVar0], 70f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_75()
{
	int iVar0;
	if (Local_15.f_19 < Local_15.f_215)
	{
		iVar0 = Local_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (!func_129(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15[iVar0], 200f, -1082130432 /* Float: -1f */, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_152(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (!__LIB_2__::func_39(&Local_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(Local_15.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_153(&Local_15, iVar0, 8);
					}
				}
			}
		}
	}
	Local_15.f_19++;
	if (Local_15.f_19 >= ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		Local_15.f_19 = 0;
	}
}

bool func_83()
{
	float fVar0;
	float fVar1;
	Local_15.f_215 = 5;
	Local_15.f_219 = 1;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 0;
	Local_15.f_181 = 1;
	Local_274.f_9 = Local_15.f_221;
	switch (Local_15.f_151)
	{
		case 18:
			Local_274.f_10 = 0;
			break;
		case 19:
			Local_274.f_10 = 1;
			if (Local_15.f_227)
			{
				Local_274.f_84.f_16 = "AMBUSH_FRT_V2_ENTER_FEUD";
				Local_274.f_84.f_17 = "AMBUSH_FRT_V2_ROB_FEUD";
			}
			else
			{
				Local_274.f_84.f_16 = "AMBUSH_FRT_V2_ENTER";
				Local_274.f_84.f_17 = "AMBUSH_FRT_V2_ROB";
			}
			Local_274.f_84.f_18 = "AMBUSH_FRT_V2_FLEE";
			break;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 0, Local_15.f_221), false);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 1, Local_15.f_221), false);
	if (fVar0 < fVar1)
	{
		__LIB_1__::func_683(&Local_274, 4);
	}
	func_251();
	__LIB_2__::func_41(&(Local_15.f_182), 65, 0f, 1.25f, 1.75f, 2.001f, 0);
	__LIB_2__::func_491();
	__LIB_2__::func_183(&(Local_15.f_152), 1, 1, 1);
	__LIB_2__::func_595(&(Local_15.f_152), 50f);
	__LIB_2__::func_48(&(Local_15.f_182), 32768);
	__LIB_2__::func_147(&Local_15, 131072);
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	func_256(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!func_257(iParam0, 1))
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
	char* sVar0;
	bool bVar1;
	bVar1 = true;
	switch (Local_274.f_2)
	{
		case 0:
			func_265();
			__LIB_2__::func_532(&Local_15);
			func_267(&Local_274);
			STREAMING::REQUEST_CLIP_SET(func_268());
			sVar0 = func_198(&Local_274);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				TASK::REQUEST_WAYPOINT_RECORDING(sVar0);
			}
			Local_274.f_2 = 1;
			break;
		case 1:
			if (func_269(&Local_274))
			{
				func_270(&Local_274);
				Local_274.f_2 = 2;
			}
			break;
		case 2:
			if (!func_271(&Local_274))
			{
				bVar1 = false;
			}
			if (!__LIB_2__::func_533(&Local_15))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				Local_274.f_321 = PED::_REQUEST_METAPED_OUTFIT(joaat("G_M_M_UNIINBRED_01"), 750136551);
				Local_274.f_2 = 3;
			}
			break;
		case 3:
			if (!func_273())
			{
				bVar1 = false;
			}
			if (!PED::_0x610438375E5D1801(Local_274.f_321))
			{
				bVar1 = false;
			}
			if (!STREAMING::HAS_CLIP_SET_LOADED(func_268()))
			{
				bVar1 = false;
			}
			sVar0 = func_198(&Local_274);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar0))
				{
					bVar1 = false;
				}
			}
			return bVar1;
	}
	return false;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_274(&Local_15, &Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_278(&Local_274, iVar0) };
	return vVar1;
}

float func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_278(&Local_274, iVar0) };
	return Var1.f_3;
}

char* func_126(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = func_280(iParam0, bParam1);
	return func_281(iVar0);
}

void func_128()
{
	switch (Local_274.f_10)
	{
		case 1:
			func_282(0, 4, "MALE_A", joaat("GROUP_REVOLVER"));
			func_282(1, 6, "FLANK_A", joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
			func_282(2, 7, "FLANK_B", joaat("GROUP_REVOLVER"));
			break;
		case 0:
			func_282(0, 0, "MALE_A", joaat("WEAPON_REVOLVER_CATTLEMAN"));
			func_282(1, 2, "FLANK_A", joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
			func_282(2, 3, "FLANK_B", joaat("WEAPON_REVOLVER_CATTLEMAN"));
		}
bool func_129(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_97[iParam1] && iParam2) != 0;
}

void func_134()
{
	__LIB_2__::func_714(&(Local_274.f_73), 30f);
	if (__LIB_3__::func_381(&Local_274, 512))
	{
		if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
		{
			__LIB_2__::func_282(&Local_15, 0);
			__LIB_2__::func_691(&(Local_274.f_73), Local_15[0], 1, 30f);
			PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
			PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "FRT_V2_ILO_SURRENDER");
			__LIB_1__::func_681(&Local_274, 512);
		}
	}
	else if (__LIB_3__::func_381(&Local_274, 4194304))
	{
		if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
		{
			__LIB_2__::func_691(&(Local_274.f_73), Local_15[0], 0, 30f);
			PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 0);
			__LIB_1__::func_681(&Local_274, 4194304);
		}
		else
		{
			__LIB_2__::func_503(&Local_15, 0);
			__LIB_2__::func_691(&(Local_274.f_73), Local_15[0], 0, 30f);
			__LIB_1__::func_681(&Local_274, 4194304);
		}
	}
}

bool func_135()
{
	if (Local_274.f_7 > 1)
	{
		if (!__LIB_3__::func_381(&Local_274, 16384))
		{
			if (!__LIB_2__::func_4(&Local_15, 4096) && !__LIB_3__::func_381(&Local_274, 4096))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					return true;
				}
			}
		}
		if ((((__LIB_3__::func_381(&Local_274, 32) || __LIB_3__::func_381(&Local_274, 1024)) || __LIB_3__::func_381(&Local_274, 131072)) || __LIB_3__::func_381(&Local_274, 262144)) || __LIB_3__::func_381(&Local_274, 2097152))
		{
			return true;
		}
		if (Local_15.f_151 == 19)
		{
			if (__LIB_2__::func_4(&Local_15, 33554432))
			{
				if (__LIB_2__::func_587(&Local_15))
				{
					return true;
				}
			}
		}
		if (func_294(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_344), 0, 4, 1))
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_317[0]))
		{
			if (__LIB_2__::func_630(Local_274.f_317[0], 0, &(Local_15.f_152), &(Local_15.f_152.f_16), 0, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_136()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	func_203();
	bVar2 = __LIB_3__::func_381(&Local_274, 33554432);
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			__LIB_2__::func_429(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			iVar3 = 0;
			iVar4 = 0;
			if (WEAPON::_IS_WEAPON_MELEE(__LIB_0__::func_399(Local_15[iVar0], 1, 0, 0)))
			{
				__LIB_1__::func_336(&iVar3, 68157440);
				__LIB_1__::func_336(&iVar4, 4096);
			}
			if (!PED::IS_PED_IN_COMBAT(Local_15[iVar0], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, iVar3, iVar4);
				__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
			}
			if (!bVar2)
			{
				if (__LIB_3__::func_381(&Local_274, 32))
				{
					func_297(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_FRT_AGGRO", 70f, 1, 1744022339, 0);
				}
				else if (__LIB_3__::func_381(&Local_274, 131072))
				{
					func_297(&Local_274, Local_15[iVar0], Global_35, "ITS_THEM_EXTREME", 70f, 1, 1744022339, 2);
				}
				else
				{
					func_297(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_FRT_EAGGRO", 70f, 1, 1744022339, 0);
				}
				bVar2 = true;
			}
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(Local_274.f_317[0], 0, 1))
	{
		if (!PED::IS_PED_IN_COMBAT(Local_274.f_317[0], 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_274.f_317[0], &iVar1, 0, 0, 1, 1);
		}
		__LIB_2__::func_73(Local_274.f_317[0], &(Local_274.f_319[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
	}
	func_199(&Local_274, 1);
	func_137();
	__LIB_1__::func_683(&Local_274, 8);
	if (__LIB_3__::func_381(&Local_274, 2048))
	{
		__LIB_1__::func_683(&Local_274, 16);
	}
	else
	{
		__LIB_2__::func_224(Local_15.f_151, 1);
	}
}

void func_137()
{
	bLocal_630 = true;
	__LIB_2__::func_298();
}

void func_139()
{
	int iVar0;
	if (Local_274.f_7 > 1)
	{
		iVar0 = func_301();
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_274.f_334[iVar0], false))
		{
			if (!__LIB_1__::func_472(Local_274.f_317[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_RATE(Local_274.f_334[iVar0]) <= 1f)
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_274.f_334[iVar0], 1.25f);
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_RATE(Local_274.f_334[iVar0]) > 1f)
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_274.f_334[iVar0], 1f);
			}
		}
	}
}

bool func_140()
{
	int iVar0;
	char* sVar1;
	if (__LIB_3__::func_381(&Local_274, 8388608))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SURRENDER"), false);
	}
	iVar0 = -1;
	if (Local_274.f_7 > 1)
	{
		__LIB_2__::func_510(&Local_15);
		func_303();
		func_304();
		if (!__LIB_2__::func_1(Local_15[0], 0, 1))
		{
			return false;
		}
		if (Local_274.f_7 > 2)
		{
			func_148(&Local_15, &(Local_15.f_22), 1, 4);
			func_305();
			iVar0 = func_143(&(Local_274.f_121));
			if (iVar0 == -1)
			{
				if (__LIB_2__::func_227(0f, 1, Local_274.f_346, 1) && (Local_274.f_346 != Global_35 || __LIB_2__::func_227(-3f, 1, 0, 0)))
				{
					if (__LIB_1__::func_285(&(Local_274.f_288[7 /*3*/]), 3f))
					{
						func_145(&Local_274, &(Local_274.f_121));
						func_146(&(Local_274.f_121), 1, 0);
						__LIB_0__::func_37(&(Local_274.f_288[7 /*3*/]));
					}
				}
			}
			else if (iVar0 == 1)
			{
				if (!__LIB_3__::func_381(&Local_274, 2097152))
				{
					__LIB_1__::func_683(&Local_274, 2097152);
				}
			}
		}
	}
	switch (Local_274.f_7)
	{
		case 0:
			__LIB_2__::func_664(&Local_274, 1);
			break;
		case 1:
			if (__LIB_2__::func_157(Local_274.f_323[3], Global_36))
			{
				if (((Global_1935630.f_40 == 0 || __LIB_0__::func_163(Global_35, 501393341)) || __LIB_0__::func_163(Global_35, 1920417248)) || func_308())
				{
					__LIB_1__::func_683(&Local_274, 1024);
					return false;
				}
				func_309();
				func_310();
				func_311();
				func_145(&Local_274, &(Local_274.f_121));
				func_146(&(Local_274.f_121), 0, 1);
				if (__LIB_2__::func_117(16))
				{
					__LIB_1__::func_683(&Local_274, 128);
				}
				__LIB_2__::func_529(&Local_15, 1);
				__LIB_2__::func_483(&Local_15, 1);
				func_313();
				__LIB_0__::func_7(&(Local_274.f_75.f_3), 4);
				__LIB_0__::func_7(&(Local_274.f_75.f_3), 2);
				__LIB_2__::func_664(&Local_274, 2);
			}
			break;
		case 2:
			func_315();
			func_316();
			if (!__LIB_3__::func_381(&Local_274, 16777216))
			{
				if (!__LIB_0__::func_75(&(Local_274.f_288[8 /*3*/])))
				{
					if (__LIB_1__::func_472(Local_15[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || !__LIB_2__::func_227(0f, 1, Local_15[0], 1))
					{
						__LIB_1__::func_283(&(Local_274.f_288[8 /*3*/]), 0);
					}
				}
				if (__LIB_1__::func_285(&(Local_274.f_288[8 /*3*/]), 1.25f))
				{
					HUD::_HIDE_HUD_COMPONENT(724769646);
					__LIB_1__::func_683(&Local_274, 16777216);
				}
			}
			if (func_317(1))
			{
				if (func_318())
				{
					if (func_319())
					{
						func_320();
						__LIB_2__::func_664(&Local_274, 3);
					}
				}
			}
			break;
		case 3:
			func_315();
			func_321();
			if (func_319() && ENTITY::IS_ENTITY_ON_SCREEN(Local_15[0]))
			{
				func_137();
			}
			if (!func_317(0) && !func_322())
			{
				__LIB_2__::func_664(&Local_274, 4);
			}
			break;
		case 4:
			func_321();
			func_315();
			if (func_319() && ENTITY::IS_ENTITY_ON_SCREEN(Local_15[0]))
			{
				func_137();
			}
			if (Local_274.f_10 == 0)
			{
				if (Local_15.f_227)
				{
					if (__LIB_11__::func_398(&Local_274, 16384))
					{
						__LIB_1__::func_283(&(Local_274.f_288[4 /*3*/]), 0);
						if (__LIB_1__::func_285(&(Local_274.f_288[4 /*3*/]), 2f))
						{
							func_324();
							__LIB_2__::func_664(&Local_274, 5);
						}
					}
				}
				else
				{
					sVar1 = func_198(&Local_274);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
					{
						TASK::REMOVE_WAYPOINT_RECORDING(sVar1);
					}
					__LIB_2__::func_664(&Local_274, 9);
				}
			}
			else
			{
				func_325();
				if (__LIB_11__::func_398(&Local_274, 8))
				{
					if (func_326())
					{
						__LIB_2__::func_664(&Local_274, 9);
					}
				}
				if (func_322())
				{
					if (func_317(0))
					{
						__LIB_2__::func_664(&Local_274, 9);
					}
				}
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0f, 1, Local_274.f_346, 1) && __LIB_2__::func_227(-6f, 1, 0, 0))
			{
				func_327();
				__LIB_2__::func_664(&Local_274, 6);
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0f, 1, Local_274.f_346, 1) && __LIB_2__::func_227(-5f, 1, 0, 0))
			{
				__LIB_1__::func_683(&Local_274, 32);
			}
			break;
		case 9:
			func_137();
			func_321();
			return true;
	}
	return false;
}

bool func_141()
{
	int iVar0;
	if (Local_274.f_7 > 1)
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_EXIT")) || Global_1935630.f_40 == 0)
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_323[4], Global_36))
		{
			__LIB_0__::func_11(&Local_15, 2);
			return true;
		}
	}
	if (__LIB_3__::func_381(&Local_274, 1024) && __LIB_2__::func_157(Local_274.f_323[3], Global_36))
	{
		__LIB_0__::func_11(&Local_15, 2);
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_3__::func_504(Local_15[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	if (func_330(&Local_15))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_323[6], Global_36))
		{
			__LIB_0__::func_11(&Local_15, 7);
			return true;
		}
	}
	if (__LIB_2__::func_708(&Local_15))
	{
		return true;
	}
	return false;
}

int func_143(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = 524288 | __LIB_2__::func_340(3, 0, 0);
	iVar5 = 1;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15[iVar1]))
		{
		}
		else
		{
			iVar0 = func_333(&(Local_15[iVar1]), uParam0[iVar1 /*21*/], 20f, &(uParam0->f_127), &iVar5, 4f, 3, 0, 0, iVar4, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(uParam0[iVar1 /*21*/]))
			{
				if (uParam0->f_163 == -1)
				{
					uParam0->f_163 = iVar1;
					Local_274.f_346 = Global_35;
				}
				iVar3 = (uParam0[iVar1 /*21*/])->f_1;
				switch (iVar3)
				{
					case 0:
						if (!__LIB_2__::func_703(&(uParam0->f_127[0 /*17*/]), 0))
						{
							__LIB_2__::func_482(&(uParam0->f_127[0 /*17*/]), 1, 1);
						}
						break;
					case 1:
						if (!__LIB_2__::func_703(&(uParam0->f_127[1 /*17*/]), 0))
						{
							__LIB_2__::func_691(&(Local_274.f_73), Local_15[0], 0, 30f);
							if (__LIB_2__::func_1(Local_15[0], 0, 1))
							{
								__LIB_2__::func_504(Local_15[0], 500);
							}
							if (__LIB_2__::func_1(Local_274.f_317[0], 0, 1))
							{
								__LIB_2__::func_504(Local_274.f_317[0], 500);
							}
							PED::SET_PED_USING_ACTION_MODE(Local_15[0], true, -1, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar6);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							__LIB_1__::func_474(Local_15[0], &iVar6, 2f, 0, 1, 1);
							__LIB_1__::func_683(&Local_274, 8388608);
							__LIB_2__::func_482(&(uParam0->f_127[1 /*17*/]), 1, 1);
						}
						break;
				}
				switch (iVar3)
				{
					case 0:
					case 1:
						func_146(uParam0, 0, 1);
						break;
				}
			}
			if (iVar0 != -1)
			{
				iVar2 = iVar0;
				uParam0->f_162 = iVar2;
				switch (iVar2)
				{
					case 0:
						break;
					case 1:
						uParam0->f_166++;
						break;
				}
				uParam0->f_164 = 0;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_145(var uParam0, var uParam1)
{
	char* sVar0[2];
	char* sVar3[2];
	sVar0[0] = __LIB_2__::func_460(8);
	sVar0[1] = __LIB_2__::func_460(10);
	sVar3[0] = "";
	switch (uParam0->f_10)
	{
		case 0:
			sVar3[1] = "FRT_V1_ILO_ANTAGONIZE";
			break;
		case 1:
			sVar3[1] = "FRT_V2_ILO_ANTAGONIZE";
			break;
	}
	__LIB_2__::func_586(&(uParam1->f_127[0 /*17*/]), sVar0[0], sVar3[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_586(&(uParam1->f_127[1 /*17*/]), sVar0[1], sVar3[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_2__::func_482(&(uParam1->f_127[0 /*17*/]), 1, 1);
}

void func_146(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_342(uParam0, 0))
		{
			func_343(uParam0, 0, 1);
		}
		if (!func_342(uParam0, 1))
		{
			func_343(uParam0, 1, 1);
		}
	}
	else
	{
		if (bParam2 || func_342(uParam0, 0))
		{
			func_343(uParam0, 0, 0);
		}
		if (bParam2 || func_342(uParam0, 1))
		{
			func_343(uParam0, 1, 0);
		}
	}
}

void func_148(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (MAP::DOES_BLIP_EXIST((*uParam1)[iVar0]))
		{
		}
		else if (__LIB_1__::func_472((*iParam0)[iVar0], 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			__LIB_2__::func_73((*iParam0)[iVar0], uParam1[iVar0], joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
		}
		else if (!ENTITY::IS_ENTITY_ON_SCREEN((*iParam0)[iVar0]))
		{
			if (__LIB_0__::func_94((*iParam0)[iVar0], Global_36, 0) < 10f)
			{
				__LIB_2__::func_73((*iParam0)[iVar0], uParam1[iVar0], joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
			}
		}
		iVar0++;
	}
}

bool func_149()
{
	int iVar0;
	func_303();
	__LIB_2__::func_609();
	if (Local_274.f_5 < 12)
	{
		func_321();
		__LIB_2__::func_510(&Local_15);
	}
	if (Local_274.f_5 < 10)
	{
		func_305();
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_0__::func_615(&Local_274, 10);
		}
	}
	__LIB_2__::func_527(&(Local_274.f_84));
	switch (Local_274.f_5)
	{
		case 0:
			func_326();
			func_346();
			__LIB_1__::func_148(&(Local_274.f_288[2 /*3*/]));
			__LIB_0__::func_615(&Local_274, 2);
			break;
		case 2:
			func_326();
			if (!__LIB_3__::func_381(&Local_274, 32768))
			{
				if (__LIB_1__::func_285(&(Local_274.f_288[2 /*3*/]), 4f))
				{
					func_347();
					__LIB_0__::func_37(&(Local_274.f_288[2 /*3*/]));
					__LIB_0__::func_615(&Local_274, 3);
				}
			}
			break;
		case 3:
			func_326();
			if (!func_317(0) && !__LIB_3__::func_381(&Local_274, 32768))
			{
				__LIB_0__::func_615(&Local_274, 4);
			}
			break;
		case 4:
			func_326();
			if (!__LIB_3__::func_381(&Local_274, 32768))
			{
				func_325();
			}
			if (func_317(0))
			{
				if (!__LIB_3__::func_381(&Local_274, 32768))
				{
					__LIB_1__::func_283(&(Local_274.f_288[2 /*3*/]), 0);
					if (__LIB_1__::func_285(&(Local_274.f_288[2 /*3*/]), 7f))
					{
						func_348();
						__LIB_0__::func_37(&(Local_274.f_288[2 /*3*/]));
						__LIB_0__::func_615(&Local_274, 5);
					}
				}
			}
			break;
		case 5:
			func_326();
			if (!__LIB_3__::func_381(&Local_274, 32768))
			{
				func_325();
			}
			if (!func_317(0) && !__LIB_3__::func_381(&Local_274, 32768))
			{
				__LIB_0__::func_615(&Local_274, 6);
			}
			break;
		case 6:
			func_326();
			if (!__LIB_3__::func_381(&Local_274, 32768))
			{
				func_325();
			}
			if (func_317(0))
			{
				if (!__LIB_3__::func_381(&Local_274, 32768))
				{
					__LIB_1__::func_283(&(Local_274.f_288[2 /*3*/]), 0);
					if (__LIB_1__::func_285(&(Local_274.f_288[2 /*3*/]), 4f))
					{
						__LIB_1__::func_683(&Local_274, 32);
						__LIB_0__::func_615(&Local_274, 15);
					}
				}
			}
			break;
		case 10:
			__LIB_1__::func_748(&(Local_274.f_316), 1, 1);
			__LIB_2__::func_505(&Local_15);
			if (!__LIB_0__::func_71(Global_35))
			{
				func_203();
				if (func_351(&Local_274, 5, Local_274.f_317[0], "MALE_B"))
				{
					func_199(&Local_274, 1);
					__LIB_0__::func_615(&Local_274, 13);
				}
			}
			break;
		case 13:
			func_352();
			if (__LIB_2__::func_227(0f, 1, Local_274.f_317[0], 1))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_274.f_317[0], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
				__LIB_2__::func_180(&(Local_15.f_152), 0);
				if (!PED::IS_PED_IN_COMBAT(Local_274.f_317[0], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
					__LIB_1__::func_474(Local_274.f_317[0], &iVar0, 0, 0, 1, 1);
				}
				PED::SET_PED_CONFIG_FLAG(Local_274.f_317[0], 249, true);
				__LIB_1__::func_683(&Local_274, 33554432);
				func_297(&Local_274, Local_274.f_317[0], Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", -1073741824 /* Float: -2f */, 1, 291934926, 2);
				__LIB_0__::func_615(&Local_274, 14);
			}
			break;
		case 14:
			if (__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				__LIB_1__::func_683(&Local_274, 2097152);
			}
			break;
		case 11:
			__LIB_2__::func_505(&Local_15);
			func_352();
			if (func_354(Local_274.f_317[0], &(Local_274.f_84), 0.3f, 1, 0, 2, 0, 0, __LIB_1__::func_976(), 6000, 1, 0))
			{
				__LIB_0__::func_615(&Local_274, 16);
			}
			else if (Local_274.f_84.f_4)
			{
				__LIB_1__::func_283(&(Local_15.f_241), 0);
			}
			if (__LIB_1__::func_285(&(Local_15.f_241), 1f))
			{
				__LIB_2__::func_462(&(Local_274.f_288[1 /*3*/]), 10f, 0);
				__LIB_0__::func_614(&Local_274, 4);
				__LIB_0__::func_615(&Local_274, 16);
			}
			break;
		case 16:
			func_199(&Local_274, 1);
			return true;
	}
	return false;
}

bool func_150()
{
	func_303();
	if (Local_274.f_5 < 1)
	{
		func_321();
	}
	if (Local_274.f_5 <= 0)
	{
		func_305();
	}
	if (Local_274.f_5 < 7)
	{
		func_356();
	}
	switch (Local_274.f_5)
	{
		case 0:
			if (func_357())
			{
				__LIB_2__::func_147(&Local_15, 1048576);
				func_151(&Local_274, 8, "HORSE", Local_15.f_56);
				func_152(&Local_274, 8);
				__LIB_2__::func_48(&(Local_15.f_182), 8);
				__LIB_1__::func_683(&Local_274, 16384);
				if (__LIB_0__::func_139(Local_274.f_316))
				{
					__LIB_1__::func_748(&(Local_274.f_316), 0, 1);
				}
				__LIB_0__::func_615(&Local_274, 1);
			}
			break;
		case 1:
			if (func_359())
			{
				__LIB_1__::func_148(&(Local_274.f_288[2 /*3*/]));
				__LIB_0__::func_615(&Local_274, 2);
			}
			break;
		case 2:
			if (func_360())
			{
				__LIB_0__::func_615(&Local_274, 7);
			}
			else if (__LIB_1__::func_285(&(Local_274.f_288[2 /*3*/]), 4f))
			{
				__LIB_1__::func_148(&(Local_274.f_288[2 /*3*/]));
				func_297(&Local_274, Local_15[0], Global_35, "GET_LOST", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
				__LIB_0__::func_615(&Local_274, 4);
			}
			break;
		case 4:
			if (func_360())
			{
				__LIB_0__::func_615(&Local_274, 7);
			}
			else if (__LIB_1__::func_285(&(Local_274.f_288[2 /*3*/]), 10f))
			{
				__LIB_1__::func_148(&(Local_274.f_288[2 /*3*/]));
				func_297(&Local_274, Local_15[0], Global_35, "FINAL_WARNING", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
				if (__LIB_2__::func_1(Local_15[0], 0, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, -1, false, 1);
				}
				__LIB_0__::func_615(&Local_274, 6);
			}
			break;
		case 6:
			if (func_360())
			{
				__LIB_0__::func_615(&Local_274, 7);
			}
			else if (__LIB_1__::func_285(&(Local_274.f_288[2 /*3*/]), 8f))
			{
				__LIB_1__::func_148(&(Local_274.f_288[2 /*3*/]));
				__LIB_1__::func_683(&Local_274, 32);
				__LIB_0__::func_615(&Local_274, 15);
			}
			break;
		case 7:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_1__::func_148(&(Local_274.f_288[2 /*3*/]));
				func_297(&Local_274, Local_274.f_317[0], Local_15[0], "AMBUSH_FRT_WANTHORSE", -1073741824 /* Float: -2f */, 1, 291934926, 0);
				__LIB_0__::func_615(&Local_274, 8);
			}
			break;
		case 8:
			if (func_361())
			{
				__LIB_1__::func_683(&Local_274, 131072);
				return false;
			}
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				func_362();
				__LIB_0__::func_615(&Local_274, 9);
			}
			break;
		case 9:
			if (func_361())
			{
				__LIB_1__::func_683(&Local_274, 131072);
				return false;
			}
			break;
	}
	return false;
}

void func_151(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	char* sVar0;
	sVar0 = func_363(iParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_334[iParam1]))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_334[iParam1], sParam2, iParam3);
}

void func_152(var uParam0, int iParam1)
{
	__LIB_2__::func_506(uParam0->f_334[iParam1], func_363(uParam0, iParam1));
}

void func_164(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 0))
		{
			if (!func_129(uParam0, iVar0, 512))
			{
				if (PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0], false);
					__LIB_1__::func_733((*uParam0)[iVar0]);
					__LIB_2__::func_152(uParam0, iVar0, 512);
				}
			}
			else if (!PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
			{
				__LIB_2__::func_156(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	if (__LIB_1__::func_285(&(Local_274.f_288[1 /*3*/]), 5f))
	{
		return;
	}
	if ((!__LIB_3__::func_381(&Local_274, 8) || __LIB_3__::func_381(&Local_274, 16)) || __LIB_3__::func_381(&Local_274, 32))
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (func_388(iVar0))
			{
				PED::SET_PED_RESET_FLAG(Local_15[iVar0], 27, true);
			}
			iVar0++;
		}
	}
}

void func_171()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			vVar2 = { func_398(iVar0) };
			fVar5 = func_399(iVar0);
			if (!PED::IS_PED_IN_COMBAT(Local_15[iVar0], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
			}
			if ((!__LIB_0__::func_86(vVar2) && fVar5 > 0f) && !__LIB_3__::func_381(&Local_274, 131072))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], vVar2, fVar5, 1, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 45, true);
			}
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(Local_274.f_317[0], 0, 1))
	{
		if (!PED::IS_PED_IN_COMBAT(Local_274.f_317[0], 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_274.f_317[0], &iVar1, 0, 0, 1, 1);
		}
		__LIB_2__::func_73(Local_274.f_317[0], &(Local_274.f_319[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
	}
}

bool func_173()
{
	if ((func_400(&(Local_274.f_317)) + func_400(&Local_15)) < 4)
	{
		return true;
	}
	return false;
}

void func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
		}
		iVar0++;
	}
}

void func_176()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::_0x1854217C640B39EC(Local_15[iVar0], Global_35, 0f, 0f, 0f, 15f, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 45, true);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 50, true);
		}
		iVar0++;
	}
}

bool func_177(int iParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (*uParam1 < 0)
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
				if (!func_129(iParam0, iVar2, 1))
				{
					__LIB_1__::func_148(uParam2);
					*uParam1 = iVar2;
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
			if (__LIB_2__::func_1((*iParam0)[*uParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2((*iParam0)[*uParam1], Global_35, 1, 0);
			}
		}
		__LIB_1__::func_283(uParam2, 0);
		if (__LIB_1__::func_285(uParam2, fParam4))
		{
			if (__LIB_2__::func_1((*iParam0)[*uParam1], 0, 1))
			{
				if (__LIB_2__::func_211(iParam0, *uParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[*uParam1], Global_35, 4, 524292, -1f, -1, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[*uParam1], true);
					__LIB_1__::func_733((*iParam0)[*uParam1]);
					__LIB_2__::func_56((*iParam0)[*uParam1], 0, 1);
					__LIB_2__::func_303((*iParam0)[*uParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_178()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_403(Local_15[iVar0], Local_15.f_22[iVar0], &(Local_274.f_11[iVar0 /*10*/]), iVar0);
		iVar0++;
	}
	func_403(Local_274.f_317[0], Local_274.f_319[0], &(Local_274.f_62[0 /*10*/]), 0);
}

char* func_198(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (__LIB_3__::func_381(uParam0, 4))
			{
				return "gaifa_horse_warn_front";
			}
			else
			{
				return "gaifa_horse_warn_back";
			}
			break;
		case 1:
			if (__LIB_3__::func_381(uParam0, 4))
			{
				return "gaifa_horse_violent_front";
			}
			else
			{
				return "gaifa_horse_violent_back";
			}
			break;
	}
	return "";
}

void func_199(int iParam0, bool bParam1)
{
	if (__LIB_3__::func_381(iParam0, 65536))
	{
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_1__::func_681(iParam0, 65536);
		}
	}
	else if (!bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		__LIB_1__::func_683(iParam0, 65536);
	}
}

void func_203()
{
	if (!__LIB_3__::func_381(&Local_274, 4194304))
	{
		__LIB_1__::func_683(&Local_274, 4194304);
	}
}

bool func_205(int iParam0)
{
	if (func_129(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (func_129(&Local_15, iParam0, 128))
	{
		return false;
	}
	if (func_129(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_64(&Local_15, Local_15[iParam0]))
	{
		return true;
	}
	if (!func_129(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_251()
{
	switch (Local_274.f_9)
	{
		case 0:
			func_443(&Local_15, &Local_274);
			break;
	}
}

void func_256(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
					Jump @2999; //curOff = 1424
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					Jump @2999; //curOff = 1470
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					Jump @2999; //curOff = 1551
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
					Jump @2999; //curOff = 1667
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					Jump @2999; //curOff = 1748
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
					Jump @2999; //curOff = 1934
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					Jump @2999; //curOff = 1980
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					Jump @2999; //curOff = 2026
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
					Jump @2999; //curOff = 2177
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					Jump @2999; //curOff = 2223
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					Jump @2999; //curOff = 2269
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					Jump @2999; //curOff = 2315
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					Jump @2999; //curOff = 2361
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					Jump @2999; //curOff = 2407
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					Jump @2999; //curOff = 2453
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					Jump @2999; //curOff = 2499
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					Jump @2999; //curOff = 2580
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					Jump @2999; //curOff = 2626
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					Jump @2999; //curOff = 2672
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					Jump @2999; //curOff = 2718
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					Jump @2999; //curOff = 2799
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					Jump @2999; //curOff = 2845
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
					Jump @6226; //curOff = 2999
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
									break;
								case 4:
									__LIB_2__::func_68(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
									break;
							}
							break;
						case 18:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
									break;
							}
							break;
						case 19:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
									break;
							}
							break;
						case 21:
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
							break;
						case 20:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
									break;
							}
							break;
						case 22:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
									break;
							}
							break;
						case 23:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
									break;
							}
							break;
						case 24:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
									break;
							}
							break;
						case 25:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
									break;
							}
							break;
						case 28:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
									break;
							}
							break;
						case 27:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
									break;
							}
							break;
						case 26:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
									break;
							}
							break;
						case 29:
						case 30:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
									break;
							}
							break;
						case 31:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
									break;
							}
							break;
						case 32:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
									break;
							}
							break;
						case 33:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							break;
						case 34:
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
									break;
							}
							break;
						case 43:
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
							break;
					}
					Jump @6226; //curOff = 5958
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
					Jump @6226; //curOff = 6195
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					Jump @6226; //curOff = 6209
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
bool func_257(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

void func_265()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_456(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_267(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_457(uParam0, iVar0, 0, 1);
		iVar0++;
	}
}

char* func_268()
{
	return "SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@AMBUSH_TRAP@DIA_03A_PLAYER";
}

bool func_269(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_458(uParam0, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_270(int iParam0)
{
	int iVar0;
	if (__LIB_3__::func_381(iParam0, 4))
	{
		switch (iParam0->f_10)
		{
			case 1:
				iVar0 = 4;
				while (iVar0 <= 7)
				{
					if (iVar0 != 5)
					{
						func_459(iParam0, iVar0, "PBL_ENTER_A");
					}
					func_459(iParam0, iVar0, "PBL_EXIT_A");
					func_459(iParam0, iVar0, "PBL_GEDDOWNA_THERE_A");
					func_459(iParam0, iVar0, "PBL_GET_OFF_A");
					func_459(iParam0, iVar0, "PBL_GOT_YOUR_HORSE_A");
					iVar0++;
				}
				break;
			case 0:
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (iVar0 != 1)
					{
						func_459(iParam0, iVar0, "PBL_ENTER_A");
					}
					func_459(iParam0, iVar0, "PBL_HELP_YA_A");
					iVar0++;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_10)
		{
			case 1:
				iVar0 = 4;
				while (iVar0 <= 7)
				{
					if (iVar0 != 5)
					{
						func_459(iParam0, iVar0, "PBL_ENTER_B");
					}
					func_459(iParam0, iVar0, "PBL_EXIT_B");
					func_459(iParam0, iVar0, "PBL_GEDDOWNA_THERE_B");
					func_459(iParam0, iVar0, "PBL_GET_OFF_B");
					func_459(iParam0, iVar0, "PBL_GOT_YOUR_HORSE_B");
					iVar0++;
				}
				break;
			case 0:
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (iVar0 != 1)
					{
						func_459(iParam0, iVar0, "PBL_ENTER_B");
					}
					func_459(iParam0, iVar0, "PBL_HELP_YA_B");
					iVar0++;
				}
				break;
		}
	}
}

bool func_271(int iParam0)
{
	int iVar0;
	if (__LIB_3__::func_381(iParam0, 4))
	{
		switch (iParam0->f_10)
		{
			case 1:
				iVar0 = 4;
				while (iVar0 <= 7)
				{
					if (iVar0 != 5)
					{
						if (!func_460(iParam0, iVar0, "PBL_ENTER_A"))
						{
							return false;
						}
					}
					if (!func_460(iParam0, iVar0, "PBL_EXIT_A"))
					{
						return false;
					}
					if (!func_460(iParam0, iVar0, "PBL_GEDDOWNA_THERE_A"))
					{
						return false;
					}
					if (!func_460(iParam0, iVar0, "PBL_GET_OFF_A"))
					{
						return false;
					}
					if (!func_460(iParam0, iVar0, "PBL_GOT_YOUR_HORSE_A"))
					{
						return false;
					}
					iVar0++;
				}
				break;
			case 0:
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (iVar0 != 1)
					{
						if (!func_460(iParam0, iVar0, "PBL_ENTER_A"))
						{
							return false;
						}
					}
					if (!func_460(iParam0, iVar0, "PBL_HELP_YA_A"))
					{
						return false;
					}
					iVar0++;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_10)
		{
			case 1:
				iVar0 = 4;
				while (iVar0 <= 7)
				{
					if (iVar0 != 5)
					{
						if (!func_460(iParam0, iVar0, "PBL_ENTER_B"))
						{
							return false;
						}
					}
					if (!func_460(iParam0, iVar0, "PBL_EXIT_B"))
					{
						return false;
					}
					if (!func_460(iParam0, iVar0, "PBL_GEDDOWNA_THERE_B"))
					{
						return false;
					}
					if (!func_460(iParam0, iVar0, "PBL_GET_OFF_B"))
					{
						return false;
					}
					if (!func_460(iParam0, iVar0, "PBL_GOT_YOUR_HORSE_B"))
					{
						return false;
					}
					iVar0++;
				}
				break;
			case 0:
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (iVar0 != 1)
					{
						if (!func_460(iParam0, iVar0, "PBL_ENTER_B"))
						{
							return false;
						}
					}
					if (!func_460(iParam0, iVar0, "PBL_HELP_YA_B"))
					{
						return false;
					}
					iVar0++;
				}
				break;
		}
	}
	return true;
}

bool func_273()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_456(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
			{
				iVar2 = 0;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_274(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0->f_151)
	{
		case 18:
			switch (iParam2)
			{
				case 0:
					return 1285276059;
				case 1:
					return -1975236125;
				case 2:
					return 1871320175;
				case 3:
					return 634126580;
				case 4:
					return -2139769274;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					return 1285276059;
				case 1:
					return 1022832458;
				case 2:
					return -454688983;
				case 3:
					return -1288823878;
				case 4:
					return -739156672;
				default:
					break;
			}
			break;
	}
	return __LIB_2__::func_16();
}

struct<4> func_278(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (iParam0->f_9)
	{
		case 0:
			if (__LIB_3__::func_381(iParam0, 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_466(0, 0);
					case 1:
						return func_466(0, 2);
					case 2:
						return func_466(0, 4);
					case 3:
						return func_466(0, 6);
					case 4:
						return func_466(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_466(2, 0);
					case 1:
						return func_466(2, 2);
					case 2:
						return func_466(2, 4);
					case 3:
						return func_466(2, 6);
					case 4:
						return func_466(2, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

int func_280(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 2;
			case 2:
				return 1;
			case 3:
				return 1;
			case 4:
				return 1;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			default:
				break;
		}
	}
	return -1;
}

char* func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0199_G_M_M_UniInbred_01_WHITE_01";
		case 2:
			return "0200_G_M_M_UniInbred_01_WHITE_02";
		case 1:
			return "0203_G_M_M_UniInbred_03_WHITE_01";
		default:
			break;
	}
	return "";
}

void func_282(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (__LIB_2__::func_1(Local_15[iParam0], 0, 1))
	{
		func_467(&Local_274, iParam1, sParam2, Local_15[iParam0], 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], false, true);
		__LIB_2__::func_272(Local_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		if (iParam3 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
		{
			__LIB_2__::func_530(&Local_15, Local_15[iParam0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
		}
		else
		{
			__LIB_2__::func_530(&Local_15, Local_15[iParam0], iParam3, 1);
		}
	}
}

bool func_294(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_2__::func_630((*iParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

int func_297(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		uParam0->f_346 = iParam1;
		__LIB_1__::func_148(&(uParam0->f_288[7 /*3*/]));
		return 1;
	}
	return 0;
}

int func_301()
{
	if (Local_274.f_10 == 0)
	{
		return 1;
	}
	return 5;
}

void func_303()
{
	if (!__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		return;
	}
	switch (Local_274.f_10)
	{
		case 0:
			if (!__LIB_11__::func_398(&Local_274, 1))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINELOOKLOST"), "bLineLookLost", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					func_297(&Local_274, Local_15[0], Global_35, func_509(Local_274.f_10), -1073741824 /* Float: -2f */, 0, -500314840, 0);
					func_510(&Local_274, 1);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 8192))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEHELPYA"), "bLineHelpYa", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511())
					{
						func_297(&Local_274, Local_15[0], Global_35, "AMBUSH_FRT_SURROUND", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 8192);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 16384))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEGOTTHEHORSE"), "bLineGotTheHorse", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511())
					{
						func_297(&Local_274, Local_274.f_317[0], Global_35, "AMBUSH_FRT_HAVEHORSE", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 16384);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 32768) && !__LIB_0__::func_75(&(Local_274.f_288[4 /*3*/])))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEMURFREEHILLS"), "bLineMurfreeHills", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511())
					{
						func_297(&Local_274, Local_15[0], Global_35, "AMBUSH_FRT_OURHILLS", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 32768);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 65536))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEREALSUBTLE"), "bLineRealSubtle", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511())
					{
						func_297(&Local_274, Global_35, Local_15[0], "AMBUSH_FRT_IREADYA", -1073741824 /* Float: -2f */, 0, 291934926, 0);
					}
					func_510(&Local_274, 65536);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 131072))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINELETGO"), "bLineLetGo", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (!func_512())
					{
						func_297(&Local_274, Local_15[0], Global_35, "AMBUSH_FRT_LETGO", -1073741824 /* Float: -2f */, 0, 291934926, 0);
					}
					func_510(&Local_274, 131072);
				}
			}
			break;
		case 1:
			if (!__LIB_11__::func_398(&Local_274, 1))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINELOOKIEHERE"), "bLineLookieHere", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, Local_15[0], Global_35, func_509(Local_274.f_10), -1073741824 /* Float: -2f */, 0, -500314840, 0);
					}
					func_510(&Local_274, 1);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 2))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEPAYNOMIND"), "bLinePayNoMind", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, Local_15[0], Global_35, "AMBUSH_FRT_V2_INTRO_B_KNOWN", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 2);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 4))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEGOTHISHORSE"), "bLineGotHisHorse", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, Local_274.f_317[0], Global_35, "AMBUSH_FRT_V2_HAVEHORSE", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 4);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 8))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEGOTYOURHORSE"), "bLineGotYourHorse", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, Local_15[0], Global_35, "AMBUSH_FRT_V2_THREAT_A", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 8);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 16))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEYOUFELLERS"), "bLineYouFellers", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, Global_35, Local_15[0], "AMBUSH_FRT_V2_THREAT_B", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
						func_346();
					}
					func_510(&Local_274, 16);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 32))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEYOUWANNAGO"), "bLineYouWannaGo", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, Local_15[0], Global_35, "AMBUSH_FRT_V2_THREAT_C", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 32);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 64))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEGEDDOWNATHERE"), "bLineGeddownaThere", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (!func_512())
					{
						func_297(&Local_274, Local_15[0], Global_35, "AMBUSH_FRT_V2_OFFHORSE_B", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 64);
				}
			}
			else if (!__LIB_11__::func_398(&Local_274, 128))
			{
				if (__LIB_2__::func_448(Local_15[0], joaat("BLINEGETOFFATHERE"), "bLineGetOffaThere", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, Local_15[0], Global_35, "AMBUSH_FRT_V2_OFFHORSE_A", -1073741824 /* Float: -2f */, 0, 1744022339, 0);
					}
					func_510(&Local_274, 128);
				}
			}
			break;
	}
}

void func_304()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	if (!__LIB_3__::func_381(&Local_274, 64))
	{
		if (__LIB_11__::func_398(&Local_274, 1))
		{
			iVar4 = 3;
			while (iVar4 <= 4)
			{
				if (!__LIB_2__::func_1(Local_15[iVar4], 0, 0))
				{
				}
				else
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar4], false, true);
					__LIB_2__::func_272(Local_15[iVar4], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					switch (iVar4)
					{
						case 3:
							if (__LIB_3__::func_381(&Local_274, 128))
							{
								__LIB_2__::func_530(&Local_15, Local_15[iVar4], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
								__LIB_2__::func_546(Local_15[iVar4], 1, 3, 0);
								PED::_0x49DADFC4CD808B0A(Local_15[iVar4], 1, -1);
							}
							else
							{
								__LIB_2__::func_530(&Local_15, Local_15[iVar4], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
								__LIB_2__::func_272(Local_15[iVar4], joaat("WEAPON_MELEE_KNIFE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							}
							break;
						case 4:
							if (__LIB_3__::func_381(&Local_274, 128))
							{
								__LIB_2__::func_530(&Local_15, Local_15[iVar4], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
								__LIB_2__::func_546(Local_15[iVar4], 1, 3, 0);
								PED::_0x49DADFC4CD808B0A(Local_15[iVar4], 1, -1);
							}
							else
							{
								__LIB_2__::func_530(&Local_15, Local_15[iVar4], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
								PED::_0x49DADFC4CD808B0A(Local_15[iVar4], 1, -1);
							}
							break;
					}
					Var0 = { func_514(&Local_274, iVar4) };
					if (!__LIB_3__::func_381(&Local_274, 128))
					{
						PED::_0x89F5E7ADECCCB49C(Local_15[iVar4], "angry");
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var0, 1f, -1, 0.25f, 0, Var0.f_3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(Local_15[iVar4], &iVar5, 0, 0, 1, 1);
				}
				iVar4++;
			}
			__LIB_1__::func_683(&Local_274, 64);
		}
	}
}

void func_305()
{
	if (((__LIB_3__::func_381(&Local_274, 262144) || __LIB_3__::func_381(&Local_274, 16384)) || __LIB_3__::func_381(&Local_274, 524288)) || __LIB_3__::func_381(&Local_274, 256))
	{
		if (__LIB_0__::func_139(Local_274.f_316))
		{
			__LIB_1__::func_748(&(Local_274.f_316), 0, 1);
		}
		return;
	}
	if (!__LIB_0__::func_139(Local_274.f_316))
	{
		Local_274.f_316 = __LIB_4__::func_450("BREAK_FREE", joaat("INPUT_CONTEXT_A"), 7, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_1__::func_382(Local_274.f_316, 0, 1);
	}
	else if (__LIB_0__::func_567(Local_274.f_316, 0))
	{
		__LIB_1__::func_748(&(Local_274.f_316), 1, 1);
		__LIB_1__::func_683(&Local_274, 262144);
		func_151(&Local_274, 8, "HORSE", Local_15.f_56);
		func_152(&Local_274, 8);
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		func_137();
		MAP::DISPLAY_RADAR(true);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

bool func_308()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40))
	{
		if (PED::_0x7BB810E8B343AC7B(Global_1935630.f_40))
		{
			return true;
		}
		PED::_0xF60165E1D2C5370B(Global_1935630.f_40, &fVar0, &fVar1);
		fVar2 = MISC::ABSF(fVar0);
		fVar3 = MISC::ABSF(fVar1);
		if (fVar2 > fVar3)
		{
			return true;
		}
		if (fVar1 < 0f)
		{
			return true;
		}
	}
	return false;
}

void func_309()
{
	char* sVar0;
	sVar0 = func_518(&Local_274);
	if (__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
	}
	switch (Local_274.f_10)
	{
		case 0:
			func_519(&Local_274, 0);
			func_520(&Local_274, 0, sVar0, 1);
			break;
		case 1:
			func_519(&Local_274, 4);
			func_520(&Local_274, 4, sVar0, 1);
			break;
	}
	__LIB_1__::func_283(&(Local_274.f_288[2 /*3*/]), 0);
}

void func_310()
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<4> Var5;
	vector3 vVar9[2];
	float fVar16;
	if (!__LIB_3__::func_381(&Local_274, 2048))
	{
		func_199(&Local_274, 0);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
		iVar2 = PED::_GET_LAST_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			PED::_0xF60165E1D2C5370B(iVar2, &uVar0, &fVar1);
		}
		else
		{
			PED::_0xF60165E1D2C5370B(Global_35, &uVar0, &fVar1);
		}
		PED::_0x2EB75FB86C41F026(iVar2, 3, 0);
		PED::_0x2EB75FB86C41F026(iVar2, 1, 0);
		Local_274.f_322 = iVar2;
		Var5 = { func_521(&Local_274) };
		sVar4 = func_198(&Local_274);
		TASK::WAYPOINT_RECORDING_GET_COORD(sVar4, 0, &(vVar9[0 /*3*/]));
		TASK::WAYPOINT_RECORDING_GET_COORD(sVar4, 1, &(vVar9[1 /*3*/]));
		fVar16 = __LIB_0__::func_152(vVar9[0 /*3*/], vVar9[1 /*3*/], 1);
		if (fVar1 < 1f)
		{
			fVar1 = 1f;
		}
		func_523();
		POPULATION::_0xF74E134F40192884(iVar2, 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar9[0 /*3*/], (0.9f * fVar1), 20000, fVar16, 1f, 1);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sVar4, 0, 768, -1, 0, 0, -1);
		__LIB_1__::func_474(Global_35, &iVar3, 0, 0, 1, 1);
		__LIB_1__::func_283(&(Local_274.f_288[3 /*3*/]), 0);
		__LIB_1__::func_683(&Local_274, 2048);
	}
}

void func_311()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_429(&Local_15, iVar0, 1);
		}
		iVar0++;
	}
}

void func_313()
{
	__LIB_2__::func_104(&(Local_15.f_152), 1);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 1);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_180(&(Local_15.f_152), 1);
	__LIB_2__::func_507(&(Local_15.f_152), 500);
}

void func_315()
{
	vector3 vVar0;
	if (!bLocal_630)
	{
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
		PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (__LIB_3__::func_381(&Local_274, 16777216))
	{
		__LIB_1__::func_283(&(Local_274.f_288[6 /*3*/]), 0);
		if (CAM::_0xA24C1D341C6E0D53(0, 0, 0))
		{
			if (!bLocal_630)
			{
				if (__LIB_0__::func_86(vLocal_627))
				{
					vLocal_627 = { __LIB_2__::func_621() };
				}
				func_527(vLocal_627, ENTITY::GET_ENTITY_COORDS(Local_15[0], true, false), &uLocal_631, 2000, 0);
			}
		}
		else
		{
			__LIB_4__::func_151(Local_15[0], &(Local_274.f_75), vVar0, 1, 30f, 25f, 10000, 7000, 2000, 1075838976 /* Float: 2.5f */, 1, 1, 1084227584 /* Float: 5f */);
		}
	}
}

void func_316()
{
	if (__LIB_1__::func_285(&(Local_274.f_288[2 /*3*/]), 3f))
	{
		if (!__LIB_3__::func_381(&Local_274, 8192))
		{
			func_529();
			__LIB_1__::func_683(&Local_274, 8192);
		}
	}
}

bool func_317(bool bParam0)
{
	switch (Local_274.f_10)
	{
		case 0:
			if (__LIB_3__::func_381(&Local_274, 4))
			{
				if (func_530(&Local_274, 0, "IDLE_A_WARN") && (bParam0 || func_530(&Local_274, 2, "IDLE_A_WARN")))
				{
					return true;
				}
			}
			else if (func_530(&Local_274, 0, "IDLE_B_WARN") && (bParam0 || func_530(&Local_274, 2, "IDLE_B_WARN")))
			{
				return true;
			}
			break;
		case 1:
			if (__LIB_3__::func_381(&Local_274, 4))
			{
				if (func_530(&Local_274, 4, "IDLE_A_VIOLENT") && (bParam0 || func_530(&Local_274, 6, "IDLE_A_VIOLENT")))
				{
					return true;
				}
			}
			else if (func_530(&Local_274, 4, "IDLE_B_VIOLENT") && (bParam0 || func_530(&Local_274, 6, "IDLE_B_VIOLENT")))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_318()
{
	switch (Local_274.f_8)
	{
		case 0:
			if (func_531())
			{
				Local_274.f_8 = 1;
			}
			break;
		case 1:
			if (func_532())
			{
				Local_274.f_8 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_319()
{
	int iVar0;
	vector3 vVar1;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	if (__LIB_3__::func_381(&Local_274, 4096))
	{
		func_321();
		return true;
	}
	if (!__LIB_3__::func_381(&Local_274, 2048))
	{
		return false;
	}
	iVar0 = Global_1935630.f_40;
	if (!__LIB_2__::func_1(iVar0, 0, 0))
	{
		return false;
	}
	vVar1 = { func_521(&Local_274) };
	fVar5 = ENTITY::GET_ENTITY_SPEED(iVar0);
	fVar6 = __LIB_0__::func_94(iVar0, vVar1, 0);
	if ((fVar5 < 0.05f && fVar6 < 1f) || __LIB_1__::func_285(&(Local_274.f_288[3 /*3*/]), 6f))
	{
		MAP::DISPLAY_RADAR(true);
		__LIB_2__::func_147(&Local_15, 4096);
		__LIB_1__::func_683(&Local_274, 4096);
		func_199(&Local_274, 1);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_274.f_334[8], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar0), 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_274.f_334[8], "HORSE", iVar0, 0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_274.f_334[8], "IDLE_BOOL", false, false);
		ANIMSCENE::START_ANIM_SCENE(Local_274.f_334[8]);
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		if (!__LIB_2__::func_106(&vVar7, 1, 10, 0))
		{
			vVar7 = { vVar7.x, vVar7.y, (vVar7.z - 1f) };
		}
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_274.f_334[1], vVar7, 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar0), 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_274.f_334[5], vVar7, 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar0), 2);
		func_321();
	}
	return false;
}

void func_320()
{
	switch (Local_274.f_10)
	{
		case 0:
			func_467(&Local_274, 1, "MALE_B", Local_274.f_317[0], 1);
			func_467(&Local_274, 1, "HORSE", Global_1935630.f_40, 1);
			func_519(&Local_274, 1);
			if (__LIB_3__::func_381(&Local_274, 4))
			{
				func_520(&Local_274, 1, "PBL_HELP_YA_A", 1);
				func_520(&Local_274, 0, "PBL_HELP_YA_A", 1);
				func_520(&Local_274, 2, "PBL_HELP_YA_A", 1);
				func_520(&Local_274, 3, "PBL_HELP_YA_A", 1);
				func_533(&Local_274, 0, "BOOL_A", 1);
				func_533(&Local_274, 2, "BOOL_A", 1);
				func_533(&Local_274, 3, "BOOL_A", 1);
			}
			else
			{
				func_520(&Local_274, 1, "PBL_HELP_YA_B", 1);
				func_533(&Local_274, 0, "BOOL_B", 1);
				func_533(&Local_274, 2, "BOOL_B", 1);
				func_533(&Local_274, 3, "BOOL_B", 1);
				func_520(&Local_274, 0, "PBL_HELP_YA_B", 1);
				func_520(&Local_274, 2, "PBL_HELP_YA_B", 1);
				func_520(&Local_274, 3, "PBL_HELP_YA_B", 1);
			}
			break;
		case 1:
			func_467(&Local_274, 5, "MALE_B", Local_274.f_317[0], 1);
			func_467(&Local_274, 5, "HORSE", Global_1935630.f_40, 1);
			func_519(&Local_274, 5);
			if (__LIB_3__::func_381(&Local_274, 4))
			{
				func_520(&Local_274, 5, "PBL_GOT_YOUR_HORSE_A", 1);
				func_533(&Local_274, 4, "BOOL_A", 1);
				func_533(&Local_274, 6, "BOOL_A", 1);
				func_533(&Local_274, 7, "BOOL_A", 1);
				func_520(&Local_274, 4, "PBL_GOT_YOUR_HORSE_A", 1);
				func_520(&Local_274, 6, "PBL_GOT_YOUR_HORSE_A", 1);
				func_520(&Local_274, 7, "PBL_GOT_YOUR_HORSE_A", 1);
			}
			else
			{
				func_520(&Local_274, 5, "PBL_GOT_YOUR_HORSE_B", 1);
				func_533(&Local_274, 4, "BOOL_B", 1);
				func_533(&Local_274, 6, "BOOL_B", 1);
				func_533(&Local_274, 7, "BOOL_B", 1);
				func_520(&Local_274, 4, "PBL_GOT_YOUR_HORSE_B", 1);
				func_520(&Local_274, 6, "PBL_GOT_YOUR_HORSE_B", 1);
				func_520(&Local_274, 7, "PBL_GOT_YOUR_HORSE_B", 1);
			}
			break;
	}
}

void func_321()
{
	if (!__LIB_3__::func_381(&Local_274, 256))
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
		if (Local_274.f_5 < 2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), true);
	}
}

bool func_322()
{
	switch (Local_274.f_10)
	{
		case 0:
			if (__LIB_3__::func_381(&Local_274, 4))
			{
				if (func_530(&Local_274, 1, "IDLE_A_WARN"))
				{
					return true;
				}
			}
			else if (func_530(&Local_274, 1, "IDLE_B_WARN"))
			{
				return true;
			}
			break;
		case 1:
			if (__LIB_3__::func_381(&Local_274, 4))
			{
				if (func_530(&Local_274, 5, "IDLE_A_VIOLENT"))
				{
					return true;
				}
			}
			else if (func_530(&Local_274, 5, "IDLE_B_VIOLENT"))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_324()
{
	int iVar0;
	func_297(&Local_274, Local_15[1], Local_15[0], "HEADS_UP_STORY_MEMORY_RDCH3", -2f, 1, 1744022339, 1);
	TASK::TASK_LOOK_AT_ENTITY(Local_15[0], Global_35, 8000, 0, 51, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	__LIB_1__::func_474(Local_15[0], &iVar0, 1f, 0, 1, 1);
}

void func_325()
{
	char* sVar0;
	switch (Local_274.f_10)
	{
		case 0:
			if (__LIB_3__::func_381(&Local_274, 4))
			{
				sVar0 = "BOOL_A";
			}
			else
			{
				sVar0 = "BOOL_B";
			}
			if (func_534(&Local_274, 0, sVar0))
			{
				if (!func_317(0))
				{
					__LIB_1__::func_283(&(Local_274.f_288[5 /*3*/]), 0);
					if (__LIB_1__::func_285(&(Local_274.f_288[5 /*3*/]), 3f))
					{
						func_533(&Local_274, 0, sVar0, 0);
						func_533(&Local_274, 1, sVar0, 0);
						func_533(&Local_274, 2, sVar0, 0);
						func_533(&Local_274, 3, sVar0, 0);
						__LIB_0__::func_37(&(Local_274.f_288[5 /*3*/]));
					}
				}
				else
				{
					__LIB_1__::func_148(&(Local_274.f_288[5 /*3*/]));
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_381(&Local_274, 4))
			{
				sVar0 = "BOOL_A";
			}
			else
			{
				sVar0 = "BOOL_B";
			}
			if (func_534(&Local_274, 4, sVar0))
			{
				if (!func_317(0))
				{
					__LIB_1__::func_283(&(Local_274.f_288[5 /*3*/]), 0);
					if (__LIB_1__::func_285(&(Local_274.f_288[5 /*3*/]), 1f))
					{
						func_533(&Local_274, 4, sVar0, 0);
						func_533(&Local_274, 5, sVar0, 0);
						func_533(&Local_274, 6, sVar0, 0);
						func_533(&Local_274, 7, sVar0, 0);
						__LIB_0__::func_37(&(Local_274.f_288[5 /*3*/]));
					}
				}
				else
				{
					__LIB_1__::func_148(&(Local_274.f_288[5 /*3*/]));
				}
			}
			break;
	}
}

bool func_326()
{
	int iVar0;
	char* sVar1;
	if (((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ENTER"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ENTER"))) || PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID())) || __LIB_3__::func_381(&Local_274, 32768))
	{
		__LIB_2__::func_505(&Local_15);
		if (!__LIB_3__::func_381(&Local_274, 32768))
		{
			func_203();
			sVar1 = func_535(&Local_274);
			func_297(&Local_274, Global_35, Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 291934926, 0);
			__LIB_2__::func_592(&(Local_274.f_121.f_127), 1, 1);
			__LIB_1__::func_683(&Local_274, 32768);
			PED::SET_PED_CONFIG_FLAG(Local_274.f_317[0], 448, true);
			if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_DISMOUNT_ANIMAL(0, 131072, 0, 0, 0, 0);
				__LIB_2__::func_45(0, Local_274.f_317[0], 1500);
				__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
			}
			if (!__LIB_3__::func_381(&Local_274, 67108864))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 25f, 1f, 30f, 0);
				if (WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_399(Local_15[3], 1, 0, 0)))
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 18f, 22f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 12f, 1f, 30f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				}
				__LIB_1__::func_474(Local_15[3], &iVar0, 0f, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 30f, 1f, 30f, 0);
				if (WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_399(Local_15[3], 1, 0, 0)))
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 22f, 25f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 12f, 1f, 30f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				}
				__LIB_1__::func_474(Local_15[4], &iVar0, 0.5f, 0, 1, 1);
				__LIB_1__::func_683(&Local_274, 67108864);
			}
		}
		if (__LIB_0__::func_86(Local_274.f_331) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			func_538();
			Local_274.f_331 = { Global_36 };
			return true;
		}
	}
	return false;
}

void func_327()
{
	int iVar0;
	func_297(&Local_274, Local_15[0], Global_35, "GENERIC_SHOCKED_DISBELIEF", -2f, 1, 1744022339, 2);
	__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 8000, false, 1);
	__LIB_1__::func_474(Local_15[0], &iVar0, 1.25f, 0, 1, 1);
}

bool func_330(var uParam0)
{
	return uParam0->f_224 == 6;
}

int func_333(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_546(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
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

bool func_342(var uParam0, int iParam1)
{
	if ((__LIB_2__::func_466(&(uParam0->f_127[iParam1 /*17*/]), 1, 0) && !__LIB_1__::func_489(&(uParam0->f_127[iParam1 /*17*/]), 4)) && !__LIB_1__::func_489(&(uParam0->f_127[iParam1 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

void func_343(var uParam0, int iParam1, bool bParam2)
{
	__LIB_2__::func_411(&(uParam0->f_127[iParam1 /*17*/]), bParam2, 0);
}

void func_346()
{
	if (!__LIB_3__::func_381(&Local_274, 512))
	{
		__LIB_1__::func_683(&Local_274, 512);
	}
}

void func_347()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (__LIB_3__::func_381(&Local_274, 4))
	{
		sVar0 = "PBL_GEDDOWNA_THERE_A";
		sVar1 = "BOOL_A";
	}
	else
	{
		sVar0 = "PBL_GEDDOWNA_THERE_B";
		sVar1 = "BOOL_B";
	}
	iVar2 = 4;
	while (iVar2 <= 7)
	{
		func_520(&Local_274, iVar2, sVar0, 1);
		func_533(&Local_274, iVar2, sVar1, 1);
		iVar2++;
	}
}

void func_348()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (__LIB_3__::func_381(&Local_274, 4))
	{
		sVar0 = "PBL_GET_OFF_A";
		sVar1 = "BOOL_A";
	}
	else
	{
		sVar0 = "PBL_GET_OFF_B";
		sVar1 = "BOOL_B";
	}
	iVar2 = 4;
	while (iVar2 <= 7)
	{
		func_533(&Local_274, iVar2, sVar1, 1);
		func_520(&Local_274, iVar2, sVar0, 1);
		iVar2++;
	}
}

bool func_351(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (__LIB_2__::func_598(iParam2, uParam0->f_334[iParam1], sParam3, 0, 0, 1, 0))
	{
		return true;
	}
	return false;
}

void func_352()
{
	__LIB_2__::func_517(&Local_15, Local_274.f_323[5], func_563(&Local_274), 1067450368 /* Float: 1.25f */, 1097859072 /* Float: 15f */, 1065353216 /* Float: 1f */, 1);
}

bool func_354(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	__LIB_2__::func_527(uParam1);
	if (Global_1935630.f_12)
	{
		uParam1->f_1 = 0;
		uParam1->f_2 = 1;
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
	switch (*uParam1)
	{
		case 0:
			if (!uParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_16, 0, -1082130432 /* Float: -1f */, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_IS_PED_FALLING_2(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !__LIB_0__::func_163(Global_35, 501393341)) && !__LIB_0__::func_163(Global_35, 1553520516)) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				uParam1->f_25 = { Global_36 };
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
					__LIB_1__::func_283(&(uParam1->f_32), 0);
				}
				else
				{
					__LIB_2__::func_462(&(uParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!__LIB_0__::func_474(609))
				{
					__LIB_0__::func_105(1);
					uParam1->f_28 = __LIB_0__::func_45("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					__LIB_0__::func_378(609, &uVar0, &uVar1);
					__LIB_2__::func_447(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && __LIB_1__::func_285(&(uParam1->f_32), 2f)) && __LIB_2__::func_448(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (__LIB_17__::func_772(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (__LIB_0__::func_139(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BENDSUCCESS"), "bEndSuccess", 1, 1.8f, 1))
				{
					__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				uParam1->f_1 = 1;
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
			else if (__LIB_2__::func_518(uParam1))
			{
				bVar2 = true;
			}
			else if (__LIB_2__::func_508(uParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((__LIB_0__::func_27(iParam5, 16) && !__LIB_0__::func_163(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				bVar2 = true;
			}
			if (!uParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_20))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(Global_35, iParam0, uParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_573(iParam6, 1, 0, -142743235, 0);
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
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BBEFOREHITBREAKOUT"), "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return true;
				}
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_INTRO"), "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(0f, 1, iParam0, 1))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_17, 0, -1082130432 /* Float: -1f */, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_HIT"), "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_2__::func_461(0);
					}
				}
				if (uParam1->f_11)
				{
					if (__LIB_2__::func_227(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
						{
							__LIB_2__::func_303(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (__LIB_2__::func_227(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_FAILED"), "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_19))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_19, 0, -1082130432 /* Float: -1f */, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("BLENDOUT"), "Blendout", iParam8, 0.8f, 0) || !__LIB_0__::func_163(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_356()
{
	int iVar0;
	if (__LIB_3__::func_381(&Local_274, 1048576))
	{
		return;
	}
	if (__LIB_2__::func_227(-6f, 1, 0, 0))
	{
		iVar0 = -1;
		if (__LIB_0__::func_94(Local_15[3], Global_36, 1) < 5f)
		{
			iVar0 = 3;
		}
		else if (__LIB_0__::func_94(Local_15[4], Global_36, 1) < 7f)
		{
			iVar0 = 4;
		}
		if (iVar0 != -1)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[iVar0], Global_35, -1, -1f, -1f, -1f);
			func_297(&Local_274, Local_15[iVar0], Global_35, "KEEP_GOING", -1073741824 /* Float: -2f */, 1, 291934926, 2);
			__LIB_1__::func_683(&Local_274, 1048576);
		}
	}
}

bool func_357()
{
	if (__LIB_3__::func_381(&Local_274, 524288))
	{
		return true;
	}
	if (__LIB_2__::func_448(Local_274.f_317[0], joaat("BHORSERELEASED"), "bHorseReleased", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
	{
		__LIB_1__::func_683(&Local_274, 524288);
		return true;
	}
	return false;
}

bool func_359()
{
	int iVar0;
	if (func_578(&Local_274, 0) && func_579(&Local_274, 0) < 0.99f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::_0x89F5E7ADECCCB49C(Local_15[iVar0], "intimidate");
			__LIB_0__::func_325(&(Local_15.f_22[iVar0]));
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[iVar0], Global_35, -1, -1f, -1f, -1f);
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(Local_274.f_317[0], 0, 1))
	{
		__LIB_0__::func_325(&(Local_274.f_319[0]));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_274.f_317[0], Global_35, -1, -1f, -1f, -1f);
	}
	return true;
}

bool func_360()
{
	vector3 vVar0;
	vVar0 = { func_521(&Local_274) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Global_36, true) > 24f)
	{
		return true;
	}
	return false;
}

bool func_361()
{
	int iVar0;
	vector3 vVar1;
	vVar1 = { __LIB_2__::func_114(Global_35, 2f) };
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_94(Local_15[iVar0], vVar1, 1) < 10f && PED::IS_PED_FACING_PED(Global_35, Local_15[iVar0], 90f))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_362()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vVar2 = { __LIB_2__::func_116(79, 1) };
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar1], 0, 0))
		{
			switch (iVar1)
			{
				case 0:
					fVar5 = 0f;
					break;
				case 1:
					fVar5 = 1f;
					break;
				case 2:
					fVar5 = 1.2f;
					break;
				case 3:
					fVar5 = 2f;
					break;
				case 4:
					fVar5 = 2.3f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar2, 4f, 1f, 640, 0);
			__LIB_1__::func_474(Local_15[iVar1], &iVar0, fVar5, 0, 1, 1);
		}
		iVar1++;
	}
	if (__LIB_2__::func_1(Local_274.f_317[0], 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar2, 4f, 1f, 640, 0);
		__LIB_1__::func_474(Local_274.f_317[0], &iVar0, 0, 0, 1, 1);
	}
}

char* func_363(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "script@proc@robberies@MURFREE@forestambush@warn_a";
		case 1:
			return "script@proc@robberies@MURFREE@forestambush@warn_b";
		case 2:
			return "script@proc@robberies@MURFREE@forestambush@warn_c";
		case 3:
			return "script@proc@robberies@MURFREE@forestambush@warn_d";
		case 4:
			return "script@proc@robberies@MURFREE@forestambush@violent_a";
		case 5:
			return "script@proc@robberies@MURFREE@forestambush@violent_b";
		case 6:
			return "script@proc@robberies@MURFREE@forestambush@violent_c";
		case 7:
			return "script@proc@robberies@MURFREE@forestambush@violent_d";
		case 8:
			return "script@proc@bridgerobberies@bridgetraphorseidle";
		default:
			break;
	}
	return "INVALID ANIM SCENE";
}

bool func_388(int iParam0)
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
	if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LASSO_TARGET(Global_35)))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 2f;
			break;
		case 2:
			fVar0 = 1.75f;
			break;
		case 3:
			fVar0 = 1.5f;
			break;
		case 4:
			fVar0 = 1.25f;
			break;
	}
	if (!__LIB_3__::func_381(&Local_274, 16))
	{
		fVar0 = (0.5f * fVar0);
	}
	if (__LIB_1__::func_285(&(Local_274.f_288[1 /*3*/]), fVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_398(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_593(&Local_274, iParam0) };
	return vVar0;
}

float func_399(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3f;
		case 3:
			return 3f;
		default:
			break;
	}
	return -1f;
}

int func_400(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar1], 0, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_403(int iParam0, int iParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		uParam2->f_4 = __LIB_0__::func_94(iParam0, Global_36, 1);
		if (uParam2->f_4 > 100f)
		{
			if (!__LIB_1__::func_472(iParam0, 120f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				__LIB_0__::func_490(&iParam0, 0);
				return;
			}
		}
		vVar0 = { func_595(&Local_274) };
		if (!uParam2->f_9)
		{
			if (__LIB_0__::func_163(iParam0, 713668775))
			{
				if (func_596(ENTITY::GET_ENTITY_COORDS(iParam0, false, true), vVar0) < 6f)
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, Global_35, 4, 256, -1f, -1, 0);
					uParam2->f_9 = 1;
				}
			}
		}
		switch (*uParam2)
		{
			case 0:
				if (!__LIB_0__::func_75(&(uParam2->f_1)))
				{
					__LIB_2__::func_462(&(uParam2->f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1.5f), 0);
				}
				if (__LIB_1__::func_285(&(uParam2->f_1), 1.5f))
				{
					PED::_0x58F7DB5BD8FA2288(iParam0);
					uParam2->f_6 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
					if (!uParam2->f_9)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar0, 2f, -1, 4f, 1, 40000f);
					}
					__LIB_0__::func_19(uParam2, 2, iParam3);
				}
				break;
			case 2:
				if ((__LIB_0__::func_163(iParam0, 518218985) || __LIB_0__::func_163(iParam0, 713668775)) || !__LIB_0__::func_163(iParam0, 1435919172))
				{
					__LIB_0__::func_19(uParam2, 4, iParam3);
				}
				else if (__LIB_0__::func_163(iParam0, 780511057))
				{
					if (uParam2->f_4 > (13f + 2f))
					{
						__LIB_1__::func_148(&(uParam2->f_1));
						TASK::CLEAR_PED_TASKS(iParam0, true, false);
						__LIB_0__::func_325(&iParam1);
						if (!uParam2->f_9)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar0, 2f, -1, 5f, 1, 40000f);
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, Global_35, 4, 256, -1f, -1, 0);
						}
						__LIB_0__::func_19(uParam2, 3, iParam3);
					}
				}
				break;
			case 3:
				if (__LIB_0__::func_265(&(uParam2->f_1)) > 3f || !__LIB_0__::func_163(iParam0, 1435919172))
				{
					__LIB_1__::func_148(&(uParam2->f_1));
					__LIB_0__::func_19(uParam2, 4, iParam3);
				}
				break;
			case 4:
				if (func_598(iParam0, uParam2))
				{
					__LIB_2__::func_73(iParam0, &iParam1, joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 3f, 0, 0, 0);
					if (!PED::IS_PED_IN_COMBAT(iParam0, 0))
					{
						TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
					}
					__LIB_1__::func_148(&(uParam2->f_1));
					uParam2->f_5 = MISC::GET_RANDOM_INT_IN_RANGE(4, 9);
					__LIB_0__::func_19(uParam2, 5, iParam3);
				}
				break;
			case 5:
				if (__LIB_0__::func_265(&(uParam2->f_1)) > BUILTIN::TO_FLOAT(uParam2->f_5))
				{
					__LIB_0__::func_19(uParam2, 2, iParam3);
				}
				break;
		}
	}
}

void func_443(int iParam0, int iParam1)
{
	iParam1->f_323[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2427.206f, 1047.766f, 89.42207f, 0f, 0f, -70.01382f, 35.77929f, 12.1547f, 11f, "volStayOut");
	if (__LIB_3__::func_381(iParam1, 4))
	{
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2420.713f, 1061.299f, 90.88255f, 0f, 0f, -164.5416f, 30f, 36.38013f, 11f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2427.778f, 1043.175f, 90.88255f, 0f, 0f, -159.5113f, 16.69165f, 35.84692f, 17f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2430.144f, 1035.213f, 91.064f, 0f, 0f, -158.2171f, 30f, 22.26933f, 23f, "volSlowest");
		iParam1->f_323[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2430.066f, 1033.579f, 89.90871f, 0f, 0f, -162.4702f, 15.8151f, 41.4572f, 13.2223f, "volTrigger");
		iParam1->f_323[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2422.906f, 1057.44f, 106.081f, 0f, 0f, 19.97916f, 17.64341f, 22.13989f, 60.77388f, "volPreTrigger");
		iParam1->f_323[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_323[6], 2324.195f, 998.213f, 106.081f, 0f, 0f, 17.82986f, 207.3883f, 153.2964f, 90.77387f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_323[6], 2532.133f, 1052.783f, 106.081f, 0f, 0f, 3.293728f, 205.504f, 153.2964f, 90.77387f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_323[6], 2403.291f, 1056.799f, 106.081f, 0f, 0f, 19.97917f, 26.12108f, 35.06133f, 90.77387f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_323[6], 2439.763f, 1068.091f, 106.081f, 0f, 0f, 18.33416f, 26.12108f, 35.06133f, 90.77387f);
	}
	else
	{
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2437.167f, 1026.155f, 90.883f, 0f, 0f, 16.836f, 30f, 36.38f, 11f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2428.499f, 1043.884f, 90.883f, 0f, 0f, 21.866f, 16.692f, 35.847f, 17f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2423.434f, 1057.974f, 91.064f, 0f, 0f, 23.16f, 30f, 22.269f, 23f, "volSlowest");
		iParam1->f_323[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2422.133f, 1059.808f, 89.909f, 0f, 0f, 19.95192f, 9.359425f, 38.32612f, 12.87681f, "volTrigger");
		iParam1->f_323[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2428.37f, 1042.409f, 106.081f, 0f, 0f, 19.97916f, 17.64341f, 22.13989f, 60.77388f, "volPreTrigger");
		iParam1->f_323[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_323[6], 2308.198f, 1033.371f, 97.44228f, 0f, 0f, 17.82986f, 225.0717f, 90.78615f, 90.77387f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_323[6], 2502.193f, 1145.754f, 106.081f, 0f, 0f, 22.23429f, 206.4126f, 153.2964f, 90.77387f);
	}
}

char* func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@AMBUSH_TRAP";
		default:
			break;
	}
	return "invalid";
}

void func_457(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	char* sVar0;
	sVar0 = func_363(uParam0, iParam1);
	if (bParam3)
	{
		uParam0->f_334[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sParam2, false, true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_334[iParam1], true, false))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_334[iParam1]);
}

bool func_458(var uParam0, int iParam1)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_334[iParam1]))
	{
		return false;
	}
	sVar0 = func_363(uParam0, iParam1);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_334[iParam1], true, false))
	{
		return false;
	}
	return true;
}

void func_459(int iParam0, int iParam1, char* sParam2)
{
	__LIB_2__::func_544(iParam0->f_334[iParam1], sParam2, func_363(iParam0, iParam1));
}

bool func_460(int iParam0, int iParam1, char* sParam2)
{
	if (__LIB_2__::func_545(iParam0->f_334[iParam1], sParam2, func_363(iParam0, iParam1)))
	{
		return true;
	}
	return false;
}

struct<4> func_466(int iParam0, int iParam1)
{
	return func_619(iParam0, iParam1);
}

void func_467(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!__LIB_2__::func_1(iParam3, 0, 1))
		{
			return;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_334[iParam1], sParam2, iParam3, 0);
}

char* func_509(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_FRT_INTRO";
		case 1:
			return "AMBUSH_FRT_V2_INTRO_KNOWN";
	}
	return "NULL STRING";
}

void func_510(var uParam0, int iParam1)
{
	__LIB_1__::func_336(&(uParam0->f_1), iParam1);
}

bool func_511()
{
	if (Local_274.f_346 == Global_35)
	{
		return false;
	}
	return true;
}

bool func_512()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_341(&(Local_274.f_121[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> func_514(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_9)
	{
		case 0:
			if (__LIB_3__::func_381(uParam0, 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_466(0, 1);
					case 1:
						return func_466(0, 3);
					case 2:
						return func_466(0, 5);
					case 3:
						return func_466(0, 7);
					case 4:
						return func_466(0, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_466(2, 1);
					case 1:
						return func_466(2, 3);
					case 2:
						return func_466(2, 5);
					case 3:
						return func_466(2, 7);
					case 4:
						return func_466(2, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_518(var uParam0)
{
	if (__LIB_3__::func_381(uParam0, 4))
	{
		return "PBL_ENTER_A";
	}
	return "PBL_ENTER_B";
}

void func_519(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_334[iParam1]))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_334[iParam1]);
}

void func_520(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	__LIB_2__::func_543(uParam0->f_334[iParam1], sParam2, bParam3, func_363(uParam0, iParam1));
}

struct<4> func_521(var uParam0)
{
	struct<4> Var0;
	switch (uParam0->f_10)
	{
		case 0:
			if (__LIB_3__::func_381(uParam0, 4))
			{
				return func_466(0, 11);
			}
			else
			{
				return func_466(2, 11);
			}
			break;
		case 1:
			if (__LIB_3__::func_381(uParam0, 4))
			{
				return func_466(0, 12);
			}
			else
			{
				return func_466(2, 12);
			}
			break;
	}
	return Var0;
}

void func_523()
{
	int iVar0;
	iVar0 = __LIB_2__::func_379(&Local_15, 0);
	if (Global_1935630.f_40 != iVar0)
	{
		if (__LIB_2__::func_1(iVar0, 0, 1))
		{
			FLOCK::_0xFF1E339CE40EAAAF(iVar0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, Global_35, 6, 0, 10f, 5000, 0);
		}
	}
}

int func_527(vector3 vParam0, vector3 vParam3, var uParam6, int iParam7, var uParam8)
{
	float fVar0;
	if (*uParam6 == 0)
	{
		*uParam6 = __LIB_0__::func_485();
	}
	fVar0 = (BUILTIN::TO_FLOAT((__LIB_0__::func_485() - *uParam6)) / BUILTIN::TO_FLOAT(iParam7));
	vParam3 = { __LIB_1__::func_367(vParam0, vParam3, fVar0) };
	return __LIB_8__::func_895(vParam3, uParam8);
}

void func_529()
{
	char* sVar0;
	sVar0 = func_518(&Local_274);
	if (__LIB_2__::func_1(Local_15[1], 0, 0))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[1], false, 0, false);
	}
	if (__LIB_2__::func_1(Local_15[2], 0, 0))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[2], false, 0, false);
	}
	switch (Local_274.f_10)
	{
		case 0:
			func_519(&Local_274, 2);
			func_519(&Local_274, 3);
			func_520(&Local_274, 2, sVar0, 1);
			func_520(&Local_274, 3, sVar0, 1);
			break;
		case 1:
			func_519(&Local_274, 6);
			func_519(&Local_274, 7);
			func_520(&Local_274, 6, sVar0, 1);
			func_520(&Local_274, 7, sVar0, 1);
			break;
	}
}

bool func_530(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	sVar0 = func_363(iParam0, iParam1);
	if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0->f_334[iParam1], sParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_531()
{
	int iVar0;
	vector3 vVar1;
	__LIB_1__::func_283(&(Local_274.f_288[0 /*3*/]), 0);
	if (__LIB_1__::func_285(&(Local_274.f_288[0 /*3*/]), 0.1f))
	{
		iVar0 = __LIB_2__::func_502(0);
		vVar1 = { func_678(&Local_274) };
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iVar0, vVar1, false))
		{
			return true;
		}
	}
	return false;
}

bool func_532()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	if (!__LIB_2__::func_1(Local_15.f_56, 0, 1))
	{
		Local_15.f_56 = Global_1935630.f_41;
	}
	if (!__LIB_2__::func_1(Local_15.f_56, 0, 1))
	{
		return false;
	}
	Var0 = { func_678(&Local_274) };
	iVar4 = __LIB_2__::func_502(0);
	Local_274.f_317[0] = PED::_0xEAF682A14F8E5F53(Local_274.f_321, Var0, Var0.f_3, 1, 1, 1, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_317[0], true);
	PED::REQUEST_PED_VISIBILITY_TRACKING(Local_274.f_317[0]);
	__LIB_2__::func_133(Local_274.f_317[0], func_126(0, 1), 0);
	__LIB_2__::func_132(__LIB_1__::func_509(Local_274.f_317[0]), Local_274.f_317[0]);
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_274.f_317[0], false, true);
	iVar5 = joaat("WEAPON_MELEE_KNIFE");
	__LIB_2__::func_530(&Local_15, Local_274.f_317[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
	__LIB_2__::func_272(Local_274.f_317[0], iVar5, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	return true;
}

void func_533(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_334[iParam1]))
	{
		return;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_334[iParam1], sParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_334[iParam1], sParam2, bParam3, false);
	}
}

bool func_534(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_334[iParam1]))
	{
		return false;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_334[iParam1], sParam2))
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_334[iParam1], sParam2);
	}
	return false;
}

char* func_535(var uParam0)
{
	return "FRT_V2_ILO_SURRENDER";
}

void func_538()
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_3__::func_381(&Local_274, 4))
	{
		sVar1 = "BOOL_A";
		sVar2 = "PBL_EXIT_A";
	}
	else
	{
		sVar1 = "BOOL_B";
		sVar2 = "PBL_EXIT_B";
	}
	iVar0 = 4;
	while (iVar0 <= 7)
	{
		func_520(&Local_274, iVar0, sVar2, 1);
		func_533(&Local_274, iVar0, sVar1, 1);
		iVar0++;
	}
}

int func_546(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_17__::func_773(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_546(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_17__::func_774(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_17__::func_775(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_17__::func_776(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_17__::func_775(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_17__::func_774(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

Vector3 func_563(var uParam0)
{
	if (__LIB_3__::func_381(uParam0, 4))
	{
		return func_709(0, 13);
	}
	else
	{
		return func_709(2, 13);
	}
	return 0f, 0f, 0f;
}

int func_573(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_573(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

bool func_578(var uParam0, int iParam1)
{
	return __LIB_9__::func_571(uParam0->f_334[iParam1], func_363(uParam0, iParam1));
}

float func_579(var uParam0, int iParam1)
{
	return func_734(uParam0->f_334[iParam1], func_363(uParam0, iParam1));
}

struct<4> func_593(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (iParam0->f_9)
	{
		case 0:
			if (__LIB_3__::func_381(iParam0, 4))
			{
				switch (iParam1)
				{
					case 2:
						return func_466(1, 0);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 2:
						return func_466(3, 0);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

Vector3 func_595(int iParam0)
{
	switch (iParam0->f_9)
	{
		case 0:
			if (__LIB_3__::func_381(iParam0, 4))
			{
				return func_709(1, 2);
			}
			else
			{
				return func_709(3, 2);
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_596(vector3 vParam0, vector3 vParam3)
{
	return ((MISC::ABSF((vParam3.x - vParam0.x)) + MISC::ABSF((vParam3.y - vParam0.y))) + MISC::ABSF((vParam3.z - vParam0.z)));
}

bool func_598(int iParam0, var uParam1)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(iParam0, uParam1->f_6, 1);
	if (__LIB_2__::func_262(Global_35, iParam0, &(Local_15.f_152)))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		return true;
	}
	if (fVar0 < 24f)
	{
		return false;
	}
	if (uParam1->f_4 < 13f)
	{
		return true;
	}
	return false;
}

struct<4> func_619(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_753(iParam0, iParam1) };
	Var0.f_3 = func_754(iParam0, iParam1);
	return Var0;
}

struct<4> func_678(int iParam0)
{
	struct<4> Var0;
	switch (iParam0->f_9)
	{
		case 0:
			if (__LIB_3__::func_381(iParam0, 4))
			{
				return func_466(0, 10);
			}
			else
			{
				return func_466(2, 10);
			}
			break;
	}
	return Var0;
}

Vector3 func_709(int iParam0, int iParam1)
{
	return func_753(iParam0, iParam1);
}

float func_734(int iParam0, char* sParam1)
{
	float fVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return -99.9f;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0);
	return fVar0;
}

Vector3 func_753(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2428.655f, 1023.296f, 86.7707f;
				case 1:
					return 2433.954f, 1029.058f, 86.1528f;
				case 2:
					return 2454.667f, 1041.567f, 89.0887f;
				case 3:
					return 2436.655f, 1038.195f, 87.811f;
				case 4:
					return 2415.605f, 1018.667f, 87.5449f;
				case 5:
					return 2424.555f, 1033f, 89.5145f;
				case 6:
					return 2430.267f, 1009.49f, 85.2855f;
				case 7:
					return 2432.712f, 1018.126f, 86.0789f;
				case 8:
					return 2461.219f, 1024.037f, 92.3391f;
				case 9:
					return 2448.085f, 1020.778f, 88.2337f;
				case 10:
					return 2430.617f, 1044.667f, 86.9972f;
				case 11:
					return 2429.745f, 1035.743f, 85.7694f;
				case 12:
					return 2429.708f, 1035.942f, 85.7858f;
				case 13:
					return 2431.619f, 1028.442f, 85.136f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2442.581f, 1032.066f, 87.7048f;
				case 1:
					return 2424.596f, 1032.974f, 89.5469f;
				case 2:
					return 2478.196f, 938.0998f, 74.4536f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2413.105f, 1064.629f, 85.8958f;
				case 1:
					return 2419.669f, 1065.511f, 86.1787f;
				case 2:
					return 2397.722f, 1051.504f, 86.0154f;
				case 3:
					return 2418.664f, 1052.642f, 89.7097f;
				case 4:
					return 2443.398f, 1065.07f, 89.2419f;
				case 5:
					return 2430.823f, 1054.145f, 88.0442f;
				case 6:
					return 2399.9f, 1062.745f, 84.5026f;
				case 7:
					return 2415.105f, 1069.756f, 86.594f;
				case 8:
					return 2444.168f, 1084.36f, 91.7742f;
				case 9:
					return 2425.667f, 1068.626f, 88.412f;
				case 10:
					return 2425.85f, 1044.858f, 86.8695f;
				case 11:
					return 2423.243f, 1055.765f, 86.8735f;
				case 12:
					return 2424.349f, 1053.992f, 86.9354f;
				case 13:
					return 2423.398f, 1063.259f, 86.4253f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2436.565f, 1044.373f, 89.775f;
				case 1:
					return 2419.424f, 1049.055f, 90.0836f;
				case 2:
					return 2365.845f, 1098.904f, 83.4957f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_754(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -85.68f;
				case 1:
					return 28.4465f;
				case 2:
					return 167.013f;
				case 3:
					return 79.0134f;
				case 4:
					return 327.013f;
				case 5:
					return 327.0134f;
				case 6:
					return 1.013f;
				case 7:
					return 7.0134f;
				case 8:
					return 132.562f;
				case 9:
					return 58.562f;
				case 10:
					return 188.2281f;
				case 11:
					return 205.6071f;
				case 12:
					return 207.6071f;
				case 13:
					return 195.1717f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 73.4203f;
				case 1:
					return 325.4203f;
				case 2:
					return 169.956f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -87.68f;
				case 1:
					return 206.4465f;
				case 2:
					return 241.013f;
				case 3:
					return 285.0134f;
				case 4:
					return 125.013f;
				case 5:
					return 87.0134f;
				case 6:
					return 281.013f;
				case 7:
					return 217.0134f;
				case 8:
					return -239.438f;
				case 9:
					return 158.562f;
				case 10:
					return 24.2281f;
				case 11:
					return -338.3929f;
				case 12:
					return -336.3929f;
				case 13:
					return 7.1717f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 91.4203f;
				case 1:
					return 265.4203f;
				case 2:
					return 6.5446f;
			}
			break;
	}
	return 0f;
}

