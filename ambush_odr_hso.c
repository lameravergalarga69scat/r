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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	struct<107> Local_33 = { 5, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2 } ;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 570;
	var uLocal_143 = 1065353216;
	var uLocal_144 = -1082130432;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 2;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 570;
	var uLocal_160 = 1065353216;
	var uLocal_161 = -1082130432;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 2;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	struct<248> Local_179 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 1065353216;
	var uLocal_444 = 1119092736;
	var uLocal_445 = 1092616192;
	var uLocal_446 = 1085276160;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	struct<25> Local_450 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	vector3 vLocal_487[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_512 = 0;
	int iLocal_513 = 0;
	var uLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517[2] = { 0, 0 };
	var uLocal_520 = 2;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int iLocal_523[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_533 = 0;
	var uLocal_534[5] = { 0, 0, 0, 0, 0 };
	vector3 vLocal_540 = { 0f, 0f, 0f };
	vector3 vLocal_543 = { 0f, 0f, 0f };
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	bool bLocal_549 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_513 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_549 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_549, 965, 0);
		if (bLocal_549)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_179.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					__LIB_2__::func_146(&Local_179, 13);
				}
			}
			if (__LIB_0__::func_58())
			{
				__LIB_0__::func_11();
			}
			func_7();
			switch (Local_179.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						__LIB_2__::func_146(&Local_179, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (__LIB_0__::func_58())
						{
							__LIB_2__::func_146(&Local_179, 2);
						}
						else if (Local_179.f_217 > 0)
						{
							__LIB_2__::func_146(&Local_179, 3);
						}
						else if (Local_179.f_218 > 0)
						{
							__LIB_2__::func_146(&Local_179, 4);
						}
						else if (Local_179.f_216 > 0)
						{
							__LIB_2__::func_146(&Local_179, 5);
						}
						else
						{
							__LIB_2__::func_146(&Local_179, 6);
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_58())
					{
						__LIB_0__::func_11();
					}
					__LIB_2__::func_146(&Local_179, 3);
					break;
				case 3:
					if (func_12())
					{
						if (__LIB_0__::func_0())
						{
							__LIB_2__::func_146(&Local_179, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						__LIB_2__::func_146(&Local_179, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						__LIB_2__::func_146(&Local_179, 6);
					}
					break;
				case 6:
					if (__LIB_0__::func_0())
					{
						__LIB_2__::func_146(&Local_179, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[Local_179.f_151 /*4*/].f_2 = (1 + Global_40.f_9632[Local_179.f_151 /*4*/].f_2);
						if (__LIB_0__::func_65(&Global_1393447, 65536))
						{
							__LIB_0__::func_380(&Global_1393447, 65536);
						}
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_2__::func_146(&Local_179, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (Local_179.f_20 > (100f - 10f))
						{
							func_21();
							__LIB_2__::func_146(&Local_179, 9);
						}
						else
						{
							__LIB_2__::func_147(&Local_179, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						Local_179.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						Local_179.f_226 = __LIB_0__::func_36();
						if (Global_40.f_9632.f_194 != Local_179.f_151)
						{
							switch (Local_179.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									__LIB_2__::func_442(&Local_179, 1);
									break;
							}
						}
						func_26();
						__LIB_2__::func_267(&Local_179);
						Local_179.f_21 = Local_179.f_20;
						__LIB_2__::func_282(&Local_179, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						__LIB_2__::func_147(&Local_179, 16384);
						__LIB_2__::func_146(&Local_179, 10);
					}
					break;
				case 10:
					func_29();
					if (__LIB_2__::func_4(&Local_179, 32768) || func_31())
					{
						switch (Local_179.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								__LIB_2__::func_548(&Local_179, 1);
								break;
						}
						__LIB_2__::func_283(&Local_179, 1);
						__LIB_0__::func_747(120, 0, 1);
						__LIB_2__::func_304(1, -1, 0, 0, 0);
						__LIB_2__::func_235(&Local_179);
						__LIB_2__::func_146(&Local_179, 11);
					}
					break;
				case 11:
					__LIB_2__::func_418(&Local_179);
					func_38();
					if (__LIB_2__::func_376(&Local_179))
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_1__::func_283(&(Local_179.f_244), 0);
						__LIB_2__::func_146(&Local_179, 12);
					}
					break;
				case 12:
					__LIB_2__::func_333(&Local_179);
					func_38();
					if (func_42())
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_2__::func_146(&Local_179, 13);
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
		if (__LIB_2__::func_4(&Local_179, 4))
		{
			__LIB_2__::func_6(0);
			__LIB_2__::func_149(&Local_179, 4);
		}
	}
	fVar0 = 8f;
	if (Local_179.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!__LIB_0__::func_0() && !__LIB_1__::func_285(&(Local_179.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_2__::func_7())
	{
		__LIB_1__::func_283(&(Local_179.f_250), 0);
		return;
	}
	if (__LIB_1__::func_285(&(Local_179.f_250), fVar0))
	{
	}
	__LIB_2__::func_418(&Local_179);
	func_49();
	__LIB_2__::func_310(&Local_179, 0);
	func_51();
	__LIB_2__::func_317(&Local_179);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_282(&Local_179, 1);
	__LIB_2__::func_273(&Local_179, 0);
	if (Local_179.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_179.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_179.f_237))
	{
		__LIB_2__::func_371(&Local_179);
		__LIB_1__::func_544(Local_179.f_237);
	}
	__LIB_2__::func_283(&Local_179, 1);
	if (Local_179.f_95 >= 9 && Local_179.f_95 < 11)
	{
		if (__LIB_2__::func_8(Local_179.f_151))
		{
		}
		else if (__LIB_2__::func_172(Local_179.f_151, 1) || __LIB_2__::func_245(Local_179.f_151, 1))
		{
			__LIB_0__::func_47(&Global_1393447, 2048);
			if (!__LIB_0__::func_75(&(Local_179.f_244)))
			{
				__LIB_0__::func_747(120, 0, 1);
			}
		}
	}
	if (__LIB_2__::func_1(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (__LIB_2__::func_1(Local_179.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_179.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_2__::func_9(Local_179.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	__LIB_2__::func_10(Local_179.f_151);
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
	if (Local_179.f_95 <= 9 && Local_179.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_205(&Local_179))
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
	if (Local_179.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_179.f_95 < 10 && Local_179.f_96 & 1048576 == 0)
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
			if (!__LIB_0__::func_86(Local_179.f_209))
			{
				if (Local_179.f_20 > 207f)
				{
					if (Local_179.f_223 == 0)
					{
						Local_179.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_179.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_179.f_223 = 0;
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
			while (iVar3 < Local_179.f_215)
			{
				if (Local_179.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(Local_179[iVar3], 0, 1))
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
	if (__LIB_0__::func_86(Local_179.f_209))
	{
		__LIB_2__::func_432(&(Local_179.f_152));
		__LIB_2__::func_433(&(Local_179.f_152));
		__LIB_2__::func_104(&(Local_179.f_152), 0);
		__LIB_2__::func_105(&(Local_179.f_152), 1);
		__LIB_1__::func_975(&(Local_179.f_152), 6f);
		Local_179.f_209 = { Param0 };
		Local_179.f_151 = Param0.f_3;
		Local_179.f_221 = Param0.f_4;
		Local_179.f_222 = __LIB_2__::func_12(Local_179.f_151);
		if (Param0.f_7)
		{
			__LIB_2__::func_147(&Local_179, 2);
		}
		if (!__LIB_2__::func_13(Local_179.f_151))
		{
			__LIB_2__::func_146(&Local_179, 12);
			return false;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { __LIB_2__::func_291(Local_179.f_151, 0, Local_179.f_221) };
				vVar1 = { __LIB_2__::func_291(Local_179.f_151, 1, Local_179.f_221) };
				if (__LIB_0__::func_58())
				{
					if (__LIB_2__::func_14(&Local_179))
					{
						__LIB_2__::func_147(&Local_179, 1);
					}
				}
				if (!Local_179.f_227)
				{
					if (__LIB_2__::func_15(Local_179.f_181, 0))
					{
						Local_179.f_227 = __LIB_2__::func_284(Local_179.f_181, -1);
					}
				}
				if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_2__::func_146(&Local_179, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						__LIB_2__::func_377(&Local_179);
						__LIB_2__::func_318(&Local_179, 8672);
					}
					PED::_0xED9582B3DA8F02B4((((Local_179.f_215 + Local_179.f_216) + Local_179.f_217 * 2) + Local_179.f_219) + 1);
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
	while (iVar1 < Local_179.f_216)
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
		while (iVar1 < Local_179.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_179.f_66[iVar1]))
			{
				if (iVar2 == __LIB_2__::func_16())
				{
				}
				else
				{
					Local_179.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!PED::_0x610438375E5D1801(Local_179.f_66[iVar1]))
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
				while (iVar1 < Local_179.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_179.f_31[iVar1]))
					{
						if (iVar2 == __LIB_2__::func_16())
						{
						}
						else
						{
							Local_179.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!PED::_0x610438375E5D1801(Local_179.f_31[iVar1]))
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
	if (Local_179.f_217 <= 0)
	{
		return true;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_98(iVar0);
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
		Local_179.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_179.f_49[iVar0], 0f);
		ENTITY::SET_ENTITY_VISIBLE(Local_179.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(Local_179.f_49[iVar0]);
		__LIB_2__::func_19(Local_179.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_179.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_179.f_49[iVar0], true, false);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_217)
	{
		Local_179.f_220 = 0;
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
	if (Local_179.f_218 <= 0)
	{
		return true;
	}
	iVar0 = Local_179.f_220;
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
		Local_179.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_179.f_52[iVar0], 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(Local_179.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_179.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_179.f_52[iVar0], true, false);
		}
		if (__LIB_0__::func_0(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_179.f_52[iVar0], 0);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_218)
	{
		Local_179.f_220 = 0;
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
	var uVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	if (Local_179.f_216 <= 0)
	{
		return true;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) };
	fVar5 = func_109(iVar0);
	uVar6 = func_93(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_179.f_40[iVar0]))
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
				Local_179.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_179.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(Local_179.f_40[iVar0], func_93(iVar0));
				PED::_UPDATE_PED_VARIATION(Local_179.f_40[iVar0], false, true, true, true, false);
			}
		}
	}
	if (__LIB_2__::func_1(Local_179.f_40[iVar0], 0, 1))
	{
		__LIB_1__::func_991(Local_179.f_40[iVar0], 0);
		if (__LIB_2__::func_4(&Local_179, 1))
		{
			iVar7 = __LIB_1__::func_976(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_179.f_84[iVar0]))
				{
					Local_179.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_LANTERN09X"), vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_179.f_84[iVar0], Local_179.f_40[iVar0], iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		__LIB_2__::func_20(&(Local_179.f_152), Local_179.f_40[iVar0], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_179.f_40[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(Local_179.f_40[iVar0], 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_179.f_40[iVar0]);
		ENTITY::SET_ENTITY_VISIBLE(Local_179.f_40[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_179.f_40[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_179.f_40[iVar0], true, false);
		}
		Local_179.f_220++;
		if (Local_179.f_220 >= Local_179.f_216)
		{
			Local_179.f_220 = 0;
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
	if (Local_179.f_215 <= 0)
	{
		return true;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) };
	fVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = __LIB_2__::func_21(Local_179.f_181);
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
			Local_179[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			Local_179[iVar0] = PED::_0xEAF682A14F8E5F53(Local_179.f_31[iVar0], vVar2, fVar5, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
			{
				Local_179[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_179[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(Local_179[iVar0], 277, false);
			PED::SET_PED_CONFIG_FLAG(Local_179[iVar0], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_179[iVar0], 233, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_179[iVar0]);
			__LIB_2__::func_22(&(Local_179.f_152), Local_179[iVar0]);
			__LIB_2__::func_23(&(Local_179.f_152), Local_179[iVar0], 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_179[iVar0], false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_179[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_179[iVar0], true, false);
			}
			if (Local_179.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_179[iVar0], joaat("REL_PLAYER_DISLIKE"));
			}
			__LIB_2__::func_24(Local_179[iVar0], 1);
			PED::_0xBD75500141E4725C(Local_179[iVar0], iVar7);
			DECORATOR::DECOR_SET_BOOL(Local_179[iVar0], "bBeatPed", true);
			__LIB_2__::func_132(__LIB_1__::func_509(Local_179[iVar0]), Local_179[iVar0]);
		}
		else
		{
			Local_179.f_220 = (Local_179.f_220 - 1);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_215)
	{
		Local_179.f_220 = 0;
		return true;
	}
	return false;
}

bool func_20()
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_1(Local_179[func_125()], 0, 1))
	{
		__LIB_2__::func_597(&(Local_179[func_125()]), &(Local_179.f_49[0]), -1, 1);
		__LIB_2__::func_314(&Local_179, func_125(), -1, -1);
	}
	if (__LIB_2__::func_1(Local_179[func_128()], 0, 1))
	{
		__LIB_2__::func_597(&(Local_179[func_128()]), &(Local_179.f_49[0]), 0, 1);
		if (__LIB_0__::func_51(&uLocal_533, 16384))
		{
			__LIB_2__::func_272(Local_179[func_128()], joaat("GROUP_REVOLVER"), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		else
		{
			__LIB_2__::func_272(Local_179[func_128()], joaat("GROUP_REPEATER"), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		__LIB_2__::func_314(&Local_179, func_128(), -1, -1);
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (__LIB_2__::func_1(Local_179[iVar0], 0, 1))
		{
			__LIB_2__::func_133(Local_179[iVar0], func_131(uLocal_533, iLocal_515, iVar0), 0);
		}
		iVar0++;
	}
	iVar1 = 2;
	while (iVar1 <= 2)
	{
		if (__LIB_2__::func_1(Local_179[iVar1], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_179[iVar1], true, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar1], 98, true);
			__LIB_2__::func_314(&Local_179, iVar1, -1, -1);
		}
		iVar1++;
	}
	if (__LIB_0__::func_51(&uLocal_533, 16384))
	{
		iVar1 = 3;
		while (iVar1 <= 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar1]))
			{
				PED::DELETE_PED(&(Local_179[iVar1]));
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 3;
		while (iVar1 <= 4)
		{
			if (__LIB_2__::func_1(Local_179[iVar1], 0, 1))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_179[iVar1], true, 0, true);
				__LIB_2__::func_272(Local_179[iVar1], joaat("GROUP_REPEATER"), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar1], 98, true);
				__LIB_2__::func_314(&Local_179, iVar1, -1, -1);
			}
			iVar1++;
		}
	}
	func_133();
	return true;
}

void func_21()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_179[iVar0]);
			if (!__LIB_2__::func_25(&Local_179, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_179[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_40[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_179.f_40[iVar0]);
			if (!__LIB_2__::func_26(&Local_179, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_179.f_40[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_179.f_49[iVar0]);
			ENTITY::SET_ENTITY_VISIBLE(Local_179.f_49[iVar0], true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_52[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_179.f_52[iVar0], true);
		}
		iVar0++;
	}
}

bool func_23()
{
	vector3 vVar0;
	__LIB_2__::func_714(&uLocal_30, 30f);
	func_137();
	if (iLocal_447 < 4)
	{
		if (iLocal_449 <= 4 && iLocal_447 > 0)
		{
			if (__LIB_1__::func_285(&(vLocal_487[5 /*3*/]), 12f) && !__LIB_0__::func_51(&uLocal_533, 2048))
			{
				__LIB_0__::func_7(&uLocal_533, 8);
			}
		}
		if (func_139())
		{
			bLocal_26 = true;
			if (func_140())
			{
				__LIB_0__::func_7(&uLocal_533, 512);
				__LIB_0__::func_8(&uLocal_533, 128);
				iLocal_447 = 4;
			}
		}
	}
	if (iLocal_447 >= 1)
	{
		if (!__LIB_0__::func_51(&uLocal_533, 16))
		{
			func_142();
		}
	}
	func_143(&Local_33);
	if (__LIB_0__::func_51(&uLocal_533, 67108864) && !__LIB_0__::func_51(&uLocal_533, 8))
	{
		if (__LIB_2__::func_227(0, 1, Global_35, 1))
		{
			__LIB_0__::func_7(&uLocal_533, 8);
		}
	}
	if (!bLocal_27)
	{
		if (__LIB_2__::func_631(&(Local_179.f_152), Local_179.f_49[0], 0))
		{
			bLocal_27 = true;
		}
	}
	switch (iLocal_447)
	{
		case 0:
			vVar0 = { __LIB_2__::func_114(Global_35, 2f) };
			if (func_147(&vVar0))
			{
				func_148();
				func_149(1);
				__LIB_1__::func_283(&(vLocal_487[3 /*3*/]), 0);
				__LIB_1__::func_148(&(vLocal_487[5 /*3*/]));
				iLocal_447 = 1;
			}
			else if (func_151())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_179, 16);
					__LIB_2__::func_146(&Local_179, 13);
				}
			}
			break;
		case 1:
			func_153(0);
			if (__LIB_1__::func_285(&(vLocal_487[3 /*3*/]), 0.5f))
			{
				func_154();
			}
			func_155();
			func_149(1);
			if (func_156() && __LIB_2__::func_227(0f, 1, Local_179[0], 1))
			{
				if (!__LIB_0__::func_51(&uLocal_533, 256))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_179[func_128()], Global_35, -1, false, 1);
					if (__LIB_0__::func_51(&uLocal_533, 16384))
					{
						if (__LIB_0__::func_51(&uLocal_533, 524288))
						{
							func_157(Local_179[0], Global_35, "CALLOUT_EASY_PICKINGS_MALE", 1, 100f, -500314840);
							__LIB_2__::func_315(1891783641, Local_179[1], 1);
						}
						else
						{
							func_157(Local_179[0], Global_35, "CALLOUT_EASY_PICKINGS_MALE", 2, 100f, -500314840);
							__LIB_2__::func_315(1891783641, Local_179[1], 1);
						}
					}
					else
					{
						func_157(Local_179[func_128()], Local_179[func_125()], func_159(iLocal_515), 0, 100f, -500314840);
						__LIB_2__::func_315(1891783641, Local_179[1], 1);
					}
					__LIB_0__::func_7(&uLocal_533, 256);
				}
				__LIB_1__::func_148(&(vLocal_487[0 /*3*/]));
				iLocal_447 = 2;
			}
			break;
		case 2:
			func_154();
			func_155();
			if (func_149(0))
			{
				iLocal_447 = 3;
			}
			break;
		case 3:
			func_160();
			__LIB_1__::func_148(&(vLocal_487[1 /*3*/]));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_0__::func_8(&uLocal_533, 128);
			iLocal_447 = 4;
			break;
		case 4:
			ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], true);
			__LIB_0__::func_7(&uLocal_533, 268435456);
			__LIB_2__::func_147(&Local_179, 8388608);
			return true;
	}
	return false;
}

void func_26()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_179.f_216)
	{
		if (__LIB_2__::func_1(Local_179.f_40[iVar1], 0, 0))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iVar1], false);
			if (__LIB_2__::func_1(iVar0, 0, 0))
			{
				PED::_0x931B241409216C1F(iVar0, Local_179.f_40[iVar1], 0);
				__LIB_2__::func_28(&Local_179, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_29()
{
	int iVar0;
	__LIB_1__::func_283(&(Local_179.f_247), 0);
	if (__LIB_1__::func_285(&(Local_179.f_247), 5f))
	{
		__LIB_2__::func_310(&Local_179, 0);
	}
	if (__LIB_1__::func_285(&(Local_179.f_247), 3f))
	{
		__LIB_2__::func_600(&Local_179);
	}
	func_38();
	if (!__LIB_2__::func_4(&Local_179, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_179, 4194304))
		{
			if (Local_179.f_181 == 2)
			{
				__LIB_2__::func_260(&Local_179, 1.1f);
			}
			else
			{
				__LIB_2__::func_260(&Local_179, 1.2f);
			}
			__LIB_2__::func_147(&Local_179, 4194304);
		}
		if (__LIB_2__::func_4(&Local_179, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_179.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_179.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_260(&Local_179, 1f);
				__LIB_2__::func_147(&Local_179, 8388608);
			}
		}
	}
}

bool func_31()
{
	int iVar0;
	func_137();
	__LIB_2__::func_647(&Local_450);
	func_174();
	if (__LIB_1__::func_285(&(vLocal_487[1 /*3*/]), 1f))
	{
		if (__LIB_2__::func_1(Local_179[func_128()], 0, 1))
		{
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_179[func_128()], false, 15f);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (!iLocal_20[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
			{
				if (__LIB_2__::func_398(Local_179[iVar0]))
				{
					__LIB_2__::func_603(&(Local_179[iVar0]), &(Local_33[iVar0 /*21*/]), &(Local_33.f_106), 1, 1);
					iLocal_20[iVar0] = 1;
				}
			}
			else
			{
				iLocal_20[iVar0] = 1;
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_51(&uLocal_533, 32))
	{
	}
	if (iLocal_448 > 0)
	{
		if (!__LIB_0__::func_51(&uLocal_533, 4194304))
		{
			if ((func_177() || __LIB_0__::func_51(&uLocal_533, 32)) || Local_179.f_20 > 40f)
			{
				iVar0 = 0;
				while (iVar0 < Local_179.f_215)
				{
					if (__LIB_2__::func_1(Local_179[iVar0], 0, 0))
					{
						__LIB_1__::func_733(Local_179[iVar0]);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar0], 98, false);
					}
					iVar0++;
				}
				__LIB_0__::func_7(&uLocal_533, 4194304);
			}
		}
	}
	func_179(0);
	switch (iLocal_448)
	{
		case 0:
			__LIB_2__::func_632(&Local_179, 0);
			__LIB_2__::func_298();
			__LIB_2__::func_691(&uLocal_30, Local_179[1], 0, 30f);
			if (!ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
			{
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(Local_179.f_49[0], Global_35, 0);
				if (ENTITY::_IS_ENTITY_FROZEN(Local_179.f_49[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], false);
				}
			}
			func_183();
			if (__LIB_0__::func_51(&uLocal_533, 16384))
			{
				if (func_157(Local_179[0], Global_35, "CALLOUT_JUST_KILL_EM_MALE", 0, -1073741824 /* Float: -2f */, -500314840) || __LIB_1__::func_285(&(vLocal_487[1 /*3*/]), 4f))
				{
					iLocal_448 = 1;
				}
			}
			else
			{
				iLocal_448 = 1;
			}
			break;
		case 1:
			if (func_184())
			{
				iLocal_448 = 2;
			}
			break;
		case 2:
			if (func_186(&Local_179, &iLocal_513, &(Local_179.f_241), func_185(uLocal_533, iLocal_515, iLocal_513), 1092616192 /* Float: 10f */))
			{
				iLocal_448 = 3;
			}
			break;
		case 3:
			if (ENTITY::_IS_ENTITY_FROZEN(Local_179.f_49[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], false);
			}
			if (__LIB_2__::func_393(&uLocal_15))
			{
				func_179(1);
				return true;
			}
			else if (__LIB_2__::func_648(&uLocal_15, &Local_179, 0, Local_179.f_215, 2f, 0))
			{
				func_189();
				func_179(1);
				return true;
			}
			break;
	}
	return false;
}

void func_38()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (!__LIB_2__::func_26(&Local_179, iVar0, 16))
		{
			if (__LIB_2__::func_1(Local_179.f_40[iVar0], 0, 0))
			{
				if (func_203(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_179.f_40[iVar0], Local_179.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(Local_179.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_179.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_179.f_40[iVar0]));
					__LIB_2__::func_28(&Local_179, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

bool func_42()
{
	if (__LIB_1__::func_285(&(Local_179.f_244), 45f) && __LIB_0__::func_0())
	{
		__LIB_2__::func_371(&Local_179);
		__LIB_0__::func_37(&(Local_179.f_244));
	}
	return false;
}

void func_49()
{
	int iVar0;
	__LIB_2__::func_503(&Local_179, 1);
	func_179(1);
	iVar0 = 0;
	while (iVar0 < iLocal_517)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_517[iVar0]))
		{
			CAM::DESTROY_CAM(iLocal_517[iVar0], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_523)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_523[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_523[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			__LIB_2__::func_603(&(Local_179[iVar0]), &(Local_33[iVar0 /*21*/]), &(Local_33.f_106), 1, 1);
		}
		iVar0++;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(Local_179.f_49[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_17__::func_771(&uLocal_30, &Local_179);
	__LIB_2__::func_298();
	MAP::DISPLAY_RADAR(true);
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
	while (iVar0 < Local_179.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			if (func_212(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(Local_179[iVar0]);
				PED::DELETE_PED(&(Local_179[iVar0]));
			}
			else
			{
				if (__LIB_2__::func_1(Local_179[iVar0], 0, 0))
				{
					if (!__LIB_2__::func_4(&Local_179, 16384))
					{
						__LIB_2__::func_32(&(Local_179[iVar0]));
					}
					__LIB_2__::func_24(Local_179[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar0], 5, true);
					PED::_0x24C82EF607105FAA(Local_179[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(Local_179[iVar0], 993130593);
					if (__LIB_2__::func_178(Local_179[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_179[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_179[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(Local_179[iVar0], Global_35) || PED::IS_PED_FLEEING(Local_179[iVar0])) || __LIB_2__::func_25(&Local_179, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(Local_179[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(Local_179[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_179[iVar0], Global_35, 4, iVar1, -1082130432 /* Float: -1f */, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(Local_179[iVar0], true);
					}
					else if ((Local_179.f_215 == Local_179.f_216 && __LIB_2__::func_1(Local_179.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_179[iVar0], true))
					{
						iVar11 = Local_179.f_40[iVar0];
						PED::_0x931B241409216C1F(Local_179.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, Local_179.f_40[iVar0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
						if (!__LIB_0__::func_86(Local_179.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_179.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						__LIB_1__::func_474(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(Local_179[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_179[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(Local_179[iVar0], true)))
						{
							if (PED::_GET_SEAT_PED_IS_USING(Local_179[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(Local_179[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!__LIB_0__::func_86(Local_179.f_118[iVar0 /*4*/].f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, Local_179.f_118[iVar0 /*4*/].f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								__LIB_1__::func_474(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(Local_179[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!__LIB_0__::func_86(Local_179.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_179.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							__LIB_1__::func_474(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(Local_179[iVar0], true);
						}
						else
						{
							if (func_216(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
								__LIB_1__::func_474(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(Local_179[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								__LIB_1__::func_474(Local_179[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(Local_179[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_179[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(Local_179[iVar0]), -1) == Local_179[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_179[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(Local_179[iVar0]) && !PED::IS_PED_IN_COMBAT(Local_179[iVar0], Global_35)) && !__LIB_2__::func_25(&Local_179, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(Local_179[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_179[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_40[iVar0]))
		{
			if (func_217(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_179.f_84[iVar0]));
				}
				PED::DELETE_PED(&(Local_179.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_84[iVar0]))
				{
					if (func_218(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(Local_179.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(Local_179.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_179.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_179.f_84[iVar0]));
					}
				}
				if (__LIB_2__::func_1(Local_179.f_40[iVar0], 0, 1))
				{
					if (__LIB_0__::func_75(&(Local_179.f_247)))
					{
						if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iVar0], false), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_179.f_40[iVar0], Local_179.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_179.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(Local_179.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iVar0], true)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_179.f_40[iVar0], Local_179.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(Local_179.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_179.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[iVar0]))
		{
			if (func_219(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_179.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_179.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == Local_179.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_179.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_52[iVar0]))
		{
			if (__LIB_2__::func_307(&Local_179, Local_179.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_179.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_179.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

bool func_71()
{
	int iVar0;
	if (!__LIB_2__::func_4(&Local_179, 16384))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 105:
			if (__LIB_2__::func_443() && func_240())
			{
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_443() && func_240())
			{
				return true;
			}
			break;
	}
	if (func_240())
	{
		if (Local_179.f_151 != 43)
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
						__LIB_1__::func_283(&(Local_179.f_253), 0);
						if (__LIB_1__::func_285(&(Local_179.f_253), 0.5f))
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
	if (Local_179.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_179.f_21 < (func_73() - 10f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_179.f_20 > *uParam0)
	{
		return true;
	}
	switch (Local_179.f_151)
	{
		case 29:
		case 30:
			if (Local_179.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!__LIB_2__::func_4(&Local_179, 512) && !__LIB_2__::func_4(&Local_179, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_73()
{
	if (iLocal_448 > 0)
	{
		return (140f * 0.75f);
	}
	return 140f;
}

void func_74()
{
	if (Local_179.f_95 <= 8)
	{
		Local_179.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
		if (Local_179.f_21 == 0f || Local_179.f_21 > Local_179.f_20)
		{
			Local_179.f_21 = Local_179.f_20;
		}
		return;
	}
	if (Local_179.f_18 < 0)
	{
		Local_179.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
		if (Local_179.f_21 == 0f || Local_179.f_21 > Local_179.f_20)
		{
			Local_179.f_21 = Local_179.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_179[Local_179.f_18]))
	{
		Local_179.f_9[Local_179.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Local_179[Local_179.f_18], false, true));
	}
	Local_179.f_18++;
	if (Local_179.f_18 >= Local_179.f_215)
	{
		Local_179.f_18 = -1;
	}
}

void func_75()
{
	int iVar0;
	if (Local_179.f_19 < Local_179.f_215)
	{
		iVar0 = Local_179.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_179[iVar0]))
		{
			if (!__LIB_2__::func_25(&Local_179, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_179[iVar0], 200f, -1082130432 /* Float: -1f */, Local_179.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_152(&Local_179, iVar0, 8);
				}
			}
		}
	}
	else if (Local_179.f_19 < (Local_179.f_215 + Local_179.f_216))
	{
		iVar0 = (Local_179.f_19 - Local_179.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&Local_179, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_179.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&Local_179, iVar0, 8);
				}
			}
		}
	}
	else if (Local_179.f_19 < ((Local_179.f_215 + Local_179.f_216) + Local_179.f_217))
	{
		iVar0 = ((Local_179.f_19 - Local_179.f_215) - Local_179.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[iVar0]))
		{
			if (!__LIB_2__::func_39(&Local_179, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_179.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_179.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(Local_179.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_153(&Local_179, iVar0, 8);
					}
				}
			}
		}
	}
	Local_179.f_19++;
	if (Local_179.f_19 >= ((Local_179.f_215 + Local_179.f_216) + Local_179.f_217))
	{
		Local_179.f_19 = 0;
	}
}

bool func_83()
{
	bool bVar0;
	switch (Local_179.f_221)
	{
		case 1:
			__LIB_0__::func_7(&uLocal_533, 64);
			__LIB_2__::func_147(&Local_179, 16);
			return true;
		default:
			break;
	}
	switch (Local_179.f_151)
	{
		case 38:
			__LIB_0__::func_7(&uLocal_533, 16384);
			__LIB_0__::func_7(&uLocal_533, 524288);
			break;
		case 4:
			__LIB_0__::func_7(&uLocal_533, 16384);
			if (__LIB_2__::func_633(0) || __LIB_2__::func_4(&Local_179, 2))
			{
				__LIB_0__::func_7(&uLocal_533, 524288);
			}
			break;
	}
	Local_179.f_215 = 5;
	Local_179.f_217 = 1;
	Local_179.f_218 = 0;
	if (__LIB_0__::func_51(&uLocal_533, 16384))
	{
		Local_179.f_216 = 1;
	}
	else
	{
		Local_179.f_216 = 0;
	}
	if (__LIB_0__::func_51(&uLocal_533, 524288))
	{
		Local_179.f_181 = -1;
	}
	else
	{
		Local_179.f_181 = 0;
	}
	iLocal_515 = (Local_179.f_222 % 2);
	if (!__LIB_0__::func_51(&uLocal_533, 64))
	{
		bVar0 = func_259();
	}
	else
	{
		bVar0 = func_260();
	}
	if (bVar0)
	{
		func_261(&Local_179, &Local_33);
		__LIB_2__::func_147(&Local_179, 131072);
		func_262();
		__LIB_2__::func_105(&(Local_179.f_152), 1);
		__LIB_2__::func_345(&(Local_179.f_152), 1);
		__LIB_2__::func_634(&(Local_179.f_152), 1);
		__LIB_2__::func_52(&(Local_179.f_152), 1);
		__LIB_2__::func_111(&(Local_179.f_152), 1);
		Local_179.f_212 = { func_266(uLocal_533, 0) };
		return true;
	}
	__LIB_2__::func_146(&Local_179, 12);
	return false;
}

int func_92(int iParam0)
{
	if (Local_179.f_57[iParam0] == 0)
	{
		if (!__LIB_2__::func_15(Local_179.f_181, 1))
		{
			Local_179.f_57[iParam0] = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
		}
		else
		{
			Local_179.f_57[iParam0] = __LIB_2__::func_185(Local_179.f_181, 0, 1);
		}
	}
	return Local_179.f_57[iParam0];
}

int func_93(int iParam0)
{
	if (Local_179.f_75[iParam0] == 0)
	{
		if (Local_179.f_181 != -1 && Local_179.f_181 != 1)
		{
			Local_179.f_75[iParam0] = __LIB_2__::func_186(Local_179.f_181, iParam0, 0);
		}
		else
		{
			Local_179.f_75[iParam0] = __LIB_2__::func_16();
		}
		if (Local_179.f_75[iParam0] == joaat("META_HORSE_SADDLE_ONLY"))
		{
			Local_179.f_75[iParam0] = __LIB_2__::func_16();
		}
	}
	return Local_179.f_75[iParam0];
}

bool func_95()
{
	char* sVar0;
	int iVar1;
	sVar0 = func_276(uLocal_533);
	STREAMING::REQUEST_MODEL(func_97(0), false);
	PROPSET::_REQUEST_PROPSET(joaat("PG_RE_ODRISCOLLWAGON01X"));
	STREAMING::REQUEST_MODEL(func_98(0), false);
	TASK::REQUEST_WAYPOINT_RECORDING(sVar0);
	iVar1 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(func_97(0)) || !STREAMING::HAS_MODEL_LOADED(func_98(0)))
	{
		iVar1 = 0;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED(joaat("PG_RE_ODRISCOLLWAGON01X")))
	{
		iVar1 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar1 = 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar0))
	{
		iVar1 = 0;
	}
	return iVar1;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_277(iVar0);
}

int func_97(int iParam0)
{
	if (__LIB_2__::func_633(0) || __LIB_0__::func_51(&uLocal_533, 524288))
	{
		return joaat("G_M_M_UNICRIMINALS_01");
	}
	return joaat("G_M_M_UNIDUSTER_01");
}

int func_98(int iParam0)
{
	return __LIB_2__::func_635(iParam0);
}

Vector3 func_99(int iParam0)
{
	return func_279(uLocal_533, iParam0);
}

float func_100(int iParam0)
{
	return func_280(uLocal_533, iParam0);
}

Vector3 func_108(int iParam0)
{
	return func_282(uLocal_533, iParam0);
}

float func_109(int iParam0)
{
	return func_283(uLocal_533, iParam0);
}

int func_111(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_284(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
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
	*uParam4 = PED::GET_PED_BONE_INDEX(Local_179.f_40[iParam0], 62111);
}

Vector3 func_116(int iParam0)
{
	return func_286(uLocal_533, iParam0);
}

float func_117(int iParam0)
{
	return func_287(uLocal_533, iParam0);
}

int func_125()
{
	if (__LIB_0__::func_51(&uLocal_533, 64))
	{
		if (__LIB_0__::func_51(&uLocal_533, 2))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_128()
{
	if (__LIB_0__::func_51(&uLocal_533, 64))
	{
		if (__LIB_0__::func_51(&uLocal_533, 2))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 1;
}

char* func_131(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_292(uParam0, iParam1, iParam2);
	return func_293(iVar0);
}

void func_133()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3[2];
	float fVar10;
	if (ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
	{
		return;
	}
	iVar0 = 6;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (iVar1 != 0 && VEHICLE::DOES_EXTRA_EXIST(Local_179.f_49[0], iVar1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(Local_179.f_49[0], iVar1, true);
		}
		iVar1++;
	}
	sVar2 = func_276(uLocal_533);
	TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 0, &(vVar3[0 /*3*/]));
	TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 1, &(vVar3[1 /*3*/]));
	__LIB_2__::func_106(&(vVar3[0 /*3*/]), 1, 10, 0);
	fVar10 = __LIB_0__::func_152(vVar3[0 /*3*/], vVar3[1 /*3*/], 1);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_179.f_49[0], vVar3[0 /*3*/], fVar10, true, false, true);
	PROPSET::_0xD80FAF919A2E56EA(Local_179.f_49[0], joaat("PG_RE_ODRISCOLLWAGON01X"));
	__LIB_2__::func_153(&Local_179, 0, 4);
}

void func_137()
{
	if (__LIB_0__::func_51(&uLocal_533, 128))
	{
		if (__LIB_0__::func_71(Global_35))
		{
			PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 53, true);
		}
	}
}

bool func_139()
{
	int iVar0;
	if (__LIB_0__::func_51(&uLocal_533, 8))
	{
		return true;
	}
	if (bLocal_26)
	{
		return true;
	}
	if (__LIB_2__::func_4(&Local_179, 33554432))
	{
		if (__LIB_2__::func_477(&Local_179))
		{
			return true;
		}
	}
	if (__LIB_4__::func_186(&Local_179, &(Local_179.f_152), &(Local_179.f_180), &uLocal_514, 0, 5, 1) || func_299(Local_179.f_49[0], &uLocal_514))
	{
		if (func_299(Local_179.f_49[0], &uLocal_514))
		{
		}
		if (__LIB_0__::func_51(&uLocal_533, 16384))
		{
			if (!__LIB_0__::func_51(&uLocal_533, 16777216))
			{
				__LIB_2__::func_298();
				__LIB_2__::func_691(&uLocal_30, Local_179[1], 0, 30f);
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
				__LIB_0__::func_7(&uLocal_533, 16777216);
			}
		}
		if (!__LIB_0__::func_51(&uLocal_533, 33554432))
		{
			iVar0 = 0;
			while (iVar0 < Local_179.f_215)
			{
				if (PED::GET_PED_RESET_FLAG(Local_179[iVar0], 27))
				{
					PED::SET_PED_RESET_FLAG(Local_179[iVar0], 27, false);
				}
				iVar0++;
			}
			__LIB_0__::func_7(&uLocal_533, 33554432);
		}
		return true;
	}
	if (func_300())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_523[8]))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_523[8], 1, 0))
			{
				__LIB_1__::func_283(&(vLocal_487[4 /*3*/]), 0);
				__LIB_0__::func_7(&uLocal_533, 32);
			}
		}
		return true;
	}
	return false;
}

bool func_140()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bVar2 = __LIB_0__::func_51(&uLocal_533, 1024);
	iVar3 = 1;
	switch (iLocal_516)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
			{
				VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(Local_179.f_49[0], Global_35, 0);
			}
			if (__LIB_0__::func_51(&uLocal_533, 32))
			{
				if (__LIB_2__::func_1(Local_179[3], 0, 1))
				{
					__LIB_1__::func_338(Local_179[3], func_302(uLocal_533, 3));
					ENTITY::SET_ENTITY_HEADING(Local_179[3], func_304(uLocal_533, 3));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_179[3], func_305(uLocal_533, 3), 3f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[3], 45, true);
				}
				if (__LIB_2__::func_1(Local_179[4], 0, 1))
				{
					__LIB_1__::func_338(Local_179[4], func_302(uLocal_533, 4));
					ENTITY::SET_ENTITY_HEADING(Local_179[4], func_304(uLocal_533, 4));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_179[4], func_305(uLocal_533, 4), 1f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[4], 45, true);
				}
			}
			__LIB_1__::func_148(&(vLocal_487[1 /*3*/]));
			__LIB_2__::func_224(Local_179.f_151, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_1__::func_539();
			__LIB_0__::func_7(&uLocal_533, 16);
			iLocal_516 = 1;
			iVar3 = 0;
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < Local_179.f_215)
			{
				if (__LIB_2__::func_1(Local_179[iVar0], 0, 1))
				{
					if (__LIB_2__::func_227(0, 1, Local_179[iVar0], 1))
					{
						if (!__LIB_0__::func_51(&(uLocal_534[iVar0]), 1))
						{
							if (iVar0 < 3)
							{
								PED::_0x1854217C640B39EC(Local_179[iVar0], Global_35, 0f, 0f, 0f, 15f, 0, 0);
							}
							PED::_SET_PED_CROUCH_MOVEMENT(Local_179[iVar0], false, 0, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_179[iVar0], true))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
								{
									TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 1, 0);
								}
							}
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
							__LIB_1__::func_474(Local_179[iVar0], &iVar1, 0.2f, 0, 1, 1);
							__LIB_0__::func_7(&(uLocal_534[iVar0]), 1);
							if (!bVar2)
							{
								if (!__LIB_0__::func_51(&uLocal_533, 16384))
								{
									if (iLocal_449 < 1)
									{
										func_157(Local_179[iVar0], Global_35, func_310(iLocal_515), 0, 100f, 1744022339);
									}
									else
									{
										func_157(Local_179[iVar0], Global_35, func_311(iLocal_515), 0, 100f, 1744022339);
									}
								}
								else
								{
									func_157(Local_179[iVar0], Global_35, "CALLOUT_JUST_KILL_EM_MALE", 0, -1073741824 /* Float: -2f */, 1744022339);
								}
								bVar2 = true;
							}
							__LIB_2__::func_73(Local_179[iVar0], &(Local_179.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							__LIB_2__::func_344(&(Local_179[iVar0]));
						}
					}
					else
					{
						iVar3 = 0;
					}
				}
				iVar0++;
			}
			break;
	}
	return iVar3;
}

void func_142()
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_0__::func_94(Local_179[func_125()], func_266(uLocal_533, 0), 0) < 4f || (!__LIB_0__::func_163(Local_179[func_125()], -1817882002) && __LIB_0__::func_94(Local_179[func_125()], func_266(uLocal_533, 0), 0) < (4f + 3f)))
	{
		if (__LIB_0__::func_94(Local_179[func_125()], func_266(uLocal_533, 0), 0) < 1.5f)
		{
			__LIB_0__::func_37(&(vLocal_487[6 /*3*/]));
		}
		if (!__LIB_0__::func_51(&uLocal_533, 2048))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_179.f_49[0]) < 1.2f)
				{
					__LIB_0__::func_7(&uLocal_533, 2048);
				}
			}
		}
		if (__LIB_0__::func_51(&uLocal_533, 2048))
		{
			if (!__LIB_0__::func_51(&uLocal_533, 1024))
			{
				if (((__LIB_2__::func_227(-3f, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Local_179[0], 1)) && __LIB_2__::func_227(0f, 1, Local_179[func_128()], 1)) && __LIB_0__::func_51(&uLocal_533, 256))
				{
					vVar1 = { func_315(uLocal_533, 0) };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (__LIB_0__::func_51(&uLocal_533, 16384))
					{
						TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 67240001, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					}
					else
					{
						if (0 == func_128())
						{
							TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 67240001, 0);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					}
					__LIB_1__::func_474(Local_179[0], &iVar0, 0.5f, 0, 1, 1);
					if (!__LIB_0__::func_51(&uLocal_533, 16384) && !__LIB_0__::func_51(&(uLocal_534[0]), 1))
					{
						__LIB_0__::func_7(&(uLocal_534[0]), 1);
					}
					vVar1 = { func_315(uLocal_533, 1) };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (__LIB_0__::func_51(&uLocal_533, 16384))
					{
						TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 262209, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					}
					else
					{
						if (1 == func_128())
						{
							TASK::TASK_LEAVE_VEHICLE(0, Local_179.f_49[0], 67371105, 0);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					}
					__LIB_1__::func_474(Local_179[1], &iVar0, 0, 0, 1, 1);
					if (!__LIB_0__::func_51(&uLocal_533, 16384) && !__LIB_0__::func_51(&(uLocal_534[1]), 1))
					{
						__LIB_0__::func_7(&(uLocal_534[1]), 1);
					}
					__LIB_1__::func_148(&(vLocal_487[5 /*3*/]));
					__LIB_0__::func_37(&(vLocal_487[5 /*3*/]));
					if (__LIB_0__::func_51(&uLocal_533, 16384))
					{
						vLocal_540 = { __LIB_2__::func_114(Global_35, 1.1f) };
						if (!bLocal_28)
						{
							func_157(Local_179[0], Global_35, "HOLD_IT", 1, 100f, -500314840);
						}
					}
					else
					{
						func_157(Local_179[func_128()], Local_179[func_125()], func_311(iLocal_515), 0, 100f, -500314840);
					}
					__LIB_0__::func_7(&uLocal_533, 1024);
					__LIB_0__::func_7(&uLocal_533, 512);
				}
			}
		}
	}
	if (__LIB_0__::func_51(&uLocal_533, 16384) && __LIB_0__::func_51(&uLocal_533, 1024))
	{
		if (!__LIB_0__::func_51(&uLocal_533, 65536) && !__LIB_0__::func_51(&uLocal_533, 67108864))
		{
			if (__LIB_2__::func_227(-5f, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Local_179[0], 1))
			{
				if (!bLocal_28)
				{
					func_157(Local_179[0], Global_35, "GANG_INTERACT_APPROACH_TOLL", 1, 100f, 1744022339);
				}
				__LIB_0__::func_7(&uLocal_533, 65536);
			}
		}
	}
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
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = 524288 | __LIB_2__::func_340(3, 0, 0);
	iVar6 = 1;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_179[iVar1]))
		{
		}
		else
		{
			iVar0 = func_317(&(Local_179[iVar1]), uParam0[iVar1 /*21*/], 30f, &(uParam0->f_106), &iVar6, 4f, 1, 0, 0, iVar5, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(uParam0[iVar1 /*21*/]))
			{
				if (!uParam0->f_145)
				{
					if (uParam0->f_142 == -1)
					{
						uParam0->f_142 = iVar1;
					}
					iVar4 = (uParam0[iVar1 /*21*/])->f_1;
					switch (iVar4)
					{
						case 0:
							__LIB_2__::func_592(&(uParam0->f_106), 1, 1);
							break;
						case 1:
							__LIB_0__::func_7(&uLocal_533, 67108864);
							__LIB_2__::func_592(&(uParam0->f_106), 1, 1);
							break;
					}
					switch (iVar4)
					{
						case 0:
						case 1:
							__LIB_18__::func_180(uParam0, 0, 1);
							break;
					}
					iVar2 = 0;
					while (iVar2 <= 5)
					{
						if (__LIB_2__::func_1(Local_179[iVar2], 0, 1))
						{
							__LIB_2__::func_504(Local_179[iVar2], 500);
						}
						iVar2++;
					}
					uParam0->f_145 = 1;
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				uParam0->f_141 = iVar3;
				switch (iVar3)
				{
					case 0:
						break;
					case 1:
						uParam0->f_144++;
						break;
				}
				uParam0->f_145 = 0;
			}
		}
		iVar1++;
	}
	return iVar3;
}

bool func_147(var uParam0)
{
	if (__LIB_2__::func_157(iLocal_523[4], *uParam0))
	{
		return true;
	}
	return false;
}

void func_148()
{
	char* sVar0;
	int iVar1;
	if (__LIB_2__::func_1(Local_179[0], 0, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_179.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0])))
	{
		sVar0 = func_276(uLocal_533);
		iVar1 = 520;
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_179[0], Local_179.f_49[0], sVar0, 0, 0, iVar1, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
		__LIB_2__::func_636(Local_179.f_49[0], Global_35, 10);
		if (__LIB_0__::func_51(&uLocal_533, 16384))
		{
			func_157(Local_179[0], Global_35, "ARRIVAL_ENTER_TRAP", 1, -1073741824 /* Float: -2f */, -500314840);
		}
		__LIB_2__::func_442(&Local_179, 1);
		__LIB_2__::func_548(&Local_179, 1);
	}
}

bool func_149(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	__LIB_2__::func_647(&Local_450);
	if (iLocal_449 < 8)
	{
		if (__LIB_0__::func_51(&uLocal_533, 16))
		{
			iLocal_449 = 8;
		}
		if (iLocal_449 < 7)
		{
			if (!__LIB_0__::func_51(&uLocal_533, 8) && func_327())
			{
				__LIB_0__::func_7(&uLocal_533, 8);
			}
		}
		if (!__LIB_0__::func_51(&uLocal_533, 134217728))
		{
			if (iLocal_449 > 0 && iLocal_449 <= 4)
			{
				if (__LIB_0__::func_665(Local_179[1], Global_35, 1, 1) < 5f && (iLocal_449 != 4 || !TASK::_0xBEDBE39B5FD98FD6(Global_35)))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_179[1], &iVar0, 0, 0, 1, 1);
					__LIB_0__::func_7(&uLocal_533, 134217728);
				}
			}
		}
	}
	switch (iLocal_449)
	{
		case 0:
			func_153(0);
			__LIB_1__::func_148(&(vLocal_487[0 /*3*/]));
			if (__LIB_0__::func_51(&uLocal_533, 256) || bParam0)
			{
				if (__LIB_2__::func_1(Local_179[3], 0, 1))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_179[3], false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 3), Global_35, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_179[3], &iVar0, 0, 0, 1, 1);
				}
				if (__LIB_2__::func_1(Local_179[4], 0, 1))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_179[4], false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 4), Global_35, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_179[4], &iVar0, 0.5f, 0.5f, 1, 1);
				}
				if (__LIB_2__::func_1(Local_179[2], 0, 1))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_179[2], false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 2), Global_35, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_179[2], &iVar0, 0, 0, 1, 1);
				}
				iLocal_449 = 2;
			}
			break;
		case 2:
			if (!__LIB_1__::func_285(&(vLocal_487[0 /*3*/]), 1f))
			{
				func_153(0);
			}
			else
			{
				__LIB_2__::func_298();
				if (!__LIB_0__::func_51(&uLocal_533, 16384))
				{
					if (__LIB_0__::func_51(&uLocal_533, 1024))
					{
						return true;
					}
				}
				else if (!__LIB_0__::func_51(&uLocal_533, 1024))
				{
					iLocal_449 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(vLocal_487[0 /*3*/]), 0f))
			{
				__LIB_2__::func_298();
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (__LIB_0__::func_86(vLocal_543))
				{
					__LIB_2__::func_298();
					vLocal_543 = { Global_36 };
				}
			}
			__LIB_2__::func_282(&Local_179, 0);
			if (__LIB_1__::func_285(&(vLocal_487[0 /*3*/]), 5f))
			{
				__LIB_2__::func_310(&Local_179, 0);
				__LIB_1__::func_148(&(vLocal_487[0 /*3*/]));
				func_329();
				__LIB_2__::func_691(&uLocal_30, Local_179[1], 1, 30f);
				PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
				PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
				__LIB_9__::func_264(&Local_33, 1, 1);
				iLocal_449 = 3;
			}
			break;
		case 3:
			if (!bLocal_28)
			{
				if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
				{
					__LIB_2__::func_504(Local_179[1], 100);
					__LIB_2__::func_504(Local_179[0], 300);
					__LIB_2__::func_504(Local_179[2], 100);
					__LIB_2__::func_503(&Local_179, 0);
					__LIB_2__::func_691(&uLocal_30, Local_179[1], 0, 30f);
					bLocal_28 = true;
				}
			}
			__LIB_2__::func_609();
			__LIB_2__::func_510(&Local_179);
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (__LIB_0__::func_86(vLocal_543))
				{
					__LIB_2__::func_298();
					vLocal_543 = { Global_36 };
				}
			}
			if (func_327() || func_333())
			{
				__LIB_0__::func_7(&uLocal_533, 8);
			}
			else if (!__LIB_2__::func_343(Local_179[1], Local_179.f_49[0], 1) && bLocal_28)
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (__LIB_0__::func_86(vLocal_543))
					{
						__LIB_2__::func_298();
						vLocal_543 = { Global_36 };
					}
				}
				iLocal_449 = 4;
			}
			break;
		case 4:
			__LIB_2__::func_505(&Local_179);
			PED::SET_PED_RESET_FLAG(Local_179[func_128()], 27, true);
			func_336();
			if (__LIB_0__::func_51(&uLocal_533, 2))
			{
				__LIB_2__::func_517(&Local_179, 0, -67.13179f, 270.9976f, 103.5654f, 1067450368 /* Float: 1.25f */, 1097859072 /* Float: 15f */, 1065353216 /* Float: 1f */, 1);
			}
			else
			{
				__LIB_2__::func_517(&Local_179, 0, -145.0058f, 332.767f, 100.6059f, 1067450368 /* Float: 1.25f */, 1097859072 /* Float: 15f */, 1065353216 /* Float: 1f */, 1);
			}
			if (func_338())
			{
				if (func_339(Local_179[func_128()], &Local_450, 0.2f, 0, -6.5f, 2, 0, 0, 0, 6000, 1, 1))
				{
					__LIB_1__::func_283(&(vLocal_487[7 /*3*/]), 0);
					if (Local_450.f_4)
					{
						__LIB_2__::func_147(&Local_179, 1048576);
						func_340();
						__LIB_2__::func_282(&Local_179, 1);
						iLocal_449 = 5;
						__LIB_2__::func_632(&Local_179, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_179[func_128()], true, false);
						TASK::TASK_REACT(Local_179[1], Global_35, Global_36, "Default_Shocked", 0.6f, 0, 4);
						iLocal_449 = 7;
					}
				}
				else
				{
					__LIB_1__::func_283(&(vLocal_487[7 /*3*/]), 0);
					if (Local_450 >= 2)
					{
						if (!__LIB_0__::func_51(&uLocal_533, 16777216))
						{
							__LIB_2__::func_298();
							__LIB_2__::func_691(&uLocal_30, Local_179[1], 0, 30f);
							__LIB_0__::func_7(&uLocal_533, 16777216);
						}
					}
					if (Local_450.f_2)
					{
						if (!__LIB_0__::func_163(Local_179[2], 1868526510))
						{
							__LIB_1__::func_562(Local_179[2], Local_179.f_40[0], 0, 2f, 20000);
						}
					}
					if (Local_450.f_6)
					{
						TASK::TASK_REACT(Local_179[1], Global_35, Global_36, "Default_Shocked", 0.6f, 0, 4);
						iLocal_449 = 7;
					}
				}
			}
			break;
		case 5:
			if (!bLocal_29)
			{
				if (__LIB_2__::func_227(0f, 1, Local_179[0], 1) && __LIB_2__::func_227(0f, 1, Local_179[1], 1))
				{
					func_157(Local_179[0], Global_35, "CALLOUT_FOLLOW_ROB_FLEE_MALE", 0, -1073741824 /* Float: -2f */, 1744022339);
					bLocal_29 = true;
				}
			}
			if (func_342())
			{
				func_343();
				vLocal_543 = { Global_36 };
				iLocal_449 = 6;
			}
			break;
		case 6:
			fVar1 = __LIB_0__::func_94(Global_35, vLocal_543, 1);
			if (fVar1 > 20f)
			{
				iVar2 = 0;
				while (iVar2 <= 5)
				{
					if (__LIB_2__::func_1(Local_179[iVar2], 0, 1))
					{
						if (Local_179.f_9[iVar2] > 0f)
						{
							if (Local_179.f_9[iVar2] < 10f)
							{
								iLocal_449 = 7;
							}
						}
					}
					iVar2++;
				}
			}
			break;
		case 7:
			__LIB_2__::func_632(&Local_179, 0);
			if (__LIB_1__::func_285(&(vLocal_487[7 /*3*/]), 0.3f))
			{
				return true;
			}
			break;
		case 8:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			return true;
	}
	return false;
}

bool func_151()
{
	if (__LIB_1__::func_205(Global_35, iLocal_523[2], 1, 0))
	{
		if (!__LIB_1__::func_205(Global_35, iLocal_523[1], 1, 0))
		{
			__LIB_0__::func_11(&Local_179, 7);
			return true;
		}
	}
	if (__LIB_19__::func_432(&Local_179))
	{
		return true;
	}
	return false;
}

void func_153(bool bParam0)
{
	vector3 vVar0;
	int iVar3;
	if (func_177() || Local_179.f_9[func_128()] < 14f)
	{
		__LIB_2__::func_298();
		return;
	}
	vVar0 = { 0f, 0f, 0f };
	if (bParam0)
	{
		iVar3 = 1000;
	}
	else
	{
		iVar3 = 1500;
	}
	__LIB_4__::func_151(Local_179[1], &uLocal_438, vVar0, 1, (30f + 10f), 45f, iVar3, 3000, 3000, 1075838976 /* Float: 2.5f */, 1, 1, 1084227584 /* Float: 5f */);
}

void func_154()
{
	int iVar0;
	var uVar1;
	if (Local_450.f_2)
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &uVar1, 1, 3f, 0f);
	if (!func_348())
	{
		return;
	}
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		if (func_349())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
		}
		else if (func_350())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
		}
		else if (func_351())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
	}
}

void func_155()
{
	return;
	if (func_352(&Local_179))
	{
		return;
	}
	if (!__LIB_0__::func_51(&uLocal_533, 1))
	{
		if ((((MISC::GET_DISTANCE_BETWEEN_COORDS(func_315(uLocal_533, 1), Global_36, false) < 15f && func_349()) && func_353()) && func_348()) || __LIB_2__::func_4(&Local_179, 8))
		{
			if (!__LIB_2__::func_4(&Local_179, 8))
			{
				if (__LIB_0__::func_71(Global_35))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PED::GET_MOUNT(Global_35), false);
					PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 53, true);
					__LIB_0__::func_7(&uLocal_533, 128);
				}
				__LIB_2__::func_147(&Local_179, 8);
			}
			__LIB_2__::func_315(1891783641, Local_179[1], 1);
			if (__LIB_2__::func_660(Global_35, &uLocal_512, 65, 256, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				__LIB_0__::func_7(&uLocal_533, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			MAP::DISPLAY_RADAR(true);
		}
	}
}

bool func_156()
{
	int iVar0;
	float fVar1;
	if (!__LIB_1__::func_285(&(vLocal_487[5 /*3*/]), 2f))
	{
		return false;
	}
	iVar0 = func_128();
	if (__LIB_0__::func_51(&uLocal_533, 16384))
	{
		fVar1 = 100f;
	}
	else if (__LIB_4__::func_503(21, 5))
	{
		fVar1 = 25f;
	}
	else
	{
		fVar1 = 45f;
	}
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_179[iVar0], Global_35, 17))
	{
		if (__LIB_0__::func_94(Local_179[iVar0], Global_36, 0) < fVar1 || __LIB_1__::func_285(&(vLocal_487[5 /*3*/]), 5f))
		{
			return true;
		}
	}
	return false;
}

bool func_157(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5)
{
	return __LIB_2__::func_303(iParam0, iParam1, sParam2, "", fParam4, iParam3, 0, 0, 1, fParam4 > 0f, 1, iParam5, 1, 0, 0);
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_REVEAL";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_REVEAL";
}

void func_160()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_51(&uLocal_533, 16384))
	{
		if (!__LIB_0__::func_51(&uLocal_533, 16777216))
		{
			__LIB_2__::func_298();
			__LIB_2__::func_691(&uLocal_30, Local_179[1], 0, 30f);
			__LIB_0__::func_7(&uLocal_533, 16777216);
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (__LIB_2__::func_1(Local_179[iVar1], 0, 0))
		{
			if (__LIB_0__::func_51(&uLocal_533, 16384))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_179[iVar1], &iVar0, 0.2f, 0, 1, 1);
				if (!__LIB_0__::func_51(&(uLocal_534[iVar1]), 1))
				{
					__LIB_0__::func_7(&(uLocal_534[iVar1]), 1);
				}
			}
			__LIB_2__::func_73(Local_179[iVar1], &(Local_179.f_22[iVar1]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
			__LIB_2__::func_344(&(Local_179[iVar1]));
		}
		iVar1++;
	}
	if (__LIB_2__::func_1(Local_179[2], 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_179[2], &iVar0, 0.5f, 0, 1, 1);
		if (!__LIB_0__::func_51(&(uLocal_534[2]), 1))
		{
			__LIB_0__::func_7(&(uLocal_534[2]), 1);
		}
		__LIB_2__::func_73(Local_179[2], &(Local_179.f_22[2]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
	}
	iVar1 = 3;
	while (iVar1 <= 4)
	{
		if (__LIB_2__::func_1(Local_179[iVar1], 0, 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_179[iVar1], &iVar0, 0.5f, 0, 1, 1);
			if (!__LIB_0__::func_51(&(uLocal_534[iVar1]), 1))
			{
				__LIB_0__::func_7(&(uLocal_534[iVar1]), 1);
			}
			__LIB_2__::func_73(Local_179[iVar1], &(Local_179.f_22[iVar1]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
		}
		iVar1++;
	}
}

void func_174()
{
	int iVar0;
	if (!__LIB_0__::func_51(&uLocal_533, 32) && !__LIB_0__::func_51(&uLocal_533, 16))
	{
		iVar0 = 0;
		while (iVar0 < Local_179.f_215)
		{
			if (func_379(iVar0))
			{
				PED::SET_PED_RESET_FLAG(Local_179[iVar0], 27, true);
			}
			iVar0++;
		}
	}
}

bool func_177()
{
	if (__LIB_0__::func_51(&uLocal_533, 2097152))
	{
		return true;
	}
	if (func_382())
	{
		__LIB_0__::func_7(&uLocal_533, 2097152);
		return true;
	}
	return false;
}

void func_179(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_533, 268435456))
	{
		if (ENTITY::_IS_ENTITY_FROZEN(Local_179.f_49[0]))
		{
			if (iParam0 || func_383())
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_179.f_49[0], false);
				__LIB_0__::func_8(&uLocal_533, 268435456);
			}
		}
	}
}

void func_183()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	iVar5 = 0;
	while (iVar5 < Local_179.f_215)
	{
		if (__LIB_2__::func_1(Local_179[iVar5], 0, 0))
		{
			if (!__LIB_0__::func_51(&(uLocal_534[iVar5]), 1))
			{
				TASK::TASK_COMBAT_PED(Local_179[iVar5], Global_35, 0, 0);
				__LIB_0__::func_7(&(uLocal_534[iVar5]), 1);
			}
			if (!__LIB_0__::func_51(&uLocal_533, 16))
			{
				vVar0 = { func_385(uLocal_533, iVar5) };
				if (!__LIB_0__::func_86(vVar0) && !__LIB_0__::func_51(&uLocal_533, 16))
				{
					fVar3 = func_386(uLocal_533, iVar5);
					iVar4 = func_387(uLocal_533, iVar5);
					if (!func_177())
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_179[iVar5], vVar0, fVar3, iVar4, 0, 0);
					}
					if (func_388(uLocal_533, iVar5))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_179[iVar5], 45, true);
					}
					if (iVar5 == 1)
					{
						PED::SET_COMBAT_FLOAT(Local_179[1], 32, 2f);
					}
				}
			}
			PED::SET_PED_COMBAT_RANGE(Local_179[iVar5], 0);
		}
		iVar5++;
	}
}

bool func_184()
{
	if (__LIB_0__::func_51(&uLocal_533, 2))
	{
		return true;
	}
	if (__LIB_1__::func_285(&(vLocal_487[1 /*3*/]), 8f) || __LIB_2__::func_374(&Local_179) <= 2)
	{
		if (!__LIB_0__::func_51(&uLocal_533, 16))
		{
			if (__LIB_2__::func_1(Local_179[2], 0, 0))
			{
				PED::_0xFC3DB99C8144CD81(Local_179[2], iLocal_523[7], 0, 0, 0);
			}
			if (__LIB_2__::func_1(Local_179[4], 0, 0))
			{
				PED::_0xFC3DB99C8144CD81(Local_179[4], iLocal_523[7], 0, 0, 0);
			}
		}
		if (__LIB_2__::func_1(Local_179[3], 0, 0))
		{
			__LIB_1__::func_733(Local_179[3]);
		}
		return true;
	}
	return false;
}

char[] func_185(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (iParam2 < 0)
	{
		return "";
	}
	iVar0 = iParam2;
	iVar1 = func_292(uParam0, iParam1, iVar0);
	switch (iVar1)
	{
		case 0:
			return "AMBUSH_WAM_FLEE";
		case 1:
			return "AMBUSH_WAM_V2_FLEE";
		default:
			break;
	}
	return "COMBAT_FLEE";
}

bool func_186(int iParam0, int iParam1, var uParam2, char* sParam3, float fParam4)
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
					__LIB_2__::func_303((*iParam0)[*iParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_189()
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	iVar0 = __LIB_2__::func_637(&uLocal_15, Local_179.f_225, Local_179.f_226);
	if (__LIB_2__::func_15(Local_179.f_181, 0) && __LIB_2__::func_155(Local_179.f_181, 1))
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	sVar2 = __LIB_2__::func_638(&uLocal_15, Local_179.f_181, bVar1, iVar0);
	__LIB_2__::func_303(Global_35, Global_35, sVar2, "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
}

bool func_203(int iParam0)
{
	float fVar0;
	if (__LIB_2__::func_26(&Local_179, iParam0, 32))
	{
		if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iParam0], false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_179.f_40[iParam0], true), 0, 1))
	{
		return false;
	}
	if (Local_179.f_216 == Local_179.f_215)
	{
		if (!__LIB_2__::func_1(Local_179[iParam0], 0, 1))
		{
			return true;
		}
	}
	if (!__LIB_2__::func_26(&Local_179, iParam0, 64))
	{
		fVar0 = __LIB_0__::func_265(&(Local_179.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_212(int iParam0)
{
	if (__LIB_2__::func_25(&Local_179, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_25(&Local_179, iParam0, 128))
	{
		return false;
	}
	if (__LIB_2__::func_25(&Local_179, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_64(&Local_179, Local_179[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_25(&Local_179, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_216(int iParam0)
{
	switch (Local_179.f_151)
	{
		case 24:
		case 26:
		case 27:
			return true;
	}
	return false;
}

bool func_217(int iParam0, int iParam1)
{
	if (__LIB_2__::func_26(&Local_179, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_26(&Local_179, iParam0, 4))
	{
		return true;
	}
	if (__LIB_1__::func_248(Local_179.f_40[iParam0], iParam1))
	{
		return true;
	}
	if (__LIB_2__::func_64(&Local_179, Local_179.f_40[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_26(&Local_179, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_218(int iParam0)
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
	if (__LIB_2__::func_269(Local_179.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_179.f_84[iParam0], Global_36, 1) < 10f)
	{
		return false;
	}
	return true;
}

bool func_219(int iParam0)
{
	if (__LIB_2__::func_39(&Local_179, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_179.f_49[iParam0], true))
	{
		return false;
	}
	if (__LIB_2__::func_39(&Local_179, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_193(&Local_179, Local_179.f_49[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_39(&Local_179, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_240()
{
	if (Local_179.f_151 != 11)
	{
		return true;
	}
	if (Local_179.f_221 == 2)
	{
		return false;
	}
	return true;
}

int func_259()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar0 = BUILTIN::VDIST2(Global_36, -121.1325f, 142.6518f, 90.7199f);
	fVar1 = BUILTIN::VDIST2(Global_36, -197.5622f, 467.291f, 94.5181f);
	fVar2 = BUILTIN::VDIST2(Global_36, -119.9247f, 467.4688f, 111.5982f);
	iLocal_523[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-292.6826f, 471.2841f, 79.65367f, 0f, 0f, 21.38423f, 277.7442f, 420.2423f, 75.37475f, "volNorthwestCheck");
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		__LIB_0__::func_7(&uLocal_533, 2);
		iVar3 = 1;
	}
	else if (__LIB_1__::func_205(Global_35, iLocal_523[0], 1, 0))
	{
		__LIB_0__::func_8(&uLocal_533, 2);
		iVar3 = 1;
	}
	return iVar3;
}

int func_260()
{
	float fVar0;
	float fVar1;
	fVar0 = BUILTIN::VDIST2(Global_36, 599.6675f, -489.4001f, 80.1061f);
	fVar1 = BUILTIN::VDIST2(Global_36, 741.9882f, -335.0654f, 95.5447f);
	if (fVar0 < fVar1)
	{
		__LIB_0__::func_8(&uLocal_533, 2);
	}
	else
	{
		__LIB_0__::func_7(&uLocal_533, 2);
	}
	return 1;
}

void func_261(int iParam0, var uParam1)
{
	char* sVar0[2];
	sVar0[0] = __LIB_2__::func_460(7);
	sVar0[1] = __LIB_2__::func_460(10);
	__LIB_5__::func_742(&(uParam1->f_106[0 /*17*/]), sVar0[0], "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_5__::func_742(&(uParam1->f_106[1 /*17*/]), sVar0[1], func_443(), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_482(&(uParam1->f_106[0 /*17*/]), 1, 1);
	__LIB_9__::func_264(uParam1, 1, 0);
}

void func_262()
{
	if (__LIB_0__::func_51(&uLocal_533, 64))
	{
		func_445();
	}
	else
	{
		func_446();
	}
}

Vector3 func_266(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(4, 9);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(6, 9);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

char* func_276(var uParam0)
{
	if (__LIB_0__::func_51(&uParam0, 2))
	{
		return "gaowa_trigger_front";
	}
	else
	{
		return "gaowa_trigger_back";
	}
	return "";
}

int func_277(int iParam0)
{
	if (!__LIB_0__::func_51(&uLocal_533, 524288))
	{
		if (!__LIB_0__::func_51(&uLocal_533, 16384))
		{
			switch (iParam0)
			{
				case 0:
					return -1908453874;
				case 1:
					return -1619093821;
				case 2:
					return -346294909;
				case 3:
					return -1985066158;
				case 4:
					return -1395814000;
				default:
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return 1635109100;
				case 1:
					return 1395403865;
				case 2:
					return 153059716;
				default:
					break;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1635109100;
			case 1:
				return 1395403865;
			case 2:
				return 153059716;
			default:
				break;
		}
	}
	return __LIB_2__::func_16();
}

Vector3 func_279(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(4, 8);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(6, 8);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 8);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_280(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_457(4, 8);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_457(6, 8);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_457(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_457(1, 8);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_282(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 17);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 17);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_283(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_457(0, 17);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_457(1, 17);
			default:
				break;
		}
	}
	return 0f;
}

void func_284(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (__LIB_0__::func_168(iParam1))
		{
			func_459(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			__LIB_0__::func_169(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			__LIB_0__::func_170(iParam0, 0);
			bVar0 = true;
		}
		__LIB_0__::func_663(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

Vector3 func_286(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_463(uParam0, iParam1) };
	return vVar0;
}

var func_287(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_463(uParam0, iParam1) };
	return Var0.f_3;
}

int func_292(var uParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_51(&uParam0, 16384))
	{
		if (!__LIB_0__::func_51(&uParam0, 524288))
		{
			switch (iParam2)
			{
				case 0:
					return 3;
				case 1:
					return 2;
				default:
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				case 2:
					return 4;
				case 3:
					return 5;
				case 5:
					return 4;
				default:
					break;
			}
			return 5;
		}
	}
	if (iParam1 == 0)
	{
		switch (iParam2)
		{
			case 0:
				return 0;
			case 1:
				return 0;
			case 2:
				return 1;
			case 3:
				return 1;
			case 4:
				return 1;
			case 5:
				return 0;
			default:
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				return 0;
			case 3:
				return 0;
			case 4:
				return 0;
			case 5:
				return 1;
			default:
				break;
		}
	}
	return -1;
}

char* func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0359_G_M_M_UniDuster_02_IRISH_01";
		case 1:
			return "0355_G_M_M_UniDuster_01_WHITE_01";
		case 2:
			return "0361_G_M_M_UniDuster_03_WHITE_01";
		case 3:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 4:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 5:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		default:
			break;
	}
	return "";
}

bool func_299(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = *iParam1;
	if (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_300()
{
	if (iLocal_447 < 1)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_523[1], 1, 0))
		{
			return true;
		}
	}
	else if (!Local_450.f_2)
	{
		if (!func_348())
		{
			return true;
		}
	}
	return false;
}

Vector3 func_302(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(4, 12);
				case 4:
					return func_447(4, 13);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(6, 14);
				case 4:
					return func_447(6, 15);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(0, 12);
			case 4:
				return func_447(0, 13);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(1, 14);
			case 4:
				return func_447(1, 15);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_304(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_457(4, 12);
				case 4:
					return func_457(4, 13);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_457(6, 14);
				case 4:
					return func_457(6, 15);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_457(0, 12);
			case 4:
				return func_457(0, 13);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_457(1, 14);
			case 4:
				return func_457(1, 15);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_305(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(5, 4);
				case 4:
					return func_447(5, 3);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(7, 5);
				case 4:
					return func_447(7, 6);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(2, 4);
			case 4:
				return func_447(2, 3);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(3, 5);
			case 4:
				return func_447(3, 6);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_ETRIGGER";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_ETRIGGER";
}

char* func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_TRIGGER";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_TRIGGER";
}

Vector3 func_315(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(4, 14);
				case 4:
					return func_447(4, 15);
				case 2:
					return func_447(4, 4);
				case 0:
					return func_447(4, 6);
				case 1:
					return func_447(4, 7);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(6, 12);
				case 4:
					return func_447(6, 13);
				case 2:
					return func_447(6, 4);
				case 0:
					return func_447(6, 6);
				case 1:
					return func_447(6, 7);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(0, 14);
			case 4:
				return func_447(0, 15);
			case 2:
				return func_447(0, 4);
			case 0:
				return func_447(0, 6);
			case 1:
				return func_447(0, 7);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(1, 12);
			case 4:
				return func_447(1, 13);
			case 2:
				return func_447(1, 4);
			case 0:
				return func_447(1, 6);
			case 1:
				return func_447(1, 7);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
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
	iVar1 = func_473(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_327()
{
	if (__LIB_6__::func_692(Local_179.f_49[0]))
	{
		return true;
	}
	if (iLocal_449 <= 4)
	{
		if (func_177())
		{
			return true;
		}
		if (!__LIB_0__::func_86(vLocal_540))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_540, false) > 8f)
			{
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vLocal_540, 70f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_329()
{
	Local_450.f_16 = "GANG_INTERACT_DEMAND_MONEY";
	Local_450.f_21 = 1;
	Local_450.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
	Local_450.f_22 = 1;
	Local_450.f_18 = "GANG_INTERACT_KNOCKOUT";
	Local_450.f_23 = 2;
	Local_450.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_MALE";
	Local_450.f_24 = 2;
}

bool func_333()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_179.f_9[iVar0] < 2.5f)
		{
			return true;
		}
		iVar0++;
	}
	if (!bLocal_28 && !__LIB_2__::func_455())
	{
		if (__LIB_1__::func_285(&(vLocal_487[0 /*3*/]), 24f))
		{
			if (__LIB_2__::func_227(0, 1, 0, 0) && !__LIB_2__::func_136(Global_35, 1))
			{
				return true;
			}
		}
		else if (!__LIB_0__::func_51(&uLocal_533, 131072))
		{
			if ((__LIB_2__::func_227(0f, 1, Local_179[0], 1) && __LIB_2__::func_227(0f, 1, Local_179[1], 1)) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				if (__LIB_0__::func_71(Global_35))
				{
					func_157(Local_179[1], Global_35, "ORDER_DISMOUNT", 1, -1073741824 /* Float: -2f */, 1744022339);
				}
				else
				{
					func_157(Local_179[1], Global_35, "HANDS_UP", 1, -1073741824 /* Float: -2f */, 1744022339);
				}
				__LIB_0__::func_7(&uLocal_533, 131072);
			}
		}
		else if (!__LIB_0__::func_51(&uLocal_533, 262144))
		{
			if (((__LIB_2__::func_227(0, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Local_179[0], 1)) && __LIB_2__::func_227(0f, 1, Local_179[1], 1)) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				func_157(Local_179[0], Global_35, "GANG_INTERACT_THREATEN", 1, -1073741824 /* Float: -2f */, 1744022339);
				__LIB_0__::func_7(&uLocal_533, 262144);
			}
		}
	}
	return false;
}

void func_336()
{
	char* sVar0;
	if (!__LIB_0__::func_51(&uLocal_533, 16384))
	{
		return;
	}
	if (__LIB_0__::func_51(&uLocal_533, 1048576))
	{
		return;
	}
	sVar0 = func_131(uLocal_533, 0, 0);
	__LIB_2__::func_133(Local_179[1], sVar0, 0);
	sVar0 = func_131(uLocal_533, 0, 1);
	__LIB_2__::func_133(Local_179[0], sVar0, 0);
	__LIB_0__::func_7(&uLocal_533, 1048576);
}

bool func_338()
{
	if (Local_450 > 0)
	{
		return true;
	}
	if (__LIB_2__::func_458(&Local_179, 0, 0))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0f, 1, Global_35, 1) && !__LIB_2__::func_227(0f, 1, Local_179[1], 1))
	{
		return false;
	}
	__LIB_1__::func_283(&uLocal_546, 0);
	if (__LIB_1__::func_285(&uLocal_546, 1.5f))
	{
		return true;
	}
	return false;
}

bool func_339(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	__LIB_2__::func_647(iParam1);
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
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, iParam1->f_16, 0, -1082130432 /* Float: -1f */, iParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
					__LIB_1__::func_283(&(iParam1->f_32), 0);
				}
				else
				{
					__LIB_2__::func_462(&(iParam1->f_32), 0.5f, 0);
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
			if (((!iParam1->f_12 && !iParam1->f_13) && __LIB_1__::func_285(&(iParam1->f_32), 2f)) && __LIB_2__::func_448(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (__LIB_2__::func_694(&(iParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
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
					__LIB_1__::func_748(&(iParam1->f_36), 1, 1);
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
			else if (__LIB_2__::func_639(iParam1))
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
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(Global_35, iParam0, iParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				iParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_494(iParam6, 1, 0, -142743235, 0);
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
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(0f, 1, iParam0, 1))
					{
						__LIB_2__::func_303(iParam0, Global_35, iParam1->f_17, 0, -1082130432 /* Float: -1f */, iParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
						__LIB_2__::func_461(0);
					}
				}
				if (iParam1->f_11)
				{
					if (__LIB_2__::func_227(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
						{
							__LIB_2__::func_303(iParam0, Global_35, iParam1->f_18, 0, -1082130432 /* Float: -1f */, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (__LIB_2__::func_227(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						__LIB_2__::func_303(iParam0, Global_35, iParam1->f_18, 0, -1082130432 /* Float: -1f */, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(iParam1->f_36), 1, 1);
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
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, iParam1->f_19, 0, -1082130432 /* Float: -1f */, iParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_340()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_2__::func_1(Local_179[iVar0], 0, 0))
		{
		}
		else
		{
			__LIB_0__::func_325(&(Local_179.f_22[iVar0]));
			switch (iVar0)
			{
				case 0:
					__LIB_2__::func_596(Local_179[iVar0], Local_179.f_49[0], -1, 2f, -1, 131073);
					break;
				case 1:
					__LIB_2__::func_596(Local_179[iVar0], Local_179.f_49[0], 0, 2f, -1, 262145);
					break;
				case 2:
					__LIB_1__::func_562(Local_179[iVar0], Local_179.f_40[0], 0, 2f, 20000);
					break;
			}
		}
		iVar0++;
	}
}

bool func_342()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_2__::func_1(Local_179[iVar0], 0, 0))
		{
			return false;
		}
		switch (iVar0)
		{
			case 0:
			case 1:
				if (!PED::IS_PED_IN_VEHICLE(Local_179[iVar0], Local_179.f_49[0], false))
				{
					return false;
				}
				break;
			default:
				if (!PED::IS_PED_ON_MOUNT(Local_179[iVar0]))
				{
					return false;
				}
				break;
		}
		iVar0++;
	}
	return true;
}

void func_343()
{
	int iVar0;
	int iVar1;
	__LIB_2__::func_371(&Local_179);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_2__::func_1(Local_179[iVar0], 0, 0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					if (__LIB_0__::func_51(&uLocal_533, 2))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_VEHICLE_GOTO_NAVMESH(0, Local_179.f_49[0], -64.83394f, 379.5077f, 112.7398f, 14f, 0, 3f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], -96.77056f, 577.9213f, 113.7471f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 0, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], 170.4856f, 621.06f, 126.3277f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 0, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], __LIB_2__::func_116(36, 1), 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 0, 5f, 2f);
						__LIB_1__::func_474(Local_179[iVar0], &iVar1, 0, 0, 1, 1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_VEHICLE_GOTO_NAVMESH(0, Local_179.f_49[0], -120.3455f, 290.5117f, 101.7626f, 14f, 524308, 3f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], -75.02242f, 304.6132f, 105.9758f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67633172, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], -45.25683f, 339.4475f, 113.1327f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], 101.9358f, 41.27348f, 99.3008f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], 494.5761f, 350.9439f, 105.0089f, 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_179.f_49[0], __LIB_2__::func_116(36, 1), 14f, 0, ENTITY::GET_ENTITY_MODEL(Local_179.f_49[0]), 67108864, 5f, 2f);
						__LIB_1__::func_474(Local_179[iVar0], &iVar1, 0, 0, 1, 1);
					}
					break;
				case 1:
					break;
				default:
					TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(Local_179[iVar0], Global_35, 4, __LIB_2__::func_116(36, 1), 8941956, -1082130432 /* Float: -1f */, -1, 0);
					break;
			}
		}
		iVar0++;
	}
}

bool func_348()
{
	vector3 vVar0;
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &vVar0, 1, 3f, 0f);
	if (!__LIB_0__::func_86(vVar0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) > 12f)
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_349()
{
	return __LIB_1__::func_205(Global_35, iLocal_523[5], 1, 0);
}

bool func_350()
{
	return __LIB_1__::func_205(Global_35, iLocal_523[4], 1, 0);
}

bool func_351()
{
	return __LIB_1__::func_205(Global_35, iLocal_523[3], 1, 0);
}

bool func_352(var uParam0)
{
	return __LIB_2__::func_4(uParam0, 64);
}

bool func_353()
{
	int iVar0;
	var uVar1;
	float fVar2;
	if (func_349())
	{
		__LIB_1__::func_283(&(vLocal_487[2 /*3*/]), 0);
	}
	else
	{
		__LIB_1__::func_148(&(vLocal_487[2 /*3*/]));
		__LIB_0__::func_37(&(vLocal_487[2 /*3*/]));
	}
	if (__LIB_1__::func_285(&(vLocal_487[2 /*3*/]), 0.33f))
	{
		return true;
	}
	iVar0 = __LIB_2__::func_825(Global_35);
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		PED::_0xF60165E1D2C5370B(iVar0, &uVar1, &fVar2);
		if (fVar2 < 1f)
		{
			return true;
		}
	}
	return false;
}

bool func_379(int iParam0)
{
	float fVar0;
	if (!__LIB_2__::func_1(Local_179[iParam0], 0, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_179[iParam0]))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_179[iParam0], Global_36, 1) < 5f)
	{
		return false;
	}
	if (func_177())
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 0.5f;
			break;
		case 2:
			fVar0 = 0.7f;
			break;
		case 3:
			fVar0 = 0.2f;
			break;
		case 4:
			fVar0 = 0.5f;
			break;
	}
	if (__LIB_0__::func_51(&uLocal_533, 16))
	{
		return false;
	}
	if (__LIB_1__::func_285(&(vLocal_487[1 /*3*/]), fVar0))
	{
		return false;
	}
	return true;
}

bool func_382()
{
	vector3 vVar0;
	vector3 vVar3;
	if (__LIB_0__::func_51(&uLocal_533, 16384))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_179.f_49[0], 5f, -15f, 0f) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_179.f_49[0], 5f, 15f, 0f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_179.f_49[0], 10f, -15f, 0f) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_179.f_49[0], 10f, 15f, 0f) };
	}
	if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
	{
		return true;
	}
	return false;
}

int func_383()
{
	if (PED::GET_VEHICLE_PED_IS_IN(Global_35, false) == Local_179.f_49[0])
	{
		return 1;
	}
	if (func_299(Local_179.f_49[0], &iLocal_32))
	{
		return 1;
	}
	iLocal_32++;
	if (iLocal_32 >= 2)
	{
		iLocal_32 = 0;
	}
	return 0;
}

Vector3 func_385(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(5, 0);
				case 2:
					return func_447(5, 1);
				case 4:
					return func_447(5, 2);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(7, 1);
				case 1:
					return func_447(7, 0);
				case 2:
					return func_447(7, 3);
				case 3:
					return func_447(7, 4);
				case 4:
					return func_447(7, 2);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(2, 0);
			case 2:
				return func_447(2, 1);
			case 4:
				return func_447(2, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(3, 1);
			case 1:
				return func_447(3, 0);
			case 2:
				return func_447(3, 3);
			case 3:
				return func_447(3, 4);
			case 4:
				return func_447(3, 2);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_386(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return 1.75f;
				case 2:
					return 1.75f;
				case 4:
					return 3f;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 1.75f;
				case 1:
					return 1.75f;
				case 3:
					return 3f;
				case 2:
					return 1f;
				case 4:
					return 2f;
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return 1.75f;
			case 2:
				return 1.75f;
			case 4:
				return 3f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1.75f;
			case 1:
				return 1.75f;
			case 3:
				return 3f;
			case 2:
				return 1f;
			case 4:
				return 2f;
			default:
				break;
		}
	}
	return -1f;
}

int func_387(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return 1;
				case 2:
					return 1;
				case 4:
					return 0;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 3:
					return 1;
				case 4:
					return 1;
				case 2:
					return 1;
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 2:
				return 1;
			case 4:
				return 0;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 3:
				return 1;
			case 4:
				return 1;
			case 2:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

bool func_388(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return true;
				case 2:
					return true;
				case 4:
					return true;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return true;
				case 1:
					return true;
				case 3:
					return true;
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return true;
			case 2:
				return true;
			case 4:
				return true;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return true;
			case 1:
				return true;
			case 3:
				return true;
			default:
				break;
		}
	}
	return false;
}

char* func_443()
{
	return "ORR_V2_ILO_NEG";
}

void func_445()
{
	if (__LIB_0__::func_51(&uLocal_533, 2))
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], 725.1475f, -448.0963f, 83.0689f, 0f, 0f, 136.9009f, 56.30475f, 93.34787f, 15.65002f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], 655.288f, -409.3354f, 89.28727f, 0f, 0f, 146.3069f, 56.30475f, 106.0022f, 24.81304f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(723.0323f, -446.1176f, 83.0689f, 0f, 0f, 136.9009f, 62.13698f, 93.34787f, 15.65002f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 658.0131f, -540.8625f, 62.43887f, 0f, 0f, 156.6684f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 815.4044f, -449.4122f, 62.43887f, 0f, 0f, 148.5282f, 101.063f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 632.79f, -337.6293f, 62.43887f, 0f, 0f, 148.5282f, 148.9367f, 236.6828f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(706.9374f, -404.5294f, 89.061f, 0f, 0f, 136.716f, 34.74449f, 32.68204f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(700.6584f, -414.4554f, 89.06124f, 0f, 0f, 136.716f, 14.54379f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(691.767f, -423.701f, 89.061f, 0f, 0f, 136.716f, 10.89182f, 32.68204f, 11.48877f, "volSlowest");
		iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(740.3391f, -461.0711f, 83.33646f, 0f, 0f, 156.7456f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
	}
	else
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], 637.2888f, -415.046f, 100.3093f, 0f, 0f, -50.42155f, 56.30475f, 64.81712f, 51.95887f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], 697.9006f, -459.1436f, 89.28727f, 0f, 0f, -41.01562f, 41.01216f, 94.53839f, 40.84854f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(635.3097f, -412.6505f, 98.7776f, 0f, 0f, -50.42154f, 62.13698f, 93.34787f, 28.13465f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 715.6987f, -331.594f, 62.43887f, 0f, 0f, -30.65407f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 637.2098f, -355.8026f, 90.84097f, 0f, 0f, -50.19184f, 130.8701f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 718.1372f, -539.7453f, 62.43887f, 0f, 0f, -45.33796f, 169.5687f, 236.6828f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(654.6968f, -458.8107f, 89.06124f, 0f, 0f, -50.6065f, 34.74449f, 32.68204f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(661.8083f, -452.7553f, 89.06124f, 0f, 0f, -50.6065f, 29.81209f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(669.8329f, -444.6637f, 89.06124f, 0f, 0f, -50.6065f, 22.01446f, 32.68204f, 11.48877f, "volSlowest");
		iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(623.8749f, -400.2407f, 83.33646f, 0f, 0f, -30.57684f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
	}
}

void func_446()
{
	Local_179.f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
	VOLUME::_0x39816F6F94F385AD(Local_179.f_239, -91.40433f, 320.485f, 99.97915f, 0f, 0f, 25.04761f, 89.26486f, 100.682f, 52.32938f);
	VOLUME::_0x39816F6F94F385AD(Local_179.f_239, -115.2348f, 312.9216f, 99.97916f, 0f, 0f, 25.04761f, 30.67535f, 141.5386f, 52.32938f);
	if (__LIB_0__::func_51(&uLocal_533, 2))
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], -113.0475f, 319.9516f, 102.2646f, 0f, 0f, -19.76745f, 56.30475f, 93.34787f, 15.65002f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], -33.54915f, 312.028f, 108.483f, 0f, 0f, -10.36155f, 56.30475f, 106.0022f, 24.81304f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_523[1], -124.972f, 275.153f, 102.604f, 0f, 0f, 70f, 4f, 6f, 2f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volWarpPeds");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[8], -110.3219f, 318.9721f, 102.2646f, 0f, 0f, -19.76745f, 62.13698f, 93.34787f, 15.65002f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_523[8], -124.972f, 275.153f, 102.604f, 0f, 0f, 70f, 4f, 6f, 2f);
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -88.14307f, 431.7215f, 81.63461f, 0f, 0f, 0f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -196.4457f, 285.413f, 81.63461f, 0f, 0f, -8.140158f, 101.063f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], 15.50913f, 255.0958f, 81.63461f, 0f, 0f, -8.140158f, 148.9367f, 236.6828f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -135.694f, 282.614f, 103.588f, 0f, 0f, 62f, 11f, 21f, 10f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-83.0128f, 275.6543f, 108.257f, 0f, 0f, -19.95239f, 34.74449f, 40.60586f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-74.91033f, 299.8469f, 108.257f, 0f, 0f, -19.95239f, 31.96415f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-68.36612f, 317.3996f, 108.257f, 0f, 0f, -19.95239f, 28.83469f, 32.68204f, 11.48877f, "volSlowest");
	}
	else
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], -82.823f, 324.78f, 95.66585f, 0f, 0f, 10.25873f, 66.57899f, 103.55f, 34.00753f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[1], -162.771f, 311.783f, 95.66585f, 0f, 0f, 16.10305f, 40.82469f, 103.55f, 34.00753f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-85.20458f, 324.349f, 95.66585f, 0f, 0f, 10.25873f, 71.66914f, 103.55f, 34.00753f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -77.10319f, 227.3434f, 81.63461f, 0f, 0f, -163.1078f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -31.49129f, 388.9274f, 81.63461f, 0f, 0f, -157.6661f, 163.6616f, 211.3185f, 117.7756f);
		VOLUME::_0x39816F6F94F385AD(iLocal_523[2], -247.5605f, 378.8534f, 81.63461f, 0f, 0f, -150.3424f, 126.4329f, 56.91168f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-136.959f, 351.6969f, 101.151f, 0f, 0f, 24.03562f, 59.294f, 78.97474f, 13.489f, "volSlowNorth");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-136.5299f, 349.0497f, 100.722f, 0f, 0f, 23.64807f, 60.407f, 24.49643f, 13.489f, "volSlowerNorth");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-125.3727f, 323.3134f, 100.722f, 0f, 0f, 24.54023f, 58.95389f, 32.682f, 13.489f, "volSlowestNorth");
	}
	iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-132.1358f, 325.8486f, 102.5322f, 0f, 0f, 0.077269f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
}

Vector3 func_447(int iParam0, int iParam1)
{
	return func_557(iParam0, iParam1);
}

float func_457(int iParam0, int iParam1)
{
	return func_559(iParam0, iParam1);
}

void func_459(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_560(iParam0, iParam1))
		{
			if (__LIB_0__::func_206(iParam0, iParam1))
			{
				if (func_562(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					__LIB_0__::func_207(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

struct<4> func_463(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_0__::func_51(&uParam0, 64))
	{
		if (__LIB_0__::func_51(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_564(4, 0);
				case 1:
					return func_564(4, 1);
				case 2:
					return func_564(4, 2);
				case 3:
					return func_564(4, 10);
				case 4:
					return func_564(4, 11);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_564(6, 0);
				case 1:
					return func_564(6, 1);
				case 2:
					return func_564(6, 2);
				case 3:
					return func_564(6, 10);
				case 4:
					return func_564(6, 11);
				default:
					break;
			}
		}
	}
	else if (__LIB_0__::func_51(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_564(0, 0);
			case 1:
				return func_564(0, 1);
			case 2:
				return func_564(0, 2);
			case 3:
				return func_564(0, 10);
			case 4:
				return func_564(0, 11);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_564(1, 0);
			case 1:
				return func_564(1, 1);
			case 2:
				return func_564(1, 2);
			case 3:
				return func_564(1, 10);
			case 4:
				return func_564(1, 11);
			default:
				break;
		}
	}
	return Var0;
}

int func_473(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_3__::func_269(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_473(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_3__::func_272(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_270(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

int func_494(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_494(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_4__::func_105(iParam0, iParam1);
	return 1;
}

Vector3 func_557(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -84.6426f, 316.428f, 106.0875f;
				case 1:
					return -84.2981f, 322.8091f, 105.4735f;
				case 2:
					return -89.1717f, 333.6335f, 103.0008f;
				case 3:
					return -88.102f, 328.3871f, 103.8424f;
				case 4:
					return -79.1038f, 311.7244f, 106.588f;
				case 5:
					return -82.0975f, 314.9543f, 106.2141f;
				case 6:
					return -66.8993f, 306.0392f, 106.9735f;
				case 7:
					return -74.366f, 309.3329f, 106.4846f;
				case 8:
					return -95.0175f, 327.7535f, 102.8154f;
				case 9:
					return -71.2988f, 314.3236f, 107.0159f;
				case 10:
					return -42.0266f, 345.552f, 114.0236f;
				case 11:
					return -43.0849f, 348.8506f, 113.8612f;
				case 12:
					return -109.9214f, 335.0656f, 102.2082f;
				case 13:
					return -131.5672f, 280.713f, 101.1639f;
				case 14:
					return -50.7783f, 314.9141f, 110.3457f;
				case 15:
					return -60.3845f, 324.6346f, 109.8844f;
				case 16:
					return -65.8762f, 309.8829f, 107.6383f;
				case 17:
					return -85.2671f, 335.6891f, 103.9268f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -105.4812f, 325.33f, 101.879f;
				case 1:
					return -113.141f, 322.4635f, 101.5815f;
				case 2:
					return -108.4091f, 324.0324f, 101.8259f;
				case 3:
					return -106.3346f, 319.3181f, 102.4154f;
				case 4:
					return -114.4443f, 322.9393f, 101.7106f;
				case 5:
					return -117.212f, 320.9265f, 101.5372f;
				case 6:
					return -131.7749f, 331.1822f, 101.2828f;
				case 7:
					return -127.0955f, 332.4306f, 101.0931f;
				case 8:
					return -109.3698f, 329.7699f, 101.7037f;
				case 9:
					return -126.7656f, 328.9117f, 101.0141f;
				case 10:
					return -139.9803f, 293.297f, 100.8215f;
				case 11:
					return -138.6669f, 293.1178f, 100.938f;
				case 12:
					return -141.7007f, 304.9293f, 102.0377f;
				case 13:
					return -137.589f, 304.7306f, 102.3917f;
				case 14:
					return -50.9267f, 303.1498f, 107.6625f;
				case 15:
					return -100.9347f, 302.4319f, 103.159f;
				case 16:
					return -133.9256f, 330.0964f, 101.3673f;
				case 17:
					return -102.9949f, 311.6792f, 103.6171f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -69.5277f, 312.8127f, 107.1586f;
				case 1:
					return -75.1162f, 316.1115f, 107.1791f;
				case 2:
					return -65.8874f, 308.0902f, 107.5138f;
				case 3:
					return -122.9017f, 302.4197f, 101.6003f;
				case 4:
					return -126.8734f, 326.1433f, 101.1495f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -125.385f, 327.3113f, 101.1892f;
				case 1:
					return -131.9852f, 327.2832f, 101.441f;
				case 2:
					return -137.1946f, 307.5524f, 102.3471f;
				case 3:
					return -108.6748f, 323.6061f, 101.8175f;
				case 4:
					return -145.3344f, 334.7376f, 100.5408f;
				case 5:
					return -56.1593f, 309.1718f, 108.4659f;
				case 6:
					return -98.5945f, 306.3739f, 103.6851f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 699.4623f, -449.7601f, 84.0806f;
				case 1:
					return 694.3791f, -450.37f, 84.1206f;
				case 2:
					return 690.1107f, -453.6178f, 83.472f;
				case 3:
					return 692.0172f, -447.1501f, 83.9325f;
				case 4:
					return 691.8858f, -435.3443f, 83.7618f;
				case 5:
					return 696.0519f, -433.0005f, 84.1123f;
				case 6:
					return 688.5836f, -420.7917f, 84.1974f;
				case 7:
					return 693.7426f, -423.7245f, 84.1361f;
				case 8:
					return 697.722f, -451.11f, 84.1198f;
				case 9:
					return 690.5294f, -425.6945f, 83.8836f;
				case 10:
					return 642.5613f, -431.6535f, 95.9046f;
				case 11:
					return 642.669f, -435.1697f, 94.4427f;
				case 12:
					return 704.439f, -466.2914f, 81.5926f;
				case 13:
					return 740.9304f, -453.4742f, 75.5977f;
				case 14:
					return 655.7692f, -427.5562f, 93.3905f;
				case 15:
					return 657.0507f, -430.3001f, 91.6493f;
				case 16:
					return 691.07f, -417.4818f, 84.4804f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 686.975f, -424.5924f, 83.918f;
				case 1:
					return 691.5994f, -429.1452f, 83.9385f;
				case 2:
					return 684.5853f, -419.1295f, 84.2732f;
				case 3:
					return 741.2778f, -427.4204f, 78.3597f;
				case 4:
					return 739.3923f, -451.4002f, 77.9089f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 683.1494f, -459.777f, 84.0083f;
				case 1:
					return 680.584f, -461.4462f, 84.2966f;
				case 2:
					return 689.5515f, -456.8322f, 83.1239f;
				case 3:
					return 687.7432f, -456.9682f, 83.1931f;
				case 4:
					return 683.62f, -450.6996f, 83.5166f;
				case 5:
					return 684.2194f, -448.0876f, 83.3847f;
				case 6:
					return 671.7957f, -448.7225f, 84.542f;
				case 7:
					return 669.0417f, -445.6638f, 84.4587f;
				case 8:
					return 682.4808f, -457.3188f, 84.082f;
				case 9:
					return 669.6201f, -442.6719f, 84.4687f;
				case 10:
					return 680.1441f, -389.9271f, 98.8519f;
				case 11:
					return 677.5911f, -387.3658f, 100.7888f;
				case 12:
					return 678.2244f, -399.2587f, 96.5831f;
				case 13:
					return 671.4579f, -398.9648f, 99.8846f;
				case 14:
					return 692.4266f, -462.2748f, 82.2805f;
				case 15:
					return 697.6883f, -457.5936f, 83.1492f;
				case 16:
					return 669.6953f, -451.7408f, 84.6534f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -125.385f, 327.3113f, 101.1892f;
				case 1:
					return -131.9852f, 327.2832f, 101.441f;
				case 2:
					return -137.1946f, 307.5524f, 102.3471f;
				case 3:
					return -108.6748f, 323.6061f, 101.8175f;
				case 4:
					return -145.3344f, 334.7376f, 100.5408f;
				case 5:
					return -56.1593f, 309.1718f, 108.4659f;
				case 6:
					return -98.5945f, 306.3739f, 103.6851f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_559(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 217.0172f;
				case 1:
					return 217.0172f;
				case 2:
					return 171.0172f;
				case 3:
					return 171.0172f;
				case 4:
					return 174.2635f;
				case 5:
					return 212.2635f;
				case 6:
					return 139.6044f;
				case 7:
					return 155.6044f;
				case 8:
					return 235.0172f;
				case 9:
					return 254.4908f;
				case 10:
					return 135.0172f;
				case 11:
					return 133.0172f;
				case 12:
					return 160.8172f;
				case 13:
					return 289.0172f;
				case 14:
					return 143.6575f;
				case 15:
					return 159.6575f;
				case 16:
					return -58.1285f;
				case 17:
					return 225.1706f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 86.4174f;
				case 1:
					return 100.4174f;
				case 2:
					return 46.4174f;
				case 3:
					return 40.4174f;
				case 4:
					return 38.4174f;
				case 5:
					return 22.4174f;
				case 6:
					return 2.4174f;
				case 7:
					return 10.4174f;
				case 8:
					return 88.4174f;
				case 9:
					return 98.4174f;
				case 10:
					return 358.4174f;
				case 11:
					return 344.4174f;
				case 12:
					return 344.4174f;
				case 13:
					return 352.4174f;
				case 14:
					return 19.2641f;
				case 15:
					return 23.2641f;
				case 16:
					return 151.8715f;
				case 17:
					return 91.1706f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 148.6296f;
				case 1:
					return 150.6296f;
				case 2:
					return 136.6296f;
				case 3:
					return -131.2821f;
				case 4:
					return 196.7179f;
			}
			Jump @1776; //curOff = 817
			switch (iParam1)
			{
				case 0:
					return 1.8339f;
				case 1:
					return 5.8339f;
				case 2:
					return 349.8339f;
				case 3:
					return 19.8339f;
				case 4:
					return 323.8339f;
				case 5:
					return 47.2641f;
				case 6:
					return 323.2641f;
			}
			Jump @1776; //curOff = 947
			switch (iParam1)
			{
				case 0:
					return -2.9828f;
				case 1:
					return -2.9828f;
				case 2:
					return -36.9828f;
				case 3:
					return -48.9828f;
				case 4:
					return -13.7365f;
				case 5:
					return -7.7365f;
				case 6:
					return -70.3956f;
				case 7:
					return -64.3956f;
				case 8:
					return 5.0172f;
				case 9:
					return 14.4908f;
				case 10:
					return -84.9828f;
				case 11:
					return -86.9828f;
				case 12:
					return -59.1828f;
				case 13:
					return -2.9828f;
				case 14:
					return 283.6575f;
				case 15:
					return 283.6575f;
				case 16:
					return 121.7756f;
			}
			Jump @1776; //curOff = 1247
			switch (iParam1)
			{
				case 0:
					return 314.6296f;
				case 1:
					return 316.6296f;
				case 2:
					return 302.6296f;
				case 3:
					return 34.7179f;
				case 4:
					return 2.7179f;
			}
			Jump @1776; //curOff = 1343
			switch (iParam1)
			{
				case 0:
					return 44.4174f;
				case 1:
					return 30.4174f;
				case 2:
					return 18.4174f;
				case 3:
					return 16.4174f;
				case 4:
					return 56.4174f;
				case 5:
					return 80.4174f;
				case 6:
					return 98.4174f;
				case 7:
					return 126.4174f;
				case 8:
					return 44.4174f;
				case 9:
					return 36.4174f;
				case 10:
					return 160.4174f;
				case 11:
					return 160.4174f;
				case 12:
					return 176.4174f;
				case 13:
					return 166.4174f;
				case 14:
					return 83.2641f;
				case 15:
					return 75.2641f;
				case 16:
					return 279.7756f;
			}
			Jump @1776; //curOff = 1643
			switch (iParam1)
			{
				case 0:
					return 1.8339f;
				case 1:
					return 5.8339f;
				case 2:
					return 349.8339f;
				case 3:
					return 19.8339f;
				case 4:
					return 323.8339f;
				case 5:
					return 47.2641f;
				case 6:
					return 323.2641f;
			}
			return 0f;
		}
bool func_560(int iParam0, int iParam1)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_562(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_560(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

struct<4> func_564(int iParam0, int iParam1)
{
	return func_686(iParam0, iParam1);
}

struct<4> func_686(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_557(iParam0, iParam1) };
	Var0.f_3 = func_559(iParam0, iParam1);
	return Var0;
}

