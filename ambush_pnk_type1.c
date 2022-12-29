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
	struct<219> Local_274 = { 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 1 } ;
	var uLocal_493 = 0;
	bool bLocal_494 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_494 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_494, 961, 0);
		if (bLocal_494)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (__LIB_17__::func_798(&ScriptParam_0))
				{
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			if (__LIB_0__::func_58())
			{
				__LIB_0__::func_11();
			}
			func_7();
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
					if (func_12())
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
					__LIB_2__::func_736();
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
			__LIB_2__::func_311(&Local_15, 4);
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
	__LIB_2__::func_331(&Local_15);
	func_49();
	__LIB_2__::func_337(&Local_15, 0);
	__LIB_2__::func_484();
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

void func_7()
{
	__LIB_2__::func_11();
	func_75();
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
				if (__LIB_0__::func_0())
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
					iVar2 = __LIB_2__::func_673(iVar1);
					iVar4 = __LIB_12__::func_444(iVar1);
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

bool func_12()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (Local_15.f_217 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = func_98(iVar0);
	vVar2 = { func_99(iVar0) };
	fVar5 = func_100(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_15.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_15.f_49[iVar0], 0f);
		ENTITY::SET_ENTITY_VISIBLE(Local_15.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(Local_15.f_49[iVar0]);
		__LIB_2__::func_19(Local_15.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_49[iVar0], true, false);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_217)
	{
		Local_15.f_220 = 0;
		return true;
	}
	return false;
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
			iVar7 = func_113(iVar0);
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
	iVar1 = __LIB_12__::func_444(iVar0);
	vVar2 = { func_116(iVar0) };
	uVar5 = func_117(iVar0);
	iVar6 = __LIB_2__::func_673(iVar0);
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
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_125(&Local_274, iVar0), 0);
			Local_15.f_118[iVar0 /*4*/].f_1 = { func_127(&Local_274, iVar0) };
			__LIB_2__::func_22(&(Local_15.f_152), Local_15[iVar0]);
			__LIB_3__::func_484(&(Local_15.f_152), Local_15[iVar0], 1, 60f, 120f, 35f);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 127, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], true, true);
			switch (iVar0)
			{
				case 0:
					Local_274.f_217 = PED::GET_PED_ACCURACY(Local_15[iVar0]);
					TASK::_TASK_START_SCENARIO_IN_PLACE(Local_15[iVar0], joaat("WORLD_HUMAN_STARE_STOIC"), -1, false, 0, -1f, false);
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 1:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
					{
						PED::_SET_PED_ON_MOUNT(Local_15[iVar0], Local_15.f_40[iVar0], -1, true);
					}
					break;
				case 3:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 4:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					switch (Local_274.f_204)
					{
						case 0:
							Local_15.f_118[iVar0 /*4*/].f_1 = { 2350.399f, 738.8162f, 69.99573f };
							break;
					}
					TASK::_TASK_START_SCENARIO_IN_PLACE(Local_15[iVar0], joaat("WORLD_HUMAN_STARE_STOIC"), -1, false, 0, -1f, false);
					break;
				case 5:
					switch (Local_274.f_204)
					{
						case 0:
							Local_15.f_118[iVar0 /*4*/].f_1 = { 2350.399f, 738.8162f, 69.99573f };
							break;
					}
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				default:
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					TASK::_TASK_START_SCENARIO_IN_PLACE(Local_15[iVar0], joaat("WORLD_HUMAN_SMOKE"), -1, false, 0, -1f, false);
					break;
			}
			PED::SET_PED_ACCURACY(Local_15[iVar0], 40);
			if (iVar0 < 4)
			{
				PED::_0x931B241409216C1F(Local_15[iVar0], Local_15.f_40[iVar0], 0);
			}
			else if (iVar0 < 5)
			{
				VEHICLE::_SET_PED_OWNS_VEHICLE(Local_15[iVar0], Local_15.f_49[0]);
			}
			LAW::_0x00DB0BC05E3FAA4E(Local_15[iVar0], 1);
			if (iVar0 >= 4)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
			}
		}
		iVar0++;
	}
	PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(Local_15.f_49[0], joaat("PG_VEH_WAGONPRISON01X_LANTERNS01"));
	return true;
}

