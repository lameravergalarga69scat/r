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
	struct<200> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 3, 0, 0, 0, -1082130432 } ;
	bool bLocal_474 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_474 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_474, 961, 0);
		if (bLocal_474)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (__LIB_17__::func_779(&ScriptParam_0))
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
								__LIB_2__::func_483(&Local_15, 1);
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
	__LIB_2__::func_484();
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
				vVar1 = { __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221) };
				vVar1 = { __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221) };
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
		iVar3 = __LIB_13__::func_582(iVar1);
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
			iVar3 = __LIB_13__::func_582(iVar1);
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
	iVar1 = __LIB_13__::func_582(iVar0);
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
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], true, true);
			switch (iVar0)
			{
				case 0:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 1:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 2:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
			}
			TASK::TASK_SET_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, false);
			__LIB_2__::func_133(Local_15[iVar0], func_126(&Local_15, iVar0), 0);
			__LIB_2__::func_28(&Local_15, iVar0, 64);
		}
		iVar0++;
	}
	return true;
}

bool func_23()
{
	__LIB_2__::func_375(&Local_15, 0);
	__LIB_2__::func_714(&(Local_274.f_150), 30f);
	if (Local_274.f_3 < 2)
	{
		if (func_133())
		{
			__LIB_0__::func_7(&Local_274, 64);
		}
		if (func_135())
		{
			__LIB_2__::func_691(&(Local_274.f_150), Local_15[1], 0, 30f);
			__LIB_2__::func_224(Local_15.f_151, 1);
			__LIB_0__::func_7(&Local_274, 2);
			__LIB_0__::func_613(&Local_274, 2);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_139())
			{
				if (__LIB_2__::func_666())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
				}
			}
			else if (func_141())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else if (__LIB_2__::func_157(Local_274.f_177[3], Global_36))
			{
				if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 7f || __LIB_2__::func_157(Local_274.f_177[4], Global_36))
				{
					func_144();
					__LIB_2__::func_529(&Local_15, 1);
					__LIB_2__::func_483(&Local_15, 1);
					__LIB_0__::func_613(&Local_274, 1);
				}
			}
			break;
		case 1:
			if (func_145())
			{
			}
			break;
		case 2:
			func_146();
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
	__LIB_2__::func_375(&Local_15, 0);
	func_158();
	func_159();
	__LIB_2__::func_527(&(Local_274.f_5));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!Local_274.f_195[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
			{
				if (__LIB_2__::func_398(Local_15[iVar0]))
				{
					__LIB_2__::func_603(&(Local_15[iVar0]), &(Local_274.f_46[iVar0 /*21*/]), &(Local_274.f_46.f_64), 1, 1);
					Local_274.f_195[iVar0] = 1;
				}
			}
			else
			{
				Local_274.f_195[iVar0] = 1;
			}
		}
		__LIB_2__::func_399(&Local_15, iVar0, Local_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_0__::func_614(&Local_274, 1);
			break;
		case 1:
			__LIB_0__::func_614(&Local_274, 2);
			break;
		case 2:
			if (((Local_15.f_222 % 2) == 0 && func_165(&Local_15, &(Local_274.f_193), &(Local_274.f_152[4 /*3*/]), "AMBUSH_NR1_FLEE", 5f)) || ((Local_15.f_222 % 2) == 1 && func_165(&Local_15, &(Local_274.f_193), &(Local_274.f_152[4 /*3*/]), "AMBUSH_NR2_FLEE", 5f)))
			{
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
	func_186(1);
	__LIB_2__::func_503(&Local_15, 1);
	__LIB_2__::func_632(&Local_15, Local_274.f_177[0]);
	__LIB_17__::func_771(&(Local_274.f_150), &Local_15);
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
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(34, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(34, 1, Local_15.f_221), true))
	{
		__LIB_0__::func_7(&Local_274, 1);
	}
	Local_15.f_215 = 3;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 3;
	Local_15.f_181 = -1;
	func_237();
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_41(&(Local_15.f_182), 1, 2.5f, 1.75f, 2f, 2.001f, 128);
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_1)
	{
		case 0:
			__LIB_2__::func_187();
			func_247(&Local_15);
			Local_274.f_1 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!func_249(&Local_15))
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
	return func_250(iVar0);
}

int func_97(int iParam0)
{
	return joaat("G_M_M_UNICRIMINALS_01");
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_252(&Local_274, iVar0);
}

float func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_253(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_256(&Local_274, iVar0);
}

float func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_257(&Local_274, iVar0);
}

char* func_126(var uParam0, int iParam1)
{
	switch ((uParam0->f_222 % 2))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "1064_G_M_M_UniCriminals_01_BLACK_03";
				case 1:
					return "1065_G_M_M_UniCriminals_01_BLACK_04";
				case 2:
					return "1064_G_M_M_UniCriminals_01_BLACK_03";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "1059_G_M_M_UniCriminals_01_WHITE_06";
				case 1:
					return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
				case 2:
					return "1059_G_M_M_UniCriminals_01_WHITE_06";
				default:
					break;
			}
			break;
	}
	return "NULL VOICE";
}

bool func_133()
{
	if (!Local_274.f_5.f_4)
	{
		if (func_270())
		{
			return true;
		}
	}
	else if (func_271())
	{
		return true;
	}
	if (__LIB_0__::func_51(&Local_274, 8))
	{
		return true;
	}
	return false;
}

