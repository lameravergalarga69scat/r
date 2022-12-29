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
	struct<66> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, 0, 5, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 1065353216;
	var uLocal_345 = 1119092736;
	var uLocal_346 = 1092616192;
	var uLocal_347 = 1085276160;
	bool bLocal_348 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_348 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_348, 961, 0);
		if (bLocal_348)
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
				if (!__LIB_2__::func_552())
				{
					return false;
				}
				iVar1 = 0;
				while (iVar1 < Local_15.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = __LIB_2__::func_502(iVar1);
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
	iVar1 = __LIB_2__::func_502(iVar0);
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
	struct<4> Var1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			func_125(iVar0);
			func_126(iVar0);
			if (__LIB_5__::func_704(iVar0))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
			}
			if (__LIB_2__::func_486(iVar0))
			{
				__LIB_2__::func_429(&Local_15, iVar0, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 45, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 47, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 51, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 62, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
			__LIB_2__::func_487(Local_15[iVar0], Local_274.f_27[1]);
			switch (iVar0)
			{
				case 1:
					PED::_0x89F5E7ADECCCB49C(Local_15[iVar0], "intimidate");
					break;
				case 2:
					__LIB_3__::func_484(&(Local_15.f_152), Local_15[iVar0], 1, 60f, 200f, 60f);
					Var1 = { func_132(&Local_274, iVar0) };
					Local_274.f_47[0] = __LIB_2__::func_488(func_133(), Var1, Var1.f_3, 0, -1f, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_15[iVar0], Local_274.f_47[0], 0, -1, false, true, 0, false, -1f, false);
					break;
			}
			__LIB_2__::func_150(&Local_15, iVar0, -1, -1);
			__LIB_2__::func_372(&Local_15, iVar0);
		}
		iVar0++;
	}
	return true;
}

bool func_23()
{
	if (Local_274.f_3 >= 1)
	{
		if (!__LIB_2__::func_275(&Local_274, 128))
		{
			if (__LIB_2__::func_157(Local_274.f_27[5], Global_36) || __LIB_2__::func_157(Local_274.f_27[3], Global_36))
			{
				__LIB_2__::func_277(&Local_274, 128);
			}
		}
	}
	if (!__LIB_2__::func_275(&Local_274, 2))
	{
		if (func_142())
		{
			func_143();
			func_144();
			__LIB_2__::func_489(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (__LIB_2__::func_729())
			{
				if (func_147())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_2__::func_489(&Local_274, 3);
				}
			}
			else if (func_149())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_146(&Local_15, 13);
				}
			}
			else if (func_151())
			{
				func_143();
				Local_274.f_46 = __LIB_0__::func_94(Local_15[0], Global_36, 1);
				__LIB_2__::func_442(&Local_15, 1);
				__LIB_2__::func_500(&Local_15, 1);
				__LIB_2__::func_494();
				__LIB_2__::func_489(&Local_274, 1);
			}
			break;
		case 1:
			func_143();
			__LIB_2__::func_436(&Local_15, 0);
			if (func_155())
			{
				__LIB_2__::func_489(&Local_274, 2);
			}
			break;
		case 2:
			func_156();
			func_157();
			__LIB_2__::func_489(&Local_274, 3);
			break;
		case 3:
			if (!__LIB_2__::func_275(&Local_274, 4096))
			{
				__LIB_2__::func_158(&Local_274, 2);
			}
			return true;
	}
	return false;
}

bool func_31()
{
	func_171();
	func_156();
	Local_274.f_43 = __LIB_2__::func_207(&Local_15);
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_8[0 /*3*/]), 0);
			__LIB_2__::func_151(&Local_274, 1);
			break;
		case 1:
			func_174();
			if (Local_274.f_43 <= 0)
			{
				__LIB_2__::func_151(&Local_274, 2);
			}
			break;
		case 2:
			if (Local_274.f_43 <= 0)
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
	if (__LIB_2__::func_1(Local_15[2], 0, 0))
	{
		if (!__LIB_0__::func_65(&Global_1393447, 65536))
		{
			__LIB_2__::func_152(&Local_15, 2, 2);
		}
		if (__LIB_2__::func_25(&Local_15, 2, 2))
		{
			TASK::_TASK_FLEE_FROM_COORD(Local_15[2], Local_15.f_209, 0f, 0f, 0f, 300f, -1, 294912, 2f, 0);
		}
	}
	__LIB_2__::func_535();
}

