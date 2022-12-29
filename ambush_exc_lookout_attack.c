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
	struct<36> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, -1, 0, 5 } ;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
			__LIB_19__::func_88();
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
					__LIB_2__::func_413();
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
		if (__LIB_2__::func_537(&uVar5))
		{
			fVar4 = __LIB_2__::func_323();
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
	if (Local_15.f_216 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_2__::func_292(iVar0);
	vVar2 = { func_108(iVar0) };
	fVar5 = func_109(iVar0);
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
	int iVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_125(iVar0), 0);
			if (iVar0 >= 3 && iVar0 <= 4)
			{
				if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
				{
					PED::_SET_PED_ON_MOUNT(Local_15[iVar0], Local_15.f_40[iVar0], -1, true);
				}
			}
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], true, true);
			switch (iVar0)
			{
				case 0:
					vVar2 = { func_127(&Local_274, iVar0) };
					fVar5 = func_128(&Local_274, iVar0);
					Local_274.f_32 = __LIB_2__::func_488(joaat("WORLD_HUMAN_SMOKE"), vVar2, fVar5, 0, -1f, 1);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 1f, -1, 2.5f, 0, fVar5);
					TASK::_TASK_USE_SCENARIO_POINT(0, Local_274.f_32, "WORLD_HUMAN_SMOKE_MALE_A", -1, true, false, 0, false, -1f, false);
					__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
					func_131(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 3:
					func_131(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 1:
					func_131(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				default:
					func_131(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
			}
			func_132(&Local_15, iVar0);
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
		if (func_136())
		{
			__LIB_17__::func_767();
			func_138();
			__LIB_0__::func_613(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_140())
			{
				if (func_141())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_0__::func_613(&Local_274, 3);
				}
			}
			else if (func_143())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_234(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else if (func_145())
			{
				__LIB_17__::func_767();
				if (__LIB_2__::func_1(Local_15[0], 0, 0))
				{
					__LIB_2__::func_357(Local_15[0], Global_36, 3, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_REACT(0, Global_35, Global_36, "Default_Shocked", 2f, 0, 4);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
					func_147();
				}
				__LIB_2__::func_706(&Local_15, 1);
				__LIB_2__::func_483(&Local_15, 1);
				__LIB_2__::func_373();
				__LIB_0__::func_613(&Local_274, 1);
			}
			break;
		case 1:
			__LIB_17__::func_767();
			func_149();
			__LIB_2__::func_375(&Local_15, 0);
			if (func_151())
			{
				__LIB_0__::func_613(&Local_274, 3);
			}
			break;
		case 2:
			__LIB_2__::func_655();
			__LIB_0__::func_613(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_31()
{
	Local_274.f_35 = __LIB_2__::func_327(&Local_15);
	func_149();
	func_166();
	if (__LIB_1__::func_285(&(Local_274.f_7[0 /*3*/]), 1.5f))
	{
		__LIB_2__::func_427(&Local_15);
	}
	__LIB_2__::func_375(&Local_15, 0);
	switch (Local_274.f_4)
	{
		case 0:
			func_168();
			__LIB_1__::func_283(&(Local_274.f_7[0 /*3*/]), 0);
			__LIB_0__::func_614(&Local_274, 1);
			break;
		case 1:
			func_170();
			if (__LIB_1__::func_285(&(Local_274.f_7[0 /*3*/]), 16f) || Local_274.f_35 <= 2)
			{
				func_171();
				__LIB_0__::func_614(&Local_274, 2);
			}
			break;
		case 2:
			func_170();
			if (Local_274.f_35 <= 0)
			{
				__LIB_2__::func_328();
				__LIB_0__::func_614(&Local_274, 3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_49()
{
	AUDIO::_0x531A78D6BF27014B("GAROA_Sounds");
	__LIB_2__::func_328();
}

bool func_83()
{
	float fVar0[2];
	int iVar3;
	int iVar4;
	switch (Local_15.f_221)
	{
		case 0:
			break;
		default:
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
	Local_15.f_181 = 2;
	__LIB_2__::func_234(&Local_15, 131072);
	__LIB_2__::func_382(&Local_15, 2, 1);
	__LIB_2__::func_732();
	func_242();
	func_243(&(Local_15.f_182), 9, 0, 1065353216 /* Float: 1f */, 1067450368 /* Float: 1.25f */, 1071644672 /* Float: 1.75f */, 0);
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_2)
	{
		case 0:
			__LIB_2__::func_187();
			func_254(&Local_15);
			AUDIO::_0xD9130842D7226045("GAROA_Sounds", 0);
			__LIB_2__::func_312(joaat("WORLD_HUMAN_SMOKE"), func_255(), joaat("G_M_Y_UNIEXCONFEDS_01"), joaat("WORLD_HUMAN_SMOKE_MALE_A"));
			Local_274.f_2 = 1;
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
			if (!func_258(&Local_15))
			{
				iVar0 = 0;
			}
			if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_SMOKE")))
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
	return func_260(iVar0);
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return joaat("G_M_O_UNIEXCONFEDS_01");
		default:
			break;
	}
	return joaat("G_M_Y_UNIEXCONFEDS_01");
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_262(&Local_274, iVar0);
}

float func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_263(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_266(&Local_274, iVar0);
}

float func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_267(&Local_274, iVar0);
}

char* func_125(int iParam0)
{
	int iVar0;
	iVar0 = func_268(iParam0);
	return func_269(iVar0);
}

Vector3 func_127(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_270(0, 1);
			case 3:
				return func_270(0, 3);
			case 4:
				return func_270(0, 5);
			case 1:
				return func_270(0, 7);
			case 2:
				return func_270(0, 9);
			default:
				break;
		}
	}
	else if (__LIB_0__::func_51(uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_270(1, 1);
			case 3:
				return func_270(1, 3);
			case 4:
				return func_270(1, 5);
			case 1:
				return func_270(1, 7);
			case 2:
				return func_270(1, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_128(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_271(0, 1);
			case 3:
				return func_271(0, 3);
			case 4:
				return func_271(0, 5);
			case 1:
				return func_271(0, 7);
			case 2:
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
			case 3:
				return func_271(1, 3);
			case 4:
				return func_271(1, 5);
			case 1:
				return func_271(1, 7);
			case 2:
				return func_271(1, 9);
			default:
				break;
		}
	}
	return 0f;
}

int func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bVar0 = __LIB_0__::func_27(iParam3, 1);
	bVar1 = __LIB_0__::func_27(iParam3, 2);
	bVar2 = !__LIB_0__::func_27(iParam3, 4);
	bVar3 = __LIB_0__::func_27(iParam3, 8);
	bVar4 = !__LIB_0__::func_27(iParam3, 16);
	bVar5 = __LIB_0__::func_27(iParam3, 32);
	bVar6 = __LIB_0__::func_27(iParam3, 64);
	return func_273(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_132(var uParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*uParam0)[iParam1], 0, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_RANGE((*uParam0)[iParam1], 0);
	PED::SET_PED_COMBAT_MOVEMENT((*uParam0)[iParam1], 2);
	__LIB_2__::func_314(uParam0, iParam1, 65, 80);
	PED::SET_PED_FIRING_PATTERN((*uParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::_0x20E54854DEF6A54A((*uParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
}

bool func_136()
{
	if (func_275(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_34), 0, 4, 1))
	{
		return true;
	}
	return false;
}

void func_138()
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			switch (iVar0)
			{
				case 0:
					fVar2 = 0f;
					__LIB_2__::func_357(Local_15[0], Global_36, 3, 0, 3);
					break;
				case 1:
					fVar2 = 0.2f;
					break;
				case 2:
					fVar2 = 0.4f;
					break;
				case 3:
					fVar2 = 0.15f;
					break;
				case 4:
					fVar2 = 0.3f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, fVar2, 0, 1, 1);
			if (!__LIB_0__::func_51(&Local_274, 1024))
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "CALLOUT_JUST_KILL_EM_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				__LIB_0__::func_7(&Local_274, 1024);
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_140()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_26[2]))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_26[2], 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_141()
{
	func_138();
	__LIB_0__::func_7(&Local_274, 16);
	return true;
}

bool func_143()
{
	if (__LIB_0__::func_51(&Local_274, 8192))
	{
		return true;
	}
	if (!__LIB_1__::func_205(Global_35, Local_274.f_26[2], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_26[1], 1, 0))
		{
			if (!__LIB_1__::func_205(Global_35, Local_274.f_26[3], 0, 0))
			{
				__LIB_0__::func_11(&Local_15, 7);
				__LIB_0__::func_7(&Local_274, 8192);
				return true;
			}
		}
	}
	if (func_282(&Local_15))
	{
		__LIB_0__::func_7(&Local_274, 8192);
		return true;
	}
	return false;
}

bool func_145()
{
	vector3 vVar0;
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	if (__LIB_2__::func_157(Local_274.f_26[3], vVar0) || __LIB_2__::func_157(Local_274.f_26[3], Global_36))
	{
		return true;
	}
	return false;
}

void func_147()
{
	AUDIO::_PLAY_SOUND_FROM_ENTITY("ALERT_WHISTLE_02", Local_15[0], "GAROA_Sounds", false, 0, 0);
	__LIB_2__::func_315(1891783641, Local_15[0], 1);
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
				if (PED::IS_PED_SHOOTING(Local_15[iVar0]) || __LIB_1__::func_472(Local_15[iVar0], 1116471296 /* Float: 70f */, 10f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_151()
{
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_0__::func_615(&Local_274, 1);
			break;
		case 1:
			__LIB_1__::func_283(&(Local_274.f_7[1 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 1f))
			{
				__LIB_2__::func_336(Local_15[0], Global_35, "ITS_MALE_EXTREME", -1073741824 /* Float: -2f */, 1, -500314840, 1);
				__LIB_0__::func_615(&Local_274, 2);
			}
			break;
		case 2:
			__LIB_1__::func_283(&(Local_274.f_7[2 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_7[2 /*3*/]), 2.5f))
			{
				func_299(0);
				func_300();
				__LIB_1__::func_148(&(Local_274.f_7[2 /*3*/]));
				__LIB_0__::func_615(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_7[2 /*3*/]), 1.5f))
			{
				func_301();
				func_168();
				__LIB_1__::func_148(&(Local_274.f_7[2 /*3*/]));
				__LIB_0__::func_615(&Local_274, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_166()
{
	vector3 vVar0;
	if (!__LIB_0__::func_51(&Local_274, 4096))
	{
		vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
		if (__LIB_0__::func_62(vVar0, Local_15.f_209) > 1225f && !__LIB_1__::func_374(Global_35, Local_15.f_209, BUILTIN::COS((120f / 2f))))
		{
			func_299(1);
			__LIB_0__::func_7(&Local_274, 4096);
		}
	}
}

void func_168()
{
	int iVar0;
	if (__LIB_2__::func_1(Local_15[3], 0, 1))
	{
		__LIB_2__::func_487(Local_15[3], Local_274.f_26[4]);
		iVar0 = PED::GET_MOUNT(Local_15[3]);
		if (__LIB_2__::func_1(iVar0, 0, 1))
		{
			__LIB_2__::func_487(iVar0, Local_274.f_26[4]);
		}
	}
	if (__LIB_2__::func_1(Local_15[4], 0, 1))
	{
		__LIB_2__::func_487(Local_15[4], Local_274.f_26[4]);
		iVar0 = PED::GET_MOUNT(Local_15[4]);
		if (__LIB_2__::func_1(iVar0, 0, 1))
		{
			__LIB_2__::func_487(iVar0, Local_274.f_26[4]);
		}
	}
}

void func_170()
{
	int iVar0;
	if (!__LIB_0__::func_51(&Local_274, 2048))
	{
		if (ENTITY::GET_ENTITY_HEALTH(Global_35) < 50)
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					PED::_0x1F44B7E283C09EDE(Local_15[iVar0], 30f, 4000);
				}
				iVar0++;
			}
			__LIB_0__::func_7(&Local_274, 2048);
		}
	}
}

void func_171()
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (!bVar1)
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "GANG_TAUNT_GEN", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
				bVar1 = true;
			}
			PED::_0x1854217C640B39EC(Local_15[iVar0], Global_35, 0f, 0f, 0f, 12f, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 51, true);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
		}
		iVar0++;
	}
}

void func_242()
{
	Local_15.f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Local_15.f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	Local_274.f_26[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volHorseNavBlock");
	VOLUME::_0x39816F6F94F385AD(Local_274.f_26[4], 1492.806f, -744.3336f, 48.11798f, 0f, 0f, 64.83021f, 27.36242f, 8f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_274.f_26[4], 1482.804f, -725.7905f, 49.63753f, 0f, 0f, 63.83022f, 14.72437f, 8f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_274.f_26[4], 1482.244f, -736.6207f, 48.11798f, 0f, 0f, 64.83021f, 21.71966f, 6.3958f, 10f);
	if (__LIB_0__::func_51(&Local_274, 1))
	{
		Local_274.f_26[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1611.743f, -810.9285f, 70.1517f, 0f, 0f, -37.08059f, 240f, 30f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1392.509f, -626.2736f, 61.73892f, 0f, 0f, -37.08059f, 240f, 30f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1628.425f, -541.3489f, 70.15167f, 0f, 0f, -37.08059f, 569.5092f, 425.4024f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1608.828f, -853.8876f, 61.73889f, 0f, 0f, -61.94101f, 240f, 101.0321f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1367.004f, -627.3932f, 61.73889f, 0f, 0f, -8.063321f, 240f, 101.0321f, 100f);
		Local_274.f_26[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_26[3], 1489.763f, -734.4119f, 58.73854f, 0f, 0f, -4.036212f, 45f, 45f, 20f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[3], 1478.285f, -765.865f, 58.73164f, 0f, 0f, 77.25034f, 46.68033f, 40.16039f, 40f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[3], 1454.371f, -706.9321f, 58.73164f, 0f, 0f, 65.25034f, 29.60074f, 40.16039f, 40f);
		Local_15.f_182[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1494.448f, -724.0815f, 49.4319f, 0f, 0f, -31.21145f, 14.42103f, 12.78001f, 6.560998f, "volHalt");
	}
	else if (__LIB_0__::func_51(&Local_274, 2))
	{
		Local_274.f_26[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1416.016f, -596.7366f, 73.51442f, 0f, 0f, 117.9487f, 240f, 30f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1592.352f, -837.4324f, 73.51442f, 0f, 0f, 134.9937f, 240f, 30f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1527.66f, -924.2363f, 73.51442f, 0f, 0f, 148.9937f, 176.8806f, 347.5515f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1338.2f, -635.3192f, 73.5144f, 0f, 0f, 106.9937f, 176.8806f, 283.3208f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[1], 1352.866f, -794.8168f, 73.5144f, 0f, 0f, 133.9937f, 421.14f, 283.3208f, 100f);
		Local_274.f_26[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_26[3], 1496.367f, -722.3498f, 58.73854f, 0f, 0f, 152.6827f, 45f, 45f, 20f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_26[3], 1514.533f, -703.3513f, 58.73164f, 0f, 0f, -134.1507f, 46.68033f, 40.16039f, 40f);
		Local_15.f_182[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1494.448f, -724.0815f, 49.4319f, 0f, 0f, -31.21145f, 14.42103f, 12.78001f, 6.560998f, "volHalt");
	}
}

void func_243(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_5 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
	uParam0->f_23 = iParam4;
	uParam0->f_24 = iParam5;
	uParam0->f_17 = iParam6;
}

void func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

int func_255()
{
	return 788332;
}

bool func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(func_97(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1900033419;
		case 1:
			return 571413435;
		case 2:
			return 328693452;
		case 3:
			return 685741288;
		case 4:
			return 933704311;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_262(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_270(0, 10);
			case 1:
				return func_270(0, 11);
			case 2:
				return func_270(0, 12);
			case 3:
				return func_270(0, 2);
			case 4:
				return func_270(0, 4);
			default:
				break;
		}
	}
	else if (__LIB_0__::func_51(uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_270(1, 10);
			case 1:
				return func_270(1, 11);
			case 2:
				return func_270(1, 12);
			case 3:
				return func_270(1, 2);
			case 4:
				return func_270(1, 4);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_263(var uParam0, int iParam1)
{
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
				return func_271(0, 2);
			case 4:
				return func_271(0, 4);
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
				return func_271(1, 2);
			case 4:
				return func_271(1, 4);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_266(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_270(0, 0);
			case 3:
				return func_270(0, 2);
			case 4:
				return func_270(0, 4);
			case 1:
				return func_270(0, 6);
			case 2:
				return func_270(0, 8);
			default:
				break;
		}
	}
	else if (__LIB_0__::func_51(uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_270(1, 0);
			case 3:
				return func_270(1, 2);
			case 4:
				return func_270(1, 4);
			case 1:
				return func_270(1, 6);
			case 2:
				return func_270(1, 8);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_267(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_271(0, 0);
			case 3:
				return func_271(0, 2);
			case 4:
				return func_271(0, 4);
			case 1:
				return func_271(0, 6);
			case 2:
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
			case 3:
				return func_271(1, 2);
			case 4:
				return func_271(1, 4);
			case 1:
				return func_271(1, 6);
			case 2:
				return func_271(1, 8);
			default:
				break;
		}
	}
	return 0f;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		case 4:
			return 1;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		default:
			break;
	}
	return -1;
}

char* func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1026_G_M_Y_UniExConfeds_01_WHITE_04";
		case 1:
			return "0175_G_M_O_UniExConfeds_01_WHITE_02";
		default:
			break;
	}
	return "NULL VOICE";
}

Vector3 func_270(int iParam0, int iParam1)
{
	return func_381(iParam0, iParam1);
}

float func_271(int iParam0, int iParam1)
{
	return func_382(iParam0, iParam1);
}

int func_273(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_385(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_275(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (func_389((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

bool func_282(var uParam0)
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
			if (func_393(uParam0))
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
			if (func_395(uParam0))
			{
				__LIB_0__::func_11(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_396(uParam0))
			{
				__LIB_0__::func_11(uParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_397(uParam0))
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

void func_299(bool bParam0)
{
	if (!bParam0)
	{
	}
	func_407(bParam0);
	func_408(bParam0);
}

void func_300()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	float fVar6;
	if (__LIB_0__::func_51(&Local_274, 128))
	{
		return;
	}
	fVar6 = 0f;
	iVar3 = 3;
	while (iVar3 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			vVar0 = { func_127(&Local_274, iVar3) };
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 3f, 1, 5f, 5.5f, 1, 0, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar6, 0, 1, 1);
			if (!bVar5)
			{
				__LIB_2__::func_336(Local_15[iVar3], Global_35, "MOVE_IN", -1073741824 /* Float: -2f */, 1, 1808677283, 2);
				bVar5 = true;
			}
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar3], vVar0, 5f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar3], 51, true);
			PED::_0x1F44B7E283C09EDE(Local_15[iVar3], 30f, 4000);
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			vVar0 = { func_127(&Local_274, iVar3) };
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar6, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar3], vVar0, 3f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar3], 51, true);
			PED::_0x1F44B7E283C09EDE(Local_15[iVar3], 30f, 6000);
		}
		iVar3++;
	}
	__LIB_0__::func_7(&Local_274, 128);
}

void func_301()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	fVar5 = 0f;
	iVar3 = 1;
	while (iVar3 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			vVar0 = { func_127(&Local_274, iVar3) };
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar5, 0, 1, 1);
			if (iVar3 != 1)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar3], vVar0, 4f, 0, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar3], 51, true);
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar3], vVar0, 3f, 0, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar3], 51, true);
			}
			PED::_0x1F44B7E283C09EDE(Local_15[iVar3], 10f, 4000);
		}
		iVar3++;
	}
}

