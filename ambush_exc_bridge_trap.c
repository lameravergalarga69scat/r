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
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	var uLocal_276 = 0;
	int iLocal_277[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	int iLocal_293[3] = { 0, 0, 0 };
	int iLocal_297[1] = { 0 };
	struct<4> Local_299 = { 0, 0, 0, 0 } ;
	var uLocal_303 = 0;
	var uLocal_304 = 1065353216;
	var uLocal_305 = 1119092736;
	var uLocal_306 = 1092616192;
	var uLocal_307 = 1085276160;
	bool bLocal_308 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_308 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_308, 961, 0);
		if (bLocal_308)
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
						__LIB_2__::func_392(&Local_15, 1);
						__LIB_0__::func_747(120, 0, 1);
						__LIB_2__::func_304(1, -1, 0, 0, 0);
						__LIB_2__::func_235(&Local_15);
						__LIB_2__::func_233(&Local_15, 11);
					}
					break;
				case 11:
					__LIB_2__::func_331(&Local_15);
					func_38();
					if (func_39(&Local_15))
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_3__::func_596(&(Local_15.f_244), 0);
						__LIB_2__::func_233(&Local_15, 12);
					}
					break;
				case 12:
					func_41(&Local_15);
					func_38();
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
			__LIB_2__::func_311(&Local_15, 4);
		}
	}
	fVar0 = 8f;
	if (Local_15.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!__LIB_0__::func_0() && !func_47(&(Local_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_2__::func_7())
	{
		__LIB_3__::func_596(&(Local_15.f_250), 0);
		return;
	}
	if (func_47(&(Local_15.f_250), fVar0))
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
			if (!__LIB_0__::func_899(&(Local_15.f_244)))
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
		if (func_71())
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
	func_125(&Local_15, 0, 0, -1);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_126(iVar0), 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], true, true);
			PED::SET_PED_HEARING_RANGE(Local_15[iVar0], 5f);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 6, true);
			func_128(&Local_15, iVar0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
			{
				__LIB_2__::func_28(&Local_15, iVar0, 64);
			}
			switch (iVar0)
			{
				case 0:
					__LIB_2__::func_272(Local_15[0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					TASK::TASK_PLAY_ANIM(Local_15[0], __LIB_2__::func_606(), __LIB_2__::func_607(2), 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					break;
				case 1:
					__LIB_2__::func_272(Local_15[1], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					TASK::TASK_PLAY_ANIM(Local_15[1], __LIB_2__::func_606(), __LIB_2__::func_607(3), 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					break;
				case 2:
					__LIB_2__::func_272(Local_15[2], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 3:
					__LIB_2__::func_272(Local_15[3], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 4:
					__LIB_2__::func_272(Local_15[4], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 5:
					__LIB_2__::func_272(Local_15[5], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
			}
			__LIB_2__::func_314(&Local_15, iVar0, -1, -1);
		}
		iVar0++;
	}
	return true;
}

bool func_23()
{
	if (iLocal_274 < 1)
	{
		if (func_136())
		{
			if (!__LIB_0__::func_51(&uLocal_276, 524288))
			{
				__LIB_2__::func_571(&(Local_15.f_152), &(Local_15.f_152.f_16));
			}
			else
			{
				func_139();
				func_140(3);
			}
		}
	}
	switch (iLocal_274)
	{
		case 0:
			func_141(&Local_15, 0);
			if (func_142())
			{
				if (func_143())
				{
					__LIB_2__::func_234(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
				else
				{
					func_144(0);
					func_145();
					__LIB_2__::func_259(&uLocal_284);
					__LIB_0__::func_7(&(Local_299.f_3), 4);
					__LIB_0__::func_7(&(Local_299.f_3), 2);
					func_140(1);
				}
			}
			else if (func_148())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_234(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			break;
		case 1:
			__LIB_8__::func_225(func_150(), &Local_299, 0f, 0f, 0f, 1106247680 /* Float: 30f */, 35f, 4000, 4000, 3000, 1);
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_15[0]) || ENTITY::IS_ENTITY_ON_SCREEN(Local_15[1]))
			{
				if (__LIB_0__::func_51(&(Local_299.f_3), 4))
				{
					__LIB_0__::func_8(&(Local_299.f_3), 4);
				}
			}
			func_141(&Local_15, 0);
			func_154();
			if (func_155())
			{
				__LIB_1__::func_539();
				__LIB_2__::func_246(&Local_299);
				__LIB_2__::func_259(&uLocal_284);
				__LIB_0__::func_37(&uLocal_284);
				if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[0]))
				{
					__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
				if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[1]))
				{
					__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
				func_140(2);
			}
			break;
		case 2:
			if ((func_47(&uLocal_290, 5f) || !__LIB_2__::func_1(Local_15[0], 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15[0], Global_35, 1, 1))
			{
				func_140(3);
			}
			else if (func_160(0f, 1, Local_15[0], 1))
			{
				__LIB_3__::func_600(Local_15[0], Global_35, "TAUNT_GEN_LOCATION", "", -1f, 0, 0, 1, 2, 0, 0, -500314840, 1, 0, 0);
				func_140(3);
			}
			if (iLocal_274 == 3)
			{
				__LIB_2__::func_259(&uLocal_284);
				if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[2]))
				{
					__LIB_2__::func_73(Local_15[2], &(Local_15.f_22[2]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
				if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[3]))
				{
					__LIB_2__::func_73(Local_15[3], &(Local_15.f_22[3]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_29()
{
	int iVar0;
	__LIB_3__::func_596(&(Local_15.f_247), 0);
	if (func_47(&(Local_15.f_247), 5f))
	{
		__LIB_2__::func_337(&Local_15, 0);
	}
	if (func_47(&(Local_15.f_247), 3f))
	{
		__LIB_2__::func_326(&Local_15);
	}
	func_38();
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
			__LIB_2__::func_234(&Local_15, 4194304);
		}
		if (__LIB_2__::func_4(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_260(&Local_15, 1f);
				__LIB_2__::func_234(&Local_15, 8388608);
			}
		}
	}
}

bool func_31()
{
	func_173();
	func_174();
	func_175();
	if (!__LIB_0__::func_51(&uLocal_276, 65536))
	{
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_277[0], Global_36))
		{
			func_144(1);
			__LIB_0__::func_7(&uLocal_276, 65536);
		}
	}
	func_177();
	switch (iLocal_275)
	{
		case 0:
			__LIB_3__::func_596(&uLocal_287, 0);
			func_178();
			iLocal_275 = 1;
			break;
		case 1:
			if (func_179())
			{
				func_180();
				iLocal_275 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_374(&Local_15) <= 0)
			{
				iLocal_275 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_38()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (!__LIB_2__::func_26(&Local_15, iVar0, 16))
		{
			if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
			{
				if (func_195(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_40[iVar0]));
					__LIB_2__::func_28(&Local_15, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

bool func_39(var uParam0)
{
	return func_41(uParam0);
	return false;
}

int func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_3__::func_596(&(uParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_22[iVar0]))
			{
				if (__LIB_0__::func_94((*uParam0)[iVar0], Global_36, 1) > 40f || func_47(&(uParam0->f_241), 15f))
				{
					__LIB_0__::func_325(&(uParam0->f_22[iVar0]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
					return 1;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= uParam0->f_215)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	if (func_47(&(Local_15.f_244), 45f) && __LIB_0__::func_0())
	{
		__LIB_2__::func_371(&Local_15);
		__LIB_0__::func_37(&(Local_15.f_244));
	}
	return false;
}

bool func_47(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_899(uParam0))
	{
		return false;
	}
	if (func_199(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_49()
{
	MAP::DISPLAY_RADAR(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_56))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_56, 301, false);
		PED::_0x2EB75FB86C41F026(Local_15.f_56, 3, 1);
		PED::_0x58F7DB5BD8FA2288(Local_15.f_56);
		TASK::CLEAR_PED_SECONDARY_TASK(Local_15.f_56);
		__LIB_2__::func_145(Local_15.f_56, 0);
	}
	__LIB_1__::func_539();
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
					if (__LIB_0__::func_899(&(Local_15.f_247)))
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

bool func_71()
{
	int iVar0;
	if (!__LIB_2__::func_4(&Local_15, 16384))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 105:
			if (__LIB_2__::func_549() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_549() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
	}
	if (__LIB_2__::func_37())
	{
		if (Local_15.f_151 != 43)
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
						__LIB_3__::func_596(&(Local_15.f_253), 0);
						if (func_47(&(Local_15.f_253), 0.5f))
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
	return 140f;
}

bool func_83()
{
	int iVar0;
	if (__LIB_0__::func_62(Global_36, func_84(15, 0, 0)) < __LIB_0__::func_62(Global_36, func_84(15, 1, 0)))
	{
		__LIB_0__::func_7(&uLocal_276, 1);
	}
	__LIB_2__::func_324(&(Local_15.f_152));
	Local_15.f_215 = 6;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 5;
	Local_15.f_181 = 2;
	func_248();
	__LIB_2__::func_41(&(Local_15.f_182), 0, 2.5f, 1.501f, 1.501f, 1.75f, 0);
	__LIB_2__::func_234(&Local_15, 131072);
	iLocal_297[0] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_2__::func_610(), 0, 0, false, true);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_297[iVar0]);
		iVar0++;
	}
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	func_251(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!func_252(iParam0, 1))
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
	int iVar1;
	STREAMING::REQUEST_MODEL(joaat("G_M_O_UNIEXCONFEDS_01"), false);
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_UNIEXCONFEDS_01"), false);
	STREAMING::REQUEST_ANIM_DICT(__LIB_2__::func_606());
	iVar0 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(joaat("G_M_O_UNIEXCONFEDS_01")))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_UNIEXCONFEDS_01")))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_2__::func_606()))
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_297[iVar1], true, false))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_260(iVar0);
}

int func_97(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_261(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_263(iVar0);
}

var func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_264(iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_267(iVar0);
}

var func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_268(iVar0);
}

void func_125(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = (uParam0->f_216 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1(uParam0->f_40[iVar0], 0, 0))
			{
				if (!func_269(uParam0, iVar0))
				{
					func_270(uParam0, iVar0, 1);
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
				if (func_269(uParam0, iVar0))
				{
					func_270(uParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_126(int iParam0)
{
	int iVar0;
	iVar0 = func_271(iParam0);
	return func_272(iVar0);
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
		__LIB_2__::func_237(uParam0, iParam1, 4);
	}
}

bool func_136()
{
	int iVar0;
	if (__LIB_0__::func_94(Global_35, func_116(0), 0) < 4f)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_718(Local_15[iVar0], 0, &(Local_15.f_152), &(Local_15.f_180), 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	if (__LIB_0__::func_51(&uLocal_276, 32) || __LIB_0__::func_51(&uLocal_276, 64))
	{
		return true;
	}
	return false;
}

void func_139()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_0__::func_51(&uLocal_276, 64))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			func_128(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.3f, 1f, 1, 1);
			if (!bVar2)
			{
				__LIB_3__::func_600(Local_15[iVar0], Global_35, "CALLOUT_TRAP_BUSTED", 0, 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bVar2 = true;
			}
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
	func_125(&Local_15, 1, 0, -1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

void func_140(int iParam0)
{
	iLocal_274 = iParam0;
}

void func_141(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (uParam0->f_182.f_17 & 4 != 0)
	{
		return;
	}
	if (uParam0->f_182.f_17 & 128 != 0)
	{
		if (!__LIB_2__::func_47(&(uParam0->f_182), 256))
		{
			if (__LIB_2__::func_47(&(uParam0->f_182), 64))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_STOP")))
				{
					__LIB_3__::func_596(&(uParam0->f_182.f_10), 0);
					if (__LIB_0__::func_901(&(uParam0->f_182.f_10)))
					{
						__LIB_2__::func_254(&(uParam0->f_182.f_10));
					}
					if (func_47(&(uParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630.f_40 != 0 && bParam1)
						{
							TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 8, 0, 0);
							__LIB_2__::func_48(&(uParam0->f_182), 256);
						}
					}
				}
				else if (__LIB_0__::func_899(&(uParam0->f_182.f_10)))
				{
					__LIB_2__::func_255(&(uParam0->f_182.f_10));
				}
			}
		}
	}
	if (uParam0->f_182.f_17 & 8 != 0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_2__::func_48(&(uParam0->f_182), 4);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		if (__LIB_2__::func_1(PED::GET_MOUNT(Global_35), 0, 1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_MOUNT(Global_35), false);
		}
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (uParam0->f_182.f_17 & 32768 != 0 && uParam0->f_182.f_17 & 64 == 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (uParam0->f_182.f_17 & 1 == 0)
	{
		if (bVar1 && (__LIB_2__::func_49(uParam0->f_182[3]) || __LIB_2__::func_47(&(uParam0->f_182), 16)))
		{
			if (__LIB_2__::func_47(&(uParam0->f_182), 32))
			{
				if (func_285(uParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!__LIB_2__::func_47(&(uParam0->f_182), 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				__LIB_2__::func_48(&(uParam0->f_182), 1);
			}
		}
		else if (bVar1 && __LIB_2__::func_49(uParam0->f_182[2]))
		{
			if (func_285(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_22);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 6f);
					}
				}
			}
		}
		else if (bVar1 && __LIB_2__::func_49(uParam0->f_182[1]))
		{
			if (func_285(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_23);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 9f);
					}
				}
			}
		}
		else if (__LIB_2__::func_49(uParam0->f_182[0]))
		{
			if (!__LIB_2__::func_47(&(uParam0->f_182), 64))
			{
				__LIB_2__::func_48(&(uParam0->f_182), 64);
			}
			if (func_285(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_24);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 12f);
					}
				}
			}
		}
	}
	if (bVar1 && uParam0->f_182.f_17 & 1 != 0)
	{
		if (!__LIB_2__::func_47(&(uParam0->f_182), 2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iVar3, 5f, 5000, false);
					__LIB_3__::func_596(&(uParam0->f_182.f_7), 0);
					__LIB_2__::func_48(&(uParam0->f_182), 2);
				}
			}
			else
			{
				if (__LIB_0__::func_27(uParam0->f_182.f_5, 16))
				{
					bVar4 = __LIB_2__::func_134(Global_35, &(uParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = __LIB_2__::func_135(Global_35, &(uParam0->f_182.f_6), uParam0->f_182.f_5, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
				}
				if (bVar4)
				{
					if (__LIB_0__::func_27(uParam0->f_182.f_5, 8))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
						if (__LIB_2__::func_1(iVar0, 0, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
						}
					}
					uParam0->f_182.f_18 = { Global_36 };
					if (__LIB_2__::func_1(iVar0, 0, 1))
					{
						TASK::TASK_STAND_STILL(iVar0, BUILTIN::FLOOR((uParam0->f_182.f_21 * 1000f)));
					}
					__LIB_3__::func_596(&(uParam0->f_182.f_7), 0);
					__LIB_2__::func_48(&(uParam0->f_182), 2);
				}
			}
		}
		else if (!__LIB_2__::func_47(&(uParam0->f_182), 4))
		{
			if (func_47(&(uParam0->f_182.f_7), uParam0->f_182.f_21))
			{
				if (__LIB_0__::func_27(uParam0->f_182.f_5, 8))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					if (__LIB_2__::func_1(iVar0, 0, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_2__::func_48(&(uParam0->f_182), 4);
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
				if (__LIB_2__::func_1(iVar0, 0, 1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				}
			}
		}
	}
}

bool func_142()
{
	vector3 vVar0;
	vVar0 = { __LIB_2__::func_114(Global_35, 1.25f) };
	if (!__LIB_1__::func_205(Global_35, iLocal_277[0], 1, 0))
	{
		return false;
	}
	if (__LIB_2__::func_157(Local_15.f_182[1], vVar0) || __LIB_2__::func_157(Local_15.f_182[1], Global_36))
	{
		return true;
	}
	return false;
}

bool func_143()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	int iVar8;
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_277[iVar0]))
		{
			vVar1 = { VOLUME::_GET_VOLUME_SCALE(iLocal_277[iVar0]) };
			vVar4 = { VOLUME::_GET_VOLUME_COORDS(iLocal_277[iVar0]) };
			if (vVar1.x <= vVar1.y)
			{
				fVar7 = vVar1.y;
			}
			else
			{
				fVar7 = vVar1.x;
			}
			iVar8 = FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar4, fVar7);
			if (iVar8 > 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_144(bool bParam0)
{
	if (!bParam0)
	{
	}
	func_291(bParam0);
	func_292(bParam0);
}

void func_145()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	__LIB_0__::func_7(&uLocal_276, 524288);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (iVar0 == 0)
			{
				__LIB_3__::func_600(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_TRAP_MALE", "", -1f, 1, 0, 1, 2, 0, 0, -500314840, 1, 0, 0);
			}
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			func_128(&Local_15, iVar0, 1);
		}
		iVar0++;
	}
	func_125(&Local_15, 1, 0, -1);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_297[0], func_293(), func_294(), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_297[0], "PEDB", Local_15[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_297[0], "PEDC", Local_15[1], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_297[0]);
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			func_128(&Local_15, iVar0, 1);
			vVar1 = { func_295(iVar0) };
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], vVar1, 2f, 1, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 1, 1f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar4, 0, 0, 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 51, true);
		}
		iVar0++;
	}
	__LIB_3__::func_596(&uLocal_290, 0);
	__LIB_2__::func_246(&Local_299);
	__LIB_2__::func_706(&Local_15, 1);
	__LIB_2__::func_483(&Local_15, 1);
}

bool func_148()
{
	if (!__LIB_1__::func_205(Global_35, iLocal_277[0], 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_277[1], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_277[2], 1, 0))
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

Vector3 func_150()
{
	if (__LIB_0__::func_51(&uLocal_276, 1))
	{
		return 1620.853f, -658.6385f, 45f;
	}
	return 1667.845f, -710.0798f, 42.72022f;
}

void func_154()
{
	if (!__LIB_0__::func_51(&uLocal_276, 131072))
	{
		if (__LIB_2__::func_1(Local_15[4], 0, 0))
		{
			if (__LIB_1__::func_472(Local_15[4], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				__LIB_2__::func_73(Local_15[4], &(Local_15.f_22[4]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::TASK_COMBAT_PED(Local_15[4], Global_35, 0, 0);
				__LIB_0__::func_7(&uLocal_276, 131072);
			}
		}
	}
	if (!__LIB_0__::func_51(&uLocal_276, 262144))
	{
		if (__LIB_2__::func_1(Local_15[4], 0, 0))
		{
			if (__LIB_1__::func_472(Local_15[4], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				__LIB_2__::func_73(Local_15[5], &(Local_15.f_22[5]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::TASK_COMBAT_PED(Local_15[5], Global_35, 0, 0);
				__LIB_0__::func_7(&uLocal_276, 262144);
			}
		}
	}
}

bool func_155()
{
	int iVar0;
	if (__LIB_2__::func_1(Local_15[0], 0, 1))
	{
		if (!__LIB_0__::func_51(&uLocal_276, 2))
		{
			if (__LIB_2__::func_598(Local_15[0], iLocal_297[0], "PEDB", joaat("BREAKOUT"), 0, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15[0], Global_35, 1, 1))
			{
				__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15[0], Global_35, 1, 1))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 1000, true, 1);
				}
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
				__LIB_0__::func_7(&uLocal_276, 2);
			}
		}
	}
	else if (!__LIB_0__::func_51(&uLocal_276, 2))
	{
		__LIB_0__::func_7(&uLocal_276, 2);
	}
	if (__LIB_2__::func_1(Local_15[1], 0, 1))
	{
		if (!__LIB_0__::func_51(&uLocal_276, 4))
		{
			if (__LIB_2__::func_598(Local_15[1], iLocal_297[0], "PEDC", joaat("BREAKOUT"), 0, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15[1], Global_35, 1, 1))
			{
				__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15[1], Global_35, 1, 1))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 100, true, 1);
				}
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[1], &iVar0, 0, 0, 1, 1);
				__LIB_0__::func_7(&uLocal_276, 4);
			}
		}
	}
	else if (!__LIB_0__::func_51(&uLocal_276, 4))
	{
		__LIB_0__::func_7(&uLocal_276, 4);
	}
	if ((__LIB_0__::func_51(&uLocal_276, 2) && __LIB_0__::func_51(&uLocal_276, 4)) || func_47(&uLocal_284, 5f))
	{
		return true;
	}
	return false;
}

bool func_160(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!__LIB_2__::func_136(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_306(fParam0))
	{
		return false;
	}
	return true;
}

void func_173()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_324(iVar0))
		{
			PED::SET_PED_RESET_FLAG(Local_15[iVar0], 27, true);
		}
		iVar0++;
	}
}

void func_174()
{
	int iVar0;
	if (func_47(&uLocal_287, 5f))
	{
		iVar0 = -1;
		if (!__LIB_0__::func_51(&uLocal_276, 16384))
		{
			iVar0 = func_325(0, 5, 1);
			if (iVar0 != -1)
			{
				if (__LIB_3__::func_600(Local_15[iVar0], Global_35, "GANG_TAUNT_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					__LIB_0__::func_7(&uLocal_276, 16384);
				}
			}
		}
		else if (!__LIB_0__::func_51(&uLocal_276, 32768))
		{
			if (func_160(0, 1, 0, 0))
			{
				iVar0 = func_325(0, 5, 1);
				if (iVar0 != -1)
				{
					if (__LIB_3__::func_600(Local_15[iVar0], Global_35, "TAUNT_GEN_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						__LIB_0__::func_7(&uLocal_276, 32768);
					}
				}
			}
		}
	}
}

void func_175()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
			{
				__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_177()
{
	bool bVar0;
	if (!__LIB_0__::func_51(&uLocal_276, 16))
	{
		if (func_326(&bVar0))
		{
			func_327(4);
			func_327(5);
			__LIB_0__::func_7(&uLocal_276, 16);
		}
		else if (bVar0)
		{
			__LIB_2__::func_426(&(Local_15[4]));
			__LIB_2__::func_426(&(Local_15[5]));
			__LIB_0__::func_7(&uLocal_276, 16);
		}
	}
}

void func_178()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (!__LIB_1__::func_205(Global_35, iLocal_277[0], 1, 0))
	{
		__LIB_0__::func_7(&uLocal_276, 128);
	}
	if (__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		vVar0 = { func_329(0) };
		fVar3 = func_330(0);
		iLocal_293[0] = TASK::ADD_COVER_POINT(vVar0, fVar3, 1, 1, 5, false);
		if (!__LIB_0__::func_51(&uLocal_276, 64) && !__LIB_0__::func_51(&uLocal_276, 128))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[0], vVar0, 1.25f, 1, 0, 0);
		}
		PED::SET_COMBAT_FLOAT(Local_15[0], 32, 2f);
	}
	if (__LIB_2__::func_1(Local_15[1], 0, 0))
	{
		vVar0 = { func_329(1) };
		fVar3 = func_330(1);
		iLocal_293[1] = TASK::ADD_COVER_POINT(vVar0, fVar3, 0, 1, 4, false);
		PED::_0xFC3DB99C8144CD81(Local_15[1], Local_15.f_182[1], 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
		__LIB_1__::func_474(Local_15[1], &iVar4, 1.5f, 0, 1, 1);
	}
	if (__LIB_2__::func_1(Local_15[4], 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
		__LIB_1__::func_474(Local_15[4], &iVar4, 0.5f, 0, 1, 1);
	}
}

bool func_179()
{
	int iVar0;
	if (!__LIB_1__::func_205(Global_35, iLocal_277[0], 1, 0))
	{
		return true;
	}
	if (func_47(&uLocal_284, 5f))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				if (__LIB_0__::func_94(Local_15[iVar0], Global_36, 0) < 5f || __LIB_0__::func_94(Local_15[iVar0], Global_36, 0) > 23f)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_180()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_1__::func_733(Local_15[iVar0]);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
		}
		iVar0++;
	}
}

bool func_195(int iParam0)
{
	float fVar0;
	if (__LIB_2__::func_26(&Local_15, iParam0, 32))
	{
		if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iParam0], false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iParam0], true), 0, 1))
	{
		return false;
	}
	if (Local_15.f_216 == Local_15.f_215)
	{
		if (!__LIB_2__::func_1(Local_15[iParam0], 0, 1))
		{
			return true;
		}
	}
	if (!__LIB_2__::func_26(&Local_15, iParam0, 64))
	{
		fVar0 = func_199(&(Local_15.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return true;
		}
	}
	return false;
}

float func_199(var uParam0)
{
	if (!__LIB_0__::func_899(uParam0))
	{
		return uParam0->f_1;
	}
	if (__LIB_0__::func_901(uParam0))
	{
		return uParam0->f_2;
	}
	return (__LIB_0__::func_36() - uParam0->f_1);
}

void func_248()
{
	iLocal_277[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeSafe");
	VOLUME::_0x39816F6F94F385AD(iLocal_277[0], 1637.576f, -676.7795f, 46.46909f, 0f, 0f, 42.5f, 4.936f, 47.67205f, 5.188f);
	iLocal_277[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
	VOLUME::_0x39816F6F94F385AD(iLocal_277[2], 1544.533f, -766.3533f, 56.91f, 0f, 0f, 42.31288f, 250.9461f, 29.97863f, 68.89426f);
	VOLUME::_0x39816F6F94F385AD(iLocal_277[2], 1731.524f, -595.7613f, 56.91f, 0f, 0f, 42.5f, 241.1071f, 29.97863f, 68.89426f);
	VOLUME::_0x39816F6F94F385AD(iLocal_277[2], 1639.355f, -677.7615f, 33.9022f, 0f, 0f, 42.49998f, 10.39935f, 39.2051f, 18f);
	if (__LIB_0__::func_51(&uLocal_276, 1))
	{
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1643.64f, -683.3976f, 45.857f, 0f, 0f, 42.5f, 4.936f, 28.48f, 5.188f, "volSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1635.249f, -673.9538f, 45.857f, 0f, 0f, 42.5f, 4.936f, 31.09248f, 5.188f, "volSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1633.992f, -672.5825f, 45.857f, 0f, 0f, 42.5f, 4.936f, 12.88272f, 5.188f, "volSlowest");
	}
	else
	{
		VOLUME::_0x39816F6F94F385AD(iLocal_277[0], 1660.932f, -702.2694f, 44.71793f, 0f, 0f, 42.49999f, 4.936f, 22.35577f, 8.786794f);
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1631.693f, -670.36f, 45.857f, 0f, 0f, 42.5f, 4.936f, 28.48f, 5.188f, "volSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1648.03f, -688.2261f, 45.857f, 0f, 0f, 42.49999f, 4.936f, 21.936f, 5.188f, "volSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1659.008f, -700.2086f, 45.857f, 0f, 0f, 42.49999f, 4.936f, 12.88272f, 8.561708f, "volSlowest");
	}
	iLocal_277[3] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1637.991f, -675.9075f, 45.75901f, 0f, 0f, 42f, 20f, 20f, 20f, "volFireCenter");
	iLocal_277[4] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1622.075f, -658.2303f, 45.75901f, 0f, 0f, 42f, 10f, 10f, 10f, "volFireSupport1");
	iLocal_277[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1655.62f, -695.4865f, 45.75901f, 0f, 0f, 42f, 8f, 8f, 8f, "volFireSupport1");
}

