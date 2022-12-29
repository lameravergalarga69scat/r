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
	struct<79> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_353 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_353 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_353, 961, 0);
		if (bLocal_353)
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
	while (iVar0 <= 6)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			func_125(iVar0);
			func_126(iVar0);
			PED::SET_PED_HEARING_RANGE(Local_15[iVar0], 10f);
			if (__LIB_0__::func_58(iVar0))
			{
				__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[iVar0], 0, -1, 1);
			}
			else if (__LIB_0__::func_0(iVar0))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 47, true);
			vVar3 = { func_130(&Local_274, iVar0) };
			Local_15.f_118[iVar0 /*4*/].f_1 = { vVar3 };
			switch (iVar0)
			{
				case 0:
					break;
				case 1:
					break;
				case 2:
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					break;
				case 3:
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					break;
				case 4:
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					break;
				case 5:
					__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[0], 0, -1, 1);
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					__LIB_2__::func_723(&Local_15, 0, 0);
					break;
				case 6:
					__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[1], 0, -1, 1);
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					__LIB_2__::func_723(&Local_15, 1, 0);
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
		if (func_138())
		{
			__LIB_2__::func_560();
			func_140();
			__LIB_2__::func_489(&Local_274, 3);
		}
	}
	if (Local_274.f_6 >= 2)
	{
		func_142();
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_143())
			{
				if (func_144())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_2__::func_489(&Local_274, 3);
				}
			}
			else if (func_146())
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
				if (func_149())
				{
					__LIB_2__::func_560();
					Local_274.f_66 = Local_15.f_9[0];
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
			if (func_151())
			{
				__LIB_2__::func_489(&Local_274, 2);
			}
			break;
		case 2:
			__LIB_2__::func_436(&Local_15, 0);
			func_152();
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
	func_165();
	func_142();
	Local_274.f_61 = __LIB_2__::func_207(&Local_15);
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
			__LIB_2__::func_723(&Local_15, 0, 1);
			__LIB_2__::func_723(&Local_15, 1, 1);
			__LIB_1__::func_283(&(Local_274.f_8[0 /*3*/]), 0);
			__LIB_2__::func_151(&Local_274, 1);
			break;
		case 1:
			func_169();
			if (Local_274.f_61 <= 1)
			{
				__LIB_2__::func_151(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_556(&Local_15, &(Local_274.f_57), &(Local_15.f_241), "AMBUSH_RA1_FLEE", 3f))
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
		case 1:
			Local_274 = 1;
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
	Local_15.f_215 = 7;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 2;
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
	Local_274.f_67[iParam0] = __LIB_2__::func_272(Local_15[iParam0], iVar0, -1, func_270(iParam0), 0, 0.8f, 1065353216 /* Float: 1f */, 0);
}

struct<4> func_130(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_271(0, 14);
			}
			else
			{
				return func_271(1, 14);
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_271(0, 14);
			}
			else
			{
				return func_271(1, 14);
			}
			break;
	}
	return Var0;
}

