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
	struct<105> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 1176256410, 0, 1, 0, 1, 0, 2, 0, 0, 0 } ;
	bool bLocal_379 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_379 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_379, 961, 0);
		if (bLocal_379)
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
								__LIB_2__::func_548(&Local_15, 1);
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
	if (((!func_46() && !__LIB_1__::func_285(&(Local_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_2__::func_7())
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
	__LIB_2__::func_484();
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
		if (__LIB_2__::func_604())
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
				if (__LIB_0__::func_0())
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
	iVar1 = func_97(iVar0);
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
	vector3 vVar1;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_125(iVar0), 0);
			PED::_0x49DADFC4CD808B0A(Local_15[iVar0], 1, -1);
			switch (iVar0)
			{
				case 0:
					Local_274.f_94 = PED::GET_PED_ACCURACY(Local_15[iVar0]);
					vVar1 = { func_127(&Local_274, 0, 0) };
					uVar4 = func_128(&Local_274, 0, 0);
					__LIB_2__::func_106(&vVar1, 1, 10, 0);
					vVar5 = { func_127(&Local_274, 0, 1) };
					vVar8 = { func_127(&Local_274, 0, 2) };
					Local_274.f_101[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA"), vVar5, func_128(&Local_274, 0, 1), 0, -1f, 1);
					Local_274.f_101[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA"), vVar8, func_128(&Local_274, 0, 2), 0, -1f, 1);
					if (__LIB_0__::func_51(&Local_274, 1))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Local_15[iVar0], Local_274.f_101[0], func_130(&Local_274), -1, false, true, 0, false, -1f, false);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Local_15[iVar0], Local_274.f_101[1], func_130(&Local_274), -1, false, true, 0, false, -1f, false);
					}
					PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 234, true);
					PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 235, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
					if (Local_274.f_7 == 2 && __LIB_2__::func_443())
					{
					}
					else
					{
						__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					}
					break;
				default:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
			}
			func_133(&Local_15, iVar0);
		}
		iVar0++;
	}
	func_134(&Local_274, 0, 0);
	func_135(&Local_15, &Local_274);
	return true;
}

bool func_23()
{
	int iVar0;
	if (!__LIB_0__::func_51(&Local_274, 2))
	{
		if (func_138())
		{
			__LIB_2__::func_408(&(Local_274.f_78), 1);
			func_140();
			__LIB_0__::func_613(&Local_274, 4);
		}
	}
	iVar0 = -1;
	if (Local_274.f_3 > 0 && Local_274.f_3 < 2)
	{
		iVar0 = func_142();
	}
	switch (Local_274.f_3)
	{
		case 0:
			__LIB_3__::func_548(&(Local_274.f_49[0 /*11*/]), __LIB_2__::func_460(7), "AMBUSH_SPC_POS_INT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_548(&(Local_274.f_49[1 /*11*/]), __LIB_2__::func_460(10), "AMBUSH_SPC_NEG_INT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_0__::func_613(&Local_274, 1);
			break;
		case 1:
			if (func_145())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_234(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else if (func_147() || iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						func_148(&Local_274, Global_35, Local_15[0], "AMBUSH_SPC_POS_INT", -1073741824 /* Float: -2f */, 1, 291934926, -1);
						break;
					case 1:
						func_148(&Local_274, Global_35, Local_15[0], "AMBUSH_SPC_NEG_INT", -1073741824 /* Float: -2f */, 1, 291934926, -1);
						break;
				}
				__LIB_2__::func_706(&Local_15, 0);
				__LIB_2__::func_224(Local_15.f_151, 0);
				__LIB_17__::func_788();
				__LIB_0__::func_613(&Local_274, 2);
			}
			else
			{
				func_151();
			}
			break;
		case 2:
			if (func_152())
			{
				__LIB_0__::func_613(&Local_274, 4);
			}
			break;
		case 3:
			__LIB_0__::func_613(&Local_274, 4);
			break;
		case 4:
			if (__LIB_0__::func_51(&Local_274, 2) && __LIB_2__::func_1(Local_15[0], 0, 1))
			{
				if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_15[0]))
				{
					if (func_148(&Local_274, Local_15[0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 2))
					{
						return true;
					}
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

bool func_31()
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	Local_274.f_93 = func_165(&Local_15);
	if (!__LIB_0__::func_51(&Local_274, 4096))
	{
		if (func_166())
		{
			if (__LIB_2__::func_1(Local_15[0], 0, 0))
			{
				TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15[0], false);
			}
			__LIB_0__::func_7(&Local_274, 4096);
		}
	}
	if (Local_274.f_7 == 2 && __LIB_2__::func_443())
	{
		bVar0 = func_168();
		if (!__LIB_0__::func_73(1024))
		{
			if (bVar0)
			{
				__LIB_2__::func_29(1024);
				__LIB_0__::func_7(&Local_274, 8192);
			}
		}
		else if (!bVar0)
		{
			__LIB_1__::func_979(1024);
			__LIB_0__::func_8(&Local_274, 8192);
		}
	}
	func_173();
	iVar1 = 0;
	while (iVar1 < Local_15.f_215)
	{
		if (!Local_274.f_97[iVar1])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar1]))
			{
				if (__LIB_2__::func_398(Local_15[iVar1]))
				{
					__LIB_19__::func_112(&(Local_15[iVar1]), &(Local_274.f_31), &(Local_274.f_49), 1, 1);
					Local_274.f_97[iVar1] = 1;
				}
			}
			else
			{
				Local_274.f_97[iVar1] = 1;
			}
		}
		__LIB_2__::func_399(&Local_15, iVar1, Local_15.f_40[iVar1]);
		iVar1++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_4__::func_369(&(Local_274.f_73));
			__LIB_1__::func_283(&(Local_274.f_8[0 /*3*/]), 0);
			__LIB_2__::func_548(&Local_15, 0);
			__LIB_2__::func_234(&Local_15, 512);
			__LIB_0__::func_614(&Local_274, 1);
			break;
		case 1:
			__LIB_0__::func_614(&Local_274, 2);
			break;
		case 2:
			if (Local_274.f_93 <= 0)
			{
				if (__LIB_2__::func_393(&(Local_274.f_73)) || !__LIB_0__::func_51(&Local_274, 16))
				{
					__LIB_3__::func_474(&(Local_274.f_73));
					__LIB_0__::func_614(&Local_274, 3);
				}
				else if (__LIB_2__::func_648(&(Local_274.f_73), &Local_15, 0, 1, 2f, 0))
				{
					if (__LIB_2__::func_155(2, 1) || __LIB_0__::func_181())
					{
						sVar2 = "AMBUSH_SPC_PLYFINAL_FEUD";
					}
					else
					{
						sVar2 = "AMBUSH_SPC_PLYFINAL";
					}
					func_148(&Local_274, Global_35, Global_35, sVar2, -1073741824 /* Float: -2f */, 0, 291934926, -1);
					__LIB_3__::func_474(&(Local_274.f_73));
					__LIB_0__::func_614(&Local_274, 3);
				}
			}
			break;
		case 3:
			__LIB_2__::func_311(&Local_15, 512);
			return true;
	}
	return false;
}