bool func_135()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_653(Local_15[iVar0], 0, &(Local_15.f_152), &(Local_15.f_180), 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	if (__LIB_0__::func_51(&Local_274, 64) || __LIB_0__::func_51(&Local_274, 4))
	{
		return true;
	}
	if (Local_274.f_2 > 1)
	{
		if (__LIB_2__::func_477(&Local_15))
		{
			return true;
		}
	}
	return false;
}

bool func_139()
{
	if (__LIB_1__::func_205(Global_35, Local_274.f_177[2], 1, 0))
	{
		return true;
	}
	return false;
}

bool func_141()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_177[2], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_177[1], 1, 0))
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

void func_144()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		vVar0 = { func_280(&Local_274, 0) };
		fVar3 = func_281(&Local_274, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
		PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15[0], vVar0, 3f, 20000, 0.25f, 2048, fVar3);
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 2048, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_15[0], &iVar4, 0, 0, 1, 1);
		if ((Local_15.f_222 % 2) == 0)
		{
			func_282(Local_15[0], Global_35, "AMBUSH_NR1_WARN", 1744022339, -1082130432 /* Float: -1f */, 1);
		}
		else
		{
			func_282(Local_15[0], Global_35, "AMBUSH_NR2_TRIGGER", 1744022339, -1082130432 /* Float: -1f */, 1);
		}
	}
	if (__LIB_2__::func_1(Local_15[1], 0, 0))
	{
		vVar0 = { func_280(&Local_274, 1) };
		fVar3 = func_281(&Local_274, 1);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[1], false, 0, false);
		PED::_0x8ACC0506743A8A5C(Local_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 2048, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_15[1], &iVar4, 0, 0, 1, 1);
	}
	if (__LIB_2__::func_1(Local_15[2], 0, 0))
	{
		vVar0 = { func_280(&Local_274, 2) };
		fVar3 = func_281(&Local_274, 2);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[2], false, 0, false);
		PED::_0x8ACC0506743A8A5C(Local_15[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 2048, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_15[2], &iVar4, 0, 0, 1, 1);
	}
}