bool func_83()
{
	int iVar0;
	switch (Local_15.f_221)
	{
		case 0:
			Local_274 = 0;
			break;
		default:
			Local_274 = 0;
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221), true))
	{
		__LIB_2__::func_277(&Local_274, 1);
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 0;
	Local_15.f_181 = 1;
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 2, 1);
	__LIB_2__::func_491();
	func_244();
	__LIB_2__::func_41(&(Local_15.f_182), 65, 0f, 2f, 2f, 2f, 32768);
	Local_274.f_51[0 /*3*/] = { func_246(&Local_274) };
	Local_274.f_51[1 /*3*/] = { func_247(&Local_274) };
	Local_274.f_58[0 /*3*/] = { func_248(&Local_274) };
	Local_274.f_58[1 /*3*/] = { func_249(&Local_274) };
	iVar0 = __LIB_0__::func_41(__LIB_0__::func_23());
	if (iVar0 >= 21 || iVar0 < 5)
	{
		__LIB_2__::func_277(&Local_274, 1024);
	}
	return true;
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_265(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_267(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_267(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_132(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_132(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125(int iParam0)
{
	char* sVar0;
	sVar0 = func_270(iParam0);
	__LIB_2__::func_133(Local_15[iParam0], sVar0, 0);
}

void func_126(int iParam0)
{
	int iVar0;
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], true, true);
	__LIB_2__::func_272(Local_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	iVar0 = func_273(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON_SHOTGUN_DOUBLEBARREL"):
			__LIB_2__::func_530(&Local_15, Local_15[iParam0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
			break;
		default:
			__LIB_2__::func_530(&Local_15, Local_15[iParam0], iVar0, 1);
			break;
	}
}

struct<4> func_132(int iParam0, int iParam1)
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
						return func_277(0, 0);
					case 1:
						return func_277(0, 2);
					case 2:
						return func_277(0, 14);
					case 3:
						return func_277(0, 6);
					case 4:
						return func_277(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_277(1, 0);
					case 1:
						return func_277(1, 2);
					case 2:
						return func_277(1, 14);
					case 3:
						return func_277(1, 6);
					case 4:
						return func_277(1, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

int func_133()
{
	if (__LIB_2__::func_275(&Local_274, 1024))
	{
		return joaat("WORLD_HUMAN_GUARD_LANTERN_NERVOUS");
	}
	return joaat("WORLD_HUMAN_STARE_STOIC");
}

bool func_142()
{
	if (!__LIB_2__::func_275(&Local_274, 16384) || !Local_274.f_49)
	{
		if (__LIB_2__::func_538(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_42), 0, 4, 1))
		{
			func_279(0);
			return true;
		}
	}
	if (Local_274.f_3 >= 1)
	{
		if (__LIB_0__::func_195(Local_274.f_58[0 /*3*/], Local_274.f_58[1 /*3*/], Global_36))
		{
			func_279(1);
			return true;
		}
		else if (__LIB_2__::func_275(&Local_274, 128))
		{
			if (__LIB_2__::func_157(Local_274.f_27[5], Global_36) && !__LIB_2__::func_157(Local_274.f_27[3], Global_36))
			{
				func_279(1);
				return true;
			}
		}
	}
	return false;
}

void func_143()
{
	if (!__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		Local_15.f_56 = __LIB_2__::func_379(&Local_15, 0);
		if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, false, __LIB_2__::func_160(Local_15.f_181));
		}
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (AUDIO::_0x4A98E228A936DBCC(Local_15[0]) == joaat("TAUNT_GEN_LOCATION"))
	{
		bVar2 = true;
	}
	if (__LIB_2__::func_275(&Local_274, 64))
	{
		bVar2 = true;
	}
	else if (__LIB_2__::func_1(Local_15[0], 0, 1))
	{
		__LIB_2__::func_336(Local_15[0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 2:
					__LIB_2__::func_357(Local_15[2], Global_36, 2, 0, 3);
					break;
				case 3:
				case 4:
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_15[iVar0]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_15[iVar0]))
						{
							PED::DELETE_PED(&(Local_15[iVar0]));
							Jump @324; //curOff = 200
						}
						else
						{
							__LIB_2__::func_429(&Local_15, iVar0, 1);
						}
					}
					break;
			}
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.1f, 0.3f, 1, 1);
			__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			if (!bVar2)
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_147()
{
	func_144();
	__LIB_2__::func_277(&Local_274, 4);
	return true;
}

bool func_149()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_27[2], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_27[1], 1, 0))
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

bool func_151()
{
	vector3 vVar0;
	vVar0 = { __LIB_2__::func_114(Global_35, 3f) };
	if (Local_15.f_9[2] > 60f)
	{
		return false;
	}
	if (__LIB_2__::func_157(Local_274.f_27[4], vVar0))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[2], Global_35, 17))
		{
			if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || PED::_0x06087579E7AA85A9(Local_15[2], Global_35, -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_155()
{
	vector3 vVar0;
	func_156();
	func_303();
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_0__::func_7(&(Local_274.f_65.f_3), 2);
			__LIB_0__::func_7(&(Local_274.f_65.f_3), 4);
			__LIB_1__::func_283(&(Local_274.f_8[1 /*3*/]), 0);
			vVar0 = { func_305(&Local_274, 2) };
			__LIB_2__::func_357(Local_15[2], Global_36, 2, 0, 3);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15[2], vVar0, 2f, 20000, 0.25f, 0, 40000f);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			func_306();
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 0.5f))
			{
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_336(Local_15[2], Global_35, "CALL_FOR_SUPPORT", -1073741824 /* Float: -2f */, 1, -500314840, 1);
				__LIB_2__::func_277(&Local_274, 16384);
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			func_306();
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 1.5f) || __LIB_1__::func_472(Local_15[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_307();
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 3);
			}
			break;
		case 3:
			func_306();
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 2.5f))
			{
				__LIB_2__::func_189(&Local_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
				__LIB_2__::func_189(&Local_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
				if (__LIB_2__::func_336(Local_15[0], Global_35, "TAUNT_GEN_LOCATION", -1073741824 /* Float: -2f */, 1, -500314840, 0))
				{
					__LIB_2__::func_277(&Local_274, 4096);
				}
				__LIB_2__::func_277(&Local_274, 64);
				__LIB_2__::func_277(&Local_274, 256);
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 4);
			}
			break;
		case 4:
			func_306();
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 6.5f))
			{
				__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 5);
			}
			break;
		case 5:
			func_306();
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 1f))
			{
				__LIB_2__::func_158(&Local_274, 6);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_156()
{
	int iVar0;
	bool bVar1;
	if (!__LIB_2__::func_275(&Local_274, 256) || __LIB_2__::func_275(&Local_274, 2048))
	{
		return;
	}
	if (!__LIB_0__::func_195(Local_274.f_51[0 /*3*/], Local_274.f_51[1 /*3*/], Global_36))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		iVar0 = 3;
		while (iVar0 <= 4)
		{
			if (!__LIB_2__::func_159(&Local_15, iVar0))
			{
				PED::DELETE_PED(&(Local_15[iVar0]));
			}
			iVar0++;
		}
		__LIB_2__::func_534(&Local_274, 256);
		__LIB_2__::func_277(&Local_274, 2048);
		return;
	}
	func_310(3);
	func_310(4);
	__LIB_2__::func_277(&Local_274, 2048);
}

