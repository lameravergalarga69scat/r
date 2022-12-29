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
	struct<55> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, 0, 0, -1, 5, 0, 0, 0, 5 } ;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1065353216;
	var uLocal_340 = 1119092736;
	var uLocal_341 = 1092616192;
	var uLocal_342 = 1085276160;
	bool bLocal_343 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_343 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_343, 961, 0);
		if (bLocal_343)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (__LIB_2__::func_727(&ScriptParam_0))
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
				if (!__LIB_17__::func_805())
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
	int iVar2;
	vector3 vVar3;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			func_125(iVar0);
			func_126(iVar0);
			PED::SET_PED_HEARING_RANGE(Local_15[iVar0], 10f);
			if (func_127(iVar0))
			{
				__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[iVar0], 0, -1, 1);
			}
			else if (__LIB_2__::func_737(iVar0))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 47, true);
			vVar3 = { func_130(&Local_274, iVar0) };
			Local_15.f_118[iVar0 /*4*/].f_1 = { vVar3 };
			switch (iVar0)
			{
				case 0:
					PED::_0xFC3DB99C8144CD81(Local_15[iVar0], Local_274.f_40[3], 0, 0, 0);
					__LIB_2__::func_429(&Local_15, iVar0, 1);
					break;
				case 1:
					PED::_0xFC3DB99C8144CD81(Local_15[iVar0], Local_274.f_40[4], 0, 0, 0);
					__LIB_2__::func_429(&Local_15, iVar0, 1);
					break;
				case 2:
					__LIB_2__::func_429(&Local_15, iVar0, 1);
					break;
				case 3:
					__LIB_2__::func_429(&Local_15, iVar0, 1);
					break;
				case 4:
					__LIB_2__::func_429(&Local_15, iVar0, 1);
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
	if (!__LIB_2__::func_275(&Local_274, 4) && Local_274.f_3 < 1)
	{
		if (func_137())
		{
			__LIB_2__::func_560();
			func_139();
			__LIB_2__::func_489(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_141())
			{
				if (func_142())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_2__::func_489(&Local_274, 3);
				}
			}
			else if (func_144())
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
				if (func_147())
				{
					__LIB_2__::func_560();
					Local_274.f_53 = Local_15.f_9[0];
					__LIB_2__::func_500(&Local_15, 1);
					__LIB_2__::func_442(&Local_15, 1);
					__LIB_2__::func_494();
					__LIB_2__::func_489(&Local_274, 1);
				}
			}
			break;
		case 1:
			__LIB_2__::func_560();
			__LIB_2__::func_436(&Local_15, 0);
			__LIB_17__::func_806();
			if (func_150())
			{
				__LIB_2__::func_489(&Local_274, 2);
			}
			break;
		case 2:
			__LIB_2__::func_436(&Local_15, 0);
			__LIB_17__::func_807();
			__LIB_2__::func_489(&Local_274, 3);
			break;
		case 3:
			__LIB_2__::func_436(&Local_15, 0);
			return true;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	__LIB_17__::func_806();
	Local_274.f_50 = __LIB_2__::func_207(&Local_15);
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		__LIB_2__::func_208(&Local_15, iVar0, Local_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_2__::func_436(&Local_15, 0);
			if (__LIB_2__::func_1(Global_1935630.f_40, 0, 1))
			{
				PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 3, -1f);
				PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 1, -1f);
			}
			__LIB_2__::func_554(&Local_15, 1, 0, (Local_15.f_215 - 1));
			__LIB_1__::func_283(&(Local_274.f_8[0 /*3*/]), 0);
			__LIB_2__::func_151(&Local_274, 1);
			break;
		case 1:
			func_168();
			func_169();
			if (Local_274.f_50 <= 1)
			{
				__LIB_2__::func_151(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_556(&Local_15, &(Local_274.f_46), &(Local_15.f_241), "AMBUSH_RA1_FLEE", 3f))
			{
				__LIB_2__::func_535();
				__LIB_2__::func_151(&Local_274, 3);
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
	__LIB_2__::func_724(&Local_15, func_192(&Local_274), 2f);
}

bool func_83()
{
	vector3 vVar0[2];
	int iVar7;
	switch (Local_15.f_221)
	{
		case 0:
			Local_274 = 0;
			break;
		default:
			Local_274 = 0;
			break;
	}
	vVar0[0 /*3*/] = { __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221) };
	vVar0[1 /*3*/] = { __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221) };
	iVar7 = __LIB_2__::func_738(&vVar0, Global_36, 0f, 1, 0, (vVar0.x - 1), -1);
	switch (iVar7)
	{
		case 0:
			__LIB_2__::func_277(&Local_274, 1);
			break;
		case 1:
			break;
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 5;
	Local_15.f_181 = 3;
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 2, 1);
	func_244();
	func_245();
	__LIB_2__::func_41(&(Local_15.f_182), 65, 0f, 2f, 2f, 2.5f, 32768);
	return true;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_260(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_262(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_262(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_265(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_265(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125(int iParam0)
{
	char* sVar0;
	sVar0 = func_266(iParam0);
	__LIB_2__::func_133(Local_15[iParam0], sVar0, 0);
}

void func_126(int iParam0)
{
	int iVar0;
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], true, true);
	__LIB_2__::func_272(Local_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	iVar0 = func_269(iParam0);
	Local_274.f_54[iParam0] = __LIB_2__::func_272(Local_15[iParam0], iVar0, -1, func_270(iParam0), 0, 0.8f, 1065353216 /* Float: 1f */, 0);
}

bool func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

struct<4> func_130(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_271(0, 16);
			}
			else
			{
				return func_271(1, 16);
			}
			break;
	}
	return Var0;
}

bool func_137()
{
	if (__LIB_2__::func_159(&Local_15, Local_274.f_47))
	{
		if (__LIB_2__::func_538(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_47), 0, 4, 1))
		{
			return true;
		}
	}
	else
	{
		Local_274.f_47++;
	}
	if (Local_274.f_5 >= 4)
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
			if (!__LIB_2__::func_275(&Local_274, 64))
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, -500314840, 1);
				__LIB_2__::func_277(&Local_274, 64);
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_141()
{
	if (Local_274.f_49 >= 0)
	{
		return true;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_40[1]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_40[1], Global_36))
		{
			if (__LIB_17__::func_804(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_48), 0, (Local_15.f_215 - 1), 1))
			{
				Local_274.f_49 = Local_274.f_48;
				return true;
			}
		}
	}
	return false;
}

