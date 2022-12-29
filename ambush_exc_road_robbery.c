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
	struct<221> Local_15 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<257> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 1176256410, 1176256410, 1176256410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_531 = 0;
	bool bLocal_532 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_532 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_532, 961, 0);
		if (bLocal_532)
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
			__LIB_19__::func_88();
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
									func_25(&Local_15, 1);
									break;
							}
						}
						__LIB_2__::func_266();
						__LIB_2__::func_267(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						func_28(&Local_15, 1);
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
						func_33(&Local_15, 1);
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
	__LIB_2__::func_418(&Local_15);
	func_49();
	__LIB_2__::func_423(&Local_15, 0);
	__LIB_17__::func_769();
	__LIB_2__::func_317(&Local_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	func_28(&Local_15, 1);
	func_53(&Local_15, 0);
	if (Local_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_15.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_237))
	{
		__LIB_2__::func_371(&Local_15);
		__LIB_1__::func_544(Local_15.f_237);
	}
	func_33(&Local_15, 1);
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
	iVar1 = __LIB_2__::func_541(iVar0);
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
	int iVar1;
	struct<4> Var2;
	int iVar6;
	char* sVar7;
	func_125();
	if (Local_274.f_48 == 4)
	{
		if (!func_126(&Local_274, 1))
		{
			__LIB_2__::func_659(&(Local_274.f_247[0]), 1660.547f, -1606.303f, 54.78328f, 1.5f, 0, 0);
			__LIB_2__::func_659(&(Local_274.f_247[1]), 1658.218f, -1605.348f, 54.93408f, 1.5f, 0, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			__LIB_2__::func_133(Local_15[iVar0], func_128(iVar0), 0);
			__LIB_2__::func_372(&Local_15, iVar0);
			Var2 = { func_131(&Local_274, iVar0) };
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
			PED::_0x49DADFC4CD808B0A(Local_15[iVar0], 1, -1);
			__LIB_2__::func_23(&(Local_15.f_152), Local_15[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 234, true);
			if (iVar0 <= 2)
			{
				__LIB_2__::func_20(&(Local_15.f_152), Local_15.f_40[iVar0], 0);
			}
			switch (iVar0)
			{
				case 0:
					iVar6 = func_132(&Local_274, iVar0);
					sVar7 = func_133(&Local_274, iVar0);
					iVar1 = TASK::CREATE_SCENARIO_POINT(iVar6, Var2, Var2.f_3, 0, -1f, 1);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Local_15[iVar0], iVar1, sVar7, -1, false, true, 0, false, -1f, false);
					}
					Local_274.f_112 = __LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 1:
					iVar6 = func_132(&Local_274, iVar0);
					sVar7 = func_133(&Local_274, iVar0);
					iVar1 = TASK::CREATE_SCENARIO_POINT(iVar6, Var2, Var2.f_3, 0, -1f, 1);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Local_15[iVar0], iVar1, sVar7, -1, false, true, 0, false, -1f, false);
					}
					Local_274.f_112 = __LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 2:
					TASK::TASK_STAND_STILL(Local_15[iVar0], -1);
					Local_274.f_112 = __LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 3:
					Local_274.f_112 = __LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					iVar6 = func_132(&Local_274, iVar0);
					sVar7 = func_133(&Local_274, iVar0);
					iVar1 = TASK::CREATE_SCENARIO_POINT(iVar6, Var2, Var2.f_3, 0, -1f, 1);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Local_15[iVar0], iVar1, sVar7, -1, false, true, 0, false, -1f, false);
					}
					if (Local_274.f_48 != 4)
					{
						__LIB_2__::func_659(&(Local_274.f_247[0]), ENTITY::GET_ENTITY_COORDS(Local_15[iVar0], false, true), 1f, 0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	func_135(&Local_15, &Local_274);
	func_136(&Local_274, 1, 0, 0);
	return true;
}

bool func_23()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = -1;
	iVar0 = func_139(&Local_15, &Local_274);
	if (Local_274.f_44 >= 1)
	{
		vVar1 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
		Local_274.f_98 = __LIB_0__::func_94(Local_15[0], Global_36, 1);
		Local_274.f_99 = __LIB_0__::func_94(Local_15[0], vVar1, 1);
		if (Local_274.f_42 < 5)
		{
			if (Local_274.f_42 <= 3)
			{
				if (iVar0 == 1)
				{
					if (Local_274.f_44 > 1)
					{
						__LIB_3__::func_462(&(Local_274.f_156), 1);
						func_143(&Local_274, 4);
					}
				}
			}
			if (func_144())
			{
				func_143(&Local_274, 4);
				return false;
			}
		}
		__LIB_2__::func_647(&Local_274);
	}
	func_125();
	if (!func_126(&Local_274, 8))
	{
		if (func_146())
		{
			__LIB_2__::func_408(&(Local_274.f_49), 1);
			__LIB_17__::func_767();
			func_149();
			func_150(&Local_274, 5);
		}
	}
	switch (Local_274.f_42)
	{
		case 0:
			func_151();
			if (func_152())
			{
				if (func_153())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					func_150(&Local_274, 5);
				}
			}
			else if (func_155())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_15[0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_15[0], false);
				}
				if (func_157(iVar0))
				{
					__LIB_17__::func_767();
					func_25(&Local_15, 1);
					__LIB_2__::func_483(&Local_15, 1);
					__LIB_2__::func_373();
					func_150(&Local_274, 1);
				}
			}
			break;
		case 1:
			func_159(1077936128 /* Float: 3f */);
			func_151();
			__LIB_17__::func_767();
			func_160();
			if (__LIB_2__::func_1(Local_15[3], 0, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_15[3], false);
			}
			if (func_161())
			{
				func_150(&Local_274, 5);
			}
			break;
		case 2:
			if (__LIB_2__::func_1(Local_15[3], 0, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_15[3], false);
			}
			func_159(1077936128 /* Float: 3f */);
			if (func_151())
			{
			}
			break;
		case 3:
			if (func_162())
			{
			}
			break;
		case 4:
			func_163();
			func_150(&Local_274, 5);
			break;
		case 5:
			__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			return true;
	}
	return false;
}

void func_25(var uParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar17;
	if (!__LIB_0__::func_65(&Global_1393447, 65536))
	{
		__LIB_0__::func_47(&Global_1393447, 16);
		__LIB_0__::func_47(&Global_1393447, 65536);
		__LIB_2__::func_147(uParam0, 2097152);
		Global_40.f_9632.f_194 = uParam0->f_151;
		func_53(uParam0, 1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_1__::func_924();
		Var0.f_6 = -1082130432;
		Var0.f_7 = -1082130432;
		Var0.f_8 = -1082130432;
		Var0.f_9 = -1082130432;
		Var0.f_10 = -1082130432;
		Var0.f_11 = -1082130432;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		Var0 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		Var0.f_6 = 100f;
		if (!__LIB_0__::func_86(uParam0->f_212))
		{
			Var0.f_3 = { uParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { uParam0->f_209 };
		}
		if (__LIB_2__::func_8(uParam0->f_151))
		{
			Var0.f_8 = 40f;
			Var0.f_9 = 40f;
			Var0.f_7 = 40f;
		}
		else
		{
			Var0.f_8 = 120f;
			Var0.f_9 = 120f;
			Var0.f_7 = 120f;
		}
		uParam0->f_93 = EVENT::_CREATE_SHOCKING_EVENT(&Var0);
		if (!__LIB_2__::func_5())
		{
			__LIB_2__::func_6(1);
			__LIB_2__::func_147(uParam0, 4);
		}
		if (bParam1)
		{
			__LIB_2__::func_304(1, -1, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_175();
			__LIB_2__::func_176();
		}
		if (__LIB_2__::func_8(uParam0->f_151))
		{
			__LIB_0__::func_747(30, 0, 1);
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			func_33(uParam0, 0);
		}
		MISC::_0x1096603B519C905F(__LIB_2__::func_9(uParam0->f_151));
		__LIB_2__::func_468(uParam0);
		__LIB_0__::func_703(0, 13);
		iVar17 = 0;
		while (iVar17 < uParam0->f_215)
		{
			if (__LIB_2__::func_1((*uParam0)[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY((*uParam0)[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

void func_28(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!__LIB_2__::func_4(uParam0, 33554432))
		{
			__LIB_1__::func_978(0);
			__LIB_2__::func_147(uParam0, 33554432);
		}
	}
	else if (__LIB_2__::func_4(uParam0, 33554432))
	{
		__LIB_1__::func_978(1);
		__LIB_2__::func_311(uParam0, 33554432);
	}
}

bool func_31()
{
	__LIB_2__::func_647(&Local_274);
	Local_274.f_95 = __LIB_2__::func_374(&Local_15);
	func_160();
	func_178(&Local_15, &(Local_274.f_250), &Local_15);
	func_179(20f);
	func_180();
	__LIB_17__::func_800(&Local_15, &(Local_274.f_113), &(Local_274.f_156));
	if (!Local_274.f_256)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[3]))
		{
			if (__LIB_2__::func_398(Local_15[3]))
			{
				__LIB_2__::func_603(&(Local_15[3]), &(Local_274.f_191), &(Local_274.f_212), 1, 1);
				Local_274.f_256 = 1;
			}
		}
		else
		{
			Local_274.f_256 = 1;
		}
	}
	if (func_184())
	{
		return true;
	}
	switch (Local_274.f_43)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_58[0 /*3*/]), 0);
			func_185(&Local_274, 1);
			break;
		case 1:
			if (Local_274.f_95 <= 0)
			{
				func_185(&Local_274, 2);
			}
			break;
		case 2:
			if (Local_274.f_95 <= 0)
			{
				__LIB_2__::func_328();
				func_185(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_393(&(Local_274.f_250)))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_979(1);
		__LIB_2__::func_311(uParam0, 8192);
	}
	else
	{
		__LIB_2__::func_29(1);
		__LIB_2__::func_147(uParam0, 8192);
	}
}

bool func_46()
{
	if (Local_15.f_95 >= 10 && Local_15.f_95 < 12)
	{
		return true;
	}
	return func_206();
}

void func_49()
{
	__LIB_2__::func_408(&(Local_274.f_49), 1);
	__LIB_2__::func_353(&(Local_274.f_247[0]), 1);
	__LIB_2__::func_353(&(Local_274.f_247[1]), 1);
	if (PLAYER::_0x6614F9039BD31931(PLAYER::PLAYER_ID(), 14, 0))
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 14, 0, 0);
	}
	__LIB_2__::func_328();
	__LIB_17__::func_771(&(Local_274.f_37), &Local_15);
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		__LIB_2__::func_147(uParam0, 65536);
	}
	else
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		__LIB_2__::func_311(uParam0, 65536);
	}
}

bool func_83()
{
	float fVar0[3];
	int iVar4;
	int iVar5;
	switch (Local_15.f_221)
	{
		case 0:
			Local_274.f_48 = 0;
			break;
		case 1:
			Local_274.f_48 = 1;
			break;
		case 2:
			Local_274.f_48 = 2;
			break;
		case 3:
			Local_274.f_48 = 3;
			break;
		case 4:
			Local_274.f_48 = 4;
			break;
		default:
			Local_274.f_48 = 0;
			break;
	}
	switch (Local_15.f_151)
	{
		case 39:
			Local_15.f_181 = -1;
			break;
		default:
			if (!__LIB_2__::func_633(2))
			{
				Local_15.f_181 = 2;
			}
			else
			{
				Local_15.f_181 = -1;
			}
			break;
	}
	fVar0[0] = 1E+10f;
	fVar0[1] = 1E+10f;
	fVar0[2] = 1E+10f;
	fVar0[0] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221));
	fVar0[1] = BUILTIN::VDIST2(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221));
	iVar5 = 0;
	iVar4 = 1;
	while (iVar4 <= 2)
	{
		if (fVar0[iVar4] < fVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	switch (iVar5)
	{
		case 0:
			func_143(&Local_274, 1);
			break;
		case 1:
			func_143(&Local_274, 2);
			break;
	}
	Local_15.f_215 = 4;
	Local_15.f_217 = 1;
	Local_15.f_218 = 0;
	Local_15.f_216 = 3;
	__LIB_2__::func_147(&Local_15, 131072);
	func_258(&Local_15, 3, 1);
	func_259();
	func_260();
	__LIB_2__::func_41(&(Local_15.f_182), 65, 0f, 1.75f, 2f, 2f, 0);
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_41)
	{
		case 0:
			func_271();
			__LIB_17__::func_777(&Local_15);
			func_273(&Local_15);
			Local_274.f_41 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!func_274())
			{
				iVar0 = 0;
			}
			if (!func_275(&Local_15))
			{
				iVar0 = 0;
			}
			if (!func_276(&Local_15))
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
	return func_277(iVar0, &Local_15);
}