bool func_23()
{
	if (!__LIB_0__::func_51(&Local_274, 2))
	{
		if (func_133())
		{
			func_134();
			__LIB_0__::func_612(&Local_274, 4);
		}
	}
	func_136();
	switch (Local_274.f_2)
	{
		case 0:
			if (func_137())
			{
				if (func_138())
				{
					__LIB_2__::func_234(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else
			{
				func_139();
				if (func_140())
				{
					func_141();
					__LIB_0__::func_612(&Local_274, 1);
				}
				else
				{
					func_142();
				}
			}
			break;
		case 1:
			if (func_143())
			{
				func_144(&Local_15, &Local_274);
				func_145();
				__LIB_2__::func_706(&Local_15, 1);
				__LIB_2__::func_483(&Local_15, 1);
				__LIB_2__::func_373();
				__LIB_0__::func_612(&Local_274, 2);
			}
			break;
		case 2:
			func_147();
			if (func_148())
			{
				__LIB_0__::func_612(&Local_274, 4);
			}
			break;
		case 3:
			__LIB_0__::func_612(&Local_274, 4);
			break;
		case 4:
			func_149(&Local_15, 1f, 1f, 0.03f, 0.03f);
			return true;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = __LIB_2__::func_374(&Local_15);
	if (__LIB_1__::func_285(&(Local_274.f_13[0 /*3*/]), 10f))
	{
		func_163();
	}
	func_164(&Local_15, &(Local_274.f_29), &(Local_274.f_156));
	iVar2 = 0;
	while (iVar2 < Local_15.f_215)
	{
		if (iVar2 < 4)
		{
			__LIB_2__::func_399(&Local_15, iVar2, Local_15.f_40[iVar2]);
		}
		iVar2++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			func_147();
			__LIB_1__::func_283(&(Local_274.f_13[0 /*3*/]), 0);
			__LIB_0__::func_614(&Local_274, 1);
			break;
		case 1:
			func_147();
			if (__LIB_1__::func_285(&(Local_274.f_13[0 /*3*/]), 5f))
			{
				func_167();
				iVar0 = func_169(0, (Local_15.f_215 - 1), 1, func_168(&Local_274, 0));
				if (iVar0 >= 0)
				{
					func_170();
					func_171(&Local_274, Local_15[iVar0], Global_35, "TAUNT_GEN_DUTCHS_GANG_IND", 0, -1082130432 /* Float: -1f */, 1, 1744022339);
					__LIB_0__::func_614(&Local_274, 2);
				}
			}
			break;
		case 2:
			func_172();
			if (__LIB_2__::func_227(0f, 1, 0, 0))
			{
				if (iVar1 < 4)
				{
					func_163();
					iVar0 = func_169(0, (Local_15.f_215 - 1), 1, func_168(&Local_274, 1));
					if (iVar0 < 0)
					{
						iVar0 = func_169(0, (Local_15.f_215 - 1), 1, -1);
					}
					if (iVar0 >= 0)
					{
						func_171(&Local_274, Local_15[iVar0], Global_35, "TAUNT_GEN_ARTHUR", 0, -1082130432 /* Float: -1f */, 1, 1744022339);
						__LIB_0__::func_614(&Local_274, 3);
					}
				}
				else if (!__LIB_0__::func_51(&Local_274, 16))
				{
					if (__LIB_2__::func_227(2f, 1, 0, 0))
					{
						iVar0 = func_169(0, (Local_15.f_215 - 1), 1, func_168(&Local_274, 1));
						if (iVar0 < 0)
						{
							iVar0 = func_169(0, (Local_15.f_215 - 1), 1, -1);
						}
						if (iVar0 >= 0)
						{
							func_171(&Local_274, Local_15[iVar0], Global_35, "TAUNT_GEN_DUTCHS_GANG_IND", 0, -1082130432 /* Float: -1f */, 1, 1744022339);
							__LIB_0__::func_7(&Local_274, 16);
						}
					}
				}
			}
			break;
		case 3:
			func_163();
			func_172();
			if (iVar1 < 1)
			{
				__LIB_0__::func_614(&Local_274, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_46()
{
	if (__LIB_2__::func_4(&Local_15, 16384))
	{
		return true;
	}
	return func_194();
}

void func_49()
{
	__LIB_0__::func_395(0);
	__LIB_2__::func_724(&Local_15, 5, 2.001f);
	func_198(0);
}

void func_75()
{
	int iVar0;
	if (Local_15.f_19 < Local_15.f_215)
	{
		iVar0 = Local_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (!__LIB_2__::func_25(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15[iVar0], 200f, -1082130432 /* Float: -1f */, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_152(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (!__LIB_2__::func_39(&Local_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(Local_15.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_238(&Local_15, iVar0, 8);
					}
				}
			}
		}
	}
	Local_15.f_19++;
	if (Local_15.f_19 >= ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		Local_15.f_19 = 0;
	}
}

bool func_83()
{
	switch (Local_15.f_221)
	{
		case 0:
			Local_274.f_204 = 0;
			break;
		case 1:
			Local_274.f_204 = 1;
			break;
		case 2:
			Local_274.f_204 = 2;
			break;
		case 3:
			Local_274.f_204 = 3;
			break;
		default:
			break;
	}
	Local_15.f_215 = 6;
	Local_15.f_217 = 1;
	Local_15.f_218 = 0;
	Local_15.f_216 = 4;
	Local_15.f_181 = 10;
	Local_274.f_203 = Local_15.f_222;
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 1, Local_15.f_221), true))
	{
		__LIB_0__::func_7(&Local_274, 1);
	}
	__LIB_2__::func_234(&Local_15, 131072);
	__LIB_2__::func_382(&Local_15, 3, 1);
	func_247();
	func_248(&Local_15, &Local_274);
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	func_249(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!func_250(iParam0, 1))
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
	switch (Local_274.f_1)
	{
		case 0:
			func_258(&Local_15);
			STREAMING::REQUEST_MODEL(func_98(0), false);
			PROPSET::_REQUEST_PROPSET(joaat("PG_VEH_WAGONPRISON01X_LANTERNS01"));
			Local_274.f_1 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!STREAMING::HAS_MODEL_LOADED(func_98(0)))
			{
				iVar0 = 0;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(joaat("PG_VEH_WAGONPRISON01X_LANTERNS01")))
			{
				iVar0 = 0;
			}
			if (!func_259(&Local_15))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

int func_98(int iParam0)
{
	return joaat("WAGONPRISON01X");
}

Vector3 func_99(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_260(&Local_274, iParam0) };
	return vVar0;
}

var func_100(int iParam0)
{
	struct<4> Var0;
	Var0 = { func_260(&Local_274, iParam0) };
	return Var0.f_3;
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

int func_113(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_265(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_266(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_266(&Local_274, iVar0) };
	return Var1.f_3;
}

char* func_125(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_168(uParam0, iParam1);
	return func_267(iVar0);
}

Vector3 func_127(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_268(uParam0, iParam1) };
	return vVar0;
}

bool func_133()
{
	if (__LIB_17__::func_799(&Local_15, &(Local_15.f_152), &(Local_15.f_152.f_16), &(Local_274.f_200), 0, 5, 1))
	{
		return true;
	}
	return false;
}

void func_134()
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar1], 0, 0))
		{
			__LIB_2__::func_357(Local_15[iVar1], Global_36, 3, 0, 3);
			if (!bVar0)
			{
				func_171(&Local_274, Local_15[iVar1], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 1744022339);
				bVar0 = true;
			}
			TASK::TASK_COMBAT_PED(Local_15[iVar1], Global_35, 0, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_15[iVar1], 2);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar1], 188, false);
			func_274(Local_15[iVar1], Local_15.f_22[iVar1], joaat("BLIP_STYLE_COP"), 0);
		}
		iVar1++;
	}
	__LIB_0__::func_7(&Local_274, 2);
}

void func_136()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_51(&Local_274, 32))
	{
		if ((Local_15.f_20 < 120f && Local_15.f_20 > 0f) || Local_15.f_95 >= 10)
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 107, true);
					PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 131, true);
					func_274(Local_15[iVar0], Local_15.f_22[iVar0], joaat("BLIP_STYLE_COP"), 0);
				}
				iVar0++;
			}
			__LIB_8__::func_152(&(Local_274.f_218[0]), Local_274.f_23[1], 693035517);
			__LIB_0__::func_7(&Local_274, 32);
		}
	}
	else if (Local_15.f_95 < 10)
	{
		if (Local_15.f_20 > 130f)
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				__LIB_0__::func_325(&(Local_15.f_22[iVar0]));
				iVar1 = MAP::GET_BLIP_FROM_ENTITY(Local_15[iVar0]);
				__LIB_0__::func_325(&iVar1);
				iVar0++;
			}
			__LIB_0__::func_325(&(Local_274.f_218[0]));
			__LIB_0__::func_8(&Local_274, 32);
		}
	}
}