bool func_138()
{
	if (__LIB_2__::func_538(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_58), 0, 1, 1))
	{
		return true;
	}
	if (Local_274.f_5 >= 4)
	{
		return true;
	}
	return false;
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_429(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			if (__LIB_0__::func_154(__LIB_1__::func_372(Local_15[iVar0], 0)))
			{
				iVar2 = 67108864;
			}
			else
			{
				iVar2 = 0;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, iVar2, 0);
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
	__LIB_2__::func_723(&Local_15, 0, 1);
	__LIB_2__::func_723(&Local_15, 1, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

void func_142()
{
	switch (Local_274.f_64)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_8[5 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_8[5 /*3*/]), 2.25f))
			{
				__LIB_1__::func_148(&(Local_274.f_8[5 /*3*/]));
				__LIB_2__::func_725(1, 1);
				Local_274.f_64 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_8[5 /*3*/]), 1.25f))
			{
				__LIB_1__::func_148(&(Local_274.f_8[5 /*3*/]));
				__LIB_2__::func_725(2, 2);
				Local_274.f_64 = 2;
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_8[5 /*3*/]), 0.5f))
			{
				__LIB_1__::func_148(&(Local_274.f_8[5 /*3*/]));
				__LIB_2__::func_725(3, 3);
				Local_274.f_64 = 3;
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_8[5 /*3*/]), 0.75f))
			{
				__LIB_1__::func_148(&(Local_274.f_8[5 /*3*/]));
				__LIB_2__::func_725(4, 4);
				Local_274.f_64 = 4;
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_8[5 /*3*/]), 1f))
			{
				__LIB_1__::func_148(&(Local_274.f_8[5 /*3*/]));
				__LIB_2__::func_725(3, 5);
				Local_274.f_64 = 5;
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_274.f_8[5 /*3*/]), 1f))
			{
				__LIB_1__::func_148(&(Local_274.f_8[5 /*3*/]));
				__LIB_2__::func_725(4, 6);
				Local_274.f_64 = 6;
			}
			break;
		case 6:
			break;
	}
}

bool func_143()
{
	if (Local_274.f_60 >= 0)
	{
		return true;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_49[1]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_49[1], Global_36))
		{
			if (__LIB_17__::func_804(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_59), 0, (Local_15.f_215 - 1), 1))
			{
				Local_274.f_60 = Local_274.f_59;
				return true;
			}
		}
	}
	return false;
}

bool func_144()
{
	int iVar0;
	var uVar1[3];
	var uVar5[2];
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	iVar0 = Local_274.f_60;
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
			func_140();
			return true;
	}
	return false;
}

bool func_146()
{
	if (__LIB_1__::func_205(Global_35, Local_274.f_49[0], 1, 0))
	{
		if (!__LIB_1__::func_205(Global_35, Local_274.f_49[1], 1, 0))
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

bool func_149()
{
	vector3 vVar0;
	if (!__LIB_2__::func_47(&(Local_15.f_182), 64))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
	if (__LIB_2__::func_157(Local_274.f_49[2], vVar0) || __LIB_2__::func_157(Local_274.f_49[2], Global_36))
	{
		return true;
	}
	return false;
}

bool func_151()
{
	int iVar0;
	func_304();
	if (Local_274.f_6 > 3)
	{
		func_165();
	}
	switch (Local_274.f_6)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_8[1 /*3*/]), 0);
			__LIB_2__::func_278(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 0f))
			{
				func_306();
				func_307();
				func_308();
				__LIB_2__::func_278(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 1f) || __LIB_1__::func_472(Local_15[0], 10f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_278(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 0.1f))
			{
				__LIB_2__::func_189(&Local_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
				__LIB_2__::func_189(&Local_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_278(&Local_274, 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 3.5f))
			{
				iVar0 = -1;
				iVar0 = __LIB_2__::func_557(&Local_15, 3, 6, 0);
				if (iVar0 >= 0)
				{
					if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "ITS_MALE_EXTREME_RECOGNIZE", -1073741824 /* Float: -2f */, 1, 1744022339, 0))
					{
						__LIB_2__::func_277(&Local_274, 16);
						__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
						__LIB_2__::func_278(&Local_274, 6);
					}
				}
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_152()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
		}
		iVar0++;
	}
}