int func_97(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (Local_15.f_181)
	{
		case 2:
			switch (iVar0)
			{
				case 0:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 1:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				case 2:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 3:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				default:
					break;
			}
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		default:
			switch (iVar0)
			{
				case 0:
					return joaat("G_M_M_UNICRIMINALS_01");
				case 1:
					return joaat("G_M_M_UNICRIMINALS_01");
				case 2:
					return joaat("G_M_M_UNICRIMINALS_01");
				case 3:
					return joaat("G_M_M_UNICRIMINALS_01");
				default:
					break;
			}
			return joaat("G_M_M_UNICRIMINALS_01");
	}
	return joaat("G_M_M_UNICRIMINALS_01");
}

Vector3 func_99(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_278(&Local_274, iVar0) };
	return vVar1;
}

var func_100(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_278(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_280(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_280(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_131(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_131(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125()
{
	if (func_126(&Local_274, 131072))
	{
		return;
	}
	if (__LIB_2__::func_631(&(Local_15.f_152), Local_15.f_49[0], 0))
	{
		func_143(&Local_274, 131072);
	}
}

bool func_126(var uParam0, int iParam1)
{
	return (uParam0->f_39 && iParam1) != 0;
}

char* func_128(int iParam0)
{
	int iVar0;
	iVar0 = func_285(iParam0);
	return func_286(iVar0);
}

struct<4> func_131(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(0, 0);
					case 1:
						return func_287(0, 2);
					case 2:
						return func_287(0, 5);
					case 3:
						return func_287(0, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(1, 0);
					case 1:
						return func_287(1, 2);
					case 2:
						return func_287(1, 5);
					case 3:
						return func_287(1, 8);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(2, 0);
					case 1:
						return func_287(2, 2);
					case 2:
						return func_287(2, 5);
					case 3:
						return func_287(2, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(3, 0);
					case 1:
						return func_287(3, 2);
					case 2:
						return func_287(3, 5);
					case 3:
						return func_287(3, 8);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(4, 0);
					case 1:
						return func_287(4, 2);
					case 2:
						return func_287(4, 5);
					case 3:
						return func_287(4, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(5, 0);
					case 1:
						return func_287(5, 2);
					case 2:
						return func_287(5, 5);
					case 3:
						return func_287(5, 8);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(6, 0);
					case 1:
						return func_287(6, 2);
					case 2:
						return func_287(6, 5);
					case 3:
						return func_287(6, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(7, 0);
					case 1:
						return func_287(7, 2);
					case 2:
						return func_287(7, 5);
					case 3:
						return func_287(7, 8);
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(8, 0);
					case 1:
						return func_287(8, 2);
					case 2:
						return func_287(8, 5);
					case 3:
						return func_287(8, 8);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(9, 0);
					case 1:
						return func_287(9, 2);
					case 2:
						return func_287(9, 5);
					case 3:
						return func_287(9, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

int func_132(var uParam0, int iParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_LEAN_POST_RIGHT");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_LEAN_POST_LEFT");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 2:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					case 3:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 2:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 2:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_SMOKE_CIGAR");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_SMOKE_CIGAR");
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_SMOKE_CIGAR");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return joaat("WORLD_HUMAN_SMOKE_CIGAR");
					case 1:
						return joaat("WORLD_HUMAN_GUARD_MILITARY");
					case 3:
						return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					default:
						break;
				}
			}
			break;
	}
	return joaat("WORLD_HUMAN_STAND_WAITING");
}

char* func_133(var uParam0, int iParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return "";
					case 1:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "";
					case 1:
						return "";
					case 2:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					case 1:
						return "";
					case 2:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					case 1:
						return "";
					case 2:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					case 1:
						return "";
					case 3:
						return "";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					case 1:
						return "";
					case 3:
						return "";
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return "";
					case 1:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "";
					case 1:
						return "";
					case 3:
						return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A";
					default:
						break;
				}
			}
			break;
	}
	return "";
}

void func_135(int iParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 315, false);
				break;
			default:
				if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 0))
				{
					PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 301, true);
					PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 317, false);
					PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 297, false);
				}
				break;
		}
		iVar0++;
	}
	if (__LIB_0__::func_181())
	{
		sVar1 = func_291(iParam0, uParam1);
		sVar2 = func_292(iParam0, uParam1);
	}
	else
	{
		sVar1 = func_293(iParam0, uParam1);
		sVar2 = func_294(iParam0, uParam1);
	}
	__LIB_2__::func_602(&(uParam1->f_156[0 /*17*/]), __LIB_2__::func_460(7), sVar1, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(uParam1->f_156[1 /*17*/]), __LIB_2__::func_460(10), sVar2, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_526(&(uParam1->f_156), 0, 0);
}

void func_136(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 || iParam2)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(uParam0->f_156[0 /*17*/]), 1, 0);
		}
	}
	else if (__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_156[0 /*17*/]), 4))
	{
		__LIB_2__::func_411(&(uParam0->f_156[0 /*17*/]), 0, 0);
	}
	if (iParam1 || iParam3)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(uParam0->f_156[1 /*17*/]), 1, 0);
		}
	}
	else if (__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_156[1 /*17*/]), 4))
	{
		__LIB_2__::func_411(&(uParam0->f_156[1 /*17*/]), 0, 0);
	}
}

int func_139(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	fVar0 = 50f;
	fVar1 = 2f;
	iVar4 = -1;
	iVar5 = 1;
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		iVar2 = func_301(uParam0[iVar3], &(uParam1->f_113[iVar3 /*21*/]), fVar0, &(uParam1->f_156), &iVar5, fVar1, 3, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (__LIB_2__::func_341(&(uParam1->f_113[iVar3 /*21*/])))
		{
			if (!uParam1->f_257)
			{
				if (uParam1->f_113[iVar3 /*21*/].f_1 != -1)
				{
					func_136(uParam1, 0, 0, 0);
					switch (uParam1->f_113[iVar3 /*21*/].f_1)
					{
						case 0:
							func_136(uParam1, 0, 0, 0);
							break;
						case 1:
							func_136(uParam1, 0, 0, 0);
							break;
					}
					__LIB_2__::func_504((*uParam0)[0], 400);
					__LIB_2__::func_504((*uParam0)[1], 200);
					uParam1->f_257 = 1;
				}
			}
		}
		if (iVar2 != -1)
		{
			iVar4 = iVar2;
			uParam1->f_257 = 0;
		}
		iVar3++;
	}
	return iVar4;
}

void func_143(var uParam0, int iParam1)
{
	uParam0->f_39 = (uParam0->f_39 || iParam1);
}

bool func_144()
{
	char* sVar0;
	int iVar1;
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_86[4]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_86[4], Global_36))
		{
			iVar1 = -1;
			sVar0 = func_306(&Local_15, &Local_274, 0, &iVar1);
			PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, 3000, false, 1);
			__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1);
			return true;
		}
	}
	return false;
}

bool func_146()
{
	if (func_126(&Local_274, 4))
	{
		return true;
	}
	else if (__LIB_2__::func_343(Global_35, Local_15.f_49[0], 1))
	{
		return true;
	}
	if (__LIB_17__::func_799(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_94), 0, 3, 1))
	{
		return true;
	}
	if (__LIB_2__::func_4(&Local_15, 33554432))
	{
		if (__LIB_2__::func_477(&Local_15))
		{
			return true;
		}
	}
	return false;
}

void func_149()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			iVar2 = iVar0;
			switch (iVar2)
			{
				case 0:
					fVar1 = 0.1f;
					break;
				case 1:
					fVar1 = 0.6f;
					break;
				case 2:
				case 3:
					func_319(iVar2, 3, 3);
					fVar1 = 0.3f;
					break;
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(Local_15[iVar0]))
			{
				PED::_0x802092B07E3B1EEA(Local_15[iVar0], Global_36, 3);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (__LIB_1__::func_372(Local_15[iVar0], 0) == joaat("WEAPON_UNARMED"))
			{
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar3, fVar1, 0, 1, 1);
			if (!func_126(&Local_274, 4))
			{
				if (!func_126(&Local_274, 1024))
				{
					if (Local_15.f_181 == 2)
					{
						__LIB_2__::func_336(Local_15[iVar0], Global_35, "GENERIC_SHOCKED_HIGH", -1073741824 /* Float: -2f */, 1, 1744022339, -1);
					}
					else
					{
						__LIB_2__::func_336(Local_15[iVar0], Global_35, "AMBUSH_ROR_V2_ROB_AGGRO", -1073741824 /* Float: -2f */, 1, 1744022339, -1);
					}
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
					func_143(&Local_274, 1024);
				}
			}
		}
		iVar0++;
	}
	__LIB_2__::func_691(&(Local_274.f_37), Local_15[0], 0, 50f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

void func_150(var uParam0, int iParam1)
{
	uParam0->f_42 = iParam1;
}

bool func_151()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	if (Local_274.f_45 < 3)
	{
		if (func_322())
		{
			func_323(&Local_274, 3);
		}
	}
	iVar3 = -1;
	iVar4 = -1;
	iVar4 = func_324(&Local_15, &Local_274);
	switch (Local_274.f_45)
	{
		case 0:
			func_325(&Local_15, &Local_274);
			func_323(&Local_274, 1);
			break;
		case 1:
			fVar2 = __LIB_0__::func_94(Local_15[3], Global_36, 1);
			if (PED::IS_PED_FACING_PED(Local_15[3], Global_35, 40f) && fVar2 < 15f)
			{
				if (ENTITY::GET_ENTITY_SPEED(Global_35) < 5f)
				{
					__LIB_2__::func_356(Local_15[3], Global_35, 2, 1, 5000, 1);
					Local_274.f_105 = fVar2;
					__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
					sVar0 = func_327(&Local_15, &Local_274, 3, &iVar3);
					__LIB_2__::func_336(Local_15[3], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar3);
					func_323(&Local_274, 2);
				}
				else if (!__LIB_0__::func_75(&(Local_274.f_58[2 /*3*/])))
				{
					__LIB_2__::func_356(Local_15[3], Global_35, 1, 1, 5000, 1);
					__LIB_1__::func_283(&(Local_274.f_58[2 /*3*/]), 0);
				}
			}
			break;
		case 2:
			if (func_328() || iVar4 == 1)
			{
				func_319(3, 3, 1);
				sVar0 = func_306(&Local_15, &Local_274, 3, &iVar3);
				__LIB_2__::func_336(Local_15[3], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar3);
				func_143(&Local_274, 4);
			}
			else if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 3f))
			{
				func_329(&Local_274, 1);
			}
			break;
		case 3:
			__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
			func_319(0, 3, 2);
			func_319(1, 3, 1);
			__LIB_2__::func_45(Local_15[0], Global_35, -1);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			__LIB_2__::func_45(0, Global_35, -1);
			__LIB_1__::func_474(Local_15[1], &iVar1, 0.75f, 0, 1, 1);
			func_323(&Local_274, 4);
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 0.1f) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				sVar0 = func_306(&Local_15, &Local_274, 1, &iVar3);
				__LIB_2__::func_336(Local_15[1], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[0], &iVar1, 0, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[1], &iVar1, 1f, 0, 1, 1);
				__LIB_2__::func_250(&(Local_15.f_152), 0);
				func_143(&Local_274, 4);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_152()
{
	if (func_126(&Local_274, 524288))
	{
		return true;
	}
	if (__LIB_2__::func_157(Local_274.f_86[1], Global_36))
	{
		if (!func_126(&Local_274, 524288))
		{
			func_143(&Local_274, 524288);
		}
		return true;
	}
	return false;
}

bool func_153()
{
	int iVar0;
	switch (Local_274.f_97)
	{
		case 0:
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[2], Global_35, 17))
			{
				__LIB_2__::func_45(Local_15[2], Global_35, -1);
				Local_274.f_97++;
			}
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_15[2], Global_35, 45f))
			{
				__LIB_2__::func_73(Local_15[2], &(Local_15.f_22[2]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[2], Global_35, -1, false, 1);
				if (Local_15.f_181 == 2)
				{
					__LIB_2__::func_336(Local_15[2], Global_35, "CALLOUT_EASY_PICKINGS_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
				}
				else
				{
					__LIB_2__::func_336(Local_15[2], Global_35, "CALLOUT_EASY_PICKINGS_NEUTRAL", -1073741824 /* Float: -2f */, 1, 1744022339, -1);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 20f, 1f, 0.5f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				__LIB_2__::func_357(Local_15[0], Global_36, 3, 0, 2);
				__LIB_2__::func_357(Local_15[1], Global_36, 3, 0, 2);
				TASK::_TASK_PERFORM_SEQUENCE_2(Local_15[0], iVar0, 0.5f, 0.5f);
				TASK::_TASK_PERFORM_SEQUENCE_2(Local_15[1], iVar0, 1.2f, 1.2f);
				Local_274.f_97++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0f, 1, Local_15[2], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				__LIB_2__::func_336(Local_15[2], Global_35, "CALLOUT_JUST_KILL_EM_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, -1);
				__LIB_1__::func_283(&(Local_274.f_58[8 /*3*/]), 0);
				Local_274.f_97++;
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_58[8 /*3*/]), 0.5f))
			{
				Local_274.f_97++;
			}
			break;
		case 4:
			func_143(&Local_274, 4);
			func_149();
			return true;
	}
	return false;
}

