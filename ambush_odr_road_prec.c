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
	struct<172> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, -1, 0, 2, -1082130432, 1148844442, 1148844442, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, -1, -1, 0, 0, 0, 0, 0 } ;
	bool bLocal_446 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_446 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_446, 961, 0);
		if (bLocal_446)
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
					__LIB_2__::func_551();
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
				vVar1 = { func_84(Local_15.f_151, 0, Local_15.f_221) };
				vVar1 = { func_84(Local_15.f_151, 1, Local_15.f_221) };
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
	vector3 vVar1;
	var uVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_125(iVar0), 0);
			vVar1 = { func_127(&Local_274, iVar0) };
			uVar4 = func_128(&Local_274, iVar0);
			iVar5 = func_129(&Local_274, iVar0);
			Local_274.f_133[iVar0] = __LIB_2__::func_488(iVar5, vVar1, uVar4, 0, -1f, 1);
			TASK::_TASK_USE_SCENARIO_POINT(Local_15[iVar0], Local_274.f_133[iVar0], func_131(iVar5), -1, false, true, 0, false, -1f, false);
			PED::_0x49DADFC4CD808B0A(Local_15[iVar0], 1, -1);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
			__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_133(&Local_15, iVar0);
			__LIB_2__::func_967(&(Local_15.f_152), Local_15[iVar0], Local_15.f_40[iVar0], 0);
			switch (iVar0)
			{
				case 0:
					break;
				case 1:
					break;
			}
		}
		iVar0++;
	}
	func_135(0, 1);
	func_136(&Local_15, &Local_274, 1);
	Local_274.f_170 = 526336 | __LIB_2__::func_340(3, 0, 0);
	return true;
}

bool func_23()
{
	int iVar0;
	if (!__LIB_0__::func_51(&Local_274, 2))
	{
		if (func_141())
		{
			__LIB_2__::func_408(&(Local_274.f_118), 1);
			func_143();
			func_144();
			__LIB_0__::func_613(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_146())
			{
				if (__LIB_2__::func_666())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_0__::func_613(&Local_274, 3);
				}
			}
			else if (func_149())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else
			{
				iVar0 = -1;
				iVar0 = func_151();
				if (func_152(iVar0))
				{
					if (iVar0 != -1)
					{
						Local_274.f_117 = iVar0;
					}
					__LIB_2__::func_671(&Local_15, 0);
					__LIB_2__::func_224(Local_15.f_151, 0);
					func_135(0, 1);
					if (!__LIB_2__::func_410(5))
					{
						__LIB_9__::func_218(4, 20);
						__LIB_9__::func_218(10, 20);
						__LIB_9__::func_218(37, 20);
						__LIB_9__::func_218(2, 20);
						__LIB_9__::func_218(36, 20);
					}
					else
					{
						__LIB_9__::func_218(4, 10);
						__LIB_9__::func_218(10, 10);
						__LIB_9__::func_218(37, 10);
						__LIB_9__::func_218(2, 10);
						__LIB_9__::func_218(36, 10);
					}
					func_144();
					__LIB_17__::func_788();
					func_156(&Local_15, &Local_274, joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"), "disturbingNew", Local_15[0], -1f, 60f, 30f, 60f);
					__LIB_0__::func_613(&Local_274, 1);
				}
				else
				{
					func_157();
				}
			}
			break;
		case 1:
			__LIB_4__::func_154(&(Local_274.f_140), __LIB_0__::func_58());
			if (func_160())
			{
				__LIB_0__::func_613(&Local_274, 3);
			}
			break;
		case 2:
			__LIB_0__::func_613(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	Local_274.f_129 = func_173(&Local_15);
	func_174();
	func_175();
	func_176();
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (!Local_274.f_137[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
			{
				if (__LIB_2__::func_398(Local_15[iVar0]))
				{
					__LIB_2__::func_603(&(Local_15[iVar0]), &(Local_274.f_39[iVar0 /*21*/]), &(Local_274.f_82), 1, 1);
					Local_274.f_137[iVar0] = 1;
				}
			}
			else
			{
				Local_274.f_137[iVar0] = 1;
			}
		}
		__LIB_2__::func_399(&Local_15, iVar0, Local_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_2__::func_548(&Local_15, 0);
			__LIB_1__::func_283(&(Local_274.f_11[0 /*3*/]), 0);
			__LIB_0__::func_614(&Local_274, 1);
			break;
		case 1:
			__LIB_0__::func_614(&Local_274, 2);
			break;
		case 2:
			if (Local_274.f_129 <= 0)
			{
				__LIB_0__::func_614(&Local_274, 3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_46()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	if (!__LIB_0__::func_75(&(Local_274.f_11[6 /*3*/])))
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
					__LIB_1__::func_283(&(Local_274.f_11[6 /*3*/]), 0);
				}
			}
			iVar0++;
		}
	}
	else if (__LIB_1__::func_285(&(Local_274.f_11[6 /*3*/]), 5f))
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
	return iVar1;
}

void func_49()
{
	__LIB_2__::func_601(&(Local_274.f_140), 0);
	__LIB_2__::func_408(&(Local_274.f_118), 1);
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
	return 180f;
}

bool func_83()
{
	float fVar0[3];
	float fVar4;
	int iVar5;
	int iVar6;
	switch (Local_15.f_221)
	{
		case 0:
			Local_274.f_10 = 0;
			break;
		case 1:
			Local_274.f_10 = 1;
			break;
		case 2:
			Local_274.f_10 = 2;
			break;
		case 3:
			Local_274.f_10 = 3;
			break;
		case 4:
			Local_274.f_10 = 4;
			break;
		default:
			Local_274.f_10 = 0;
			break;
	}
	if (func_250(Local_15.f_151, -1) || func_250(Local_15.f_151, Local_15.f_221))
	{
		fVar4 = 999999.9f;
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < fVar0)
		{
			fVar0[iVar6] = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, iVar6, Local_15.f_221), true);
			if (fVar0[iVar6] < fVar4)
			{
				iVar5 = iVar6;
				fVar4 = fVar0[iVar6];
			}
			iVar6++;
		}
		switch (iVar5)
		{
			case 0:
				__LIB_0__::func_7(&Local_274, 1);
				break;
			case 1:
				break;
			case 2:
				__LIB_0__::func_7(&Local_274, 512);
				break;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 1, Local_15.f_221), true))
	{
		__LIB_0__::func_7(&Local_274, 1);
	}
	Local_15.f_215 = 2;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 2;
	Local_15.f_181 = 0;
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 3, 1);
	func_253();
	func_254();
	func_255(57);
	func_255(58);
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
	int iVar0;
	int iVar1;
	switch (Local_274.f_2)
	{
		case 0:
			func_265();
			func_266(&Local_15);
			iVar0 = __LIB_2__::func_661();
			switch (Local_274.f_10)
			{
				case 0:
					__LIB_2__::func_312(joaat("WORLD_HUMAN_STARE_STOIC"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_STARE_STOIC")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_SMOKE"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_SMOKE")));
					break;
				case 1:
					__LIB_2__::func_312(joaat("WORLD_HUMAN_STARE_STOIC"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_STARE_STOIC")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_SMOKE"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_SMOKE")));
					break;
				case 2:
					__LIB_2__::func_312(joaat("WORLD_HUMAN_STARE_STOIC"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_STARE_STOIC")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_SMOKE"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_SMOKE")));
					break;
				case 3:
					__LIB_2__::func_312(joaat("WORLD_HUMAN_STARE_STOIC"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_STARE_STOIC")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_SMOKE"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_SMOKE")));
					break;
				case 4:
					__LIB_2__::func_312(joaat("WORLD_HUMAN_STARE_STOIC"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_STARE_STOIC")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_SMOKE"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_268(joaat("WORLD_HUMAN_SMOKE")));
					break;
			}
			Local_274.f_2 = 1;
			break;
		case 1:
			iVar1 = 1;
			switch (Local_274.f_10)
			{
				case 0:
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_STARE_STOIC")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_SMOKE")))
					{
						iVar1 = 0;
					}
					break;
				case 1:
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_STARE_STOIC")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_SMOKE")))
					{
						iVar1 = 0;
					}
					break;
				case 2:
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_STARE_STOIC")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_SMOKE")))
					{
						iVar1 = 0;
					}
					break;
				case 3:
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_STARE_STOIC")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_SMOKE")))
					{
						iVar1 = 0;
					}
					break;
				case 4:
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_STARE_STOIC")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_SMOKE")))
					{
						iVar1 = 0;
					}
					break;
			}
			if (!func_271())
			{
				iVar1 = 0;
			}
			if (!func_272(&Local_15))
			{
				iVar1 = 0;
			}
			return iVar1;
	}
	return false;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_273(iVar0);
}