bool func_137()
{
	if (__LIB_2__::func_708(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_138()
{
	if (!__LIB_0__::func_51(&Local_274, 8))
	{
		__LIB_0__::func_7(&Local_274, 8);
	}
	return func_194();
}

void func_139()
{
	switch (Local_274.f_202)
	{
		case 0:
			Local_274.f_205 = __LIB_2__::func_157(Local_274.f_23[1], Global_36);
			break;
		case 1:
			Local_274.f_206 = __LIB_2__::func_157(Local_274.f_23[4], Global_36);
			break;
		case 2:
			Local_274.f_207 = __LIB_2__::func_157(Local_274.f_23[2], Global_36);
			break;
		case 3:
			Local_274.f_208 = __LIB_2__::func_157(Local_274.f_23[3], Global_36);
			break;
	}
	Local_274.f_202 = (Local_274.f_202 + 1 % 4);
}

bool func_140()
{
	if (((!Local_274.f_205 && !Local_274.f_208) && !Local_274.f_206) && !Local_274.f_207)
	{
		return false;
	}
	if (func_279(&Local_15, &(Local_15.f_152), &(Local_15.f_152.f_16), &(Local_274.f_201), 0, 5, 2))
	{
		if (Local_274.f_206)
		{
			Local_274.f_7 = 0;
			Local_274.f_8 = 1;
		}
		else if (Local_274.f_207)
		{
			Local_274.f_7 = 2;
			Local_274.f_8 = 3;
		}
		else if (Local_274.f_208)
		{
			Local_274.f_7 = 4;
			Local_274.f_8 = 5;
		}
		else
		{
			switch (Local_274.f_201)
			{
				case 0:
				case 1:
					Local_274.f_7 = 0;
					Local_274.f_8 = 1;
					break;
				case 2:
				case 3:
					Local_274.f_7 = 2;
					Local_274.f_8 = 3;
					break;
				case 4:
				case 5:
					Local_274.f_7 = 4;
					Local_274.f_8 = 5;
					break;
			}
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[Local_274.f_7], Global_35, 17))
			{
				switch (Local_274.f_7)
				{
					case 0:
						if (PED::_0x06087579E7AA85A9(Local_15[2], Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[2], Global_35, 17))
						{
							Local_274.f_7 = 2;
							Local_274.f_8 = 3;
						}
						else if (PED::_0x06087579E7AA85A9(Local_15[4], Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[4], Global_35, 17))
						{
							Local_274.f_7 = 4;
							Local_274.f_8 = 5;
						}
						break;
					case 2:
						if (PED::_0x06087579E7AA85A9(Local_15[0], Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
						{
							Local_274.f_7 = 0;
							Local_274.f_8 = 1;
						}
						else if (PED::_0x06087579E7AA85A9(Local_15[4], Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[4], Global_35, 17))
						{
							Local_274.f_7 = 4;
							Local_274.f_8 = 5;
						}
						break;
					case 4:
						if (PED::_0x06087579E7AA85A9(Local_15[0], Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
						{
							Local_274.f_7 = 0;
							Local_274.f_8 = 1;
						}
						else if (PED::_0x06087579E7AA85A9(Local_15[2], Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[2], Global_35, 17))
						{
							Local_274.f_7 = 2;
							Local_274.f_8 = 3;
						}
						break;
				}
			}
		}
		return true;
	}
	return false;
}

void func_141()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar2 = __LIB_1__::func_372(Local_15[Local_274.f_7], 0);
	if (__LIB_0__::func_154(iVar2) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar2))
	{
		bVar1 = false;
	}
	else
	{
		iVar3 = WEAPON::GET_BEST_PED_WEAPON(Local_15[Local_274.f_7], false, false);
		if (__LIB_0__::func_154(iVar3))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_7], iVar3, false, 0, false, false);
			bVar1 = true;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 150f, 1.5f, 0.2f);
	if (bVar1)
	{
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	}
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
	__LIB_1__::func_474(Local_15[Local_274.f_7], &iVar0, 0, 0, 1, 1);
	__LIB_2__::func_357(Local_15[Local_274.f_7], Global_36, 5, 0, 2);
}

void func_142()
{
	if (!__LIB_2__::func_227(0f, 1, Local_274.f_12, 1))
	{
		return;
	}
	if (Local_15.f_222 > 0)
	{
		return;
	}
	switch (Local_274.f_5)
	{
		case 0:
			Local_274.f_9 = func_282();
			if (__LIB_2__::func_699(Local_274.f_9))
			{
				Local_274.f_10 = Local_274.f_9 + 1;
				func_171(&Local_274, Local_15[Local_274.f_9], Local_15[Local_274.f_10], "CHAT_ROADBLOCK", 1, -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_0__::func_615(&Local_274, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				func_171(&Local_274, Local_15[Local_274.f_9], Local_15[Local_274.f_10], "CHAT_ROADBLOCK", 2, -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_0__::func_615(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				func_171(&Local_274, Local_15[Local_274.f_10], Local_15[Local_274.f_9], "CHAT_ROADBLOCK_SUPPORT_RESPONSE", 1, -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_0__::func_615(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(4f, 1, 0, 0))
			{
				func_171(&Local_274, Local_15[Local_274.f_9], Local_15[Local_274.f_10], "CHAT_ROADBLOCK", 3, -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_0__::func_615(&Local_274, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				func_171(&Local_274, Local_15[Local_274.f_10], Local_15[Local_274.f_9], "CHAT_ROADBLOCK_SUPPORT_RESPONSE", 2, -1082130432 /* Float: -1f */, 1, 1744022339);
				__LIB_0__::func_615(&Local_274, 5);
			}
			break;
		case 5:
			__LIB_0__::func_615(&Local_274, 6);
			break;
		case 6:
			break;
	}
}

bool func_143()
{
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[Local_274.f_7], Global_35, 17) && PED::IS_PED_FACING_PED(Local_15[Local_274.f_7], Global_35, 45f))
	{
		return true;
	}
	return false;
}

void func_144(var uParam0, var uParam1)
{
	char* sVar0[2];
	switch ((uParam1->f_203 % 3))
	{
		case 0:
			sVar0[0] = "PNK1_ILO_DEFUSE";
			sVar0[1] = "PNK1_ILO_ANTAGONIZE";
			break;
		case 1:
			sVar0[0] = "PNK1_V2_ILO_DEFUSE";
			sVar0[1] = "PNK1_V2_ILO_ANTAGONIZE";
			break;
		case 2:
			sVar0[0] = "PNK1_V3_ILO_DEFUSE";
			sVar0[1] = "PNK1_V3_ILO_ANTAGONIZE";
			break;
	}
	__LIB_3__::func_432(&(uParam1->f_156[0 /*17*/]), __LIB_2__::func_460(8), sVar0[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_3__::func_432(&(uParam1->f_156[1 /*17*/]), __LIB_2__::func_460(10), sVar0[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
}

void func_145()
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (__LIB_2__::func_699(Local_274.f_9))
	{
		__LIB_2__::func_504(Local_15[Local_274.f_9], 0);
		__LIB_2__::func_504(Local_15[Local_274.f_10], 0);
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (!__LIB_2__::func_1(Local_15[iVar1], 0, 0))
		{
		}
		else if (Local_274.f_7 == iVar1)
		{
			func_274(Local_15[iVar1], Local_15.f_22[iVar1], joaat("BLIP_STYLE_COP"), -128070310);
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					fVar2 = 0f;
					break;
				case 1:
					fVar2 = 0.5f;
					break;
				case 2:
					fVar2 = 0.5f;
					break;
				case 3:
					fVar2 = 0.75f;
					break;
				case 4:
					fVar2 = 0.5f;
					break;
				case 5:
					fVar2 = 0.75f;
					break;
			}
			PED::SET_PED_USING_ACTION_MODE(Local_15[iVar1], true, -1, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!PED::IS_PED_ON_MOUNT(Local_15[iVar1]))
			{
				TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 150f, 1.5f, 0.5f);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			__LIB_1__::func_474(Local_15[iVar1], &iVar0, fVar2, 0, 1, 1);
		}
		iVar1++;
	}
}

void func_147()
{
	if (!__LIB_2__::func_1(Global_1935630.f_40, 0, 0))
	{
		return;
	}
	__LIB_1__::func_283(&(Local_274.f_13[2 /*3*/]), 0);
	if (!__LIB_1__::func_285(&(Local_274.f_13[2 /*3*/]), 2f))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_1935630.f_40, 1.5f);
	}
	else if (!__LIB_1__::func_285(&(Local_274.f_13[2 /*3*/]), 4f))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_1935630.f_40, 2.001f);
	}
	else if (!__LIB_1__::func_285(&(Local_274.f_13[2 /*3*/]), 6f))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_1935630.f_40, 2.5f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_1935630.f_40, 2.5f);
	}
}

bool func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = func_291();
	if (Local_274.f_3 < 3)
	{
		if (iVar0 != -1)
		{
			__LIB_0__::func_613(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			__LIB_0__::func_613(&Local_274, 1);
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, Local_15[Local_274.f_7], 1) && __LIB_2__::func_227(0f, 1, Local_15[Local_274.f_8], 1))
			{
				if (__LIB_0__::func_51(&Local_274, 64) && func_293())
				{
					func_294(&Local_274, 0, 1, 1);
					__LIB_0__::func_613(&Local_274, 4);
				}
				else if (__LIB_2__::func_227(-5f, 1, 0, 0))
				{
					func_171(&Local_274, Local_15[Local_274.f_7], Global_35, "WHO_GOES_THERE", 0, -1082130432 /* Float: -1f */, 1, -500314840);
					__LIB_0__::func_613(&Local_274, 2);
				}
			}
			break;
		case 2:
			if (func_293())
			{
				func_294(&Local_274, 0, 1, 1);
				__LIB_0__::func_613(&Local_274, 4);
			}
			break;
		case 3:
			__LIB_0__::func_613(&Local_274, 4);
			break;
		case 4:
			if (!func_295())
			{
				iVar2 = __LIB_2__::func_439(&Local_15, 0, Local_15.f_215, 0);
				Local_274.f_6 = iVar2;
				if (!__LIB_2__::func_699(Local_274.f_6))
				{
					return false;
				}
				if (func_168(&Local_274, Local_274.f_6) == 1)
				{
					iVar3 = 1;
					if (__LIB_1__::func_985())
					{
						iVar3 = 2;
					}
					func_171(&Local_274, Local_15[Local_274.f_6], Global_35, "ITS_ARTHUR_EXTREME", iVar3, -1082130432 /* Float: -1f */, 1, 1744022339);
				}
				else
				{
					func_171(&Local_274, Local_15[Local_274.f_6], Global_35, "ITS_DUTCHS_GANG_MALE_EXTREME", 0, -1082130432 /* Float: -1f */, 1, 1744022339);
				}
				func_274(Local_15[Local_274.f_6], Local_15.f_22[Local_274.f_6], joaat("BLIP_STYLE_COP"), 942020339);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				__LIB_3__::func_534(Local_15[Local_274.f_6], Global_35, -1, 0, 0, 1);
				__LIB_1__::func_474(Local_15[Local_274.f_6], &iVar1, 2f, 0, 1, 1);
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_15[Local_274.f_6], 2);
				__LIB_1__::func_283(&(Local_274.f_13[1 /*3*/]), 0);
				__LIB_0__::func_613(&Local_274, 5);
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_274.f_13[1 /*3*/]), 2f) || (__LIB_2__::func_227(0, 1, Local_15[Local_274.f_6], 1) && !func_295()))
			{
				func_274(Local_15[Local_274.f_8], Local_15.f_22[Local_274.f_8], joaat("BLIP_STYLE_COP"), 942020339);
				__LIB_3__::func_534(Local_15[Local_274.f_8], Global_35, -1, 0, 0, 1);
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_15[Local_274.f_8], 2);
				__LIB_0__::func_613(&Local_274, 6);
			}
			break;
		case 6:
			if ((__LIB_2__::func_227(0, 1, Local_15[Local_274.f_6], 1) || __LIB_1__::func_285(&(Local_274.f_13[1 /*3*/]), 3.5f)) || (__LIB_1__::func_285(&(Local_274.f_13[1 /*3*/]), 2.25f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 7f))
			{
				iVar4 = 0;
				while (iVar4 <= 5)
				{
					if (__LIB_2__::func_1(Local_15[iVar4], 0, 0))
					{
						PED::SET_PED_CONFIG_FLAG(Local_15[iVar4], 188, false);
						PED::SET_PED_CONFIG_FLAG(Local_15[iVar4], 127, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar4], 5, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15[iVar4], joaat("REL_PLAYER_ENEMY"));
						func_274(Local_15[iVar4], Local_15.f_22[iVar4], joaat("BLIP_STYLE_COP"), 942020339);
						TASK::TASK_COMBAT_PED(Local_15[iVar4], Global_35, 0, 0);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_15[iVar4], 2);
					}
					iVar4++;
				}
				__LIB_0__::func_613(&Local_274, 7);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_149(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (__LIB_2__::func_1(Global_1935630.f_40, 0, 0))
	{
		PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 3, fParam1, 0);
		PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 1, fParam2, 0);
		PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 3, fParam3);
		PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 1, fParam4);
		TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 4, 0, 0);
	}
}