bool func_46()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	if (!__LIB_0__::func_75(&(Local_274.f_8[5 /*3*/])))
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_15[iVar0]))
				{
					__LIB_2__::func_357(Local_15[iVar0], Global_36, 5, 1, 1);
					TASK::CLEAR_PED_TASKS(Local_15[iVar0], true, false);
					iVar1 = 0;
					__LIB_1__::func_283(&(Local_274.f_8[5 /*3*/]), 0);
				}
			}
			iVar0++;
		}
	}
	else if (__LIB_1__::func_285(&(Local_274.f_8[5 /*3*/]), 5f))
	{
		return true;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_15[iVar0]))
				{
					iVar1 = 0;
				}
			}
			iVar0++;
		}
	}
	if (__LIB_0__::func_51(&Local_274, 16))
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if ((!__LIB_2__::func_1(Local_15[iVar0], 0, 1) && !__LIB_2__::func_393(&(Local_274.f_73))) && ENTITY::_0x3EC28DA1FFAC9DDD(Local_15[iVar0], Global_35, 1, 1))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_49()
{
	__LIB_3__::func_474(&(Local_274.f_73));
	__LIB_2__::func_408(&(Local_274.f_78), 1);
	if (__LIB_0__::func_73(1024) && __LIB_0__::func_51(&Local_274, 8192))
	{
		__LIB_1__::func_979(1024);
	}
}

bool func_83()
{
	switch (Local_15.f_221)
	{
		case 0:
			Local_274.f_7 = 0;
			break;
		case 1:
			Local_274.f_7 = 1;
			break;
		case 2:
			Local_274.f_7 = 2;
			break;
		case 3:
			Local_274.f_7 = 3;
			break;
		case 4:
			Local_274.f_7 = 4;
			break;
		case 5:
			Local_274.f_7 = 5;
			break;
		default:
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221), true))
	{
		__LIB_0__::func_7(&Local_274, 1);
	}
	Local_15.f_215 = 1;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 1;
	Local_15.f_181 = 2;
	__LIB_2__::func_234(&Local_15, 131072);
	__LIB_2__::func_382(&Local_15, 3, 1);
	func_250();
	func_251();
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_2)
	{
		case 0:
			__LIB_2__::func_187();
			func_261(&Local_15);
			__LIB_2__::func_312(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA"), __LIB_2__::func_661(), joaat("G_M_O_UNIEXCONFEDS_01"), func_263(&Local_274));
			Local_274.f_2 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!func_266(&Local_15))
			{
				iVar0 = 0;
			}
			if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA")))
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
	return func_268(iVar0);
}

