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
	struct<38> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 5, 0, -1 } ;
	bool bLocal_312 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_312 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_312, 961, 0);
		if (bLocal_312)
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
	__LIB_17__::func_769();
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
		__LIB_1__::func_544(Local_15.f_237);
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
		if (__LIB_2__::func_657(&uVar5))
		{
			fVar4 = __LIB_2__::func_493();
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
				vVar1 = { __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221) };
				vVar1 = { __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221) };
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
	int iVar1;
	struct<4> Var2;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_125(iVar0), 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], true, true);
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				PED::_0x931B241409216C1F(Local_15[iVar0], Local_15.f_40[iVar0], 0);
			}
			__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			switch (iVar0)
			{
				case 0:
					Var2 = { func_128(&Local_274, iVar0) };
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var2, 1f, -1, 2.5f, 0, Var2.f_3);
					__LIB_2__::func_915(0, joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA"), Var2, Var2.f_3, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
					__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_BOW"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 1:
					Var2 = { func_131(&Local_274, iVar0) };
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_2__::func_915(Local_15[iVar0], joaat("WORLD_HUMAN_SMOKE"), Var2, Var2.f_3, -1, 1, 1, 0, -1082130432 /* Float: -1f */);
					break;
				case 2:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_132(Local_15[iVar0], Local_15.f_40[iVar0], 0, -1, 1);
					break;
				case 3:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_132(Local_15[iVar0], Local_15.f_40[iVar0], 0, -1, 1);
					break;
				default:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
			}
			__LIB_2__::func_743(&Local_15, iVar0);
		}
		iVar0++;
	}
	return true;
}

bool func_23()
{
	int iVar0;
	if (!__LIB_0__::func_51(&Local_274, 8))
	{
		if (func_137())
		{
			__LIB_2__::func_746();
			func_139();
			__LIB_0__::func_614(&Local_274, 3);
		}
	}
	switch (Local_274.f_4)
	{
		case 0:
			if (__LIB_2__::func_729())
			{
				if (func_142())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_0__::func_614(&Local_274, 3);
				}
			}
			else if (func_144())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_234(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else if (func_146())
			{
				__LIB_2__::func_746();
				if (__LIB_2__::func_1(Local_15[0], 0, 0))
				{
					__LIB_2__::func_357(Local_15[0], Global_36, 3, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_REACT(0, Global_35, Global_36, "Default_Shocked", 2f, 0, 4);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
				}
				__LIB_2__::func_706(&Local_15, 1);
				__LIB_2__::func_483(&Local_15, 1);
				__LIB_2__::func_373();
				__LIB_0__::func_614(&Local_274, 1);
			}
			break;
		case 1:
			__LIB_2__::func_746();
			func_149();
			if (func_150())
			{
				__LIB_0__::func_614(&Local_274, 3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	Local_274.f_35 = __LIB_2__::func_327(&Local_15);
	func_149();
	func_164();
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		__LIB_2__::func_399(&Local_15, iVar0, Local_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_8[0 /*3*/]), 0);
			__LIB_0__::func_615(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_8[0 /*3*/]), 5f) || Local_274.f_35 <= 2)
			{
				if (__LIB_2__::func_1(Local_15[0], 0, 1))
				{
					__LIB_1__::func_733(Local_15[0]);
					PED::SET_PED_COMBAT_RANGE(Local_15[0], 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_15[0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[0], 98, true);
				}
				__LIB_0__::func_615(&Local_274, 2);
			}
			break;
		case 2:
			if (Local_274.f_35 <= 1)
			{
				Local_274.f_37 = __LIB_2__::func_733(&Local_15);
				func_169();
				__LIB_2__::func_744();
				__LIB_0__::func_615(&Local_274, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_51(&Local_274, 32768))
			{
				if (func_171())
				{
					__LIB_0__::func_7(&Local_274, 32768);
				}
			}
			else if (func_173())
			{
				__LIB_0__::func_8(&Local_274, 32768);
			}
			if (Local_274.f_35 <= 0)
			{
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
		Local_15.f_118[iVar0 /*4*/].f_1 = { func_195(&Local_274, iVar0) };
		iVar0++;
	}
	__LIB_2__::func_724(&Local_15, 110, 1065353216 /* Float: 1f */);
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
	fVar0[0] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221));
	fVar0[1] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221));
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
	return true;
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
			Local_274.f_3 = 1;
			break;
		case 1:
			iVar0 = 1;
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
	return func_259(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_261(&Local_274, iVar0);
}

var func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_262(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_265(&Local_274, iVar0);
}

var func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_266(&Local_274, iVar0);
}

char* func_125(int iParam0)
{
	int iVar0;
	iVar0 = func_267(iParam0);
	return func_268(iVar0);
}