void func_163()
{
	if (!__LIB_0__::func_51(&Local_274, 128))
	{
		__LIB_0__::func_395(0);
		__LIB_0__::func_7(&Local_274, 128);
	}
}

void func_164(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (iVar0 < *uParam1)
		{
			if (!uParam0->f_228[iVar0])
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
				{
					if (__LIB_2__::func_398((*uParam0)[iVar0]))
					{
						__LIB_3__::func_491(uParam0[iVar0], uParam1[iVar0 /*21*/], uParam2, 1, 1);
						uParam0->f_228[iVar0] = 1;
					}
				}
				else
				{
					uParam0->f_228[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_167()
{
	int iVar0;
	if (__LIB_0__::func_51(&Local_274, 512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_15[iVar0], 1);
		}
		iVar0++;
	}
	__LIB_0__::func_7(&Local_274, 512);
}

int func_168(var uParam0, int iParam1)
{
	switch ((uParam0->f_203 % 6))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 0;
				case 3:
					return 1;
				case 4:
					return 0;
				case 5:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				case 2:
					return 2;
				case 3:
					return 3;
				case 4:
					return 2;
				case 5:
					return 3;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				case 2:
					return 4;
				case 3:
					return 5;
				case 4:
					return 4;
				case 5:
					return 5;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				case 2:
					return 1;
				case 3:
					return 2;
				case 4:
					return 1;
				case 5:
					return 2;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 4;
				case 2:
					return 3;
				case 3:
					return 4;
				case 4:
					return 3;
				case 5:
					return 4;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 0;
				case 2:
					return 5;
				case 3:
					return 0;
				case 4:
					return 5;
				case 5:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_169(int iParam0, int iParam1, bool bParam2, int iParam3)
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
				if (iParam3 == -1 || iParam3 == func_168(&Local_274, iVar2))
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

void func_170()
{
	int iVar0;
	LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER_LAW"), 1000, 0, true);
	func_318(1000);
	__LIB_0__::func_395(1);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::_0x8ACC0506743A8A5C(Local_15[iVar0], joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
		}
		iVar0++;
	}
	__LIB_0__::func_325(&(Local_274.f_218[0]));
	func_198(1);
}

int func_171(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam5, iParam4, 0, 0, 1, fParam5 >= 0f, bParam6, iParam7, 1, 0, 0))
	{
		uParam0->f_12 = iParam1;
		return 1;
	}
	return 0;
}

void func_172()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!Local_274.f_209[iVar0])
		{
			if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
			{
				LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER_LAW"), 1000, 0, true);
				Local_274.f_209[iVar0] = 1;
			}
		}
		iVar0++;
	}
	func_198(1);
}