void func_157()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
		}
		else if (!__LIB_2__::func_159(&Local_15, iVar0))
		{
		}
		else
		{
			__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			TASK::TASK_COMBAT_PED(Local_15[iVar0], Global_35, 0, 0);
		}
		iVar0++;
	}
}

void func_171()
{
	int iVar0;
	if (Local_274.f_5 < 3)
	{
		__LIB_2__::func_158(&Local_274, 3);
	}
	switch (Local_274.f_5)
	{
		case 3:
			if (!__LIB_2__::func_275(&Local_274, 4096))
			{
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 <= 4)
					{
						if (__LIB_2__::func_1(Local_15[iVar0], 0, 0) && ENTITY::IS_ENTITY_VISIBLE(Local_15[iVar0]))
						{
							__LIB_2__::func_336(Local_15[iVar0], Global_35, "TAUNT_GEN_LOCATION", -1073741824 /* Float: -2f */, 1, -500314840, 0);
						}
						else
						{
							iVar0++;
						}
					}
					__LIB_2__::func_158(&Local_274, 4);
				}
			}
			else
			{
				__LIB_2__::func_158(&Local_274, 4);
			}
			break;
		case 4:
			if (!__LIB_2__::func_275(&Local_274, 8192))
			{
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					__LIB_2__::func_158(&Local_274, 5);
				}
			}
			else
			{
				__LIB_2__::func_158(&Local_274, 5);
			}
			break;
		case 5:
			break;
	}
}

