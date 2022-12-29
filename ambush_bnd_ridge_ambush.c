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
	struct<222> Local_15 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<40> Local_274 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, 0, 0, -1, 5, 0, 0, 0, 0 } ;
	var uLocal_314 = 5;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 1065353216;
	var uLocal_326 = 1119092736;
	var uLocal_327 = 1092616192;
	var uLocal_328 = 1085276160;
	bool bLocal_329 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_329 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_329, 961, 0);
		if (bLocal_329)
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
			__LIB_2__::func_435();
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
							__LIB_2__::func_244();
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
									__LIB_2__::func_442(&Local_15, 1);
									break;
							}
						}
						__LIB_2__::func_266();
						__LIB_2__::func_222(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						__LIB_2__::func_282(&Local_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						__LIB_2__::func_147(&Local_15, 16384);
						__LIB_2__::func_146(&Local_15, 10);
					}
					break;
				case 10:
					__LIB_2__::func_540();
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
								__LIB_2__::func_500(&Local_15, 1);
								break;
						}
						__LIB_2__::func_283(&Local_15, 1);
						__LIB_0__::func_747(120, 0, 1);
						__LIB_2__::func_304(1, -1, 0, 0, 0);
						__LIB_2__::func_148(&Local_15);
						__LIB_2__::func_146(&Local_15, 11);
					}
					break;
				case 11:
					__LIB_2__::func_301(&Local_15);
					__LIB_2__::func_332();
					if (__LIB_2__::func_305(&Local_15))
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
					__LIB_2__::func_223(&Local_15);
					__LIB_2__::func_332();
					if (__LIB_2__::func_536())
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
	__LIB_2__::func_301(&Local_15);
	func_49();
	__LIB_2__::func_310(&Local_15, 0);
	__LIB_2__::func_420();
	__LIB_2__::func_171(&Local_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_282(&Local_15, 1);
	__LIB_2__::func_273(&Local_15, 0);
	if (Local_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_15.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_237))
	{
		__LIB_2__::func_492(&Local_15);
		__LIB_1__::func_544(Local_15.f_237);
	}
	__LIB_2__::func_283(&Local_15, 1);
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
		if (func_72(&uVar5))
		{
			fVar4 = __LIB_2__::func_578();
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
		__LIB_2__::func_289(&(Local_15.f_152));
		__LIB_2__::func_290(&(Local_15.f_152));
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
				if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_2__::func_146(&Local_15, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						__LIB_2__::func_498(&Local_15);
						__LIB_2__::func_174(&Local_15, 8672);
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
	var uVar5;
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
	vVar2 = { func_108(iVar0) };
	uVar5 = func_109(iVar0);
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
	var uVar5;
	int iVar6;
	int iVar7;
	if (Local_15.f_215 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_2__::func_17(iVar0);
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
	int iVar2;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			func_125(iVar0);
			func_126(iVar0);
			PED::SET_PED_HEARING_RANGE(Local_15[iVar0], 20f);
			if (__LIB_17__::func_496(iVar0))
			{
				__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[iVar0], 0, -1, 1);
			}
			else if (__LIB_0__::func_58(iVar0))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 47, true);
			switch (iVar0)
			{
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
			}
			__LIB_2__::func_150(&Local_15, iVar0, iVar1, iVar2);
			__LIB_2__::func_372(&Local_15, iVar0);
		}
		iVar0++;
	}
	return true;
}

