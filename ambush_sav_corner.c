#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
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
	struct<71> Local_274 = { 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 4, 0, 0, 0, 0, 1, 0, 2, 0, 0, -1, 0, -1, 0, 0 } ;
	bool bLocal_345 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_345 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_345, 961, 0);
		if (bLocal_345)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (__LIB_17__::func_803(&ScriptParam_0))
				{
					__LIB_2__::func_233(&Local_15, 13);
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
					if (func_16())
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
					__LIB_2__::func_721();
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
		__LIB_2__::func_432(&(Local_15.f_152));
		__LIB_2__::func_433(&(Local_15.f_152));
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

bool func_16()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	iVar0 = Local_15.f_220;
	switch (iVar0)
	{
		case 0:
			if (__LIB_2__::func_275(&Local_274, 1))
			{
				vVar1 = { func_117(0, 9) };
				fVar4 = func_118(0, 9);
			}
			else
			{
				vVar1 = { func_117(3, 9) };
				fVar4 = func_118(3, 9);
			}
			break;
	}
	Local_274.f_61[iVar0] = PED::_0xEAF682A14F8E5F53(Local_274.f_13[iVar0], vVar1, fVar4, 1, 1, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_61[iVar0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_61[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(Local_274.f_61[iVar0], 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_274.f_61[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_274.f_61[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_274.f_61[iVar0], true, false);
		}
		PED::SET_PED_CONFIG_FLAG(Local_274.f_61[iVar0], 38, false);
	}
	else
	{
		Local_15.f_220 = (Local_15.f_220 - 1);
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= 1)
	{
		Local_15.f_220 = 0;
		return true;
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
	iVar1 = __LIB_2__::func_722(iVar0);
	vVar2 = { func_119(iVar0) };
	fVar5 = func_120(iVar0);
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
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
			iVar1 = func_128(iVar0);
			__LIB_2__::func_133(Local_15[iVar0], func_129(iVar1), 0);
			__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			switch (iVar0)
			{
				case 0:
					func_132(Local_15[iVar0], joaat("WEAPON_BOW"), 1, 0);
					break;
				case 1:
					func_132(Local_15[iVar0], joaat("WEAPON_BOW"), 1, 1);
					break;
				case 2:
					func_132(Local_15[iVar0], joaat("GROUP_REVOLVER"), 0, 1);
					break;
				case 3:
					func_132(Local_15[iVar0], joaat("GROUP_REPEATER"), 0, 1);
					break;
				case 4:
					func_132(Local_15[4], joaat("GROUP_SHOTGUN"), 0, 1);
					__LIB_1__::func_571(Local_15[4], Local_15.f_40[2], 0, -1, 1);
					break;
				case 5:
					func_132(Local_15[5], joaat("GROUP_REPEATER"), 0, 1);
					__LIB_1__::func_571(Local_15[5], Local_15.f_40[3], 0, -1, 1);
					break;
			}
		}
		iVar0++;
	}
	func_134();
	func_135();
	if (__LIB_2__::func_1(Local_274.f_61[0], 0, 1))
	{
		__LIB_2__::func_279(Local_274.f_61[0], 1);
	}
	return true;
}

bool func_23()
{
	switch (Local_274.f_9)
	{
		case 0:
			Local_274.f_9 = 1;
			break;
		case 1:
			func_139(0);
			if (func_140())
			{
				Local_274.f_9 = 2;
			}
			else if (!__LIB_2__::func_4(&Local_15, 16384))
			{
				if (func_141())
				{
					if (func_142())
					{
						__LIB_2__::func_224(Local_15.f_151, 1);
						__LIB_2__::func_277(&Local_274, 2);
						Local_274.f_9 = 2;
					}
				}
				else if (func_145())
				{
					if (__LIB_0__::func_0())
					{
						__LIB_2__::func_147(&Local_15, 16);
						__LIB_2__::func_233(&Local_15, 13);
					}
				}
			}
			break;
		case 2:
			func_147();
			func_148();
			func_139(0);
			func_149();
			if (func_150())
			{
				func_151();
			}
			if (func_152())
			{
				Local_274.f_9 = 3;
			}
			break;
		case 3:
			if (func_150())
			{
				func_151();
				return true;
			}
			if (__LIB_2__::func_275(&Local_274, 16))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_31()
{
	Local_274.f_69 = __LIB_2__::func_374(&Local_15);
	func_166();
	func_167();
	if (func_150())
	{
		func_151();
	}
	func_147();
	switch (Local_274.f_10)
	{
		case 0:
			__LIB_1__::func_148(&(Local_274.f_25[4 /*3*/]));
			Local_274.f_10 = 1;
			break;
		case 1:
			if (Local_274.f_69 < 4)
			{
				func_169();
				Local_274.f_10 = 2;
			}
			break;
		case 2:
			if (func_170())
			{
				func_171();
				Local_274.f_10 = 3;
			}
			else if (Local_274.f_69 < 2)
			{
				func_172();
				Local_274.f_10 = 3;
			}
			break;
		case 3:
			if (Local_274.f_69 <= 1)
			{
				Local_274.f_68 = __LIB_2__::func_733(&Local_15);
				func_174();
				Local_274.f_10 = 4;
			}
			break;
		case 4:
			if (!__LIB_2__::func_275(&Local_274, 512))
			{
				if (func_175())
				{
					__LIB_2__::func_277(&Local_274, 512);
				}
			}
			else if (func_176())
			{
				__LIB_3__::func_728(&Local_274, 512);
			}
			if (Local_274.f_69 <= 0)
			{
				Local_274.f_10 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_49()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_274.f_56)
	{
		__LIB_2__::func_353(&(Local_274.f_56[iVar0]), 1);
		iVar0++;
	}
	if (__LIB_2__::func_1(Local_274.f_61[0], 0, 0))
	{
		__LIB_1__::func_864(Local_274.f_61[0], 1, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_274.f_61[0]));
	}
}

bool func_83()
{
	Local_15.f_215 = 6;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 4;
	Local_15.f_219 = 1;
	Local_15.f_181 = 3;
	if (BUILTIN::VDIST2(Global_36, func_84(24, 0, 0)) < BUILTIN::VDIST2(Global_36, func_84(24, 1, 0)))
	{
		__LIB_2__::func_277(&Local_274, 1);
	}
	func_246();
	__LIB_2__::func_41(&(Local_15.f_182), 1, 2.5f, 1f, 1.25f, 1.75f, 0);
	__LIB_2__::func_414(&Local_15, 2, 1);
	__LIB_2__::func_715(&(Local_15.f_152), 1);
	__LIB_2__::func_147(&Local_15, 131072);
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	func_250(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!func_251(iParam0, 1))
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
	switch (Local_274)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("A_M_M_UNICORPSE_01"), false);
			__LIB_2__::func_730(&Local_15);
			func_260(&Local_15);
			func_261();
			func_262(&Local_274);
			Local_274 = 1;
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_UNICORPSE_01")))
			{
				return false;
			}
			if (!func_263(&Local_274))
			{
				return false;
			}
			Local_274.f_13[0] = PED::_REQUEST_METAPED_OUTFIT(joaat("A_M_M_UNICORPSE_01"), -2024019335);
			func_264(&Local_15, &Local_274);
			Local_274 = 2;
			break;
		case 2:
			if (!func_265(&Local_15, &Local_274))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_UNICORPSE_01")))
			{
				return false;
			}
			if (!__LIB_2__::func_731(&Local_15))
			{
				return false;
			}
			if (!func_267())
			{
				return false;
			}
			if (!func_268(&Local_15))
			{
				return false;
			}
			if (!PED::_0x5E420FF293EE5472())
			{
				return false;
			}
			if (!PED::_0x610438375E5D1801(Local_274.f_13[0]))
			{
				return false;
			}
			Local_274 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_269(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_271(&Local_274, iVar0);
}

float func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_272(&Local_274, iVar0);
}

Vector3 func_117(int iParam0, int iParam1)
{
	return func_275(iParam0, iParam1);
}

float func_118(int iParam0, int iParam1)
{
	return func_276(iParam0, iParam1);
}

Vector3 func_119(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_277(&Local_274, iVar0);
}

float func_120(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_278(&Local_274, iVar0);
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 2;
		default:
			break;
	}
	return -1;
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0256_G_M_M_UniMountainMen_01_WHITE_02";
		case 1:
			return "0257_G_M_M_UniMountainMen_02_WHITE_01";
		case 2:
			return "0258_G_M_M_UniMountainMen_02_WHITE_02";
		default:
			break;
	}
	return "";
}

void func_132(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0, false, true);
	}
	switch (iParam1)
	{
		case joaat("GROUP_REVOLVER"):
			if (__LIB_0__::func_214(joaat("WEAPON_REVOLVER_DOUBLEACTION")))
			{
				iParam1 = joaat("WEAPON_REVOLVER_DOUBLEACTION");
			}
			else if (__LIB_0__::func_214(joaat("WEAPON_REVOLVER_DOUBLEACTION")))
			{
				iParam1 = joaat("WEAPON_REVOLVER_SCHOFIELD");
			}
			break;
		case joaat("GROUP_REPEATER"):
			if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_HENRY")))
			{
				iParam1 = joaat("WEAPON_REPEATER_HENRY");
			}
			break;
	}
	__LIB_2__::func_272(iParam0, iParam1, -1, iParam3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
}