int func_97(int iParam0)
{
	return joaat("G_M_Y_UNIEXCONFEDS_01");
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_270(&Local_274, iVar0);
}

var func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_271(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_127(&Local_274, iVar0, 0);
}

var func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_128(&Local_274, iVar0, 0);
}

char* func_125(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_384(iParam0);
	return func_275(iVar0);
}

Vector3 func_127(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0 = { func_276(uParam0, iParam1, iParam2) };
	return vVar0;
}

var func_128(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	Var0 = { func_276(uParam0, iParam1, iParam2) };
	return Var0.f_3;
}

char* func_130(var uParam0)
{
	return "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_A";
}

void func_133(var uParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*uParam0)[iParam1], 0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMBAT_RANGE((*uParam0)[iParam1], 0);
			break;
		default:
			PED::SET_PED_COMBAT_RANGE((*uParam0)[iParam1], 0);
			break;
	}
	PED::SET_PED_COMBAT_MOVEMENT((*uParam0)[iParam1], 2);
}

void func_134(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if ((!__LIB_1__::func_489(&(uParam0->f_49[0 /*11*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_49[0 /*11*/]), 13)) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_49[0 /*11*/]), 1, 0);
		}
		if ((!__LIB_1__::func_489(&(uParam0->f_49[1 /*11*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_49[1 /*11*/]), 13)) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_49[1 /*11*/]), 1, 0);
		}
	}
	else
	{
		if ((__LIB_1__::func_489(&(uParam0->f_49[0 /*11*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_49[0 /*11*/]), 13)) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_49[0 /*11*/]), 0, 0);
		}
		if (__LIB_1__::func_489(&(uParam0->f_49[1 /*11*/]), 0) || (bParam2 && !__LIB_1__::func_489(&(uParam0->f_49[1 /*11*/]), 13)))
		{
			__LIB_2__::func_411(&(uParam0->f_49[1 /*11*/]), 0, 0);
		}
	}
}

