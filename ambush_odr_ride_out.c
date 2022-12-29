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
	struct<223> Local_15 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<76> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 2, 0, 0, 2 } ;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	bool bLocal_352 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_352 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_352, 961, 0);
		if (bLocal_352)
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
	__LIB_2__::func_484();
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
		while (iVar1 < Local_15.f_216)
		{
			iVar3 = func_92(iVar1);
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
	iVar1 = func_92(iVar0);
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
	iVar0 = Local_274.f_60;
	if (iVar0 > 4)
	{
		return true;
	}
	if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
	{
		if (iVar0 == 1)
		{
			if (func_125(&Local_274))
			{
				PED::DELETE_PED(&(Local_15[iVar0]));
				PED::DELETE_PED(&(Local_15.f_40[iVar0]));
				Local_274.f_60++;
				return false;
			}
		}
		__LIB_2__::func_133(Local_15[iVar0], func_126(&Local_274, iVar0), 1);
		if (__LIB_0__::func_272(Local_15.f_40[iVar0], 0))
		{
			PED::_SET_PED_ON_MOUNT(Local_15[iVar0], Local_15.f_40[iVar0], -1, true);
		}
		switch (iVar0)
		{
			case 0:
				Local_274.f_57 = PED::GET_PED_ACCURACY(Local_15[iVar0]);
				__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15[0], func_130(&Local_274, 0), 1.5f, 20000, 0.25f, 0, func_131(&Local_274, 0));
				break;
			case 1:
				__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15[1], func_130(&Local_274, 1), 1.5f, 20000, 0.25f, 0, func_131(&Local_274, 1));
				break;
			case 2:
			case 4:
				__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 1);
				break;
			default:
				__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 1);
				break;
		}
		func_132(&Local_15, iVar0);
		func_133(iVar0, 75);
		func_134(iVar0, 75);
	}
	Local_274.f_60++;
	return false;
}

bool func_23()
{
	if (!__LIB_2__::func_275(&Local_274, 2))
	{
		if (func_138())
		{
			__LIB_2__::func_560();
			func_140();
			__LIB_2__::func_151(&Local_274, 3);
		}
	}
	switch (Local_274.f_4)
	{
		case 0:
			if (func_142())
			{
				if (func_143())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_2__::func_151(&Local_274, 3);
				}
			}
			else if (func_145())
			{
				if (func_146())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_146(&Local_15, 13);
				}
			}
			else if (func_147())
			{
				__LIB_2__::func_560();
				if (!__LIB_2__::func_27(&Local_274, 4))
				{
					func_149(Local_15[0]);
					__LIB_2__::func_276(&Local_274, 4);
				}
				__LIB_2__::func_442(&Local_15, 1);
				__LIB_2__::func_500(&Local_15, 1);
				__LIB_2__::func_494();
				__LIB_2__::func_151(&Local_274, 1);
			}
			break;
		case 1:
			__LIB_2__::func_560();
			if (func_152())
			{
				__LIB_2__::func_151(&Local_274, 3);
			}
			break;
		case 2:
			__LIB_2__::func_655();
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
	Local_274.f_56 = __LIB_2__::func_658(&Local_15);
	__LIB_17__::func_787();
	func_168();
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		__LIB_2__::func_208(&Local_15, iVar0, Local_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_10[0 /*3*/]), 0);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			if (Local_274.f_56 > 1)
			{
				if (func_171())
				{
					__LIB_2__::func_158(&Local_274, 2);
				}
			}
			else
			{
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			if (func_172(&Local_15, &(Local_274.f_54), &(Local_274.f_10[3 /*3*/]), "COMBAT_FLEE", 1092616192 /* Float: 10f */))
			{
				func_173();
				__LIB_2__::func_158(&Local_274, 3);
			}
			else
			{
				func_174();
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_49()
{
	func_173();
	if (!__LIB_0__::func_65(&Global_1393447, 65536))
	{
		if (__LIB_2__::func_1(Local_15[0], 0, 0))
		{
			__LIB_2__::func_152(&Local_15, 0, 2);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15[0], Local_15.f_209, 4, 16768, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(Local_15[0], true);
		}
		if (__LIB_2__::func_1(Local_15[1], 0, 0))
		{
			__LIB_2__::func_152(&Local_15, 1, 2);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15[1], Local_15.f_209, 4, 16768, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(Local_15[1], true);
		}
	}
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
	if (!__LIB_1__::func_285(&(Local_274.f_10[0 /*3*/]), 25f))
	{
		return 250f;
	}
	return 120f;
}

bool func_83()
{
	switch (Local_15.f_151)
	{
		case 37:
			func_241(&Local_274);
			func_242(&Local_274);
			break;
		case 10:
			func_241(&Local_274);
			if (__LIB_2__::func_633(0) || __LIB_2__::func_4(&Local_15, 2))
			{
				func_242(&Local_274);
			}
			break;
	}
	switch (Local_15.f_221)
	{
		case 0:
			Local_274 = 0;
			break;
		case 1:
			Local_274 = 1;
			break;
		case 2:
			Local_274 = 2;
			break;
		case 3:
			Local_274 = 3;
			break;
		default:
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221), true))
	{
		__LIB_2__::func_277(&Local_274, 1);
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	if (!func_125(&Local_274))
	{
		Local_15.f_216 = 5;
	}
	else
	{
		Local_15.f_216 = 5;
	}
	if (func_245(&Local_274))
	{
		Local_15.f_181 = -1;
	}
	else
	{
		Local_15.f_181 = 0;
	}
	Local_274.f_58 = Local_15.f_222;
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 2, 1);
	__LIB_2__::func_491();
	func_248();
	__LIB_3__::func_585(&(Local_274.f_72[0]), func_130(&Local_274, 0), 1.5f);
	__LIB_2__::func_659(&(Local_274.f_72[1]), func_130(&Local_274, 0), 1.5f, 0, 0);
	__LIB_2__::func_659(&(Local_274.f_75[0]), func_130(&Local_274, 1), 1.5f, 0, 0);
	__LIB_3__::func_585(&(Local_274.f_75[1]), func_130(&Local_274, 1), 1.5f);
	return true;
}

int func_92(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			if (Local_15.f_57[iVar0] == 0)
			{
				Local_15.f_57[iVar0] = joaat("A_C_HORSE_THOROUGHBRED_BRINDLE");
			}
			break;
		case 1:
			if (Local_15.f_57[iVar0] == 0)
			{
				Local_15.f_57[iVar0] = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
			}
			break;
	}
	if (Local_15.f_57[iVar0] == 0)
	{
		Local_15.f_57[iVar0] = __LIB_2__::func_185(Local_15.f_181, 0, 1);
	}
	return Local_15.f_57[iVar0];
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_3)
	{
		case 0:
			__LIB_2__::func_187();
			func_260(&Local_15, &Local_274);
			Local_274.f_3 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!func_262(&Local_15, &Local_274))
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
	return func_263(iVar0);
}

int func_97(int iParam0)
{
	return func_264(&Local_274, iParam0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_266(&Local_274, iVar0);
}

var func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_267(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_270(&Local_274, iVar0);
}

var func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_271(&Local_274, iVar0);
}

bool func_125(int iParam0)
{
	return iParam0->f_61;
}

char* func_126(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_272(iParam0, iParam1);
	return func_273(iVar0);
}

Vector3 func_130(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_277(iParam0, iParam1) };
	return vVar0;
}