int func_97(int iParam0)
{
	return joaat("G_M_M_UNIDUSTER_01");
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_275(&Local_274, iVar0);
}

var func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_276(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_127(&Local_274, iVar0);
}

var func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_128(&Local_274, iVar0);
}

char* func_125(int iParam0)
{
	int iVar0;
	iVar0 = func_279(iParam0);
	return func_280(iVar0);
}

Vector3 func_127(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_281(uParam0, iParam1) };
	return vVar0;
}

var func_128(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_281(uParam0, iParam1) };
	return Var0.f_3;
}

int func_129(var uParam0, int iParam1)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 512))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_STARE_STOIC");
					case 1:
						return joaat("WORLD_HUMAN_SMOKE");
					default:
						break;
				}
			}
			break;
	}
	return 0;
}

char* func_131(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_STARE_STOIC"):
			return "WORLD_HUMAN_STARE_STOIC_MALE_A";
		case joaat("WORLD_HUMAN_SMOKE"):
			return "WORLD_HUMAN_SMOKE_MALE_C";
		default:
			break;
	}
	return "";
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
	PED::SET_COMBAT_FLOAT((*uParam0)[iParam1], 39, 10f);
	PED::SET_COMBAT_FLOAT((*uParam0)[iParam1], 32, 2f);
	PED::SET_PED_COMBAT_MOVEMENT((*uParam0)[iParam1], 2);
	__LIB_2__::func_314(uParam0, iParam1, 70, 100);
}

void func_135(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!__LIB_1__::func_489(&(Local_274.f_82[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_274.f_82[0 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_274.f_82[0 /*17*/]), 1, 0);
		}
		if (!__LIB_1__::func_489(&(Local_274.f_82[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_274.f_82[1 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_274.f_82[1 /*17*/]), 1, 0);
		}
	}
	else
	{
		if (__LIB_1__::func_489(&(Local_274.f_82[0 /*17*/]), 0) || bParam1)
		{
			__LIB_2__::func_411(&(Local_274.f_82[0 /*17*/]), 0, 0);
		}
		if (__LIB_1__::func_489(&(Local_274.f_82[1 /*17*/]), 0) || bParam1)
		{
			__LIB_2__::func_411(&(Local_274.f_82[1 /*17*/]), 0, 0);
		}
	}
}

void func_136(int iParam0, var uParam1, bool bParam2)
{
	char* sVar0[2];
	char* sVar3[2];
	int iVar6;
	if (bParam2)
	{
		sVar0[0] = "GREET_GROUP_SHOUTED";
		sVar0[1] = "INSULT_SHOUT_AT_MALE_CONV5_PART1";
		sVar3[0] = __LIB_2__::func_460(7);
		sVar3[1] = __LIB_2__::func_460(10);
	}
	else
	{
		sVar0[0] = "RPC_ILO_DEFUSE";
		sVar0[1] = "RPC_ILO_ANTAGONIZE";
		sVar3[0] = __LIB_2__::func_460(8);
		sVar3[1] = __LIB_2__::func_460(10);
	}
	__LIB_2__::func_586(&(uParam1->f_82[0 /*17*/]), sVar3[0], sVar0[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_586(&(uParam1->f_82[1 /*17*/]), sVar3[1], sVar0[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	iVar6 = 0;
	while (iVar6 < uParam1->f_39)
	{
		__LIB_2__::func_394(&(uParam1->f_39[iVar6 /*21*/]), &(uParam1->f_82[1 /*17*/]));
		iVar6++;
	}
}

bool func_141()
{
	if (Local_274.f_128 > 1 || Local_274.f_128 < 0)
	{
		Local_274.f_128 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[Local_274.f_128]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_40[Local_274.f_128], Global_35, 1, 1))
		{
			return true;
		}
	}
	if (func_290(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_128), 0, 1, 1))
	{
		return true;
	}
	return false;
}

void func_143()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	__LIB_2__::func_336(Local_15[0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
	if (Local_274.f_3 <= 0)
	{
		__LIB_2__::func_224(Local_15.f_151, 1);
	}
	__LIB_0__::func_7(&Local_274, 2);
	if (!func_294(&Local_15))
	{
		iVar2 = 68157440;
		iVar3 = 4096;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!bVar4)
			{
				sVar1 = func_295(&Local_15, &Local_274, iVar0, &iVar5);
				__LIB_2__::func_336(Local_15[iVar0], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar5);
				bVar4 = true;
			}
			PED::_0x78815FC52832B690(Local_15[0], 1);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_357(Local_15[iVar0], Global_36, 3, 1, 1);
			TASK::TASK_COMBAT_PED(Local_15[iVar0], Global_35, iVar2, iVar3);
		}
		iVar0++;
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_8__::func_965(Local_15.f_151);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		__LIB_11__::func_176(Local_15.f_181, Local_15.f_151, iVar1);
		iVar1++;
	}
}

bool func_146()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_33[1]))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_33[1], 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_149()
{
	if (__LIB_19__::func_432(&Local_15))
	{
		return true;
	}
	return false;
}