void func_134()
{
	__LIB_2__::func_659(&(Local_274.f_56[0]), func_282(&Local_274, 2), 1.5f, 0, 0);
	__LIB_2__::func_659(&(Local_274.f_56[1]), func_282(&Local_274, 3), 1.5f, 0, 0);
	__LIB_2__::func_659(&(Local_274.f_56[2]), func_282(&Local_274, 4), 1.5f, 0, 0);
}

void func_135()
{
	char* sVar0;
	func_284(&Local_274, 0, "Corpse", Local_274.f_61[0], 0);
	func_284(&Local_274, 0, "MALE_A", Local_15[0], 1);
	func_285(&Local_274, 0, "bIdleLoop", 0);
	func_284(&Local_274, 1, "MALE_B", Local_15[1], 1);
	func_284(&Local_274, 1, "MALE_C", Local_15[2], 1);
	func_284(&Local_274, 1, "MALE_D", Local_15[3], 1);
	func_285(&Local_274, 1, "bIdleLoop", 0);
	func_286(&Local_274, 0);
	func_286(&Local_274, 1);
	sVar0 = func_287(&Local_15, &Local_274);
	func_288(&Local_274, 0, sVar0, 1);
	func_288(&Local_274, 1, sVar0, 1);
}

void func_139(bool bParam0)
{
	if (!__LIB_2__::func_275(&Local_274, 256))
	{
		if (__LIB_1__::func_285(&(Local_274.f_25[1 /*3*/]), 0.1f) || bParam0)
		{
			func_285(&Local_274, 1, "bIdleLoop", 1);
			__LIB_2__::func_277(&Local_274, 256);
		}
	}
}