var func_131(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_277(iParam0, iParam1) };
	return Var0.f_3;
}

void func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		case 3:
		case 4:
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 2);
			Jump @63; //curOff = 46
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 1);
			PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
		}
void func_133(int iParam0, int iParam1)
{
	PED::SET_PED_ACCURACY(Local_15[iParam0], iParam1);
}

void func_134(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE((iParam1 - 10), iParam1 + 10);
	PED::SET_PED_SHOOT_RATE(Local_15[iParam0], iVar0);
}

bool func_138()
{
	if (Local_274.f_55 > 1 || Local_274.f_55 < 0)
	{
		Local_274.f_55 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[Local_274.f_55]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_40[Local_274.f_55], Global_35, 1, 1))
		{
			return true;
		}
	}
	if (__LIB_2__::func_538(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_55), 0, 4, 1))
	{
		return true;
	}
	return false;
}

void func_140()
{
	bool bVar0;
	int iVar1;
	__LIB_2__::func_298();
	__LIB_2__::func_277(&Local_274, 2);
	if (__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 0, 0);
		bVar0 = true;
	}
	if (__LIB_2__::func_1(Local_15[1], 0, 0))
	{
		TASK::TASK_COMBAT_PED(Local_15[1], Global_35, 0, 0);
		bVar0 = true;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar1], 0, 0))
		{
			if (!bVar0)
			{
			}
		}
		iVar1++;
	}
	func_281();
}

bool func_142()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_29[2]))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_29[2], 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_143()
{
	func_283();
	__LIB_2__::func_277(&Local_274, 4);
	return true;
}

bool func_145()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_29[2], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_29[1], 1, 0))
		{
			__LIB_0__::func_11(&Local_15, 7);
			return true;
		}
	}
	if (func_286(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_146()
{
	if (__LIB_2__::func_1(Local_15[0], 0, 1))
	{
		func_288(&Local_15, __LIB_2__::func_116(36, 1), 0, 0, 1, 0);
	}
	if (__LIB_2__::func_1(Local_15[1], 0, 1))
	{
		func_288(&Local_15, __LIB_2__::func_116(36, 1), 1, 1, 1, 1.2f);
	}
	return true;
}

bool func_147()
{
	vector3 vVar0;
	if (!__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_157(Local_274.f_29[4], Global_36))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 2f) };
	if (__LIB_2__::func_157(Local_274.f_29[3], vVar0))
	{
		__LIB_2__::func_356(Local_15[0], Global_35, 3, 1, 100, 0);
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_149(int iParam0)
{
	vector3 vVar0;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		AUDIO::_PLAY_SOUND_FROM_ENTITY("ALERT_WHISTLE_02", iParam0, "GAROA_Sounds", false, 0, 0);
		return 1;
	}
	return 0;
}

bool func_152()
{
	vector3 vVar0[2];
	int iVar7;
	char* sVar8;
	char* sVar9;
	int iVar10;
	switch (Local_274.f_6)
	{
		case 0:
			Local_274.f_8 = func_295(&Local_274, 1);
			Local_274.f_9 = func_295(&Local_274, 0);
			if (!func_125(&Local_274))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[Local_274.f_8], Global_35, BUILTIN::FLOOR((1f * 1000f)) + 4000, false, 1);
			}
			__LIB_2__::func_278(&Local_274, 1);
			break;
		case 1:
			if (!__LIB_0__::func_75(&(Local_274.f_10[5 /*3*/])))
			{
				__LIB_1__::func_283(&(Local_274.f_10[5 /*3*/]), 0);
			}
			else if (__LIB_1__::func_285(&(Local_274.f_10[5 /*3*/]), 1f))
			{
			}
			if (!func_125(&Local_274))
			{
			}
			if (__LIB_2__::func_660(Local_15[Local_274.f_9], &(Local_274.f_42[Local_274.f_9]), 41, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0) || __LIB_1__::func_285(&(Local_274.f_10[5 /*3*/]), 2f))
			{
				if (!func_125(&Local_274))
				{
					func_298();
					Local_274.f_59 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_TERRIFYING_NEW"), Local_15.f_209, -1f, 100f, 100f, -1f, -1f, 4, 4);
					if (Local_274.f_59 != 0)
					{
					}
				}
				vVar0[0 /*3*/] = { func_299(&Local_274, Local_274.f_8) };
				vVar0[1 /*3*/] = { func_300(&Local_274, Local_274.f_8) };
				TASK::OPEN_SEQUENCE_TASK(&iVar7);
				if (!func_125(&Local_274))
				{
					TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0[0 /*3*/], 2f, -1, 0.25f, 1056773, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0[1 /*3*/], 2f, -1, 0.25f, 1056773, 40000f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[Local_274.f_8], &iVar7, 0, 0, 1, 1);
				__LIB_2__::func_278(&Local_274, 2);
			}
			break;
		case 2:
			vVar0[0 /*3*/] = { func_299(&Local_274, Local_274.f_9) };
			vVar0[1 /*3*/] = { func_300(&Local_274, Local_274.f_9) };
			TASK::OPEN_SEQUENCE_TASK(&iVar7);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0[0 /*3*/], 2f, -1, 0.25f, 1056773, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0[1 /*3*/], 2f, -1, 0.25f, 1056773, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[Local_274.f_9], &iVar7, 0, 0, 1, 1);
			__LIB_1__::func_148(&(Local_274.f_10[1 /*3*/]));
			__LIB_2__::func_278(&Local_274, 3);
			break;
		case 3:
			__LIB_1__::func_283(&(Local_274.f_10[1 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_10[1 /*3*/]), 0.2f))
			{
				if (!__LIB_2__::func_27(&Local_274, 1))
				{
					sVar8 = func_301(&Local_15, &Local_274);
					iVar10 = func_302(&Local_274);
					sVar9 = func_126(&Local_274, 0);
					func_303(Local_15[0], Global_35, sVar8, -1073741824 /* Float: -2f */, 0, -500314840, 0, sVar9, iVar10);
					__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
					__LIB_2__::func_276(&Local_274, 1);
				}
				__LIB_1__::func_148(&(Local_274.f_10[1 /*3*/]));
				__LIB_2__::func_278(&Local_274, 4);
			}
			break;
		case 4:
			if ((!func_125(&Local_274) && __LIB_1__::func_285(&(Local_274.f_10[1 /*3*/]), 0.1f)) || (func_125(&Local_274) && __LIB_1__::func_285(&(Local_274.f_10[1 /*3*/]), 2.1f)))
			{
				func_281();
				__LIB_2__::func_278(&Local_274, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_168()
{
	if (!__LIB_2__::func_275(&Local_274, 64))
	{
		if (Local_274.f_56 <= 3)
		{
			func_323(90);
			func_324(100);
			__LIB_2__::func_277(&Local_274, 64);
		}
	}
	else if (!__LIB_2__::func_275(&Local_274, 128))
	{
		if (Local_274.f_56 <= 2)
		{
			func_323(Local_274.f_57);
			__LIB_2__::func_277(&Local_274, 128);
		}
	}
}

bool func_171()
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	func_174();
	switch (Local_274.f_7)
	{
		case 0:
			__LIB_2__::func_298();
			if (__LIB_1__::func_285(&(Local_274.f_10[0 /*3*/]), 2.5f))
			{
				iVar0 = func_325();
				if (__LIB_2__::func_654(iVar0))
				{
					sVar1 = func_126(&Local_274, iVar0);
					__LIB_1__::func_283(&(Local_274.f_10[2 /*3*/]), 0);
					if (!__LIB_2__::func_27(&Local_274, 2))
					{
						sVar2 = func_327(&Local_274);
						iVar3 = func_328(&Local_274);
						func_303(Local_15[iVar0], Global_35, sVar2, -1073741824 /* Float: -2f */, 1, -500314840, 0, sVar1, iVar3);
						__LIB_2__::func_276(&Local_274, 2);
					}
					__LIB_2__::func_280(&Local_274, 1);
				}
				else
				{
					__LIB_2__::func_280(&Local_274, 4);
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_10[2 /*3*/]), 5f))
			{
				iVar0 = func_330();
				if (__LIB_2__::func_654(iVar0))
				{
					sVar1 = func_126(&Local_274, iVar0);
					sVar2 = func_331(&Local_274);
					iVar3 = func_332(&Local_274);
					__LIB_1__::func_148(&(Local_274.f_10[2 /*3*/]));
					func_303(Local_15[iVar0], Global_35, sVar2, -1073741824 /* Float: -2f */, 1, 1744022339, 0, sVar1, iVar3);
					__LIB_2__::func_280(&Local_274, 2);
				}
				else
				{
					__LIB_2__::func_280(&Local_274, 4);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_10[2 /*3*/]), 6f))
			{
				iVar0 = func_333();
				if (__LIB_2__::func_654(iVar0))
				{
					sVar1 = func_126(&Local_274, iVar0);
					sVar2 = func_334(&Local_274);
					iVar3 = func_335(&Local_274);
					__LIB_1__::func_148(&(Local_274.f_10[2 /*3*/]));
					func_303(Local_15[iVar0], Global_35, sVar2, -1073741824 /* Float: -2f */, 1, 1744022339, 0, sVar1, iVar3);
					__LIB_2__::func_280(&Local_274, 3);
				}
				else
				{
					__LIB_2__::func_280(&Local_274, 4);
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_10[2 /*3*/]), 4f))
			{
				iVar0 = __LIB_2__::func_656(0, 4);
				if (__LIB_2__::func_654(iVar0))
				{
					sVar1 = func_126(&Local_274, iVar0);
					sVar2 = func_337(&Local_274);
					iVar3 = func_338(&Local_274);
					__LIB_1__::func_148(&(Local_274.f_10[2 /*3*/]));
					func_303(Local_15[iVar0], Global_35, sVar2, -1073741824 /* Float: -2f */, 1, 1744022339, 0, sVar1, iVar3);
					__LIB_2__::func_280(&Local_274, 4);
				}
				else
				{
					__LIB_2__::func_280(&Local_274, 4);
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_172(int iParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
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
				if (!__LIB_2__::func_25(iParam0, iVar2, 1))
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
					TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[*uParam1], Global_35, 4, 524292, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[*uParam1], true);
					__LIB_1__::func_733((*iParam0)[*uParam1]);
					__LIB_2__::func_56((*iParam0)[*uParam1], 0, 1);
					__LIB_2__::func_478((*iParam0)[*uParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_173()
{
	if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, true, joaat("REL_GANG_ODRISCOLL"));
	}
}

void func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_2__::func_26(&Local_15, iVar0, 16777216))
		{
			if (__LIB_0__::func_48(Local_15[iVar0], Global_35, 10f, 1))
			{
				if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1) && PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], false) != 0)
				{
					TASK::CLEAR_PED_TASKS(Local_15.f_40[iVar0], true, false);
				}
				TASK::TASK_COMBAT_PED(Local_15[iVar0], Global_35, 100663296, 0);
				__LIB_2__::func_28(&Local_15, iVar0, 16777216);
			}
		}
		iVar0++;
	}
}