void func_251(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
							Jump @5955; //curOff = 4380
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
									break;
							}
							Jump @5955; //curOff = 4426
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
									break;
							}
							Jump @5955; //curOff = 4507
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
							Jump @5955; //curOff = 4623
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
									break;
							}
							Jump @5955; //curOff = 4704
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
							Jump @5955; //curOff = 4890
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
									break;
							}
							Jump @5955; //curOff = 4936
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
									break;
							}
							Jump @5955; //curOff = 4982
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
							Jump @5955; //curOff = 5133
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
									break;
							}
							Jump @5955; //curOff = 5179
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
									break;
							}
							Jump @5955; //curOff = 5225
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
									break;
							}
							Jump @5955; //curOff = 5271
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
									break;
							}
							Jump @5955; //curOff = 5317
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
									break;
							}
							Jump @5955; //curOff = 5363
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
									break;
							}
							Jump @5955; //curOff = 5409
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
									break;
							}
							Jump @5955; //curOff = 5490
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
									break;
							}
							Jump @5955; //curOff = 5536
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
									break;
							}
							Jump @5955; //curOff = 5582
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
									break;
							}
							Jump @5955; //curOff = 5628
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
									break;
							}
							Jump @5955; //curOff = 5674
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							Jump @5955; //curOff = 5755
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
									break;
							}
							Jump @5955; //curOff = 5801
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
							Jump @6223; //curOff = 5955
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
							Jump @6223; //curOff = 6192
							*uParam2 = { 0f, 0f, 0f };
							*uParam3 = 0f;
							Jump @6223; //curOff = 6206
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
bool func_252(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 202256484;
		case 1:
			return -27749127;
		case 2:
			return -737034136;
		case 3:
			return -968088355;
		case 4:
			return 1606262487;
		case 5:
			return -1787852230;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

int func_261(int iParam0)
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
			return joaat("G_M_O_UNIEXCONFEDS_01");
		case 4:
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		case 5:
			return joaat("G_M_O_UNIEXCONFEDS_01");
		default:
			break;
	}
	return joaat("G_M_Y_UNIEXCONFEDS_01");
}