bool func_140()
{
	__LIB_2__::func_375(&Local_15, 0);
	func_290();
	if (Local_274.f_12 > 1)
	{
		func_149();
	}
	switch (Local_274.f_12)
	{
		case 0:
			Local_274.f_12 = 1;
			break;
		case 1:
			func_291();
			if (func_292())
			{
				func_293();
				Local_274.f_12 = 2;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_56))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					Local_15.f_56 = PED::GET_MOUNT(Global_35);
				}
			}
			if (__LIB_1__::func_285(&(Local_274.f_25[0 /*3*/]), 1.5f))
			{
				__LIB_1__::func_148(&(Local_274.f_25[0 /*3*/]));
				if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
				{
					TASK::TASK_HORSE_ACTION(Local_15.f_56, 1, 0, 0);
				}
				Local_274.f_12 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_141()
{
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_15[0], Global_36))
	{
		return true;
	}
	if (func_294(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_67), 0, 3, 1))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_274.f_61[0], Global_35, 1, 1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_15[0], Local_274.f_63[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(Local_15[0], Global_35, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_142()
{
	char* sVar0;
	sVar0 = func_295(&Local_274);
	func_285(&Local_274, 0, "bIdleLoop", 1);
	func_288(&Local_274, 0, sVar0, 1);
	func_285(&Local_274, 1, "bIdleLoop", 1);
	func_288(&Local_274, 1, sVar0, 1);
	return true;
}

bool func_145()
{
	if (__LIB_1__::func_205(Global_35, Local_274.f_15[1], 1, 0))
	{
		__LIB_0__::func_11(&Local_15, 7);
		return true;
	}
	if (__LIB_2__::func_720(&Local_15))
	{
		return true;
	}
	return false;
}

void func_147()
{
	switch (Local_274.f_70)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_25[5 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_25[5 /*3*/]), 2.75f))
			{
				__LIB_1__::func_148(&(Local_274.f_25[5 /*3*/]));
				__LIB_2__::func_725(1, 6);
				Local_274.f_70 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_25[5 /*3*/]), 1.25f))
			{
				__LIB_1__::func_148(&(Local_274.f_25[5 /*3*/]));
				__LIB_2__::func_725(2, 5);
				Local_274.f_70 = 2;
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_25[5 /*3*/]), 0.5f))
			{
				__LIB_1__::func_148(&(Local_274.f_25[5 /*3*/]));
				__LIB_2__::func_725(3, 4);
				Local_274.f_70 = 3;
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_25[5 /*3*/]), 0.75f))
			{
				__LIB_1__::func_148(&(Local_274.f_25[5 /*3*/]));
				__LIB_2__::func_725(0, 3);
				Local_274.f_70 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_148()
{
	if (!__LIB_2__::func_275(&Local_274, 2))
	{
		if (!__LIB_2__::func_275(&Local_274, 16384))
		{
			if (!__LIB_0__::func_75(&(Local_274.f_25[6 /*3*/])))
			{
				__LIB_1__::func_283(&(Local_274.f_25[6 /*3*/]), 0);
			}
			else if (__LIB_1__::func_285(&(Local_274.f_25[6 /*3*/]), 2.5f))
			{
				if (func_301(Global_35, Local_274.f_61[0], "AMBUSH_SCR_BODY_REACT", -1082130432 /* Float: -1f */, 1, 1506116031))
				{
					__LIB_2__::func_277(&Local_274, 16384);
				}
			}
		}
	}
}

void func_149()
{
	if (!__LIB_2__::func_1(Local_15[0], 0, 0))
	{
		return;
	}
	if (Local_15.f_227)
	{
		if (!__LIB_2__::func_716(&Local_274, 0, 2))
		{
			if (__LIB_2__::func_448(Local_15[0], joaat("BLINEHOLA"), "bLineHola", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
			{
				__LIB_2__::func_717(&Local_274, 0, 2);
			}
		}
		else if (!__LIB_2__::func_716(&Local_274, 0, 4))
		{
			if (func_306(&Local_274, 0, Local_15[0], "MALE_A", -1473552390))
			{
				func_307(&Local_274, 0, "MALE_A", Local_15[0], 1);
				__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 33554432, 0);
				__LIB_2__::func_717(&Local_274, 0, 4);
			}
		}
	}
	else if (!__LIB_2__::func_716(&Local_274, 0, 2))
	{
		if (__LIB_2__::func_448(Local_15[0], joaat("BLINEYELL"), "bLineYell", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
		{
			__LIB_2__::func_717(&Local_274, 0, 2);
		}
	}
	else if (!__LIB_2__::func_716(&Local_274, 0, 4))
	{
		if (func_306(&Local_274, 0, Local_15[0], "MALE_A", -1233989285) || func_306(&Local_274, 0, Local_15[0], "MALE_A", -1284010902))
		{
			func_307(&Local_274, 0, "MALE_A", Local_15[0], 1);
			__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 33554432, 0);
			func_301(Local_15[0], Global_35, "AMBUSH_SCR_ATTACK", -1f, 0, -500314840);
			__LIB_2__::func_717(&Local_274, 0, 4);
		}
	}
	if (!__LIB_2__::func_716(&Local_274, 0, 2))
	{
		if (__LIB_2__::func_448(Local_15[0], joaat("BLINEBYPASS"), "bLineBypass", __LIB_1__::func_976(), 1067030938 /* Float: 1.2f */, 1))
		{
			__LIB_2__::func_717(&Local_274, 0, 2);
		}
	}
}

bool func_150()
{
	int iVar0;
	float fVar1;
	if (__LIB_2__::func_275(&Local_274, 16))
	{
		return false;
	}
	if (__LIB_2__::func_275(&Local_274, 128))
	{
		return false;
	}
	iVar0 = __LIB_2__::func_374(&Local_15);
	fVar1 = __LIB_0__::func_94(Local_15[4], Global_36, 0);
	if (iVar0 < 5)
	{
		return true;
	}
	if (fVar1 < 50f)
	{
		return true;
	}
	if (Local_274.f_12 >= 2)
	{
		return true;
	}
	return false;
}

void func_151()
{
	int iVar0;
	if (__LIB_2__::func_1(Local_15[4], 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[4], &iVar0, 0, 0, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[4], 45, true);
		__LIB_2__::func_73(Local_15[4], &(Local_15.f_22[4]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[4], func_282(&Local_274, 4), 2f, 0, false, 0);
	}
	if (__LIB_2__::func_1(Local_15[5], 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[5], &iVar0, 0, 0, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[5], 45, true);
		__LIB_2__::func_73(Local_15[5], &(Local_15.f_22[5]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[5], func_309(&Local_274, 5), 2f, 0, false, 0);
	}
	__LIB_2__::func_277(&Local_274, 16);
}

bool func_152()
{
	int iVar0;
	if (!__LIB_2__::func_716(&Local_274, 0, 1))
	{
		if (func_306(&Local_274, 0, Local_15[0], "MALE_A", 0))
		{
			func_310(Local_15[0], Local_15.f_22[0], joaat("BLIP_STYLE_ENEMY"), 0);
			PED::SET_COMBAT_FLOAT(Local_15[0], 32, 1f);
			PED::SET_COMBAT_FLOAT(Local_15[0], 6, 0.2f);
			TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 33554432, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[0], 0);
			__LIB_2__::func_717(&Local_274, 0, 1);
		}
	}
	if (!__LIB_2__::func_716(&Local_274, 1, 1))
	{
		if (func_306(&Local_274, 1, Local_15[1], "MALE_B", 0))
		{
			func_310(Local_15[1], Local_15.f_22[1], joaat("BLIP_STYLE_ENEMY"), 0);
			PED::SET_COMBAT_FLOAT(Local_15[1], 32, 3f);
			PED::SET_COMBAT_FLOAT(Local_15[1], 6, 0.2f);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[1], 98, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, 2000, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
			__LIB_1__::func_474(Local_15[1], &iVar0, 0, 0, 1, 1);
			__LIB_2__::func_717(&Local_274, 1, 1);
		}
	}
	if (!__LIB_2__::func_716(&Local_274, 2, 1))
	{
		if (func_306(&Local_274, 1, Local_15[2], "MALE_C", 0))
		{
			func_310(Local_15[2], Local_15.f_22[2], joaat("BLIP_STYLE_ENEMY"), 0);
			PED::SET_COMBAT_FLOAT(Local_15[2], 32, 1f);
			PED::SET_COMBAT_FLOAT(Local_15[2], 6, 0.2f);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[0], 98, true);
			TASK::TASK_COMBAT_PED(Local_15[2], Global_35, 33554432, 0);
			__LIB_2__::func_717(&Local_274, 2, 1);
		}
	}
	if (!__LIB_2__::func_716(&Local_274, 3, 1))
	{
		if (func_306(&Local_274, 1, Local_15[3], "MALE_D", 0))
		{
			func_310(Local_15[3], Local_15.f_22[3], joaat("BLIP_STYLE_ENEMY"), 0);
			PED::SET_COMBAT_FLOAT(Local_15[3], 32, 1f);
			PED::SET_COMBAT_FLOAT(Local_15[3], 6, 0.2f);
			TASK::TASK_COMBAT_PED(Local_15[3], Global_35, 33554432, 0);
			__LIB_2__::func_717(&Local_274, 3, 1);
		}
	}
	if (((__LIB_2__::func_716(&Local_274, 0, 1) && __LIB_2__::func_716(&Local_274, 1, 1)) && __LIB_2__::func_716(&Local_274, 2, 1)) && __LIB_2__::func_716(&Local_274, 3, 1))
	{
		return true;
	}
	return false;
}

void func_166()
{
	if (__LIB_2__::func_275(&Local_274, 64) || __LIB_2__::func_275(&Local_274, 32))
	{
		return;
	}
	if (__LIB_1__::func_205(Global_35, Local_274.f_15[6], 1, 0))
	{
		__LIB_2__::func_277(&Local_274, 32);
		__LIB_0__::func_11();
		func_329(0, Local_15.f_40[0]);
		func_329(1, Local_15.f_40[1]);
	}
	else if (__LIB_1__::func_205(Global_35, Local_274.f_15[7], 1, 0))
	{
		__LIB_2__::func_277(&Local_274, 64);
		__LIB_0__::func_11();
		func_329(0, Local_15.f_40[0]);
		func_329(1, Local_15.f_40[1]);
	}
}

void func_167()
{
	vector3 vVar0;
	if (__LIB_2__::func_275(&Local_274, 128))
	{
		return;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 2f) };
	if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_15[8], vVar0))
	{
		return;
	}
	func_331(0, 0);
	func_331(1, 1);
	func_331(4, 3);
	func_331(5, 2);
	__LIB_2__::func_277(&Local_274, 128);
}