void func_241(int iParam0)
{
	iParam0->f_61 = 1;
}

void func_242(int iParam0)
{
	iParam0->f_62 = 1;
}

bool func_245(int iParam0)
{
	return iParam0->f_62;
}

void func_248()
{
	func_388();
	switch (Local_274)
	{
		case 0:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				Local_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(338.589f, 232.009f, 115.799f, 0f, 0f, -57.90996f, 53.261f, 52.5f, 25f, "volTrigger");
			}
			else
			{
				Local_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(339.675f, 238.283f, 115.799f, 0f, 0f, 26.00785f, 40f, 58f, 25f, "volTrigger");
			}
			break;
		case 1:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				Local_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-379.045f, 127.827f, 62.31f, 0f, 0f, 26.539f, 50f, 60f, 25f, "volTrigger");
				Local_274.f_29[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-350.3254f, 59.00127f, 43.12436f, 0f, 0f, 19.99999f, 110.5504f, 40.91618f, 60.3563f, "volTriggerSubtract");
			}
			else
			{
				Local_274.f_29[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
				VOLUME::_0xBCE668AAF83608BE(Local_274.f_29[3], -382.465f, 113.158f, 49.081f, 0f, 0f, 0f, 50f, 50f, 25f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[3], -383.01f, 171.862f, 57.306f, 0f, 0f, 28f, 60f, 30f, 40f);
				Local_274.f_29[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-350.3254f, 59.00127f, 43.12436f, 0f, 0f, 19.99999f, 110.5504f, 40.91618f, 60.3563f, "volTriggerSubtract");
			}
			break;
		case 2:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				Local_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1046.844f, -391.533f, 84.9f, 0f, 0f, 51.53897f, 30f, 50f, 25f, "volTrigger");
			}
			else
			{
				Local_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1082.664f, -459.843f, 84.9f, 0f, 0f, 26.00785f, 50f, 50f, 25f, "volTrigger");
			}
			break;
		case 3:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				Local_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1263.067f, 9.892f, 63.023f, 0f, 0f, 101.539f, 30f, 55f, 25f, "volTrigger");
			}
			else
			{
				Local_274.f_29[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1261.02f, 9.46f, 56.089f, 0f, 0f, 23.008f, 80f, 40f, 25f, "volTrigger");
			}
			break;
	}
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = func_264(iParam1, iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_262(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = func_264(iParam1, iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_263(int iParam0)
{
	if (!func_245(&Local_274))
	{
		if (!func_125(&Local_274))
		{
			switch (iParam0)
			{
				case 0:
					return 877386931;
				case 1:
					return -54399588;
				case 2:
					return -1658670882;
				case 3:
					return -1269768390;
				case 4:
					return -1046054427;
				default:
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return -1993472916;
				case 2:
					return -1658670882;
				case 3:
					return -1269768390;
				case 4:
					return -1046054427;
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
				return -1993472916;
			case 2:
				return -1658670882;
			case 3:
				return -1269768390;
			case 4:
				return -1046054427;
			default:
				break;
		}
	}
	return __LIB_2__::func_16();
}

int func_264(int iParam0, int iParam1)
{
	if (func_245(iParam0))
	{
		return joaat("G_M_M_UNICRIMINALS_01");
	}
	return joaat("G_M_M_UNIDUSTER_01");
}

Vector3 func_266(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_400(iParam0, iParam1) };
	return vVar0;
}

var func_267(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_400(iParam0, iParam1) };
	return Var0.f_3;
}

Vector3 func_270(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_406(iParam0, iParam1) };
	return vVar0;
}

var func_271(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_406(iParam0, iParam1) };
	return Var0.f_3;
}