bool func_155()
{
	if (!__LIB_2__::func_157(Local_274.f_86[1], Global_36))
	{
		if (__LIB_2__::func_157(Local_274.f_86[0], Global_36))
		{
			__LIB_0__::func_11(&Local_15, 7);
			return true;
		}
	}
	if (__LIB_2__::func_708(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_157(int iParam0)
{
	vector3 vVar0;
	if (__LIB_2__::func_341(&(Local_274.f_113[0 /*21*/])) || __LIB_2__::func_341(&(Local_274.f_113[1 /*21*/])))
	{
		return false;
	}
	if (iParam0 != -1)
	{
		return true;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1.5f) };
	if (__LIB_2__::func_157(Local_274.f_86[2], vVar0))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

void func_159(float fParam0)
{
	if (!__LIB_0__::func_75(&(Local_274.f_58[4 /*3*/])))
	{
		if (Local_274.f_42 >= 1)
		{
			__LIB_1__::func_283(&(Local_274.f_58[4 /*3*/]), 0);
		}
	}
	else if (__LIB_1__::func_285(&(Local_274.f_58[4 /*3*/]), fParam0))
	{
		return;
	}
	__LIB_2__::func_375(&Local_15, 0);
}

void func_160()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (PED::IS_PED_SHOOTING(Local_15[iVar0]) || (__LIB_2__::func_167(Local_15[iVar0], 1) && __LIB_1__::func_472(Local_15[iVar0], 1116471296 /* Float: 70f */, 10f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)))
				{
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_161()
{
	__LIB_2__::func_714(&(Local_274.f_37), 40f);
	if (Local_274.f_44 >= 5 && Local_274.f_44 < 12)
	{
		func_343(&Local_15, &Local_274);
		if (func_344())
		{
			__LIB_2__::func_505(&Local_15);
		}
	}
	switch (Local_274.f_44)
	{
		case 0:
			func_346();
			func_347(&Local_274, 1);
			break;
		case 1:
			if (func_348())
			{
				func_325(&Local_15, &Local_274);
				func_347(&Local_274, 2);
			}
			break;
		case 2:
			func_349();
			if (func_350())
			{
				func_347(&Local_274, 3);
			}
			else if (func_351())
			{
				func_352(&Local_15, &Local_274);
				func_347(&Local_274, 3);
			}
			break;
		case 3:
			func_349();
			if ((!__LIB_0__::func_181() && (Local_15.f_181 == 2 && Local_15.f_227)) && ENTITY::GET_ENTITY_SPEED(Global_35) < 1.75f)
			{
				if (func_353())
				{
					func_347(&Local_274, 4);
				}
			}
			else if (func_354())
			{
				func_28(&Local_15, 0);
				func_347(&Local_274, 4);
			}
			break;
		case 4:
			if (!func_126(&Local_274, 262144))
			{
				if ((__LIB_2__::func_227(0f, 1, Local_15[0], 1) && __LIB_2__::func_227(0f, 1, Local_15[1], 1)) && __LIB_2__::func_227(0f, 1, Global_35, 1))
				{
					func_135(&Local_15, &Local_274);
					func_136(&Local_274, 0, 0, 1);
					func_143(&Local_274, 262144);
				}
			}
			func_349();
			if (!__LIB_0__::func_181() && (Local_15.f_181 == 2 && Local_15.f_227))
			{
				if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 1f))
				{
					func_143(&Local_274, 4);
				}
			}
			else if (!func_355())
			{
				if (func_356())
				{
					__LIB_2__::func_408(&(Local_274.f_49), 1);
					func_347(&Local_274, 5);
				}
			}
			else if (func_357())
			{
				__LIB_2__::func_408(&(Local_274.f_49), 1);
				func_347(&Local_274, 5);
			}
			else if (func_358())
			{
				__LIB_2__::func_408(&(Local_274.f_49), 1);
				return true;
			}
			break;
		case 5:
			if (!func_344())
			{
				if (!func_355())
				{
					__LIB_2__::func_691(&(Local_274.f_37), Local_15[0], 1, 50f);
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
					PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
				}
				if (func_359())
				{
					func_347(&Local_274, 6);
				}
				else if (func_358())
				{
					return true;
				}
			}
			else if (func_356())
			{
				func_347(&Local_274, 8);
			}
			break;
		case 6:
			if (!func_355())
			{
				func_356();
			}
			if (!func_344())
			{
				if (func_360())
				{
					func_347(&Local_274, 7);
				}
				else if (func_358())
				{
					return true;
				}
			}
			else
			{
				func_347(&Local_274, 8);
			}
			break;
		case 7:
			if (func_361())
			{
				return true;
			}
			break;
		case 8:
			if (!VOLUME::_DOES_VOLUME_EXIST(Local_274.f_86[3]))
			{
				Local_274.f_86[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_36, 0f, 0f, 0f, 5f, 5f, 5f, "volHorseStayout");
			}
			__LIB_2__::func_417(&Local_15, Local_274.f_86[3], Local_274.f_106, 1.25f, 8f, 1065353216 /* Float: 1f */, 1);
			if (!func_126(&Local_274, 64))
			{
				if (!__LIB_2__::func_227(0f, 1, Local_15[0], 1) || !__LIB_2__::func_227(0f, 1, Local_15[1], 1))
				{
					return false;
				}
				func_143(&Local_274, 64);
			}
			if (func_344() && func_363())
			{
				if (func_365(Local_15[0], &Local_274, 0.1f, 1, -8.5f, 2, 0, 0, __LIB_1__::func_976(), 5000, 1, 1))
				{
					__LIB_2__::func_691(&(Local_274.f_37), Local_15[0], 0, 50f);
					if (Local_274.f_6)
					{
						__LIB_2__::func_303(Local_15[0], Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_143(&Local_274, 4);
					}
					else if (Local_274.f_4)
					{
						func_28(&Local_15, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(Local_15[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(Local_15[0], 1, 1, 0, 0);
						__LIB_2__::func_469();
						func_135(&Local_15, &Local_274);
						func_136(&Local_274, 0, 0, 1);
						func_150(&Local_274, 3);
					}
				}
				else if ((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_274.f_109, false) > 1f)
					{
						func_143(&Local_274, 4);
					}
				}
			}
			break;
		case 12:
			return true;
	}
	return false;
}

bool func_162()
{
	char* sVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	iVar6 = -1;
	if (Local_274.f_46 > 2)
	{
		if (Local_274.f_98 > 12.5f || __LIB_0__::func_94(Local_15[1], Global_36, 1) > 12.5f)
		{
			if (!func_368())
			{
				if (__LIB_0__::func_163(Local_15[1], 1630799643))
				{
					TASK::TASK_STAND_STILL(Local_15[1], 100);
				}
			}
		}
		if (Local_274.f_98 > 12.5f || __LIB_0__::func_94(Local_15[0], Global_36, 1) > 12.5f)
		{
			if (!func_368())
			{
				if (__LIB_0__::func_163(Local_15[0], 1630799643))
				{
					TASK::TASK_STAND_STILL(Local_15[0], 100);
				}
			}
		}
	}
	switch (Local_274.f_46)
	{
		case 0:
			if (__LIB_1__::func_372(Local_15[0], 0) == joaat("WEAPON_UNARMED"))
			{
				sVar0 = func_370(&Local_15, &Local_274, 0, &iVar6);
				__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar6);
				func_371();
				func_372(&Local_274, 1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_163(Local_15[0], joaat("SCRIPT_TASK_CONFRONT")))
			{
				Var2 = { func_131(&Local_274, 0) };
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var2, 1f, -1, 0.25f, 0, Var2.f_3);
				__LIB_1__::func_474(Local_15[0], &iVar1, 0, 0, 1, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[1], Global_35, -1, -1f, -1f, -1f);
				func_372(&Local_274, 2);
			}
			break;
		case 2:
			if (!PED::IS_PED_RAGDOLL(Global_35))
			{
				if (!__LIB_0__::func_75(&(Local_274.f_58[3 /*3*/])))
				{
					__LIB_1__::func_283(&(Local_274.f_58[3 /*3*/]), 1);
				}
				if (__LIB_1__::func_285(&(Local_274.f_58[3 /*3*/]), 8f) && !func_126(&Local_274, 4))
				{
					if (Local_274.f_98 < 12.5f || __LIB_0__::func_94(Local_15[1], Global_36, 1) < 12.5f)
					{
						if (__LIB_2__::func_227(0, 1, Global_35, 1))
						{
							sVar0 = func_370(&Local_15, &Local_274, 1, &iVar6);
							PED::_0x8ACC0506743A8A5C(Local_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[1], Global_35, -1, false, 1);
							__LIB_2__::func_336(Local_15[1], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar6);
							__LIB_1__::func_148(&(Local_274.f_58[3 /*3*/]));
							func_372(&Local_274, 3);
						}
					}
				}
			}
			else if (__LIB_0__::func_75(&(Local_274.f_58[3 /*3*/])))
			{
				__LIB_2__::func_113(&(Local_274.f_58[3 /*3*/]));
			}
			break;
		case 3:
			if (__LIB_0__::func_94(Local_15[1], Global_36, 1) < 6f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_15[1], joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Local_15[1], 1, 1, 0, 0);
				TASK::TASK_CONFRONT(Local_15[1], Global_35, 2);
				func_372(&Local_274, 4);
			}
			else if (__LIB_1__::func_285(&(Local_274.f_58[3 /*3*/]), 8f))
			{
				if (func_368())
				{
					sVar0 = func_306(&Local_15, &Local_274, 0, &iVar6);
					PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, 3000, false, 1);
					__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar6);
					func_143(&Local_274, 4);
				}
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_58[3 /*3*/]), 8f))
			{
				if (func_368())
				{
					sVar0 = func_306(&Local_15, &Local_274, 0, &iVar6);
					PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, 3000, false, 1);
					__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar6);
					func_143(&Local_274, 4);
				}
			}
			else if (!func_126(&Local_274, 32768))
			{
				if (!func_368())
				{
					__LIB_2__::func_691(&(Local_274.f_37), Local_15[0], 0, 50f);
					PED::_0x8ACC0506743A8A5C(Local_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[1], Global_35, 3000, false, 1);
					func_143(&Local_274, 32768);
				}
			}
			break;
	}
	return false;
}

void func_163()
{
	int iVar0;
	float fVar1;
	int iVar2;
	fVar1 = 0f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			switch (iVar0)
			{
				case 0:
					fVar1 = 0f;
					break;
				case 1:
					fVar1 = 1f;
					break;
				case 2:
					fVar1 = 0.75f;
					break;
				case 3:
					fVar1 = 0.5f;
					break;
			}
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_COMBAT_PED(Local_15[iVar0], Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar2, fVar1, 0, 1, 1);
		}
		iVar0++;
	}
}

void func_178(var uParam0, int iParam1, var uParam2)
{
	char* sVar0;
	if (__LIB_2__::func_648(iParam1, uParam2, 0, -1, 1073741824 /* Float: 2f */, 0))
	{
		switch (uParam0->f_181)
		{
			case 2:
				sVar0 = "AMBUSH_ROR_V1_PLYFINAL";
				break;
			default:
				sVar0 = "AMBUSH_ROR_V2_PLYFINAL";
				break;
		}
		if (__LIB_2__::func_336(Global_35, Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 291934926, -1))
		{
			__LIB_4__::func_424(iParam1);
		}
	}
}

void func_179(float fParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_12() == 5)
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (Local_15.f_9[iVar0] <= (fParam0 + 1f))
			{
				fVar1 = PED::GET_COMBAT_FLOAT(Local_15[iVar0], 31);
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (fVar1 != fParam0)
					{
						PED::SET_COMBAT_FLOAT(Local_15[iVar0], 31, fParam0);
					}
				}
				else if (fVar1 != 0f)
				{
					PED::SET_COMBAT_FLOAT(Local_15[iVar0], 31, -1f);
				}
			}
			iVar0++;
		}
	}
}

void func_180()
{
	int iVar0;
	int iVar1;
	if (!Local_274.f_255)
	{
		if (__LIB_0__::func_12() == 5)
		{
			iVar0 = 0;
			while (iVar0 < Local_15.f_215)
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 6, false);
					PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 494, true);
				}
				iVar0++;
			}
			Local_274.f_255 = 1;
		}
	}
	else if (__LIB_0__::func_12() != 5)
	{
		iVar1 = 0;
		while (iVar1 < Local_15.f_215)
		{
			if (__LIB_2__::func_1(Local_15[iVar1], 0, 0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_15[iVar1], 6, true);
				PED::SET_PED_CONFIG_FLAG(Local_15[iVar1], 494, false);
			}
			iVar1++;
		}
		Local_274.f_255 = 1;
	}
}