void func_169()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_2__::func_275(&Local_274, 2048))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			iVar1 = func_128(iVar0);
			sVar2 = func_129(iVar1);
			if (MISC::ARE_STRINGS_EQUAL(sVar2, "0257_G_M_M_UniMountainMen_02_WHITE_01") || MISC::ARE_STRINGS_EQUAL(sVar2, "0258_G_M_M_UniMountainMen_02_WHITE_02"))
			{
				func_301(Local_15[iVar0], 0, "AMBUSH_SCR_ADJUST", -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_2__::func_277(&Local_274, 2048);
				return;
			}
		}
		iVar0++;
	}
}

bool func_170()
{
	int iVar0;
	if (func_333(-3f, 1, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				if (iVar0 != 0 && iVar0 != 1)
				{
					__LIB_1__::func_733(Local_15[iVar0]);
				}
				PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
				switch (iVar0)
				{
					case 4:
					case 5:
						PED::_0x1854217C640B39EC(Local_15[iVar0], Global_35, 0f, 0f, 0f, 15f, 0, 0);
						break;
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_171()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_2__::func_275(&Local_274, 4096))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			iVar1 = func_128(iVar0);
			sVar2 = func_129(iVar1);
			if (MISC::ARE_STRINGS_EQUAL(sVar2, "0257_G_M_M_UniMountainMen_02_WHITE_01") || MISC::ARE_STRINGS_EQUAL(sVar2, "0258_G_M_M_UniMountainMen_02_WHITE_02"))
			{
				func_301(Local_15[iVar0], 0, "AMBUSH_SCR_ADVANCE", -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_2__::func_277(&Local_274, 4096);
				return;
			}
		}
		iVar0++;
	}
}

void func_172()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_2__::func_275(&Local_274, 8192))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			iVar1 = func_128(iVar0);
			sVar2 = func_129(iVar1);
			if (MISC::ARE_STRINGS_EQUAL(sVar2, "0257_G_M_M_UniMountainMen_02_WHITE_01") || MISC::ARE_STRINGS_EQUAL(sVar2, "0258_G_M_M_UniMountainMen_02_WHITE_02"))
			{
				func_301(Local_15[iVar0], 0, "AMBUSH_SCR_FLEE", -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_2__::func_277(&Local_274, 8192);
				return;
			}
		}
		iVar0++;
	}
}

void func_174()
{
	if (PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_68]))
	{
		PED::_0x1854217C640B39EC(Local_15[Local_274.f_68], Global_35, 0f, 0f, 0f, 12f, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[Local_274.f_68], 51, true);
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[Local_274.f_68], 51, false);
		PED::_0x1854217C640B39EC(Local_15[Local_274.f_68], Global_35, 0f, 0f, 0f, 8f, 0, 0);
	}
	PED::SET_PED_COMBAT_RANGE(Local_15[Local_274.f_68], 0);
}

bool func_175()
{
	int iVar0;
	int iVar1;
	if ((Local_15.f_9[Local_274.f_68] > 18f || PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_68])) || PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_68], joaat("WEAPON_MELEE_KNIFE")))
	{
		iVar0 = joaat("WEAPON_MELEE_KNIFE");
	}
	else if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_68], joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
	{
		iVar0 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_68], iVar0, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(Local_15[Local_274.f_68], 1, 1, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_MELEE(0, Global_35, 0, 1, 1, 2f, 1, -1082130432 /* Float: -1f */);
	__LIB_1__::func_474(Local_15[Local_274.f_68], &iVar1, 0, 0, 1, 1);
	return true;
}

bool func_176()
{
	int iVar0;
	int iVar1;
	if ((PED::IS_PED_ON_MOUNT(Local_15[Local_274.f_68]) || PED::IS_PED_ON_MOUNT(Global_35)) || Local_15.f_9[Local_274.f_68] > 30f)
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(Local_15[Local_274.f_68], false, false);
		if (!WEAPON::IS_WEAPON_VALID(iVar0))
		{
			return false;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_68], iVar0, false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Local_15[Local_274.f_68], 1, 1, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[Local_274.f_68], &iVar1, 0, 0, 1, 1);
		return true;
	}
	return false;
}