Vector3 func_263(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_383(iParam0) };
	return vVar0;
}

var func_264(int iParam0)
{
	struct<4> Var0;
	Var0 = { func_383(iParam0) };
	return Var0.f_3;
}

Vector3 func_267(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_389(iParam0) };
	return vVar0;
}

var func_268(int iParam0)
{
	struct<4> Var0;
	Var0 = { func_389(iParam0) };
	return Var0.f_3;
}

bool func_269(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_40[iParam1]) || ENTITY::IS_ENTITY_VISIBLE(uParam0->f_40[iParam1]))
	{
		return true;
	}
	if (!__LIB_2__::func_26(uParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

void func_270(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_84[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_84[iParam1], true);
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_40[iParam1], true);
		__LIB_2__::func_242(uParam0, iParam1, 4);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_84[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_84[iParam1], false);
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_40[iParam1], false);
		__LIB_2__::func_28(uParam0, iParam1, 4);
	}
}

int func_271(int iParam0)
{
	switch (iParam0)
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
	return -1;
}

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0176_G_M_O_UniExConfeds_01_WHITE_03";
		case 1:
			return "0179_G_M_Y_UniExConfeds_01_WHITE_03";
		default:
			break;
	}
	return "NULL VOICE";
}

bool func_285(var uParam0)
{
	if (!__LIB_0__::func_899(&(uParam0->f_182.f_13)))
	{
		return true;
	}
	if (!func_47(&(uParam0->f_182.f_13), uParam0->f_182.f_16))
	{
		return true;
	}
	return false;
}