Vector3 func_381(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1485.86f, -701.3427f, 55.1082f;
				case 1:
					return 1480.779f, -714.3521f, 54.7589f;
				case 2:
					return 1493.175f, -699.98f, 51.7172f;
				case 3:
					return 1498.362f, -716.9238f, 47.1131f;
				case 4:
					return 1495.474f, -699.2705f, 51.2286f;
				case 5:
					return 1502.089f, -718.955f, 47.1485f;
				case 6:
					return 1501.97f, -728.4098f, 46.4949f;
				case 7:
					return 1496.063f, -730.9893f, 47.0214f;
				case 8:
					return 1501.808f, -692.6676f, 51.1557f;
				case 9:
					return 1503.855f, -709.7905f, 47.8443f;
				case 10:
					return 1498.042f, -693.2934f, 51.4461f;
				case 11:
					return 1513.455f, -724.0786f, 48.4234f;
				case 12:
					return 1511.654f, -723.251f, 48.6068f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1471.771f, -712.4036f, 54.6827f;
				case 1:
					return 1487.499f, -708.3974f, 54.8755f;
				case 2:
					return 1476.038f, -720.597f, 51.0921f;
				case 3:
					return 1492.778f, -726.1935f, 46.995f;
				case 4:
					return 1492.588f, -748.6561f, 49.6612f;
				case 5:
					return 1491.978f, -733.4587f, 47.2828f;
				case 6:
					return 1491.737f, -741.0952f, 48.2812f;
				case 7:
					return 1494.055f, -733.9766f, 47.34f;
				case 8:
					return 1469.623f, -741.7059f, 53.1773f;
				case 9:
					return 1478.113f, -734.1908f, 53.0276f;
				case 10:
					return 1464.669f, -707.5939f, 55.8798f;
				case 11:
					return 1496.329f, -747.682f, 49.4532f;
				case 12:
					return 1498.41f, -747.201f, 49.2529f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_382(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 151.9035f;
				case 1:
					return 61.9035f;
				case 2:
					return 193.9035f;
				case 3:
					return 153.9035f;
				case 4:
					return 201.0514f;
				case 5:
					return 149.0514f;
				case 6:
					return 147.0514f;
				case 7:
					return 147.0514f;
				case 8:
					return 183.162f;
				case 9:
					return 145.162f;
				case 10:
					return -78.92f;
				case 11:
					return -4.537f;
				case 12:
					return 17.463f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 287.9035f;
				case 1:
					return 275.9035f;
				case 2:
					return 239.9036f;
				case 3:
					return 285.9036f;
				case 4:
					return 19.0514f;
				case 5:
					return 335.0514f;
				case 6:
					return 15.9106f;
				case 7:
					return 325.9106f;
				case 8:
					return 309.162f;
				case 9:
					return 301.162f;
				case 10:
					return -192.92f;
				case 11:
					return 103.463f;
				case 12:
					return 181.463f;
			}
			break;
	}
	return 0f;
}

