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
	struct<36> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 0, 5 } ;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	bool bLocal_313 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_313 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_313, 961, 0);
		if (bLocal_313)
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
	fVar5 = func_109(iVar0);
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
	if (Local_274 == 1)
	{
		__LIB_2__::func_426(&(Local_15[2]));
		__LIB_2__::func_426(&(Local_15.f_40[2]));
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (iVar0 == 3)
			{
				if (func_126(&Local_274))
				{
					__LIB_2__::func_426(&(Local_15[iVar0]));
					__LIB_2__::func_426(&(Local_15.f_40[iVar0]));
				}
				else
				{
					__LIB_2__::func_133(Local_15[iVar0], func_127(&Local_274, iVar0), 0);
					if (func_129(&Local_15, &Local_274, iVar0))
					{
						if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
						{
							PED::_SET_PED_ON_MOUNT(Local_15[iVar0], Local_15.f_40[iVar0], -1, true);
						}
					}
					else if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
					{
						PED::SET_PED_CONFIG_FLAG(Local_15.f_40[iVar0], 136, false);
						PED::_0x06D26A96CA1BCA75(Local_15.f_40[iVar0], 3, 0f, 0);
						PED::_0x06D26A96CA1BCA75(Local_15.f_40[iVar0], 1, 0f, 0);
						PED::_0x2EB75FB86C41F026(Local_15.f_40[iVar0], 3, 0);
						PED::_0x2EB75FB86C41F026(Local_15.f_40[iVar0], 1, 0);
					}
					switch (iVar0)
					{
						case 0:
							PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
							break;
						case 1:
							TASK::TASK_STAND_STILL(Local_15[iVar0], -1);
							break;
					}
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], true, true);
					switch (iVar0)
					{
						case 0:
						case 1:
						case 3:
							__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							break;
						default:
							__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							break;
					}
					func_131(&Local_15, iVar0);
				}
				iVar0++;
				return true;
			}
		}
	}
}

bool func_23()
{
	vector3 vVar0;
	int iVar3;
	if (!__LIB_2__::func_275(&Local_274, 8))
	{
		if (func_135())
		{
			__LIB_2__::func_560();
			func_137();
			__LIB_2__::func_151(&Local_274, 3);
		}
	}
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
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
			else if (func_144())
			{
				__LIB_2__::func_560();
				vVar0 = { func_145(&Local_274, 0) };
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				__LIB_1__::func_474(Local_15[0], &iVar3, 0, 0, 1, 1);
				__LIB_2__::func_442(&Local_15, 1);
				__LIB_2__::func_500(&Local_15, 1);
				__LIB_2__::func_494();
				__LIB_2__::func_151(&Local_274, 1);
			}
			break;
		case 1:
			__LIB_2__::func_560();
			func_148();
			if (func_149())
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
	Local_274.f_35 = __LIB_2__::func_658(&Local_15);
	func_148();
	func_164();
	if (!PED::IS_PED_INJURED(Local_15[2]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_15[2], 242628503, true) == 1)
		{
			if (__LIB_0__::func_665(Local_15[2], Global_35, 1, 1) < 18f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_15[2], 780511057, true) == 8)
				{
					TASK::TASK_COMBAT_PED(Local_15[2], Global_35, 0, 0);
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		__LIB_2__::func_208(&Local_15, iVar0, Local_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_8[0 /*3*/]), 0);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			if (Local_274.f_35 <= 1)
			{
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_556(&Local_15, &(Local_274.f_32), &(Local_274.f_8[4 /*3*/]), "COMBAT_FLEE", 8f))
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
	AUDIO::_0x531A78D6BF27014B("GAROA_Sounds");
	__LIB_2__::func_535();
}