void func_174()
{
	switch (Local_274.f_45)
	{
		case 0:
			func_328();
			break;
		case 1:
			func_329();
			break;
		case 2:
			func_330();
			break;
		case 3:
			Local_274.f_43 = __LIB_2__::func_207(&Local_15);
			if (__LIB_2__::func_1(Local_15[3], 0, 1))
			{
				if (__LIB_2__::func_159(&Local_15, 3))
				{
					Local_274.f_43 = (Local_274.f_43 - 1);
				}
			}
			if (__LIB_2__::func_1(Local_15[4], 0, 1))
			{
				if (__LIB_2__::func_159(&Local_15, 4))
				{
					Local_274.f_43 = (Local_274.f_43 - 1);
				}
			}
			break;
	}
	Local_274.f_45++;
	Local_274.f_45 = (Local_274.f_45 % 6);
}

void func_244()
{
	Local_15.f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Local_15.f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	switch (Local_274)
	{
		case 0:
			func_375(&Local_15, &Local_274);
			break;
	}
}

Vector3 func_246(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_376(0, 11);
			}
			else
			{
				return func_376(1, 10);
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_247(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_376(0, 10);
			}
			else
			{
				return func_376(1, 11);
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_248(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_376(0, 12);
			}
			else
			{
				return func_376(1, 12);
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_249(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_376(0, 13);
			}
			else
			{
				return func_376(1, 13);
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -528409948;
		case 1:
			return -241779505;
		case 2:
			return 907199942;
		case 3:
			return -77803429;
		case 4:
			return 250181492;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

struct<4> func_267(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			break;
	}
	return Var0;
}

char* func_270(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_2__::func_490(iParam0);
	return func_393(iVar0);
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GROUP_REVOLVER");
		case 1:
			return joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
		case 2:
			return joaat("GROUP_REVOLVER");
		case 3:
			return joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
		case 4:
			return joaat("GROUP_REVOLVER");
		default:
			break;
	}
	return joaat("GROUP_REPEATER");
}

struct<4> func_277(int iParam0, int iParam1)
{
	return func_397(iParam0, iParam1);
}

void func_279(int iParam0)
{
	Local_274.f_7 = iParam0;
}

void func_303()
{
	if (__LIB_2__::func_275(&Local_274, 512))
	{
		return;
	}
	if (Local_274.f_5 >= 2)
	{
		if (__LIB_2__::func_1(Local_15[2], 0, 0))
		{
			if ((__LIB_0__::func_94(Local_15[2], Global_36, 0) < 9f || __LIB_0__::func_195(Local_274.f_58[0 /*3*/], Local_274.f_58[1 /*3*/], ENTITY::GET_ENTITY_COORDS(Local_15[2], true, false))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_15[2]))
			{
				TASK::CLEAR_PED_TASKS(Local_15[2], true, false);
				TASK::TASK_COMBAT_PED(Local_15[2], Global_35, 0, 0);
				__LIB_2__::func_189(&Local_15, 2, joaat("BLIP_STYLE_ENEMY"), 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[2], 45, true);
				__LIB_2__::func_277(&Local_274, 512);
			}
		}
	}
}

struct<4> func_305(int iParam0, int iParam1)
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
						return func_277(0, 1);
					case 1:
						return func_277(0, 3);
					case 2:
						return func_277(0, 15);
					case 3:
						return func_277(0, 7);
					case 4:
						return func_277(0, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_277(1, 1);
					case 1:
						return func_277(1, 3);
					case 2:
						return func_277(1, 15);
					case 3:
						return func_277(1, 7);
					case 4:
						return func_277(1, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_306()
{
	vector3 vVar0;
	if (__LIB_0__::func_51(&(Local_274.f_65.f_3), 4))
	{
		if (__LIB_0__::func_94(Local_15[2], Global_36, 0) < (9f + 3f))
		{
			__LIB_0__::func_8(&(Local_274.f_65.f_3), 4);
		}
		if (__LIB_0__::func_51(&(Local_274.f_65.f_3), 1))
		{
			__LIB_1__::func_283(&(Local_274.f_8[5 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_8[5 /*3*/]), 0.5f))
			{
				__LIB_0__::func_8(&(Local_274.f_65.f_3), 4);
			}
		}
	}
	__LIB_4__::func_151(Local_15[2], &(Local_274.f_65), vVar0, 1, 30f, (Local_274.f_46 + 2f), 3000, 4000, 1000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
}

void func_307()
{
	int iVar0;
	vector3 vVar1;
	vVar1 = { func_305(&Local_274, 0) };
	PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2f, 20000, 6f, 1, 40000f);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
	__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
	vVar1 = { func_305(&Local_274, 1) };
	PED::_SET_PED_CROUCH_MOVEMENT(Local_15[1], false, 0, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2f, 20000, 4f, 1, 40000f);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
	__LIB_1__::func_474(Local_15[1], &iVar0, 0, 0, 1, 1);
}

void func_310(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_305(&Local_274, iParam0) };
	if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("G_M_M_UNIINBRED_01"), ENTITY::GET_ENTITY_COORDS(Local_15[iParam0], true, false), true))
	{
		__LIB_2__::func_429(&Local_15, iParam0, 1);
		__LIB_2__::func_542(Local_15[iParam0], vVar0, 4f, 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iParam0], 51, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iParam0], true, 0, false);
		TASK::TASK_COMBAT_PED(Local_15[iParam0], Global_35, 0, 0);
		__LIB_2__::func_189(&Local_15, iParam0, joaat("BLIP_STYLE_ENEMY"), 0);
	}
	else
	{
		PED::DELETE_PED(&(Local_15[iParam0]));
	}
}