int func_385(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_432(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_433((386 + iVar28), 1);
			if (func_434(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					__LIB_1__::func_543(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

bool func_389(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_270(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_225(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_218(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_450(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_450(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_393(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 131072))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!__LIB_2__::func_4(uParam0, 16777216) || uParam0->f_20 < 90f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_395(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 262144))
	{
		if (uParam0->f_20 < 90f)
		{
			if (__LIB_2__::func_335(uParam0, 90f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_396(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 524288))
	{
		if (uParam0->f_20 < 90f)
		{
			if (__LIB_2__::func_330(uParam0, 90f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_397(var uParam0)
{
	if (!__LIB_2__::func_8(uParam0->f_151))
	{
		if (uParam0->f_20 < 90f)
		{
			if (__LIB_2__::func_232(uParam0->f_151, uParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

void func_407(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
		{
			if (!bParam0)
			{
				if (PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], true) != 0)
				{
				}
				else
				{
					PED::SET_PED_CONFIG_FLAG(Local_15.f_40[iVar0], 136, !bParam0);
				}
				iVar0++;
			}
		}
	}
}

void func_408(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (!bParam0 && PED::IS_PED_ON_MOUNT(Local_15[iVar0]))
			{
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 167, bParam0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 1, bParam0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, !bParam0);
			}
		}
		iVar0++;
	}
}

struct<5> func_432(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_434(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_434(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_433(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return joaat("SLOTID_PROGRESSION");
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
bool func_434(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_450(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_545(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (func_546(iParam1, vVar0, vVar4))
					{
						__LIB_2__::func_89(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (func_546(iParam1, vVar0, vVar7))
					{
						__LIB_2__::func_89(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

int func_545(int iParam0)
{
	int iVar0;
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			if (*iParam0 & 16777216 != 0)
			{
				if (iVar0 == 2)
				{
					iVar0 = 0;
				}
			}
			return iVar0;
		}
bool func_546(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (__LIB_1__::func_374(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