bool func_23()
{
	if (!__LIB_2__::func_27(&Local_274, 4) && Local_274.f_4 < 1)
	{
		if (func_135())
		{
			__LIB_2__::func_560();
			func_137();
			__LIB_2__::func_151(&Local_274, 3);
		}
	}
	switch (Local_274.f_4)
	{
		case 0:
			if (func_139())
			{
				if (func_140())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_2__::func_151(&Local_274, 3);
				}
			}
			else if (func_142())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_146(&Local_15, 13);
				}
			}
			else
			{
				__LIB_2__::func_436(&Local_15, 0);
				if (func_145())
				{
					__LIB_2__::func_560();
					Local_274.f_39 = Local_15.f_9[0];
					__LIB_2__::func_442(&Local_15, 1);
					__LIB_2__::func_500(&Local_15, 1);
					__LIB_2__::func_494();
					__LIB_2__::func_151(&Local_274, 1);
				}
			}
			break;
		case 1:
			__LIB_2__::func_560();
			__LIB_2__::func_436(&Local_15, 0);
			__LIB_17__::func_806();
			if (func_148())
			{
				__LIB_2__::func_151(&Local_274, 2);
			}
			break;
		case 2:
			__LIB_17__::func_807();
			__LIB_2__::func_151(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	__LIB_17__::func_806();
	func_162();
	Local_274.f_35 = __LIB_2__::func_207(&Local_15);
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		__LIB_2__::func_208(&Local_15, iVar0, Local_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_5)
	{
		case 0:
			if (__LIB_2__::func_1(Global_1935630.f_40, 0, 1))
			{
				PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 3, -1f);
				PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 1, -1f);
			}
			__LIB_2__::func_554(&Local_15, 1, 0, (Local_15.f_215 - 1));
			__LIB_1__::func_283(&(Local_274.f_9[0 /*3*/]), 0);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			func_167();
			if (Local_274.f_35 <= 1)
			{
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_556(&Local_15, &(Local_274.f_31), &(Local_15.f_241), "AMBUSH_RA1_FLEE", 3f))
			{
				__LIB_2__::func_535();
				__LIB_2__::func_158(&Local_274, 3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_49()
{
	__LIB_2__::func_535();
	__LIB_2__::func_724(&Local_15, 120, 1065353216 /* Float: 1f */);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_25[3]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_274.f_25[3]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_25[4]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_274.f_25[4]);
	}
}

bool func_72(var uParam0)
{
	if (Local_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_15.f_21 < (__LIB_2__::func_578() - 10f))
	{
		*uParam0 = __LIB_2__::func_578();
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

bool func_83()
{
	vector3 vVar0[3];
	int iVar10;
	switch (Local_15.f_221)
	{
		case 0:
			Local_274 = 0;
			break;
		case 1:
			Local_274 = 1;
			break;
		default:
			Local_274 = 0;
			break;
	}
	vVar0[0 /*3*/] = { __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221) };
	vVar0[1 /*3*/] = { __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221) };
	vVar0[2 /*3*/] = { __LIB_2__::func_291(Local_15.f_151, 2, Local_15.f_221) };
	iVar10 = __LIB_5__::func_663(&vVar0, Global_36, 0f, 1, 0, 2, -1);
	switch (iVar10)
	{
		case 0:
			__LIB_2__::func_276(&Local_274, 1);
			break;
		case 1:
			break;
		case 2:
			__LIB_2__::func_276(&Local_274, 2);
			break;
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 5;
	Local_15.f_181 = 5;
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 2, 1);
	func_241();
	func_242();
	__LIB_2__::func_41(&(Local_15.f_182), 65, 0f, 2f, 2f, 2.5f, 32768);
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_3)
	{
		case 0:
			__LIB_2__::func_187();
			func_254(&Local_15);
			Local_274.f_3 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!func_256(&Local_15))
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
	switch (iVar0)
	{
		case 0:
			return 1241165900;
		case 1:
			return 548953544;
		case 2:
			return -128035795;
		case 3:
			return 172029938;
		case 4:
			return -469783696;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_258(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_258(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_261(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_261(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125(int iParam0)
{
	char* sVar0;
	sVar0 = func_262(iParam0);
	__LIB_2__::func_133(Local_15[iParam0], sVar0, 0);
}

void func_126(int iParam0)
{
	int iVar0;
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], true, true);
	__LIB_2__::func_272(Local_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	iVar0 = func_265(iParam0);
	__LIB_2__::func_530(&Local_15, Local_15[iParam0], iVar0, 1);
}

bool func_135()
{
	if (Local_274.f_32 < 0 || Local_274.f_32 >= 5)
	{
		Local_274.f_32 = 0;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_40[Local_274.f_32], Global_35, 1, 1))
	{
		return true;
	}
	if (__LIB_2__::func_538(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_32), 0, 4, 1))
	{
		return true;
	}
	if (Local_274.f_6 >= 4)
	{
		return true;
	}
	return false;
}

void func_137()
{
	int iVar0;
	int iVar1;
	__LIB_2__::func_276(&Local_274, 128);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_429(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 67108864, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.1f, 0.3f, 1, 1);
			__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_139()
{
	if (Local_274.f_34 >= 0)
	{
		return true;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_25[1]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_25[1], Global_36))
		{
			if (__LIB_17__::func_804(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_33), 0, (Local_15.f_215 - 1), 1))
			{
				Local_274.f_34 = Local_274.f_33;
				return true;
			}
		}
	}
	return false;
}