bool func_142()
{
	int iVar0;
	var uVar1[3];
	var uVar5[2];
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	iVar0 = Local_274.f_49;
	if (iVar0 < 0)
	{
		return false;
	}
	if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
	{
		return false;
	}
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			__LIB_2__::func_45(Local_15[iVar0], Global_35, -1);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_15[iVar0], Global_35, 60f))
			{
				TASK::TASK_AIM_AT_ENTITY(Local_15[iVar0], Global_35, -1, 0, 0);
				if (!__LIB_2__::func_275(&Local_274, 64))
				{
					__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, -500314840, 1);
					__LIB_2__::func_277(&Local_274, 64);
				}
				__LIB_2__::func_158(&Local_274, 2);
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
				__LIB_2__::func_158(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_2__::func_158(&Local_274, 4);
			}
			break;
		case 4:
			__LIB_2__::func_277(&Local_274, 8);
			func_139();
			return true;
	}
	return false;
}

bool func_144()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_40[1], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_40[0], 1, 0))
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

bool func_147()
{
	vector3 vVar0;
	if (!__LIB_2__::func_47(&(Local_15.f_182), 64))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
	if (__LIB_2__::func_157(Local_274.f_40[2], vVar0) || __LIB_2__::func_157(Local_274.f_40[2], Global_36))
	{
		return true;
	}
	return false;
}