void func_291(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
		{
			PED::SET_PED_CONFIG_FLAG(Local_15.f_40[iVar0], 136, !bParam0);
		}
		iVar0++;
	}
}

void func_292(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 1, bParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, !bParam0);
		}
		iVar0++;
	}
}

Vector3 func_293()
{
	if (!__LIB_0__::func_51(&uLocal_276, 1))
	{
		return 1657.592f, -700.831f, 41.699f;
	}
	return 1630.311f, -669.131f, 44.565f;
}

Vector3 func_294()
{
	if (!__LIB_0__::func_51(&uLocal_276, 1))
	{
		return 0f, 0f, -129.174f;
	}
	return 0f, 0f, 45.173f;
}

Vector3 func_295(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_434(iParam0) };
	return vVar0;
}

bool func_306(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_0__::func_899(&uLocal_0) && !func_450(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_324(int iParam0)
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
	if (__LIB_0__::func_94(Local_15[iParam0], Global_36, 1) < 4f)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 2f;
			break;
		case 1:
			fVar0 = 1.5f;
			break;
		case 4:
			fVar0 = 2.25f;
			break;
	}
	if (func_47(&uLocal_287, fVar0))
	{
		return false;
	}
	return true;
}

int func_325(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = func_459(&Local_15, iParam0, iParam1, bParam2);
	if (iVar0 < 0)
	{
		return -1;
	}
	return iVar0;
}