void func_165()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (PED::IS_PED_SHOOTING(Local_15[iVar0]) || __LIB_1__::func_472(Local_15[iVar0], 40f, 12f, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

int func_169()
{
	int iVar0;
	func_304();
	iVar0 = -1;
	if (Local_274.f_76)
	{
		if (!__LIB_2__::func_275(&Local_274, 16384))
		{
			func_327(1);
			__LIB_2__::func_277(&Local_274, 16384);
		}
		if (!__LIB_2__::func_275(&Local_274, 4096))
		{
			func_328();
			__LIB_2__::func_277(&Local_274, 4096);
		}
	}
	else if (Local_274.f_77)
	{
		if (!__LIB_2__::func_275(&Local_274, 4096))
		{
			func_328();
			__LIB_2__::func_277(&Local_274, 4096);
		}
		if (!__LIB_2__::func_275(&Local_274, 2048))
		{
			func_329();
			__LIB_2__::func_277(&Local_274, 2048);
		}
	}
	else if (Local_274.f_78)
	{
		if (!__LIB_2__::func_275(&Local_274, 16384))
		{
			func_327(0);
			__LIB_2__::func_277(&Local_274, 16384);
		}
		func_330();
	}
	else
	{
		if (!__LIB_2__::func_275(&Local_274, 16384))
		{
			if ((__LIB_1__::func_285(&(Local_274.f_8[0 /*3*/]), 10f) || (ENTITY::DOES_ENTITY_EXIST(Local_15[5]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_15[5]))) || (ENTITY::DOES_ENTITY_EXIST(Local_15[6]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_15[6])))
			{
				func_327(0);
				__LIB_2__::func_277(&Local_274, 16384);
			}
		}
		__LIB_1__::func_283(&(Local_274.f_8[0 /*3*/]), 0);
	}
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
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return 15;
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
	__LIB_2__::func_634(&(Local_15.f_152), 1);
}

void func_245()
{
	switch (Local_274)
	{
		case 0:
			func_386(&Local_15, &Local_274);
			break;
		case 1:
			func_387(&Local_15, &Local_274);
			break;
	}
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1786043829;
		case 1:
			return 1286775345;
		case 2:
			return -1394369597;
		case 3:
			return -1633878218;
		case 4:
			return 1866899594;
		case 5:
			return 1631388791;
		case 6:
			return -469693955;
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
						return func_271(0, 10);
					case 1:
						return func_271(0, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_271(1, 8);
					case 1:
						return func_271(1, 12);
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
						return func_271(2, 10);
					case 1:
						return func_271(2, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_271(3, 8);
					case 1:
						return func_271(3, 12);
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
						return func_271(0, 2);
					case 2:
						return func_271(0, 4);
					case 3:
						return func_271(0, 6);
					case 4:
						return func_271(0, 8);
					case 5:
						return func_271(0, 10);
					case 6:
						return func_271(0, 12);
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
						return func_271(1, 2);
					case 2:
						return func_271(1, 4);
					case 3:
						return func_271(1, 6);
					case 4:
						return func_271(1, 10);
					case 5:
						return func_271(1, 8);
					case 6:
						return func_271(1, 12);
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
						return func_271(2, 0);
					case 1:
						return func_271(2, 2);
					case 2:
						return func_271(2, 4);
					case 3:
						return func_271(2, 6);
					case 4:
						return func_271(2, 8);
					case 5:
						return func_271(2, 10);
					case 6:
						return func_271(2, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_271(3, 0);
					case 1:
						return func_271(3, 2);
					case 2:
						return func_271(3, 4);
					case 3:
						return func_271(3, 6);
					case 4:
						return func_271(3, 10);
					case 5:
						return func_271(3, 8);
					case 6:
						return func_271(3, 12);
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
	iVar0 = func_403(iParam0);
	return func_404(iVar0);
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_BOW");
		case 1:
			return joaat("WEAPON_BOW");
		case 2:
			return joaat("GROUP_REVOLVER");
		case 3:
			return joaat("WEAPON_BOW");
		case 4:
			return joaat("WEAPON_BOW");
		case 5:
			return joaat("GROUP_REPEATER");
		case 6:
			return joaat("GROUP_REPEATER");
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
		case 5:
			return 1;
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<4> func_271(int iParam0, int iParam1)
{
	return func_407(iParam0, iParam1);
}

void func_304()
{
	switch (Local_274.f_65)
	{
		case 0:
			if (!Local_274.f_77 && !Local_274.f_76)
			{
				Local_274.f_75 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_49[3], Global_36);
			}
			else
			{
				Local_274.f_75 = 0;
			}
			break;
		case 1:
			if (!Local_274.f_77)
			{
				Local_274.f_76 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_49[4], Global_36);
				if (Local_274.f_76)
				{
					Local_274.f_75 = 0;
				}
			}
			else
			{
				Local_274.f_76 = 0;
			}
			break;
		case 2:
			if (!Local_274.f_75)
			{
				Local_274.f_77 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_49[5], Global_36);
				if (Local_274.f_77)
				{
					Local_274.f_75 = 0;
					Local_274.f_76 = 0;
				}
			}
			else
			{
				Local_274.f_77 = 0;
			}
			break;
		case 3:
			if ((!Local_274.f_75 && !Local_274.f_76) && !Local_274.f_77)
			{
				Local_274.f_78 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_49[6], Global_36);
			}
			else
			{
				Local_274.f_78 = 0;
			}
			break;
	}
	Local_274.f_65 = (Local_274.f_65 + 1 % 4);
}

void func_306()
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
			vVar1 = { func_433(&Local_274, iVar5) };
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar5], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 3f, 20000, 6f, 0, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar5], &iVar0, fVar6, 0, 1, 1);
			func_434(vVar1, iVar5);
		}
		iVar5++;
	}
}