struct<4> func_128(var uParam0, int iParam1)
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
						return func_271(0, 1);
					case 1:
						return func_271(0, 3);
					case 2:
						return func_271(0, 5);
					case 3:
						return func_271(0, 7);
					case 4:
						return func_271(0, 9);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_271(1, 1);
					case 1:
						return func_271(1, 3);
					case 2:
						return func_271(1, 5);
					case 3:
						return func_271(1, 7);
					case 4:
						return func_271(1, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_131(var uParam0, int iParam1)
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
						return func_271(0, 0);
					case 1:
						return func_271(0, 2);
					case 2:
						return func_271(0, 4);
					case 3:
						return func_271(0, 6);
					case 4:
						return func_271(0, 8);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_271(1, 0);
					case 1:
						return func_271(1, 2);
					case 2:
						return func_271(1, 4);
					case 3:
						return func_271(1, 6);
					case 4:
						return func_271(1, 8);
					default:
						break;
				}
			}
			return Var0;
		}
int func_132(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

bool func_137()
{
	if (Local_274.f_34 > 1 || Local_274.f_34 < 0)
	{
		Local_274.f_34 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[Local_274.f_34]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_40[Local_274.f_34], Global_35, 1, 1))
		{
			return true;
		}
	}
	if (Local_274.f_34 <= 1)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15[Local_274.f_34], Global_35, 1, 1))
		{
			return true;
		}
	}
	if (__LIB_2__::func_745(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_34), 0, 4, 1))
	{
		return true;
	}
	return false;
}

void func_139()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			__LIB_2__::func_357(Local_15[iVar0], Global_36, 3, 0, 3);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.1f, 0.3f, 1, 1);
			if (!__LIB_0__::func_51(&Local_274, 1024))
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "GENERIC_FRIGHTENED_HIGH", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				__LIB_0__::func_7(&Local_274, 1024);
			}
		}
		iVar0++;
	}
	__LIB_0__::func_7(&Local_274, 8);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_142()
{
	func_139();
	__LIB_0__::func_7(&Local_274, 16);
	return true;
}

bool func_144()
{
	if (__LIB_0__::func_51(&Local_274, 8192))
	{
		return true;
	}
	if (!__LIB_2__::func_157(Local_274.f_27[2], Global_36))
	{
		if (__LIB_2__::func_157(Local_274.f_27[1], Global_36))
		{
			if (!__LIB_2__::func_157(Local_274.f_27[3], Global_36))
			{
				__LIB_0__::func_11(&Local_15, 7);
				__LIB_0__::func_7(&Local_274, 8192);
				return true;
			}
		}
	}
	if (__LIB_2__::func_708(&Local_15))
	{
		__LIB_0__::func_7(&Local_274, 8192);
		return true;
	}
	return false;
}

bool func_146()
{
	if (__LIB_2__::func_157(Local_274.f_27[3], Global_36))
	{
		return true;
	}
	return false;
}

void func_149()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (PED::IS_PED_SHOOTING(Local_15[iVar0]) || __LIB_1__::func_472(Local_15[iVar0], 50f, 10f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_150()
{
	switch (Local_274.f_6)
	{
		case 0:
			__LIB_2__::func_384(&Local_274, 1);
			break;
		case 1:
			__LIB_1__::func_283(&(Local_274.f_8[1 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 0.1f))
			{
				__LIB_2__::func_336(Local_15[0], Global_35, "ARRIVAL_COMBAT_NEUTRAL", -1073741824 /* Float: -2f */, 1, -500314840, 1);
				__LIB_2__::func_384(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0, 1, Local_15[0], 1))
			{
				__LIB_2__::func_336(Local_15[0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, -500314840, 2);
				__LIB_2__::func_384(&Local_274, 3);
			}
			break;
		case 3:
			__LIB_1__::func_283(&(Local_274.f_8[2 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 0.3f))
			{
				func_287();
				func_288();
				__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
				__LIB_2__::func_384(&Local_274, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_164()
{
	int iVar0;
	if (__LIB_0__::func_51(&Local_274, 16384))
	{
		return;
	}
	iVar0 = 2;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, -1);
				__LIB_0__::func_7(&Local_274, 16384);
			}
			else
			{
				iVar0++;
			}
			if (__LIB_0__::func_51(&Local_274, 16384))
			{
				iVar0 = 2;
				while (iVar0 <= 4)
				{
					if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
					{
						__LIB_1__::func_733(Local_15[iVar0]);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_169()
{
	if (PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_37]))
	{
		PED::_0x1854217C640B39EC(Local_15[Local_274.f_37], Global_35, 0f, 0f, 0f, 12f, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[Local_274.f_37], 51, true);
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[Local_274.f_37], 51, false);
		PED::_0x1854217C640B39EC(Local_15[Local_274.f_37], Global_35, 0f, 0f, 0f, 8f, 0, 0);
	}
	PED::SET_PED_COMBAT_RANGE(Local_15[Local_274.f_37], 0);
}

bool func_171()
{
	int iVar0;
	int iVar1;
	if ((Local_15.f_9[Local_274.f_37] > 18f || PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_37])) || PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_37], joaat("WEAPON_MELEE_KNIFE")))
	{
		iVar0 = joaat("WEAPON_MELEE_KNIFE");
	}
	else if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_37], joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
	{
		iVar0 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_37], iVar0, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(Local_15[Local_274.f_37], 1, 1, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_MELEE(0, Global_35, 0, 1, 1, 2f, 1, -1082130432 /* Float: -1f */);
	__LIB_1__::func_474(Local_15[Local_274.f_37], &iVar1, 0, 0, 1, 1);
	return true;
}

bool func_173()
{
	int iVar0;
	int iVar1;
	if ((PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_37]) || PED::IS_PED_ON_MOUNT(Global_35)) || Local_15.f_9[Local_274.f_37] > 30f)
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(Local_15[Local_274.f_37], false, false);
		if (!WEAPON::IS_WEAPON_VALID(iVar0))
		{
			return false;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_37], iVar0, false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Local_15[Local_274.f_37], 1, 1, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[Local_274.f_37], &iVar1, 0, 0, 1, 1);
		return true;
	}
	return false;
}