bool func_140()
{
	int iVar0;
	var uVar1[3];
	var uVar5[2];
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	iVar0 = Local_274.f_34;
	if (iVar0 < 0)
	{
		return false;
	}
	if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
	{
		return false;
	}
	switch (Local_274.f_6)
	{
		case 0:
			__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			__LIB_2__::func_45(Local_15[iVar0], Global_35, -1);
			__LIB_2__::func_278(&Local_274, 1);
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_15[iVar0], Global_35, 60f))
			{
				TASK::TASK_AIM_AT_ENTITY(Local_15[iVar0], Global_35, -1, 0, 0);
				if (!__LIB_2__::func_27(&Local_274, 64))
				{
					func_274(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_RA1_TRIGGER", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
					__LIB_2__::func_276(&Local_274, 512);
					__LIB_2__::func_276(&Local_274, 64);
				}
				__LIB_2__::func_278(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				uVar5[0] = Local_15[iVar0];
				uVar5[1] = Global_35;
				iVar8 = __LIB_2__::func_728(&uVar1, &uVar5, 3, ENTITY::GET_ENTITY_COORDS(Local_15[iVar0], false, true), 15f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					if (!__LIB_2__::func_1(uVar1[iVar9], 0, 0))
					{
					}
					else
					{
						switch (iVar8)
						{
							case 0:
								fVar11 = 0f;
								break;
							case 1:
								fVar11 = 0.5f;
								break;
							case 2:
								fVar11 = 0.7f;
								break;
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar10);
						TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_High", 1f, 0, 4);
						__LIB_2__::func_45(0, Global_35, -1);
						__LIB_1__::func_474(uVar1[iVar9], &iVar10, fVar11, 0, 1, 1);
					}
					iVar9++;
				}
				__LIB_2__::func_278(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_2__::func_278(&Local_274, 4);
			}
			break;
		case 4:
			__LIB_2__::func_276(&Local_274, 8);
			func_137();
			return true;
	}
	return false;
}

bool func_142()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_25[1], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_25[0], 1, 0))
		{
			__LIB_0__::func_11(&Local_15, 7);
			return true;
		}
	}
	if (__LIB_2__::func_539(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_145()
{
	vector3 vVar0;
	if (!__LIB_2__::func_47(&(Local_15.f_182), 64))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1.1f) };
	if (__LIB_2__::func_157(Local_274.f_25[2], vVar0) || __LIB_2__::func_157(Local_274.f_25[2], Global_36))
	{
		return true;
	}
	return false;
}

bool func_148()
{
	vector3 vVar0;
	int iVar4;
	func_162();
	switch (Local_274.f_7)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_9[1 /*3*/]), 0);
			__LIB_2__::func_280(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 0.1f))
			{
				vVar0 = { func_296(&Local_274, 1) };
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_15[1], vVar0, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
				func_297();
				func_274(&Local_274, Local_15[func_298()], Global_35, "AMBUSH_RA1_TRIGGER", -1073741824 /* Float: -2f */, 1, -500314840, 1);
				__LIB_2__::func_276(&Local_274, 512);
				__LIB_2__::func_189(&Local_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
				__LIB_2__::func_280(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 3f))
			{
				func_299();
				__LIB_2__::func_189(&Local_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
				__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
				__LIB_2__::func_280(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 0.1f))
			{
				__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
				__LIB_2__::func_280(&Local_274, 4);
			}
			break;
		case 4:
			if ((__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 2f) && __LIB_2__::func_27(&Local_274, 256)) && __LIB_2__::func_227(0f, 1, Local_274.f_38, 1))
			{
				iVar4 = -1;
				iVar4 = __LIB_2__::func_557(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar4 >= 0)
				{
					func_274(&Local_274, Local_15[iVar4], Global_35, "AMBUSH_RA1_RIDEOUT", -1073741824 /* Float: -2f */, 1, -500314840, 0);
					__LIB_2__::func_276(&Local_274, 16);
					__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
					__LIB_2__::func_280(&Local_274, 5);
				}
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 1f))
			{
				__LIB_2__::func_280(&Local_274, 6);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_162()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (__LIB_2__::func_27(&Local_274, 256))
	{
		return;
	}
	if (!__LIB_2__::func_27(&Local_274, 128))
	{
		return;
	}
	iVar0 = func_298();
	if (__LIB_2__::func_27(&Local_274, 512))
	{
		sVar1 = "AMBUSH_RA1_CALLOUT";
	}
	else
	{
		sVar1 = "AMBUSH_RA1_RIDEOUT";
	}
	if (iVar0 == -1 || __LIB_2__::func_227(0f, 1, Local_15[iVar0], 1))
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			if (!__LIB_2__::func_1(Local_15[iVar2], 0, 0))
			{
			}
			else if ((iVar2 == iVar0 || iVar0 == -1) || !__LIB_2__::func_1(Local_15[iVar2], 0, 1))
			{
				if (func_274(&Local_274, Local_15[iVar2], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, -500314840, 0))
				{
					__LIB_2__::func_276(&Local_274, 256);
				}
				else
				{
					iVar2++;
				}
			}
		}
	}
}