int func_151()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = -1;
	iVar3 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15[iVar1]))
		{
		}
		else
		{
			iVar0 = func_302(&(Local_15[iVar1]), &(Local_274.f_39[iVar1 /*21*/]), 30f, &(Local_274.f_82), &iVar3, 3f, 1, 0, "", Local_274.f_170, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (!Local_274.f_171)
			{
				if (Local_274.f_39[iVar1 /*21*/].f_1 != -1)
				{
					__LIB_2__::func_504(Local_15[0], 700);
					__LIB_2__::func_504(Local_15[1], 1000);
					if (Local_274.f_3 >= 1)
					{
						if (Local_274.f_39[iVar1 /*21*/].f_1 == 0)
						{
							__LIB_2__::func_482(&(Local_274.f_82[0 /*17*/]), 1, 1);
						}
						else if (Local_274.f_39[iVar1 /*21*/].f_1 == 1)
						{
							__LIB_2__::func_592(&(Local_274.f_82), 1, 1);
						}
					}
					Local_274.f_171 = 1;
					func_135(0, 1);
				}
			}
			if (iVar0 != -1)
			{
				iVar2 = iVar0;
			}
		}
		iVar1++;
	}
	if (iVar2 != -1)
	{
		if (Local_274.f_130 > Local_274.f_131)
		{
			Local_274.f_130 = Local_274.f_131;
		}
		Local_274.f_171 = 0;
	}
	return iVar2;
}