void func_328()
{
	int iVar0;
	int iVar1;
	iVar1 = Local_274.f_49;
	Local_274.f_49 = __LIB_2__::func_157(Local_274.f_27[5], Global_36);
	if (__LIB_2__::func_275(&Local_274, 16))
	{
		if (Local_274.f_49 == iVar1)
		{
			return;
		}
	}
	if (Local_274.f_49 || __LIB_2__::func_275(&Local_274, 256))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			switch (iVar0)
			{
				case 3:
				case 4:
					if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
					{
						PED::_0xFC3DB99C8144CD81(Local_15[iVar0], Local_274.f_27[5], 0, 0, 0);
					}
					break;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			switch (iVar0)
			{
				case 3:
				case 4:
					if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
						PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
					}
					break;
			}
			iVar0++;
		}
	}
	if (!__LIB_2__::func_275(&Local_274, 16))
	{
		__LIB_2__::func_277(&Local_274, 16);
	}
}

void func_329()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (__LIB_2__::func_167(Local_15[iVar0], 1))
				{
					__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_330()
{
	int iVar0;
	int iVar1;
	iVar1 = Local_274.f_50;
	Local_274.f_50 = __LIB_2__::func_157(Local_274.f_27[6], Global_36);
	if (__LIB_2__::func_275(&Local_274, 32))
	{
		if (Local_274.f_50 == iVar1)
		{
			return;
		}
	}
	if (Local_274.f_50)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			switch (iVar0)
			{
				case 0:
				case 1:
					if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
					{
						PED::_0xFC3DB99C8144CD81(Local_15[iVar0], Local_274.f_27[6], 0, 0, 0);
					}
					break;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			switch (iVar0)
			{
				case 0:
				case 1:
					if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
					{
						__LIB_1__::func_733(Local_15[iVar0]);
						PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar0], 2);
						PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
					}
					break;
			}
			iVar0++;
		}
	}
	if (!__LIB_2__::func_275(&Local_274, 32))
	{
		__LIB_2__::func_277(&Local_274, 32);
	}
}