int func_194()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (!__LIB_2__::func_1(Local_15[iVar1], 0, 0))
		{
		}
		else
		{
			if (PED::IS_PED_IN_COMBAT(Local_15[iVar1], 0))
			{
				return 1;
			}
			if (!__LIB_2__::func_25(&Local_15, iVar1, 2))
			{
				__LIB_2__::func_152(&Local_15, iVar1, 2);
				PED::_0x24C82EF607105FAA(Local_15[iVar1], joaat("AGGRESSIVE"));
				__LIB_3__::func_491(&(Local_15[iVar1]), &(Local_274.f_29[iVar1 /*21*/]), &(Local_274.f_156), 1, 1);
			}
			switch (iVar1)
			{
				case 4:
					if (!__LIB_2__::func_343(Local_15[iVar1], Local_15.f_49[0], 0))
					{
						iVar0 = 0;
						if (!__LIB_0__::func_163(Local_15[iVar1], -1794415470))
						{
							if (__LIB_2__::func_25(&Local_15, iVar1, 8))
							{
								__LIB_2__::func_596(Local_15[iVar1], Local_15.f_49[0], -1, 2f, -1, 1);
							}
							else
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(Local_15[iVar1], Local_15.f_49[0], -1);
							}
						}
					}
					break;
				case 5:
					if (!__LIB_2__::func_343(Local_15[iVar1], Local_15.f_49[0], 0))
					{
						iVar0 = 0;
						if (!__LIB_0__::func_163(Local_15[iVar1], -1794415470))
						{
							if (__LIB_2__::func_25(&Local_15, iVar1, 8))
							{
								__LIB_2__::func_596(Local_15[iVar1], Local_15.f_49[0], 0, 2f, -1, 1);
							}
							else
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(Local_15[iVar1], Local_15.f_49[0], 0);
							}
						}
					}
					break;
				default:
					if (!__LIB_0__::func_71(Local_15[iVar1]))
					{
						iVar0 = 0;
						if (!__LIB_0__::func_163(Local_15[iVar1], 1868526510))
						{
							if (__LIB_2__::func_25(&Local_15, iVar1, 8) || __LIB_2__::func_26(&Local_15, iVar1, 8))
							{
								__LIB_1__::func_562(Local_15[iVar1], Local_15.f_40[iVar1], 0, 2f, 20000);
							}
							else
							{
								PED::_SET_PED_ON_MOUNT(Local_15[iVar1], Local_15.f_40[iVar1], -1, true);
							}
						}
					}
					break;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_198(bool bParam0)
{
	if (Local_274.f_204 == 0)
	{
		if (bParam0)
		{
			if (!__LIB_0__::func_51(&Local_274, 256))
			{
				__LIB_2__::func_701(6);
				__LIB_0__::func_7(&Local_274, 256);
			}
		}
		else if (__LIB_0__::func_51(&Local_274, 256))
		{
			__LIB_0__::func_403();
			__LIB_0__::func_8(&Local_274, 256);
		}
	}
}

void func_247()
{
	__LIB_2__::func_104(&(Local_15.f_152), 0);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 0);
	__LIB_2__::func_110(&(Local_15.f_152), 0);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_250(&(Local_15.f_152), 1);
	__LIB_3__::func_486(&(Local_15.f_152), 1);
	__LIB_3__::func_333(&(Local_15.f_152), 1);
}

void func_248(var uParam0, var uParam1)
{
	switch (uParam1->f_204)
	{
		case 0:
			func_381(uParam0, uParam1);
			break;
		case 1:
			func_382(uParam0, uParam1);
			break;
		case 2:
			func_383(uParam0, uParam1);
			break;
		case 3:
			func_384(uParam0, uParam1);
			break;
	}
}