bool func_326(var uParam0)
{
	if (!__LIB_2__::func_157(iLocal_277[0], Global_36) || __LIB_2__::func_374(&Local_15) <= 2)
	{
		*uParam0 = 1;
		return false;
	}
	if (func_460(4) && func_460(5))
	{
		return true;
	}
	return false;
}

void func_327(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	var uVar7;
	int iVar8;
	if (__LIB_2__::func_1(Local_15[iParam0], 0, 0))
	{
		vVar0 = { func_461(iParam0) };
		fVar3 = func_462(iParam0);
		vVar4 = { func_295(iParam0) };
		uVar7 = func_463(iParam0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iParam0], false, 0, false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_15[iParam0], true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15[iParam0], vVar0, fVar3, false, false, true);
		PED::SET_PED_COMBAT_RANGE(Local_15[iParam0], 0);
		PED::SET_PED_COMBAT_MOVEMENT(Local_15[iParam0], 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar8);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar4, Global_35, 3f, 0, 1.5f, 4f, 1, 1, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[iParam0], &iVar8, 0, 0, 1, 1);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iParam0], false, 0, false);
		PED::_0xFC3DB99C8144CD81(Local_15[iParam0], Local_15.f_182[1], 0, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iParam0], 51, true);
		PED::SET_COMBAT_FLOAT(Local_15[iParam0], 28, 80f);
		PED::SET_COMBAT_FLOAT(Local_15[iParam0], 32, 3f);
		__LIB_2__::func_73(Local_15[iParam0], &(Local_15.f_22[iParam0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		func_128(&Local_15, iParam0, 1);
	}
}

Vector3 func_329(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_464(iParam0) };
	return vVar0;
}