bool func_150()
{
	vector3 vVar0;
	int iVar4;
	char* sVar5;
	switch (Local_274.f_6)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_8[1 /*3*/]), 0);
			PED::SET_PED_SEEING_RANGE(Local_15[0], 130f);
			PED::SET_PED_SEEING_RANGE(Local_15[1], 130f);
			__LIB_2__::func_278(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 0f))
			{
				__LIB_2__::func_429(&Local_15, 0, 1);
				__LIB_2__::func_429(&Local_15, 1, 1);
				vVar0 = { func_302(&Local_274, 1) };
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_15[1], vVar0, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_336(Local_15[0], Global_35, "BATTLE_CRY", -1073741824 /* Float: -2f */, 1, -500314840, 6);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), Local_15[0], 1);
				TASK::TASK_HORSE_ACTION(Local_15.f_40[0], 1, 0, 0);
				func_304();
				__LIB_2__::func_189(&Local_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
				__LIB_2__::func_278(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 2f) || __LIB_1__::func_472(Local_15[0], 35f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_305();
				__LIB_2__::func_189(&Local_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_278(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 0.1f))
			{
				func_306();
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_278(&Local_274, 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 3.5f))
			{
				iVar4 = -1;
				iVar4 = __LIB_2__::func_557(&Local_15, 3, 4, 0);
				if (iVar4 >= 0)
				{
					if (__LIB_2__::func_155(3, 1))
					{
						sVar5 = "ITS_MALE_EXTREME_RECOGNIZE";
					}
					else
					{
						sVar5 = "ARRIVAL_COMBAT_RAID_MALE";
					}
					if (__LIB_2__::func_336(Local_15[iVar4], Global_35, sVar5, -1073741824 /* Float: -2f */, 1, 1744022339, 0))
					{
						__LIB_2__::func_277(&Local_274, 16);
						__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
						__LIB_2__::func_278(&Local_274, 5);
					}
				}
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 0.1f))
			{
				__LIB_2__::func_278(&Local_274, 6);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_168()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else if (func_324(&Local_15, iVar0))
		{
		}
		else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[iVar0], Global_35, 17))
		{
			__LIB_0__::func_37(&(Local_274.f_24[iVar0 /*3*/]));
		}
		else
		{
			__LIB_1__::func_283(&(Local_274.f_24[iVar0 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_24[iVar0 /*3*/]), 2.5f))
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 1);
				func_325(&Local_15, iVar0);
			}
		}
		iVar0++;
	}
}

int func_169()
{
	int iVar0;
	iVar0 = -1;
	switch (Local_274.f_7)
	{
		case 0:
			__LIB_2__::func_436(&Local_15, 0);
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				iVar0 = __LIB_2__::func_557(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar0 >= 0)
				{
					if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 2))
					{
						__LIB_2__::func_280(&Local_274, 1);
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
					if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 3))
					{
						__LIB_2__::func_280(&Local_274, 3);
					}
				}
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_192(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return 26;
			}
			else
			{
				return 110;
			}
			break;
	}
	return 110;
}

void func_244()
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
}

void func_245()
{
	switch (Local_274)
	{
		case 0:
			func_382(&Local_15, &Local_274);
			break;
	}
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1825833598;
		case 1:
			return -543987717;
		case 2:
			return -193717355;
		case 3:
			return -122215397;
		case 4:
			return -937999652;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

struct<4> func_262(int iParam0, int iParam1)
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
						return func_271(0, 0);
					case 1:
						return func_271(0, 3);
					case 2:
						return func_271(0, 8);
					case 3:
						return func_271(0, 11);
					case 4:
						return func_271(0, 14);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_271(1, 0);
					case 1:
						return func_271(1, 3);
					case 2:
						return func_271(1, 8);
					case 3:
						return func_271(1, 11);
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

struct<4> func_265(int iParam0, int iParam1)
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
						return func_271(0, 0);
					case 1:
						return func_271(0, 3);
					case 2:
						return func_271(0, 7);
					case 3:
						return func_271(0, 10);
					case 4:
						return func_271(0, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_271(1, 0);
					case 1:
						return func_271(1, 3);
					case 2:
						return func_271(1, 7);
					case 3:
						return func_271(1, 10);
					case 4:
						return func_271(1, 13);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_266(int iParam0)
{
	int iVar0;
	iVar0 = func_398(iParam0);
	return func_399(iVar0);
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GROUP_SNIPER");
		case 1:
			return joaat("GROUP_SNIPER");
		case 2:
			return joaat("GROUP_REVOLVER");
		case 3:
			return joaat("GROUP_PISTOL");
		case 4:
			return joaat("WEAPON_BOW");
		default:
			break;
	}
	return joaat("GROUP_REVOLVER");
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<4> func_271(int iParam0, int iParam1)
{
	return func_402(iParam0, iParam1);
}

struct<4> func_302(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 1:
						return func_271(0, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return func_271(1, 5);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_304()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;
	float fVar6;
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
					break;
				case 1:
					fVar6 = 0.5f;
					break;
			}
			vVar1 = { func_427(&Local_274, iVar5) };
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar5], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 3f, -1, 1f, 2097152, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar5], &iVar0, fVar6, 0, 1, 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar5], 0);
		}
		iVar5++;
	}
}

void func_305()
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else if (!bVar1)
		{
			if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, -500314840, 1))
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
}

void func_306()
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
			vVar2 = { func_427(&Local_274, iVar0) };
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
				TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar0], -1, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_277(&Local_274, 32);
}