bool func_83()
{
	float fVar0[2];
	int iVar3;
	int iVar4;
	switch (Local_15.f_151)
	{
		case 36:
			func_236(&Local_274);
			func_237(&Local_274);
			break;
		case 2:
			if (Local_15.f_151 == 2)
			{
				func_236(&Local_274);
				if (__LIB_2__::func_633(0) || __LIB_2__::func_4(&Local_15, 2))
				{
					func_237(&Local_274);
				}
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
		default:
			Local_274 = 0;
			break;
	}
	fVar0[0] = 1E+10f;
	fVar0[1] = 1E+10f;
	fVar0[0] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221));
	fVar0[1] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221));
	iVar4 = 0;
	iVar3 = 1;
	while (iVar3 <= 1)
	{
		if (fVar0[iVar3] < fVar0[iVar4])
		{
			iVar4 = iVar3;
		}
		iVar3++;
	}
	switch (iVar4)
	{
		case 0:
			__LIB_2__::func_277(&Local_274, 1);
			break;
		case 1:
			__LIB_2__::func_277(&Local_274, 2);
			break;
		case 2:
			__LIB_2__::func_277(&Local_274, 2);
			break;
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 5;
	if (func_240(&Local_274))
	{
		Local_15.f_181 = -1;
	}
	else
	{
		Local_15.f_181 = 0;
	}
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 2, 1);
	func_242();
	__LIB_2__::func_491();
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_3)
	{
		case 0:
			__LIB_2__::func_187();
			func_254(&Local_15, &Local_274);
			AUDIO::_0xD9130842D7226045("GAROA_Sounds", 0);
			Local_274.f_3 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!AUDIO::_0xD9130842D7226045("GAROA_SOUNDS", 0))
			{
				iVar0 = 0;
			}
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!func_256(&Local_15, &Local_274))
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
	return func_257(iVar0);
}

int func_97(int iParam0)
{
	return func_258(&Local_274, iParam0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_260(&Local_274, iVar0);
}

var func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_261(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_264(&Local_274, iVar0);
}

float func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_265(&Local_274, iVar0);
}

bool func_126(int iParam0)
{
	return iParam0->f_37;
}

char* func_127(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_266(iParam0, iParam1);
	return func_267(iVar0);
}

bool func_129(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_131(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*iParam0)[iParam1], 0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
		case 4:
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 2);
			break;
		default:
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 1);
			break;
	}
	PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
}

bool func_135()
{
	if (Local_274.f_33 > (Local_15.f_215 - 1) || Local_274.f_33 < 0)
	{
		Local_274.f_33 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[Local_274.f_33]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_40[Local_274.f_33], Global_35, 1, 1))
		{
			return true;
		}
	}
	if (__LIB_2__::func_538(&Local_15, &(Local_15.f_152), &(Local_15.f_152.f_16), &(Local_274.f_33), 0, (Local_15.f_215 - 1), 1))
	{
		return true;
	}
	if (__LIB_2__::func_275(&Local_274, 16))
	{
		return true;
	}
	return false;
}

void func_137()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.3f, 1f, 1, 1);
			if (!__LIB_2__::func_275(&Local_274, 1024))
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "CALLOUT_JUST_KILL_EM_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				__LIB_2__::func_277(&Local_274, 1024);
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_139()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_27[2]))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_27[2], 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_140()
{
	func_137();
	__LIB_2__::func_277(&Local_274, 16);
	return true;
}