bool func_184()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_12() == 5)
	{
		__LIB_1__::func_283(&(Local_274.f_58[7 /*3*/]), 0);
		if (__LIB_1__::func_285(&(Local_274.f_58[7 /*3*/]), 5f) && PED::_0x285D36C5C72B0569(Global_35) > 5f)
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 8942468, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_1__::func_474(Local_15[iVar0], &iVar2, 1f, 2.5f, 1, 1);
					PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					__LIB_2__::func_237(&Local_15, iVar0, 256);
					__LIB_2__::func_237(&Local_15, iVar0, 2);
					if (!bVar1)
					{
						if (Local_15.f_9[iVar0] < 40f)
						{
							if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "CALLOUT_FORGET_FLEEING_MALE", 60f, 1, 1744022339, -1))
							{
								bVar1 = true;
							}
						}
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				iVar3 = __LIB_2__::func_439(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar3 >= 0)
				{
					__LIB_2__::func_336(Local_15[iVar3], Global_35, "CALLOUT_FORGET_FLEEING_MALE", 60f, 1, 1744022339, -1);
				}
			}
			return true;
		}
	}
	return false;
}

void func_185(var uParam0, int iParam1)
{
	uParam0->f_43 = iParam1;
}

int func_206()
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_4(&Local_15, 16384))
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
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
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_15[iVar1]))
				{
					__LIB_2__::func_357(Local_15[iVar1], Global_36, 5, 1, 1);
				}
				__LIB_2__::func_237(&Local_15, iVar1, 2);
				PED::_0x24C82EF607105FAA(Local_15[iVar1], joaat("AGGRESSIVE"));
			}
			switch (iVar1)
			{
				case 0:
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
				case 1:
					if (!__LIB_2__::func_343(Local_15[iVar1], Local_15.f_49[0], 0))
					{
						iVar0 = 0;
						if (!__LIB_0__::func_163(Local_15[iVar1], -1794415470))
						{
							if (__LIB_2__::func_25(&Local_15, iVar1, 8))
							{
								__LIB_2__::func_596(Local_15[iVar1], Local_15.f_49[0], -1, 2f, -1, 131072);
							}
							else
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(Local_15[iVar1], Local_15.f_49[0], -1);
							}
						}
					}
					else if (PED::_GET_SEAT_PED_IS_USING(Local_15[iVar1]) != -1 || !TASK::IS_PED_STILL(Local_15[iVar1]))
					{
						iVar0 = 0;
					}
					break;
				case 2:
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
				case 3:
					if (!__LIB_0__::func_71(Local_15[iVar1]))
					{
						iVar0 = 0;
						if (!__LIB_0__::func_163(Local_15[iVar1], 1868526510))
						{
							PED::_0xF1C03A5352243A30(Local_15[iVar1]);
							if (__LIB_2__::func_25(&Local_15, iVar1, 8) || __LIB_2__::func_26(&Local_15, iVar1, 8))
							{
								__LIB_1__::func_562(Local_15[iVar1], Local_15.f_40[1], 0, 2f, 20000);
							}
							else
							{
								PED::_SET_PED_ON_MOUNT(Local_15[iVar1], Local_15.f_40[1], -1, true);
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

void func_258(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (__LIB_0__::func_27(iParam1, 1))
		{
			__LIB_2__::func_147(uParam0, 262144);
		}
		if (__LIB_0__::func_27(iParam1, 2))
		{
			__LIB_2__::func_147(uParam0, 524288);
		}
	}
	else
	{
		if (__LIB_0__::func_27(iParam1, 1))
		{
			__LIB_2__::func_311(uParam0, 262144);
		}
		if (__LIB_0__::func_27(iParam1, 2))
		{
			__LIB_2__::func_311(uParam0, 524288);
		}
	}
}

void func_259()
{
	__LIB_2__::func_104(&(Local_15.f_152), 0);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 0);
	__LIB_2__::func_110(&(Local_15.f_152), 0);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_250(&(Local_15.f_152), 1);
	__LIB_2__::func_345(&(Local_15.f_152), 1);
}

void func_260()
{
	switch (Local_274.f_48)
	{
		case 0:
			func_448(&Local_15, &Local_274);
			break;
		case 1:
			func_449(&Local_15, &Local_274);
			break;
		case 2:
			func_450(&Local_15, &Local_274);
			break;
		case 3:
			func_451(&Local_15, &Local_274);
			break;
		case 4:
			func_452(&Local_15, &Local_274);
			break;
	}
}

void func_271()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_462(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_273(var uParam0)
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

bool func_274()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = func_462(iVar0);
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

bool func_275(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

bool func_276(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_217)
	{
		iVar0 = __LIB_2__::func_541(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_277(int iParam0, int iParam1)
{
	if (iParam1->f_181 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return 2132733042;
			case 1:
				return 277024448;
			case 2:
				return 327000813;
			case 3:
				return 532561550;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1776501247;
			case 1:
				return 449389388;
			case 2:
				return -632180586;
			case 3:
				return 16777490;
			default:
				break;
		}
	}
	return __LIB_2__::func_16();
}

struct<4> func_278(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(0, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(1, 4);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(2, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(3, 4);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(4, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(5, 4);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(6, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(7, 4);
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(8, 4);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(9, 4);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_280(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(0, 7);
					case 1:
						return func_287(0, 10);
					case 2:
						return func_287(0, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(1, 7);
					case 1:
						return func_287(1, 10);
					case 2:
						return func_287(1, 11);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(2, 7);
					case 1:
						return func_287(2, 10);
					case 2:
						return func_287(2, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(3, 7);
					case 1:
						return func_287(3, 10);
					case 2:
						return func_287(3, 11);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(4, 7);
					case 1:
						return func_287(4, 10);
					case 2:
						return func_287(4, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(5, 7);
					case 1:
						return func_287(5, 10);
					case 2:
						return func_287(5, 11);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(6, 7);
					case 1:
						return func_287(6, 10);
					case 2:
						return func_287(6, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(7, 7);
					case 1:
						return func_287(7, 10);
					case 2:
						return func_287(7, 11);
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(8, 7);
					case 1:
						return func_287(8, 10);
					case 2:
						return func_287(8, 11);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(9, 7);
					case 1:
						return func_287(9, 10);
					case 2:
						return func_287(9, 11);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

int func_285(int iParam0)
{
	switch (Local_15.f_181)
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 0;
				case 3:
					return 1;
				default:
					break;
			}
			break;
		default:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				case 2:
					return 2;
				case 3:
					return 3;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0175_G_M_O_UniExConfeds_01_WHITE_02";
		case 1:
			return "0179_G_M_Y_UniExConfeds_01_WHITE_03";
		case 3:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 2:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		default:
			break;
	}
	return "";
}

struct<4> func_287(int iParam0, int iParam1)
{
	return func_468(iParam0, iParam1);
}

char* func_291(int iParam0, var uParam1)
{
	switch (iParam0->f_181)
	{
		case 2:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V1_ILO_POS_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V1_ILO_GRTA";
			}
			else
			{
				return "AMBUSH_ROR_V1_ILO_GRTA";
			}
			break;
		default:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V2_ILO_POS_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V2_ILO_GRTA";
			}
			else
			{
				return "AMBUSH_ROR_V2_ILO_GRTA";
			}
			break;
	}
	return "";
}

char* func_292(int iParam0, var uParam1)
{
	switch (iParam0->f_181)
	{
		case 2:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V1_ILO_NEG_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V1_ILO_NEGA";
			}
			else
			{
				return "AMBUSH_ROR_V1_ILO_NEGA";
			}
			break;
		default:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V2_ILO_NEG_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V2_ILO_NEGA";
			}
			else
			{
				return "AMBUSH_ROR_V2_ILO_NEGA";
			}
			break;
	}
	return "";
}

char* func_293(int iParam0, var uParam1)
{
	switch (iParam0->f_181)
	{
		case 2:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V1_ILO_POS_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V1_ILO_GRTA";
			}
			else
			{
				return "AMBUSH_ROR_V1_ILO_GRTA";
			}
			break;
		default:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V2_ILOPOS_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V2_ILO_GRTA";
			}
			else
			{
				return "AMBUSH_ROR_V2_ILO_GRTA";
			}
			break;
	}
	return "";
}

char* func_294(int iParam0, var uParam1)
{
	switch (iParam0->f_181)
	{
		case 2:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V1_ILO_NEG_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V1_ILO_NEGA";
			}
			else
			{
				return "AMBUSH_ROR_V1_ILO_NEGA";
			}
			break;
		default:
			if (uParam1->f_44 < 2)
			{
				return "AMBUSH_ROR_V2_ILONEG_INT";
			}
			else if (uParam1->f_44 >= 8)
			{
				return "AMBUSH_ROR_V2_ILO_NEGA";
			}
			else
			{
				return "AMBUSH_ROR_V2_ILO_NEGA";
			}
			break;
	}
	return "";
}

int func_301(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_481(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

char* func_306(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
				case 2:
					*iParam3 = 2;
					return "CALLOUT_FOLLOW_ROB_ATTACK_MALE";
				case 1:
				case 3:
					*iParam3 = 1;
					return "CALLOUT_FOLLOW_ROB_ATTACK_MALE";
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
				case 2:
					return "AMBUSH_ROR_V2_ROB_ATTACK";
				case 1:
				case 3:
					return "AMBUSH_ROR_V2_ROB_ATTACK";
				default:
					break;
			}
			break;
	}
	return "Invalid";
}

void func_319(int iParam0, int iParam1, int iParam2)
{
	__LIB_2__::func_357(Local_15[iParam0], Global_36, iParam1, 0, iParam2);
}

bool func_322()
{
	if (Local_274.f_98 < (Local_274.f_104 - 7f))
	{
		return true;
	}
	return false;
}

void func_323(var uParam0, int iParam1)
{
	uParam0->f_45 = iParam1;
}

int func_324(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	fVar0 = 15f;
	fVar1 = 2f;
	iVar3 = -1;
	iVar4 = 1;
	iVar2 = func_301(uParam0[3], &(uParam1->f_191), fVar0, &(uParam1->f_212), &iVar4, fVar1, 3, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar3 = iVar2;
	if (iVar3 != -1)
	{
		return iVar3;
	}
	if (__LIB_2__::func_341(&(uParam1->f_191)))
	{
		if (uParam1->f_191.f_1 != -1)
		{
			func_329(uParam1, 0);
			switch (uParam1->f_191.f_1)
			{
				case 0:
					func_136(uParam1, 0, 0, 1);
					break;
				case 1:
					func_136(uParam1, 0, 0, 0);
					break;
			}
		}
	}
	return iVar3;
}

void func_325(var uParam0, var uParam1)
{
	char* sVar0;
	char* sVar1;
	if (__LIB_0__::func_181())
	{
		sVar0 = func_291(uParam0, uParam1);
		sVar1 = func_292(uParam0, uParam1);
	}
	else
	{
		sVar0 = func_293(uParam0, uParam1);
		sVar1 = func_294(uParam0, uParam1);
	}
	if (uParam1->f_42 <= 0)
	{
		sVar1 = "BRA_V3_ILO_NEG";
	}
	PED::SET_PED_CONFIG_FLAG((*uParam0)[3], 315, false);
	__LIB_2__::func_602(&(uParam1->f_212[0 /*17*/]), __LIB_2__::func_460(7), sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(uParam1->f_212[1 /*17*/]), __LIB_2__::func_460(10), sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_526(&(uParam1->f_212), 0, 0);
	__LIB_2__::func_482(&(uParam1->f_212[0 /*17*/]), 1, 1);
}

char* func_327(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam1->f_42 > 0)
	{
		switch (uParam0->f_181)
		{
			case 2:
				*iParam3 = 1;
				return "WARNING";
			default:
				break;
		}
		return "AMBUSH_ROR_V2_BACK_WARNING";
	}
	else
	{
		return "GANG_INTERACT_CHAT_WARNING_WILDERNESS";
	}
	return "";
}

bool func_328()
{
	if ((__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 10f) && PED::IS_PED_FACING_PED(Global_35, Local_15[3], 40f)) && __LIB_0__::func_94(Local_15[3], Global_36, 1) < Local_274.f_105)
	{
		return true;
	}
	return false;
}

void func_329(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_212[0 /*17*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_212[0 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(uParam0->f_212[0 /*17*/]), 1, 0);
		}
		if (!__LIB_1__::func_489(&(uParam0->f_212[1 /*17*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_212[1 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(uParam0->f_212[1 /*17*/]), 1, 0);
		}
	}
	else
	{
		if (__LIB_1__::func_489(&(uParam0->f_212[0 /*17*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_212[0 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(uParam0->f_212[0 /*17*/]), 0, 0);
		}
		if (__LIB_1__::func_489(&(uParam0->f_212[1 /*17*/]), 0) && !__LIB_1__::func_489(&(uParam0->f_212[1 /*17*/]), 4))
		{
			__LIB_2__::func_411(&(uParam0->f_212[1 /*17*/]), 0, 0);
		}
	}
}

void func_343(var uParam0, var uParam1)
{
	if (!func_126(uParam1, 16384))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ENTER"))) || PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
		{
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				func_143(uParam1, 16384);
			}
		}
	}
}

bool func_344()
{
	if (func_126(&Local_274, 65536))
	{
		return true;
	}
	else if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
	{
		__LIB_2__::func_691(&(Local_274.f_37), 0, 0, 50f);
		Local_274.f_109 = { Global_36 };
		if (!PLAYER::_0x6614F9039BD31931(PLAYER::PLAYER_ID(), 14, 0))
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 14, 0, 1);
		}
		func_143(&Local_274, 65536);
		return true;
	}
	return false;
}