int func_272(int iParam0, int iParam1)
{
	if (func_245(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				return 4;
			case 1:
				return 4;
			case 2:
				return 5;
			case 3:
				return 5;
			case 4:
				return 4;
			default:
				break;
		}
	}
	else if (func_125(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				return 2;
			case 1:
				return 2;
			case 2:
				return 3;
			case 3:
				return 3;
			case 4:
				return 2;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
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
				return 0;
			default:
				break;
		}
	}
	return -1;
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1018_G_M_M_UniDuster_01_IRISH_01";
		case 1:
			return "0359_G_M_M_UniDuster_02_IRISH_01";
		case 2:
			return "0356_G_M_M_UniDuster_01_WHITE_02";
		case 3:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 4:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 5:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		default:
			break;
	}
	return "NULL VOICE";
}

struct<4> func_277(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 1);
					case 1:
						return func_412(0, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 1);
					case 1:
						return func_412(1, 5);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 1);
					case 1:
						return func_412(2, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 1);
					case 1:
						return func_412(3, 5);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 1);
					case 1:
						return func_412(4, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 1);
					case 1:
						return func_412(5, 5);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 1);
					case 1:
						return func_412(6, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 1);
					case 1:
						return func_412(7, 5);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_281()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	if (__LIB_2__::func_275(&Local_274, 32))
	{
		return;
	}
	fVar5 = 0f;
	iVar3 = 2;
	while (iVar3 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			vVar0 = { func_299(&Local_274, iVar3) };
			switch (iVar3)
			{
				case 2:
					fVar5 = 0f;
					break;
				case 3:
					fVar5 = 0f;
					break;
				case 4:
					fVar5 = 0f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			if ((iVar3 == 2 && Local_274 == 0) && !func_125(&Local_274))
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 3f, 1, 3f, 1f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 5);
			}
			else if (iVar3 == 3)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 3f, 20000, 3f, 4, 40000f);
			}
			else if (iVar3 == 4 && func_125(&Local_274))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 3f, 1, 3f, 1f, 1, 2105348, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, vVar0, 5f);
				TASK::TASK_COMBAT_PED_TIMED(0, Global_35, 3000, 0);
				TASK::TASK_CLEAR_DEFENSIVE_AREA(0);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 3f, 1, 3f, 1f, 1, 2105348, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar5, 0, 1, 1);
		}
		iVar3++;
	}
	__LIB_2__::func_277(&Local_274, 32);
}