bool func_145()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	char* sVar8;
	__LIB_2__::func_714(&(Local_274.f_150), 40f);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	__LIB_2__::func_527(&(Local_274.f_5));
	if (!__LIB_0__::func_51(&Local_274, 1024))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_177[6], Global_36))
		{
			__LIB_0__::func_7(&Local_274, 1024);
		}
	}
	iVar1 = -1;
	if (Local_274.f_2 > 0)
	{
		iVar1 = func_283(&(Local_274.f_46));
		if (iVar1 == 1)
		{
			__LIB_0__::func_7(&Local_274, 64);
			return false;
		}
	}
	switch (Local_274.f_2)
	{
		case 0:
			if (__LIB_2__::func_227(0f, 1, Local_15[0], 1))
			{
				if ((Local_15.f_222 % 2) == 0)
				{
					func_282(Local_15[0], Global_35, "AMBUSH_NR1_TRIGGER", 1744022339, -1082130432 /* Float: -1f */, 1);
				}
				else
				{
					func_282(Local_15[0], Global_35, "AMBUSH_NR2_WARN", 1744022339, -1082130432 /* Float: -1f */, 1);
				}
				func_285(&Local_15, &(Local_274.f_46));
				__LIB_1__::func_148(&(Local_274.f_152[1 /*3*/]));
				__LIB_1__::func_148(&(Local_274.f_152[2 /*3*/]));
				if (Global_1935630.f_40 != 0)
				{
					Local_274.f_194 = 1;
				}
				__LIB_2__::func_282(&Local_15, 0);
				Local_274.f_199 = func_286();
				__LIB_0__::func_612(&Local_274, 1);
			}
			break;
		case 1:
			if (!__LIB_2__::func_458(&Local_15, 1, 1) && PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				func_289();
				__LIB_0__::func_612(&Local_274, 4);
			}
			else
			{
				__LIB_2__::func_510(&Local_15);
				if (__LIB_1__::func_285(&(Local_274.f_152[1 /*3*/]), 4.5f) && !func_291(&(Local_274.f_46)))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, -1, false, 1);
					if (__LIB_2__::func_458(&Local_15, 1, 1))
					{
						if ((Local_15.f_222 % 2) == 0)
						{
							func_282(Local_15[0], Global_35, "AMBUSH_NR1_OFFHORSE", 1744022339, -1082130432 /* Float: -1f */, 1);
						}
						else
						{
							func_282(Local_15[0], Global_35, "AMBUSH_NR2_OFFHORSE", 1744022339, -1082130432 /* Float: -1f */, 1);
						}
					}
					else if ((Local_15.f_222 % 2) == 0)
					{
						func_282(Local_15[0], Global_35, "HANDS_UP", 1744022339, -1082130432 /* Float: -1f */, 1);
					}
					else
					{
						func_282(Local_15[0], Global_35, "HANDS_UP", 1744022339, -1082130432 /* Float: -1f */, 1);
					}
					__LIB_2__::func_691(&(Local_274.f_150), Local_15[1], 1, 30f);
					PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), func_292());
					__LIB_1__::func_148(&(Local_274.f_152[1 /*3*/]));
					__LIB_1__::func_283(&(Local_274.f_152[7 /*3*/]), 0);
					__LIB_0__::func_612(&Local_274, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_2__::func_458(&Local_15, 1, 1) && PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				func_289();
				__LIB_0__::func_612(&Local_274, 4);
			}
			else
			{
				fVar2 = 9f;
				__LIB_2__::func_510(&Local_15);
				if (((func_293(fVar2) && __LIB_2__::func_227(0f, 1, Local_15[1], 1)) && __LIB_2__::func_227(0f, 1, Local_15[0], 1)) && __LIB_2__::func_227(0f, 1, Local_15[2], 1))
				{
					__LIB_1__::func_148(&(Local_274.f_152[1 /*3*/]));
					__LIB_1__::func_148(&(Local_274.f_152[7 /*3*/]));
					if ((Local_15.f_222 % 2) == 0)
					{
						func_282(Local_15[1], Global_35, "AMBUSH_NR1_OFFHORSEB", 1744022339, -1082130432 /* Float: -1f */, 1);
					}
					else
					{
						func_282(Local_15[1], Global_35, "AMBUSH_NR2_OFFHORSEB", 1744022339, -1082130432 /* Float: -1f */, 1);
					}
					__LIB_0__::func_612(&Local_274, 3);
				}
			}
			break;
		case 3:
			if (!__LIB_2__::func_458(&Local_15, 1, 1) && PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				func_289();
				__LIB_0__::func_612(&Local_274, 4);
			}
			else
			{
				__LIB_2__::func_510(&Local_15);
				fVar2 = 8f;
				if (((func_293(fVar2) && __LIB_2__::func_227(0f, 1, Local_15[1], 1)) && __LIB_2__::func_227(0f, 1, Local_15[0], 1)) && __LIB_2__::func_227(0f, 1, Local_15[2], 1))
				{
					__LIB_2__::func_691(&(Local_274.f_150), Local_15[1], 0, 30f);
					__LIB_0__::func_7(&Local_274, 8);
					return false;
				}
			}
			break;
		case 4:
			func_294();
			if (__LIB_0__::func_86(Local_274.f_190))
			{
				__LIB_0__::func_172(Local_274.f_177[6]);
				Local_274.f_190 = { Global_36 };
				Local_274.f_177[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Local_274.f_190, 0f, 0f, 0f, 3f, 3f, 5f, "volRobArea");
			}
			if (!__LIB_0__::func_51(&Local_274, 2048))
			{
				fVar7 = __LIB_0__::func_152(ENTITY::GET_ENTITY_COORDS(Local_15[1], true, false), Global_36, 1);
				vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_15[1], true, false), fVar7, 0f, 1.5f, 0f) };
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar4, 1f, 20000, 0.5f, 1, 40000f);
				if (Local_15.f_9[1] > 4f)
				{
					TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, 20000, 4f, 1.5f, 0);
				}
				TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, 20000, 2f, 1f, 0);
				__LIB_1__::func_474(Local_15[1], &iVar3, 0.5f, 0, 1, 1);
				__LIB_0__::func_7(&Local_274, 2048);
			}
			else
			{
				__LIB_1__::func_283(&(Local_274.f_152[6 /*3*/]), 0);
				if (__LIB_1__::func_313(&(Local_274.f_152[6 /*3*/]), 1.5f))
				{
					PED::_0x8ACC0506743A8A5C(Local_15[1], joaat("ROBPED"), 1, -1082130432 /* Float: -1f */);
				}
			}
			if (__LIB_1__::func_285(&(Local_274.f_152[1 /*3*/]), 3.5f))
			{
				__LIB_1__::func_148(&(Local_274.f_152[1 /*3*/]));
				if ((Local_15.f_222 % 2) == 0)
				{
					func_282(Local_15[0], Global_35, "AMBUSH_NR1_DISMOUNTB", 1744022339, -1082130432 /* Float: -1f */, 1);
				}
				else
				{
					func_282(Local_15[0], Global_35, "AMBUSH_NR2_DISMOUNTB", 1744022339, -1082130432 /* Float: -1f */, 1);
				}
				__LIB_0__::func_612(&Local_274, 5);
			}
			break;
		case 5:
			func_294();
			if (__LIB_1__::func_285(&(Local_274.f_152[1 /*3*/]), 3.5f) && func_298())
			{
				if (func_299(Local_15[1], &(Local_274.f_5), 0.2f, 1, 0, 18, 0, 0, 0, -1, 0, 1))
				{
					if (Local_274.f_5.f_4)
					{
						Local_274.f_177[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Global_36, 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 1f, 2.5f, 2f, "volPlayerBlocker");
						PATHFIND::_0x19C7567D2F2287D6(Local_274.f_177[5], 7);
						__LIB_2__::func_469();
						__LIB_1__::func_148(&(Local_274.f_152[1 /*3*/]));
						__LIB_2__::func_282(&Local_15, 1);
						__LIB_0__::func_612(&Local_274, 6);
					}
					else
					{
						__LIB_1__::func_283(&(Local_274.f_152[3 /*3*/]), 0);
						__LIB_0__::func_613(&Local_274, 2);
					}
					__LIB_2__::func_503(&Local_15, 0);
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_274.f_190, false) > 1f && ((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35)))
			{
				__LIB_1__::func_283(&(Local_274.f_152[3 /*3*/]), 0);
				__LIB_2__::func_503(&Local_15, 1);
				__LIB_0__::func_613(&Local_274, 2);
			}
			break;
		case 6:
			if (__LIB_1__::func_285(&(Local_274.f_152[1 /*3*/]), 0.1f))
			{
				if (!__LIB_0__::func_51(&Local_274, 512))
				{
					sVar8 = "AMBUSH_NR1_ROBEND";
					if ((Local_15.f_222 % 2) != 0)
					{
						sVar8 = "AMBUSH_NR2_ROBEND";
					}
					if (func_282(Local_15[1], Global_35, sVar8, 1744022339, -1082130432 /* Float: -1f */, 1))
					{
						__LIB_0__::func_7(&Local_274, 512);
					}
				}
				func_301(&(Local_274.f_42), 5000);
				if (!__LIB_0__::func_51(&Local_274, 32))
				{
					func_302();
					__LIB_0__::func_7(&Local_274, 32);
				}
				else if (__LIB_2__::func_625(&Local_15, 0, 2) > 15f)
				{
					__LIB_2__::func_147(&Local_15, 1048576);
					__LIB_2__::func_632(&Local_15, Local_274.f_177[0]);
					__LIB_0__::func_612(&Local_274, 7);
				}
			}
			break;
		case 7:
			func_186(0);
			__LIB_2__::func_632(&Local_15, Local_274.f_177[0]);
			break;
		case 8:
			return true;
	}
	return false;
}