void func_307()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 2;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			vVar2 = { func_433(&Local_274, iVar0) };
			__LIB_2__::func_429(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			PED::FORCE_PED_MOTION_STATE(Local_15[iVar0], joaat("MOTIONSTATE_RUN"), false, 0, false);
			func_434(vVar2, iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 3f, 20000, 6f, 0, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_277(&Local_274, 32);
}

void func_308()
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
			if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "PEDTYPE_WON_FIGHT", -1073741824 /* Float: -2f */, 1, -500314840, 3))
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
}

void func_327(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 5;
	while (iVar0 <= 6)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			vVar2 = { func_433(&Local_274, iVar0) };
			__LIB_2__::func_429(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			if (bParam0)
			{
				func_434(vVar2, iVar0);
			}
			else
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
				PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_723(&Local_15, 0, 1);
	__LIB_2__::func_723(&Local_15, 1, 1);
}

void func_328()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_1__::func_733(Local_15[iVar0]);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
		}
		iVar0++;
	}
}

void func_329()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_1__::func_733(Local_15[iVar0]);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
		}
		iVar0++;
	}
}

void func_330()
{
	if (!__LIB_2__::func_275(&Local_274, 4096))
	{
		func_328();
		__LIB_2__::func_277(&Local_274, 4096);
	}
	if (!__LIB_2__::func_275(&Local_274, 2048))
	{
		func_329();
		__LIB_2__::func_277(&Local_274, 2048);
	}
	if (!__LIB_2__::func_275(&Local_274, 8192))
	{
		func_440();
		__LIB_2__::func_277(&Local_274, 8192);
	}
}