void func_346()
{
	vector3 vVar0;
	int iVar4;
	vector3 vVar5;
	vVar5 = { __LIB_2__::func_114(Global_35, 1.5f) };
	if (__LIB_2__::func_157(Local_274.f_86[5], vVar5))
	{
		vVar0 = { func_510(&Local_274, 0) };
	}
	else
	{
		vVar0 = { __LIB_17__::func_829(Local_15[0], 1065353216 /* Float: 1f */) };
	}
	func_319(0, 5, 2);
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.1f, 0, 40000f);
	__LIB_2__::func_45(0, Global_35, -1);
	__LIB_1__::func_474(Local_15[0], &iVar4, 0, 0, 1, 1);
	if (__LIB_2__::func_157(Local_274.f_86[5], vVar5))
	{
		vVar0 = { func_510(&Local_274, 1) };
	}
	else
	{
		vVar0 = { __LIB_17__::func_829(Local_15[1], 1065353216 /* Float: 1f */) };
	}
	func_319(1, 5, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.1f, 0, 40000f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
	__LIB_1__::func_474(Local_15[1], &iVar4, 0.5f, 0, 1, 1);
	__LIB_1__::func_283(&(Local_274.f_58[1 /*3*/]), 0);
}

void func_347(var uParam0, int iParam1)
{
	uParam0->f_44 = iParam1;
}

bool func_348()
{
	char* sVar0;
	int iVar1;
	if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 1f))
	{
		iVar1 = -1;
		sVar0 = func_512(&Local_15, &Local_274, &iVar1);
		if (__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1))
		{
			func_136(&Local_274, 0, 0, 0);
			__LIB_2__::func_315(1891783641, Local_15[0], 1);
			__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
			__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
			__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
			Local_274.f_101 = Local_274.f_98;
			Local_274.f_102 = __LIB_0__::func_646(26f, (Local_274.f_101 - 8f));
			func_319(3, 3, 2);
			PED::_0x89F5E7ADECCCB49C(Local_15[0], "intimidate");
			return true;
		}
	}
	return false;
}

void func_349()
{
	vector3 vVar0;
	float fVar3;
	fVar3 = (Local_15.f_9[0] + 15f);
	func_515(&(Local_274.f_57), &(Local_274.f_49), Local_15[0], vVar0, 0, 4000, 1500, 1000, 1, 0, 1, fVar3);
}

bool func_350()
{
	if ((Local_274.f_98 > (Local_274.f_101 + 3f) && Local_274.f_99 > (Local_274.f_98 + 0.5f)) && !func_516())
	{
		return true;
	}
	if (Local_274.f_44 < 3)
	{
		if (!func_126(&Local_274, 1048576) && func_517(0))
		{
			func_143(&Local_274, 1048576);
		}
	}
	if (func_517(func_126(&Local_274, 1048576)))
	{
		if (Local_274.f_98 > Local_274.f_102 && !func_516())
		{
			return true;
		}
	}
	return false;
}

bool func_351()
{
	char* sVar0;
	int iVar1;
	if (func_518(&Local_15, &Local_274))
	{
		return false;
	}
	if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 3f))
	{
		iVar1 = -1;
		sVar0 = func_519(&Local_15, &Local_274, &iVar1);
		if (__LIB_2__::func_336(Local_15[1], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1))
		{
			__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
			return true;
		}
	}
	return false;
}

void func_352(var uParam0, var uParam1)
{
	switch (uParam0->f_181)
	{
		case 2:
			uParam1->f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			uParam1->f_21 = 2;
			uParam1->f_18 = "";
			uParam1->f_23 = 2;
			uParam1->f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
			uParam1->f_22 = 1;
			uParam1->f_11 = 1;
			break;
		default:
			uParam1->f_16 = "AMBUSH_ROR_V2_ENTER_LINE";
			uParam1->f_18 = "";
			uParam1->f_17 = "AMBUSH_ROR_V2_INTRO_LINE";
			uParam1->f_11 = 1;
			break;
	}
}

bool func_353()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	iVar1 = -1;
	if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 2f))
	{
		if (__LIB_2__::func_227(0f, 1, Local_15[1], 1))
		{
			if (Local_274.f_98 < (15f + 3f))
			{
				__LIB_2__::func_336(Local_15[1], Global_35, "HEADS_UP_STORY_MEMORY_RXCF1", -1073741824 /* Float: -2f */, 1, -500314840, 1);
				__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				__LIB_2__::func_250(&(Local_15.f_152), 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[1], &iVar2, 1.5f, 0, 1, 1);
				__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[0], &iVar2, 2.5f, 0, 1, 1);
				__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
				Local_274.f_103 = Local_274.f_98;
				return true;
			}
			else
			{
				__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				__LIB_2__::func_336(Local_15[1], Global_35, "HEADS_UP_STORY_MEMORY_RXCF1", -1073741824 /* Float: -2f */, 1, 1744022339, 1);
				PED::_0x8ACC0506743A8A5C(Local_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[1], Global_35, 3000, false, 1);
				func_143(&Local_274, 4);
				return true;
			}
		}
	}
	else if (func_350())
	{
		sVar0 = func_520(&Local_15, &Local_274, 0, &iVar1);
		__LIB_2__::func_336(Local_15[1], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, 1);
		Local_274.f_104 = Local_274.f_98;
		func_150(&Local_274, 2);
		func_143(&Local_274, 4);
		return false;
	}
	return false;
}

bool func_354()
{
	char* sVar0;
	int iVar1;
	iVar1 = -1;
	if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 3f))
	{
		if (!func_518(&Local_15, &Local_274))
		{
			if (Local_274.f_98 < 15f)
			{
				sVar0 = func_521(&Local_15, &Local_274, &iVar1);
				if (__LIB_2__::func_227(0f, 1, Local_15[1], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					if (__LIB_2__::func_336(Local_15[1], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1))
					{
						__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
						__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
						__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
						Local_274.f_103 = Local_274.f_98;
						return true;
					}
				}
			}
			else if (func_522())
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					sVar0 = func_306(&Local_15, &Local_274, 0, &iVar1);
					__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1);
					PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, 3000, false, 1);
					func_143(&Local_274, 4);
					return true;
				}
			}
		}
	}
	else if (func_350())
	{
		sVar0 = func_520(&Local_15, &Local_274, 0, &iVar1);
		__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1);
		Local_274.f_104 = Local_274.f_98;
		__LIB_0__::func_325(&(Local_15.f_22[0]));
		__LIB_0__::func_325(&(Local_15.f_22[1]));
		func_150(&Local_274, 2);
		return false;
	}
	return false;
}

bool func_355()
{
	if ((__LIB_0__::func_163(Global_35, 501393341) || __LIB_0__::func_163(Global_35, 1553520516)) || __LIB_0__::func_163(Global_35, 1920417248))
	{
		return false;
	}
	if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		return true;
	}
	return false;
}

bool func_356()
{
	if (!__LIB_0__::func_163(Global_35, 1435919172))
	{
		Local_274.f_106 = { func_523(&Local_274) };
		__LIB_2__::func_106(&(Local_274.f_106), 1, 10, 0);
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_274.f_86[3]))
		{
			Local_274.f_86[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_36, 0f, 0f, 0f, 5f, 5f, 5f, "volHorseStayout");
		}
		__LIB_2__::func_417(&Local_15, Local_274.f_86[3], Local_274.f_106, 1.25f, 8f, 1065353216 /* Float: 1f */, 1);
		return true;
	}
	return false;
}

bool func_357()
{
	vector3 vVar0;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	if (!func_126(&Local_274, 4096))
	{
		if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 0.5f))
		{
			PED::_0xAAB050DA48B57978(Local_15[1], "Default_Angry", 0, -1, 4);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_15[1], WEAPON::GET_BEST_PED_WEAPON(Local_15[1], false, false), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Local_15[1], 1, 1, 0, 0);
			func_143(&Local_274, 4096);
		}
	}
	if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 0.5f))
	{
		if (PED::_GET_PED_CROUCH_MOVEMENT(Local_15[2]))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[2], false, 0, false);
			PED::_0x89F5E7ADECCCB49C(Local_15[2], "intimidate");
			vVar0 = { func_510(&Local_274, 2) };
			if (Local_274.f_48 == 1 && func_126(&Local_274, 1))
			{
				fVar4 = 2f;
			}
			else
			{
				fVar4 = 1f;
			}
			TASK::TASK_LOOK_AT_ENTITY(Local_15[2], Global_35, -1, 0, 51, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar5);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, fVar4, 20000, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			__LIB_1__::func_474(Local_15[2], &iVar5, 0, 0, 1, 1);
			__LIB_2__::func_73(Local_15[2], &(Local_15.f_22[2]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
	}
	if (!func_126(&Local_274, 2048))
	{
		if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 2f))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_15[0], WEAPON::GET_BEST_PED_WEAPON(Local_15[0], false, false), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar5);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			__LIB_1__::func_474(Local_15[0], &iVar5, 0, 0, 1, 1);
			__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			func_143(&Local_274, 2048);
		}
	}
	if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 4f))
	{
		if (__LIB_2__::func_227(0, 1, Global_35, 1))
		{
			iVar6 = -1;
			sVar7 = func_524(&Local_15, &Local_274, 1, &iVar6);
			if (__LIB_2__::func_336(Local_15[1], Global_35, sVar7, -1073741824 /* Float: -2f */, 1, 1744022339, iVar6))
			{
				__LIB_2__::func_691(&(Local_274.f_37), Local_15[0], 1, 50f);
				PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
				PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
				PED::_0x8ACC0506743A8A5C(Local_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[1], Global_35, -1, false, 1);
				__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
				return true;
			}
		}
	}
	return false;
}

bool func_358()
{
	char* sVar0;
	int iVar1;
	if (func_525() && !func_516())
	{
		iVar1 = -1;
		sVar0 = func_306(&Local_15, &Local_274, 0, &iVar1);
		__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1);
		PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
		TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, 3000, false, 1);
		__LIB_2__::func_73(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		__LIB_2__::func_73(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		func_143(&Local_274, 4);
		return true;
	}
	return false;
}

bool func_359()
{
	float fVar0;
	char* sVar1;
	int iVar2;
	fVar0 = 5f;
	if (func_344() || __LIB_2__::func_455())
	{
		fVar0 = (fVar0 + 3f);
	}
	if ((__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), fVar0) && !func_126(&Local_274, 4)) && __LIB_2__::func_227(0, 1, Global_35, 1))
	{
		iVar2 = -1;
		sVar1 = func_527(&Local_15, &Local_274, 1, &iVar2);
		if (__LIB_2__::func_336(Local_15[1], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar2))
		{
			PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_15[0], WEAPON::GET_BEST_PED_WEAPON(Local_15[0], false, false), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Local_15[0], 1, 0, 0, 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, -1, false, 1);
			__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
			return true;
		}
	}
	return false;
}

bool func_360()
{
	float fVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	fVar0 = 5f;
	if (func_344())
	{
		fVar0 = (fVar0 + 3f);
	}
	if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), fVar0) && __LIB_2__::func_227(0, 1, Global_35, 1))
	{
		iVar2 = -1;
		iVar3 = 0;
		sVar1 = func_306(&Local_15, &Local_274, iVar3, &iVar2);
		if (__LIB_2__::func_336(Local_15[iVar3], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar2))
		{
			__LIB_1__::func_148(&(Local_274.f_58[1 /*3*/]));
			__LIB_2__::func_691(&(Local_274.f_37), Local_15[0], 0, 50f);
			return true;
		}
	}
	return false;
}

bool func_361()
{
	if (__LIB_1__::func_285(&(Local_274.f_58[1 /*3*/]), 0.5f))
	{
		func_143(&Local_274, 4);
		return true;
	}
	return false;
}