void func_249(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
					Jump @5972; //curOff = 3471
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					Jump @5972; //curOff = 3552
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					Jump @5972; //curOff = 3598
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					Jump @5972; //curOff = 3644
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
					Jump @5972; //curOff = 3760
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					Jump @5972; //curOff = 3806
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					Jump @5972; //curOff = 3887
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					Jump @5972; //curOff = 3933
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					Jump @5972; //curOff = 3979
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
					Jump @5972; //curOff = 4130
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
					Jump @5972; //curOff = 4351
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					Jump @5972; //curOff = 4397
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					Jump @5972; //curOff = 4443
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					Jump @5972; //curOff = 4524
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
					Jump @5972; //curOff = 4640
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					Jump @5972; //curOff = 4721
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
					Jump @5972; //curOff = 4907
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					Jump @5972; //curOff = 4953
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					Jump @5972; //curOff = 4999
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
					Jump @5972; //curOff = 5150
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					Jump @5972; //curOff = 5196
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					Jump @5972; //curOff = 5242
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					Jump @5972; //curOff = 5288
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					Jump @5972; //curOff = 5334
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					Jump @5972; //curOff = 5380
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					Jump @5972; //curOff = 5426
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					Jump @5972; //curOff = 5507
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					Jump @5972; //curOff = 5553
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					Jump @5972; //curOff = 5599
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					Jump @5972; //curOff = 5645
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					Jump @5972; //curOff = 5691
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					Jump @5972; //curOff = 5772
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					Jump @5972; //curOff = 5818
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
					Jump @6240; //curOff = 5972
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
					Jump @6240; //curOff = 6209
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					Jump @6240; //curOff = 6223
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
bool func_250(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

void func_258(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = __LIB_12__::func_444(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_259(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = __LIB_12__::func_444(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_444(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

struct<4> func_260(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_204)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(0, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(1, 9);
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
						return func_393(2, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(3, 9);
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
						return func_393(4, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(5, 9);
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
						return func_393(6, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(7, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_262(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_204)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(0, 1);
					case 1:
						return func_393(0, 2);
					case 2:
						return func_393(0, 4);
					case 3:
						return func_393(0, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(1, 1);
					case 1:
						return func_393(1, 2);
					case 2:
						return func_393(1, 4);
					case 3:
						return func_393(1, 6);
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
						return func_393(2, 1);
					case 1:
						return func_393(2, 2);
					case 2:
						return func_393(2, 4);
					case 3:
						return func_393(2, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(3, 1);
					case 1:
						return func_393(3, 2);
					case 2:
						return func_393(3, 4);
					case 3:
						return func_393(3, 6);
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
						return func_393(4, 1);
					case 1:
						return func_393(4, 2);
					case 2:
						return func_393(4, 4);
					case 3:
						return func_393(4, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(5, 1);
					case 1:
						return func_393(5, 2);
					case 2:
						return func_393(5, 4);
					case 3:
						return func_393(5, 6);
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
						return func_393(6, 1);
					case 1:
						return func_393(6, 2);
					case 2:
						return func_393(6, 4);
					case 3:
						return func_393(6, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(7, 1);
					case 1:
						return func_393(7, 2);
					case 2:
						return func_393(7, 4);
					case 3:
						return func_393(7, 6);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

int func_265(var uParam0, int iParam1)
{
	switch (uParam0->f_204)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
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
						return 2;
					case 1:
						return 2;
					case 2:
						return 1;
					case 3:
						return 2;
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
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
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
						return 2;
					case 1:
						return 2;
					case 2:
						return 1;
					case 3:
						return 2;
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
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
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
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					case 3:
						return 1;
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
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
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
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
			}
			break;
	}
	return 3;
}

struct<4> func_266(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_204)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_393(0, 0);
					case 1:
						return func_393(0, 2);
					case 2:
						return func_393(0, 3);
					case 3:
						return func_393(0, 5);
					case 4:
						return func_393(0, 7);
					case 5:
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
						return func_393(1, 0);
					case 1:
						return func_393(1, 2);
					case 2:
						return func_393(1, 3);
					case 3:
						return func_393(1, 5);
					case 4:
						return func_393(1, 7);
					case 5:
						return func_393(1, 8);
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
						return func_393(2, 0);
					case 1:
						return func_393(2, 2);
					case 2:
						return func_393(2, 3);
					case 3:
						return func_393(2, 5);
					case 4:
						return func_393(2, 7);
					case 5:
						return func_393(2, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(3, 0);
					case 1:
						return func_393(3, 2);
					case 2:
						return func_393(3, 3);
					case 3:
						return func_393(3, 5);
					case 4:
						return func_393(3, 7);
					case 5:
						return func_393(3, 8);
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
						return func_393(4, 0);
					case 1:
						return func_393(4, 2);
					case 2:
						return func_393(4, 3);
					case 3:
						return func_393(4, 5);
					case 4:
						return func_393(4, 7);
					case 5:
						return func_393(4, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(5, 0);
					case 1:
						return func_393(5, 2);
					case 2:
						return func_393(5, 3);
					case 3:
						return func_393(5, 5);
					case 4:
						return func_393(5, 7);
					case 5:
						return func_393(5, 8);
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
						return func_393(6, 0);
					case 1:
						return func_393(6, 2);
					case 2:
						return func_393(6, 3);
					case 3:
						return func_393(6, 5);
					case 4:
						return func_393(6, 7);
					case 5:
						return func_393(6, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_393(7, 0);
					case 1:
						return func_393(7, 2);
					case 2:
						return func_393(7, 3);
					case 3:
						return func_393(7, 5);
					case 4:
						return func_393(7, 7);
					case 5:
						return func_393(7, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0373_S_M_M_PinLaw_01_WHITE_01";
		case 1:
			return "0374_S_M_M_PinLaw_01_WHITE_02";
		case 2:
			return "0375_S_M_M_PinLaw_01_WHITE_03";
		case 3:
			return "0376_S_M_M_PinLaw_02_WHITE_01";
		case 4:
			return "0377_S_M_M_PinLaw_02_WHITE_02";
		case 5:
			return "0378_S_M_M_PinLaw_02_WHITE_03";
		default:
			break;
	}
	return "";
}

struct<4> func_268(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_204)
	{
		case 0:
			if (__LIB_0__::func_51(uParam0, 1))
			{
				switch (iParam1)
				{
					case 2:
						return func_393(0, 10);
					case 3:
						return func_393(0, 10);
					case 4:
						return func_393(0, 10);
					case 5:
						return func_393(0, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 4:
						return func_393(1, 10);
					case 5:
						return func_393(1, 10);
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
					case 4:
						return func_393(2, 10);
					case 5:
						return func_393(2, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 4:
						return func_393(3, 10);
					case 5:
						return func_393(3, 10);
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
					case 4:
						return func_393(4, 10);
					case 5:
						return func_393(4, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 4:
						return func_393(5, 10);
					case 5:
						return func_393(5, 10);
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
					case 4:
						return func_393(6, 10);
					case 5:
						return func_393(6, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 4:
						return func_393(7, 10);
					case 5:
						return func_393(7, 10);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_2__::func_73(iParam0, &iParam1, iParam2, iParam3, 0, "BLIP_PINKERTON");
}

bool func_279(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_4__::func_102((*uParam0)[*uParam3], iParam1, uParam2, 0))
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

int func_282()
{
	if (Local_15.f_9[0] < 52f && Local_15.f_9[0] > 0f)
	{
		return 0;
	}
	if (Local_15.f_9[2] < 52f && Local_15.f_9[2] > 0f)
	{
		return 2;
	}
	if (Local_15.f_9[4] < 52f && Local_15.f_9[4] > 0f)
	{
		return 4;
	}
	return -1;
}

int func_291()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 1;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < Local_15.f_215)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15[iVar1]))
		{
		}
		else
		{
			iVar0 = func_421(&(Local_15[iVar1]), &(Local_274.f_29[iVar1 /*21*/]), 30f, &(Local_274.f_156), &iVar2, 3f, 3, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(&(Local_274.f_29[iVar1 /*21*/])))
			{
				if (Local_274.f_11 == -1)
				{
					Local_274.f_11 = iVar1;
				}
				if (Local_274.f_29[iVar1 /*21*/].f_1 == 0)
				{
					if (!__LIB_2__::func_703(&(Local_274.f_156[0 /*17*/]), 0))
					{
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
						func_294(&Local_274, 0, 0, 1);
						__LIB_2__::func_482(&(Local_274.f_156[0 /*17*/]), 1, 1);
					}
				}
				else if (Local_274.f_29[iVar1 /*21*/].f_1 == 1)
				{
					if (!__LIB_2__::func_703(&(Local_274.f_156[1 /*17*/]), 0))
					{
						func_294(&Local_274, 0, 0, 1);
						__LIB_2__::func_482(&(Local_274.f_156[1 /*17*/]), 1, 1);
					}
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				if (iVar3 != -1)
				{
					Local_274.f_191 = iVar3;
				}
			}
		}
		iVar1++;
	}
	return iVar3;
}

bool func_293()
{
	int iVar0;
	if (!__LIB_2__::func_227(0f, 1, Local_274.f_12, 1))
	{
		return false;
	}
	if (func_295())
	{
		return false;
	}
	if (__LIB_2__::func_227(-3f, 1, 0, 0))
	{
		return true;
	}
	if (Local_15.f_20 < 6f || (__LIB_2__::func_227(-6f, 1, 0, 0) && ENTITY::GET_ENTITY_SPEED(Global_35) > 8f))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_15.f_9[iVar0] < 8f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_294(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		if ((!__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 4) && !__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 13)) && !__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 0))
		{
			__LIB_2__::func_411(&(uParam0->f_156[0 /*17*/]), 1, 0);
		}
		if (bParam3)
		{
			if ((!__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 4) && !__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 13)) && !__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_156[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if (((!__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 4) && !__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 13)) && __LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 0)) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_156[0 /*17*/]), 0, 0);
		}
		if (bParam3)
		{
			if (((!__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 4) && !__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 13)) && __LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 0)) || bParam2)
			{
				__LIB_2__::func_411(&(uParam0->f_156[1 /*17*/]), 0, 0);
			}
		}
	}
}

bool func_295()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_341(&(Local_274.f_29[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_318(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	__LIB_18__::func_294(__LIB_2__::func_702(), iParam0);
}

void func_381(var uParam0, var uParam1)
{
	uParam1->f_23[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2385.582f, 753.5142f, 65.03863f, 0f, 0f, 110.6636f, 31.5012f, 43.06783f, 20f, "volTrigger");
	if (__LIB_0__::func_51(uParam1, 1))
	{
		uParam1->f_23[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerFront");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2357.021f, 752.1401f, 72.31448f, 0f, 0f, 78.09357f, 40.41989f, 23.32121f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2357.883f, 733.4832f, 72.31448f, 0f, 0f, -39.87542f, 30f, 20.71047f, 20f);
		uParam1->f_23[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerRight");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[2], 2420.593f, 770.0255f, 72.31448f, 0f, 0f, 71.99955f, 30f, 28.3591f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[2], 2419f, 739.1904f, 72.31448f, 0f, 0f, 63.58382f, 47.68507f, 23.32121f, 40f);
	}
	else
	{
		uParam1->f_23[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerRight");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[2], 2392.428f, 780.3892f, 62.54658f, 0f, 0f, -10.40118f, 54.06552f, 23.32121f, 40f);
		uParam1->f_23[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerBack");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[3], 2358.429f, 759.0137f, 62.54658f, 0f, 0f, -10.40118f, 30f, 42.03559f, 40f);
		uParam1->f_23[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerFront");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2397.632f, 733.547f, 62.54659f, 0f, 0f, -14.89182f, 45.97791f, 23.32121f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2423.069f, 751.022f, 62.54658f, 0f, 0f, -104.3838f, 45.97791f, 23.32121f, 40f);
	}
}

void func_382(var uParam0, var uParam1)
{
	uParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 130f, 130f, 40f, "volAmbush");
	uParam1->f_23[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2680.415f, 263.6675f, 56.2487f, 0f, 0f, 161.7157f, 35f, 35f, 20f, "volTrigger");
	if (__LIB_0__::func_51(uParam1, 1))
	{
		uParam1->f_23[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerFront");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2712.092f, 284.032f, 63.52455f, 0f, 0f, -136.6854f, 30f, 23.32121f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2709.817f, 261.2266f, 67.37834f, 0f, 0f, 83.789f, 30f, 20.71047f, 28.66317f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2713.118f, 236.4223f, 63.52455f, 0f, 0f, 147.5275f, 30f, 28f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2658.004f, 237.1599f, 63.52455f, 0f, 0f, -152.4726f, 40f, 25.61574f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2689.178f, 226.3296f, 63.52455f, 0f, 0f, -179.4726f, 40f, 25.61574f, 40f);
		uParam1->f_23[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerBack");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[3], 2694.585f, 300.4927f, 63.52455f, 0f, 0f, 58.05334f, 30f, 23.32121f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[3], 2672.154f, 296.4114f, 63.52455f, 0f, 0f, 21.05335f, 30f, 28.3591f, 40f);
		uParam1->f_23[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerRight");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[2], 2657.137f, 280.4974f, 63.52455f, 0f, 0f, -143.1498f, 30f, 23.32121f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[2], 2654.615f, 257.7813f, 63.52455f, 0f, 0f, -109.1498f, 20.64047f, 23.32121f, 40f);
	}
	else
	{
		uParam1->f_23[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerFront");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2642.087f, 264.8193f, 63.52455f, 0f, 0f, 8.526488f, 30f, 23.32121f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2656.966f, 282.2505f, 67.37834f, 0f, 0f, -130.9991f, 30f, 20.71047f, 28.66317f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2668.407f, 304.5046f, 63.52455f, 0f, 0f, -67.2606f, 30f, 28f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2713.25f, 272.4544f, 63.52455f, 0f, 0f, -7.260654f, 40f, 25.61574f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[4], 2693.826f, 299.1354f, 63.52455f, 0f, 0f, -34.26065f, 40f, 25.61574f, 40f);
		uParam1->f_23[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerBack");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[3], 2718.389f, 233.6525f, 63.52455f, 0f, 0f, -55.62485f, 30f, 23.32121f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[3], 2723.658f, 255.8326f, 63.52455f, 0f, 0f, -92.62482f, 30f, 28.3591f, 40f);
		uParam1->f_23[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerRight");
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[2], 2656.316f, 247.4542f, 63.52455f, 0f, 0f, -80.60612f, 48.81738f, 23.32121f, 40f);
		VOLUME::_0x39816F6F94F385AD(uParam1->f_23[2], 2682.636f, 234.7335f, 63.52455f, 0f, 0f, -84.76424f, 20.64047f, 43.45819f, 40f);
	}
}

void func_383(var uParam0, var uParam1)
{
	uParam1->f_23[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1902.48f, 492.9257f, 125.2044f, 0f, 0f, 6.52089f, 45f, 45f, 28.07018f, "volTrigger");
}

void func_384(var uParam0, var uParam1)
{
	uParam1->f_23[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2832f, 929f, 48.5f, 0f, 0f, 6.52089f, 45f, 45f, 28.07018f, "volTrigger");
}

struct<4> func_393(int iParam0, int iParam1)
{
	return func_457(iParam0, iParam1);
}

int func_421(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_515(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

struct<4> func_457(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_538(iParam0, iParam1) };
	Var0.f_3 = func_539(iParam0, iParam1);
	return Var0;
}

int func_515(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_515(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

Vector3 func_538(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2369.928f, 757.0357f, 67.2649f;
				case 1:
					return 2370.165f, 758.3299f, 67.308f;
				case 2:
					return 2375.083f, 759.2758f, 66.8034f;
				case 3:
					return 2397.251f, 763.3879f, 66.6845f;
				case 4:
					return 2397.765f, 763.8259f, 66.6966f;
				case 5:
					return 2393.983f, 765.5385f, 66.6767f;
				case 6:
					return 2393.852f, 768.0544f, 66.7339f;
				case 7:
					return 2403.259f, 743.9879f, 66.7947f;
				case 8:
					return 2402.329f, 741.1142f, 66.958f;
				case 9:
					return 2404.546f, 741.1633f, 66.9511f;
				case 10:
					return 2409.24f, 748.9672f, 66.2236f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2397.019f, 745.6677f, 66.6095f;
				case 1:
					return 2396.587f, 744.6501f, 66.7136f;
				case 2:
					return 2389.109f, 745.8279f, 66.6357f;
				case 3:
					return 2400.764f, 762.27f, 66.7257f;
				case 4:
					return 2400.708f, 764.7914f, 66.7618f;
				case 5:
					return 2397.911f, 761.4358f, 66.6748f;
				case 6:
					return 2396.781f, 766.0192f, 66.7211f;
				case 7:
					return 2376.958f, 759.9379f, 66.7807f;
				case 8:
					return 2375.923f, 757.3842f, 66.7678f;
				case 9:
					return 2374.642f, 758.8971f, 66.8089f;
				case 10:
					return 2371.867f, 748.658f, 66.5638f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2692.514f, 259.3546f, 62.3008f;
				case 1:
					return 2693.142f, 260.2778f, 62.1626f;
				case 2:
					return 2692.691f, 263.5097f, 62.1103f;
				case 3:
					return 2673.616f, 260.8877f, 61.9202f;
				case 4:
					return 2671.848f, 262.332f, 61.7556f;
				case 5:
					return 2673.8f, 258.9753f, 61.9806f;
				case 6:
					return 2670.609f, 260.2868f, 61.451f;
				case 7:
					return 2687.739f, 273.2338f, 62.3194f;
				case 8:
					return 2688.746f, 272.4108f, 62.1973f;
				case 9:
					return 2687.853f, 274.4897f, 62.179f;
				case 10:
					return 2674.216f, 273.037f, 62.1675f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2682.603f, 274.4812f, 62.7197f;
				case 1:
					return 2683.197f, 275.078f, 62.7434f;
				case 2:
					return 2685.87f, 271.9468f, 62.6456f;
				case 3:
					return 2676.826f, 256.9313f, 61.9504f;
				case 4:
					return 2675.138f, 254.4285f, 61.4814f;
				case 5:
					return 2678.05f, 256.3213f, 61.9208f;
				case 6:
					return 2677.675f, 251.7332f, 61.3418f;
				case 7:
					return 2693.472f, 257.1711f, 62.1423f;
				case 8:
					return 2692.656f, 256.2555f, 62.1204f;
				case 9:
					return 2694.116f, 256.0409f, 61.9018f;
				case 10:
					return 2688.042f, 247.8629f, 61.0244f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1916.401f, 485.8901f, 127.8697f;
				case 1:
					return 1917.287f, 485.1801f, 128.096f;
				case 2:
					return 1913.485f, 482.4696f, 127.6431f;
				case 3:
					return 1893.994f, 503.2104f, 119.9455f;
				case 4:
					return 1893.396f, 505.6639f, 119.0073f;
				case 5:
					return 1897.616f, 503.8867f, 120.8635f;
				case 6:
					return 1897.964f, 506.6101f, 120.0401f;
				case 7:
					return 1891.992f, 483.0951f, 121.1584f;
				case 8:
					return 1890.925f, 484.8473f, 120.9117f;
				case 9:
					return 1890.01f, 483.5833f, 121.1382f;
				case 10:
					return 1888.439f, 492.0716f, 119.437f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1916.401f, 485.8901f, 127.8697f;
				case 1:
					return 1917.287f, 485.1801f, 128.096f;
				case 2:
					return 1913.485f, 482.4696f, 127.6431f;
				case 3:
					return 1893.994f, 503.2104f, 119.9455f;
				case 4:
					return 1893.396f, 505.6639f, 119.0073f;
				case 5:
					return 1897.616f, 503.8867f, 120.8635f;
				case 6:
					return 1897.964f, 506.6101f, 120.0401f;
				case 7:
					return 1891.992f, 483.0951f, 121.1584f;
				case 8:
					return 1890.925f, 484.8473f, 120.9117f;
				case 9:
					return 1890.01f, 483.5833f, 121.1382f;
				case 10:
					return 1888.439f, 492.0716f, 119.437f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2842.352f, 920.4471f, 47.8883f;
				case 1:
					return 2843.196f, 920.2707f, 47.9676f;
				case 2:
					return 2842.528f, 924.3561f, 47.9212f;
				case 3:
					return 2815.993f, 936.8803f, 50.1384f;
				case 4:
					return 2814.479f, 935.0585f, 50.5334f;
				case 5:
					return 2816.948f, 937.9165f, 49.8702f;
				case 6:
					return 2813.2f, 940.3521f, 50.9439f;
				case 7:
					return 2836.064f, 938.1392f, 47.6678f;
				case 8:
					return 2837.216f, 937.3101f, 47.6154f;
				case 9:
					return 2836.937f, 939.361f, 47.6088f;
				case 10:
					return 2829.503f, 941.255f, 47.977f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2842.352f, 920.4471f, 47.8883f;
				case 1:
					return 2843.196f, 920.2707f, 47.9676f;
				case 2:
					return 2842.528f, 924.3561f, 47.9212f;
				case 3:
					return 2815.993f, 936.8803f, 50.1384f;
				case 4:
					return 2814.479f, 935.0585f, 50.5334f;
				case 5:
					return 2816.948f, 937.9165f, 49.8702f;
				case 6:
					return 2813.2f, 940.3521f, 50.9439f;
				case 7:
					return 2836.064f, 938.1392f, 47.6678f;
				case 8:
					return 2837.216f, 937.3101f, 47.6154f;
				case 9:
					return 2836.937f, 939.361f, 47.6088f;
				case 10:
					return 2829.503f, 941.255f, 47.977f;
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
					return 148.2356f;
				case 1:
					return 248.2356f;
				case 2:
					return 209.6233f;
				case 3:
					return 109.6233f;
				case 4:
					return 197.5509f;
				case 5:
					return 137.6233f;
				case 6:
					return 223.5509f;
				case 7:
					return 79.6233f;
				case 8:
					return 359.6233f;
				case 9:
					return 337.6233f;
				case 10:
					return 289.2583f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 300.2356f;
				case 1:
					return 34.2357f;
				case 2:
					return 1.6233f;
				case 3:
					return 167.6234f;
				case 4:
					return 99.551f;
				case 5:
					return -142.3766f;
				case 6:
					return 97.5509f;
				case 7:
					return 231.5509f;
				case 8:
					return -114.3767f;
				case 9:
					return -212.4491f;
				case 10:
					return 109.2583f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -209.7644f;
				case 1:
					return -299.7644f;
				case 2:
					return 95.6233f;
				case 3:
					return -84.3767f;
				case 4:
					return -16.4491f;
				case 5:
					return -68.3767f;
				case 6:
					return 21.5509f;
				case 7:
					return -160.3767f;
				case 8:
					return 161.6233f;
				case 9:
					return 73.6233f;
				case 10:
					return 81.2583f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 92.2356f;
				case 1:
					return 184.2356f;
				case 2:
					return 133.6233f;
				case 3:
					return -28.3767f;
				case 4:
					return -166.4491f;
				case 5:
					return -14.3767f;
				case 6:
					return 239.5509f;
				case 7:
					return -300.3767f;
				case 8:
					return 57.6233f;
				case 9:
					return 149.6233f;
				case 10:
					return 137.2583f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -335.7644f;
				case 1:
					return -235.7644f;
				case 2:
					return 27.6233f;
				case 3:
					return -150.3767f;
				case 4:
					return -652.4491f;
				case 5:
					return -292.3767f;
				case 6:
					return -316.4491f;
				case 7:
					return -46.3767f;
				case 8:
					return -90.3767f;
				case 9:
					return -340.3767f;
				case 10:
					return 21.2583f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -335.7644f;
				case 1:
					return -235.7644f;
				case 2:
					return 27.6233f;
				case 3:
					return -150.3767f;
				case 4:
					return -292.4491f;
				case 5:
					return -176.3767f;
				case 6:
					return -316.4491f;
				case 7:
					return -46.3767f;
				case 8:
					return -90.3767f;
				case 9:
					return -340.3767f;
				case 10:
					return 21.2583f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -263.7644f;
				case 1:
					return -349.7644f;
				case 2:
					return 67.6233f;
				case 3:
					return -128.3767f;
				case 4:
					return -160.4491f;
				case 5:
					return -104.3767f;
				case 6:
					return -168.4491f;
				case 7:
					return -190.3767f;
				case 8:
					return -210.3767f;
				case 9:
					return -306.3767f;
				case 10:
					return 71.2583f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -263.7644f;
				case 1:
					return -349.7644f;
				case 2:
					return 67.6233f;
				case 3:
					return -128.3767f;
				case 4:
					return -160.4491f;
				case 5:
					return -104.3767f;
				case 6:
					return -168.4491f;
				case 7:
					return -190.3767f;
				case 8:
					return -210.3767f;
				case 9:
					return -306.3767f;
				case 10:
					return 71.2583f;
			}
			break;
	}
	return 0f;
}