Vector3 func_195(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_326(uParam0, iParam1) };
	return vVar0;
}

void func_245()
{
	switch (Local_274.f_2)
	{
		case 0:
			func_358(&Local_15, &Local_274);
			break;
	}
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -207072849;
		case 1:
			return 97646082;
		case 2:
			return 249802073;
		case 3:
			return -106855723;
		case 4:
			return 1028459043;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_261(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_369(uParam0, iParam1) };
	return vVar0;
}

var func_262(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_369(uParam0, iParam1) };
	return Var0.f_3;
}

Vector3 func_265(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_131(uParam0, iParam1) };
	return vVar0;
}

var func_266(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_131(uParam0, iParam1) };
	return Var0.f_3;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0255_G_M_M_UniMountainMen_01_WHITE_01";
		case 1:
			return "0257_G_M_M_UniMountainMen_02_WHITE_01";
		default:
			break;
	}
	return "NULL VOICE";
}

struct<4> func_271(int iParam0, int iParam1)
{
	return func_379(iParam0, iParam1);
}

void func_287()
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	fVar2 = 0f;
	iVar0 = 2;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			vVar3 = { func_392(&Local_274, iVar0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, fVar2, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], vVar3, 5f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 51, true);
		}
		iVar0++;
	}
}

void func_288()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	if (__LIB_0__::func_51(&Local_274, 128))
	{
		return;
	}
	fVar5 = 0f;
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			vVar0 = { func_392(&Local_274, iVar3) };
			switch (iVar3)
			{
				case 0:
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, 3000, 0, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar5, 0, 1, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar3], vVar0, 3f, 1, 0, 0);
					break;
				case 1:
					if (__LIB_2__::func_1(Local_15.f_40[iVar3], 0, 0))
					{
						__LIB_2__::func_357(Local_15[iVar3], Global_36, 3, 0, 3);
						TASK::OPEN_SEQUENCE_TASK(&iVar4);
						if (!PED::IS_PED_ON_MOUNT(Local_15[iVar3]))
						{
							TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar3], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
						__LIB_1__::func_474(Local_15[iVar3], &iVar4, 0, 0, 1, 1);
					}
					break;
			}
		}
		iVar3++;
	}
	__LIB_0__::func_7(&Local_274, 128);
}

struct<4> func_326(var uParam0, int iParam1)
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
						return func_271(0, 15);
					case 2:
					case 3:
					case 4:
						return func_271(0, 16);
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
						return func_271(1, 15);
					case 2:
					case 3:
					case 4:
						return func_271(1, 16);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_358(var uParam0, var uParam1)
{
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	if (__LIB_0__::func_51(uParam1, 1))
	{
		uParam1->f_27[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1350.115f, -1268.691f, 75.20052f, 0f, 0f, -4.036211f, 52.58806f, 65f, 30f, "volTrigger");
		uParam1->f_27[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_27[1], -1264.09f, -1382.894f, 76.45531f, 0f, 0f, -22.1402f, 240f, 85.22054f, 100f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_27[1], -1395.83f, -1113.662f, 61.73892f, 0f, 0f, -90.04591f, 240f, 30f, 100f);
	}
	else if (__LIB_0__::func_51(uParam1, 2))
	{
		uParam1->f_27[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1257.442f, -1251.642f, 75.20052f, 0f, 0f, 12.96379f, 52.58806f, 75.62617f, 30f, "volTrigger");
		uParam1->f_27[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_27[1], -1279.936f, -1422.709f, 76.45531f, 0f, 0f, -94.6375f, 240f, 159.1742f, 100f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_27[1], -1391.778f, -1130.949f, 61.73892f, 0f, 0f, -56.51408f, 240f, 152.7547f, 100f);
	}
}

