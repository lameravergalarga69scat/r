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
	struct<56> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, 0, 5, 0 } ;
	bool bLocal_330 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_330 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_330, 961, 0);
		if (bLocal_330)
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
			__LIB_2__::func_476();
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
	__LIB_0__::func_11();
	__LIB_2__::func_337(&Local_15, 0);
	__LIB_2__::func_420();
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
		if (__LIB_2__::func_672())
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
					iVar4 = __LIB_2__::func_17(iVar1);
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
	iVar1 = __LIB_2__::func_17(iVar0);
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
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_125(iVar0), 0);
			if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
			{
				PED::_SET_PED_ON_MOUNT(Local_15[iVar0], Local_15.f_40[iVar0], -1, true);
			}
			switch (iVar0)
			{
				case 0:
					Local_274.f_55 = PED::GET_PED_ACCURACY(Local_15[iVar0]);
					__LIB_17__::func_778(&Local_15, Local_15[iVar0], joaat("GROUP_REPEATER"), 1);
					break;
				default:
					__LIB_17__::func_778(&Local_15, Local_15[iVar0], joaat("GROUP_REVOLVER"), 1);
					break;
			}
			func_128(&Local_15, iVar0);
		}
		iVar0++;
	}
	func_129();
	__LIB_2__::func_41(&(Local_15.f_182), 1, 2.5f, 2.001f, 2.001f, 2.5f, 0);
	return true;
}