void func_135(var uParam0, var uParam1)
{
	__LIB_3__::func_548(&(uParam1->f_49[0 /*11*/]), __LIB_2__::func_460(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_548(&(uParam1->f_49[1 /*11*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_5__::func_687(&(uParam1->f_49), 0, 0);
	__LIB_2__::func_394(&(uParam1->f_31), &(uParam1->f_49[1 /*11*/]));
}

bool func_138()
{
	if (__LIB_4__::func_499(Local_15[0], 0, &(Local_15.f_152), &(Local_15.f_180), 0, Local_15.f_9[0]) || __LIB_4__::func_499(Local_15.f_40[0], 0, &(Local_15.f_152), &(Local_15.f_180), 0, Local_15.f_9[0]))
	{
		return true;
	}
	return false;
}

void func_140()
{
	PED::SET_COMBAT_FLOAT(Local_15[0], 39, 10f);
	PED::SET_COMBAT_FLOAT(Local_15[0], 32, 2.5f);
	__LIB_2__::func_357(Local_15[0], Global_36, 3, 0, 3);
	TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 0, 0);
	__LIB_0__::func_7(&Local_274, 4096);
	__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
	__LIB_2__::func_224(Local_15.f_151, 1);
	__LIB_0__::func_7(&Local_274, 2);
}

int func_142()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 1;
	iVar0 = func_289(&(Local_15[0]), &(Local_274.f_31), 25f, &(Local_274.f_49), &iVar2, 3f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (__LIB_2__::func_341(&(Local_274.f_31)))
	{
		if (Local_274.f_31.f_1 == 0 || Local_274.f_31.f_1 == 1)
		{
			func_134(&Local_274, 0, 0);
		}
	}
	if (iVar0 != -1)
	{
		iVar1 = iVar0;
		if (iVar1 == 0)
		{
			__LIB_0__::func_7(&Local_274, 8);
		}
	}
	return iVar1;
}

bool func_145()
{
	if (__LIB_2__::func_720(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_147()
{
	vector3 vVar0;
	if (Local_15.f_9[0] > 30f)
	{
		return false;
	}
	if (!__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_341(&(Local_274.f_31)))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1.5f) };
	if (__LIB_0__::func_94(Local_15[0], vVar0, 0) < 17.5f)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_148(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		__LIB_1__::func_148(&(uParam0->f_8[4 /*3*/]));
		uParam0->f_104 = iParam1;
		func_134(uParam0, 0, 1);
		return true;
	}
	return false;
}

void func_151()
{
	if (__LIB_0__::func_51(&Local_274, 1))
	{
		if (func_305(0, 1))
		{
			__LIB_0__::func_8(&Local_274, 1);
			func_306(1);
		}
	}
	else if (func_305(1, 0))
	{
		__LIB_0__::func_7(&Local_274, 1);
		func_306(0);
	}
}

bool func_152()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar0 = func_307();
	if (__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_15[0], false);
	}
	if (Local_274.f_6 >= 2 && Local_274.f_6 < 10)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_274.f_27[2], true, 0) && __LIB_0__::func_665(Global_35, Local_15[0], 1, 1) > Local_274.f_95)
		{
			__LIB_2__::func_408(&(Local_274.f_78), 1);
			__LIB_2__::func_384(&Local_274, 10);
		}
	}
	if (Local_274.f_6 >= 3)
	{
		if (Local_15.f_9[0] < 20f)
		{
			__LIB_2__::func_548(&Local_15, 0);
		}
	}
	if (__LIB_1__::func_285(&(Local_274.f_8[4 /*3*/]), 3f))
	{
		if ((__LIB_2__::func_227(0f, 1, Local_15[0], 1) && Local_274.f_104 != Global_35) && Local_274.f_6 > 1)
		{
			func_134(&Local_274, 1, 0);
			__LIB_0__::func_37(&(Local_274.f_8[4 /*3*/]));
		}
	}
	switch (Local_274.f_6)
	{
		case 0:
			__LIB_0__::func_11();
			__LIB_2__::func_234(&Local_15, 1048576);
			if (__LIB_0__::func_51(&Local_274, 8))
			{
				__LIB_2__::func_357(Local_15[0], Global_36, 6, 0, 2);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				__LIB_3__::func_469(0, Global_35, -1);
				__LIB_1__::func_474(Local_15[0], &iVar3, 0.1f, 0, 1, 1);
			}
			else
			{
				func_313(Local_15[0], Global_35, 1, 1, 11000, 1);
			}
			__LIB_1__::func_283(&(Local_274.f_8[1 /*3*/]), 0);
			__LIB_2__::func_384(&Local_274, 1);
			break;
		case 1:
			func_314(&iVar0);
			if ((__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 1f) && (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_274.f_27[2], true, 0) || __LIB_0__::func_51(&Local_274, 8))) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				__LIB_3__::func_469(Local_15[0], Global_35, -1);
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				func_148(&Local_274, Local_15[0], Global_35, "GANG_INTERACT_APPROACH_TERRITORY", 50f, 0, 1744022339, 2);
				__LIB_2__::func_315(1891783641, Local_15[0], 1);
				Local_274.f_95 = (__LIB_0__::func_665(Global_35, Local_15[0], 1, 1) + 80f);
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_0__::func_7(&Local_274, 16);
				__LIB_2__::func_384(&Local_274, 2);
			}
			break;
		case 2:
			func_316();
			func_314(&iVar0);
			if (!__LIB_0__::func_51(&Local_274, 2048))
			{
				if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 2.75f))
				{
					__LIB_2__::func_315(1891783641, Local_15[0], 1);
					__LIB_0__::func_7(&Local_274, 2048);
				}
			}
			if (__LIB_2__::func_227(-4.5f, 1, Local_15[0], 1))
			{
				if (!__LIB_0__::func_51(&Local_274, 32))
				{
					__LIB_3__::func_548(&(Local_274.f_49[0 /*11*/]), __LIB_2__::func_460(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_0__::func_7(&Local_274, 32);
				}
				if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 8f) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_274.f_27[2], true, 0))
				{
					func_313(Local_15[0], Global_35, 1, 1, -1, 1);
					PED::_0x89F5E7ADECCCB49C(Local_15[0], "brave");
					func_148(&Local_274, Local_15[0], Global_35, "GANG_INTERACT_APPROACH", 50f, 0, 1744022339, 2);
					__LIB_2__::func_315(1891783641, Local_15[0], 1);
					__LIB_2__::func_384(&Local_274, 3);
				}
			}
			break;
		case 3:
			func_316();
			func_314(&iVar0);
			if (Local_274.f_6 != 3)
			{
				__LIB_2__::func_408(&(Local_274.f_78), 1);
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 5f))
			{
				func_317();
				__LIB_2__::func_384(&Local_274, 5);
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 3f))
			{
				__LIB_2__::func_384(&Local_274, 9);
			}
			break;
		case 6:
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 5f))
			{
				func_318();
				__LIB_2__::func_384(&Local_274, 7);
			}
			break;
		case 7:
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 1.5f))
			{
				__LIB_2__::func_384(&Local_274, 13);
			}
			break;
		case 8:
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 5f))
			{
				__LIB_2__::func_482(&(Local_274.f_49[0 /*11*/]), 1, 1);
				__LIB_2__::func_384(&Local_274, 9);
			}
			break;
		case 9:
			if (iVar0 == 1)
			{
				func_320();
				__LIB_2__::func_384(&Local_274, 6);
				return false;
			}
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 8f))
			{
				__LIB_2__::func_384(&Local_274, 10);
			}
			break;
		case 10:
			if (iVar0 == 1)
			{
				func_320();
				__LIB_2__::func_384(&Local_274, 6);
				return false;
			}
			if (func_321())
			{
				__LIB_2__::func_384(&Local_274, 11);
			}
			break;
		case 11:
			if (iVar0 == 1)
			{
				func_320();
				__LIB_2__::func_384(&Local_274, 6);
				return false;
			}
			if (func_322())
			{
				__LIB_2__::func_384(&Local_274, 12);
			}
			break;
		case 12:
			if (iVar0 == 1)
			{
				func_320();
				__LIB_2__::func_384(&Local_274, 6);
				return false;
			}
			if (func_323())
			{
				__LIB_2__::func_384(&Local_274, 13);
			}
			break;
		case 13:
			if (func_166())
			{
				__LIB_0__::func_7(&Local_274, 4096);
			}
			else
			{
				iVar1 = 68157440;
				iVar2 = 4096;
			}
			PED::SET_COMBAT_FLOAT(Local_15[0], 39, 10f);
			PED::SET_COMBAT_FLOAT(Local_15[0], 32, 2.5f);
			__LIB_2__::func_357(Local_15[0], Global_36, 5, 0, 2);
			TASK::TASK_COMBAT_PED(Local_15[0], Global_35, iVar1, iVar2);
			return true;
		case 14:
			return true;
	}
	return false;
}