void func_146()
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!__LIB_0__::func_51(&Local_274, 128))
			{
				if (func_304(iVar0))
				{
					__LIB_0__::func_7(&Local_274, 128);
				}
			}
			PED::_0x78815FC52832B690(Local_15[iVar0], 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			PED::SET_COMBAT_FLOAT(Local_15[iVar0], 32, MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f));
			if (__LIB_0__::func_75(&(Local_274.f_152[3 /*3*/])))
			{
				switch (iVar0)
				{
					case 0:
						fVar1 = 1.3f;
						break;
					case 1:
						fVar1 = 0.5f;
						break;
					case 2:
						fVar1 = 1.2f;
						break;
				}
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						fVar1 = 0.5f;
						break;
					case 1:
						fVar1 = 0.3f;
						break;
					case 2:
						fVar1 = 0.4f;
						break;
				}
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar2, fVar1, 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_632(&Local_15, Local_274.f_177[0]);
	__LIB_1__::func_283(&(Local_274.f_152[0 /*3*/]), 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
}

void func_158()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_323(iVar0))
		{
			PED::SET_PED_RESET_FLAG(Local_15[iVar0], 27, true);
		}
		iVar0++;
	}
}

void func_159()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
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

bool func_165(var uParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (*uParam1 < 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_215)
		{
			if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
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
				if (!__LIB_2__::func_25(uParam0, iVar2, 1))
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
			if (__LIB_2__::func_1((*uParam0)[*uParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2((*uParam0)[*uParam1], Global_35, 1, 0);
			}
		}
		__LIB_1__::func_283(uParam2, 0);
		if (__LIB_1__::func_285(uParam2, fParam4))
		{
			if (__LIB_2__::func_1((*uParam0)[*uParam1], 0, 1))
			{
				if (__LIB_2__::func_712(uParam0, *uParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED((*uParam0)[*uParam1], Global_35, 4, 524292, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK((*uParam0)[*uParam1], true);
					__LIB_1__::func_733((*uParam0)[*uParam1]);
					__LIB_2__::func_56((*uParam0)[*uParam1], 0, 1);
					__LIB_2__::func_478((*uParam0)[*uParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_186(bool bParam0)
{
	if (__LIB_0__::func_27(Local_274.f_42, 4))
	{
		__LIB_1__::func_538(0);
		if (!PED::IS_PED_RAGDOLL(Global_35) || bParam0)
		{
			__LIB_0__::func_516(&(Local_274.f_42), 4);
		}
	}
}

void func_237()
{
	func_382();
	if (__LIB_0__::func_51(&Local_274, 1))
	{
		Local_274.f_177[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1917.427f, 1659.067f, 175.5751f, 0f, 0f, -130.5092f, 31.76979f, 29.21588f, 22.22421f, "volTrigger");
		Local_274.f_177[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1907.16f, 1647.049f, 175.5751f, 0f, 0f, -130.5092f, 19.98332f, 29.21588f, 22.22421f, "volTriggerSlow");
		Local_274.f_177[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1909.98f, 1653.971f, 173.1068f, 0f, 0f, 0f, 16f, 16f, 5f, "volStayout");
	}
	else
	{
		Local_274.f_177[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1886.771f, 1635.873f, 171.8536f, 0f, 0f, 32.133f, 21.90128f, 29.21588f, 10f, "volTrigger");
		Local_274.f_177[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1892.224f, 1638.8f, 175.5751f, 0f, 0f, -149.5119f, 19.98332f, 29.21588f, 22.22421f, "volTriggerSlow");
		Local_274.f_177[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1905.804f, 1644.658f, 170.5149f, 0f, 0f, 0f, 16f, 16f, 5f, "volStayout");
	}
}

void func_247(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar0 = __LIB_13__::func_582(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_249(var uParam0)
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
		iVar0 = __LIB_13__::func_582(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_13__::func_582(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_250(int iParam0)
{
	switch ((Local_15.f_222 % 2))
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 41792611;
				case 1:
					return 148685433;
				case 2:
					return 1013967228;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -256765748;
				case 1:
					return 453142212;
				case 2:
					return 1317506479;
				default:
					break;
			}
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_252(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_393(0, 6);
			case 1:
				return func_393(0, 7);
			case 2:
				return func_393(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_393(1, 6);
			case 1:
				return func_393(1, 7);
			case 2:
				return func_393(1, 8);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_253(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_394(0, 6);
			case 1:
				return func_394(0, 7);
			case 2:
				return func_394(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_394(1, 6);
			case 1:
				return func_394(1, 7);
			case 2:
				return func_394(1, 8);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_256(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_393(0, 0);
			case 1:
				return func_393(0, 2);
			case 2:
				return func_393(0, 1);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_393(1, 0);
			case 1:
				return func_393(1, 2);
			case 2:
				return func_393(1, 1);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_257(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_394(0, 0);
			case 1:
				return func_394(0, 2);
			case 2:
				return func_394(0, 1);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_394(1, 0);
			case 1:
				return func_394(1, 2);
			case 2:
				return func_394(1, 1);
			default:
				break;
		}
	}
	return 0f;
}

bool func_270()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (__LIB_0__::func_94(Global_35, func_280(&Local_274, iVar0), 0) < 2f || PED::IS_PED_RAGDOLL(Local_15[iVar0]))
			{
				return true;
			}
		}
		iVar0++;
	}
	if (__LIB_1__::func_285(&(Local_274.f_152[2 /*3*/]), 2f))
	{
		if (__LIB_0__::func_51(&Local_274, 1024))
		{
			if (!__LIB_2__::func_157(Local_274.f_177[6], Global_36))
			{
				return true;
			}
		}
		if (Local_274.f_199 + 3f) < func_286()
		{
			return true;
		}
	}
	if (Local_274.f_2 < 4)
	{
		if (__LIB_1__::func_285(&(Local_274.f_152[2 /*3*/]), 2f))
		{
			if (__LIB_2__::func_157(Local_274.f_177[7], Global_36))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_271()
{
	if (func_412())
	{
		if (__LIB_0__::func_94(Global_35, Local_274.f_190, 0) > 5f && __LIB_2__::func_625(&Local_15, 0, 2) < 15f)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_280(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_393(0, 3);
			case 1:
				return func_393(0, 4);
			case 2:
				return func_393(0, 5);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_393(1, 3);
			case 1:
				return func_393(1, 4);
			case 2:
				return func_393(1, 5);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_281(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_394(0, 3);
			case 1:
				return func_394(0, 4);
			case 2:
				return func_394(0, 5);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_394(1, 3);
			case 1:
				return func_394(1, 4);
			case 2:
				return func_394(1, 5);
			default:
				break;
		}
	}
	return 0f;
}

bool func_282(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	return __LIB_2__::func_478(iParam0, iParam1, sParam2, 0, fParam4, 0, 0, 0, 1, 1, bParam5, iParam3, 1, 0, 0);
}

int func_283(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = 524288 | __LIB_2__::func_340(3, 0, 0);
	iVar5 = 1;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15[iVar1]))
		{
		}
		else
		{
			iVar0 = func_453(&(Local_15[iVar1]), uParam0[iVar1 /*21*/], 20f, &(uParam0->f_64), &iVar5, 4f, 3, 0, 0, iVar4, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(uParam0[iVar1 /*21*/]))
			{
				if (uParam0->f_100 == -1)
				{
					uParam0->f_100 = iVar1;
				}
				iVar3 = (uParam0[iVar1 /*21*/])->f_1;
				switch (iVar3)
				{
					case 0:
						if (!__LIB_2__::func_572(&(uParam0->f_64[0 /*17*/]), 0))
						{
							__LIB_2__::func_482(&(uParam0->f_64[0 /*17*/]), 1, 1);
						}
						break;
					case 1:
						if (!__LIB_2__::func_572(&(uParam0->f_64[1 /*17*/]), 0))
						{
							__LIB_2__::func_691(&(Local_274.f_150), Local_15[1], 0, 20f);
							__LIB_2__::func_482(&(uParam0->f_64[1 /*17*/]), 1, 1);
						}
						break;
				}
				switch (iVar3)
				{
					case 0:
					case 1:
						func_457(uParam0, 0, 1);
						break;
				}
			}
			if (iVar0 != -1)
			{
				iVar2 = iVar0;
				uParam0->f_99 = iVar2;
				switch (iVar2)
				{
					case 0:
						break;
					case 1:
						uParam0->f_103++;
						break;
				}
				uParam0->f_101 = 0;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_285(int iParam0, var uParam1)
{
	char* sVar0[2];
	char* sVar3[2];
	var uVar6[2];
	sVar0[0] = __LIB_2__::func_460(8);
	sVar0[1] = __LIB_2__::func_460(10);
	switch (iParam0->f_222)
	{
		case 0:
			sVar3[0] = "";
			sVar3[1] = "AMBUSH_NR1_ANTAGONIZE";
			break;
		case 1:
			sVar3[0] = "";
			sVar3[1] = "AMBUSH_NR2_ANTAGONIZE";
			break;
	}
	func_461(&(uParam1->f_64[0 /*17*/]), sVar0[0], sVar3[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, uVar6[0]);
	func_461(&(uParam1->f_64[1 /*17*/]), sVar0[1], sVar3[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, uVar6[1]);
	__LIB_2__::func_482(&(uParam1->f_64[0 /*17*/]), 1, 1);
}

float func_286()
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_280(&Local_274, 0), true);
}

void func_289()
{
	int iVar0;
	__LIB_2__::func_503(&Local_15, 0);
	func_462(&Local_15, &Local_274);
	__LIB_1__::func_148(&(Local_274.f_152[1 /*3*/]));
	__LIB_2__::func_691(&(Local_274.f_150), Local_15[1], 0, 30f);
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_15[1], 7000, 0, 51, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	}
	if (__LIB_2__::func_1(Local_15[1], 0, 0))
	{
		__LIB_2__::func_45(0, Local_15[1], 2000);
	}
	__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
}

bool func_291(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_341(uParam0[iVar0 /*21*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_292()
{
	switch ((Local_15.f_222 % 2))
	{
		case 0:
			return "AMBUSH_NR1_DISMOUNT";
		case 1:
			return "AMBUSH_NR2_DISMOUNT";
		default:
			break;
	}
	return "AMBUSH_PLAYER_SURRENDER";
}

int func_293(float fParam0)
{
	return __LIB_2__::func_689(&Local_15, Local_274.f_152[7 /*3*/], fParam0);
}

void func_294()
{
	vector3 vVar0;
	if (Local_274.f_194)
	{
		vVar0 = { func_466(&Local_274) };
	}
	__LIB_2__::func_517(&Local_15, Local_274.f_177[0], vVar0, 1.501f, 1097859072 /* Float: 15f */, 1065353216 /* Float: 1f */, 1);
}

bool func_298()
{
	if (Local_274.f_5 > 0)
	{
		return true;
	}
	if (__LIB_2__::func_458(&Local_15, 0, 0))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0f, 1, Global_35, 1))
	{
		return false;
	}
	return true;
}

bool func_299(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
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
						__LIB_2__::func_478(iParam0, Global_35, uParam1->f_16, 0, -1082130432 /* Float: -1f */, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
				if (__LIB_2__::func_694(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
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
						__LIB_2__::func_478(Global_35, iParam0, uParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
					func_479(iParam6, 1, 0, -142743235, 0);
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
						__LIB_2__::func_478(iParam0, Global_35, uParam1->f_17, 0, -1082130432 /* Float: -1f */, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
							__LIB_2__::func_478(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (__LIB_2__::func_227(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_2__::func_478(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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
						__LIB_2__::func_478(iParam0, Global_35, uParam1->f_19, 0, -1082130432 /* Float: -1f */, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_301(int iParam0, int iParam1)
{
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (((__LIB_0__::func_27(*iParam0, 1) || PED::IS_PED_PRONE(Global_35)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_re@mech_patdown", "loot_pistol_whip_fall_player", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, "script_re@mech_patdown", "loot_pistol_whip_fall_player") > 0.35f)) || __LIB_1__::func_285(&(iParam0->f_1), 2f))
	{
		if (!__LIB_0__::func_27(*iParam0, 2))
		{
			__LIB_1__::func_336(iParam0, 2);
		}
		if (!__LIB_0__::func_27(*iParam0, 1))
		{
			__LIB_1__::func_336(iParam0, 4);
			PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, iParam1, iParam1, 2, -0.447214f, -0.894427f, 0f, 2f, 0f, 0f, 0f, 0f, 0f, 0f);
			__LIB_1__::func_336(iParam0, 1);
		}
		else
		{
			PED::SET_PED_TO_RAGDOLL(Global_35, iParam1, iParam1, 0, false, false, false);
		}
	}
}

void func_302()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	fVar4 = 0f;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			vVar1 = { func_485(&Local_274, iVar0) };
			switch (iVar0)
			{
				case 0:
					fVar4 = 0.1f;
					break;
				case 1:
					fVar4 = 1f;
					break;
				case 2:
					fVar4 = 0.3f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar5);
			if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
			{
				TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar0], 20000, -1, 3f, 1, 0, 0);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(0, Global_35, 4, vVar1, 128, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar5, fVar4, 0, 1, 1);
		}
		iVar0++;
	}
}

bool func_304(int iParam0)
{
	char* sVar0;
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_15[iParam0]) || PED::IS_PED_RAGDOLL(Local_15[iParam0]))
	{
		return false;
	}
	if ((Local_15.f_222 % 2) == 0)
	{
		if (Local_274.f_5.f_4)
		{
			sVar0 = "AMBUSH_NR1_PCOMBAT";
		}
		else if (__LIB_0__::func_51(&Local_274, 4))
		{
			sVar0 = "AMBUSH_NR1_BYPASS";
		}
		else if (__LIB_0__::func_51(&Local_274, 8))
		{
			sVar0 = "AMBUSH_NR1_OFFHORSEAGGRO";
		}
		else if (__LIB_0__::func_51(&Local_274, 64))
		{
			sVar0 = "AMBUSH_NR1_ECOMBAT";
		}
		else
		{
			sVar0 = "AMBUSH_NR1_ECOMBAT";
		}
	}
	else if (Local_274.f_5.f_4)
	{
		sVar0 = "AMBUSH_NR2_PCOMBAT";
	}
	else if (__LIB_0__::func_51(&Local_274, 4))
	{
		sVar0 = "AMBUSH_NR2_BYPASS";
	}
	else if (__LIB_0__::func_51(&Local_274, 8))
	{
		sVar0 = "AMBUSH_NR2_OFFHORSEAGGRO";
	}
	else if (__LIB_0__::func_51(&Local_274, 64))
	{
		sVar0 = "AMBUSH_NR2_ECOMBAT";
	}
	else
	{
		sVar0 = "AMBUSH_NR2_ECOMBAT";
	}
	func_282(Local_15[iParam0], Global_35, sVar0, 1744022339, -1082130432 /* Float: -1f */, 1);
	return true;
}

bool func_323(int iParam0)
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
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 1f;
			break;
		case 2:
			fVar0 = 1.25f;
			break;
	}
	if (__LIB_1__::func_285(&(Local_274.f_152[0 /*3*/]), fVar0))
	{
		return false;
	}
	return true;
}

void func_382()
{
	Local_15.f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1899.295f, 1646.945f, 166.9597f, 0f, 0f, 40.32086f, 182.0176f, 35.77689f, 40.60634f, "volAmbientKillArea");
	if (__LIB_0__::func_51(&Local_274, 1))
	{
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1932.242f, 1676.498f, 166.9597f, 0f, 0f, 49.32085f, 21.90128f, 119.225f, 40.60634f, "volSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1921.102f, 1663.536f, 166.9597f, 0f, 0f, 49.32085f, 21.90128f, 119.225f, 40.60634f, "volSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1913.386f, 1654.56f, 166.9597f, 0f, 0f, 49.32085f, 21.90128f, 119.225f, 40.60634f, "volSlowest");
		Local_274.f_177[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[1], 1799.828f, 1718.499f, 193.5166f, 0f, 0f, -107.4732f, 82.12775f, 214.646f, 65f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[1], 1967.212f, 1542.564f, 193.253f, 0f, 0f, -171.144f, 59.48241f, 214.646f, 65f);
		Local_274.f_177[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[2], 1895.562f, 1675.1f, 181.7123f, 0f, 0f, 22.08745f, 31.98403f, 33.48726f, 26.43057f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[2], 1936.318f, 1636.707f, 179.3752f, 0f, 0f, 35.08076f, 21.90128f, 33.48726f, 28.76033f);
		Local_274.f_177[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1909.98f, 1649.126f, 173.1068f, 0f, 0f, 0f, 12f, 12f, 5f, "volRobberyArea");
		Local_274.f_177[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGriefArea");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[7], 1893.538f, 1671.172f, 166.9597f, 0f, 0f, -40.3427f, 21.90128f, 77.23001f, 40.60634f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[7], 1943.282f, 1672.961f, 166.9597f, 0f, 0f, -130.3425f, 21.90128f, 119.225f, 40.60634f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[7], 1901.947f, 1624.293f, 166.9597f, 0f, 0f, -130.3425f, 21.90128f, 119.225f, 40.60634f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[7], 1933.068f, 1637.597f, 166.9597f, 0f, 0f, -40.3427f, 21.90128f, 77.23001f, 40.60634f);
	}
	else
	{
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1887.968f, 1621.25f, 166.9597f, 0f, 0f, -144.5388f, 21.90128f, 119.225f, 40.60634f, "volSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1895.908f, 1631.77f, 166.9597f, 0f, 0f, -139.5869f, 21.90128f, 119.225f, 40.60634f, "volSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1903.356f, 1640.043f, 166.9597f, 0f, 0f, -134.569f, 21.90128f, 119.225f, 40.60634f, "volSlowest");
		Local_274.f_177[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[1], 1867.989f, 1765.425f, 193.5166f, 0f, 0f, -101.5491f, 191.6403f, 61.65285f, 65f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[1], 1905.538f, 1525.867f, 193.253f, 0f, 0f, 164.5224f, 59.48241f, 214.646f, 65f);
		Local_274.f_177[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[2], 1887.444f, 1669.839f, 181.7123f, 0f, 0f, 22.08745f, 31.98403f, 33.48726f, 26.43057f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[2], 1908.39f, 1614.273f, 179.3752f, 0f, 0f, 35.08076f, 21.90128f, 33.48726f, 28.76033f);
		Local_274.f_177[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1898.839f, 1637.837f, 171.8147f, 0f, 0f, 0f, 12f, 12f, 5f, "volRobberyArea");
		Local_274.f_177[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGriefArea");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[7], 1871.955f, 1660.932f, 166.9597f, 0f, 0f, -54.53901f, 21.90128f, 77.23001f, 40.60634f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[7], 1921.896f, 1645.416f, 166.9597f, 0f, 0f, -144.5388f, 21.90128f, 119.225f, 40.60634f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[7], 1872.114f, 1609.958f, 166.9597f, 0f, 0f, -144.5388f, 21.90128f, 119.225f, 40.60634f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_177[7], 1906.037f, 1613.081f, 166.9597f, 0f, 0f, -54.53901f, 21.90128f, 77.23001f, 40.60634f);
	}
}

Vector3 func_393(int iParam0, int iParam1)
{
	return func_513(iParam0, iParam1);
}

float func_394(int iParam0, int iParam1)
{
	return func_514(iParam0, iParam1);
}

bool func_412()
{
	int iVar0;
	if (__LIB_0__::func_51(&Local_274, 256))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_0__::func_71(Local_15[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	__LIB_0__::func_7(&Local_274, 256);
	return true;
}

int func_453(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_582(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
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

void func_457(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_588(uParam0, 0))
		{
			func_589(uParam0, 0, 1);
		}
		if (!func_588(uParam0, 1))
		{
			func_589(uParam0, 1, 1);
		}
	}
	else
	{
		if (bParam2 || func_588(uParam0, 0))
		{
			func_589(uParam0, 0, 0);
		}
		if (bParam2 || func_588(uParam0, 1))
		{
			func_589(uParam0, 1, 0);
		}
	}
}

void func_461(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, var uParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = uParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				__LIB_1__::func_483(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				__LIB_1__::func_484(iParam0->f_6, iParam0->f_5, 0);
			}
			__LIB_1__::func_221(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		__LIB_2__::func_360(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_462(var uParam0, var uParam1)
{
	switch ((uParam0->f_222 % 2))
	{
		case 0:
			uParam1->f_5.f_16 = "AMBUSH_NR1_ROBSTART";
			uParam1->f_5.f_18 = "AMBUSH_NR1_ROB";
			break;
		case 1:
			uParam1->f_5.f_16 = "AMBUSH_NR2_ROBSTART";
			uParam1->f_5.f_18 = "";
			break;
	}
}

Vector3 func_466(var uParam0)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		return func_393(0, 10);
	}
	return func_393(1, 10);
}

int func_479(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_479(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

Vector3 func_485(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		return func_393(0, 9);
	}
	else
	{
		return func_393(1, 9);
	}
	return 0f, 0f, 0f;
}

Vector3 func_513(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1899.96f, 1632.955f, 169.9279f;
				case 1:
					return 1891.326f, 1652.762f, 168.7982f;
				case 2:
					return 1894.585f, 1641.113f, 168.7861f;
				case 3:
					return 1899.446f, 1636.839f, 169.3537f;
				case 4:
					return 1896.963f, 1639.138f, 169.1819f;
				case 5:
					return 1902.389f, 1654.121f, 169.6286f;
				case 6:
					return 1872.552f, 1638.252f, 168.2984f;
				case 7:
					return 1883.343f, 1617.913f, 170.0917f;
				case 8:
					return 1882.963f, 1620.497f, 169.4084f;
				case 9:
					return 1837.93f, 1606.776f, 168.317f;
				case 10:
					return 1913.715f, 1647.092f, 170.8069f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1913.594f, 1644.513f, 171.357f;
				case 1:
					return 1896.764f, 1658.977f, 170.1152f;
				case 2:
					return 1902.964f, 1650.179f, 169.8495f;
				case 3:
					return 1907.411f, 1645.354f, 170.1882f;
				case 4:
					return 1903.649f, 1647.04f, 170.2203f;
				case 5:
					return 1908.923f, 1654.496f, 169.9625f;
				case 6:
					return 1937.185f, 1655.756f, 174.1245f;
				case 7:
					return 1910.035f, 1676.881f, 171.9963f;
				case 8:
					return 1906.05f, 1669.186f, 171.7789f;
				case 9:
					return 1940.717f, 1684.231f, 169.3504f;
				case 10:
					return 1905.73f, 1639.744f, 170.2894f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 11.5655f;
				case 1:
					return 255.5655f;
				case 2:
					return -80.4345f;
				case 3:
					return -38.4345f;
				case 4:
					return -52.4345f;
				case 5:
					return 261.5655f;
				case 6:
					return 113.5264f;
				case 7:
					return 123.5264f;
				case 8:
					return 169.5264f;
				case 9:
					return 121.525f;
				case 10:
					return 195.3651f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 81.5655f;
				case 1:
					return 211.5655f;
				case 2:
					return 191.5655f;
				case 3:
					return 121.5655f;
				case 4:
					return 171.5655f;
				case 5:
					return 165.5655f;
				case 6:
					return 59.5264f;
				case 7:
					return 255.5264f;
				case 8:
					return 9.5264f;
				case 9:
					return 295.525f;
				case 10:
					return -55.619f;
			}
			break;
	}
	return 0f;
}

int func_582(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_582(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_588(var uParam0, int iParam1)
{
	if ((__LIB_2__::func_466(&(uParam0->f_64[iParam1 /*17*/]), 1, 0) && !__LIB_1__::func_489(&(uParam0->f_64[iParam1 /*17*/]), 4)) && !__LIB_1__::func_489(&(uParam0->f_64[iParam1 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

void func_589(var uParam0, int iParam1, bool bParam2)
{
	__LIB_2__::func_411(&(uParam0->f_64[iParam1 /*17*/]), bParam2, 0);
}