bool func_142()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_27[2], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_27[1], 1, 0))
		{
			if (!__LIB_1__::func_205(Global_35, Local_274.f_27[3], 0, 0))
			{
				__LIB_0__::func_11(&Local_15, 7);
				return true;
			}
		}
	}
	if (func_277(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_144()
{
	vector3 vVar0;
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	if (__LIB_2__::func_157(Local_274.f_27[3], vVar0))
	{
		return true;
	}
	return false;
}

Vector3 func_145(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 3:
						return func_280(0, 1);
					case 4:
						return func_280(0, 3);
					case 0:
						return func_280(0, 5);
					case 1:
						return func_280(0, 7);
					case 2:
						return func_280(0, 9);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_275(iParam0, 2))
			{
				switch (iParam1)
				{
					case 3:
						return func_280(1, 1);
					case 4:
						return func_280(1, 3);
					case 0:
						return func_280(1, 5);
					case 1:
						return func_280(1, 7);
					case 2:
						return func_280(1, 9);
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
					case 3:
						return func_280(3, 9);
					case 4:
						return func_280(3, 7);
					case 0:
						return func_280(3, 3);
					case 1:
						return func_280(3, 1);
					case 2:
						return func_280(3, 5);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_275(iParam0, 2))
			{
				switch (iParam1)
				{
					case 3:
						return func_280(2, 9);
					case 4:
						return func_280(2, 7);
					case 0:
						return func_280(2, 3);
					case 1:
						return func_280(2, 1);
					case 2:
						return func_280(2, 5);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_148()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (PED::IS_PED_SHOOTING(Local_15[iVar0]) || (__LIB_1__::func_472(Local_15[iVar0], 1116471296 /* Float: 70f */, 10f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) && iVar0 != 0))
				{
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_149()
{
	int iVar0;
	switch (Local_274.f_6)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_8[1 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 0.5f))
			{
				func_284();
				__LIB_2__::func_278(&Local_274, 1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_163(Local_15[0], 242628503))
			{
				__LIB_2__::func_28(&Local_15, 0, 64);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
				TASK::TASK_COMBAT_PED_TIMED(0, Global_35, 10000, 0);
				TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 2.5f, 1, 10f, 10f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
				PED::SET_COMBAT_FLOAT(Local_15[0], 32, 10f);
				__LIB_2__::func_278(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_8[1 /*3*/]), 1.25f))
			{
				if (!func_126(&Local_274))
				{
					__LIB_2__::func_336(Local_15[0], Global_35, "ITS_MALE_EXTREME_RECOGNIZE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				}
				else if (func_240(&Local_274))
				{
					__LIB_2__::func_336(Local_15[0], Global_35, "CALL_FOR_SUPPORT", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
				}
				else
				{
					__LIB_2__::func_336(Local_15[0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 3);
				}
				__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				__LIB_2__::func_278(&Local_274, 3);
			}
			break;
		case 3:
			__LIB_1__::func_283(&(Local_274.f_8[2 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 0.25f))
			{
				func_287();
				__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
				__LIB_2__::func_278(&Local_274, 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_8[2 /*3*/]), 0.5f))
			{
				func_288();
				__LIB_1__::func_148(&(Local_274.f_8[2 /*3*/]));
				__LIB_2__::func_278(&Local_274, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

int func_164()
{
	int iVar0;
	if (!func_126(&Local_274))
	{
		return 0;
	}
	switch (Local_274.f_7)
	{
		case 0:
			if (__LIB_1__::func_285(&(Local_274.f_8[0 /*3*/]), 3f))
			{
				if (!func_240(&Local_274))
				{
					iVar0 = func_306(0, (Local_15.f_215 - 1), 1, 4);
				}
				else
				{
					iVar0 = func_306(0, (Local_15.f_215 - 1), 1, 6);
				}
				if (__LIB_2__::func_654(iVar0))
				{
					if (func_240(&Local_274))
					{
						__LIB_2__::func_336(Local_15[iVar0], Global_35, "TAUNT_GEN_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 4);
					}
					else
					{
						__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_RAID_NEUTRAL", -1073741824 /* Float: -2f */, 1, 1744022339, 1);
					}
					__LIB_1__::func_283(&(Local_274.f_8[3 /*3*/]), 0);
					__LIB_2__::func_280(&Local_274, 1);
				}
				else
				{
					__LIB_2__::func_280(&Local_274, 1);
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_8[3 /*3*/]), 6f))
			{
				if (!func_240(&Local_274))
				{
					iVar0 = func_306(0, (Local_15.f_215 - 1), 1, 3);
				}
				else
				{
					iVar0 = func_306(0, (Local_15.f_215 - 1), 1, 6);
				}
				if (__LIB_2__::func_654(iVar0))
				{
					if (func_240(&Local_274))
					{
						__LIB_2__::func_336(Local_15[iVar0], Global_35, "TAUNT_GEN_NEUTRAL", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
					}
					else
					{
						__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_RAID_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 3);
					}
					__LIB_1__::func_148(&(Local_274.f_8[3 /*3*/]));
					__LIB_2__::func_280(&Local_274, 2);
				}
				else
				{
					__LIB_2__::func_280(&Local_274, 3);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_8[3 /*3*/]), 12f))
			{
				iVar0 = __LIB_2__::func_656(0, 4);
				if (__LIB_2__::func_654(iVar0))
				{
					__LIB_1__::func_148(&(Local_274.f_8[3 /*3*/]));
					__LIB_2__::func_280(&Local_274, 3);
				}
				else
				{
					__LIB_2__::func_280(&Local_274, 3);
				}
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_236(int iParam0)
{
	iParam0->f_37 = 1;
}

void func_237(int iParam0)
{
	iParam0->f_38 = 1;
}

bool func_240(int iParam0)
{
	return iParam0->f_38;
}

void func_242()
{
	switch (Local_274)
	{
		case 0:
			func_359();
			break;
		case 1:
			func_360();
			break;
	}
}

void func_254(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = func_258(iParam1, iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_256(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = func_258(iParam1, iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_257(int iParam0)
{
	if (!func_240(&Local_274))
	{
		switch (iParam0)
		{
			case 0:
				return 430539445;
			case 1:
				return -802951245;
			case 2:
				return -648674793;
			case 3:
				return -512584123;
			case 4:
				return -1144894751;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1922340057;
			case 1:
				return -1835618648;
			case 2:
				return -1605285347;
			case 3:
				return 1193711561;
			default:
				break;
		}
	}
	return __LIB_2__::func_16();
}

int func_258(int iParam0, int iParam1)
{
	if (func_240(iParam0))
	{
		return joaat("G_M_M_UNICRIMINALS_01");
	}
	return joaat("G_M_M_UNIDUSTER_01");
}

Vector3 func_260(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_371(iParam0, iParam1) };
	return vVar0;
}

var func_261(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_371(iParam0, iParam1) };
	return Var0.f_3;
}

Vector3 func_264(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 3:
						return func_280(0, 0);
					case 4:
						return func_280(0, 2);
					case 0:
						return func_280(0, 4);
					case 1:
						return func_280(0, 6);
					case 2:
						return func_280(0, 8);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_275(iParam0, 2))
			{
				switch (iParam1)
				{
					case 3:
						return func_280(1, 0);
					case 4:
						return func_280(1, 2);
					case 0:
						return func_280(1, 4);
					case 1:
						return func_280(1, 6);
					case 2:
						return func_280(1, 8);
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
					case 3:
						return func_280(3, 8);
					case 4:
						return func_280(3, 6);
					case 0:
						return func_280(3, 2);
					case 1:
						return func_280(3, 0);
					case 2:
						return func_280(3, 4);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_275(iParam0, 2))
			{
				switch (iParam1)
				{
					case 3:
						return func_280(2, 8);
					case 4:
						return func_280(2, 6);
					case 0:
						return func_280(2, 2);
					case 1:
						return func_280(2, 0);
					case 2:
						return func_280(2, 4);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_265(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 3:
						return func_377(0, 0);
					case 4:
						return func_377(0, 2);
					case 0:
						return func_377(0, 4);
					case 1:
						return func_377(0, 6);
					case 2:
						return func_377(0, 8);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_275(iParam0, 2))
			{
				switch (iParam1)
				{
					case 3:
						return func_377(1, 0);
					case 4:
						return func_377(1, 2);
					case 0:
						return func_377(1, 4);
					case 1:
						return func_377(1, 6);
					case 2:
						return func_377(1, 8);
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
					case 3:
						return func_377(3, 8);
					case 4:
						return func_377(3, 6);
					case 0:
						return func_377(3, 2);
					case 1:
						return func_377(3, 0);
					case 2:
						return func_377(3, 4);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_275(iParam0, 2))
			{
				switch (iParam1)
				{
					case 3:
						return func_377(2, 8);
					case 4:
						return func_377(2, 6);
					case 0:
						return func_377(2, 2);
					case 1:
						return func_377(2, 0);
					case 2:
						return func_377(2, 4);
					default:
						break;
				}
			}
			break;
	}
	return 0f;
}

int func_266(int iParam0, int iParam1)
{
	if (func_240(iParam0))
	{
		switch (iParam1)
		{
			case 3:
				return 6;
			case 4:
				return 6;
			case 0:
				return 5;
			case 1:
				return 5;
			case 2:
				return 6;
			default:
				break;
		}
	}
	else if (func_126(iParam0))
	{
		switch (iParam1)
		{
			case 3:
				return 3;
			case 4:
				return 4;
			case 0:
				return 2;
			case 1:
				return 3;
			case 2:
				return 4;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return 1;
			case 4:
				return 1;
			case 0:
				return 0;
			case 1:
				return 0;
			case 2:
				return 1;
			default:
				break;
		}
	}
	return -1;
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 1:
			return "0361_G_M_M_UniDuster_03_WHITE_01";
		case 2:
			return "0356_G_M_M_UniDuster_01_WHITE_02";
		case 3:
			return "0362_G_M_M_UniDuster_03_WHITE_02";
		case 4:
			return "0359_G_M_M_UniDuster_02_IRISH_01";
		case 5:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 6:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		default:
			break;
	}
	return "NULL VOICE";
}

bool func_277(int iParam0)
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
			if (func_387(iParam0))
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
			if (func_389(iParam0))
			{
				__LIB_0__::func_11(iParam0, 4);
				return true;
			}
			break;
		case 4:
			if (func_390(iParam0))
			{
				__LIB_0__::func_11(iParam0, 5);
				return true;
			}
			break;
		case 5:
			if (func_391(iParam0))
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

Vector3 func_280(int iParam0, int iParam1)
{
	return func_393(iParam0, iParam1);
}

void func_284()
{
	AUDIO::_PLAY_SOUND_FROM_ENTITY("ALERT_WHISTLE_02", Local_15[0], "GAROA_Sounds", false, 0, 0);
	MAP::_TRIGGER_SONAR_BLIP_2(1891783641, Local_15[0]);
	__LIB_1__::func_148(&(Local_274.f_8[1 /*3*/]));
}

void func_287()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	if (__LIB_2__::func_275(&Local_274, 128))
	{
		return;
	}
	fVar5 = 0f;
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		if (iVar3 == 0)
		{
		}
		else if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			vVar0 = { func_145(&Local_274, iVar3) };
			if (func_129(&Local_15, &Local_274, iVar3))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar3], vVar0, 6f, 0, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar3], 51, true);
			}
			else
			{
				if (__LIB_2__::func_1(Local_15.f_40[iVar3], 0, 0))
				{
					if (PED::_0x33FA048675821DA7(Local_15.f_40[iVar3], 1))
					{
						PED::_0x06D26A96CA1BCA75(Local_15.f_40[iVar3], 1, 0f, 0);
					}
					if (PED::_0x33FA048675821DA7(Local_15.f_40[iVar3], 3))
					{
						PED::_0x06D26A96CA1BCA75(Local_15.f_40[iVar3], 3, 0f, 0);
					}
				}
				PED::SET_PED_COMBAT_RANGE(Local_15[iVar3], 0);
			}
			switch (iVar3)
			{
				case 0:
					Jump @367; //curOff = 221
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					switch (iVar3)
					{
						case 0:
						case 1:
							__LIB_2__::func_28(&Local_15, iVar3, 64);
							TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar3], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
							break;
						case 2:
							TASK::TASK_STAND_STILL(0, 500);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 3f, 1, 5f, 1082130432 /* Float: 4f */, 1, 1, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							break;
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar5, 0, 1, 1);
				}
				iVar3++;
			}
			__LIB_2__::func_277(&Local_274, 128);
		}
void func_288()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	fVar5 = 0f;
	iVar3 = 3;
	while (iVar3 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar3], 0, 0))
		{
			vVar0 = { func_145(&Local_274, iVar3) };
			switch (iVar3)
			{
				case 3:
					fVar5 = 0f;
					break;
				case 4:
					fVar5 = 1.5f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			if (!func_129(&Local_15, &Local_274, iVar3))
			{
				__LIB_2__::func_28(&Local_15, iVar3, 64);
				TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar3], -1, -1, 3f, 1, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar3], &iVar4, fVar5, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar3], vVar0, 8f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar3], 51, true);
		}
		iVar3++;
	}
}

int func_306(int iParam0, int iParam1, bool bParam2, int iParam3)
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
				if (iParam3 == -1 || iParam3 == func_266(&Local_274, iVar2))
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

void func_359()
{
	if (__LIB_2__::func_275(&Local_274, 1))
	{
		Local_15.f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(35.50145f, 576.9532f, 139.06f, 0f, 0f, -17.34077f, 121.0195f, 54.21328f, 40f, "volAmbientKillArea");
		Local_274.f_27[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[1], 116.7431f, 708.0041f, 142.806f, 0f, 0f, 77.4386f, 240f, 30f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[1], 54.49036f, 428.6175f, 142.806f, 0f, 0f, 77.4386f, 240f, 30f, 100f);
		Local_274.f_27[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_27[3], 70.25137f, 572.1392f, 139.0669f, 0f, 0f, -90f, 35f, 35f, 20f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[3], 27.9469f, 584.1371f, 139.06f, 0f, 0f, -17.34077f, 65.532f, 55.77899f, 40f);
		Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_27[2], 56.0282f, 534.1464f, 141.1838f, 0f, 0f, -90f, 28f, 28f, 20f);
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_27[2], 40.61783f, 539.5875f, 141.1838f, 0f, 0f, -90f, 28f, 28f, 20f);
	}
	else if (__LIB_2__::func_275(&Local_274, 2))
	{
		Local_15.f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(41.44586f, 575.0972f, 139.06f, 0f, 0f, -17.34077f, 102.4975f, 54.21328f, 40f, "volAmbientKillArea");
		Local_274.f_27[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[1], 66.32392f, 712.1138f, 142.806f, 0f, 0f, 77.43861f, 240f, 30f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[1], 4.071136f, 432.7272f, 142.806f, 0f, 0f, 77.43861f, 240f, 30f, 100f);
		Local_274.f_27[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[3], 30.98099f, 577.4937f, 139.0669f, 0f, 0f, -90f, 35f, 27.025f, 20f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[3], 63.23982f, 568.0176f, 140.2841f, 0f, 0f, -9.999998f, 35f, 73f, 40f);
		Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_27[2], -33.86342f, 560.1264f, 129.0215f, 0f, 0f, -90f, 28f, 28f, 20f);
	}
}