int func_165(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar1], 0, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_166()
{
	if (__LIB_4__::func_46(&(Local_274.f_87), Local_15.f_152.f_16, &Local_15, &(Local_15.f_9), 0, 0, 0))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (Local_15.f_9[0] > 10f || ENTITY::GET_ENTITY_SPEED(Global_35) > 3f)
		{
			return true;
		}
	}
	return false;
}

int func_168()
{
	if (__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		if (Local_15.f_9[0] < 3f)
		{
			if (PED::IS_PED_IN_COMBAT(Local_15[0], Global_35))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_173()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (__LIB_3__::func_476(Local_15[iVar0], 1))
				{
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_250()
{
	__LIB_2__::func_104(&(Local_15.f_152), 0);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 0);
	__LIB_2__::func_110(&(Local_15.f_152), 0);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_250(&(Local_15.f_152), 0);
	__LIB_2__::func_662(&(Local_15.f_152), 0);
}

void func_251()
{
	vector3 vVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_238))
	{
		VOLUME::_DELETE_VOLUME(Local_15.f_238);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_27[2]))
	{
		VOLUME::_DELETE_VOLUME(Local_274.f_27[2]);
	}
	if (Local_274.f_7 == 2)
	{
		Local_15.f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1426.139f, -1442.861f, 78.244f, 0f, 0f, 0f, 15f, 15f, 40f, "volAvoidance");
	}
	else
	{
		vVar0 = { func_127(&Local_274, 0, 0) };
		Local_15.f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 15f, 15f, 40f, "volAvoidance");
	}
	switch (Local_274.f_7)
	{
		case 0:
			if (__LIB_0__::func_51(&Local_274, 1))
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1605.229f, -649.474f, 50.899f, 0f, 0f, 56f, 10f, 30f, 10f, "volConvo");
			}
			else
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1665.881f, -709.037f, 50.899f, 0f, 0f, 45f, 10f, 30f, 10f, "volConvo");
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&Local_274, 1))
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(924.287f, -1160.26f, 57.4f, 0f, 0f, 42f, 20f, 20f, 10f, "volConvo");
			}
			else
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(926.932f, -1133.298f, 57.4f, 0f, 0f, 42f, 20f, 20f, 10f, "volConvo");
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&Local_274, 1))
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1424.381f, -1435.509f, 83.5f, 0f, 0f, 70f, 15f, 30f, 10f, "volConvo");
			}
			else
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1424.381f, -1435.509f, 83.5f, 0f, 0f, 70f, 15f, 30f, 10f, "volConvo");
			}
			break;
		case 3:
			if (__LIB_0__::func_51(&Local_274, 1))
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1491.825f, -1041.339f, 31.204f, 0f, 0f, 11f, 35f, 40f, 40f, "volConvo");
			}
			else
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1491.825f, -1041.339f, 31.204f, 0f, 0f, 11f, 35f, 40f, 40f, "volConvo");
			}
			break;
		case 4:
			if (__LIB_0__::func_51(&Local_274, 1))
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2145.649f, -1333.354f, 46f, 0f, 0f, 68f, 20f, 40f, 10f, "volConvo");
			}
			else
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2145.649f, -1333.354f, 46f, 0f, 0f, 68f, 20f, 40f, 10f, "volConvo");
			}
			break;
		case 5:
			if (__LIB_0__::func_51(&Local_274, 1))
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1314.643f, -1682.233f, 68.5f, 0f, 0f, 42f, 15f, 30f, 10f, "volConvo");
			}
			else
			{
				Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1314.643f, -1682.233f, 68.5f, 0f, 0f, 42f, 15f, 30f, 10f, "volConvo");
			}
			break;
	}
}