void func_386(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_49[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2056.771f, -1631.285f, 133.9564f, 0f, 0f, -70.82581f, 50.0132f, 38.95015f, 33.28282f, "volTrigger");
		iParam1->f_49[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[0], -2214.358f, -1697.23f, 95.52205f, 0f, 0f, -68.90441f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[0], -2059.568f, -1365.872f, 81.37782f, 0f, 0f, -17.40207f, 178.4207f, 446.6826f, 158.0314f);
		iParam1->f_49[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2068.243f, -1624.509f, 135.8058f, 0f, 0f, 0f, 50f, 90f, 40f, "volSection1");
		iParam1->f_49[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2112.845f, -1624.509f, 135.8058f, 0f, 0f, 0f, 50f, 90f, 40f, "volSection2");
		iParam1->f_49[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2151.958f, -1624.509f, 135.8058f, 0f, 0f, 0f, 34.97781f, 90f, 40f, "volSection3");
		iParam1->f_49[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2089.884f, -1624.694f, 132.9787f, 0f, 0f, 0f, 150f, 150f, 40f, "volEscape");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2088.124f, -1620.738f, 140.8681f, 0f, 0f, -24.20827f, 55f, 34.67696f, 60.207f, "volSlowest");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2074.322f, -1618.51f, 130.4521f, 0f, 0f, -59.77088f, 75f, 71.85218f, 46.207f, "volSlower");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0x39816F6F94F385AD(iParam0->f_182[0], -2049.897f, -1653.991f, 127.7229f, 0f, 0f, 19.51906f, 96f, 96f, 31.07839f);
		VOLUME::_0x39816F6F94F385AD(iParam0->f_182[0], -2045.64f, -1685.534f, 127.7229f, 0f, 0f, 63.5757f, 57.35083f, 96f, 31.07839f);
	}
	else
	{
		iParam1->f_49[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2123.162f, -1625.798f, 133.9564f, 0f, 0f, 4.739125f, 50.0132f, 38.95015f, 33.28282f, "volTrigger");
		iParam1->f_49[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[0], -2073.063f, -1783.979f, 95.52205f, 0f, 0f, 25.70048f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[0], -2034.146f, -1407.111f, 114.2126f, 0f, 0f, -45.78937f, 218.421f, 446.6826f, 157.5f);
		iParam1->f_49[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2134.987f, -1624.509f, 135.8058f, 0f, 0f, 0f, 50f, 90f, 40f, "volSection1");
		iParam1->f_49[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2088.852f, -1624.509f, 135.8058f, 0f, 0f, 0f, 50f, 90f, 40f, "volSection2");
		iParam1->f_49[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2050.962f, -1624.509f, 135.8058f, 0f, 0f, 0f, 50f, 90f, 40f, "volSection3");
		iParam1->f_49[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2089.884f, -1624.694f, 132.9787f, 0f, 0f, 0f, 150f, 150f, 40f, "volEscape");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2121.996f, -1624.318f, 132.0837f, 0f, 0f, 3.737861f, 99.49712f, 90.52218f, 60.207f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2074.291f, -1627.165f, 142.4431f, 0f, 0f, -89.78835f, 75f, 71.85218f, 46.207f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlowest");
		VOLUME::_0x39816F6F94F385AD(iParam0->f_182[2], -2040.034f, -1676.398f, 140.1119f, 0f, 0f, 19.51906f, 32.95591f, 96f, 71.078f);
		VOLUME::_0x39816F6F94F385AD(iParam0->f_182[2], -2045.64f, -1685.534f, 127.7229f, 0f, 0f, 63.5757f, 57.35083f, 96f, 31.07839f);
	}
}