bool func_23()
{
	if (!__LIB_0__::func_51(&Local_274, 2))
	{
		if (func_134())
		{
			func_135();
			__LIB_0__::func_613(&Local_274, 4);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_137())
			{
				if (func_138())
				{
					__LIB_2__::func_427(&Local_15);
					__LIB_0__::func_613(&Local_274, 4);
				}
			}
			else if (func_140())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_427(&Local_15);
					__LIB_2__::func_234(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else if (func_142())
			{
				func_143();
				__LIB_0__::func_613(&Local_274, 1);
			}
			break;
		case 1:
			if (func_144())
			{
				func_145(Local_15[0], Global_35, "AMBUSH_CL1_TRIGGER", -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_2__::func_706(&Local_15, 1);
				__LIB_2__::func_483(&Local_15, 1);
				__LIB_2__::func_373();
				__LIB_0__::func_613(&Local_274, 2);
			}
			else
			{
				func_147();
			}
			break;
		case 2:
			__LIB_2__::func_375(&Local_15, 0);
			if (func_149())
			{
				__LIB_0__::func_613(&Local_274, 4);
			}
			break;
		case 3:
			__LIB_2__::func_655();
			__LIB_0__::func_613(&Local_274, 4);
			break;
		case 4:
			__LIB_2__::func_427(&Local_15);
			return true;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	Local_274.f_54 = __LIB_2__::func_327(&Local_15);
	__LIB_17__::func_787();
	func_165();
	if (Local_274.f_4 < 2)
	{
		func_166();
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		__LIB_2__::func_399(&Local_15, iVar0, Local_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_28[0 /*3*/]), 0);
			__LIB_0__::func_614(&Local_274, 1);
			break;
		case 1:
			if (Local_274.f_54 > 1)
			{
				if (func_169())
				{
					__LIB_0__::func_614(&Local_274, 2);
				}
			}
			else
			{
				__LIB_0__::func_614(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_17__::func_801(&Local_15, &(Local_274.f_52), &(Local_274.f_28[3 /*3*/]), "AMBUSH_CL1_FLEE", 1092616192 /* Float: 10f */))
			{
				__LIB_0__::func_614(&Local_274, 3);
			}
			break;
		case 3:
			return true;
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
	if (!__LIB_1__::func_285(&(Local_274.f_28[0 /*3*/]), 25f))
	{
		return 250f;
	}
	return 120f;
}

bool func_83()
{
	switch (Local_15.f_221)
	{
		case 0:
			break;
		default:
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(31, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(31, 1, Local_15.f_221), true))
	{
		__LIB_0__::func_7(&Local_274, 1);
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 5;
	Local_15.f_181 = 5;
	__LIB_2__::func_234(&Local_15, 131072);
	func_239();
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_2)
	{
		case 0:
			__LIB_2__::func_187();
			func_250(&Local_15);
			Local_274.f_2 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!func_252(&Local_15))
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
	return func_253(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_255(&Local_274, iVar0);
}

float func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_256(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_259(&Local_274, iVar0);
}

float func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_260(&Local_274, iVar0);
}

char* func_125(int iParam0)
{
	int iVar0;
	iVar0 = func_261(iParam0);
	return func_262(iVar0);
}

void func_128(var uParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*uParam0)[iParam1], 0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 2:
		case 3:
		case 4:
			PED::SET_PED_COMBAT_RANGE((*uParam0)[iParam1], 2);
			break;
		default:
			PED::SET_PED_COMBAT_RANGE((*uParam0)[iParam1], 1);
			break;
	}
	PED::SET_PED_COMBAT_MOVEMENT((*uParam0)[iParam1], 2);
	PED::SET_PED_ACCURACY((*uParam0)[iParam1], 1);
}

void func_129()
{
	var uVar0;
	func_265();
	Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(0f, 0f, 0f, 0f, 0f, 0f, 70f, 70f, 10f, "volSlow");
	Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(0f, 0f, 0f, 0f, 0f, 0f, 40f, 40f, 15f, "volSlower");
	Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(0f, 0f, 0f, 0f, 0f, 0f, 15f, 15f, 20f, "volSlowest");
	Local_15.f_182[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(0f, 0f, 0f, 0f, 0f, 0f, 3f, 3f, 25f, "volHalt");
	uVar0 = Local_15[0];
	PED::_0x7C00CFC48A782DC0(Local_15.f_182[0], uVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	PED::_0x7C00CFC48A782DC0(Local_15.f_182[1], uVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	PED::_0x7C00CFC48A782DC0(Local_15.f_182[2], uVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	PED::_0x7C00CFC48A782DC0(Local_15.f_182[3], uVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
}

bool func_134()
{
	int iVar0;
	if (Local_274.f_3 == 1)
	{
		iVar0 = 1;
		while (iVar0 <= 4)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
			{
				if (Local_15.f_9[iVar0] < 80f)
				{
					if (Local_15.f_9[iVar0] < Local_15.f_9[0] && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[iVar0], Global_35, 17))
					{
						if (!__LIB_0__::func_239(&Local_274, 4))
						{
							func_145(Local_15[iVar0], Global_35, "CALLOUT_EASY_PICKINGS_MALE", -1082130432 /* Float: -1f */, 1, 1744022339);
							__LIB_2__::func_45(Local_15[iVar0], Global_35, 1000);
							__LIB_0__::func_240(&Local_274, 4);
						}
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	if (func_269(&Local_15, &(Local_15.f_152), &(Local_15.f_152.f_16), &(Local_274.f_53), 0, (Local_15.f_215 - 1), 1))
	{
		return true;
	}
	if (__LIB_0__::func_51(&Local_274, 4))
	{
		return true;
	}
	if (func_269(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_53), 0, 4, 1))
	{
		return true;
	}
	return false;
}

void func_135()
{
	int iVar0;
	func_270();
	if (__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (!__LIB_0__::func_239(&Local_274, 4))
			{
				func_145(Local_15[iVar0], Global_35, "AMBUSH_CL1_BYPASS", -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_0__::func_240(&Local_274, 4);
			}
		}
		iVar0++;
	}
	__LIB_0__::func_7(&Local_274, 2);
}

bool func_137()
{
	if (__LIB_1__::func_205(Global_35, Local_274.f_41[2], 1, 0))
	{
		return true;
	}
	return false;
}

bool func_138()
{
	func_272();
	__LIB_0__::func_7(&Local_274, 4);
	return true;
}

bool func_140()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_41[2], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_41[1], 1, 0))
		{
			__LIB_0__::func_11(&Local_15, 7);
			return true;
		}
	}
	if (__LIB_2__::func_720(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_142()
{
	if (__LIB_1__::func_205(Global_35, Local_274.f_41[3], 1, 0))
	{
		return true;
	}
	return false;
}

void func_143()
{
	vector3 vVar0;
	vVar0 = { func_277(&Local_274, 0) };
	TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_15[0], vVar0, 1073741824 /* Float: 2f */, 3f, 520, 0);
}

bool func_144()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (!__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		return false;
	}
	vVar1 = { __LIB_2__::func_114(Global_35, 3.5f) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_15[0], false, true) };
	vVar1.f_2 = vVar4.z;
	fVar0 = __LIB_0__::func_636(vVar4, vVar1);
	if (fVar0 < 60f)
	{
		__LIB_2__::func_356(Local_15[0], Global_35, 3, 1, 100, 0);
		if (fVar0 < 60f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_145(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5)
{
	return __LIB_2__::func_303(iParam0, iParam1, sParam2, "", fParam3, 0, 0, 0, 1, fParam3 >= 0f, bParam4, iParam5, 1, 0, 0);
}

void func_147()
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_51(&Local_274, 16))
	{
		return;
	}
	vVar0 = { func_277(&Local_274, 0) };
	fVar3 = __LIB_1__::func_992(Local_15[0], vVar0, 0);
	if (fVar3 < 16f)
	{
		TASK::TASK_GO_TO_ENTITY(Local_15[0], Global_35, -1, (40f - 5f), 2.5f, 2f, 0);
		__LIB_0__::func_7(&Local_274, 16);
	}
}

bool func_149()
{
	vector3 vVar0;
	char* sVar3;
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_0__::func_615(&Local_274, 1);
			break;
		case 1:
			if (func_293(0))
			{
				__LIB_0__::func_615(&Local_274, 2);
			}
			break;
		case 2:
			__LIB_1__::func_283(&(Local_274.f_28[1 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_28[1 /*3*/]), 0.25f))
			{
				__LIB_2__::func_427(&Local_15);
				vVar0 = { func_259(&Local_274, 0) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15[0], vVar0, 3f, -1, 0.25f, 16, 40000f);
				__LIB_1__::func_148(&(Local_274.f_28[1 /*3*/]));
				__LIB_0__::func_615(&Local_274, 3);
			}
			break;
		case 3:
			__LIB_1__::func_283(&(Local_274.f_28[1 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_28[1 /*3*/]), 1f))
			{
				if (!__LIB_0__::func_239(&Local_274, 1))
				{
					sVar3 = func_294(&Local_15);
					func_145(Local_15[0], Global_35, sVar3, -1082130432 /* Float: -1f */, 1, 1744022339);
					__LIB_0__::func_240(&Local_274, 1);
				}
				__LIB_1__::func_148(&(Local_274.f_28[1 /*3*/]));
				__LIB_0__::func_615(&Local_274, 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_28[1 /*3*/]), 0.1f))
			{
				func_270();
				__LIB_0__::func_615(&Local_274, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_165()
{
	if (!__LIB_0__::func_51(&Local_274, 64))
	{
		if (Local_274.f_54 <= 3)
		{
			func_314(10);
			__LIB_0__::func_7(&Local_274, 64);
		}
	}
	else if (!__LIB_0__::func_51(&Local_274, 128))
	{
		if (Local_274.f_54 <= 2)
		{
			func_314(Local_274.f_55);
			__LIB_0__::func_7(&Local_274, 128);
		}
	}
}

void func_166()
{
	int iVar0;
	if (Local_274.f_6 <= 0)
	{
		return;
	}
	if (__LIB_0__::func_51(&Local_274, 256))
	{
		return;
	}
	if (__LIB_0__::func_265(&(Local_274.f_28[2 /*3*/])) >= 4f && __LIB_2__::func_227(-3f, 1, 0, 0))
	{
		iVar0 = -1;
		iVar0 = func_316(0, 4, 1);
		if (iVar0 == -1 || !__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			return;
		}
		if (func_317(iVar0))
		{
			if (func_145(Local_15[iVar0], Global_35, "AMBUSH_CL1_GETTINGAWAY", 80f, 0, 1744022339))
			{
				__LIB_1__::func_148(&(Local_274.f_28[2 /*3*/]));
				__LIB_0__::func_7(&Local_274, 256);
			}
		}
	}
}

bool func_169()
{
	int iVar0;
	func_318();
	switch (Local_274.f_6)
	{
		case 0:
			if (__LIB_1__::func_285(&(Local_274.f_28[0 /*3*/]), 4f))
			{
				iVar0 = func_319(1);
				if (__LIB_2__::func_654(iVar0))
				{
					__LIB_1__::func_283(&(Local_274.f_28[2 /*3*/]), 0);
					if (!__LIB_0__::func_239(&Local_274, 2))
					{
						func_145(Local_15[iVar0], Global_35, "AMBUSH_CL1_RIDEOUT", -1082130432 /* Float: -1f */, 1, 1744022339);
						__LIB_0__::func_240(&Local_274, 2);
					}
					__LIB_2__::func_384(&Local_274, 1);
				}
				else
				{
					__LIB_2__::func_384(&Local_274, 3);
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_28[2 /*3*/]), 8f) && __LIB_2__::func_227(0, 1, 0, 0))
			{
				iVar0 = func_316(0, 4, 1);
				if (__LIB_2__::func_654(iVar0))
				{
					__LIB_1__::func_148(&(Local_274.f_28[2 /*3*/]));
					func_145(Local_15[iVar0], Global_35, "AMBUSH_CL1_COMBATEARLY", -1082130432 /* Float: -1f */, 1, 1744022339);
					__LIB_2__::func_384(&Local_274, 2);
				}
				else
				{
					__LIB_2__::func_384(&Local_274, 3);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_28[2 /*3*/]), 12f) && __LIB_2__::func_227(0, 1, 0, 0))
			{
				iVar0 = func_316(0, 4, 1);
				if (__LIB_2__::func_654(iVar0))
				{
					__LIB_1__::func_148(&(Local_274.f_28[2 /*3*/]));
					func_145(Local_15[iVar0], Global_35, "AMBUSH_CL1_COMBATLATE", -1082130432 /* Float: -1f */, 1, 1744022339);
					__LIB_2__::func_384(&Local_274, 3);
				}
				else
				{
					__LIB_2__::func_384(&Local_274, 3);
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_239()
{
	__LIB_2__::func_104(&(Local_15.f_152), 0);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 0);
	__LIB_2__::func_345(&(Local_15.f_152), 1);
	__LIB_2__::func_110(&(Local_15.f_152), 0);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_250(&(Local_15.f_152), 1);
}

void func_250(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = __LIB_2__::func_17(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_252(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = __LIB_2__::func_17(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_17(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 294802571;
		case 1:
			return 585561908;
		case 2:
			return 897784960;
		case 3:
			return 1131722851;
		case 4:
			return 918298334;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_255(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_380(0, 0);
			case 1:
				return func_380(0, 2);
			case 2:
				return func_380(0, 4);
			case 3:
				return func_380(0, 6);
			case 4:
				return func_380(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_380(1, 0);
			case 1:
				return func_380(1, 2);
			case 2:
				return func_380(1, 4);
			case 3:
				return func_380(1, 6);
			case 4:
				return func_380(1, 8);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_256(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_381(0, 0);
			case 1:
				return func_381(0, 2);
			case 2:
				return func_381(0, 4);
			case 3:
				return func_381(0, 6);
			case 4:
				return func_381(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_381(1, 0);
			case 1:
				return func_381(1, 2);
			case 2:
				return func_381(1, 4);
			case 3:
				return func_381(1, 6);
			case 4:
				return func_381(1, 8);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_259(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_380(0, 0);
			case 1:
				return func_380(0, 2);
			case 2:
				return func_380(0, 4);
			case 3:
				return func_380(0, 6);
			case 4:
				return func_380(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_380(1, 0);
			case 1:
				return func_380(1, 2);
			case 2:
				return func_380(1, 4);
			case 3:
				return func_380(1, 6);
			case 4:
				return func_380(1, 8);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_260(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_381(0, 0);
			case 1:
				return func_381(0, 2);
			case 2:
				return func_381(0, 4);
			case 3:
				return func_381(0, 6);
			case 4:
				return func_381(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_381(1, 0);
			case 1:
				return func_381(1, 2);
			case 2:
				return func_381(1, 4);
			case 3:
				return func_381(1, 6);
			case 4:
				return func_381(1, 8);
			default:
				break;
		}
	}
	return 0f;
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
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		default:
			break;
	}
	return -1;
}

char* func_262(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "1068_G_M_M_UniCriminals_01_HISPANIC_05";
		case 0:
			return "1020_G_M_M_UniBanditos_01_HISPANIC_02";
		default:
			break;
	}
	return "NULL VOICE";
}

void func_265()
{
	if (__LIB_0__::func_51(&Local_274, 1))
	{
		Local_274.f_41[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_41[1], -3384.089f, -2855.596f, -12.05179f, 0f, 0f, 0f, 185.5292f, 312.5035f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_41[1], -3382.434f, -2410.18f, -12.05179f, 0f, 0f, -6.765615f, 185.5292f, 312.5035f, 100f);
		Local_274.f_41[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_41[3], -3385.789f, -2637.696f, -4.046f, 0f, 0f, 81.00001f, 153.5042f, 139.9901f, 48.48804f);
	}
	else
	{
		Local_274.f_41[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_41[1], -3199.447f, -2824.655f, -12.05179f, 0f, 0f, 17.84541f, 185.5292f, 312.5035f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_41[1], -3267.788f, -2387.185f, 43.09051f, 0f, 0f, 13.65297f, 312.2487f, 312.5035f, 131.4269f);
		Local_274.f_41[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_41[3], -3222.677f, -2594.422f, 19.66692f, 0f, 0f, 106.183f, 217.5172f, 71.2565f, 41.62216f);
	}
}

bool func_269(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_2__::func_718((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

void func_270()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	if (__LIB_0__::func_51(&Local_274, 32))
	{
		return;
	}
	fVar5 = 0f;
	iVar3 = 1;
	while (iVar3 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			vVar0 = { func_277(&Local_274, iVar3) };
			switch (iVar3)
			{
				case 1:
					fVar5 = 0f;
					break;
				case 2:
					fVar5 = 0f;
					break;
				case 3:
					fVar5 = 2f;
					break;
				case 4:
					fVar5 = 2f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar5, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar3], vVar0, 4f, 1, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar3], 51, true);
		}
		iVar3++;
	}
	__LIB_0__::func_7(&Local_274, 32);
}

void func_272()
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	if (__LIB_0__::func_51(&Local_274, 4))
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
	}
	iVar3 = 0;
	while (iVar3 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar3], false, 0, false);
			switch (iVar3)
			{
				case 0:
					fVar2 = 0f;
					break;
				case 1:
					fVar2 = 0.25f;
					break;
				case 2:
					fVar2 = 0.5f;
					break;
				case 3:
					fVar2 = 0f;
					break;
				case 4:
					fVar2 = 0.35f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
			__LIB_1__::func_474(Local_15[iVar3], &iVar0, fVar2, 0, 1, 1);
			__LIB_2__::func_73(Local_15[iVar3], &(Local_15.f_22[iVar3]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar3++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

Vector3 func_277(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_380(0, 1);
			case 1:
				return func_380(0, 3);
			case 2:
				return func_380(0, 5);
			case 3:
				return func_380(0, 7);
			case 4:
				return func_380(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_380(1, 1);
			case 1:
				return func_380(1, 3);
			case 2:
				return func_380(1, 5);
			case 3:
				return func_380(1, 7);
			case 4:
				return func_380(1, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

bool func_293(int iParam0)
{
	if (!__LIB_2__::func_1(Local_15[iParam0], 0, 0) || !__LIB_2__::func_1(Local_15.f_40[iParam0], 0, 0))
	{
		return false;
	}
	switch (Local_274.f_7[iParam0 /*4*/].f_3)
	{
		case 0:
			TASK::TASK_HORSE_ACTION(Local_15.f_40[iParam0], 1, 0, 0);
			__LIB_1__::func_283(&(Local_274.f_7[iParam0 /*4*/]), 0);
			func_411(&(Local_274.f_7[iParam0 /*4*/]), iParam0, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_7[iParam0 /*4*/]), 2f))
			{
				if (!__LIB_0__::func_163(Local_15.f_40[iParam0], 1041577989))
				{
					func_411(&(Local_274.f_7[iParam0 /*4*/]), iParam0, 3);
				}
				else if (__LIB_1__::func_285(&(Local_274.f_7[iParam0 /*4*/]), 2.5f))
				{
					TASK::CLEAR_PED_TASKS(Local_15.f_40[iParam0], true, false);
					func_411(&(Local_274.f_7[iParam0 /*4*/]), iParam0, 3);
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

char* func_294(var uParam0)
{
	if (uParam0->f_227)
	{
		return "AMBUSH_CL1_NOTICE_FEUD";
	}
	return "AMBUSH_CL1_NOTICE";
}

void func_314(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::SET_PED_ACCURACY(Local_15[iVar0], iParam0);
		}
		iVar0++;
	}
}

int func_316(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_2__::func_557(&Local_15, iParam0, iParam1, bParam2);
	if (iVar0 < 0)
	{
		return -1;
	}
	return iVar0;
}

bool func_317(int iParam0)
{
	if (Local_15.f_9[iParam0] < 40f)
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(Global_35) < 6f)
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(Global_35, Local_15[iParam0], 100f))
	{
		return false;
	}
	return true;
}

void func_318()
{
	int iVar0;
	if (!__LIB_0__::func_51(&Local_274, 8))
	{
		if (!__LIB_2__::func_1(Local_15[0], 0, 0))
		{
			__LIB_0__::func_7(&Local_274, 8);
			return;
		}
		iVar0 = func_316(0, 4, 0);
		if (iVar0 != 0 || __LIB_2__::func_327(&Local_15) <= 1)
		{
			if (__LIB_2__::func_1(Local_15[0], 0, 0))
			{
				TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 0, 0);
				__LIB_0__::func_7(&Local_274, 8);
			}
		}
	}
}

int func_319(bool bParam0)
{
	return func_316(1, 4, bParam0);
}

Vector3 func_380(int iParam0, int iParam1)
{
	return func_434(iParam0, iParam1);
}

float func_381(int iParam0, int iParam1)
{
	return func_435(iParam0, iParam1);
}

void func_411(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_3 = iParam2;
}

Vector3 func_434(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -3276.805f, -2622.389f, 4.5277f;
				case 1:
					return -3421.187f, -2633.669f, -11.7619f;
				case 2:
					return -3260.616f, -2679.994f, 7.2103f;
				case 3:
					return -3283.396f, -2634.728f, 3.6319f;
				case 4:
					return -3277.475f, -2679.012f, 5.7622f;
				case 5:
					return -3289.869f, -2641.555f, 3.0527f;
				case 6:
					return -3232.302f, -2589.386f, 10.8985f;
				case 7:
					return -3240.654f, -2603.905f, 7.0498f;
				case 8:
					return -3229.392f, -2589.233f, 11.2017f;
				case 9:
					return -3238.294f, -2606.731f, 7.2267f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -3395.458f, -2635.436f, -9.8774f;
				case 1:
					return -3222.172f, -2599.469f, 7.5994f;
				case 2:
					return -3357.841f, -2674.054f, -3.6862f;
				case 3:
					return -3351.489f, -2654.339f, -4.4756f;
				case 4:
					return -3361.001f, -2674.247f, -4.1925f;
				case 5:
					return -3355.739f, -2652.21f, -5.1811f;
				case 6:
					return -3398.661f, -2616.482f, -7.4162f;
				case 7:
					return -3375.058f, -2636.302f, -7.1983f;
				case 8:
					return -3400.997f, -2619.504f, -8.3012f;
				case 9:
					return -3378.84f, -2641.562f, -8.3494f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_435(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 111.0514f;
				case 1:
					return 75.0514f;
				case 2:
					return 43.0514f;
				case 3:
					return 51.0514f;
				case 4:
					return 27.0514f;
				case 5:
					return 47.0514f;
				case 6:
					return 173.9035f;
				case 7:
					return 117.9035f;
				case 8:
					return 163.9035f;
				case 9:
					return 137.9035f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 259.0514f;
				case 1:
					return 279.0514f;
				case 2:
					return 329.0514f;
				case 3:
					return 325.0514f;
				case 4:
					return 343.0514f;
				case 5:
					return 337.0514f;
				case 6:
					return 221.9035f;
				case 7:
					return 229.9035f;
				case 8:
					return 223.9035f;
				case 9:
					return 245.9035f;
			}
			break;
	}
	return 0f;
}