void func_283()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_2__::func_275(&Local_274, 4))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (__LIB_2__::func_1(Local_15[0], 0, 1))
		{
			__LIB_2__::func_478(Local_15[0], Global_35, func_301(&Local_15, &Local_274), 0, 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.3f, 1f, 1, 1);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			if (!bVar2)
			{
				__LIB_2__::func_478(Local_15[iVar0], Global_35, func_301(&Local_15, &Local_274), 0, 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_286(int iParam0)
{
	switch (iParam0->f_224)
	{
		case 0:
			if (__LIB_2__::func_288(iParam0))
			{
				__LIB_0__::func_11(iParam0, 1);
				return true;
			}
			break;
		case 1:
			if (func_418(iParam0))
			{
				__LIB_0__::func_11(iParam0, 2);
				return true;
			}
			break;
		case 2:
			if (__LIB_2__::func_194(iParam0))
			{
				__LIB_0__::func_11(iParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_420(iParam0))
			{
				__LIB_0__::func_11(iParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_421(iParam0))
			{
				__LIB_0__::func_11(iParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_422(iParam0))
			{
				__LIB_0__::func_11(iParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	iParam0->f_224++;
	iParam0->f_224 = (iParam0->f_224 % 7);
	return false;
}

void func_288(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, float fParam7)
{
	int iVar0;
	if (iParam4 < 0 || iParam4 >= 8)
	{
		return;
	}
	if (__LIB_1__::func_472((*iParam0)[iParam4], 250f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || (func_424(iParam5) && __LIB_1__::func_472(iParam0->f_40[iParam5], 250f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)))
	{
		__LIB_2__::func_152(iParam0, iParam4, 2);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[iParam4], joaat("REL_PLAYER_DISLIKE"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iParam4], false);
		PED::SET_PED_CONFIG_FLAG((*iParam0)[iParam4], 230, true);
		if (iParam5 >= 0 && iParam5 < 8)
		{
			__LIB_2__::func_28(iParam0, iParam5, 2);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (iParam5 >= 0 && iParam5 < 8)
		{
			if (__LIB_2__::func_1(iParam0->f_40[iParam5], 0, 0) && !PED::IS_PED_ON_MOUNT((*iParam0)[iParam4]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, iParam0->f_40[iParam5], -1, -1, 1f, 1, 0, 0);
			}
		}
		if (bParam6)
		{
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam1, 10f, 2.5f, 0, 0);
		}
		else
		{
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam1, 10f, 1f, 0, 0);
		}
		__LIB_1__::func_474((*iParam0)[iParam4], &iVar0, fParam7, 0, 1, 1);
	}
}

int func_295(int iParam0, bool bParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				if (bParam1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				if (bParam1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				if (bParam1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 3:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				if (bParam1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_298()
{
	vector3 vVar0;
	struct<15> Var3;
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, ENTITY::GET_ENTITY_HEADING(Global_35), 0f, 5f, 0f) };
	__LIB_2__::func_106(&vVar0, 2, 10, 0);
	Var3.f_8 = -1082130432;
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15[1], 0f, 2f, 1f) };
	Var3.f_3 = { vVar0 };
	Var3.f_6 = joaat("WEAPON_SNIPERRIFLE_CARCANO");
	Var3.f_7 = 1f;
	Var3.f_12 = 1;
	Var3.f_13 = 1;
	Var3.f_14 = 1;
	MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var3);
}

Vector3 func_299(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_433(iParam0, iParam1) };
	return vVar0;
}

Vector3 func_300(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_434(iParam0, iParam1) };
	return vVar0;
}

char* func_301(int iParam0, int iParam1)
{
	if (func_125(iParam1))
	{
		if (!func_245(iParam1))
		{
			return "CALL_FOR_SUPPORT";
		}
		else
		{
			return "ARRIVAL_COMBAT_RAID_NEUTRAL";
		}
	}
	if (iParam1->f_58 <= 0)
	{
		if (iParam0->f_227)
		{
			return "RE_VPO_MTN_V1_SPOTTED";
		}
	}
	else
	{
		return "CALL_FOR_SUPPORT";
	}
	return "RE_VPO_MTN_V1_SPOTTED";
}

int func_302(int iParam0)
{
	if (func_125(iParam0))
	{
		if (!func_245(iParam0))
		{
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_303(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6, char* sParam7, int iParam8)
{
	vector3 vVar0;
	if (bParam6)
	{
		vVar0 = { __LIB_1__::func_367(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false), 0.8f) };
		return func_436(vVar0, sParam2, sParam7, iParam5, 0, 1, iParam8);
	}
	return __LIB_2__::func_478(iParam0, iParam1, sParam2, "", fParam3, iParam8, 0, 1, 1, fParam3 >= 0f, bParam4, iParam5, 1, 0, 0);
}

void func_323(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			func_133(iVar0, iParam0);
		}
		iVar0++;
	}
}

void func_324(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			func_134(iVar0, iParam0);
		}
		iVar0++;
	}
}

int func_325()
{
	int iVar0;
	int iVar1;
	if (!func_125(&Local_274))
	{
		iVar0 = 0;
	}
	else
	{
		if (!func_245(&Local_274))
		{
			iVar1 = func_442(0, 4, 1, 3);
		}
		else
		{
			iVar1 = func_442(0, 4, 1, 5);
		}
		iVar0 = iVar1;
	}
	return iVar0;
}

char* func_327(int iParam0)
{
	if (iParam0->f_58 <= 0)
	{
		if (!func_125(iParam0))
		{
			if (!func_245(iParam0))
			{
				return "RE_VPO_MTN_V1_ATTACK";
			}
		}
	}
	return "ARRIVAL_COMBAT_RAID_MALE";
}

int func_328(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_330()
{
	int iVar0;
	int iVar1;
	if (!func_125(&Local_274))
	{
		iVar0 = __LIB_2__::func_656(2, 3);
	}
	else
	{
		if (!func_245(&Local_274))
		{
			iVar1 = func_442(0, 4, 1, 3);
		}
		else
		{
			iVar1 = func_442(0, 4, 1, 5);
		}
		iVar0 = iVar1;
	}
	return iVar0;
}

char* func_331(int iParam0)
{
	if (iParam0->f_58 <= 0)
	{
		if (!func_125(iParam0))
		{
			return "RE_VPO_MTN_V1_ATTACK_2";
		}
	}
	return "ARRIVAL_COMBAT_RAID_MALE";
}

int func_332(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	return 2;
}

int func_333()
{
	int iVar0;
	if (!func_125(&Local_274))
	{
		iVar0 = 4;
		if (!__LIB_2__::func_654(iVar0))
		{
			iVar0 = __LIB_2__::func_656(0, 1);
		}
	}
	else
	{
		iVar0 = __LIB_2__::func_656(0, 4);
	}
	return iVar0;
}

char* func_334(int iParam0)
{
	if (iParam0->f_58 <= 0)
	{
		if (!func_125(iParam0))
		{
			return "RE_VPO_MTN_V1_ATTACK_2";
		}
	}
	if (func_245(iParam0))
	{
		return "TAUNT_GEN_MALE";
	}
	return "GANG_TAUNT_GEN";
}

int func_335(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	if (func_245(iParam0))
	{
		return 2;
	}
	return 2;
}

char* func_337(int iParam0)
{
	if (func_245(iParam0))
	{
		return "TAUNT_GEN_MALE";
	}
	return "TAUNT_GEN_LOCATION";
}

int func_338(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	return 0;
}

void func_388()
{
	switch (Local_274)
	{
		case 0:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				Local_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], 418.848f, 77.80293f, 121.6681f, 0f, 0f, 0f, 185.5292f, 825.656f, 100f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], 329.3069f, 421.5065f, 121.6681f, 0f, 0f, 40.76599f, 225.4734f, 874.3004f, 100f);
				Local_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(277.262f, 204.918f, 118.72f, 0f, 0f, 46f, 80f, 80f, 25f, "volLookout");
			}
			else
			{
				Local_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], 238.8252f, 114.7395f, 121.6681f, 0f, 0f, 46.53898f, 283.0704f, 527.0014f, 100f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], 205.9177f, 320.7971f, 121.6681f, 0f, 0f, 33.19563f, 185.5292f, 196.1588f, 100f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], 222.5638f, 245.1077f, 121.6681f, 0f, 0f, 12.13536f, 185.5292f, 117.6843f, 100f);
				Local_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(385.355f, 264.261f, 118.187f, 0f, 0f, 36f, 80f, 50f, 20f, "volLookout");
			}
			break;
		case 1:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				Local_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[2], -294.124f, 129.479f, 63.876f, 0f, 0f, 42f, 50f, 50f, 30f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[2], -347.064f, 203.095f, 60.493f, 0f, 0f, -38f, 70f, 55f, 40f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[2], -394.846f, 217.928f, 58.11f, 0f, 0f, 49f, 100f, 35f, 40f);
				VOLUME::_0xBCE668AAF83608BE(Local_274.f_29[2], -292.999f, 146.99f, 69.254f, 0f, 0f, -55f, 60f, 30f, 20f);
				Local_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -255.5343f, 153.9758f, 83.802f, 0f, 0f, 99f, 174.117f, 86.23087f, 86.94492f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -352.129f, 242.74f, 71.85f, 0f, 0f, -9.999998f, 313.7393f, 70f, 80.20216f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -477.6529f, 199.2664f, 60.86052f, 0f, 0f, 50.61905f, 471.6731f, 142.3497f, 80.20216f);
				Local_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-369.926f, 41.29f, 58.923f, 0f, 0f, 0f, 80f, 80f, 20f, "volLookout");
			}
			else
			{
				Local_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[2], -333.979f, 59.428f, 57.306f, 0f, 0f, 16f, 60f, 30f, 40f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[2], -288.543f, 102.454f, 58.11f, 0f, 0f, 49f, 100f, 40f, 40f);
				VOLUME::_0xBCE668AAF83608BE(Local_274.f_29[2], -284.316f, 173.197f, 69.254f, 0f, 0f, -39f, 80f, 50f, 20f);
				Local_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -244.7656f, 133.764f, 68.71463f, 0f, 0f, 99f, 257.6301f, 70f, 95.28242f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -301.2656f, 229.6675f, 73.87491f, 0f, 0f, -9.999998f, 114f, 70f, 65.18693f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -386.6048f, -8.184917f, 68.71463f, 0f, 0f, 173.198f, 380.4984f, 170.8759f, 95.28242f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -249.7183f, 11.96617f, 68.71463f, 0f, 0f, 37.51524f, 455.6271f, 162.2984f, 95.28242f);
				Local_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-415.243f, 168.681f, 59.814f, 0f, 0f, -19f, 80f, 100f, 20f, "volLookout");
			}
			break;
		case 2:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				Local_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_0xBCE668AAF83608BE(Local_274.f_29[2], 1121.319f, -395.433f, 108.31f, 0f, 0f, -34f, 20f, 50f, 20f);
				VOLUME::_0xBCE668AAF83608BE(Local_274.f_29[2], -1091.897f, -435.154f, 107.567f, 0f, 0f, -13f, 70f, 25f, 30f);
				Local_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -1289.838f, -351.7445f, 88.6458f, 0f, 0f, 126f, 295.3131f, 322.2214f, 74.67348f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -1084.834f, -563.8528f, 78.51221f, 0f, 0f, 157.2218f, 454.3719f, 322.2214f, 82.22474f);
				Local_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1017.86f, -347.825f, 67.291f, 0f, 0f, 0f, 80f, 80f, 20f, "volLookout");
			}
			else
			{
				Local_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[2], -1115.546f, -389.335f, 108.764f, 0f, 0f, 41f, 80f, 70f, 50f);
				VOLUME::_0xBCE668AAF83608BE(Local_274.f_29[2], -1053.247f, -367.928f, 97.34f, 0f, 0f, 0f, 60f, 60f, 40f);
				Local_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -983.4986f, -357.1036f, 84.52315f, 0f, 0f, 126f, 540.9646f, 224.4078f, 113.9085f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -983.4986f, -357.1036f, 84.52313f, 0f, 0f, 159f, 540.9646f, 224.4078f, 113.9085f);
				Local_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1085.386f, -477.668f, 96.065f, 0f, 0f, 0f, 80f, 80f, 20f, "volLookout");
			}
			break;
		case 3:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				Local_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_0xBCE668AAF83608BE(Local_274.f_29[2], -1285.011f, 53.415f, 63.329f, 0f, 0f, -18f, 30f, 16f, 50f);
				Local_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -1378.973f, 3.14997f, 77.486f, 0f, 0f, 106f, 470.503f, 235.9486f, 60f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -1291.689f, 113.318f, 76.272f, 0f, 0f, 8f, 20f, 83f, 53f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -1285.569f, 106.013f, 75.365f, 0f, 0f, 4f, 53f, 25f, 40f);
				Local_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1085.386f, -477.668f, 96.065f, 0f, 0f, 0f, 80f, 80f, 20f, "volLookout");
			}
			else
			{
				Local_274.f_29[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
				VOLUME::_0xBCE668AAF83608BE(Local_274.f_29[2], -1285.011f, 53.415f, 63.329f, 0f, 0f, -18f, 30f, 16f, 50f);
				Local_274.f_29[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -1261.021f, -90.269f, 83.25f, 0f, 0f, 62.99999f, 100f, 80f, 60f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -1181.281f, 41.43328f, 55.359f, 0f, 0f, 22f, 223.2978f, 504.4755f, 242.9544f);
				VOLUME::_0x39816F6F94F385AD(Local_274.f_29[1], -1326.26f, 96.98f, 63.329f, 0f, 0f, -11f, 100f, 100f, 50f);
				Local_274.f_29[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1085.386f, -477.668f, 96.065f, 0f, 0f, 0f, 80f, 80f, 20f, "volLookout");
			}
			break;
	}
}