void func_387(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_49[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2181.102f, -1199.882f, 128.475f, 0f, 0f, 48.87077f, 50.0132f, 38.95015f, 33.28282f, "volTrigger");
		iParam1->f_49[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[0], -1965.848f, -1212.549f, 122.7239f, 0f, 0f, -50.92367f, 255.8764f, 428.0513f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[0], -2054.264f, -1093.567f, 156.6425f, 0f, 0f, 93.11983f, 226.5891f, 446.6826f, 196.7095f);
		iParam1->f_49[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2172.464f, -1203.457f, 135.8058f, 0f, 0f, 43.80795f, 50f, 90f, 100f, "volSection1");
		iParam1->f_49[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2150.621f, -1182.506f, 135.8058f, 0f, 0f, 43.80796f, 50f, 90f, 110f, "volSection2");
		iParam1->f_49[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2113.103f, -1192.467f, 135.8058f, 0f, 0f, 55.93652f, 50f, 53.38319f, 120f, "volSection3");
		iParam1->f_49[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2160.24f, -1195.916f, 132.9787f, 0f, 0f, 0f, 120f, 120f, 40f, "volEscape");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2125.438f, -1192.293f, 137.5177f, 0f, 0f, 48.86473f, 53.74884f, 41.59021f, 51.07839f, "volSlowest");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2169.127f, -1191.14f, 137.5177f, 0f, 0f, 48.86473f, 87.76492f, 80.1392f, 41.07839f, "volSlower");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2223.228f, -1230.392f, 137.5177f, 0f, 0f, 22.85347f, 87.76492f, 80.1392f, 31.07839f, "volSlow");
	}
	else
	{
		iParam1->f_49[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[2], -2127.104f, -1186.501f, 128.475f, 0f, 0f, 48.87078f, 50.0132f, 38.95015f, 63.283f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[2], -2145.803f, -1153.909f, 128.475f, 0f, 0f, 13.87079f, 50.0132f, 38.95015f, 63.283f);
		iParam1->f_49[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[0], -2244.659f, -1030.634f, 153.1886f, 0f, 0f, 13.56657f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_49[0], -1985.703f, -1392.873f, 114.2126f, 0f, 0f, -128.9068f, 218.421f, 446.6826f, 157.5f);
		iParam1->f_49[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2142.818f, -1181.911f, 135.8058f, 0f, 0f, 43.80794f, 42.14489f, 90f, 100f, "volSection1");
		iParam1->f_49[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2174.85f, -1190.28f, 135.8058f, 0f, 0f, 43.80795f, 50f, 40.58413f, 110f, "volSection2");
		iParam1->f_49[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2189.41f, -1218.382f, 135.8058f, 0f, 0f, 55.93652f, 50f, 53.38319f, 120f, "volSection3");
		iParam1->f_49[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2160.24f, -1195.916f, 132.9787f, 0f, 0f, 0f, 100f, 100f, 40f, "volEscape");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2187.084f, -1212.931f, 137.5177f, 0f, 0f, 48.86473f, 53.74884f, 41.59021f, 51.07839f, "volSlowest");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2169.986f, -1215.048f, 137.5177f, 0f, 0f, 48.86473f, 87.76492f, 80.1392f, 41.07839f, "volSlower");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2135.24f, -1177.39f, 137.5177f, 0f, 0f, 37.09519f, 87.76492f, 80.1392f, 31.07839f, "volSlow");
	}
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 0;
		default:
			break;
	}
	return 0;
}

char* func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0257_G_M_M_UniMountainMen_02_WHITE_01";
		case 1:
			return "0258_G_M_M_UniMountainMen_02_WHITE_02";
		case 2:
			return "0259_G_M_M_UniMountainMen_03_NATIVE_01";
		default:
			break;
	}
	return "";
}

struct<4> func_407(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_465(iParam0, iParam1) };
	Var0.f_3 = func_466(iParam0, iParam1);
	return Var0;
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
						return func_271(0, 1);
					case 1:
						return func_271(0, 3);
					case 2:
						return func_271(0, 5);
					case 3:
						return func_271(0, 7);
					case 4:
						return func_271(0, 9);
					case 5:
						return func_271(0, 11);
					case 6:
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
						return func_271(1, 1);
					case 1:
						return func_271(1, 3);
					case 2:
						return func_271(1, 5);
					case 3:
						return func_271(1, 7);
					case 4:
						return func_271(1, 11);
					case 5:
						return func_271(1, 9);
					case 6:
						return func_271(1, 13);
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
						return func_271(2, 1);
					case 1:
						return func_271(2, 3);
					case 2:
						return func_271(2, 5);
					case 3:
						return func_271(2, 7);
					case 4:
						return func_271(2, 9);
					case 5:
						return func_271(2, 11);
					case 6:
						return func_271(2, 13);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_271(3, 1);
					case 1:
						return func_271(3, 3);
					case 2:
						return func_271(3, 5);
					case 3:
						return func_271(3, 7);
					case 4:
						return func_271(3, 11);
					case 5:
						return func_271(3, 9);
					case 6:
						return func_271(3, 13);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_434(vector3 vParam0, int iParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	fVar0 = func_537(&Local_274, iParam3);
	if (fVar0 <= 0f)
	{
		return;
	}
	iVar1 = func_538(&Local_274, iParam3);
	bVar2 = func_539(&Local_274, iParam3);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iParam3], vParam0, fVar0, iVar1, 0, 0);
	if (bVar2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iParam3], 51, true);
	}
}