bool func_152(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_15[0]))
	{
		return false;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_33[2], Global_36))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[1], Global_35, 17))
		{
			if (Global_1935630.f_40 == 0 && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				if (Local_15.f_9[0] < 28f || Local_15.f_9[0] < 28f)
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_156(var uParam0, var uParam1, int iParam2, char[4] cParam3, var uParam4, float fParam5, float fParam6, float fParam7, float fParam8)
{
	__LIB_2__::func_663(&(uParam1->f_153));
	uParam1->f_153 = iParam2;
	uParam1->f_153.f_8 = fParam6;
	uParam1->f_153.f_6 = fParam5;
	uParam1->f_153.f_11 = fParam7;
	uParam1->f_153.f_7 = fParam6;
	uParam1->f_153.f_1 = uParam4;
	uParam1->f_153.f_9 = fParam8;
	__LIB_2__::func_668(&(uParam1->f_140), &(uParam1->f_153), cParam3);
}

void func_157()
{
	if (Local_274.f_5 > 0)
	{
		if (func_314())
		{
			return;
		}
	}
	switch (Local_274.f_5)
	{
		case 0:
			if (!__LIB_0__::func_75(&(Local_274.f_11[4 /*3*/])))
			{
				if (Local_15.f_9[0] < 40f)
				{
					__LIB_1__::func_283(&(Local_274.f_11[4 /*3*/]), 0);
				}
			}
			else if (__LIB_1__::func_285(&(Local_274.f_11[4 /*3*/]), 0.25f))
			{
				__LIB_2__::func_336(Local_15[0], Local_15[1], "CHAT_PATROL", 40f, 1, 291934926, 2);
				__LIB_0__::func_615(&Local_274, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0, 1, Local_15[0], 1) && __LIB_2__::func_227(-1.5f, 1, 0, 0))
			{
				__LIB_2__::func_336(Local_15[1], Local_15[0], "CHAT_PATROL_SUPPORT_RESPONSE", 40f, 1, 291934926, 2);
				__LIB_0__::func_615(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0, 1, Local_15[1], 1) && __LIB_2__::func_227(-2f, 1, 0, 0))
			{
				if (__LIB_2__::func_336(Local_15[0], Local_15[1], "CHAT_PATROL_SUPPORT_RESPONSE", 40f, 1, 291934926, 1))
				{
					__LIB_0__::func_615(&Local_274, 3);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, Local_15[0], 1) && __LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_2__::func_336(Local_15[0], Local_15[1], "CHAT_PATROL_SUPPORT_RESPONSE", 40f, 1, 291934926, 2);
				__LIB_0__::func_615(&Local_274, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, Local_15[0], 1) && __LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_2__::func_336(Local_15[1], Local_15[0], "CHAT_ROADBLOCK_SUPPORT_RESPONSE", 40f, 1, 291934926, 2);
				__LIB_0__::func_615(&Local_274, 6);
			}
			break;
		case 6:
			break;
	}
}

bool func_160()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	iVar1 = -1;
	iVar1 = func_151();
	if (__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		if (Local_274.f_7 < 2)
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_15[0], false);
		}
		Local_274.f_131 = __LIB_0__::func_94(Local_15[0], Global_36, 1);
		Local_274.f_132 = __LIB_0__::func_94(Local_15[0], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), 1);
	}
	if (__LIB_2__::func_1(Local_15[1], 0, 0))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_15[1], 1, 1);
	}
	if (__LIB_1__::func_313(&(Local_274.f_11[5 /*3*/]), 5f))
	{
		__LIB_2__::func_360(&(Local_274.f_82[0 /*17*/]), __LIB_2__::func_460(8));
	}
	switch (Local_274.f_7)
	{
		case 0:
			__LIB_2__::func_147(&Local_15, 1048576);
			func_320();
			func_135(0, 0);
			__LIB_1__::func_283(&(Local_274.f_11[1 /*3*/]), 0);
			Local_274.f_117 = -1;
			__LIB_2__::func_664(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), 0.25f) && (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_15[0], Global_35, 17) || __LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), (0.25f + 1.5f))))
			{
				__LIB_2__::func_336(Local_15[0], Global_35, "GANG_INTERACT_APPROACH", 70f, 1, 291934926, 1);
				__LIB_1__::func_283(&(Local_274.f_11[5 /*3*/]), 0);
				__LIB_2__::func_315(1891783641, Local_15[0], 1);
				PED::_0x89F5E7ADECCCB49C(Local_15[1], "intimidate");
				__LIB_2__::func_664(&Local_274, 2);
			}
			break;
		case 2:
			if ((__LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), 0.5f) && !TASK::_0x0C3CB2E600C8977D(Local_15[0], 1)) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_15[0], 1))
			{
				func_323();
				__LIB_2__::func_664(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), 5f))
			{
				func_324();
				__LIB_2__::func_664(&Local_274, 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), 3f))
			{
				func_136(&Local_15, &Local_274, 0);
				func_135(1, 0);
				if (iVar1 != -1)
				{
					Local_274.f_117 = iVar1;
				}
				switch (Local_274.f_117)
				{
					case 0:
						func_325();
						func_135(0, 0);
						__LIB_2__::func_548(&Local_15, 0);
						__LIB_2__::func_664(&Local_274, 8);
						return false;
					case 1:
						func_326();
						func_135(0, 0);
						__LIB_2__::func_548(&Local_15, 0);
						__LIB_2__::func_603(&(Local_15[0]), &(Local_274.f_39[0 /*21*/]), &(Local_274.f_82), 1, 1);
						__LIB_2__::func_603(&(Local_15[1]), &(Local_274.f_39[1 /*21*/]), &(Local_274.f_82), 1, 1);
						__LIB_2__::func_664(&Local_274, 10);
						return false;
				}
			}
			if (__LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), 6f) && !func_314())
			{
				if (func_327(0))
				{
					if (func_328())
					{
						__LIB_1__::func_148(&(Local_274.f_11[1 /*3*/]));
						__LIB_2__::func_664(&Local_274, 5);
					}
				}
				else
				{
					__LIB_2__::func_548(&Local_15, 0);
					func_329();
					__LIB_2__::func_664(&Local_274, 7);
				}
				else
				{
					Jump @2025; //curOff = 837
					if (func_330() || iVar1 == 1)
					{
						func_331();
						if (iVar1 == 1)
						{
							__LIB_2__::func_664(&Local_274, 17);
						}
						else
						{
							__LIB_2__::func_664(&Local_274, 6);
						}
					}
					Jump @2025; //curOff = 887
					if (__LIB_2__::func_227(-3f, 1, 0, 0))
					{
						__LIB_2__::func_664(&Local_274, 17);
					}
					Jump @2025; //curOff = 914
					if (__LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), 2f))
					{
						__LIB_1__::func_283(&(Local_274.f_11[2 /*3*/]), 0);
						if (iVar1 != -1)
						{
							Local_274.f_117 = iVar1;
						}
						switch (Local_274.f_117)
						{
							case 0:
								func_325();
								func_135(0, 0);
								__LIB_2__::func_664(&Local_274, 8);
								break;
							case 1:
								func_326();
								func_135(0, 0);
								__LIB_2__::func_664(&Local_274, 10);
								break;
							default:
								if (!func_314())
								{
									if (func_327(0))
									{
										if (func_328())
										{
											__LIB_1__::func_148(&(Local_274.f_11[2 /*3*/]));
											__LIB_0__::func_7(&Local_274, 32);
											fVar2 = __LIB_0__::func_94(Local_15[0], Global_36, 1);
											if (fVar2 < Local_274.f_130)
											{
												Local_274.f_130 = (fVar2 - 1f);
											}
											func_135(0, 0);
											__LIB_2__::func_664(&Local_274, 14);
										}
									}
									else if (__LIB_1__::func_285(&(Local_274.f_11[2 /*3*/]), 6f))
									{
										if (!__LIB_0__::func_51(&Local_274, 32))
										{
											func_332();
											__LIB_1__::func_148(&(Local_274.f_11[2 /*3*/]));
											__LIB_0__::func_7(&Local_274, 32);
										}
										else
										{
											__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
											iVar3 = __LIB_2__::func_272(Local_15[0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
											PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
											WEAPON::SET_CURRENT_PED_WEAPON(Local_15[0], iVar3, false, 0, false, false);
											TASK::OPEN_SEQUENCE_TASK(&iVar0);
											TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
											TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
											__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
											__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
											iVar3 = __LIB_2__::func_272(Local_15[1], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
											PED::_0x8ACC0506743A8A5C(Local_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
											WEAPON::SET_CURRENT_PED_WEAPON(Local_15[1], iVar3, false, 0, false, false);
											TASK::OPEN_SEQUENCE_TASK(&iVar0);
											TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
											TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
											__LIB_1__::func_474(Local_15[1], &iVar0, 1f, 0, 1, 1);
											__LIB_2__::func_336(Local_15[0], Global_35, "FINAL_WARNING", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
											func_135(0, 0);
											__LIB_2__::func_664(&Local_274, 12);
										}
									}
								}
								break;
						}
					}
					Jump @2025; //curOff = 1489
					func_333();
					__LIB_0__::func_7(&Local_274, 32);
					__LIB_2__::func_664(&Local_274, 9);
					Jump @2025; //curOff = 1514
					if (__LIB_1__::func_285(&(Local_274.f_11[2 /*3*/]), 3f))
					{
						__LIB_2__::func_664(&Local_274, 14);
					}
					Jump @2025; //curOff = 1542
					__LIB_2__::func_664(&Local_274, 17);
					Jump @2025; //curOff = 1554
					if (__LIB_1__::func_285(&(Local_274.f_11[2 /*3*/]), 3f))
					{
						__LIB_2__::func_482(&(Local_274.f_82[0 /*17*/]), 1, 1);
						func_135(1, 0);
						__LIB_2__::func_664(&Local_274, 13);
					}
					Jump @2025; //curOff = 1602
					if (iVar1 == 1)
					{
						func_326();
						func_135(0, 0);
						__LIB_2__::func_664(&Local_274, 10);
						return false;
					}
					if (__LIB_1__::func_285(&(Local_274.f_11[2 /*3*/]), 3f))
					{
						__LIB_1__::func_148(&(Local_274.f_11[2 /*3*/]));
						__LIB_2__::func_664(&Local_274, 14);
					}
					Jump @2025; //curOff = 1671
					if (iVar1 == 1)
					{
						func_326();
						func_135(0, 0);
						__LIB_2__::func_664(&Local_274, 10);
						return false;
					}
					else
					{
						func_135(1, 0);
					}
					if (func_334(0))
					{
						__LIB_2__::func_664(&Local_274, 15);
					}
					else if (__LIB_1__::func_285(&(Local_274.f_11[2 /*3*/]), 8f) && !func_327(1))
					{
						__LIB_2__::func_664(&Local_274, 17);
					}
					Jump @2025; //curOff = 1772
					if (iVar1 == 1)
					{
						func_326();
						func_135(0, 0);
						__LIB_2__::func_664(&Local_274, 10);
						return false;
					}
					if (func_327(0))
					{
						if (func_328())
						{
							__LIB_2__::func_664(&Local_274, 5);
						}
					}
					else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_15[0], 1) || TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_15[1], 1))
					{
						if (Local_274.f_131 < (Local_274.f_130 - 2f) && !func_327(0))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[1], Global_35, 17))
							{
								func_331();
								__LIB_2__::func_664(&Local_274, 6);
							}
						}
					}
					Jump @2025; //curOff = 1935
					if (iVar1 == 1)
					{
						func_326();
						func_135(0, 0);
						__LIB_2__::func_664(&Local_274, 10);
						return false;
					}
					Jump @2025; //curOff = 1967
					if (func_335())
					{
						return true;
					}
					Jump @2025; //curOff = 1981
					__LIB_2__::func_593(&(Local_274.f_39[0 /*21*/]), &(Local_274.f_82));
					__LIB_2__::func_593(&(Local_274.f_39[1 /*21*/]), &(Local_274.f_82));
					return true;
				}
				return false;
			}
			default:
				break;
	}
}