struct<4> func_400(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 0);
					case 1:
						return func_412(0, 4);
					case 2:
						return func_412(0, 8);
					case 3:
						return func_412(0, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(0, 14);
						}
						return func_412(0, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 0);
					case 1:
						return func_412(1, 4);
					case 2:
						return func_412(1, 8);
					case 3:
						return func_412(1, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(1, 14);
						}
						return func_412(1, 12);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 0);
					case 1:
						return func_412(2, 4);
					case 2:
						return func_412(2, 8);
					case 3:
						return func_412(2, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(2, 14);
						}
						return func_412(2, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 0);
					case 1:
						return func_412(3, 4);
					case 2:
						return func_412(3, 8);
					case 3:
						return func_412(3, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(3, 14);
						}
						return func_412(3, 12);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 0);
					case 1:
						return func_412(4, 4);
					case 2:
						return func_412(4, 8);
					case 3:
						return func_412(4, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(4, 14);
						}
						return func_412(4, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 0);
					case 1:
						return func_412(5, 4);
					case 2:
						return func_412(5, 8);
					case 3:
						return func_412(5, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(5, 14);
						}
						return func_412(5, 12);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 0);
					case 1:
						return func_412(6, 4);
					case 2:
						return func_412(6, 8);
					case 3:
						return func_412(6, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(6, 14);
						}
						return func_412(6, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 0);
					case 1:
						return func_412(7, 4);
					case 2:
						return func_412(7, 8);
					case 3:
						return func_412(7, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(7, 14);
						}
						return func_412(7, 12);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_406(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 0);
					case 1:
						return func_412(0, 4);
					case 2:
						return func_412(0, 8);
					case 3:
						return func_412(0, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(0, 14);
						}
						return func_412(0, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 0);
					case 1:
						return func_412(1, 4);
					case 2:
						return func_412(1, 8);
					case 3:
						return func_412(1, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(1, 14);
						}
						return func_412(1, 12);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 0);
					case 1:
						return func_412(2, 4);
					case 2:
						return func_412(2, 8);
					case 3:
						return func_412(2, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(2, 14);
						}
						return func_412(2, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 0);
					case 1:
						return func_412(3, 4);
					case 2:
						return func_412(3, 8);
					case 3:
						return func_412(3, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(3, 14);
						}
						return func_412(3, 12);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 0);
					case 1:
						return func_412(4, 4);
					case 2:
						return func_412(4, 8);
					case 3:
						return func_412(4, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(4, 14);
						}
						return func_412(4, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 0);
					case 1:
						return func_412(5, 4);
					case 2:
						return func_412(5, 8);
					case 3:
						return func_412(5, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(5, 14);
						}
						return func_412(5, 12);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 0);
					case 1:
						return func_412(6, 4);
					case 2:
						return func_412(6, 8);
					case 3:
						return func_412(6, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(6, 14);
						}
						return func_412(6, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 0);
					case 1:
						return func_412(7, 4);
					case 2:
						return func_412(7, 8);
					case 3:
						return func_412(7, 10);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(7, 14);
						}
						return func_412(7, 12);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_412(int iParam0, int iParam1)
{
	return func_474(iParam0, iParam1);
}