void func_440()
{
	int iVar0;
	iVar0 = 5;
	while (iVar0 <= 6)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_1__::func_733(Local_15[iVar0]);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
		}
		iVar0++;
	}
}

Vector3 func_465(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2098.246f, -1648.461f, 139.012f;
				case 1:
					return -2080.881f, -1631.928f, 138.6416f;
				case 2:
					return -2088.457f, -1613.348f, 138.2414f;
				case 3:
					return -2084.401f, -1617.635f, 138.8519f;
				case 4:
					return -2070.472f, -1605.663f, 130.7831f;
				case 5:
					return -2070.572f, -1613.243f, 133.4457f;
				case 6:
					return -2106.021f, -1609.125f, 141.1525f;
				case 7:
					return -2100.06f, -1617.889f, 140.1943f;
				case 8:
					return -2116.011f, -1637.186f, 140.3243f;
				case 9:
					return -2107.542f, -1629.123f, 139.8393f;
				case 10:
					return -2138.295f, -1640.815f, 139.7862f;
				case 11:
					return -2137.497f, -1632.34f, 139.2368f;
				case 12:
					return -2149.279f, -1643.986f, 140.4282f;
				case 13:
					return -2148.019f, -1630.344f, 140.1107f;
				case 14:
					return -2129.58f, -1627.586f, 138.2925f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2119.943f, -1645.894f, 140.0127f;
				case 1:
					return -2111.693f, -1631.848f, 139.8435f;
				case 2:
					return -2095.156f, -1611.177f, 140.0767f;
				case 3:
					return -2100.283f, -1618.045f, 140.1988f;
				case 4:
					return -2059.523f, -1637.318f, 129.6808f;
				case 5:
					return -2062.871f, -1629.671f, 130.015f;
				case 6:
					return -2082.502f, -1645.151f, 138.0118f;
				case 7:
					return -2086.251f, -1630.176f, 138.5849f;
				case 8:
					return -2041.292f, -1651.146f, 130.2748f;
				case 9:
					return -2051.13f, -1651.269f, 130.0158f;
				case 10:
					return -2059.907f, -1615.867f, 132.2756f;
				case 11:
					return -2068.5f, -1620.809f, 132.2366f;
				case 12:
					return -2059.232f, -1675.387f, 132.7271f;
				case 13:
					return -2047.947f, -1667.612f, 131.9977f;
				case 14:
					return -2055.583f, -1636.619f, 129.4622f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2176.098f, -1223.023f, 130.3016f;
				case 1:
					return -2186.397f, -1217.804f, 131.4785f;
				case 2:
					return -2179.552f, -1191.763f, 133.0215f;
					Jump @1285; //curOff = 1030
					return -2183.492f, -1192.984f, 133.6087f;
					Jump @1285; //curOff = 1051
					return -2161.326f, -1197.643f, 136.4268f;
					Jump @1285; //curOff = 1072
					return -2168.061f, -1195.567f, 137.9972f;
					Jump @1285; //curOff = 1093
					return -2146.994f, -1179.973f, 133.6837f;
					Jump @1285; //curOff = 1114
					return -2154.625f, -1180.825f, 133.5341f;
					Jump @1285; //curOff = 1135
					return -2147.376f, -1198.632f, 133.0462f;
					Jump @1285; //curOff = 1156
					return -2146.872f, -1195.989f, 132.7356f;
					Jump @1285; //curOff = 1177
					return -2104.839f, -1189.491f, 127.7728f;
					Jump @1285; //curOff = 1198
					return -2121.733f, -1189.016f, 129.3967f;
					Jump @1285; //curOff = 1219
					return -2129.103f, -1174.462f, 129.9093f;
					Jump @1285; //curOff = 1240
					return -2120.36f, -1176.443f, 128.7057f;
					Jump @1285; //curOff = 1261
					return -2119.757f, -1178.036f, 128.6871f;
					Jump @1704; //curOff = 1285
					switch (iParam1)
					{
						case 0:
							return -2119.648f, -1170.006f, 129.6755f;
						case 1:
							return -2119.447f, -1170.301f, 129.586f;
						case 2:
							return -2135.167f, -1194.152f, 131.0777f;
						case 3:
							return -2127.347f, -1195.156f, 130.4287f;
						case 4:
							return -2157.747f, -1197.301f, 135.5533f;
						case 5:
							return -2161.463f, -1191.687f, 136.4271f;
						case 6:
							return -2172.693f, -1178.805f, 134.4132f;
						case 7:
							return -2164.089f, -1182.781f, 133.3002f;
						case 8:
							return -2177.985f, -1218.375f, 130.5952f;
						case 9:
							return -2186.948f, -1210.952f, 131.3802f;
						case 10:
							return -2203.224f, -1186.492f, 140.0042f;
						case 11:
							return -2200.41f, -1187.31f, 140.7101f;
						case 12:
							return -2218.831f, -1229.686f, 134.7909f;
						case 13:
							return -2200.042f, -1222.069f, 132.4794f;
						case 14:
							return -2185.606f, -1208.929f, 131.3734f;
					}
					return 0f, 0f, 0f;
				}