int func_173(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar1], 0, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (__LIB_2__::func_167(Local_15[iVar0], 1))
				{
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_175()
{
	switch (Local_274.f_9)
	{
		case 0:
			if (__LIB_1__::func_285(&(Local_274.f_11[0 /*3*/]), 0.5f))
			{
				if (__LIB_2__::func_1(Local_15.f_40[0], 0, 0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_40[0], false);
				}
				Local_274.f_9 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_11[0 /*3*/]), 2f))
			{
				if (__LIB_2__::func_1(Local_15.f_40[1], 0, 0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_40[1], false);
				}
				Local_274.f_9 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_176()
{
	if (!__LIB_0__::func_51(&Local_274, 128))
	{
		if (__LIB_1__::func_285(&(Local_274.f_11[0 /*3*/]), 1f))
		{
			PED::_0x78815FC52832B690(Local_15[0], 1);
			__LIB_0__::func_7(&Local_274, 128);
		}
	}
	else if (!__LIB_0__::func_51(&Local_274, 256))
	{
		if (__LIB_1__::func_285(&(Local_274.f_11[0 /*3*/]), 1.8f))
		{
			PED::_0x78815FC52832B690(Local_15[1], 1);
			__LIB_0__::func_7(&Local_274, 256);
		}
	}
}

bool func_250(int iParam0, int iParam1)
{
	vector3 vVar0;
	var uVar3;
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 13:
				return true;
			case 33:
				return true;
			default:
				break;
		}
	}
	else
	{
		func_256(iParam0, 2, &vVar0, &uVar3, iParam1);
		return !__LIB_0__::func_86(vVar0);
	}
	return false;
}

void func_253()
{
	__LIB_2__::func_104(&(Local_15.f_152), 0);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 0);
	__LIB_2__::func_110(&(Local_15.f_152), 0);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_250(&(Local_15.f_152), 1);
	__LIB_2__::func_595(&(Local_15.f_152), 30f);
}

void func_254()
{
	switch (Local_274.f_10)
	{
		case 1:
			func_404(&Local_15, &Local_274);
			break;
		case 0:
			func_405(&Local_15, &Local_274);
			break;
		case 2:
			func_406(&Local_15, &Local_274);
			break;
		case 3:
			func_407(&Local_15, &Local_274);
			break;
		case 4:
			func_408(&Local_15, &Local_274);
			break;
	}
}

void func_255(int iParam0)
{
	if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	}
	__LIB_2__::func_670(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 24, 0, 0, 0, 0);
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
			Jump @6407; //curOff = 6139
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
			Jump @6407; //curOff = 6376
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			Jump @6407; //curOff = 6390
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
	while (iVar0 < 0)
	{
		sVar1 = func_420(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_266(var uParam0)
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

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_STARE_STOIC"):
			return joaat("WORLD_HUMAN_STARE_STOIC_MALE_A");
		case joaat("WORLD_HUMAN_SMOKE"):
			return joaat("WORLD_HUMAN_SMOKE_MALE_C");
		default:
			break;
	}
	return 0;
}

bool func_271()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_420(iVar0);
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

bool func_272(var uParam0)
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

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 430539445;
		case 0:
			return 1411006310;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_275(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_421(uParam0, iParam1) };
	return vVar0;
}

var func_276(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_421(uParam0, iParam1) };
	return Var0.f_3;
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
			break;
	}
	return -1;
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "1018_G_M_M_UniDuster_01_IRISH_01";
		case 0:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		default:
			break;
	}
	return "NULL VOICE";
}