void func_375(int iParam0, int iParam1)
{
	iParam1->f_27[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2814.386f, 445.5465f, 67.50465f, 0f, 0f, 62.93483f, 5.748168f, 39.38161f, 10f, "volBridge");
	iParam1->f_27[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2813.597f, 445.7023f, 59.1671f, 0f, 0f, -27f, 60f, 35f, 15f, "volBridgeDetect");
	iParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 110f, 110f, 40f, "volAmbush");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_27[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeFrontDef");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_27[6], 2827.341f, 439.3731f, 67.50465f, 0f, 0f, 62.93483f, 7f, 28.56506f, 9.370356f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_27[6], 2841.807f, 437.2561f, 64.24197f, 0f, 0f, 153.2607f, 11.81811f, 21.68164f, 9.370356f);
		iParam1->f_27[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2806.544f, 450.0001f, 67.50465f, 0f, 0f, 62.93483f, 7f, 25f, 10f, "volTrigger");
		iParam1->f_27[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_27[1], 2812.615f, 446.5732f, 47.3556f, 0f, 0f, -25.3182f, 18.13761f, 436.6708f, 30.21985f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2788.401f, 459.2708f, 67.50465f, 0f, 0f, 62.93483f, 28.68821f, 31.2372f, 10f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2803.505f, 451.5533f, 67.50465f, 0f, 0f, 62.93483f, 7.022682f, 31.2372f, 10f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2820.574f, 442.8313f, 67.50465f, 0f, 0f, 62.93483f, 7f, 28.56506f, 9.370356f, "volSlowest");
	}
	else
	{
		iParam1->f_27[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeFrontDef");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_27[6], 2803.01f, 451.7733f, 67.50465f, 0f, 0f, -117.505f, 7f, 28.56506f, 9.370356f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_27[6], 2785.092f, 461.1254f, 64.24197f, 0f, 0f, -38.17911f, 14.911f, 29.76691f, 9.370356f);
		iParam1->f_27[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2822.164f, 441.8563f, 67.32871f, 0f, 0f, -117.5f, 6.013498f, 25f, 10f, "volTrigger");
		iParam1->f_27[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_27[1], 2812.615f, 446.5732f, 47.3556f, 0f, 0f, -25.3182f, 18.13761f, 436.6708f, 30.21985f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2836.517f, 433.8827f, 64.26667f, 0f, 0f, -117.9647f, 28.68821f, 31.2372f, 13.67471f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2824.718f, 440.9388f, 67.33965f, 0f, 0f, -117.9647f, 11.79473f, 31.2372f, 10f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2811.41f, 447.2833f, 65.66281f, 0f, 0f, -117.5f, 6.206553f, 30.70701f, 10f, "volSlowest");
	}
}

Vector3 func_376(int iParam0, int iParam1)
{
	return func_442(iParam0, iParam1);
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "0201_G_M_M_UniInbred_02_WHITE_01";
		case 3:
			return "0202_G_M_M_UniInbred_02_WHITE_02";
		case 0:
			return "0203_G_M_M_UniInbred_03_WHITE_01";
		case 1:
			return "0204_G_M_M_UniInbred_03_WHITE_02";
		default:
			break;
	}
	return "NULL VOICE";
}