void func_261(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

int func_263(var uParam0)
{
	return joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_A");
}

bool func_266(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
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

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2003318381;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_270(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_403(uParam0, iParam1, 0) };
	return vVar0;
}

var func_271(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_403(uParam0, iParam1, 0) };
	return Var0.f_3;
}

char* func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0176_G_M_O_UniExConfeds_01_WHITE_03";
		case 1:
			return "1026_G_M_Y_UniExConfeds_01_WHITE_04";
		case 2:
			return "0179_G_M_Y_UniExConfeds_01_WHITE_03";
		case 3:
			return "0177_G_M_Y_UniExConfeds_01_WHITE_01";
		default:
			break;
	}
	return "NULL VOICE";
}

struct<4> func_276(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<4> Var1;
	bVar0 = (iParam2 != 2 && (__LIB_0__::func_51(uParam0, 1) || iParam2 == 1));
	switch (uParam0->f_7)
	{
		case 0:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(0, 0);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(1, 0);
					default:
						break;
				}
			}
			break;
		case 1:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(2, 0);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(3, 0);
					default:
						break;
				}
			}
			break;
		case 2:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(4, 0);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(5, 0);
					default:
						break;
				}
			}
			break;
		case 3:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(6, 0);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(7, 0);
					default:
						break;
				}
			}
			break;
		case 4:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(8, 0);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(9, 0);
					default:
						break;
				}
			}
			break;
		case 5:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(10, 0);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(11, 0);
					default:
						break;
				}
			}
			break;
	}
	return Var1;
}

int func_289(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_453(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_0__::func_11(iParam1, uParam3, uParam0);
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

bool func_305(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar7;
	if (__LIB_2__::func_25(&Local_15, 0, 8))
	{
		return false;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, iParam0, Local_15.f_221), true);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, iParam1, Local_15.f_221), true);
	if (fVar0 > (fVar1 + 2f))
	{
		if (!__LIB_1__::func_472(Local_15[0], 100f, -1082130432 /* Float: -1f */, Local_15.f_9[0], -1082130432 /* Float: -1f */) && !__LIB_1__::func_472(Local_15.f_40[0], 100f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_15[0], false) != Local_274.f_101[iParam1])
			{
				switch (iParam1)
				{
					case 1:
						iVar2 = 2;
						break;
					case 0:
						iVar2 = 1;
						break;
				}
				vVar3 = { func_403(&Local_274, 0, iVar2) };
				vVar7 = { func_276(&Local_274, 0, iVar2) };
				if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(func_97(0), vVar7, false) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_15.f_57[0], vVar3, false))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_306(int iParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_15[0], false, true);
	Var0 = { func_276(&Local_274, 0, 0) };
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15[0], Var0, Var0.f_3, true, false, true);
	TASK::_TASK_USE_SCENARIO_POINT(Local_15[0], Local_274.f_101[iParam0], func_130(&Local_274), -1, false, true, 0, false, -1f, false);
	Var4 = { func_403(&Local_274, 0, 0) };
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15.f_40[0], Var4, Var4.f_3, true, false, true);
	func_251();
}

int func_307()
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 1;
	iVar0 = func_289(&(Local_15[0]), &(Local_274.f_31), 25f, &(Local_274.f_49), &iVar1, 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	return iVar0;
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<23> Var0;
	float fVar25;
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
	fVar25 = BUILTIN::TO_FLOAT((iParam4 / 1000));
	if (bParam5)
	{
		TASK::_0xE7FA07624574B79A(iParam0, iParam1, iParam2, iParam3, fVar25, 1, 0, 0, 0);
	}
	__LIB_2__::func_281(&Var0, iParam1, 0, -1, 2, 0, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
	TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam4, 0, 51, 0);
}

void func_314(int iParam0)
{
	if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 2f))
	{
		__LIB_1__::func_283(&(Local_274.f_8[2 /*3*/]), 0);
		if (*iParam0 != -1)
		{
			Local_274.f_72 = *iParam0;
		}
		switch (Local_274.f_72)
		{
			case 0:
				__LIB_2__::func_548(&Local_15, 0);
				func_473();
				__LIB_2__::func_482(&(Local_274.f_49[0 /*11*/]), 1, 1);
				__LIB_2__::func_298();
				__LIB_2__::func_384(&Local_274, 4);
				break;
			case 1:
				__LIB_2__::func_548(&Local_15, 0);
				func_320();
				__LIB_2__::func_384(&Local_274, 6);
				break;
			default:
				if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 18f))
				{
					__LIB_2__::func_482(&(Local_274.f_49[0 /*11*/]), 1, 1);
					func_474();
					__LIB_2__::func_298();
					__LIB_2__::func_384(&Local_274, 8);
				}
				break;
		}
	}
}

void func_316()
{
	vector3 vVar0;
	float fVar3;
	fVar3 = (Local_15.f_9[0] + 15f);
	__LIB_4__::func_162(&(Local_274.f_86), &(Local_274.f_78), Local_15[0], vVar0, 0, 4000, 1500, 1000, 1, 0, 1, fVar3);
}