bool func_363()
{
	if (Local_274 > 0)
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

bool func_365(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	__LIB_2__::func_647(iParam1);
	if (Global_1935630.f_12)
	{
		iParam1->f_1 = 0;
		iParam1->f_2 = 1;
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
	switch (*iParam1)
	{
		case 0:
			if (!iParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_16))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, iParam1->f_16, 0, -1082130432 /* Float: -1f */, iParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_IS_PED_FALLING_2(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !__LIB_0__::func_163(Global_35, 501393341)) && !__LIB_0__::func_163(Global_35, 1553520516)) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				iParam1->f_25 = { Global_36 };
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
					__LIB_1__::func_283(&(iParam1->f_32), 0);
				}
				else
				{
					__LIB_2__::func_462(&(iParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!__LIB_0__::func_474(609))
				{
					__LIB_0__::func_105(1);
					iParam1->f_28 = __LIB_0__::func_45("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					__LIB_0__::func_378(609, &uVar0, &uVar1);
					__LIB_2__::func_447(&uVar0, &uVar1);
				}
				iParam1->f_8 = 1;
				*iParam1 = 2;
			}
			break;
		case 2:
			if (((!iParam1->f_12 && !iParam1->f_13) && __LIB_1__::func_285(&(iParam1->f_32), 2f)) && __LIB_2__::func_448(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (__LIB_17__::func_772(&(iParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					iParam1->f_12 = 1;
				}
				if (!iParam1->f_14)
				{
					if (__LIB_0__::func_139(iParam1->f_36))
					{
						iParam1->f_14 = 1;
					}
				}
			}
			if (iParam1->f_14)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BENDSUCCESS"), "bEndSuccess", 1, 1.8f, 1))
				{
					__LIB_1__::func_748(&(iParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				iParam1->f_1 = 1;
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
			else if (__LIB_2__::func_639(iParam1))
			{
				bVar2 = true;
			}
			else if (__LIB_2__::func_612(iParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((__LIB_0__::func_27(iParam5, 16) && !__LIB_0__::func_163(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				bVar2 = true;
			}
			if (!iParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_20))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(Global_35, iParam0, iParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				iParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_539(iParam6, 1, 0, -142743235, 0);
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
				if (!iParam1->f_3)
				{
					iParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BBEFOREHITBREAKOUT"), "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					iParam1->f_5 = 1;
					return true;
				}
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_INTRO"), "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_17))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(0f, 1, iParam0, 1))
					{
						__LIB_2__::func_303(iParam0, Global_35, iParam1->f_17, 0, -1082130432 /* Float: -1f */, iParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_15 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_HIT"), "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						__LIB_2__::func_461(0);
					}
				}
				if (iParam1->f_11)
				{
					if (__LIB_2__::func_227(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
						{
							__LIB_2__::func_303(iParam0, Global_35, iParam1->f_18, 0, -1082130432 /* Float: -1f */, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (__LIB_2__::func_227(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						__LIB_2__::func_303(iParam0, Global_35, iParam1->f_18, 0, -1082130432 /* Float: -1f */, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				iParam1->f_4 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_FAILED"), "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_19))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, iParam1->f_19, 0, -1082130432 /* Float: -1f */, iParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_2 = 0;
				iParam1->f_3 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("BLENDOUT"), "Blendout", iParam8, 0.8f, 0) || !__LIB_0__::func_163(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_368()
{
	if (Local_274.f_98 < 12.5f || __LIB_0__::func_94(Local_15[1], Global_36, 1) < 12.5f)
	{
		if ((ENTITY::GET_ENTITY_SPEED(Global_35) < 0.25f || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15[1], true, false), 50f)) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15[0], true, false), 50f))
		{
			return true;
		}
	}
	return false;
}

char* func_370(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
					*iParam3 = 2;
					return "GET_LOST";
				case 1:
					*iParam3 = 2;
					return "HEADS_UP_THREATEN";
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					return "AMBUSH_ROR_V2_PR_LEAVE1";
				case 1:
					return "AMBUSH_ROR_V2_PR_LEAVE2";
				default:
					break;
			}
			break;
	}
	return "invalid";
}

void func_371()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (!PED::IS_PED_SHOOTING(Local_15[iVar0]) || !__LIB_2__::func_167(Local_15[iVar0], 1))
				{
					__LIB_0__::func_325(&(Local_15.f_22[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_372(var uParam0, int iParam1)
{
	uParam0->f_46 = iParam1;
}

void func_448(var uParam0, var uParam1)
{
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2155.291f, -1307.533f, 43.5036f, 0f, 0f, -19.99999f, 29.30557f, 19.59988f, 8.410868f, "volBypass");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2143.665f, -1329.046f, 47.645f, 0f, 0f, -19.99999f, 30.84809f, 18.32641f, 10f, "volTrigger");
		uParam1->f_86[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2147.582f, -1309.071f, 43.5036f, 0f, 0f, -20f, 33.62549f, 10f, 6f, "volTrespass");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2141.202f, -1334.161f, 41.68f, 0f, 0f, -20f, 70f, 40f, 20f, "volExpectedApproach");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 2155.131f, -1331.282f, 38.63309f, 0f, 0f, -20f, 30f, 30f, 10f);
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 2119.558f, -1318.335f, 38.63309f, 0f, 0f, -20f, 30f, 30f, 10f);
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2142.295f, -1329.024f, 41.67955f, 0f, 0f, -20f, 49.07673f, 30f, 20f, "volSlowest");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2144.136f, -1328.432f, 47.645f, 0f, 0f, -19.99999f, 27.194f, 18.5115f, 10f, "volTrigger");
		uParam1->f_86[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2147.582f, -1309.071f, 43.5036f, 0f, 0f, -20f, 33.62549f, 10f, 6f, "volTrespass");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2141.758f, -1334.337f, 41.68f, 0f, 0f, -20f, 60f, 40f, 20f, "volExpectedApproach");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 2155.131f, -1331.282f, 38.63309f, 0f, 0f, -20f, 30f, 30f, 10f);
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 2119.558f, -1318.335f, 38.63309f, 0f, 0f, -20f, 30f, 30f, 10f);
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2142.295f, -1329.024f, 41.67955f, 0f, 0f, -20f, 49.07673f, 30f, 20f, "volSlowest");
	}
}

void func_449(var uParam0, var uParam1)
{
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2151.068f, -952.2269f, 47.64503f, 0f, 0f, -37.99999f, 30.84809f, 23.32641f, 10f, "volTrigger");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volExpectedApproach");
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_86[5], 2149.645f, -945.275f, 48.645f, 0f, 0f, 21f, 38.848f, 27.326f, 10f);
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_86[5], 2164.852f, -945.875f, 48.645f, 0f, 0f, -24f, 38.848f, 27.326f, 10f);
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2157.193f, -952.9478f, 38.63309f, 0f, 0f, -36.03543f, 20f, 20f, 10f, "volSlowest");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2157.083f, -952.8764f, 38.63309f, 0f, 0f, -36.03543f, 35f, 35f, 10f, "volSlow");
		uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2180.158f, -994.1818f, 41.89631f, 0f, 0f, -38f, 23.60051f, 23.43728f, 8f, "volBypass");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2162.497f, -961.1558f, 47.64503f, 0f, 0f, -37.99999f, 30.84809f, 23.32641f, 10f, "volTrigger");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volExpectedApproach");
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_86[5], 2148.605f, -943.544f, 48.645f, 0f, 0f, 31f, 38.848f, 27.326f, 10f);
		VOLUME::_0xBCE668AAF83608BE(uParam1->f_86[5], 2167.291f, -953.252f, 48.645f, 0f, 0f, -45f, 38.848f, 17.326f, 10f);
		uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2151.706f, -974.7708f, 43.40208f, 0f, 0f, 31f, 15f, 15f, 6f, "volBypass");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2165.06f, -961.2766f, 38.63309f, 0f, 0f, -36.03543f, 20f, 20f, 10f, "volSlowest");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2164.951f, -961.2051f, 38.63309f, 0f, 0f, -36.03543f, 35f, 35f, 10f, "volSlow");
	}
}

void func_450(var uParam0, var uParam1)
{
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1153.465f, -1484.267f, 59.98807f, 0f, 0f, -53.11343f, 91.69341f, 42f, 15f, "volAvoidance");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1153.099f, -1495.408f, 61.05664f, 0f, 0f, 128.3989f, 30.707f, 27.92532f, 10f, "volTrigger");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1148.567f, -1499.968f, 55.091f, 0f, 0f, 128.399f, 65f, 45f, 20f, "volExpectedApproach");
		uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1142.787f, -1461.295f, 55.091f, 0f, 0f, 97.39899f, 14.48316f, 19.47089f, 20f, "volBypass");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 1138.697f, -1473.754f, 55.24365f, 0f, 0f, 128.3989f, 30f, 30f, 10f);
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 1167.339f, -1509.893f, 55.24365f, 0f, 0f, 128.3989f, 30f, 30f, 10f);
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1156.775f, -1500.942f, 55.09116f, 0f, 0f, 128.3989f, 42.5404f, 30f, 20f, "volSlowest");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1149.715f, -1491.138f, 61.05664f, 0f, 0f, 128.3989f, 30.84809f, 23.32641f, 10f, "volTrigger");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1141.424f, -1497.557f, 60.107f, 0f, 0f, -52f, 66f, 26f, 20f, "volExpectedApproach");
		uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1178.394f, -1498.187f, 61.05664f, 0f, 0f, 128.3989f, 13.6739f, 13.32405f, 10f, "volBypass");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 1139.42f, -1480.226f, 55.24365f, 0f, 0f, 128.3989f, 30f, 30f, 10f);
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 1162.933f, -1509.893f, 55.24365f, 0f, 0f, 128.3989f, 30f, 30f, 10f);
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1149.613f, -1491.907f, 55.09116f, 0f, 0f, 128.3989f, 49.07673f, 30f, 20f, "volSlowest");
	}
}

void func_451(var uParam0, var uParam1)
{
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1487.916f, -1000.662f, 56.33083f, 0f, 0f, 94.82475f, 30.707f, 27.92532f, 10f, "volTrigger");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1480.178f, -1001.068f, 56.331f, 0f, 0f, -87f, 63f, 42f, 20f, "volExpectedApproach");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 1487.556f, -973.4777f, 50.51784f, 0f, 0f, 95.90029f, 30f, 30f, 10f);
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 1492.296f, -1019.345f, 50.51784f, 0f, 0f, 95.90029f, 30f, 30f, 10f);
		uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1469.261f, -999.528f, 56.33083f, 0f, 0f, 94.82475f, 10.1629f, 9.770226f, 10f, "volBypass");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1487.734f, -1002.193f, 50.36535f, 0f, 0f, 93.60399f, 42.5404f, 30f, 20f, "volSlowest");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1490.791f, -1011.946f, 56.33083f, 0f, 0f, 91.87412f, 27.67f, 27.92532f, 10f, "volTrigger");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1480.013f, -1012.218f, 56.331f, 0f, 0f, -87f, 58f, 38f, 20f, "volExpectedApproach");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 1485.693f, -991.6201f, 50.51784f, 0f, 0f, 100.5781f, 30f, 30f, 10f);
		VOLUME::_0xBCE668AAF83608BE(uParam0->f_182[0], 1494.158f, -1036.949f, 50.51784f, 0f, 0f, 100.5781f, 30f, 30f, 10f);
		uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1507.89f, -978.9284f, 56.33083f, 0f, 0f, 91.87412f, 14.67f, 14f, 10f, "volBypass");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1489.664f, -1014.686f, 50.36535f, 0f, 0f, 96.30587f, 42.5404f, 30f, 20f, "volSlowest");
	}
}

void func_452(var uParam0, var uParam1)
{
	uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	if (func_126(uParam1, 1))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1655.522f, -1599.845f, 58f, 0f, 0f, -43.65688f, 22f, 9.620813f, 10f, "volTrigger");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1657.077f, -1597.177f, 60.4f, 0f, 0f, -45f, 47f, 14f, 20f, "volExpectedApproach");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1651.59f, -1600.176f, 58f, 0f, 0f, -48.61898f, 20f, 12f, 10f, "volSlowest");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1650.064f, -1597.117f, 63.10832f, 0f, 0f, 45.64705f, 20f, 35f, 10f, "volSlow");
		uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1685.32f, -1630.628f, 58f, 0f, 0f, -43.65688f, 9f, 9f, 7f, "volBypass");
	}
	else if (func_126(uParam1, 2))
	{
		uParam1->f_86[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1664.851f, -1608.931f, 58f, 0f, 0f, -31.93113f, 30f, 11.70849f, 10f, "volTrigger");
		uParam1->f_86[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1670.328f, -1602.443f, 60.4f, 0f, 0f, -34f, 59f, 17f, 20f, "volExpectedApproach");
		uParam1->f_86[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1636.293f, -1592.454f, 58f, 0f, 0f, -31.93112f, 8f, 8f, 8f, "volBypass");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1666.243f, -1607.567f, 61.255f, 0f, 0f, -30.9924f, 26.17722f, 12.59097f, 10f, "volSlowest");
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1666.243f, -1607.567f, 61.255f, 0f, 0f, -30.9924f, 47.78934f, 27.18242f, 10f, "volSlow");
	}
}

char* func_462(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_common@wave@male@unapproved";
		default:
			break;
	}
	return "";
}

struct<4> func_468(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_576(iParam0, iParam1) };
	Var0.f_3 = func_577(iParam0, iParam1);
	return Var0;
}