float func_330(int iParam0)
{
	struct<4> Var0;
	Var0 = { func_464(iParam0) };
	return Var0.f_3;
}

struct<4> func_383(int iParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_51(&uLocal_276, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_479(0, 14);
			case 1:
				return func_479(0, 15);
			case 2:
				return func_479(0, 16);
			case 3:
				return func_479(0, 17);
			case 4:
				return func_479(0, 18);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_479(1, 14);
			case 1:
				return func_479(1, 15);
			case 2:
				return func_479(1, 16);
			case 3:
				return func_479(1, 17);
			case 4:
				return func_479(1, 18);
			default:
				break;
		}
	}
	return Var0;
}

struct<4> func_389(int iParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_51(&uLocal_276, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_479(0, 0);
			case 1:
				return func_479(0, 1);
			case 2:
				return func_479(0, 2);
			case 3:
				return func_479(0, 3);
			case 4:
				return func_479(0, 8);
			case 5:
				return func_479(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_479(1, 0);
			case 1:
				return func_479(1, 1);
			case 2:
				return func_479(1, 2);
			case 3:
				return func_479(1, 3);
			case 4:
				return func_479(1, 8);
			case 5:
				return func_479(1, 9);
			default:
				break;
		}
	}
	return Var0;
}

struct<4> func_434(int iParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_51(&uLocal_276, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_479(0, 4);
			case 1:
				return func_479(0, 5);
			case 2:
				return func_479(0, 6);
			case 3:
				return func_479(0, 7);
			case 4:
				return func_479(0, 12);
			case 5:
				return func_479(0, 13);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_479(1, 4);
			case 1:
				return func_479(1, 5);
			case 2:
				return func_479(1, 6);
			case 3:
				return func_479(1, 7);
			case 4:
				return func_479(1, 12);
			case 5:
				return func_479(1, 13);
			default:
				break;
		}
	}
	return Var0;
}