bool func_324(int iParam0, int iParam1)
{
	return __LIB_2__::func_25(iParam0, iParam1, 16777216);
}

void func_325(int iParam0, int iParam1)
{
	__LIB_2__::func_152(iParam0, iParam1, 16777216);
}

void func_382(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1417.261f, -958.28f, 57.07499f, 0f, 0f, -28.68701f, 64.46089f, 38.95015f, 22.20661f, "volTrigger");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -1564.968f, -1004.011f, 95.52205f, 0f, 0f, -68.90441f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -1341.387f, -726.6653f, 81.37782f, 0f, 0f, -27.93413f, 178.4207f, 446.6826f, 158.0314f);
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1417.999f, -955.365f, 85.10768f, 0f, 0f, -25.94628f, 55f, 55f, 60.207f, "volSlowest");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1410.182f, -960.3821f, 74.69172f, 0f, 0f, -25.94628f, 75f, 75f, 46.207f, "volSlower");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1403.816f, -963.4796f, 74.70016f, 0f, 0f, -25.94629f, 96f, 96f, 22.20661f, "volSlow");
		iParam1->f_40[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDefLook1");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1461.235f, -959.6883f, 89.668f, 0f, 0f, 47.67814f, 6.161316f, 16.85645f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1475.911f, -950.9785f, 89.668f, 0f, 0f, 47.67815f, 6.161316f, 46.20755f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1484.994f, -935.029f, 89.668f, 0f, 0f, -133.1817f, 6.161316f, 9.934599f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1472.46f, -975.5658f, 89.668f, 0f, 0f, 109.2406f, 6.161316f, 16.85645f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1460.741f, -965.9901f, 89.668f, 0f, 0f, 109.2406f, 6.161316f, 16.85645f, 10.77782f);
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDefLook2");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[4], -1445.095f, -921.5092f, 89.668f, 0f, 0f, 96.39791f, 6.161316f, 45.20755f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[4], -1419.445f, -914.5597f, 89.668f, 0f, 0f, 120.7218f, 6.161316f, 16.85645f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[4], -1433.81f, -914.2395f, 89.668f, 0f, 0f, 96.31001f, 6.161316f, 46.856f, 10.77782f);
	}
	else
	{
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1415.064f, -959.4817f, 67.73812f, 0f, 0f, -28.68701f, 64.46089f, 38.95015f, 22.20661f, "volTrigger");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -1425.71f, -1127.579f, 95.52205f, 0f, 0f, -12.77335f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -1230.843f, -823.0541f, 81.37782f, 0f, 0f, -45.78937f, 178.4207f, 446.6826f, 158.0314f);
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1420.574f, -960.6584f, 89.70017f, 0f, 0f, -25.94628f, 55f, 45.88153f, 42.20661f, "volSlowest");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1418.096f, -958.5261f, 76.57914f, 0f, 0f, -25.94628f, 75f, 75f, 32.20661f, "volSlower");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1431.158f, -950.1756f, 72.85399f, 0f, 0f, -25.94628f, 96f, 96f, 22.20661f, "volSlow");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDefLook2");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[4], -1379.393f, -959.1855f, 70.04985f, 0f, 0f, -3.532289f, 6.161316f, 12.92674f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[4], -1382.605f, -961.4832f, 71.81825f, 0f, 0f, 168.1651f, 6.161316f, 8.052384f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[4], -1376.39f, -951.3238f, 71.81825f, 0f, 0f, 134.9366f, 6.161316f, 9.768077f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[4], -1371.129f, -965.6905f, 71.81825f, 0f, 0f, 51.67056f, 3.867208f, 16.85645f, 10.77782f);
		iParam1->f_40[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDefLook1");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1395.945f, -987.0144f, 74.85802f, 0f, 0f, 118.9297f, 6.161316f, 13.06752f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1386.068f, -993.3076f, 72.78825f, 0f, 0f, -107.1892f, 6.161316f, 16.85645f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1405.261f, -995.4897f, 74.91155f, 0f, 0f, 136.5422f, 3.703378f, 15.80376f, 10.77782f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[3], -1391.597f, -988.3063f, 72.78825f, 0f, 0f, -141.3793f, 4.306787f, 11.33295f, 10.77782f);
	}
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
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
	return 0;
}

char* func_399(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "0260_G_M_M_UniMountainMen_03_NATIVE_02";
		case 0:
			return "0256_G_M_M_UniMountainMen_01_WHITE_02";
		default:
			break;
	}
	return "";
}