bool func_418(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 131072))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!__LIB_2__::func_4(iParam0, 16777216) || iParam0->f_20 < 85f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_420(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 262144))
	{
		if (iParam0->f_20 < 85f)
		{
			if (__LIB_2__::func_437(iParam0, 85f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_421(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 524288))
	{
		if (iParam0->f_20 < 85f)
		{
			if (__LIB_2__::func_300(iParam0, 85f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_422(int iParam0)
{
	if (!__LIB_2__::func_8(iParam0->f_151))
	{
		if (iParam0->f_20 < 85f)
		{
			if (__LIB_2__::func_232(iParam0->f_151, iParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_424(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

struct<4> func_433(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 2);
					case 1:
						return func_412(0, 6);
					case 2:
						return func_412(0, 9);
					case 3:
						return func_412(0, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(0, 15);
						}
						return func_412(0, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 2);
					case 1:
						return func_412(1, 6);
					case 2:
						return func_412(1, 9);
					case 3:
						return func_412(1, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(1, 15);
						}
						return func_412(1, 13);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 2);
					case 1:
						return func_412(2, 6);
					case 2:
						return func_412(2, 9);
					case 3:
						return func_412(2, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(2, 15);
						}
						return func_412(2, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 2);
					case 1:
						return func_412(3, 6);
					case 2:
						return func_412(3, 9);
					case 3:
						return func_412(3, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(3, 15);
						}
						return func_412(3, 13);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 2);
					case 1:
						return func_412(4, 6);
					case 2:
						return func_412(4, 9);
					case 3:
						return func_412(4, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(4, 15);
						}
						return func_412(4, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 2);
					case 1:
						return func_412(5, 6);
					case 2:
						return func_412(5, 9);
					case 3:
						return func_412(5, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(5, 15);
						}
						return func_412(5, 13);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 2);
					case 1:
						return func_412(6, 6);
					case 2:
						return func_412(6, 9);
					case 3:
						return func_412(6, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(6, 15);
						}
						return func_412(6, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 2);
					case 1:
						return func_412(7, 6);
					case 2:
						return func_412(7, 9);
					case 3:
						return func_412(7, 11);
					case 4:
						if (func_125(iParam0))
						{
							return func_412(7, 15);
						}
						return func_412(7, 13);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_434(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(0, 3);
					case 1:
						return func_412(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(1, 3);
					case 1:
						return func_412(1, 7);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(2, 3);
					case 1:
						return func_412(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(3, 3);
					case 1:
						return func_412(3, 7);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(4, 3);
					case 1:
						return func_412(4, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(5, 3);
					case 1:
						return func_412(5, 7);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_412(6, 3);
					case 1:
						return func_412(6, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_412(7, 3);
					case 1:
						return func_412(7, 7);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

bool func_436(vector3 vParam0, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam8;
	Var0.f_3 = iParam5;
	Var0.f_4 = iParam6;
	Var0.f_5 = iParam7;
	return __LIB_8__::func_780(vParam0, &Var0);
}

int func_442(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		if (__LIB_2__::func_1(Local_15[iVar2], 0, 0))
		{
			fVar1 = Local_15.f_9[iVar2];
			if ((fVar1 < fVar0 && !bParam2) || !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15[iVar2]))
			{
				if (iParam3 == -1 || iParam3 == func_272(&Local_274, iVar2))
				{
					fVar0 = fVar1;
					iVar3 = iVar2;
				}
			}
		}
		iVar2++;
	}
	return iVar3;
}

struct<4> func_474(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_564(iParam0, iParam1) };
	Var0.f_3 = func_565(iParam0, iParam1);
	return Var0;
}

Vector3 func_564(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 336.1806f, 292.4605f, 119.6617f;
				case 1:
					return 334.9665f, 284.7382f, 118.1679f;
				case 2:
					return 343.691f, 295.5359f, 117.5653f;
				case 3:
					return 329.9181f, 222.0633f, 102.1938f;
				case 4:
					return 337.8624f, 294.8059f, 119.5307f;
				case 5:
					return 336.897f, 285.3664f, 118.0265f;
				case 6:
					return 343.1613f, 294.4232f, 117.4547f;
				case 7:
					return 331.2499f, 223.0155f, 102.1185f;
				case 8:
					return 370.8422f, 305.8814f, 110.0554f;
				case 9:
					return 375.1672f, 251.0446f, 100.2551f;
				case 10:
					return 372.4329f, 306.9809f, 109.5481f;
				case 11:
					return 378.0452f, 250.7036f, 100.0399f;
				case 12:
					return 373.5109f, 307.6108f, 109.1779f;
				case 13:
					return 381.4464f, 250.7848f, 99.9247f;
				case 14:
					return 528.7069f, 311.5555f, 107.9806f;
				case 15:
					return 496.0487f, 339.9663f, 104.6636f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 321.4429f, 175.9194f, 111.9016f;
				case 1:
					return 330.0614f, 192.032f, 108.7471f;
				case 2:
					return 343.6927f, 206.4418f, 108.2634f;
				case 3:
					return 343.1608f, 223.0363f, 101.6018f;
				case 4:
					return 319.6173f, 174.6009f, 111.4609f;
				case 5:
					return 328.1115f, 192.8681f, 108.0663f;
				case 6:
					return 342.1098f, 206.0049f, 108.061f;
				case 7:
					return 343.2163f, 221.9266f, 101.7214f;
				case 8:
					return 300.6498f, 164.4528f, 106.5809f;
				case 9:
					return 294.1143f, 197.8797f, 100.9933f;
				case 10:
					return 298.0547f, 165.4312f, 105.5265f;
				case 11:
					return 289.5424f, 197.5843f, 100.6632f;
				case 12:
					return 295.222f, 166.1819f, 104.5714f;
				case 13:
					return 286.1267f, 198.291f, 100.4247f;
				case 14:
					return 295.222f, 166.1819f, 104.5714f;
				case 15:
					return 286.0969f, 198.3144f, 100.4237f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -322.76f, 162.3597f, 63.1874f;
				case 1:
					return -339.3938f, 143.7074f, 60.6733f;
				case 2:
					return -314.5986f, 134.375f, 54.5632f;
				case 3:
					return -332.9436f, 118.1599f, 45.9152f;
				case 4:
					return -324.803f, 163.7174f, 63.2238f;
				case 5:
					return -341.2525f, 145.6107f, 60.6236f;
				case 6:
					return -312.255f, 132.7991f, 54.534f;
				case 7:
					return -331.828f, 114.1646f, 45.6906f;
				case 8:
					return -367.4267f, 222.9138f, 56.1989f;
				case 9:
					return -386.9065f, 162.034f, 42.5372f;
				case 10:
					return -369.0892f, 223.4581f, 56.1221f;
				case 11:
					return -389.8853f, 163.3682f, 42.9922f;
				case 12:
					return -370.6674f, 223.766f, 55.9066f;
				case 13:
					return -392.4209f, 164.4365f, 43.1536f;
				case 14:
					return -480.4709f, 216.1246f, 42.2113f;
				case 15:
					return -404.1324f, 177.7652f, 44.1436f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -326.3528f, 146.6191f, 60.8614f;
				case 1:
					return -341.824f, 146.3926f, 60.636f;
				case 2:
					return -371.556f, 213.6188f, 53.796f;
				case 3:
					return -393.0625f, 169.6177f, 43.5259f;
				case 4:
					return -325.7378f, 148.0271f, 61.1155f;
				case 5:
					return -340.9121f, 148.1152f, 60.95f;
				case 6:
					return -372.5912f, 214.9758f, 54.0121f;
				case 7:
					return -395.7979f, 172.8089f, 43.8452f;
				case 8:
					return -317.5195f, 132.5747f, 52.7181f;
				case 9:
					return -359.0844f, 91.2728f, 42.2513f;
				case 10:
					return -316.528f, 130.3787f, 52.31f;
				case 11:
					return -359.2873f, 89.2596f, 42.4034f;
				case 12:
					return -314.7773f, 128.8436f, 52.3028f;
				case 13:
					return -359.1373f, 87.0754f, 42.4582f;
				case 14:
					return -371.5792f, 6.0027f, 41.959f;
				case 15:
					return -359.9533f, 52.1384f, 42.8851f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1113.994f, -385.158f, 101.0341f;
				case 1:
					return -1087.399f, -388.0973f, 99.8029f;
				case 2:
					return -1066.723f, -340.1548f, 83.1526f;
				case 3:
					return -1043.116f, -412.524f, 78.2868f;
				case 4:
					return -1114.165f, -386.3226f, 101.2027f;
				case 5:
					return -1088.294f, -389.9013f, 99.692f;
				case 6:
					return -1064.254f, -338.9531f, 83.0924f;
				case 7:
					return -1041.966f, -412.5135f, 78.0508f;
				case 8:
					return -1107.096f, -434.6443f, 88.1351f;
				case 9:
					return -1064.544f, -444.6031f, 80.478f;
				case 10:
					return -1107.028f, -435.9342f, 87.8316f;
				case 11:
					return -1065.561f, -448.9233f, 80.4255f;
				case 12:
					return -1107.067f, -437.4742f, 87.5085f;
				case 13:
					return -1066.459f, -452.5898f, 80.4573f;
				case 14:
					return -1046.403f, -513.9974f, 89.0409f;
				case 15:
					return -1073.27f, -496.6796f, 80.5251f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1113.623f, -384.7078f, 100.9443f;
				case 1:
					return -1099.677f, -413.1754f, 100.8044f;
				case 2:
					return -1133.508f, -414.0592f, 104.5394f;
				case 3:
					return -1124.395f, -433.1193f, 93.8822f;
				case 4:
					return -1103.743f, -378.3711f, 103.4512f;
				case 5:
					return -1098.371f, -412.6312f, 100.7571f;
				case 6:
					return -1131.75f, -414.1002f, 104.2211f;
				case 7:
					return -1125.397f, -434.315f, 94.6095f;
				case 8:
					return -1053.184f, -351.9357f, 80.8073f;
				case 9:
					return -1031.145f, -395.0955f, 75.7791f;
				case 10:
					return -1054.964f, -351.9594f, 81.4518f;
				case 11:
					return -1034.999f, -393.429f, 76.1422f;
				case 12:
					return -1056.513f, -352.2349f, 81.8687f;
				case 13:
					return -1038.5f, -392.1666f, 76.6026f;
				case 14:
					return -965.2475f, -353.9383f, 56.6761f;
				case 15:
					return -981.348f, -377.6799f, 60.5792f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1277.449f, 53.9643f, 68.8329f;
				case 1:
					return -1269.053f, 48.5569f, 68.8537f;
				case 2:
					return -1302.619f, 59.7101f, 67.9933f;
				case 3:
					return -1289.288f, 23.9414f, 54.5197f;
				case 4:
					return -1276.215f, 50.0829f, 68.8753f;
				case 5:
					return -1269.462f, 47.6513f, 68.8932f;
				case 6:
					return -1299.79f, 58.5882f, 68.1034f;
				case 7:
					return -1287.465f, 31.9564f, 55.4006f;
				case 8:
					return -1302.498f, 49.5016f, 64.5568f;
				case 9:
					return -1276.457f, 22.3006f, 51.6915f;
				case 10:
					return -1303.295f, 48.6405f, 64.2978f;
				case 11:
					return -1276.789f, 17.9585f, 51.5095f;
				case 12:
					return -1304.28f, 47.8441f, 64.1297f;
				case 13:
					return -1277.497f, 12.8436f, 51.6442f;
				case 14:
					return -1304.271f, 47.843f, 64.1267f;
				case 15:
					return -1277.497f, 12.8436f, 51.6442f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1275.11f, 50.3781f, 68.8596f;
				case 1:
					return -1274.762f, 43.5397f, 68.9114f;
				case 2:
					return -1302.026f, 59.7906f, 68.0557f;
				case 3:
					return -1266.126f, 18.1849f, 50.0428f;
				case 4:
					return -1272.264f, 50.9905f, 68.8133f;
				case 5:
					return -1272.497f, 45.0918f, 68.9713f;
				case 6:
					return -1301.012f, 58.928f, 68.0235f;
				case 7:
					return -1266.702f, 14.9217f, 49.9844f;
				case 8:
					return -1230.631f, 53.6273f, 44.0317f;
				case 9:
					return -1245.051f, 12.4746f, 47.2041f;
				case 10:
					return -1229.238f, 54.8197f, 43.8353f;
				case 11:
					return -1243.702f, 11.1343f, 46.8984f;
				case 12:
					return -1228.11f, 56.7175f, 43.5001f;
				case 13:
					return -1242.204f, 9.0779f, 46.616f;
				case 14:
					return -1228.093f, 56.7264f, 43.4958f;
				case 15:
					return -1242.211f, 9.0771f, 46.6168f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_565(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 167.0514f;
				case 1:
					return 173.0514f;
				case 2:
					return 231.0514f;
				case 3:
					return 229.9106f;
				case 4:
					return 167.0514f;
				case 5:
					return 175.0514f;
				case 6:
					return -124.9486f;
				case 7:
					return 225.9106f;
				case 8:
					return 201.9035f;
				case 9:
					return 187.9035f;
				case 10:
					return 193.9035f;
				case 11:
					return 193.9035f;
				case 12:
					return 193.0514f;
				case 13:
					return 187.0514f;
				case 14:
					return 35.0514f;
				case 15:
					return 89.0514f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 9.0514f;
				case 1:
					return -44.9486f;
				case 2:
					return -0.0894f;
				case 3:
					return 57.0514f;
				case 4:
					return 349.0514f;
				case 5:
					return 333.0514f;
				case 6:
					return 3.9106f;
				case 7:
					return 77.0514f;
				case 8:
					return 339.9035f;
				case 9:
					return 335.9035f;
				case 10:
					return 337.9036f;
				case 11:
					return 353.9036f;
				case 12:
					return 339.0514f;
				case 13:
					return 343.0514f;
				case 14:
					return 57.0514f;
				case 15:
					return 341.0514f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 147.051f;
				case 1:
					return 137.051f;
				case 2:
					return 145.051f;
				case 3:
					return -240.0898f;
				case 4:
					return 141.051f;
				case 5:
					return 135.051f;
				case 6:
					return 157.051f;
				case 7:
					return 99.9102f;
				case 8:
					return 165.9031f;
				case 9:
					return -170.0969f;
				case 10:
					return 165.9032f;
				case 11:
					return 183.9032f;
				case 12:
					return 163.051f;
				case 13:
					return 183.051f;
				case 14:
					return 131.051f;
				case 15:
					return 235.051f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 89.051f;
				case 1:
					return 65.051f;
				case 2:
					return 137.051f;
				case 3:
					return 77.051f;
				case 4:
					return 65.051f;
				case 5:
					return 65.051f;
				case 6:
					return 127.051f;
				case 7:
					return 185.9102f;
				case 8:
					return 129.9031f;
				case 9:
					return -278.0969f;
				case 10:
					return 129.9032f;
				case 11:
					return 55.9032f;
				case 12:
					return 131.051f;
				case 13:
					return 37.051f;
				case 14:
					return 131.051f;
				case 15:
					return 15.051f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 261.051f;
				case 1:
					return 259.051f;
				case 2:
					return 207.051f;
				case 3:
					return -210.0898f;
				case 4:
					return 261.051f;
				case 5:
					return 237.051f;
				case 6:
					return 187.051f;
				case 7:
					return 155.9102f;
				case 8:
					return 277.9031f;
				case 9:
					return -106.0969f;
				case 10:
					return 267.9032f;
				case 11:
					return 261.9032f;
				case 12:
					return 265.051f;
				case 13:
					return 269.051f;
				case 14:
					return 63.051f;
				case 15:
					return 23.051f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -98.949f;
				case 1:
					return -172.949f;
				case 2:
					return 179.051f;
				case 3:
					return -100.0898f;
				case 4:
					return 189.051f;
				case 5:
					return 215.051f;
				case 6:
					return 177.051f;
				case 7:
					return 259.9102f;
				case 8:
					return 199.9031f;
				case 9:
					return -166.0969f;
				case 10:
					return 203.9032f;
				case 11:
					return 197.9032f;
				case 12:
					return 205.051f;
				case 13:
					return 193.051f;
				case 14:
					return 209.051f;
				case 15:
					return 113.051f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 241.051f;
				case 1:
					return 253.051f;
				case 2:
					return 173.051f;
				case 3:
					return -108.0898f;
				case 4:
					return 253.051f;
				case 5:
					return 235.051f;
				case 6:
					return 147.051f;
				case 7:
					return 221.9102f;
				case 8:
					return 217.9031f;
				case 9:
					return -106.0969f;
				case 10:
					return 217.9032f;
				case 11:
					return 259.9032f;
				case 12:
					return 217.051f;
				case 13:
					return 261.051f;
				case 14:
					return 217.051f;
				case 15:
					return 261.051f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -178.949f;
				case 1:
					return -186.949f;
				case 2:
					return 157.051f;
				case 3:
					return -110.0898f;
				case 4:
					return 165.051f;
				case 5:
					return 181.051f;
				case 6:
					return 155.051f;
				case 7:
					return 255.9102f;
				case 8:
					return 179.9031f;
				case 9:
					return -248.0969f;
				case 10:
					return 175.9032f;
				case 11:
					return 133.9032f;
				case 12:
					return 185.051f;
				case 13:
					return 123.051f;
				case 14:
					return 189.051f;
				case 15:
					return 137.051f;
			}
			break;
	}
	return 0f;
}