void func_360()
{
	if (__LIB_2__::func_275(&Local_274, 1))
	{
		Local_15.f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
		VOLUME::_0x39816F6F94F385AD(Local_15.f_239, 72.78621f, 402.6582f, 139.06f, 0f, 0f, 79.91003f, 25.46639f, 23.49125f, 40f);
		VOLUME::_0x39816F6F94F385AD(Local_15.f_239, 162.7676f, 458.5815f, 139.06f, 0f, 0f, 79.91003f, 16.3691f, 23.49125f, 40f);
		VOLUME::_0x39816F6F94F385AD(Local_15.f_239, 113.9245f, 431.0109f, 139.06f, 0f, 0f, 31.64108f, 105.4348f, 23.49125f, 40f);
		Local_274.f_27[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[1], 28.17996f, 568.3807f, 142.806f, 0f, 0f, 141.1481f, 240f, 252.7323f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[1], 212.7044f, 454.1687f, 142.806f, 0f, 0f, 172.1582f, 240f, 190.2177f, 100f);
		Local_274.f_27[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_27[3], 115.9221f, 432.0923f, 130.5853f, 0f, 0f, -39.66824f, 35f, 35f, 20f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[3], 90.45341f, 423.4971f, 130.5784f, 0f, 0f, 32.991f, 47.79399f, 31.67282f, 40f);
		Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_27[2], 146.2964f, 432.9907f, 134.0572f, 0f, 0f, -90f, 46f, 46f, 20f);
	}
	else if (__LIB_2__::func_275(&Local_274, 2))
	{
		Local_15.f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
		VOLUME::_0x39816F6F94F385AD(Local_15.f_239, 72.78621f, 402.6582f, 139.06f, 0f, 0f, 79.91003f, 25.46639f, 23.49125f, 40f);
		VOLUME::_0x39816F6F94F385AD(Local_15.f_239, 162.7676f, 458.5815f, 139.06f, 0f, 0f, 79.91003f, 16.3691f, 23.49125f, 40f);
		VOLUME::_0x39816F6F94F385AD(Local_15.f_239, 113.9245f, 431.0109f, 139.06f, 0f, 0f, 31.64108f, 105.4348f, 23.49125f, 40f);
		Local_274.f_27[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[1], -15.8843f, 469.0493f, 156.2623f, 0f, 0f, 34.12152f, 237.5718f, 157.5148f, 100f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_27[1], 84.87366f, 308.1975f, 156.2623f, 0f, 0f, 26.88331f, 232.0337f, 157.5148f, 100f);
		Local_274.f_27[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(114.9353f, 431.5237f, 139.0669f, 0f, 0f, -149.297f, 53.693f, 43.36223f, 20f, "volTrigger");
		Local_274.f_27[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_27[2], 112.7248f, 415.2516f, 135.0042f, 0f, 0f, -90f, 38f, 38f, 20f);
	}
}