void func_317()
{
	__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
	func_148(&Local_274, Local_15[0], Global_35, "GANG_INTERACT_CHAT_BIG_WARNING", 50f, 1, 1744022339, 2);
}

void func_318()
{
	__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
	func_148(&Local_274, Local_15[0], Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", 50f, 1, 1744022339, 2);
	PED::SET_PED_USING_ACTION_MODE(Local_15[0], true, -1, 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[0], Global_35, -1, -1f, -1f, -1f);
}

void func_320()
{
	__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
	func_476(&(Local_274.f_49), 1, 1);
	__LIB_2__::func_298();
	func_148(&Local_274, Global_35, Local_15[0], "AMBUSH_SPC_NEG_RESP", 50f, 1, 1744022339, -1);
}

bool func_321()
{
	if (__LIB_2__::func_1(Local_15.f_40[0], 0, 0))
	{
		PED::_0xA3A9299C4F2ADB98(Local_15[0]);
		TASK::TASK_MOUNT_ANIMAL(Local_15[0], Local_15.f_40[0], 20000, -1, 1f, 1, 0, 0);
		return true;
	}
	return false;
}

bool func_322()
{
	int iVar0;
	vector3 vVar1;
	if (PED::IS_PED_ON_MOUNT(Local_15[0]))
	{
		vVar1 = { __LIB_2__::func_116(9, 1) };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		switch (Local_274.f_7)
		{
			case 2:
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1455.2f, -1438.8f, 76.9f, 2f, 20000, 1f, 1, 40000f);
				break;
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar1, 10f, 2f, 0, 0);
		__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
		if (!__LIB_0__::func_51(&Local_274, 1024))
		{
			if (__LIB_0__::func_665(Global_35, Local_15[0], 1, 1) < Local_274.f_95)
			{
				func_148(&Local_274, Local_15[0], Global_35, "GANG_INTERACT_WATCH_YOURSELF", 50f, 1, 1744022339, 1);
			}
		}
		return true;
	}
	else if (!__LIB_0__::func_51(&Local_274, 1024))
	{
		if (__LIB_2__::func_227(0f, 1, Local_15[0], 1) && __LIB_2__::func_227(0f, 1, 0, 0))
		{
			func_148(&Local_274, Local_15[0], Global_35, "GANG_INTERACT_WATCH_YOURSELF", 50f, 1, 1744022339, 2);
			__LIB_0__::func_7(&Local_274, 1024);
		}
	}
	return false;
}

bool func_323()
{
	float fVar0;
	fVar0 = 99999.9f;
	switch (Local_274.f_5)
	{
		case 0:
			fVar0 = __LIB_1__::func_992(Local_15[0], func_127(&Local_274, 0, 0), 1);
			if (fVar0 > 225f)
			{
				__LIB_0__::func_325(&(Local_15.f_22[0]));
				__LIB_0__::func_615(&Local_274, 1);
			}
			break;
		case 1:
			fVar0 = __LIB_1__::func_992(Local_15[0], Global_36, 1);
			if (fVar0 < 100f)
			{
				if (__LIB_1__::func_992(Global_35, func_127(&Local_274, 0, 0), 1) > 225f)
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
					{
						func_148(&Local_274, Local_15[0], Global_35, "GANG_INTERACT_STAY_THERE_ESCALATED", 50f, 1, 1744022339, 1);
						__LIB_0__::func_615(&Local_274, 2);
					}
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				fVar0 = __LIB_1__::func_992(Local_15[0], Global_36, 1);
				if (fVar0 < 169f)
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
					{
						__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
						func_148(&Local_274, Local_15[0], Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", 50f, 1, 1744022339, 2);
						__LIB_0__::func_615(&Local_274, 3);
					}
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

struct<4> func_403(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<4> Var1;
	bVar0 = (iParam2 != 2 && (__LIB_0__::func_51(uParam0, 1) || iParam2 == 1));
	switch (uParam0->f_7)
	{
		case 0:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(0, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(1, 1);
					default:
						break;
				}
			}
			break;
		case 1:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(2, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(3, 1);
					default:
						break;
				}
			}
			break;
		case 2:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(4, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(5, 1);
					default:
						break;
				}
			}
			break;
		case 3:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(6, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(7, 1);
					default:
						break;
				}
			}
			break;
		case 4:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(8, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(9, 1);
					default:
						break;
				}
			}
			break;
		case 5:
			if (bVar0)
			{
				switch (iParam1)
				{
					case 0:
						return func_409(10, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_409(11, 1);
					default:
						break;
				}
			}
			break;
	}
	return Var1;
}

struct<4> func_409(int iParam0, int iParam1)
{
	return func_509(iParam0, iParam1);
}