struct<4> func_281(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_10)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(0, 0);
					case 1:
						return func_427(0, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(1, 0);
					case 1:
						return func_427(1, 1);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(2, 0);
					case 1:
						return func_427(2, 1);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 512))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(4, 0);
					case 1:
						return func_427(4, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(3, 0);
					case 1:
						return func_427(3, 1);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(5, 0);
					case 1:
						return func_427(5, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(6, 0);
					case 1:
						return func_427(6, 1);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(7, 0);
					case 1:
						return func_427(7, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(8, 0);
					case 1:
						return func_427(8, 1);
					default:
						break;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(9, 0);
					case 1:
						return func_427(9, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(10, 0);
					case 1:
						return func_427(10, 1);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

bool func_290(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_2__::func_653((*iParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

bool func_294(var uParam0)
{
	int iVar0;
	if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		return true;
	}
	if (__LIB_0__::func_154(Global_1935630.f_44))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_0__::func_154(__LIB_1__::func_372((*uParam0)[iVar0], 0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_295(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			if (func_294(uParam0))
			{
				*iParam3 = 3;
				return "OPENS_FIRE";
			}
			else
			{
				*iParam3 = 2;
				return "FIGHT";
			}
			break;
		case 1:
			if (func_294(uParam0))
			{
				*iParam3 = 3;
				return "OPENS_FIRE";
			}
			else
			{
				*iParam3 = 1;
				return "FIGHT";
			}
			break;
	}
	if (func_294(uParam0))
	{
		return "OPENS_FIRE";
	}
	return "FIGHT";
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
	iVar1 = func_460(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_314()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_2__::func_341(&(Local_274.f_39[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_320()
{
	vector3 vVar0;
	int iVar4;
	__LIB_2__::func_357(Local_15[0], Global_36, 6, 0, 2);
	PED::SET_PED_CONFIG_FLAG(Local_15[0], 234, true);
	PED::SET_PED_CONFIG_FLAG(Local_15[0], 235, true);
	__LIB_2__::func_356(Local_15[1], Global_35, 2, 1, 3000, 1);
	if (__LIB_2__::func_157(Local_274.f_33[4], Global_36))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		__LIB_2__::func_45(0, Global_35, 0);
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 1f, 3000, 3.5f, 1, 1, 1, 1, 1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		__LIB_1__::func_474(Local_15[0], &iVar4, 0, 0, 1, 1);
	}
	else if (__LIB_2__::func_157(Local_274.f_33[3], Global_36))
	{
		vVar0 = { __LIB_0__::func_217(&Local_274, 0) };
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		__LIB_1__::func_474(Local_15[0], &iVar4, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		__LIB_2__::func_45(0, Global_35, 0);
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 1f, 3000, 3.5f, 1, 1, 1, 1, 1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		__LIB_1__::func_474(Local_15[0], &iVar4, 0, 0, 1, 1);
	}
}

void func_323()
{
	__LIB_1__::func_148(&(Local_274.f_11[1 /*3*/]));
	Local_274.f_130 = Local_274.f_131;
	__LIB_2__::func_357(Local_15[1], Global_36, 6, 0, 2);
	__LIB_2__::func_45(Local_15[1], Global_35, -1);
}

void func_324()
{
	__LIB_1__::func_148(&(Local_274.f_11[1 /*3*/]));
	__LIB_2__::func_336(Local_15[0], Global_35, "HEADS_UP_GANG_TERRITORY", 70f, 1, 291934926, 1);
	__LIB_2__::func_315(1891783641, Local_15[0], 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[0], Global_35, -1, -1f, -1f, -1f);
	func_473();
	if (Local_274.f_130 > Local_274.f_131)
	{
		Local_274.f_130 = Local_274.f_131;
	}
}

void func_325()
{
	__LIB_1__::func_148(&(Local_274.f_11[2 /*3*/]));
}

void func_326()
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_148(&(Local_274.f_11[2 /*3*/]));
	if (!__LIB_0__::func_163(Local_15[1], 242628503))
	{
		iVar0 = __LIB_2__::func_272(Local_15[1], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		PED::_0x8ACC0506743A8A5C(Local_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_15[1], iVar0, false, 0, false, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_15[1], &iVar1, 1f, 0, 1, 1);
	}
}

bool func_327(bool bParam0)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_15[0], false, false) };
	if (Local_274.f_131 > (Local_274.f_130 + 3f))
	{
		if (Local_274.f_132 >= Local_274.f_131 && Local_274.f_131 > 9f)
		{
			return true;
		}
	}
	else if ((Local_274.f_132 > (Local_274.f_131 + 1f) && (Local_274.f_131 > 9f || bParam0)) && ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
	{
		return true;
	}
	return false;
}

bool func_328()
{
	if (Local_274.f_131 > (Local_274.f_130 + 3f))
	{
		if (Local_274.f_132 >= Local_274.f_131 && Local_274.f_131 > 9f)
		{
			return true;
		}
	}
	return false;
}

void func_329()
{
	__LIB_1__::func_148(&(Local_274.f_11[1 /*3*/]));
	__LIB_2__::func_336(Local_15[1], Global_35, "WARNING", 70f, 1, 1744022339, 3);
}

bool func_330()
{
	switch (Local_274.f_8)
	{
		case 0:
			func_475(&Local_274, 1);
			break;
		case 1:
			__LIB_2__::func_336(Local_15[1], Global_35, "PEDTYPE_WON_DISPUTE", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
			func_475(&Local_274, 2);
			break;
		case 2:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_2__::func_336(Local_15[0], Global_35, "PEDTYPE_WON_DISPUTE", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
				func_475(&Local_274, 3);
			}
			break;
		case 3:
			if (func_334(1))
			{
				func_475(&Local_274, 4);
			}
			break;
		case 4:
			if (Local_274.f_131 < (Local_274.f_130 + 2f) && !func_327(0))
			{
				if ((__LIB_2__::func_227(0f, 1, Local_15[0], 1) && __LIB_2__::func_227(0f, 1, Local_15[1], 1)) || Local_274.f_131 < 5f)
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[1], Global_35, 17))
					{
						return true;
					}
				}
			}
			break;
		case 5:
			break;
	}
	return false;
}

void func_331()
{
	int iVar0;
	char* sVar1;
	__LIB_2__::func_357(Local_15[0], Global_36, 5, 1, 2);
	__LIB_2__::func_357(Local_15[1], Global_36, 5, 1, 2);
	PED::SET_PED_USING_ACTION_MODE(Local_15[0], true, -1, 0);
	PED::SET_PED_USING_ACTION_MODE(Local_15[1], true, -1, 0);
	__LIB_2__::func_45(Local_15[0], Global_35, -1);
	__LIB_2__::func_45(Local_15[1], Global_35, -1);
	sVar1 = func_476(&Local_15, &Local_274, 0, &iVar0);
	__LIB_2__::func_336(Local_15[0], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar0);
}

void func_332()
{
	__LIB_1__::func_148(&(Local_274.f_11[2 /*3*/]));
	__LIB_2__::func_336(Local_15[1], Global_35, "GET_LOST", 50f, 1, 1744022339, 1);
}

void func_333()
{
	__LIB_1__::func_148(&(Local_274.f_11[2 /*3*/]));
	__LIB_2__::func_336(Local_15[1], Global_35, "KEEP_GOING", 50f, 1, 291934926, 1);
}

bool func_334(bool bParam0)
{
	if (__LIB_0__::func_163(Local_15[0], -76381094) || __LIB_0__::func_163(Local_15[1], -76381094))
	{
		return true;
	}
	if (bParam0 || func_327(0))
	{
		if (__LIB_2__::func_1(Local_15[0], 0, 0))
		{
			__LIB_0__::func_325(&(Local_15.f_22[0]));
			TASK::_TASK_USE_SCENARIO_POINT(Local_15[0], Local_274.f_133[0], 0, -1, true, false, 0, false, -1f, false);
		}
		if (__LIB_2__::func_1(Local_15[1], 0, 0))
		{
			__LIB_0__::func_325(&(Local_15.f_22[1]));
			TASK::_TASK_USE_SCENARIO_POINT(Local_15[1], Local_274.f_133[1], 0, -1, true, false, 0, false, -1f, false);
		}
		return true;
	}
	return false;
}

bool func_335()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	if (!func_294(&Local_15))
	{
		iVar0 = 68157440;
		iVar1 = 4096;
	}
	iVar6 = 0;
	sVar2 = func_295(&Local_15, &Local_274, 1, &iVar6);
	__LIB_2__::func_336(Local_15[1], Global_35, sVar2, -1073741824 /* Float: -2f */, 1, 1744022339, iVar6);
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			__LIB_2__::func_73(Local_15[iVar3], &(Local_15.f_22[iVar3]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_357(Local_15[iVar3], Global_36, 3, 1, 1);
			switch (iVar3)
			{
				case 0:
					fVar5 = 0f;
					break;
				case 1:
					fVar5 = 0.75f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_COMBAT_PED(0, Global_35, iVar0, iVar1);
			__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar5, 0, 1, 1);
		}
		iVar3++;
	}
	return true;
}

void func_404(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_127(uParam1, 0) };
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 40f, 40f, 40f, "volAvoidance");
	if (__LIB_0__::func_51(uParam1, 512))
	{
		uParam1->f_33[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-40.96196f, 322.9542f, 110.8044f, 0f, 0f, 0f, 25f, 25f, 10f, "volTrigger");
		uParam1->f_33[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -54.11883f, 305.7866f, 112.7593f, 0f, 0f, 13.13134f, 4.997295f, 9.214497f, 5f);
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -21.40945f, 331.5343f, 112.7593f, 0f, 0f, 25.9412f, 8.36641f, 36.71744f, 5f);
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -68.18752f, 325.1846f, 107.6778f, 0f, 0f, -10.13093f, 15.997f, 30.214f, 14.39204f);
	}
	else
	{
		uParam1->f_33[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-71.119f, 311.8f, 106.261f, 0f, 0f, 0f, 30f, 30f, 10f, "volTrigger");
		uParam1->f_33[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -55.75507f, 333.8857f, 112.7593f, 0f, 0f, 13.13134f, 4.997295f, 9.214497f, 5f);
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -40.11452f, 322.435f, 112.7593f, 0f, 0f, 25.9412f, 8.36641f, 19.21824f, 5f);
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -98.11539f, 318.1598f, 107.6778f, 0f, 0f, -10.13093f, 15.997f, 30.214f, 14.39204f);
	}
}

void func_405(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_127(uParam1, 0) };
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 40f, 40f, 40f, "volAvoidance");
	uParam1->f_33[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(258.6164f, 170.5737f, 97.86784f, 0f, 0f, 0f, 35f, 35f, 20f, "volTrigger");
	uParam1->f_33[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(268.1467f, 135.7813f, 110.246f, 0f, 0f, -75f, 14.314f, 40.40964f, 20f, "volDontApproach");
}

void func_406(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_127(uParam1, 0) };
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 40f, 40f, 40f, "volAvoidance");
	uParam1->f_33[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-245.3193f, 497.5436f, 99.51563f, 0f, 0f, 0f, 30f, 30f, 10f, "volTrigger");
	uParam1->f_33[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -291.2872f, 528.6453f, 108.4019f, 0f, 0f, -38.29216f, 15.37473f, 20.49136f, 24.91512f);
	VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -260.1492f, 467.5673f, 93.82221f, 0f, 0f, -102.8009f, 15.997f, 48.36176f, 31.73178f);
}