struct<4> func_371(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 3:
						return func_416(0, 0);
					case 4:
						return func_416(0, 12);
					case 0:
						return func_416(0, 10);
					case 1:
						return func_416(0, 11);
					case 2:
						return func_416(0, 8);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_275(iParam0, 2))
			{
				switch (iParam1)
				{
					case 3:
						return func_416(1, 0);
					case 4:
						return func_416(1, 12);
					case 0:
						return func_416(1, 11);
					case 1:
						return func_416(1, 10);
					case 2:
						return func_416(1, 8);
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
					case 3:
						return func_416(3, 8);
					case 4:
						return func_416(3, 12);
					case 0:
						return func_416(3, 11);
					case 1:
						return func_416(3, 10);
					case 2:
						return func_416(3, 4);
					default:
						break;
				}
			}
			else if (__LIB_2__::func_275(iParam0, 2))
			{
				switch (iParam1)
				{
					case 3:
						return func_416(2, 8);
					case 4:
						return func_416(2, 12);
					case 0:
						return func_416(2, 11);
					case 1:
						return func_416(2, 10);
					case 2:
						return func_416(2, 4);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

float func_377(int iParam0, int iParam1)
{
	return func_421(iParam0, iParam1);
}

bool func_387(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 131072))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!__LIB_2__::func_4(iParam0, 16777216) || iParam0->f_20 < 90f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_389(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 262144))
	{
		if (iParam0->f_20 < 90f)
		{
			if (__LIB_2__::func_437(iParam0, 90f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_390(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 524288))
	{
		if (iParam0->f_20 < 90f)
		{
			if (__LIB_2__::func_300(iParam0, 90f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_391(int iParam0)
{
	if (!__LIB_2__::func_8(iParam0->f_151))
	{
		if (iParam0->f_20 < 90f)
		{
			if (__LIB_2__::func_232(iParam0->f_151, iParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_393(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 98.7936f, 575.1564f, 135.0931f;
				case 1:
					return 83.8405f, 571.3033f, 137.1273f;
				case 2:
					return 110.0587f, 564.6708f, 139.0474f;
				case 3:
					return 103.3335f, 557.9889f, 140.6115f;
				case 4:
					return 24.4115f, 556.11f, 140.8829f;
				case 5:
					return 23.8044f, 557.5463f, 140.7447f;
				case 6:
					return 60.5767f, 536.0363f, 142.5217f;
				case 7:
					return 49.538f, 561.1548f, 134.6936f;
				case 8:
					return 58.281f, 531.1737f, 140.9516f;
				case 9:
					return 60.2229f, 565.2096f, 136.8068f;
				case 10:
					return 61.5652f, 538.4836f, 142.4033f;
				case 11:
					return 58.711f, 541.9668f, 140.6256f;
				case 12:
					return 111.5901f, 560.573f, 139.5021f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -33.6825f, 560.4426f, 129.0182f;
				case 1:
					return -16.4515f, 581.6176f, 126.2586f;
				case 2:
					return -36.8123f, 560.791f, 128.607f;
				case 3:
					return -34.877f, 577.3896f, 127.1808f;
				case 4:
					return 24.0588f, 555.1422f, 140.9129f;
				case 5:
					return 26.5871f, 556.7715f, 140.7907f;
				case 6:
					return 12.8251f, 555.8112f, 133.7766f;
				case 7:
					return 13.5538f, 575.6838f, 128.7873f;
				case 8:
					return -25.3286f, 564.5263f, 129.3031f;
				case 9:
					return -0.9121f, 588.9504f, 126.9512f;
				case 10:
					return 4.6145f, 562.0662f, 129.5551f;
				case 11:
					return 27.3539f, 541.1245f, 146.532f;
				case 12:
					return -37.3936f, 568.5833f, 127.9637f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 112.4494f, 415.3752f, 133.2813f;
				case 1:
					return 111.4793f, 425.062f, 130.1949f;
				case 2:
					return 118.2039f, 417.5334f, 135.5603f;
				case 3:
					return 119.841f, 419.8564f, 135.5619f;
				case 4:
					return 100.0657f, 397.567f, 133.6149f;
				case 5:
					return 99.4328f, 411.7566f, 132.2821f;
				case 6:
					return 76.1213f, 394.9886f, 125.3081f;
				case 7:
					return 95.2987f, 419.441f, 128.5102f;
				case 8:
					return 79.1587f, 405.7555f, 125.4742f;
				case 9:
					return 93.2021f, 423.084f, 127.7265f;
				case 10:
					return 108.0415f, 410.7267f, 133.2875f;
				case 11:
					return 110.5567f, 408.4755f, 134.4081f;
				case 12:
					return 77.6583f, 405.1235f, 125.3902f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 132.4358f, 420.499f, 134.3444f;
				case 1:
					return 117.9766f, 429.3225f, 130.6738f;
				case 2:
					return 120.7716f, 418.9793f, 135.5688f;
				case 3:
					return 117.6334f, 420.0999f, 135.545f;
				case 4:
					return 147.433f, 422.5499f, 137.2211f;
				case 5:
					return 123.4596f, 431.6782f, 131.1192f;
				case 6:
					return 166.812f, 451.2936f, 132.7131f;
				case 7:
					return 146.1695f, 442.4578f, 131.4924f;
				case 8:
					return 162.0117f, 455.6494f, 130.7815f;
				case 9:
					return 130.4478f, 438.7744f, 131.8284f;
				case 10:
					return 136.083f, 424.9034f, 133.7999f;
				case 11:
					return 136.1268f, 413.9869f, 136.3746f;
				case 12:
					return 159.5906f, 451.8589f, 131.252f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

struct<4> func_416(int iParam0, int iParam1)
{
	return func_502(iParam0, iParam1);
}

float func_421(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 309.9035f;
				case 1:
					return 107.9035f;
				case 2:
					return 319.9035f;
				case 3:
					return 91.9035f;
				case 4:
					return 23.0514f;
				case 5:
					return 21.0514f;
				case 6:
					return 3.0514f;
				case 7:
					return 47.0514f;
				case 8:
					return 23.162f;
				case 9:
					return 37.162f;
				case 10:
					return 350.7513f;
				case 11:
					return 346.7513f;
				case 12:
					return 245.6564f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 303.9035f;
				case 1:
					return 283.9035f;
				case 2:
					return 309.9036f;
				case 3:
					return 327.9036f;
				case 4:
					return 199.0514f;
				case 5:
					return 309.0514f;
				case 6:
					return 23.9106f;
				case 7:
					return 283.9106f;
				case 8:
					return 315.162f;
				case 9:
					return 287.162f;
				case 10:
					return 358.7513f;
				case 11:
					return 266.7513f;
				case 12:
					return 359.6564f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 9.9035f;
				case 1:
					return -18.0965f;
				case 2:
					return 333.9035f;
				case 3:
					return 333.9036f;
				case 4:
					return 345.0514f;
				case 5:
					return 341.0514f;
				case 6:
					return 121.0514f;
				case 7:
					return 297.0514f;
				case 8:
					return 333.162f;
				case 9:
					return 297.162f;
				case 10:
					return 8.7513f;
				case 11:
					return 20.7513f;
				case 12:
					return 325.6564f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -306.0965f;
				case 1:
					return 75.9035f;
				case 2:
					return 73.9036f;
				case 3:
					return 71.9036f;
				case 4:
					return 59.0514f;
				case 5:
					return 79.0514f;
				case 6:
					return -24.0894f;
				case 7:
					return 111.9106f;
				case 8:
					return -52.838f;
				case 9:
					return 119.162f;
				case 10:
					return 28.7513f;
				case 11:
					return -5.2487f;
				case 12:
					return 25.6564f;
			}
			break;
	}
	return 0f;
}

struct<4> func_502(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_393(iParam0, iParam1) };
	Var0.f_3 = func_421(iParam0, iParam1);
	return Var0;
}