int func_481(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_17__::func_773(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_481(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_17__::func_774(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_17__::func_775(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_17__::func_776(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_17__::func_775(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_17__::func_774(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

struct<4> func_510(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(0, 1);
					case 1:
						return func_287(0, 3);
					case 2:
						return func_287(0, 6);
					case 3:
						return func_287(0, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(1, 1);
					case 1:
						return func_287(1, 3);
					case 2:
						return func_287(1, 6);
					case 3:
						return func_287(1, 9);
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(2, 1);
					case 1:
						return func_287(2, 3);
					case 2:
						return func_287(2, 6);
					case 3:
						return func_287(2, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(3, 1);
					case 1:
						return func_287(3, 3);
					case 2:
						return func_287(3, 6);
					case 3:
						return func_287(3, 9);
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(4, 1);
					case 1:
						return func_287(4, 3);
					case 2:
						return func_287(4, 6);
					case 3:
						return func_287(4, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(5, 1);
					case 1:
						return func_287(5, 3);
					case 2:
						return func_287(5, 6);
					case 3:
						return func_287(5, 9);
					default:
						break;
				}
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(6, 1);
					case 1:
						return func_287(6, 3);
					case 2:
						return func_287(6, 6);
					case 3:
						return func_287(6, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(7, 1);
					case 1:
						return func_287(7, 3);
					case 2:
						return func_287(7, 6);
					case 3:
						return func_287(7, 9);
					default:
						break;
				}
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(8, 1);
					case 1:
						return func_287(8, 3);
					case 2:
						return func_287(8, 6);
					case 3:
						return func_287(8, 9);
					default:
						break;
				}
			}
			else if (func_126(uParam0, 2))
			{
				switch (iParam1)
				{
					case 0:
						return func_287(9, 1);
					case 1:
						return func_287(9, 3);
					case 2:
						return func_287(9, 6);
					case 3:
						return func_287(9, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_512(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam2 = 3;
			return "GANG_INTERACT_HOLD_IT";
		default:
			break;
	}
	return "AMBUSH_ROR_V2_CALLOUT";
	return "invalid";
}

void func_515(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, bool bParam12, float fParam13)
{
	return;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		if (__LIB_0__::func_51(uParam0, 64))
		{
			__LIB_1__::func_748(&(uParam1->f_5), 1, 1);
			__LIB_0__::func_8(uParam0, 64);
		}
	}
	else if (bParam12)
	{
		if (uParam1->f_3 == 0)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2))
			{
				if (!__LIB_0__::func_51(uParam0, 64))
				{
					if (uParam1->f_5 == 0)
					{
						uParam1->f_5 = __LIB_2__::func_512("BEAT_RESPOND", joaat("INPUT_CINEMATIC_CAM"), iParam2, 3, 0, 0, 0, 0, fParam13, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					}
					__LIB_1__::func_148(uParam1);
					__LIB_0__::func_7(uParam0, 64);
				}
			}
			else if (__LIB_0__::func_75(uParam1) && __LIB_0__::func_265(uParam1) > 6f)
			{
				if (__LIB_0__::func_51(uParam0, 64))
				{
					__LIB_1__::func_748(&(uParam1->f_5), 1, 1);
					__LIB_0__::func_8(uParam0, 64);
				}
			}
		}
		else if (!__LIB_0__::func_51(uParam0, 64))
		{
			__LIB_0__::func_7(uParam0, 64);
		}
	}
	else if (!__LIB_0__::func_51(uParam0, 64))
	{
		__LIB_0__::func_7(uParam0, 64);
	}
	if (__LIB_0__::func_51(uParam0, 64))
	{
		__LIB_4__::func_47(uParam1, iParam2, vParam3, iParam6, iParam7, fParam8, iParam9, iParam10, iParam11);
	}
}

bool func_516()
{
	bool bVar0;
	bVar0 = false;
	if (PED::IS_PED_FACING_PED(Global_35, Local_15[0], 120f) || PED::IS_PED_FACING_PED(Global_35, Local_15[1], 120f))
	{
		bVar0 = true;
		if (Local_274.f_100 != 0f)
		{
			if (bVar0)
			{
				if (!__LIB_0__::func_75(&(Local_274.f_58[5 /*3*/])))
				{
					__LIB_1__::func_283(&(Local_274.f_58[5 /*3*/]), 0);
				}
				else if (__LIB_0__::func_75(&(Local_274.f_58[5 /*3*/])) && __LIB_1__::func_285(&(Local_274.f_58[5 /*3*/]), 8f))
				{
					bVar0 = false;
				}
			}
		}
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_STOP")))
	{
		if (__LIB_0__::func_75(&(Local_274.f_58[6 /*3*/])))
		{
			__LIB_0__::func_37(&(Local_274.f_58[5 /*3*/]));
		}
		bVar0 = true;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(0, joaat("INPUT_HORSE_STOP")))
	{
		if (!__LIB_0__::func_75(&(Local_274.f_58[6 /*3*/])))
		{
			__LIB_1__::func_283(&(Local_274.f_58[5 /*3*/]), 0);
		}
		bVar0 = true;
	}
	else if (__LIB_0__::func_75(&(Local_274.f_58[6 /*3*/])))
	{
		bVar0 = true;
		if (__LIB_1__::func_285(&(Local_274.f_58[6 /*3*/]), 3f))
		{
			__LIB_0__::func_37(&(Local_274.f_58[5 /*3*/]));
		}
	}
	Local_274.f_100 = Local_274.f_98;
	return bVar0;
}

bool func_517(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vVar0 = { func_689(&Local_274, bParam0) };
	vVar3 = { func_690(&Local_274, bParam0) };
	if (func_126(&Local_274, 1) && !bParam0)
	{
		if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
		{
			iVar6 = 1;
		}
	}
	else if (!__LIB_0__::func_195(vVar0, vVar3, Global_36))
	{
		iVar6 = 1;
	}
	return iVar6;
}

bool func_518(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam1->f_113)
	{
		if (__LIB_2__::func_341(&(uParam1->f_113[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_519(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam2 = 2;
			return "GANG_HOLD_IT_SUPPORT";
		default:
			break;
	}
	return "AMBUSH_ROR_V2_CALLOUT_SUPPORT";
	return "invalid";
}

char* func_520(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
					*iParam3 = 2;
					return "PEDTYPE_WON_DISPUTE";
				case 1:
					*iParam3 = 1;
					return "PEDTYPE_WON_DISPUTE";
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 0:
					return "AMBUSH_ROR_V2_BETTER_RUN";
				case 1:
					return "AMBUSH_ROR_V2_BETTER_RUN";
				default:
					break;
			}
			break;
	}
	return "invalid";
}

char* func_521(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam2 = 1;
			return "GANG_INTERACT_APPROACH_TOLL";
		default:
			break;
	}
	return "AMBUSH_ROR_V2_APPROACH_TOLL";
	return "invalid";
}

bool func_522()
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_0__::func_75(&(Local_274.f_58[5 /*3*/])))
	{
		__LIB_1__::func_283(&(Local_274.f_58[5 /*3*/]), 0);
	}
	else if (__LIB_0__::func_75(&(Local_274.f_58[5 /*3*/])))
	{
		if (Local_274.f_98 > (Local_274.f_101 + 3f) && Local_274.f_99 > (Local_274.f_98 + 0.5f))
		{
			iVar0 = 1;
		}
		else if (__LIB_1__::func_285(&(Local_274.f_58[5 /*3*/]), 8f))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

Vector3 func_523(var uParam0)
{
	vector3 vVar0;
	vVar0 = { func_692(uParam0) };
	return vVar0;
}

char* func_524(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam3 = 1;
			return "ORDER_DISMOUNT";
		default:
			break;
	}
	return "AMBUSH_ROR_V2_ORDER_DISMOUNT";
	return "invalid";
}

bool func_525()
{
	if (Local_274.f_98 > (Local_274.f_103 + 3f) && Local_274.f_99 > (Local_274.f_98 + 0.5f))
	{
		return true;
	}
	return false;
}

char* func_527(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_181)
	{
		case 2:
			*iParam3 = 1;
			return "FINAL_WARNING";
		default:
			break;
	}
	if (__LIB_2__::func_458(uParam0, 1, 1))
	{
		return "AMBUSH_ROR_V2_FINAL_WARNING";
	}
	*iParam3 = 2;
	return "FINAL_WARNING";
	return "invalid";
}

int func_539(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_539(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_10__::func_207(iParam0, iParam1);
	return 1;
}

Vector3 func_576(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2147.251f, -1316.011f, 41.8066f;
				case 1:
					return 2145.376f, -1318.39f, 41.8945f;
				case 2:
					return 2144.561f, -1315.481f, 41.6942f;
				case 3:
					return 2143.546f, -1318.269f, 41.8254f;
				case 4:
					return 2141.785f, -1300.229f, 41.646f;
				case 5:
					return 2158.18f, -1318.7f, 41.3161f;
				case 6:
					return 2151.83f, -1318.304f, 41.7381f;
				case 7:
					return 2152.676f, -1306.737f, 41.5564f;
				case 8:
					return 2238.174f, -1352.621f, 44.2797f;
				case 9:
					return 2237.524f, -1353.356f, 44.3099f;
				case 10:
					return 2239.939f, -1353.73f, 44.2797f;
				case 11:
					return 2149.919f, -1307.196f, 41.5971f;
				case 12:
					return 2148.287f, -1316.218f, 41.5357f;
				case 13:
					return 2144.786f, -1325.609f, 41.9523f;
				case 14:
					return 2141.628f, -1327.481f, 41.9596f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2145.089f, -1315.089f, 41.6689f;
				case 1:
					return 2143.427f, -1318.976f, 41.641f;
				case 2:
					return 2147.328f, -1316.196f, 41.8134f;
				case 3:
					return 2146.392f, -1318.939f, 41.9549f;
				case 4:
					return 2157.838f, -1309.506f, 41.4442f;
				case 5:
					return 2158.188f, -1318.708f, 41.3161f;
				case 6:
					return 2151.275f, -1317.967f, 41.7352f;
				case 7:
					return 2160.747f, -1314.674f, 41.3659f;
				case 8:
					return 2082.991f, -1291.337f, 41.6162f;
				case 9:
					return 2085.666f, -1292.521f, 41.6148f;
				case 10:
					return 2081.982f, -1289.978f, 41.6081f;
				case 11:
					return 2142.25f, -1309.832f, 41.6101f;
				case 12:
					return 2142.622f, -1314.196f, 41.6932f;
				case 13:
					return 2138.933f, -1324.129f, 41.6235f;
				case 14:
					return 2142.073f, -1327.015f, 41.9677f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2159.213f, -971.8553f, 41.0999f;
				case 1:
					return 2160.194f, -964.4299f, 41.5314f;
				case 2:
					return 2157.396f, -971.7147f, 41.0138f;
				case 3:
					return 2157.678f, -964.8805f, 41.1724f;
				case 4:
					return 2158.188f, -972.9938f, 40.8699f;
				case 5:
					return 2189.433f, -986.7276f, 41.0255f;
				case 6:
					return 2167.474f, -971.9501f, 41.1311f;
				case 7:
					return 2171.62f, -977.636f, 41.1047f;
				case 8:
					return 2228.379f, -1005.259f, 44.0555f;
				case 9:
					return 2227.684f, -1005.464f, 44.0383f;
				case 10:
					return 2229.569f, -1006.136f, 44.0702f;
				case 11:
					return 2161.567f, -975.9191f, 40.7883f;
				case 12:
					return 2157.931f, -968.4743f, 41.0576f;
				case 13:
					return 2166.614f, -955.6732f, 41.1486f;
				case 14:
					return 2167.944f, -957.4924f, 41.2408f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2160.004f, -967.5445f, 41.7114f;
				case 1:
					return 2162.143f, -963.6604f, 41.8914f;
				case 2:
					return 2160.809f, -968.9245f, 41.619f;
				case 3:
					return 2163.619f, -965.0955f, 41.8914f;
				case 4:
					return 2159.268f, -968.9859f, 41.0429f;
				case 5:
					return 2158.034f, -969.6102f, 41.4421f;
				case 6:
					return 2154.013f, -962.7059f, 41.4194f;
				case 7:
					return 2146.932f, -971.5781f, 40.9804f;
				case 8:
					return 2113.003f, -889.23f, 40.6198f;
				case 9:
					return 2113.779f, -890.4282f, 40.6958f;
				case 10:
					return 2113.534f, -887.4044f, 40.5673f;
				case 11:
					return 2163.963f, -974.3878f, 40.9691f;
				case 12:
					return 2159.577f, -964.9375f, 41.3509f;
				case 13:
					return 2165.456f, -958.0557f, 41.5278f;
				case 14:
					return 2174.57f, -959.0756f, 40.7398f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1155.893f, -1485.089f, 53.7784f;
				case 1:
					return 1151.271f, -1490.42f, 52.5521f;
				case 2:
					return 1154.792f, -1485.177f, 53.5482f;
				case 3:
					return 1149.386f, -1488.679f, 52.5455f;
				case 4:
					return 1151.256f, -1481.362f, 53.2885f;
				case 5:
					return 1143.218f, -1459.846f, 54.4943f;
				case 6:
					return 1143.925f, -1480.999f, 52.6957f;
				case 7:
					return 1142.695f, -1458.683f, 54.7078f;
				case 8:
					return 1104.26f, -1456.561f, 52.0511f;
				case 9:
					return 1105.974f, -1456.867f, 52.0404f;
				case 10:
					return 1103.602f, -1454.501f, 52.156f;
				case 11:
					return 1157.095f, -1479.211f, 54.5609f;
				case 12:
					return 1141.249f, -1495.415f, 53.5181f;
				case 13:
					return 1155.253f, -1486.515f, 53.3976f;
				case 14:
					return 1153.59f, -1496.152f, 52.3798f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1155.641f, -1484.568f, 53.7927f;
				case 1:
					return 1152.311f, -1491.74f, 52.5312f;
				case 2:
					return 1155.565f, -1486.181f, 53.7098f;
				case 3:
					return 1150.636f, -1489.388f, 52.6313f;
				case 4:
					return 1163.407f, -1485.683f, 55.2387f;
				case 5:
					return 1178.615f, -1501.034f, 55.5034f;
				case 6:
					return 1163.529f, -1500.557f, 53.7477f;
				case 7:
					return 1179.44f, -1500.621f, 55.8282f;
				case 8:
					return 1168.332f, -1550.548f, 52.3476f;
				case 9:
					return 1168.963f, -1549.043f, 52.3564f;
				case 10:
					return 1168.989f, -1552.185f, 52.3771f;
				case 11:
					return 1157.602f, -1483.446f, 54.2007f;
				case 12:
					return 1141.972f, -1495.197f, 53.4331f;
				case 13:
					return 1155.605f, -1486.903f, 53.4402f;
				case 14:
					return 1145.096f, -1497.417f, 53.3068f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1497.045f, -999.7829f, 48.9649f;
				case 1:
					return 1493.368f, -1001.772f, 49.0753f;
				case 2:
					return 1497.057f, -998.0068f, 48.7575f;
				case 3:
					return 1493.399f, -999.6519f, 49.0861f;
				case 4:
					return 1501.904f, -998.2815f, 48.3669f;
				case 5:
					return 1466.993f, -999.0735f, 51.4976f;
				case 6:
					return 1476.747f, -995.2944f, 51.3127f;
				case 7:
					return 1472.366f, -1004.282f, 51.3152f;
				case 8:
					return 1482.223f, -1043.459f, 53.3295f;
				case 9:
					return 1479.782f, -1041.912f, 53.4861f;
				case 10:
					return 1481.533f, -1043.532f, 53.4156f;
				case 11:
					return 1499.777f, -1004.494f, 48.4792f;
				case 12:
					return 1496.689f, -999.9506f, 49.0444f;
				case 13:
					return 1485.891f, -999.1686f, 49.2575f;
				case 14:
					return 1490.406f, -1003.786f, 48.8177f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1497.008f, -1000.674f, 49.0231f;
				case 1:
					return 1493.854f, -1002.439f, 49.1329f;
				case 2:
					return 1495.63f, -999.7047f, 49.1569f;
				case 3:
					return 1493.233f, -1000.277f, 49.0661f;
				case 4:
					return 1499.684f, -996.9778f, 48.2393f;
				case 5:
					return 1508.444f, -980.8932f, 48.345f;
				case 6:
					return 1497.08f, -984.5303f, 48.2054f;
				case 7:
					return 1508.793f, -978.9645f, 48.3489f;
				case 8:
					return 1482.016f, -940.7007f, 48.2774f;
				case 9:
					return 1489.139f, -959.731f, 48.8506f;
				case 10:
					return 1481.814f, -940.3831f, 48.3313f;
				case 11:
					return 1501.368f, -995.0184f, 48.4029f;
				case 12:
					return 1496.515f, -1000.419f, 49.0914f;
				case 13:
					return 1483.255f, -1000.766f, 49.5808f;
				case 14:
					return 1493.787f, -1006.273f, 49.1415f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1666.22f, -1611.427f, 54.5025f;
				case 1:
					return 1667.506f, -1608.155f, 54.4269f;
				case 2:
					return 1667.333f, -1611.794f, 54.4158f;
				case 3:
					return 1669.286f, -1608.878f, 54.2971f;
				case 4:
					return 1666.665f, -1613.032f, 54.4819f;
				case 5:
					return 1686.386f, -1631.423f, 53.0587f;
				case 6:
					return 1688.411f, -1624.448f, 52.7528f;
				case 7:
					return 1687.462f, -1635.545f, 53.2476f;
				case 8:
					return 1724.844f, -1629.594f, 49.8092f;
				case 9:
					return 1724.609f, -1630.189f, 49.8452f;
				case 10:
					return 1726.92f, -1630.46f, 49.6614f;
				case 11:
					return 1665.267f, -1617.987f, 54.7241f;
				case 12:
					return 1666.609f, -1611.577f, 54.4741f;
				case 13:
					return 1672.162f, -1603.129f, 54.2195f;
				case 14:
					return 1674.361f, -1604.642f, 54.0695f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1656.18f, -1606.349f, 55.4125f;
				case 1:
					return 1660.649f, -1601.888f, 54.7761f;
				case 2:
					return 1657.147f, -1607.67f, 55.284f;
				case 3:
					return 1662.409f, -1604.536f, 54.6721f;
				case 4:
					return 1655.277f, -1607.257f, 55.534f;
				case 5:
					return 1637.667f, -1589.904f, 56.5347f;
				case 6:
					return 1642.132f, -1588.29f, 55.8456f;
				case 7:
					return 1632.928f, -1589.924f, 56.9814f;
				case 8:
					return 1624.093f, -1560.099f, 57.2859f;
				case 9:
					return 1623.039f, -1561.39f, 57.1965f;
				case 10:
					return 1622.924f, -1558.222f, 57.4796f;
				case 11:
					return 1644.131f, -1605.954f, 56.4517f;
				case 12:
					return 1665.421f, -1597.495f, 54.7173f;
				case 13:
					return 1658.788f, -1605.672f, 54.8796f;
				case 14:
					return 1662.766f, -1595.333f, 54.8887f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_577(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 99.9035f;
				case 1:
					return 155.9035f;
				case 2:
					return 221.9035f;
				case 3:
					return 161.9034f;
				case 4:
					return 203.588f;
				case 5:
					return -22.9486f;
				case 6:
					return 127.0514f;
				case 7:
					return 181.463f;
				case 8:
					return 161.162f;
				case 9:
					return 151.162f;
				case 10:
					return -110.537f;
				case 11:
					return 155.6917f;
				case 12:
					return 158.9852f;
				case 13:
					return 154.9852f;
				case 14:
					return 167.1432f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 211.9035f;
				case 1:
					return -156.0965f;
				case 2:
					return 95.9035f;
				case 3:
					return 215.9034f;
				case 4:
					return 115.588f;
				case 5:
					return -22.9486f;
				case 6:
					return 129.0514f;
				case 7:
					return -300.537f;
				case 8:
					return 169.162f;
				case 9:
					return 173.162f;
				case 10:
					return 3.463f;
				case 11:
					return 134.5254f;
				case 12:
					return 154.9852f;
				case 13:
					return 158.9852f;
				case 14:
					return 143.1432f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 3.9035f;
				case 1:
					return 23.9035f;
				case 2:
					return 303.9035f;
				case 3:
					return 7.9034f;
				case 4:
					return 267.588f;
				case 5:
					return 151.0514f;
				case 6:
					return 25.0514f;
				case 7:
					return 131.463f;
				case 8:
					return 147.162f;
				case 9:
					return 115.162f;
				case 10:
					return -132.537f;
				case 11:
					return -30.3083f;
				case 12:
					return -41.0148f;
				case 13:
					return 330.9852f;
				case 14:
					return 317.1432f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 287.9035f;
				case 1:
					return -78.0965f;
				case 2:
					return -52.0965f;
				case 3:
					return 275.9034f;
				case 4:
					return 31.588f;
				case 5:
					return 117.0514f;
				case 6:
					return 275.0514f;
				case 7:
					return -300.537f;
				case 8:
					return 259.162f;
				case 9:
					return 219.162f;
				case 10:
					return -4.537f;
				case 11:
					return -13.4746f;
				case 12:
					return -25.0148f;
				case 13:
					return 298.9852f;
				case 14:
					return 265.1432f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 153.9035f;
				case 1:
					return 163.9035f;
				case 2:
					return 213.9034f;
				case 3:
					return 155.9033f;
				case 4:
					return 83.588f;
				case 5:
					return 179.0514f;
				case 6:
					return 181.0513f;
				case 7:
					return 129.463f;
				case 8:
					return 315.1619f;
				case 9:
					return 271.1619f;
				case 10:
					return 11.463f;
				case 11:
					return 71.6917f;
				case 12:
					return 118.9852f;
				case 13:
					return 140.9852f;
				case 14:
					return 289.1431f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -260.0965f;
				case 1:
					return -256.0965f;
				case 2:
					return 73.9035f;
				case 3:
					return 107.9034f;
				case 4:
					return 159.588f;
				case 5:
					return 111.0514f;
				case 6:
					return 103.0514f;
				case 7:
					return -166.537f;
				case 8:
					return 295.162f;
				case 9:
					return 347.162f;
				case 10:
					return -106.537f;
				case 11:
					return -127.4746f;
				case 12:
					return 126.9852f;
				case 13:
					return -221.0148f;
				case 14:
					return 205.1432f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 407.9035f;
				case 1:
					return 79.9035f;
				case 2:
					return 887.9033f;
				case 3:
					return 805.9033f;
				case 4:
					return 579.588f;
				case 5:
					return 275.0514f;
				case 6:
					return 635.0513f;
				case 7:
					return 135.463f;
				case 8:
					return 637.1619f;
				case 9:
					return 711.1619f;
				case 10:
					return -178.537f;
				case 11:
					return 121.6917f;
				case 12:
					return 448.9852f;
				case 13:
					return 84.9852f;
				case 14:
					return 217.1431f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -236.0965f;
				case 1:
					return -246.0965f;
				case 2:
					return 555.9035f;
				case 3:
					return 473.9034f;
				case 4:
					return 65.588f;
				case 5:
					return -232.9486f;
				case 6:
					return 511.0514f;
				case 7:
					return -640.537f;
				case 8:
					return 211.162f;
				case 9:
					return 539.162f;
				case 10:
					return -58.537f;
				case 11:
					return 58.5254f;
				case 12:
					return 92.9852f;
				case 13:
					return -267.0148f;
				case 14:
					return 269.1432f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 335.9036f;
				case 1:
					return 361.9035f;
				case 2:
					return 1061.903f;
				case 3:
					return 1075.903f;
				case 4:
					return 611.588f;
				case 5:
					return 371.0515f;
				case 6:
					return 767.0513f;
				case 7:
					return 255.463f;
				case 8:
					return 883.162f;
				case 9:
					return 875.162f;
				case 10:
					return -122.537f;
				case 11:
					return 275.6917f;
				case 12:
					return 688.9852f;
				case 13:
					return 326.9852f;
				case 14:
					return 259.1431f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -86.0965f;
				case 1:
					return -88.0965f;
				case 2:
					return 311.9035f;
				case 3:
					return 647.9034f;
				case 4:
					return 21.588f;
				case 5:
					return -110.9486f;
				case 6:
					return 599.0514f;
				case 7:
					return -706.537f;
				case 8:
					return 151.162f;
				case 9:
					return 523.162f;
				case 10:
					return -316.537f;
				case 11:
					return 8.5254f;
				case 12:
					return -39.0148f;
				case 13:
					return -395.0148f;
				case 14:
					return 395.1432f;
			}
			break;
	}
	return 0f;
}

Vector3 func_689(var uParam0, bool bParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(0, 12);
			}
			else
			{
				return func_859(1, 12);
			}
			break;
		case 1:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(2, 13);
			}
			else
			{
				return func_859(3, 13);
			}
			break;
		case 2:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(4, 12);
			}
			else
			{
				return func_859(5, 12);
			}
			break;
		case 3:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(6, 12);
			}
			else
			{
				return func_859(7, 12);
			}
			break;
		case 4:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(8, 13);
			}
			else
			{
				return func_859(9, 12);
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_690(var uParam0, bool bParam1)
{
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(0, 13);
			}
			else
			{
				return func_859(1, 13);
			}
			break;
		case 1:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(2, 12);
			}
			else
			{
				return func_859(3, 12);
			}
			break;
		case 2:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(4, 13);
			}
			else
			{
				return func_859(5, 13);
			}
			break;
		case 3:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(6, 13);
			}
			else
			{
				return func_859(7, 13);
			}
			break;
		case 4:
			if (func_126(uParam0, 1) && !bParam1)
			{
				return func_859(8, 12);
			}
			else
			{
				return func_859(9, 13);
			}
			break;
	}
	return 0f, 0f, 0f;
}

struct<4> func_692(var uParam0)
{
	struct<4> Var0;
	switch (uParam0->f_48)
	{
		case 0:
			if (func_126(uParam0, 1))
			{
				return func_287(0, 14);
			}
			else
			{
				return func_287(1, 14);
			}
			break;
		case 1:
			if (func_126(uParam0, 1))
			{
				return func_287(2, 14);
			}
			else
			{
				return func_287(3, 14);
			}
			break;
		case 2:
			if (func_126(uParam0, 1))
			{
				return func_287(4, 14);
			}
			else
			{
				return func_287(5, 14);
			}
			break;
		case 3:
			if (func_126(uParam0, 1))
			{
				return func_287(6, 14);
			}
			else
			{
				return func_287(7, 14);
			}
			break;
		case 4:
			if (func_126(uParam0, 1))
			{
				return func_287(8, 14);
			}
			else
			{
				return func_287(9, 14);
			}
			break;
	}
	return Var0;
}

Vector3 func_859(int iParam0, int iParam1)
{
	return func_576(iParam0, iParam1);
}