void func_407(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_127(uParam1, 0) };
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 40f, 40f, 40f, "volAvoidance");
	uParam1->f_33[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-271.2238f, -260.7414f, 97.74572f, 0f, 0f, 0f, 30f, 30f, 10f, "volTrigger");
	uParam1->f_33[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -291.2872f, 528.6453f, 108.4019f, 0f, 0f, -38.29216f, 15.37473f, 20.49136f, 24.91512f);
	VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], -260.1492f, 467.5673f, 93.82221f, 0f, 0f, -102.8009f, 15.997f, 48.36176f, 31.73178f);
}

void func_408(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_127(uParam1, 0) };
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 40f, 40f, 40f, "volAvoidance");
	if (__LIB_0__::func_51(uParam1, 1))
	{
		uParam1->f_33[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(938.8072f, 393.2469f, 115.5852f, 0f, 0f, 0f, 30f, 30f, 10f, "volTrigger");
		uParam1->f_33[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], 914.843f, 416.6183f, 97.20702f, 0f, 0f, -50.8009f, 9.278276f, 16.36197f, 31.73178f);
	}
	else
	{
		uParam1->f_33[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(948.5747f, 395.6273f, 115.5852f, 0f, 0f, 0f, 30f, 30f, 10f, "volTrigger");
		uParam1->f_33[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_33[4], 914.843f, 416.6183f, 97.20702f, 0f, 0f, -50.80091f, 9.278276f, 16.36197f, 31.73178f);
	}
}

char* func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@test";
		case 1:
			return "AI_GESTURES@GEN_MALE@STANDING@SPEAKER";
		case 2:
			return "AI_GESTURES@GEN_MALE@STANDING@SILENT";
		default:
			break;
	}
	return "";
}

struct<4> func_421(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_10)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(0, 2);
					case 1:
						return func_427(0, 3);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(1, 2);
					case 1:
						return func_427(1, 3);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(2, 2);
					case 1:
						return func_427(2, 3);
					default:
						break;
				}
			}
			else if (__LIB_0__::func_51(uParam0, 512))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(4, 2);
					case 1:
						return func_427(4, 3);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(3, 2);
					case 1:
						return func_427(3, 3);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(5, 2);
					case 1:
						return func_427(5, 3);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(6, 2);
					case 1:
						return func_427(6, 3);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(7, 2);
					case 1:
						return func_427(7, 3);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(8, 2);
					case 1:
						return func_427(8, 3);
					default:
						break;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_427(9, 2);
					case 1:
						return func_427(9, 3);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_427(10, 2);
					case 1:
						return func_427(10, 3);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_427(int iParam0, int iParam1)
{
	return func_510(iParam0, iParam1);
}