struct<4> func_369(var uParam0, int iParam1)
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
						return func_271(0, 10);
					case 1:
						return func_271(0, 11);
					case 2:
						return func_271(0, 12);
					case 3:
						return func_271(0, 13);
					case 4:
						return func_271(0, 14);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_271(1, 10);
					case 1:
						return func_271(1, 11);
					case 2:
						return func_271(1, 12);
					case 3:
						return func_271(1, 13);
					case 4:
						return func_271(1, 14);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_379(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_428(iParam0, iParam1) };
	Var0.f_3 = func_429(iParam0, iParam1);
	return Var0;
}

Vector3 func_392(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_128(uParam0, iParam1) };
	return vVar0;
}

Vector3 func_428(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1327.129f, -1282.6f, 86.9423f;
				case 1:
					return -1338.342f, -1274.755f, 87.4236f;
				case 2:
					return -1338.633f, -1280.481f, 87.7132f;
				case 3:
					return -1324.546f, -1296.708f, 88.2001f;
				case 4:
					return -1242.461f, -1226.301f, 78.308f;
				case 5:
					return -1261.388f, -1237.051f, 81.1779f;
				case 6:
					return -1239.048f, -1228.177f, 78.38f;
				case 7:
					return -1249.504f, -1246.286f, 80.5063f;
				case 8:
					return -1240.927f, -1258.676f, 80.1113f;
				case 9:
					return -1324.028f, -1256.756f, 82.5217f;
				case 10:
					return -1319.727f, -1285.641f, 86.6225f;
				case 11:
					return -1324.069f, -1297.454f, 88.2617f;
				case 12:
					return -1244.76f, -1228.38f, 79.0204f;
				case 13:
					return -1240.69f, -1231.042f, 78.8714f;
				case 14:
					return -1246.821f, -1258.579f, 80.9484f;
				case 15:
					return -1366.611f, -1292.31f, 83.8996f;
				case 16:
					return -1267.322f, -1244.423f, 81.2832f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1260.948f, -1277.979f, 86.4429f;
				case 1:
					return -1255.825f, -1270.038f, 85.5275f;
				case 2:
					return -1264.021f, -1270.681f, 85.944f;
				case 3:
					return -1275.669f, -1278.313f, 87.45f;
				case 4:
					return -1360.44f, -1288.652f, 84.1923f;
				case 5:
					return -1345.387f, -1264.332f, 83.2897f;
				case 6:
					return -1360.917f, -1294.029f, 84.556f;
				case 7:
					return -1350.337f, -1252.044f, 82.3266f;
				case 8:
					return -1333.195f, -1279.982f, 87.4301f;
				case 9:
					return -1315.229f, -1273.676f, 85.6144f;
				case 10:
					return -1275.624f, -1275.919f, 87.0707f;
				case 11:
					return -1278.693f, -1278.171f, 87.2004f;
				case 12:
					return -1357.817f, -1285.768f, 84.2794f;
				case 13:
					return -1358.212f, -1291.928f, 84.7322f;
				case 14:
					return -1327.846f, -1289.546f, 87.6932f;
				case 15:
					return -1282.357f, -1250.275f, 81.9643f;
				case 16:
					return -1374.786f, -1296.512f, 83.727f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_429(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 63.9035f;
				case 1:
					return -6.0965f;
				case 2:
					return 71.9035f;
				case 3:
					return 281.9035f;
				case 4:
					return -8.9486f;
				case 5:
					return 95.0514f;
				case 6:
					return 321.162f;
				case 7:
					return 99.162f;
				case 8:
					return 17.0514f;
				case 9:
					return 83.0514f;
				case 10:
					return -64.92f;
				case 11:
					return -98.537f;
				case 12:
					return 125.6293f;
				case 13:
					return 89.6293f;
				case 14:
					return 47.6293f;
				case 15:
					return 145.6181f;
				case 16:
					return 95.6181f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 307.9035f;
				case 1:
					return -12.0965f;
				case 2:
					return 65.9037f;
				case 3:
					return 47.9037f;
				case 4:
					return 51.0515f;
				case 5:
					return 305.0515f;
				case 6:
					return 43.9106f;
				case 7:
					return 275.9106f;
				case 8:
					return 45.162f;
				case 9:
					return 311.162f;
				case 10:
					return -326.92f;
				case 11:
					return 65.463f;
				case 12:
					return 5.6293f;
				case 13:
					return -10.3707f;
				case 14:
					return -34.3707f;
				case 15:
					return 95.6181f;
				case 16:
					return 151.6181f;
			}
			break;
	}
	return 0f;
}