void func_246()
{
	if (__LIB_2__::func_275(&Local_274, 1))
	{
		Local_274.f_15[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[0], -2318.438f, -1468.29f, 144.6317f, 0f, 0f, -20.07626f, 49.72037f, 37.94672f, 15.49629f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[0], -2354.404f, -1509.853f, 150.3764f, 0f, 0f, -42.82241f, 49.72037f, 37.94672f, 15.49629f);
		Local_274.f_15[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[1], -2315.884f, -1369.311f, 150.3764f, 0f, 0f, 57.74073f, 170.6261f, 200.0316f, 34.4135f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[1], -2464.335f, -1514.648f, 150.3764f, 0f, 0f, -72.90223f, 132.1431f, 200.0316f, 34.4135f);
		Local_274.f_15[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushTrigger");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[2], -2346.733f, -1481.976f, 142.8846f, 0f, 0f, -19.56686f, 42.15354f, 7.990436f, 12.62002f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[2], -2347.302f, -1488.552f, 142.8846f, 0f, 0f, -19.56686f, 37.74312f, 9.422204f, 12.62002f);
		Local_274.f_15[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAdvanceForward");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[6], -2341.969f, -1463.118f, 145.4243f, 0f, 0f, 73.12672f, 12.76271f, 34.86326f, 14.92906f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[6], -2355.777f, -1489.308f, 145.4243f, 0f, 0f, -17.22509f, 12.76271f, 53.12069f, 14.92906f);
		Local_274.f_15[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAdvanceBackward");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[7], -2311.005f, -1478.071f, 142.3259f, 0f, 0f, 53.88924f, 12.76271f, 34.86326f, 14.92906f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[7], -2312.407f, -1512.764f, 142.67f, 0f, 0f, -46.50696f, 12.76271f, 53.12069f, 14.92906f);
		Local_274.f_15[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushEscape");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2347.392f, -1535.788f, 141.8954f, 0f, 0f, -92.42001f, 15.16217f, 114.5887f, 41.49389f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2289.283f, -1538.244f, 141.8954f, 0f, 0f, -25.37255f, 15.16217f, 114.5887f, 41.49389f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2295.753f, -1456.882f, 141.8954f, 0f, 0f, -135.7112f, 15.16217f, 114.5887f, 41.49389f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2365.032f, -1437.359f, 150.2429f, 0f, 0f, 100.0666f, 15.16217f, 114.5887f, 14.61596f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2415.375f, -1478.653f, 149.3957f, 0f, 0f, 0f, 15.16217f, 60.51428f, 14.61596f);
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2319.511f, -1501.647f, 140.1783f, 0f, 0f, 131.4131f, 27.63716f, 16.25087f, 5.237694f, "volSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2332.01f, -1492.395f, 140.1783f, 0f, 0f, -16.85185f, 12.69228f, 9.681503f, 5.237694f, "volSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2340.146f, -1489.931f, 140.1783f, 0f, 0f, -16.85185f, 5.170003f, 9.681503f, 5.237694f, "volSlowest");
	}
	else
	{
		Local_274.f_15[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[0], -2337.846f, -1463.147f, 144.6317f, 0f, 0f, -20.07626f, 49.72037f, 37.94672f, 15.49629f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[0], -2358f, -1511.771f, 146.4393f, 0f, 0f, -20.20463f, 49.72037f, 37.94672f, 15.49629f);
		Local_274.f_15[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[1], -2421.831f, -1593.75f, 143.9006f, 0f, 0f, 179.2185f, 81.19643f, 157.2078f, 44.80432f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[1], -2373.957f, -1608.942f, 143.9006f, 0f, 0f, 159.4368f, 81.19643f, 189.5022f, 29.76261f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[1], -2355.772f, -1369.664f, 143.9006f, 0f, 0f, 0f, 81.19643f, 189.5022f, 29.76261f);
		Local_274.f_15[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushTrigger");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[2], -2332.522f, -1486.029f, 142.8846f, 0f, 0f, -19.56686f, 49.93616f, 7.990436f, 12.62002f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[2], -2332.275f, -1492.895f, 142.8846f, 0f, 0f, -19.56685f, 54.99088f, 9.422204f, 12.62002f);
		Local_274.f_15[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAdvanceBackward");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[7], -2352.819f, -1459.283f, 142.8846f, 0f, 0f, -4.863711f, 63.72886f, 17.09503f, 26.32381f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[7], -2391.995f, -1473.838f, 142.8846f, 0f, 0f, 71.30077f, 94.12986f, 21.25371f, 43.55399f);
		Local_274.f_15[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAdvanceForward");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[6], -2319.714f, -1487.502f, 142.3259f, 0f, 0f, -3.460821f, 13.86843f, 39.42025f, 14.92906f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[6], -2336.118f, -1519.398f, 146.3772f, 0f, 0f, -48.52202f, 12.76271f, 53.12069f, 18.9917f);
		Local_274.f_15[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushEscape");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2346.798f, -1521.761f, 141.8954f, 0f, 0f, -92.42001f, 15.16217f, 114.5887f, 41.49389f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2289.283f, -1538.244f, 141.8954f, 0f, 0f, -25.37255f, 15.16217f, 114.5887f, 41.49389f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2295.753f, -1456.882f, 141.8954f, 0f, 0f, -135.7112f, 15.16217f, 114.5887f, 41.49389f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2365.032f, -1437.359f, 150.2429f, 0f, 0f, 100.0666f, 15.16217f, 114.5887f, 14.61596f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_15[8], -2415.375f, -1478.653f, 149.3957f, 0f, 0f, 0f, 15.16217f, 60.51428f, 14.61596f);
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2355.57f, -1485.828f, 141.2001f, 0f, 0f, 162.7366f, 27.63716f, 8.851351f, 11.23243f, "volSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2346.7f, -1487.946f, 140.1783f, 0f, 0f, -16.85185f, 12.69228f, 9.681503f, 5.237694f, "volSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2340.758f, -1489.746f, 140.1783f, 0f, 0f, -16.85185f, 7.014711f, 9.681503f, 5.237694f, "volSlowest");
	}
}

void func_250(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
					Jump @5959; //curOff = 3793
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					Jump @5959; //curOff = 3874
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					Jump @5959; //curOff = 3920
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					Jump @5959; //curOff = 3966
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
					Jump @5959; //curOff = 4117
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
					Jump @5959; //curOff = 4338
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					Jump @5959; //curOff = 4384
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					Jump @5959; //curOff = 4430
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					Jump @5959; //curOff = 4511
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
					Jump @5959; //curOff = 4627
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					Jump @5959; //curOff = 4708
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
					Jump @5959; //curOff = 4894
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					Jump @5959; //curOff = 4940
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					Jump @5959; //curOff = 4986
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
					Jump @5959; //curOff = 5137
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					Jump @5959; //curOff = 5183
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					Jump @5959; //curOff = 5229
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					Jump @5959; //curOff = 5275
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					Jump @5959; //curOff = 5321
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					Jump @5959; //curOff = 5367
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					Jump @5959; //curOff = 5413
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					Jump @5959; //curOff = 5494
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					Jump @5959; //curOff = 5540
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					Jump @5959; //curOff = 5586
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					Jump @5959; //curOff = 5632
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					Jump @5959; //curOff = 5678
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					Jump @5959; //curOff = 5759
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					Jump @5959; //curOff = 5805
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
					Jump @6227; //curOff = 5959
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
					Jump @6227; //curOff = 6196
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					Jump @6227; //curOff = 6210
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
bool func_251(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

void func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_218)
	{
		iVar0 = __LIB_1__::func_976(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

void func_261()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_389(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_262(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_390(iParam0, iVar0, 0, 1);
		iVar0++;
	}
}

bool func_263(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_391(iParam0, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_264(int iParam0, int iParam1)
{
	func_392(iParam1, 0, func_287(iParam0, iParam1));
	func_392(iParam1, 0, func_295(iParam1));
	func_392(iParam1, 1, func_287(iParam0, iParam1));
	func_392(iParam1, 1, func_295(iParam1));
}

bool func_265(int iParam0, int iParam1)
{
	if (!func_393(iParam1, 0, func_287(iParam0, iParam1)))
	{
		return false;
	}
	if (!func_393(iParam1, 0, func_295(iParam1)))
	{
		return false;
	}
	if (!func_393(iParam1, 1, func_287(iParam0, iParam1)))
	{
		return false;
	}
	if (!func_393(iParam1, 1, func_295(iParam1)))
	{
		return false;
	}
	return true;
}

bool func_267()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_389(iVar0);
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

bool func_268(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_218)
	{
		iVar0 = __LIB_1__::func_976(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_1__::func_976(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 267296198;
		case 1:
			return 927514601;
		case 2:
			return 544641605;
		case 3:
			return -1160821004;
		case 4:
			return -598537733;
		case 5:
			return -845386610;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_271(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_117(0, 3);
			case 1:
				return func_117(0, 7);
			case 2:
				return func_117(0, 8);
			case 3:
				return func_117(0, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_117(3, 3);
			case 1:
				return func_117(3, 7);
			case 2:
				return func_117(3, 8);
			case 3:
				return func_117(3, 2);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_272(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_118(0, 3);
			case 1:
				return func_118(0, 7);
			case 2:
				return func_118(0, 8);
			case 3:
				return func_118(0, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_118(3, 3);
			case 1:
				return func_118(3, 7);
			case 2:
				return func_118(3, 8);
			case 3:
				return func_118(3, 2);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_275(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2346.405f, -1494.191f, 145.6783f;
				case 1:
					return -2360.882f, -1505.872f, 148.0027f;
				case 2:
					return -2364.949f, -1503.942f, 148.232f;
				case 3:
					return -2358.257f, -1500.813f, 146.2634f;
				case 4:
					return -2352.57f, -1475.237f, 144.1147f;
				case 5:
					return -2376.472f, -1463.561f, 146.5077f;
				case 6:
					return -2375.943f, -1487.189f, 145.9882f;
				case 7:
					return -2357.867f, -1504.292f, 146.7916f;
				case 8:
					return -2316.641f, -1440.85f, 142.833f;
				case 9:
					return -2345.699f, -1492.773f, 145.7128f;
				case 10:
					return -2346.132f, -1494.17f, 145.6606f;
				case 11:
					return -2413.825f, -1487.345f, 148.1079f;
				case 12:
					return -2400.358f, -1468.643f, 147.2088f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2346.125f, -1493.547f, 145.6926f;
				case 1:
					return -2354.385f, -1491.685f, 145.4175f;
				case 2:
					return -2312.122f, -1514.876f, 140.5334f;
				case 3:
					return -2353.39f, -1477.289f, 143.7886f;
				case 4:
					return -2364.285f, -1475.44f, 145.4949f;
				case 5:
					return -2365.881f, -1485.826f, 141.8702f;
				case 6:
					return -2345.487f, -1492.214f, 145.68f;
				case 7:
					return -2344.827f, -1488.935f, 138.234f;
				case 8:
					return -2370.999f, -1492.856f, 147.1289f;
				case 9:
					return -2372.63f, -1494.717f, 147.584f;
				case 10:
					return -2326.55f, -1482.833f, 138.7101f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2387.276f, -1479.928f, 145.746f;
				case 1:
					return -2385.266f, -1486.223f, 147.1871f;
				case 2:
					return -2319.02f, -1523.244f, 142.6625f;
				case 3:
					return -2322.303f, -1527.658f, 143.8395f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2339.4f, -1498.069f, 143.724f;
				case 1:
					return -2327.885f, -1499.633f, 138.8899f;
				case 2:
					return -2337.139f, -1434.359f, 146.0268f;
				case 3:
					return -2345.272f, -1508.907f, 146.2534f;
				case 4:
					return -2322.922f, -1475.579f, 138.7811f;
				case 5:
					return -2301.787f, -1487.648f, 136.6256f;
				case 6:
					return -2319.388f, -1502.186f, 138.5643f;
				case 7:
					return -2349.677f, -1509.885f, 147.1709f;
				case 8:
					return -2355.651f, -1519.214f, 150.0585f;
				case 9:
					return -2339.262f, -1496.398f, 143.2445f;
				case 10:
					return -2339.397f, -1496.964f, 143.3721f;
				case 11:
					return -2300.355f, -1524.41f, 143.2392f;
				case 12:
					return -2298.984f, -1526.651f, 143.7532f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2339.383f, -1496.882f, 143.3503f;
				case 1:
					return -2329.666f, -1495.641f, 137.6113f;
				case 2:
					return -2371.119f, -1477.918f, 143.3735f;
				case 3:
					return -2327.946f, -1482.768f, 138.8712f;
				case 4:
					return -2315.662f, -1491.865f, 138.1154f;
				case 5:
					return -2319.802f, -1498.527f, 137.8107f;
				case 6:
					return -2339.088f, -1495.779f, 143.04f;
				case 7:
					return -2338.211f, -1490.748f, 137.7482f;
				case 8:
					return -2340.063f, -1516.845f, 147.0903f;
				case 9:
					return -2343.1f, -1525.454f, 147.9895f;
				case 10:
					return -2376.817f, -1481.504f, 143.8938f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2321.619f, -1522.514f, 142.9736f;
				case 1:
					return -2327.906f, -1533.703f, 144.9637f;
				case 2:
					return -2386.981f, -1477.852f, 145.7466f;
				case 3:
					return -2385.321f, -1485.484f, 146.9969f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_276(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -23.576f;
				case 1:
					return 246.424f;
				case 2:
					return 252.424f;
				case 3:
					return 78.424f;
				case 4:
					return 156.424f;
				case 5:
					return 230.424f;
				case 6:
					return -54.6112f;
				case 7:
					return 70.7489f;
				case 8:
					return 222.9002f;
				case 9:
					return -24.4102f;
				case 10:
					return 71.3425f;
				case 11:
					return 118.424f;
				case 12:
					return 136.424f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -23.576f;
				case 1:
					return 310.424f;
				case 2:
					return 372.424f;
				case 3:
					return 210.424f;
				case 4:
					return 220.424f;
				case 5:
					return -90.6112f;
				case 6:
					return -24.6989f;
				case 7:
					return -14.285f;
				case 8:
					return 54.8593f;
				case 9:
					return 52.8593f;
				case 10:
					return -180.534f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 292.5747f;
				case 1:
					return 312.7353f;
				case 2:
					return 332.8513f;
				case 3:
					return 332.8513f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -23.576f;
				case 1:
					return 10.424f;
				case 2:
					return 100.424f;
				case 3:
					return -99.576f;
				case 4:
					return 114.424f;
				case 5:
					return 88.424f;
				case 6:
					return 15.3888f;
				case 7:
					return 212.7489f;
				case 8:
					return 8.9002f;
				case 9:
					return -24.4102f;
				case 10:
					return -12.6575f;
				case 11:
					return 100.424f;
				case 12:
					return 120.424f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -23.576f;
				case 1:
					return 60.424f;
				case 2:
					return 216.424f;
				case 3:
					return 132.424f;
				case 4:
					return 90.424f;
				case 5:
					return 45.3888f;
				case 6:
					return -24.6989f;
				case 7:
					return -14.285f;
				case 8:
					return 242.8593f;
				case 9:
					return 234.8593f;
				case 10:
					return -78.534f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 292.5747f;
				case 1:
					return 312.7353f;
				case 2:
					return 300.8513f;
				case 3:
					return 332.8513f;
			}
			break;
	}
	return 0f;
}

Vector3 func_277(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_117(0, 0);
			case 1:
				return func_117(0, 1);
			case 2:
				return func_117(0, 4);
			case 3:
				return func_117(0, 5);
			case 4:
				return func_117(0, 8);
			case 5:
				return func_117(0, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_117(3, 0);
			case 1:
				return func_117(3, 1);
			case 2:
				return func_117(3, 4);
			case 3:
				return func_117(3, 5);
			case 4:
				return func_117(3, 8);
			case 5:
				return func_117(3, 2);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_278(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_118(0, 0);
			case 1:
				return func_118(0, 1);
			case 2:
				return func_118(0, 4);
			case 3:
				return func_118(0, 5);
			case 4:
				return func_118(0, 8);
			case 5:
				return func_118(0, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_118(3, 0);
			case 1:
				return func_118(3, 1);
			case 2:
				return func_118(3, 4);
			case 3:
				return func_118(3, 5);
			case 4:
				return func_118(3, 8);
			case 5:
				return func_118(3, 2);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_282(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_117(1, 0);
			case 1:
				return func_117(1, 1);
			case 2:
				return func_117(1, 3);
			case 3:
				return func_117(1, 4);
			case 4:
				return func_117(1, 10);
			case 5:
				return func_117(1, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_117(4, 0);
			case 1:
				return func_117(4, 1);
			case 2:
				return func_117(4, 3);
			case 3:
				return func_117(4, 4);
			case 4:
				return func_117(4, 10);
			case 5:
				return func_117(4, 2);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_284(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!__LIB_2__::func_1(iParam3, 0, 1))
		{
			return;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63[iParam1], sParam2, iParam3, 0);
}

void func_285(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_63[iParam1]))
	{
		return;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_63[iParam1], sParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_63[iParam1], sParam2, bParam3, false);
	}
}

void func_286(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_63[iParam1]))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_63[iParam1]);
}

char* func_287(int iParam0, int iParam1)
{
	if (iParam0->f_227)
	{
		if (__LIB_2__::func_275(iParam1, 1))
		{
			return "PBL_ACTION_FEUD_B";
		}
		else
		{
			return "PBL_ACTION_FEUD_A";
		}
	}
	else if (__LIB_2__::func_275(iParam1, 1))
	{
		return "PBL_ACTION_B";
	}
	else
	{
		return "PBL_ACTION_A";
	}
	return "PBL_INVALID";
}

void func_288(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	__LIB_2__::func_543(uParam0->f_63[iParam1], sParam2, bParam3, func_404(uParam0, iParam1));
}

void func_290()
{
	if (Local_274.f_12 > 1)
	{
	}
}

void func_291()
{
	if (!__LIB_2__::func_275(&Local_274, 32768))
	{
		if (__LIB_0__::func_48(Global_35, Local_274.f_61[0], 60f, 0))
		{
			if (func_301(Local_15[3], Global_35, "ARRIVAL_ENTER_TRAP", -1082130432 /* Float: -1f */, 1, 1744022339))
			{
				__LIB_2__::func_277(&Local_274, 32768);
			}
		}
	}
}

bool func_292()
{
	if (__LIB_1__::func_205(Global_35, Local_274.f_15[2], 1, 0))
	{
		return true;
	}
	return false;
}

void func_293()
{
	char* sVar0;
	sVar0 = func_287(&Local_15, &Local_274);
	func_288(&Local_274, 0, sVar0, 1);
	func_288(&Local_274, 1, sVar0, 1);
	func_285(&Local_274, 0, "bIdleLoop", 1);
	__LIB_1__::func_283(&(Local_274.f_25[4 /*3*/]), 0);
	__LIB_1__::func_283(&(Local_274.f_25[3 /*3*/]), 0);
	__LIB_1__::func_283(&(Local_274.f_25[0 /*3*/]), 0);
	__LIB_1__::func_283(&(Local_274.f_25[1 /*3*/]), 0);
	__LIB_2__::func_147(&Local_15, 16384);
	__LIB_2__::func_671(&Local_15, 1);
	__LIB_2__::func_483(&Local_15, 1);
}

bool func_294(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_2__::func_718((*iParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

char* func_295(int iParam0)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		return "PBL_BREAKOUT_B";
	}
	return "PBL_BREAKOUT_A";
}

bool func_301(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5)
{
	return func_424(iParam0, iParam1, sParam2, "", fParam3, 0, 0, 0, 1, fParam3 > 0f, bParam4, iParam5, 1, 0, 0);
}

bool func_306(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	if (__LIB_2__::func_598(iParam2, uParam0->f_63[iParam1], sParam3, iParam4, 0, 1, 0))
	{
		return true;
	}
	return false;
}

void func_307(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	char* sVar0;
	sVar0 = func_404(iParam0, iParam1);
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_63[iParam1]))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_63[iParam1], sParam2, iParam3);
}

Vector3 func_309(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_117(1, 0);
			case 1:
				return func_117(1, 1);
			case 2:
				return func_117(1, 3);
			case 3:
				return func_117(1, 4);
			case 4:
				return func_117(1, 10);
			case 5:
				return func_117(1, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_117(4, 0);
			case 1:
				return func_117(4, 1);
			case 2:
				return func_117(4, 3);
			case 3:
				return func_117(4, 4);
			case 4:
				return func_117(4, 10);
			case 5:
				return func_117(4, 2);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_310(int iParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_2__::func_73(iParam0, &iParam1, iParam2, iParam3, 0, 0);
}

void func_329(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	if (!__LIB_2__::func_1(Local_15[iParam0], 0, 1))
	{
		return;
	}
	bVar0 = __LIB_2__::func_275(&Local_274, 32);
	vVar2 = { func_431(&Local_274, iParam0) };
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	if (__LIB_2__::func_1(iParam1, 0, 1) && !PED::IS_PED_FLEEING(iParam1))
	{
		TASK::TASK_MOUNT_ANIMAL(0, iParam1, 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 2f, 20000, 2f, 0, 40000f);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474(Local_15[iParam0], &iVar1, 0, 0, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iParam0], 45, true);
	__LIB_2__::func_542(Local_15[iParam0], func_432(&Local_274, iParam0, bVar0), 8f, 0, 0);
}

void func_331(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam0;
	func_435(&Local_15, iVar0, iParam1);
}

bool func_333(float fParam0, int iParam1, int iParam2, bool bParam3)
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
	if (func_439(fParam0))
	{
		return false;
	}
	return true;
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@savages_body_fall_ambush";
		default:
			break;
	}
	return "";
}

void func_390(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	char* sVar0;
	sVar0 = func_404(iParam0, iParam1);
	if (bParam3)
	{
		iParam0->f_63[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sParam2, false, true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_63[iParam1], true, false))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_63[iParam1]);
}

bool func_391(int iParam0, int iParam1)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_63[iParam1]))
	{
		return false;
	}
	sVar0 = func_404(iParam0, iParam1);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_63[iParam1], true, false))
	{
		return false;
	}
	return true;
}

void func_392(int iParam0, int iParam1, char* sParam2)
{
	__LIB_2__::func_544(iParam0->f_63[iParam1], sParam2, func_404(iParam0, iParam1));
}

bool func_393(int iParam0, int iParam1, char* sParam2)
{
	if (__LIB_2__::func_545(iParam0->f_63[iParam1], sParam2, func_404(iParam0, iParam1)))
	{
		return true;
	}
	return false;
}

char* func_404(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "scenario@randomevent@savages_body_drop@savage_body_drop_a";
		case 1:
			return "scenario@randomevent@savages_body_drop@savage_body_drop_b";
		default:
			break;
	}
	return "INVALID ANIM SCENE";
}

bool func_424(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_511(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

Vector3 func_431(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_117(1, 8);
			case 1:
				return func_117(1, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_117(4, 8);
			case 1:
				return func_117(4, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_432(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_2__::func_275(iParam0, 1))
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return func_117(2, 0);
				case 1:
					return func_117(2, 1);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_117(2, 2);
				case 1:
					return func_117(2, 3);
				default:
					break;
			}
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return func_117(5, 0);
			case 1:
				return func_117(5, 1);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_117(5, 2);
			case 1:
				return func_117(5, 3);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1[4];
	var uVar6;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	if (iParam1 < 0 && iParam1 >= iParam0->f_215)
	{
		return;
	}
	if (iParam2 >= iParam0->f_216)
	{
		return;
	}
	if (!__LIB_2__::func_1((*iParam0)[iParam1], 0, 1))
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT((*iParam0)[iParam1]))
	{
		return;
	}
	if (iParam2 >= 0)
	{
		iVar0 = iParam0->f_40[iParam2];
	}
	else
	{
		uVar6 = 1;
		iVar8 = __LIB_2__::func_728(&uVar1, &uVar6, 4, ENTITY::GET_ENTITY_COORDS((*iParam0)[iParam1], true, false), 10f, 0, 1, 1, joaat("ANIMAL_HORSE"), 1, 0, -1082130432 /* Float: -1f */, 0, 0);
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			if (__LIB_0__::func_272(uVar1[iVar9], 0))
			{
				fVar13 = __LIB_0__::func_94(uVar1[iVar9], ENTITY::GET_ENTITY_COORDS((*iParam0)[iParam1], true, false), 1);
				if (iVar9 > 0)
				{
					if (fVar13 < fVar12)
					{
						uVar11 = uVar1[iVar9];
						uVar10 = uVar1[(iVar9 - 1)];
						uVar1[(iVar9 - 1)] = uVar11;
						uVar1[iVar9] = uVar10;
						iVar9 = (iVar9 - 1);
					}
				}
				fVar12 = fVar13;
			}
			iVar9++;
		}
		iVar0 = uVar1[0];
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar14);
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		TASK::TASK_MOUNT_ANIMAL(0, iVar0, -1, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
	}
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474((*iParam0)[iParam1], &iVar14, 0, 0, 1, 1);
	PED::_0x1854217C640B39EC((*iParam0)[iParam1], Global_35, 0f, 0f, 0f, 15f, 0, 0);
	if (!MAP::DOES_BLIP_EXIST(iParam0->f_22[iParam1]))
	{
		__LIB_2__::func_73((*iParam0)[iParam1], &(iParam0->f_22[iParam1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
}

bool func_439(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_0__::func_75(&uLocal_1) && !__LIB_1__::func_313(&uLocal_1, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_511(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (__LIB_1__::func_923())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (__LIB_2__::func_118(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = __LIB_0__::func_665(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			__LIB_1__::func_148(&uLocal_1);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (__LIB_2__::func_86(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = __LIB_0__::func_55(__LIB_2__::func_122(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