int func_460(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_460(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_473()
{
	Local_274.f_136 = PED::CREATE_GROUP(0);
	func_582();
	TASK::CLEAR_PED_TASKS(Local_15[1], true, false);
	PED::_0x97C475212B327666(Local_274.f_136, 1);
	PED::_0x40C3524D4ED83554(Local_274.f_136, 1);
	__LIB_2__::func_665(&(Local_15[0]), &(Local_274.f_136), 1, 1, 1, 1, 0);
	__LIB_2__::func_665(&(Local_15[1]), &(Local_274.f_136), 0, 1, 1, 1, 0);
}

void func_475(var uParam0, int iParam1)
{
	uParam0->f_8 = iParam1;
}

char* func_476(var uParam0, var uParam1, int iParam2, var uParam3)
{
	switch (iParam2)
	{
		case 0:
			*uParam3 = 1;
			return "HEADS_UP_BAD_MEMORY";
		case 1:
			*uParam3 = 2;
			return "HEADS_UP_BAD_MEMORY";
		default:
			break;
	}
	return "HEADS_UP_BAD_MEMORY";
}

struct<4> func_510(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_599(iParam0, iParam1) };
	Var0.f_3 = func_600(iParam0, iParam1);
	return Var0;
}

void func_582()
{
	PED::SET_GROUP_FORMATION(Local_274.f_136, 5);
	PED::ADD_CUSTOM_FORMATION_LOCATION(Local_274.f_136, 2f, -0.25f, 0f, -1);
}

Vector3 func_599(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 261.2392f, 166.8369f, 97.1517f;
				case 1:
					return 262.4596f, 167.9473f, 97.1804f;
				case 2:
					return 259.1351f, 160.264f, 97.6256f;
				case 3:
					return 259.1212f, 158.2357f, 97.9772f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 262.293f, 167.3475f, 97.2038f;
				case 1:
					return 260.8097f, 167.1458f, 97.1027f;
				case 2:
					return 258.9802f, 160.1123f, 97.6369f;
				case 3:
					return 259.1153f, 158.5075f, 97.9277f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -57.204f, 316.3336f, 109.7467f;
				case 1:
					return -56.3642f, 315.3916f, 109.7458f;
				case 2:
					return -53.0246f, 321.351f, 111.2157f;
				case 3:
					return -49.5948f, 319.3441f, 111.3208f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -57.7802f, 314.6706f, 109.3556f;
				case 1:
					return -56.6397f, 316.1768f, 109.8346f;
				case 2:
					return -53.4295f, 311.0366f, 109.2404f;
				case 3:
					return -52.9225f, 309.3042f, 108.9327f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -45.5394f, 323.5428f, 112.4695f;
				case 1:
					return -45.4599f, 325.7509f, 112.7429f;
				case 2:
					return -49.8984f, 327.9254f, 112.574f;
				case 3:
					return -51.0952f, 330.3427f, 112.5676f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -256.0234f, 487.3452f, 95.5172f;
				case 1:
					return -255.666f, 488.942f, 95.3807f;
				case 2:
					return -260.5046f, 489.5823f, 95.2911f;
				case 3:
					return -261.5791f, 492.4076f, 95.0511f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -257.7053f, 487.834f, 95.4728f;
				case 1:
					return -256.4486f, 488.0683f, 95.4688f;
				case 2:
					return -256.3612f, 483.2034f, 95.6351f;
				case 3:
					return -256.917f, 481.3132f, 95.6205f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -269.0467f, -272.1401f, 91.933f;
				case 1:
					return -269.9956f, -271.5439f, 91.8707f;
				case 2:
					return -272.3981f, -273.7484f, 91.9057f;
				case 3:
					return -274.0662f, -271.8858f, 91.7868f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -276.9976f, -255.6236f, 91.3011f;
				case 1:
					return -275.8307f, -256.8755f, 91.4303f;
				case 2:
					return -271.6403f, -253.5237f, 91.1356f;
				case 3:
					return -270.3997f, -254.9776f, 91.2364f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 939.8258f, 381.216f, 111.2211f;
				case 1:
					return 938.6299f, 380.7887f, 111.3826f;
				case 2:
					return 943.1745f, 380.4063f, 110.8604f;
				case 3:
					return 943.6677f, 382.2539f, 110.7963f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 946.4655f, 385.7228f, 110.6785f;
				case 1:
					return 945.5628f, 386.8698f, 110.7876f;
				case 2:
					return 943.1745f, 380.4063f, 110.8604f;
				case 3:
					return 943.6677f, 382.2539f, 110.7963f;
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
					return -324.244f;
				case 1:
					return 72.851f;
				case 2:
					return 263.0115f;
				case 3:
					return -88.9885f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 9.756f;
				case 1:
					return 336.851f;
				case 2:
					return 263.0115f;
				case 3:
					return -82.9885f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 165.9f;
				case 1:
					return 138.751f;
				case 2:
					return 21.0115f;
				case 3:
					return -10.9885f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -341.344f;
				case 1:
					return -294.349f;
				case 2:
					return -32.9885f;
				case 3:
					return -42.9885f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -81.344f;
				case 1:
					return -118.349f;
				case 2:
					return -48.9885f;
				case 3:
					return -48.9885f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 257.9f;
				case 1:
					return 236.751f;
				case 2:
					return 135.0115f;
				case 3:
					return 131.0115f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -23.344f;
				case 1:
					return -2.349f;
				case 2:
					return 269.0115f;
				case 3:
					return 263.0115f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 331.9f;
				case 1:
					return 294.751f;
				case 2:
					return 109.0115f;
				case 3:
					return 139.0115f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -207.344f;
				case 1:
					return -244.349f;
				case 2:
					return 315.0115f;
				case 3:
					return 301.0115f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 391.9f;
				case 1:
					return 360.751f;
				case 2:
					return 77.0115f;
				case 3:
					return 75.0115f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 331.9f;
				case 1:
					return 294.751f;
				case 2:
					return 77.0115f;
				case 3:
					return 75.0115f;
			}
			break;
	}
	return 0f;
}