int func_453(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (func_559(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_560(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_453(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_563(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_565(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*11*/], 20))
								{
									__LIB_5__::func_666(uParam3);
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
					__LIB_5__::func_680(iParam1, uParam3, fVar8);
					if (__LIB_17__::func_919(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_5__::func_684(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				break;
			case 2:
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_17__::func_921(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_473()
{
	__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
	func_148(&Local_274, Global_35, Local_15[0], "AMBUSH_SPC_POS_RESP", 50f, 1, 1744022339, -1);
}

void func_474()
{
	__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
	func_148(&Local_274, Local_15[0], Global_35, "GANG_INTERACT_CHAT_BIG_WARNING", 50f, 1, 1744022339, 2);
}

void func_476(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_2__::func_482(uParam0[iVar0 /*11*/], bParam1, bParam2);
		iVar0++;
	}
}

struct<4> func_509(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_599(iParam0, iParam1) };
	Var0.f_3 = func_600(iParam0, iParam1);
	return Var0;
}

bool func_559(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (__LIB_2__::func_362(iParam0, iParam1))
		{
			if (!__LIB_0__::func_27(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				__LIB_5__::func_684(uParam2, 0, 0, 1, 0);
				__LIB_1__::func_336(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_5__::func_682(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_516(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_560(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_14__::func_648(iParam1, uParam2, 0);
		iVar5 = __LIB_18__::func_848(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_5__::func_684(uParam2, 0, 0, 1, 0);
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
				iVar8 = __LIB_5__::func_674(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*11*/]);
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

void func_563(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
					MISC::SET_BIT(uParam4[iVar0 /*11*/], 14);
					iVar0++;
				}
			}
			__LIB_18__::func_849(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_565(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = iParam10 & 128 != false;
	bVar5 = iParam10 & 64 != false;
	bVar6 = iParam10 & 512 != false;
	bVar7 = PED::IS_PED_ON_FOOT(Global_35);
	bVar8 = PED::IS_PED_INJURED(*uParam0);
	bVar9 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar10 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar10 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*11*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*11*/])->f_8;
		}
		bVar2 = __LIB_0__::func_139((uParam4[iVar0 /*11*/])->f_6);
		__LIB_18__::func_850(*uParam0, uParam4[iVar0 /*11*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*11*/], 20))
		{
			bVar1 = true;
		}
		if (__LIB_3__::func_878(*uParam0, iParam1, uParam4[iVar0 /*11*/], bVar2, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar7, bVar8, bParam15, fVar10, bVar9))
		{
			if (!bParam18 && !bVar3)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*11*/])->f_6))
				{
					if (!bVar5)
					{
						__LIB_5__::func_684(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar4)
					{
						__LIB_5__::func_687(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*11*/], 11))
					{
						__LIB_14__::func_648(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar3 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*11*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar6)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar3 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar3;
}

Vector3 func_599(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1621.573f, -656.414f, 43.552f;
				case 1:
					return 1622.592f, -652.9243f, 43.5787f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1667.378f, -712.507f, 40.6663f;
				case 1:
					return 1666.179f, -714.5399f, 40.836f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 924.6028f, -1160.317f, 52.8848f;
				case 1:
					return 927.4636f, -1160.259f, 53.2192f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 928.5233f, -1133.084f, 52.4543f;
				case 1:
					return 930.172f, -1128.44f, 52.69f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1426.139f, -1437.182f, 78.244f;
				case 1:
					return 1423.808f, -1440.714f, 78.1349f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1422.865f, -1432.757f, 78.9811f;
				case 1:
					return 1426.265f, -1438.035f, 78.1343f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1496.905f, -1041.434f, 50.7788f;
				case 1:
					return 1498.856f, -1042.693f, 50.4789f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1496.905f, -1041.47f, 50.779f;
				case 1:
					return 1497.609f, -1039.475f, 50.6223f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2151.616f, -1322.072f, 41.6245f;
				case 1:
					return 2150.846f, -1318.955f, 41.7434f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2151.616f, -1322.072f, 41.6245f;
				case 1:
					return 2150.846f, -1318.955f, 41.7434f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1324.254f, -1678.46f, 66.9102f;
				case 1:
					return 1327.781f, -1675.447f, 66.7421f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1323.306f, -1677.441f, 66.7594f;
				case 1:
					return 1327.786f, -1680.141f, 67.2567f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_600(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 128.851f;
				case 1:
					return 43.0115f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -65.249f;
				case 1:
					return 181.0115f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -225.149f;
				case 1:
					return 284f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -295.249f;
				case 1:
					return 51.0115f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 267.451f;
				case 1:
					return 157.0115f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -35.249f;
				case 1:
					return 173.0115f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 100.851f;
				case 1:
					return 175.0115f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -257.249f;
				case 1:
					return 27.0115f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 160.851f;
				case 1:
					return 145.0115f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 160.851f;
				case 1:
					return 145.0115f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 157.951f;
				case 1:
					return 63.0115f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 84.851f;
				case 1:
					return 173.0115f;
			}
			break;
	}
	return 0f;
}