int func_167()
{
	int iVar0;
	iVar0 = -1;
	switch (Local_274.f_8)
	{
		case 0:
			if (__LIB_2__::func_227(0, 1, 0, 0) && __LIB_1__::func_285(&(Local_274.f_9[0 /*3*/]), 6f))
			{
				iVar0 = __LIB_2__::func_557(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar0 >= 0)
				{
					if (func_274(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_RA1_COMBATEARLY", -1073741824 /* Float: -2f */, 1, 1744022339, 0))
					{
						func_319(&Local_274, 1);
					}
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				iVar0 = __LIB_2__::func_557(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar0 >= 0)
				{
					if (func_274(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_RA1_COMBATLATE", -1073741824 /* Float: -2f */, 1, 1744022339, 0))
					{
						func_319(&Local_274, 3);
					}
				}
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_241()
{
	__LIB_2__::func_104(&(Local_15.f_152), 0);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 0);
	__LIB_2__::func_110(&(Local_15.f_152), 0);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_180(&(Local_15.f_152), 1);
	__LIB_2__::func_613(&(Local_15.f_152), 1);
	__LIB_2__::func_715(&(Local_15.f_152), 1);
}

void func_242()
{
	switch (Local_274)
	{
		case 0:
			func_376(&Local_15, &Local_274);
			break;
		case 1:
			func_377(&Local_15, &Local_274);
			break;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_25[3]))
	{
		PATHFIND::_0x19C7567D2F2287D6(Local_274.f_25[3], 7);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_25[4]))
	{
		PATHFIND::_0x19C7567D2F2287D6(Local_274.f_25[4], 7);
	}
}

void func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_17(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
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

struct<4> func_258(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_27(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(0, 0);
					case 1:
						return func_388(0, 2);
					case 2:
						return func_388(0, 6);
					case 3:
						return func_388(0, 9);
					case 4:
						return func_388(0, 12);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_27(iParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(2, 0);
					case 1:
						return func_388(2, 2);
					case 2:
						return func_388(2, 6);
					case 3:
						return func_388(2, 9);
					case 4:
						return func_388(2, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_388(1, 0);
					case 1:
						return func_388(1, 2);
					case 2:
						return func_388(1, 6);
					case 3:
						return func_388(1, 9);
					case 4:
						return func_388(1, 12);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_27(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(3, 0);
					case 1:
						return func_388(3, 2);
					case 2:
						return func_388(3, 6);
					case 3:
						return func_388(3, 9);
					case 4:
						return func_388(3, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_388(4, 0);
					case 1:
						return func_388(4, 2);
					case 2:
						return func_388(4, 6);
					case 3:
						return func_388(4, 9);
					case 4:
						return func_388(4, 12);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_261(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_27(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(0, 0);
					case 1:
						return func_388(0, 2);
					case 2:
						return func_388(0, 5);
					case 3:
						return func_388(0, 8);
					case 4:
						return func_388(0, 11);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_27(iParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(2, 0);
					case 1:
						return func_388(2, 2);
					case 2:
						return func_388(2, 5);
					case 3:
						return func_388(2, 8);
					case 4:
						return func_388(2, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_388(1, 0);
					case 1:
						return func_388(1, 2);
					case 2:
						return func_388(1, 5);
					case 3:
						return func_388(1, 8);
					case 4:
						return func_388(1, 11);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_27(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(3, 0);
					case 1:
						return func_388(3, 2);
					case 2:
						return func_388(3, 5);
					case 3:
						return func_388(3, 8);
					case 4:
						return func_388(3, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_388(4, 0);
					case 1:
						return func_388(4, 2);
					case 2:
						return func_388(4, 5);
					case 3:
						return func_388(4, 8);
					case 4:
						return func_388(4, 11);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_262(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_2__::func_490(iParam0);
	return func_395(iVar0);
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("GROUP_REPEATER");
		case 2:
			return joaat("GROUP_REPEATER");
		default:
			break;
	}
	return joaat("GROUP_REVOLVER");
}

bool func_274(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		iParam0->f_38 = iParam1;
		return true;
	}
	return false;
}

struct<4> func_296(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_27(iParam0, 1))
			{
				switch (iParam1)
				{
					case 1:
						return func_388(0, 3);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_27(iParam0, 2))
			{
				switch (iParam1)
				{
					case 1:
						return func_388(2, 3);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return func_388(1, 3);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_27(iParam0, 1))
			{
				switch (iParam1)
				{
					case 1:
						return func_388(3, 3);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return func_388(4, 3);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_297()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 51, true);
		}
		iVar0++;
	}
	iVar0 = 2;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			vVar2 = { func_423(&Local_274, iVar0) };
			__LIB_2__::func_429(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			fVar6 = __LIB_2__::func_739(&Local_274, iVar0);
			if (fVar6 > 0f)
			{
				iVar7 = __LIB_1__::func_976(&Local_274, iVar0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], vVar2, fVar6, iVar7, 0, 0);
				if (__LIB_2__::func_740(&Local_274, iVar0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 51, true);
				}
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				__LIB_2__::func_28(&Local_15, iVar0, 64);
				TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar0], -1, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_276(&Local_274, 32);
}

int func_298()
{
	int iVar0;
	int iVar1;
	if (Local_274.f_1 != -1)
	{
		return Local_274.f_1;
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	iVar0 = iVar1;
	if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
	{
		if (iVar0 == 0)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
	}
	Local_274.f_1 = iVar0;
	return iVar0;
}

void func_299()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	iVar9 = func_298();
	if (iVar9 != -1)
	{
		__LIB_2__::func_276(&Local_274, 128);
	}
	iVar5 = 0;
	while (iVar5 <= 1)
	{
		if (!__LIB_2__::func_1(Local_15[iVar5], 0, 0))
		{
		}
		else
		{
			switch (iVar5)
			{
				case 0:
					fVar6 = 0f;
					iVar7 = 1500;
					break;
				case 1:
					fVar6 = 0.2f;
					iVar7 = 2500;
					break;
			}
			vVar1 = { func_423(&Local_274, iVar5) };
			if (fVar8 > 0f)
			{
				if (__LIB_2__::func_740(&Local_274, iVar5))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar5], 51, true);
				}
			}
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar5], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, ENTITY::GET_ENTITY_COORDS(Local_15[iVar5], true, true), 1f);
			TASK::TASK_COMBAT_PED_TIMED(0, Global_35, iVar7, 0);
			if (fVar8 > 0f)
			{
				TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, vVar1, fVar8);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar5], &iVar0, fVar6, 0, 1, 1);
		}
		iVar5++;
	}
}

void func_319(int iParam0, int iParam1)
{
	iParam0->f_8 = iParam1;
}

void func_376(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3841.555f, -2964.077f, -17.3505f, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_27(iParam1, 1))
	{
		iParam1->f_25[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3850.681f, -2933.947f, -5f, 0f, 0f, 0f, 50f, 50f, 20f, "volTrigger");
		iParam1->f_25[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -3850.681f, -2986.303f, -5f, 0f, 0f, 13.86233f, 44.82002f, 75f, 20f);
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -3850.681f, -2986.303f, -5f, 0f, 0f, -28.27146f, 44.82002f, 75f, 20f);
		iParam1->f_25[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_25[0], 2233.576f, 1584.006f, 108.394f, 0f, 0f, -68.90441f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_25[0], 2456.139f, 1875.907f, 128.7063f, 0f, 0f, -11.02788f, 178.4207f, 446.6826f, 158.0314f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3850.681f, -2933.947f, -15f, 0f, 0f, 0f, 96f, 96f, 20f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3850.681f, -2933.947f, -8f, 0f, 0f, 0f, 75f, 75f, 30f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3850.681f, -2933.947f, 0f, 0f, 0f, 0f, 55f, 55f, 40f, "volSlowest");
	}
	else if (__LIB_2__::func_27(iParam1, 2))
	{
		iParam1->f_25[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3839.75f, -3086.341f, -5f, 0f, 0f, 0f, 60f, 60f, 20f, "volTrigger");
		iParam1->f_25[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -3841.549f, -3006.895f, -5f, 0f, 0f, -34.00759f, 37.35208f, 59.33092f, 20f);
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -3810.102f, -2974.74f, -5f, 0f, 0f, -34.0076f, 26.54462f, 32.56166f, 20f);
		iParam1->f_25[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_25[0], 2233.576f, 1584.006f, 108.394f, 0f, 0f, -68.90441f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_25[0], 2456.139f, 1875.907f, 128.7063f, 0f, 0f, -11.02788f, 178.4207f, 446.6826f, 158.0314f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3839.75f, -3086.341f, -15f, 0f, 0f, 0f, 96f, 96f, 20f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3839.75f, -3086.341f, -8f, 0f, 0f, 0f, 75f, 75f, 30f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3839.75f, -3086.341f, 0f, 0f, 0f, 0f, 55f, 55f, 40f, "volSlowest");
		iParam1->f_25[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3838.699f, -3043.845f, -6.133426f, 0f, 0f, -11f, 5.650144f, 20.05414f, 18.2278f, "volNavBlock1");
		iParam1->f_25[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3847.218f, -3056.331f, -6.133427f, 0f, 0f, -44f, 4.531132f, 14.98474f, 18.2278f, "volNavBlock2");
	}
	else
	{
		iParam1->f_25[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3880.675f, -2951.745f, -5f, 0f, 0f, 39.05031f, 52f, 52f, 20f, "volTrigger");
		iParam1->f_25[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -3798.813f, -2928.401f, -5f, 0f, 0f, -39.61912f, 51.87413f, 99.28097f, 20f);
		iParam1->f_25[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_25[0], 2337.703f, 1567.208f, 108.394f, 0f, 0f, -1.675658f, 112.9127f, 225.4777f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_25[0], 2481.925f, 1712.873f, 128.7063f, 0f, 0f, -82.71819f, 108.5835f, 268.6344f, 158.0314f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3880.675f, -2951.745f, -15f, 0f, 0f, 0f, 96f, 96f, 20f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3880.675f, -2951.745f, -8f, 0f, 0f, 0f, 75f, 75f, 30f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3880.675f, -2951.745f, 0f, 0f, 0f, 0f, 55f, 55f, 40f, "volSlowest");
	}
}

void func_377(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_27(iParam1, 1))
	{
		iParam1->f_25[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4132.221f, -2306.291f, 6.242087f, 0f, 0f, 0f, 50f, 50f, 20f, "volTrigger");
		iParam1->f_25[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -4224.361f, -2389.418f, 13.27712f, 0f, 0f, 13.86233f, 61.34361f, 66.20044f, 20f);
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -4200.079f, -2241.64f, 8.807465f, 0f, 0f, -51.43821f, 44.82002f, 75f, 20f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4132.221f, -2306.291f, 10.27737f, 0f, 0f, 0f, 96f, 96f, 20f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4132.221f, -2306.291f, 17.27737f, 0f, 0f, 0f, 75f, 75f, 30f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4132.221f, -2306.291f, 25.27737f, 0f, 0f, 0f, 55f, 55f, 40f, "volSlowest");
	}
	else
	{
		iParam1->f_25[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4205.504f, -2316.274f, 10.27737f, 0f, 0f, 0f, 50f, 50f, 20f, "volTrigger");
		iParam1->f_25[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -4040.657f, -2305.812f, -5f, 0f, 0f, -39.61911f, 51.87413f, 57.07259f, 20f);
		VOLUME::_0xBCE668AAF83608BE(iParam1->f_25[1], -4177.187f, -2244.327f, 13.55995f, 0f, 0f, -39.61911f, 51.87413f, 57.07259f, 20f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4205.504f, -2316.274f, 10.27737f, 0f, 0f, 0f, 96f, 96f, 20f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4205.504f, -2316.274f, 17.27737f, 0f, 0f, 0f, 75f, 75f, 30f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4205.504f, -2316.274f, 25.27737f, 0f, 0f, 0f, 55f, 55f, 40f, "volSlowest");
	}
}

struct<4> func_388(int iParam0, int iParam1)
{
	return func_448(iParam0, iParam1);
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1020_G_M_M_UniBanditos_01_HISPANIC_02";
		case 1:
			return "1068_G_M_M_UniCriminals_01_HISPANIC_05";
		default:
			break;
	}
	return "";
}

struct<4> func_423(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_27(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(0, 1);
					case 1:
						return func_388(0, 4);
					case 2:
						return func_388(0, 7);
					case 3:
						return func_388(0, 10);
					case 4:
						return func_388(0, 13);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_27(iParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(2, 1);
					case 1:
						return func_388(2, 4);
					case 2:
						return func_388(2, 7);
					case 3:
						return func_388(2, 10);
					case 4:
						return func_388(2, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_388(1, 1);
					case 1:
						return func_388(1, 4);
					case 2:
						return func_388(1, 7);
					case 3:
						return func_388(1, 10);
					case 4:
						return func_388(1, 13);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_27(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_388(3, 1);
					case 1:
						return func_388(3, 4);
					case 2:
						return func_388(3, 7);
					case 3:
						return func_388(3, 10);
					case 4:
						return func_388(3, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_388(4, 1);
					case 1:
						return func_388(4, 4);
					case 2:
						return func_388(4, 7);
					case 3:
						return func_388(4, 10);
					case 4:
						return func_388(4, 13);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_448(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_538(iParam0, iParam1) };
	Var0.f_3 = func_539(iParam0, iParam1);
	return Var0;
}

Vector3 func_538(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -3824.11f, -2958.226f, -8.4875f;
				case 1:
					return -3840.272f, -2959.46f, -13.5847f;
				case 2:
					return -3847.895f, -2982.061f, -7.749f;
				case 3:
					return -3850.225f, -2975.665f, -6.9971f;
				case 4:
					return -3836.531f, -2964.748f, -10.8078f;
				case 5:
					return -3857.754f, -3022.702f, -7.9381f;
				case 6:
					return -3857.833f, -3022.639f, -7.9411f;
				case 7:
					return -3872.618f, -3005.194f, -12.0196f;
				case 8:
					return -3860.83f, -3026.261f, -7.8401f;
				case 9:
					return -3860.819f, -3026.235f, -7.8415f;
				case 10:
					return -3871.444f, -3008.742f, -10.1646f;
				case 11:
					return -3855.39f, -3038.093f, -7.9097f;
				case 12:
					return -3855.415f, -3038.156f, -7.9135f;
				case 13:
					return -3882.374f, -3065.68f, -14.9059f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -3850.901f, -2975.993f, -6.9813f;
				case 1:
					return -3839.668f, -2962.902f, -12.589f;
				case 2:
					return -3812.107f, -2953.074f, -7.0245f;
				case 3:
					return -3817.203f, -2947.957f, -6.9286f;
				case 4:
					return -3836.657f, -2958.521f, -13.2697f;
				case 5:
					return -3775.735f, -2928.952f, -6.1421f;
				case 6:
					return -3775.735f, -2928.952f, -6.1421f;
				case 7:
					return -3801.153f, -2908.525f, -12.4759f;
				case 8:
					return -3773.359f, -2925.364f, -6.1242f;
				case 9:
					return -3773.359f, -2925.364f, -6.1242f;
				case 10:
					return -3798.012f, -2903.057f, -12.0673f;
				case 11:
					return -3741.654f, -2870.121f, -13.406f;
				case 12:
					return -3741.654f, -2870.121f, -13.406f;
				case 13:
					return -3788.928f, -2856.477f, -16.2009f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -3856.935f, -3056.3f, -8.9469f;
				case 1:
					return -3859.415f, -3073.3f, -15.119f;
				case 2:
					return -3872.021f, -3041.856f, -8.2392f;
				case 3:
					return -3868.986f, -3046.825f, -8.1751f;
				case 4:
					return -3863.718f, -3065.726f, -13.9352f;
				case 5:
					return -3861.32f, -3000.576f, -8.6114f;
				case 6:
					return -3861.32f, -3000.576f, -8.6114f;
				case 7:
					return -3879.023f, -3001.102f, -14.9415f;
				case 8:
					return -3865.816f, -3009.683f, -8.7408f;
				case 9:
					return -3865.816f, -3009.683f, -8.7408f;
				case 10:
					return -3891.451f, -3006.315f, -15.9943f;
				case 11:
					return -3824.958f, -2972.425f, -7.7035f;
				case 12:
					return -3824.9f, -2972.458f, -7.698f;
				case 13:
					return -3860.176f, -2965.781f, -14.7589f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -4178.423f, -2261.791f, 13.6838f;
				case 1:
					return -4152.116f, -2267.054f, 5.146f;
				case 2:
					return -4191.769f, -2256.395f, 14.6029f;
				case 3:
					return -4189.497f, -2263.886f, 16.4177f;
				case 4:
					return -4157.167f, -2262.555f, 7.0041f;
				case 5:
					return -4216.527f, -2276.708f, 6.5745f;
				case 6:
					return -4216.542f, -2276.689f, 6.5757f;
				case 7:
					return -4210.757f, -2307.178f, 1.8947f;
				case 8:
					return -4230.583f, -2387.903f, 11.6553f;
				case 9:
					return -4230.586f, -2387.872f, 11.6523f;
				case 10:
					return -4240.921f, -2360.593f, 9.1798f;
				case 11:
					return -4225.453f, -2391.658f, 12.5859f;
				case 12:
					return -4225.429f, -2391.723f, 12.6028f;
				case 13:
					return -4231.193f, -2355.762f, 7.894f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -4174.235f, -2267.402f, 12.8279f;
				case 1:
					return -4206.272f, -2263.373f, 13.3292f;
				case 2:
					return -4191.149f, -2261.036f, 16.4412f;
				case 3:
					return -4193.378f, -2270.58f, 16.5904f;
				case 4:
					return -4217.978f, -2274.683f, 6.7755f;
				case 5:
					return -4131.04f, -2257.902f, 1.8067f;
				case 6:
					return -4131.061f, -2257.96f, 1.8025f;
				case 7:
					return -4126.113f, -2284.837f, -3.9047f;
				case 8:
					return -4054.592f, -2294.377f, -0.7724f;
				case 9:
					return -4054.614f, -2294.359f, -0.7636f;
				case 10:
					return -4069.215f, -2299.952f, -0.1577f;
				case 11:
					return -4047.917f, -2295.904f, -3.0539f;
				case 12:
					return -4047.995f, -2295.96f, -3.029f;
				case 13:
					return -4059.081f, -2312.158f, -0.1885f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_539(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 39.0514f;
				case 1:
					return 55.0514f;
				case 2:
					return 33.0514f;
				case 3:
					return 11.4716f;
				case 4:
					return 49.0514f;
				case 5:
					return 69.0514f;
				case 6:
					return 71.0514f;
				case 7:
					return 73.0514f;
				case 8:
					return 57.0514f;
				case 9:
					return 61.0514f;
				case 10:
					return 67.0514f;
				case 11:
					return 101.9035f;
				case 12:
					return 99.9035f;
				case 13:
					return 109.9035f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 39.0514f;
				case 1:
					return 51.0514f;
				case 2:
					return 49.0514f;
				case 3:
					return 59.4716f;
				case 4:
					return 41.0514f;
				case 5:
					return 15.0514f;
				case 6:
					return 15.0514f;
				case 7:
					return 85.0514f;
				case 8:
					return 25.0514f;
				case 9:
					return 25.0514f;
				case 10:
					return 61.0514f;
				case 11:
					return 55.9035f;
				case 12:
					return 55.9035f;
				case 13:
					return 103.9035f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -192.9486f;
				case 1:
					return 221.0514f;
				case 2:
					return 209.0514f;
				case 3:
					return -156.5284f;
				case 4:
					return 181.0514f;
				case 5:
					return 105.0514f;
				case 6:
					return 105.0514f;
				case 7:
					return 75.0514f;
				case 8:
					return 37.0514f;
				case 9:
					return 37.0514f;
				case 10:
					return 99.0514f;
				case 11:
					return 97.9035f;
				case 12:
					return 95.9035f;
				case 13:
					return 111.9035f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 209.0514f;
				case 1:
					return -126.9486f;
				case 2:
					return -160.9486f;
				case 3:
					return -136.5284f;
				case 4:
					return -108.9486f;
				case 5:
					return 159.0514f;
				case 6:
					return 177.0514f;
				case 7:
					return 221.0514f;
				case 8:
					return 41.0514f;
				case 9:
					return 43.0514f;
				case 10:
					return -0.9486f;
				case 11:
					return 43.9035f;
				case 12:
					return 41.9035f;
				case 13:
					return 7.9035f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -188.9486f;
				case 1:
					return 121.0514f;
				case 2:
					return 165.0514f;
				case 3:
					return 161.4716f;
				case 4:
					return 153.0514f;
				case 5:
					return 189.0514f;
				case 6:
					return 189.0514f;
				case 7:
					return 165.0514f;
				case 8:
					return 113.0514f;
				case 9:
					return 111.0514f;
				case 10:
					return 115.0514f;
				case 11:
					return 99.9035f;
				case 12:
					return 97.9035f;
				case 13:
					return 143.9035f;
			}
			break;
	}
	return 0f;
}