float func_466(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -86.9486f;
				case 1:
					return 311.0514f;
				case 2:
					return 205.0514f;
				case 3:
					return 203.0514f;
				case 4:
					return 207.0514f;
				case 5:
					return 201.0514f;
				case 6:
					return 237.0514f;
				case 7:
					return 219.0514f;
				case 8:
					return 289.9035f;
				case 9:
					return 317.9035f;
				case 10:
					return 337.9035f;
				case 11:
					return 347.9035f;
				case 12:
					return 347.9035f;
				case 13:
					return 9.9035f;
				case 14:
					return 101.1478f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -28.9486f;
				case 1:
					return 309.0514f;
				case 2:
					return 129.0514f;
				case 3:
					return 145.0514f;
				case 4:
					return 9.0514f;
				case 5:
					return 85.0514f;
				case 6:
					return -0.9486f;
				case 7:
					return 15.0514f;
				case 8:
					return 91.9035f;
				case 9:
					return 95.9035f;
				case 10:
					return 111.9035f;
				case 11:
					return 101.9035f;
				case 12:
					return 295.9035f;
				case 13:
					return 321.9035f;
				case 14:
					return -170.8522f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 31.0514f;
				case 1:
					return 33.0514f;
				case 2:
					return 149.0514f;
				case 3:
					return 157.0514f;
				case 4:
					return 113.0514f;
				case 5:
					return 117.0514f;
				case 6:
					return 107.0514f;
				case 7:
					return 115.0514f;
				case 8:
					return 25.9035f;
				case 9:
					return 45.9035f;
				case 10:
					return 69.9035f;
				case 11:
					return 71.9035f;
				case 12:
					return 267.9035f;
				case 13:
					return 261.9035f;
				case 14:
					return -26.8522f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -130.9486f;
				case 1:
					return 219.0514f;
				case 2:
					return 271.0514f;
				case 3:
					return -22.9486f;
				case 4:
					return 17.0514f;
				case 5:
					return 275.0514f;
				case 6:
					return 249.0514f;
				case 7:
					return 249.0514f;
				case 8:
					return 47.9035f;
				case 9:
					return 57.9035f;
				case 10:
					return 251.9035f;
				case 11:
					return 259.9035f;
				case 12:
					return 285.9035f;
				case 13:
					return 265.9035f;
				case 14:
					return -206.8522f;
			}
			break;
	}
	return 0f;
}

float func_537(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			return 2f;
		case 2:
		case 3:
		case 4:
			return 3f;
		case 5:
		case 6:
			return 2.5f;
		default:
			break;
	}
	return -1f;
}

int func_538(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_539(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 0;
		default:
			break;
	}
	return 0;
}