struct<4> func_402(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_462(iParam0, iParam1) };
	Var0.f_3 = func_463(iParam0, iParam1);
	return Var0;
}

struct<4> func_427(int iParam0, int iParam1)
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
						return func_271(0, 2);
					case 1:
						return func_271(0, 6);
					case 2:
						return func_271(0, 9);
					case 3:
						return func_271(0, 12);
					case 4:
						return func_271(0, 15);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_271(1, 2);
					case 1:
						return func_271(1, 6);
					case 2:
						return func_271(1, 9);
					case 3:
						return func_271(1, 12);
					case 4:
						return func_271(1, 15);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

Vector3 func_462(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1494.294f, -928.9326f, 88.8624f;
				case 1:
					return -1486.116f, -941.9548f, 87.5004f;
				case 2:
					return -1482.83f, -933.5018f, 87.2242f;
				case 3:
					return -1458.52f, -925.4566f, 86.7666f;
				case 4:
					return -1458.52f, -925.4566f, 86.7666f;
				case 5:
					return -1458.52f, -925.4566f, 86.7666f;
				case 6:
					return -1458.52f, -925.4566f, 86.7666f;
				case 7:
					return -1518.16f, -910.3641f, 88.125f;
				case 8:
					return -1518.034f, -910.5295f, 88.1411f;
				case 9:
					return -1475.362f, -933.4557f, 74.6536f;
				case 10:
					return -1485.531f, -885.965f, 90.5325f;
				case 11:
					return -1485.712f, -885.8972f, 90.5019f;
				case 12:
					return -1476.312f, -929.137f, 76.2f;
				case 13:
					return -1504.249f, -908.1895f, 86.4507f;
				case 14:
					return -1504.269f, -907.45f, 86.2846f;
				case 15:
					return -1469.389f, -935.0665f, 72.395f;
				case 16:
					return -1463.273f, -855.0483f, 95.7399f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1385.191f, -991.0373f, 72.2293f;
				case 1:
					return -1401.616f, -989.5637f, 73.002f;
				case 2:
					return -1394.68f, -982.2198f, 72.4709f;
				case 3:
					return -1384.54f, -960.4619f, 72.1314f;
				case 4:
					return -1384.54f, -960.4619f, 72.1314f;
				case 5:
					return -1384.54f, -960.4619f, 72.1314f;
				case 6:
					return -1384.54f, -960.4619f, 72.1314f;
				case 7:
					return -1353.862f, -1009.985f, 69.8081f;
				case 8:
					return -1353.147f, -1009.373f, 69.7281f;
				case 9:
					return -1373.772f, -983.6178f, 65.1886f;
				case 10:
					return -1327.167f, -986.0537f, 68.2802f;
				case 11:
					return -1328.191f, -987.6133f, 68.2884f;
				case 12:
					return -1366.97f, -981.0659f, 65.3673f;
				case 13:
					return -1378.709f, -988.8966f, 65.924f;
				case 14:
					return -1378.374f, -989.2316f, 66.1179f;
				case 15:
					return -1384.329f, -976.022f, 61.679f;
				case 16:
					return -1329.467f, -1038.839f, 70.324f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_463(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -102.9486f;
				case 1:
					return -52.9486f;
				case 2:
					return 253.0514f;
				case 3:
					return 214.0514f;
				case 4:
					return 214.0514f;
				case 5:
					return 199.4716f;
				case 6:
					return 197.0514f;
				case 7:
					return 287.0514f;
				case 8:
					return 289.0514f;
				case 9:
					return 243.0514f;
				case 10:
					return 163.0514f;
				case 11:
					return 173.0514f;
				case 12:
					return 237.0514f;
				case 13:
					return 263.9035f;
				case 14:
					return 265.9036f;
				case 15:
					return 239.9035f;
				case 16:
					return -50.8522f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 61.0514f;
				case 1:
					return 5.0514f;
				case 2:
					return 35.0514f;
				case 3:
					return 114.0514f;
				case 4:
					return 114.0514f;
				case 5:
					return 85.4716f;
				case 6:
					return 83.0514f;
				case 7:
					return 3.0514f;
				case 8:
					return 3.0514f;
				case 9:
					return 53.0514f;
				case 10:
					return 103.0514f;
				case 11:
					return 97.0514f;
				case 12:
					return 51.0514f;
				case 13:
					return 335.9035f;
				case 14:
					return 347.9035f;
				case 15:
					return 53.9035f;
				case 16:
					return -166.8522f;
			}
			break;
	}
	return 0f;
}