struct<4> func_397(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_442(iParam0, iParam1) };
	Var0.f_3 = func_455(iParam0, iParam1);
	return Var0;
}

Vector3 func_442(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2848.433f, 424.1044f, 60.6948f;
				case 1:
					return 2835.779f, 432.6186f, 62.9805f;
				case 2:
					return 2850.455f, 424.1857f, 60.9152f;
				case 3:
					return 2839.281f, 435.0548f, 62.9332f;
				case 4:
					return 2866.857f, 421.8278f, 57.4084f;
				case 5:
					return 2851.542f, 428.7724f, 61.1288f;
				case 6:
					return 2773.169f, 453.6901f, 63.1285f;
				case 7:
					return 2789.837f, 455.2997f, 63.3071f;
				case 8:
					return 2783.147f, 476.1187f, 64.6995f;
				case 9:
					return 2795.649f, 457.4213f, 63.1167f;
				case 10:
					return 2793.865f, 453.3483f, 63.1161f;
				case 11:
					return 2796.31f, 458.0719f, 63.1161f;
				case 12:
					return 2832.418f, 439.3614f, 62.9381f;
				case 13:
					return 2829.992f, 434.7186f, 63.1504f;
				case 14:
					return 2810.67f, 444.8637f, 63.16f;
				case 15:
					return 2840.276f, 432.8725f, 62.8157f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2767.616f, 463.5589f, 64.2689f;
				case 1:
					return 2792.502f, 458.9882f, 63.234f;
				case 2:
					return 2772.895f, 455.4396f, 63.5738f;
				case 3:
					return 2792.29f, 455.1511f, 63.0194f;
				case 4:
					return 2779.521f, 476.6382f, 64.8698f;
				case 5:
					return 2782.588f, 462.7441f, 63.8536f;
				case 6:
					return 2828.263f, 440.9055f, 60.6386f;
				case 7:
					return 2837.239f, 436.0082f, 63.1217f;
				case 8:
					return 2827.743f, 436.4536f, 60.8378f;
				case 9:
					return 2835.602f, 432.9884f, 63.1105f;
				case 10:
					return 2833.772f, 432.7891f, 63.1372f;
				case 11:
					return 2836.068f, 437.4854f, 63.1527f;
				case 12:
					return 2795.639f, 452.4401f, 63.1119f;
				case 13:
					return 2798.028f, 457.0869f, 63.112f;
				case 14:
					return 2810.691f, 444.8605f, 63.1601f;
				case 15:
					return 2790.076f, 458.0055f, 63.3041f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_455(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 51.0514f;
				case 1:
					return 61.0514f;
				case 2:
					return 39.0514f;
				case 3:
					return 77.0514f;
				case 4:
					return 43.9035f;
				case 5:
					return 71.9035f;
				case 6:
					return 299.9035f;
				case 7:
					return 271.9035f;
				case 8:
					return 213.0514f;
				case 9:
					return 233.0514f;
				case 10:
					return 333.7151f;
				case 11:
					return 153.7151f;
				case 12:
					return 151.7151f;
				case 13:
					return 331.7151f;
				case 14:
					return 151.8734f;
				case 15:
					return 273.8734f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 259.949f;
				case 1:
					return 239.949f;
				case 2:
					return 279.949f;
				case 3:
					return 255.949f;
				case 4:
					return 164.8011f;
				case 5:
					return 238.8011f;
				case 6:
					return 284.8012f;
				case 7:
					return 98.8012f;
				case 8:
					return 245.949f;
				case 9:
					return 53.949f;
				case 10:
					return 333.7151f;
				case 11:
					return 151.7151f;
				case 12:
					return 333.7151f;
				case 13:
					return 153.7151f;
				case 14:
					return 151.8734f;
				case 15:
					return 57.8734f;
			}
			break;
	}
	return 0f;
}