bool func_450(var uParam0, float fParam1)
{
	if (func_47(uParam0, fParam1))
	{
		__LIB_0__::func_37(uParam0);
		return true;
	}
	return false;
}

int func_459(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar2], 0, 0))
		{
			fVar1 = iParam0->f_9[iVar2];
			if (fVar1 < fVar0 && (!bParam3 || func_160(0f, 1, (*iParam0)[iVar2], 1)))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

int func_460(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_461(iParam0) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false) > 6f)
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(func_261(iParam0), vVar0, false))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_461(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_276, 1))
	{
		switch (iParam0)
		{
			case 4:
				return func_544(0, 10);
			case 5:
				return func_544(0, 11);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				return func_544(1, 10);
			case 5:
				return func_544(1, 11);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_462(int iParam0)
{
	if (__LIB_0__::func_51(&uLocal_276, 1))
	{
		switch (iParam0)
		{
			case 4:
				return func_545(0, 10);
			case 5:
				return func_545(0, 11);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				return func_545(1, 10);
			case 5:
				return func_545(1, 11);
			default:
				break;
		}
	}
	return 0f;
}

var func_463(int iParam0)
{
	struct<4> Var0;
	Var0 = { func_434(iParam0) };
	return Var0.f_3;
}

struct<4> func_464(int iParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_51(&uLocal_276, 1))
	{
		switch (iParam0)
		{
			case 0:
				return func_479(3, 0);
			case 1:
				return func_479(3, 1);
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return func_479(2, 0);
			case 1:
				return func_479(2, 1);
			default:
				break;
		}
	}
	return Var0;
}

struct<4> func_479(int iParam0, int iParam1)
{
	return func_554(iParam0, iParam1);
}

Vector3 func_544(int iParam0, int iParam1)
{
	return func_591(iParam0, iParam1);
}

float func_545(int iParam0, int iParam1)
{
	return func_592(iParam0, iParam1);
}

struct<4> func_554(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_591(iParam0, iParam1) };
	Var0.f_3 = func_592(iParam0, iParam1);
	return Var0;
}

Vector3 func_591(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1616.596f, -659.1586f, 43.6101f;
				case 1:
					return 1621.879f, -654.9921f, 43.4658f;
				case 2:
					return 1606.125f, -654.8089f, 45.6346f;
				case 3:
					return 1615.897f, -640.9041f, 44.9168f;
				case 4:
					return 1620.17f, -659.5289f, 43.5545f;
				case 5:
					return 1621.587f, -657.9903f, 43.5543f;
				case 6:
					return 1613.075f, -651.7256f, 45.0641f;
				case 7:
					return 1616.672f, -651.5272f, 44.6111f;
				case 8:
					return 1634.106f, -638.1013f, 43.198f;
				case 9:
					return 1632.274f, -639.6194f, 43.2507f;
				case 10:
					return 1670.723f, -710.6649f, 40.6666f;
				case 11:
					return 1668.301f, -713.3752f, 40.6652f;
				case 12:
					return 1652.833f, -691.7001f, 43.5057f;
				case 13:
					return 1649.424f, -691.7462f, 43.5055f;
				case 14:
					return 1621.871f, -642.453f, 44.2865f;
				case 15:
					return 1620.593f, -643.5325f, 44.3758f;
				case 16:
					return 1621.843f, -639.2168f, 44.4681f;
				case 17:
					return 1625.86f, -639.1562f, 44.089f;
				case 18:
					return 1684.829f, -695.5182f, 40.8666f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1672.286f, -709.6382f, 40.7565f;
				case 1:
					return 1667.102f, -714.0449f, 40.7678f;
				case 2:
					return 1666.48f, -726.5389f, 40.3778f;
				case 3:
					return 1683.016f, -715.7391f, 40.5442f;
				case 4:
					return 1668.315f, -708.9211f, 40.7909f;
				case 5:
					return 1666.137f, -709.94f, 40.8855f;
				case 6:
					return 1672.98f, -717.3826f, 40.6529f;
				case 7:
					return 1676.285f, -715.5811f, 40.6695f;
				case 8:
					return 1678.937f, -702.892f, 40.5996f;
				case 9:
					return 1681.169f, -703.019f, 40.6826f;
				case 10:
					return 1616.271f, -657.8309f, 43.873f;
				case 11:
					return 1620.96f, -653.6501f, 43.7284f;
				case 12:
					return 1624.233f, -664.284f, 43.2568f;
				case 13:
					return 1626.792f, -663.2341f, 43.5027f;
				case 14:
					return 1676.228f, -705.8148f, 40.4863f;
				case 15:
					return 1677.838f, -705.6115f, 40.4659f;
				case 16:
					return 1680.46f, -705.8431f, 40.3337f;
				case 17:
					return 1674.272f, -747.4375f, 40.5448f;
				case 18:
					return 1676.904f, -748.7184f, 40.6063f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1613.594f, -626.3547f, 44.0981f;
				case 1:
					return 1608.121f, -628.0863f, 44.155f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1617.972f, -659.0823f, 44.2022f;
				case 1:
					return 1623.639f, -657.3481f, 44.1274f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_592(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -4f;
				case 1:
					return 63.04f;
				case 2:
					return 281.834f;
				case 3:
					return 175.834f;
				case 4:
					return 220.7874f;
				case 5:
					return 226.7874f;
				case 6:
					return 221.834f;
				case 7:
					return 221.834f;
				case 8:
					return 154.7874f;
				case 9:
					return 152.7874f;
				case 10:
					return 48.24f;
				case 11:
					return 30.24f;
				case 12:
					return 42.7874f;
				case 13:
					return 36.7874f;
				case 14:
					return 89.44f;
				case 15:
					return 107.52f;
				case 16:
					return 65.84f;
				case 17:
					return 75.5018f;
				case 18:
					return 143.5018f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 231.6f;
				case 1:
					return -169.76f;
				case 2:
					return 357.834f;
				case 3:
					return 91.834f;
				case 4:
					return 41.4233f;
				case 5:
					return 41.4233f;
				case 6:
					return 41.834f;
				case 7:
					return 41.834f;
				case 8:
					return 129.4233f;
				case 9:
					return 145.4233f;
				case 10:
					return 260.0916f;
				case 11:
					return 158.0916f;
				case 12:
					return 221.4233f;
				case 13:
					return 221.4233f;
				case 14:
					return 177.52f;
				case 15:
					return 172.24f;
				case 16:
					return 170.8f;
				case 17:
					return -54.4982f;
				case 18:
					return -64.4982f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 198.8184f;
				case 1:
					return 198.8184f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14.8184f;
				case 1:
					return 16.72f;
			}
			break;
	}
	return 0f;
}

