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
	struct<124> Local_274 = { 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0 } ;
	bool bLocal_398 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_398 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_398, 961, 0);
		if (bLocal_398)
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
					if (func_12())
					{
						if (func_13())
						{
							__LIB_2__::func_233(&Local_15, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						__LIB_2__::func_233(&Local_15, 5);
					}
					break;
				case 5:
					if (__LIB_2__::func_547())
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
									__LIB_2__::func_442(&Local_15, 1);
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
						__LIB_2__::func_283(&Local_15, 1);
						__LIB_0__::func_747(120, 0, 1);
						__LIB_2__::func_304(1, -1, 0, 0, 0);
						__LIB_2__::func_235(&Local_15);
						__LIB_2__::func_233(&Local_15, 11);
					}
					break;
				case 11:
					__LIB_2__::func_418(&Local_15);
					__LIB_2__::func_332();
					if (func_39(&Local_15))
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
					func_41(&Local_15);
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
	__LIB_2__::func_273(&Local_15, 0);
	if (Local_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_15.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_237))
	{
		__LIB_2__::func_371(&Local_15);
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

bool func_13()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_15.f_49[0], true);
	}
	return true;
}

bool func_14()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (Local_15.f_218 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_1__::func_976(iVar0);
	vVar2 = { func_105(iVar0) };
	fVar5 = func_106(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_15.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_15.f_52[iVar0], 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(Local_15.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_52[iVar0], true, false);
		}
		if (__LIB_0__::func_0(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_15.f_52[iVar0], 0);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_218)
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
	iVar1 = __LIB_2__::func_502(iVar0);
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
	vector3 vVar1;
	int iVar4;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			func_125(&Local_15, &Local_274, iVar0);
			if (iVar0 == 0)
			{
				func_126();
			}
			else if (iVar0 < 3)
			{
				vVar1 = { func_127(&Local_274, iVar0) };
				if (__LIB_0__::func_86(vVar1))
				{
					vVar1 = { func_128(&Local_274, iVar0) };
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_15[iVar0], vVar1, -1, 0, 0f, 0, 0, Local_274.f_46[iVar0], 0, 0, 0);
			}
			iVar4 = func_129(iVar0);
			__LIB_2__::func_133(Local_15[iVar0], func_130(iVar4), 0);
			PED::SET_COMBAT_FLOAT(Local_15[iVar0], 29, 0f);
			PED::SET_COMBAT_FLOAT(Local_15[iVar0], 40, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 46, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 5, true);
			PED::SET_COMBAT_FLOAT(Local_15[iVar0], 3, 0.75f);
			PED::SET_COMBAT_FLOAT(Local_15[iVar0], 1, 4f);
			PED::SET_COMBAT_FLOAT(Local_15[iVar0], 32, 2f);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 167, false);
			__LIB_2__::func_314(&Local_15, iVar0, 40, -1);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0]))
	{
		func_133(Local_15.f_49[0], Local_274.f_57[0], "WAGON05X", "PBL_MURFREE_AMBUSH_WAGON_A_WAGON05X");
		func_134(&Local_274, 0, "WAGON05X", Local_15.f_49[0]);
		VEHICLE::_SET_VEHICLE_TINT(Local_15.f_49[0], 0);
		VEHICLE::_SET_VEHICLE_LIVERY(Local_15.f_49[0], 0);
	}
	return true;
}

bool func_23()
{
	bool bVar0;
	func_137();
	__LIB_2__::func_375(&Local_15, 0);
	if (Local_274.f_9 > 0)
	{
		func_139();
		func_140();
		func_141();
		func_142();
	}
	switch (Local_274.f_9)
	{
		case 0:
			if (func_143() || func_144())
			{
				if (func_145())
				{
					if (__LIB_2__::func_1(Local_15[0], 0, 1))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
					}
					__LIB_2__::func_224(Local_15.f_151, 1);
					func_147();
					func_148();
					func_149();
					__LIB_0__::func_7(&Local_274, 512);
					__LIB_7__::func_407(&Local_274, 3);
				}
			}
			else if (func_152())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_233(&Local_15, 13);
				}
			}
			else
			{
				bVar0 = func_154();
				if (bVar0)
				{
					func_155();
					__LIB_7__::func_407(&Local_274, 1);
				}
			}
			break;
		case 1:
			func_156();
			if (!__LIB_0__::func_51(&Local_274, 8))
			{
				if (func_144())
				{
					if (func_145())
					{
						if (__LIB_2__::func_1(Local_15[0], 0, 1))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
						}
						__LIB_2__::func_224(Local_15.f_151, 1);
						func_147();
						func_148();
						func_149();
						__LIB_0__::func_7(&Local_274, 512);
						__LIB_7__::func_407(&Local_274, 3);
					}
					else
					{
						if ((__LIB_0__::func_51(&Local_274, 16) && __LIB_2__::func_47(&(Local_15.f_182), 4)) || __LIB_1__::func_285(&(Local_274.f_12[3 /*3*/]), 4f))
						{
							__LIB_7__::func_407(&Local_274, 2);
						}
						Jump @416; //curOff = 379
						func_156();
						func_148();
						__LIB_7__::func_407(&Local_274, 3);
						Jump @416; //curOff = 398
						func_156();
						func_149();
						return true;
					}
					return false;
				}
			}
			default:
				break;
	}
}

bool func_31()
{
	int iVar0;
	if (!__LIB_0__::func_51(&Local_274, 512))
	{
		func_156();
		__LIB_2__::func_375(&Local_15, 0);
		__LIB_2__::func_417(&Local_15, Local_274.f_40[0], func_171(&Local_274), 2.5f, 25f, 1065353216 /* Float: 1f */, 1);
	}
	func_139();
	func_140();
	func_141();
	if (!__LIB_0__::func_239(&Local_274, 65536))
	{
		func_142();
	}
	else
	{
		func_174();
		func_175();
		func_176();
		if (Local_274.f_10 < 2)
		{
			func_177();
		}
	}
	switch (Local_274.f_10)
	{
		case 0:
			__LIB_0__::func_7(&Local_274, 2048);
			__LIB_2__::func_147(&Local_15, 8388608);
			__LIB_4__::func_811(&Local_274, 1);
			break;
		case 1:
			if (func_179())
			{
				iVar0 = __LIB_2__::func_439(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar0 >= 0)
				{
					func_181(Local_15[iVar0], Global_35, "RE_HAT_RKR_V1_RETREAT", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0);
					__LIB_1__::func_283(&(Local_274.f_12[8 /*3*/]), 0);
					__LIB_4__::func_811(&Local_274, 2);
				}
				else if (__LIB_2__::func_327(&Local_15) <= 0)
				{
					__LIB_4__::func_811(&Local_274, 3);
				}
			}
			break;
		case 2:
			func_183();
			if (__LIB_2__::func_327(&Local_15) <= 0)
			{
				__LIB_4__::func_811(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_327(&Local_15) <= 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_39(var uParam0)
{
	char* sVar0;
	if (!__LIB_0__::func_51(&Local_274, 1024))
	{
		if (func_41(uParam0))
		{
			__LIB_0__::func_7(&Local_274, 1024);
			Local_274.f_118 = MISC::GET_GAME_TIMER();
		}
	}
	else if (MISC::GET_GAME_TIMER() >= Local_274.f_118 + 1600 && __LIB_2__::func_227(0f, 1, Global_35, 1))
	{
		sVar0 = "RE_HAT_RKR_V1_PLYFINAL_KILL";
		if (__LIB_2__::func_155(1, 1))
		{
			sVar0 = "RE_HAT_RKR_V1_PLYFINAL_FEUD";
		}
		if (func_181(Global_35, 0, sVar0, 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
		{
			__LIB_0__::func_240(&Local_274, 4194304);
			return true;
		}
	}
	return false;
}

bool func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_283(&(uParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_22[iVar0]))
			{
				if (__LIB_0__::func_94((*uParam0)[iVar0], Global_36, 1) > 40f || __LIB_1__::func_285(&(uParam0->f_241), 15f))
				{
					__LIB_0__::func_325(&(uParam0->f_22[iVar0]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
					return true;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= uParam0->f_215)
	{
		return true;
	}
	return false;
}

void func_49()
{
	if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, false);
	}
	if (PATHFIND::_0xDE0EA444735C1368(Local_274.f_40[4]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_274.f_40[4]);
	}
	if (__LIB_0__::func_51(&Local_274, 2048))
	{
		if (__LIB_2__::func_227(0f, 1, Global_35, 1))
		{
			if (!__LIB_0__::func_239(&Local_274, 4194304))
			{
				if (__LIB_2__::func_155(1, 1))
				{
					func_181(Global_35, 0, "RE_HAT_RKR_V1_PLYFINAL_FEUD", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0);
				}
				else
				{
					func_181(Global_35, 0, "RE_HAT_RKR_V1_PLYFINAL_RUN", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0);
				}
			}
		}
	}
	AUDIO::_0x05D6195FB4D428F4(joaat("REHAT_END"));
	STREAMING::_REMOVE_IMAP(-64729392);
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
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(20, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(20, 1, Local_15.f_221), true))
	{
		__LIB_0__::func_7(&Local_274, 1);
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 1;
	Local_15.f_218 = 0;
	Local_15.f_216 = 0;
	Local_15.f_181 = 1;
	func_254();
	func_255(&(Local_15.f_182), 24, 2.5f, 1.75f, 1067450368 /* Float: 1.25f */, 2.001f, 0);
	if (__LIB_2__::func_117(16))
	{
		__LIB_0__::func_7(&Local_274, 4);
	}
	func_257(&Local_15, 2, 1);
	__LIB_2__::func_147(&Local_15, 131072);
	STREAMING::_REQUEST_IMAP(-64729392);
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	func_258(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_2__::func_155(iParam0, 1))
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
		iVar0 = func_259(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_8)
	{
		case 0:
			func_266();
			func_267(&Local_15);
			__LIB_17__::func_777(&Local_15);
			func_269();
			Local_274.f_8 = 1;
			break;
		case 1:
			if (STREAMING::_IS_IMAP_ACTIVE(-64729392))
			{
				Local_274.f_123 = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_270(&Local_274), 40f, "des_re_wagon_crash_front");
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_274.f_123))
				{
					func_271(&Local_274);
					Local_274.f_8 = 2;
				}
			}
			break;
		case 2:
			if (!func_272(&Local_274))
			{
				return false;
			}
			func_273(&Local_274);
			Local_274.f_8 = 3;
			break;
		case 3:
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
			if (!func_277(&Local_274))
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
	return func_278(iVar0);
}

Vector3 func_99(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_279(&Local_274, iVar0);
}

float func_100(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_280(&Local_274, iVar0);
}

Vector3 func_105(var uParam0)
{
	int iVar0;
	iVar0 = uParam0;
	return func_282(&Local_274, iVar0);
}

float func_106(var uParam0)
{
	int iVar0;
	iVar0 = uParam0;
	return func_283(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_128(&Local_274, iVar0);
}

float func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_286(&Local_274, iVar0);
}

void func_125(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { func_127(uParam1, iParam2) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_128(uParam1, iParam2) };
		fVar3 = func_286(uParam1, iParam2);
	}
	else
	{
		fVar3 = func_287(uParam1, iParam2);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS((*uParam0)[iParam2], true, true);
	if (func_288(uParam1, iParam2))
	{
		if (__LIB_11__::func_16(iParam2))
		{
			if (iParam2 == 1)
			{
				__LIB_2__::func_272((*uParam0)[iParam2], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iParam2], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iParam2], 93, true);
				PED::_0x1854217C640B39EC((*uParam0)[iParam2], Global_35, 0f, 0f, 0f, 5f, 0, 0);
			}
			else
			{
				__LIB_2__::func_272((*uParam0)[iParam2], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			WEAPON::_GIVE_WEAPON_TO_PED_2((*uParam0)[iParam2], joaat("WEAPON_MELEE_TORCH"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			PED::SET_PED_CONFIG_FLAG((*uParam0)[iParam2], 249, true);
		}
		else
		{
			if (iParam2 == 1)
			{
				__LIB_2__::func_272((*uParam0)[iParam2], joaat("WEAPON_MELEE_KNIFE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iParam2], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iParam2], 93, true);
				PED::_0x1854217C640B39EC((*uParam0)[iParam2], Global_35, 0f, 0f, 0f, 5f, 0, 0);
			}
			else
			{
				__LIB_2__::func_272((*uParam0)[iParam2], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			if (__LIB_0__::func_51(uParam1, 4))
			{
			}
		}
	}
	else
	{
		__LIB_2__::func_546((*uParam0)[iParam2], 0, 2, 0);
	}
	switch (iParam2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA((*uParam0)[iParam2], vVar0, 2f, 0, false, 0);
			break;
	}
	if (iParam2 < 3)
	{
		uParam1->f_46[iParam2] = TASK::ADD_COVER_POINT(vVar0, fVar3, 3, 0, 1, false);
	}
}

void func_126()
{
	PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], true, 0, true);
}

Vector3 func_127(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(0, 5);
			case 3:
				return func_292(0, 8);
			case 4:
				return func_292(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(1, 5);
			case 3:
				return func_292(1, 8);
			case 4:
				return func_292(1, 10);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_128(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(0, 0);
			case 1:
				return func_292(0, 1);
			case 2:
				return func_292(0, 2);
			case 3:
				return func_292(0, 6);
			case 4:
				return func_292(0, 7);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(1, 0);
			case 1:
				return func_292(1, 1);
			case 2:
				return func_292(1, 2);
			case 3:
				return func_292(1, 6);
			case 4:
				return func_292(1, 7);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 1;
		case 4:
			return 0;
		default:
			break;
	}
	return -1;
}

char* func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0199_G_M_M_UniInbred_01_WHITE_01";
		case 1:
			return "0200_G_M_M_UniInbred_01_WHITE_02";
		case 2:
			return "0201_G_M_M_UniInbred_02_WHITE_01";
		case 3:
			return "0202_G_M_M_UniInbred_02_WHITE_02";
		default:
			break;
	}
	return "";
}

void func_133(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<4> Var0;
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, !MISC::IS_STRING_NULL_OR_EMPTY(sParam3), sParam3, 2))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Var0, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iParam0, Var0.f_3, 2, true);
	}
}

void func_134(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_57[iParam1], sParam2, iParam3, 0);
}

void func_137()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_51(&Local_274, 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]))
	{
		return;
	}
	if (!VEHICLE::_0xA19447D83294E29F(Local_15.f_49[0], &iVar0, &iVar1))
	{
		return;
	}
	if (iVar1 >= iVar0)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0]))
			{
				Local_274.f_52[iVar3] = VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_15.f_49[0], iVar2);
				if (__LIB_2__::func_1(Local_274.f_52[iVar3], 0, 1))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_274.f_52[iVar3], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_274.f_52[iVar3], true, true);
					}
					PED::DELETE_PED(&(Local_274.f_52[iVar3]));
					iVar3++;
					if (iVar3 >= Local_274.f_52)
					{
					}
					else
					{
						iVar2++;
					}
					__LIB_0__::func_7(&Local_274, 256);
				}
			}
		}
	}
}

void func_139()
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
					if (__LIB_0__::func_51(&Local_274, 16))
					{
						__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_140()
{
	int iVar0;
	if (!__LIB_0__::func_51(&Local_274, 32))
	{
		if (__LIB_2__::func_1(Local_15[0], 0, 1))
		{
			if (func_303())
			{
				if (__LIB_0__::func_399(Local_15[0], 1, 0, 0) == joaat("WEAPON_MELEE_TORCH"))
				{
					WEAPON::_0xCEF4C65DE502D367(Local_15[0], 1, 0, 1, 0);
				}
				if (__LIB_0__::func_214(joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
				{
					iVar0 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
				}
				else if (__LIB_0__::func_214(joaat("WEAPON_MELEE_MACHETE")))
				{
					iVar0 = joaat("WEAPON_MELEE_MACHETE");
				}
				else
				{
					iVar0 = joaat("WEAPON_MELEE_KNIFE");
				}
				__LIB_2__::func_272(Local_15[0], iVar0, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_15[0], iVar0, false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Local_15[0], 1, 0, 0, 0);
				TASK::TASK_COMBAT_PED(Local_15[0], Global_35, 0, 0);
				__LIB_1__::func_733(Local_15[0]);
				PED::_0x1854217C640B39EC(Local_15[0], Global_35, 0f, 0f, 0f, 5f, 0, 0);
				PED::SET_PED_COMBAT_RANGE(Local_15[0], 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_15[0], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[0], 45, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[0], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[0], 93, true);
				__LIB_0__::func_7(&Local_274, 32);
			}
		}
		else
		{
			__LIB_0__::func_7(&Local_274, 32);
		}
	}
}

void func_141()
{
	int iVar0;
	float fVar1;
	if (!__LIB_0__::func_75(&(Local_274.f_12[3 /*3*/])))
	{
		return;
	}
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_716(&Local_274, iVar0, 1) || __LIB_2__::func_716(&Local_274, iVar0, 2))
		{
		}
		else if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
		}
		else if (__LIB_0__::func_399(Local_15[iVar0], 0, 0, 0) == joaat("WEAPON_MELEE_TORCH") || __LIB_0__::func_399(Local_15[iVar0], 0, 1, 0) == joaat("WEAPON_MELEE_TORCH"))
		{
			__LIB_2__::func_717(&Local_274, iVar0, 1);
		}
		else if (!func_288(&Local_274, iVar0))
		{
			__LIB_17__::func_778(&Local_15, Local_15[iVar0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
			__LIB_2__::func_717(&Local_274, iVar0, 2);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					fVar1 = 4.5f;
					break;
				case 2:
					fVar1 = 5.1f;
					break;
				case 3:
					fVar1 = 6f;
					break;
				case 4:
					fVar1 = 6f;
					break;
			}
			if (__LIB_1__::func_285(&(Local_274.f_12[3 /*3*/]), fVar1))
			{
				if (iVar0 == 1)
				{
					__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_MELEE_KNIFE"), -1, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 93, true);
					PED::_0x1854217C640B39EC(Local_15[iVar0], Global_35, 0f, 0f, 0f, 5f, 0, 0);
				}
				else
				{
					__LIB_17__::func_778(&Local_15, Local_15[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
				}
				if (__LIB_0__::func_51(&Local_274, 4))
				{
					__LIB_2__::func_546(Local_15[iVar0], 1, 3, 1);
				}
				__LIB_2__::func_717(&Local_274, iVar0, 1);
			}
		}
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_239(&Local_274, 16384))
	{
		return;
	}
	if (!__LIB_0__::func_239(&Local_274, 65536))
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				iVar0 = func_129(iVar1);
				switch (iVar0)
				{
					case 0:
						if (__LIB_2__::func_1(Local_15[iVar1], 0, 1))
						{
							if (!Local_15.f_227)
							{
								if (func_181(Local_15[iVar1], Global_35, "TAUNT_GEN_LOCATION", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
								{
									bVar2 = true;
								}
							}
							else if (func_181(Local_15[iVar1], Global_35, "RE_HAT_RKR_V1_INTRO_PED_3_FEUD", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
							{
								bVar2 = true;
							}
							if (bVar2)
							{
								__LIB_0__::func_240(&Local_274, 65536);
							}
							else
							{
								Jump @223; //curOff = 200
								if (iVar1 >= 4)
								{
									__LIB_0__::func_240(&Local_274, 65536);
								}
								else
								{
									iVar1++;
								}
							}
							Jump @390; //curOff = 235
							if (!__LIB_0__::func_239(&Local_274, 32768))
							{
								if (__LIB_2__::func_227(-1f, 1, 0, 0))
								{
									iVar1 = 0;
									while (iVar1 <= 4)
									{
										iVar0 = func_129(iVar1);
										switch (iVar0)
										{
											case 1:
												if (__LIB_2__::func_1(Local_15[iVar1], 0, 1))
												{
													func_181(Local_15[iVar1], Global_35, "RE_HAT_RKR_V1_INTRO_PED_2", 1117782016 /* Float: 80f */, 0, 1808677283, 0, 0);
													__LIB_0__::func_240(&Local_274, 32768);
													Jump @390; //curOff = 352
												}
												else if (iVar1 >= 3)
												{
													__LIB_0__::func_240(&Local_274, 32768);
												}
												else
												{
													iVar1++;
												}
												default:
													break;
										}
									}
								}
							}
						}
						default:
							break;
				}
			}
		}
	}
}

int func_143()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_718(Local_15[iVar0], 0, &(Local_15.f_152), &(Local_15.f_180), 0, 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (__LIB_0__::func_51(&Local_274, 64))
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	if (__LIB_0__::func_239(&Local_274, 1048576))
	{
		if (__LIB_2__::func_157(Local_274.f_40[2], Global_36) || (__LIB_3__::func_988() && (__LIB_1__::func_472(Local_15[3], 200f, -1082130432 /* Float: -1f */, Local_15.f_9[3], -1082130432 /* Float: -1f */) || __LIB_1__::func_472(Local_15[4], 200f, -1082130432 /* Float: -1f */, Local_15.f_9[4], -1082130432 /* Float: -1f */))))
		{
			return true;
		}
	}
	return false;
}

bool func_145()
{
	__LIB_0__::func_7(&Local_274, 64);
	return true;
}

void func_147()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar0], 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0f, 0.2f, 1, 1);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			if (!bVar2 && __LIB_2__::func_227(0f, 1, Local_15[iVar0], 1))
			{
				func_181(Local_15[iVar0], Global_35, "RE_HAT_RKR_V1_BYPASS", 1117782016 /* Float: 80f */, 0, -500314840, 0, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

void func_148()
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 4f;
	if (__LIB_2__::func_1(Local_15[0], 0, 1))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (PED::IS_PED_IN_COVER(Local_15[iVar0], false, false) || __LIB_1__::func_472(Local_15[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[iVar0], &iVar1, fVar2, 0, 1, 1);
				fVar2 = (fVar2 + 0.5f);
			}
		}
		iVar0++;
	}
	AUDIO::_0x05D6195FB4D428F4(joaat("REHAT_END"));
}

void func_149()
{
	__LIB_1__::func_283(&(Local_274.f_12[1 /*3*/]), 1);
	__LIB_2__::func_375(&Local_15, 0);
}

bool func_152()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_40[2], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_40[1], 1, 0))
		{
			__LIB_0__::func_11(&Local_15, 7);
			return true;
		}
	}
	if (func_316(79))
	{
		__LIB_0__::func_11(&Local_15, 3);
		return true;
	}
	if (__LIB_2__::func_720(&Local_15))
	{
		return true;
	}
	return false;
}

int func_154()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Local_15[0], Global_36, 1);
	if (fVar0 < 60f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
	{
		return 1;
	}
	else if (fVar0 < 75f)
	{
		if (!__LIB_0__::func_239(&Local_274, 1048576))
		{
			if (PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 5f)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[0], Global_35, -1, -1f, -1f, -1f);
				func_181(Local_15[0], Global_35, "RE_HAT_RKR_V1_TARGETSPOT_INT", 1117782016 /* Float: 80f */, 0, 1744022339, 1, 0);
				__LIB_0__::func_240(&Local_274, 1048576);
			}
		}
	}
	return 0;
}

void func_155()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	char* sVar10;
	vVar1 = { __LIB_2__::func_114(Global_35, 1.5f) };
	Local_274.f_110 = func_319(0);
	iVar4 = __LIB_2__::func_431(Local_15[0], vVar1, 1060437492 /* Float: 0.707f */);
	switch (iVar4)
	{
		case 0:
			Local_274.f_111 = "ALERT_FWD";
			break;
		case 1:
			Local_274.f_111 = "ALERT_BK";
			break;
		case 2:
			Local_274.f_111 = "ALERT_RT";
			break;
		case 3:
			Local_274.f_111 = "ALERT_LT";
			break;
	}
	vVar5 = { func_127(&Local_274, 0) };
	fVar8 = func_287(&Local_274, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[0], vVar5, 3f, 1, false, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[0], 51, true);
	PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	__LIB_2__::func_45(0, Global_35, 1500);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 2f, -1, 2f, 1, 40000f);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar5, 1500, 1, 0f, 0, 0, Local_274.f_46[0], 1, 0, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
	sVar10 = "TAUNT_GEN_NEUTRAL";
	iVar9 = 4;
	if (Local_15.f_227)
	{
		sVar10 = "RE_HAT_RKR_V1_TARGETSPOT_FEUD";
		iVar9 = 0;
	}
	func_181(Local_15[0], Global_35, sVar10, 1117782016 /* Float: 80f */, iVar9, -500314840, 0, 0);
	__LIB_0__::func_240(&Local_274, 16384);
	__LIB_1__::func_283(&(Local_274.f_12[0 /*3*/]), 0);
	__LIB_1__::func_283(&(Local_274.f_12[3 /*3*/]), 0);
	__LIB_1__::func_283(&(Local_274.f_12[4 /*3*/]), 0);
	__LIB_1__::func_283(&(Local_274.f_12[5 /*3*/]), 0);
	__LIB_2__::func_442(&Local_15, 1);
	__LIB_2__::func_548(&Local_15, 1);
}

void func_156()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (!__LIB_0__::func_51(&Local_274, 16))
	{
		if (__LIB_0__::func_239(&Local_274, 16384))
		{
			if (!__LIB_0__::func_239(&Local_274, 2097152))
			{
				if (__LIB_2__::func_227(0f, 1, Local_15[0], 1))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_15[0]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_15[0]))
					{
						if (__LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (func_181(Global_35, 0, "RE_HAT_RKR_VI_ILO_POS", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
							{
								__LIB_0__::func_240(&Local_274, 2097152);
							}
						}
					}
				}
			}
		}
	}
	if ((__LIB_0__::func_51(&Local_274, 8) || func_322()) && !__LIB_0__::func_51(&Local_274, 512))
	{
		if (!__LIB_0__::func_51(&Local_274, 8))
		{
			func_323();
			func_324(&Local_274, 0);
			if (__LIB_2__::func_1(Local_15[4], 0, 0))
			{
				func_181(Local_15[4], Global_35, "RE_HAT_RKR_V1_FIRE_CART", 1117782016 /* Float: 80f */, 0, 291934926, 0, 0);
			}
			else if (__LIB_2__::func_1(Local_15[3], 0, 0))
			{
				func_181(Local_15[3], Global_35, "RE_HAT_RKR_V1_FIRE_CART", 1117782016 /* Float: 80f */, 0, 291934926, 0, 0);
			}
			func_325(&Local_274, 0, "PBL_MURFREE_AMBUSH_WAGON_A_WAGON05X", 1);
			__LIB_1__::func_283(&(Local_274.f_12[6 /*3*/]), 0);
			__LIB_0__::func_7(&Local_274, 8);
		}
		if (!__LIB_0__::func_51(&Local_274, 128))
		{
			if (__LIB_1__::func_285(&(Local_274.f_12[6 /*3*/]), 1f) || (ENTITY::IS_ENTITY_ON_SCREEN(Local_15.f_49[0]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_15.f_49[0])))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0]))
				{
					FIRE::START_ENTITY_FIRE(Local_15.f_49[0], 1f, -1, 14);
				}
				__LIB_0__::func_7(&Local_274, 128);
			}
		}
		func_326();
		if (__LIB_0__::func_51(&Local_274, 16) && __LIB_0__::func_266(Global_35, func_282(&Local_274, 0), 5f, 1, 1))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (__LIB_2__::func_1(iVar0, 0, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
				TASK::TASK_HORSE_ACTION(iVar0, 4, Local_15.f_49[0], 0);
			}
		}
		if (!__LIB_0__::func_239(&Local_274, 8388608))
		{
			if (__LIB_0__::func_51(&Local_274, 16))
			{
				if (MISC::GET_GAME_TIMER() >= Local_274.f_119 + 700)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2462.892f, 1318.5f, 109.6284f, true) < 20f)
					{
						if (!__LIB_0__::func_181())
						{
							sVar1 = "GENERIC_SHOCKED_HIGH";
							iVar2 = 3;
						}
						else
						{
							sVar1 = "SHOT_RESPONSE_SELF";
							iVar2 = 3;
						}
						if (func_181(Global_35, Global_35, sVar1, 1117782016 /* Float: 80f */, iVar2, -500314840, 0, 1))
						{
							__LIB_0__::func_240(&Local_274, 8388608);
						}
					}
					else
					{
						__LIB_0__::func_240(&Local_274, 8388608);
					}
				}
			}
		}
	}
}

Vector3 func_171(var uParam0)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		return func_292(0, 11);
	}
	else
	{
		return func_292(1, 11);
	}
	return 0f, 0f, 0f;
}

void func_174()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	if (__LIB_1__::func_285(&(Local_274.f_12[4 /*3*/]), 6f) && __LIB_2__::func_227(-2f, 1, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 1) && __LIB_2__::func_227(0f, 1, Local_15[iVar0], 1))
			{
				iVar1 = func_129(iVar0);
				if (PED::_0x285D36C5C72B0569(Local_15[iVar0]) < 0.5f)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, Local_15[iVar0], 1, 1))
					{
						iVar2 = func_346(iVar1);
						sVar4 = func_347(iVar1);
						if (!__LIB_0__::func_239(&Local_274, iVar2))
						{
							if (func_181(Local_15[iVar0], Global_35, sVar4, 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
							{
								__LIB_0__::func_240(&Local_274, iVar2);
								return;
							}
						}
					}
					else if (__LIB_2__::func_374(&Local_15) > 1)
					{
						iVar3 = __LIB_10__::func_746(iVar1);
						sVar5 = func_350(iVar1);
						if (!__LIB_0__::func_239(&Local_274, iVar3))
						{
							if (func_181(Local_15[iVar0], Global_35, sVar5, 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
							{
								__LIB_0__::func_240(&Local_274, iVar3);
								return;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_175()
{
	int iVar0;
	if (!__LIB_0__::func_239(&Local_274, 8192))
	{
		if (__LIB_2__::func_327(&Local_15) < 5)
		{
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				iVar0 = func_351(&Local_15, 0, 4, 1);
				if (iVar0 >= 0)
				{
					if (func_181(Local_15[iVar0], Global_35, "RE_HAT_RKR_V1_MAN_DOWN", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
					{
						__LIB_0__::func_240(&Local_274, 8192);
					}
				}
			}
		}
	}
}

void func_176()
{
	char* sVar0;
	switch (Local_274.f_11)
	{
		case 0:
			if (__LIB_2__::func_327(&Local_15) < Local_274.f_122)
			{
				Local_274.f_11 = 1;
				Local_274.f_120 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(700, 1100));
			}
			break;
		case 1:
			if (((MISC::GET_GAME_TIMER() >= Local_274.f_120 && Local_274.f_121 < 4) && __LIB_2__::func_327(&Local_15) > 0) && __LIB_2__::func_227(0f, 1, Global_35, 0))
			{
				if (Local_274.f_121 == 0 && __LIB_0__::func_51(&Local_274, 512))
				{
					Local_274.f_121 = 1;
				}
				switch (Local_274.f_121)
				{
					case 0:
						sVar0 = "RE_HAT_RKR_V1_KILL_A";
						break;
					case 1:
						sVar0 = "RE_HAT_RKR_V1_KILL_B";
						break;
					case 2:
						sVar0 = "RE_HAT_RKR_V1_KILL_C";
						break;
					case 3:
						sVar0 = "RE_HAT_RKR_V1_KILL_D";
						break;
				}
				if (func_181(Global_35, 0, sVar0, 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
				{
					Local_274.f_120 = MISC::GET_GAME_TIMER() + 7000;
					Local_274.f_121++;
					Local_274.f_11 = 2;
				}
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= Local_274.f_120)
			{
				Local_274.f_11 = 0;
				Local_274.f_122 = __LIB_2__::func_327(&Local_15);
			}
			break;
	}
}

void func_177()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	if (__LIB_1__::func_285(&(Local_274.f_12[5 /*3*/]), 8f) && __LIB_2__::func_227(0, 1, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 1) && __LIB_2__::func_227(0f, 1, Local_15[iVar0], 1))
			{
				iVar1 = func_129(iVar0);
				iVar2 = func_352(iVar1);
				iVar3 = func_352(iVar1);
				if (!__LIB_0__::func_239(&Local_274, iVar2))
				{
					sVar4 = func_353(&Local_15, iVar1);
					if (func_181(Local_15[iVar0], Global_35, sVar4, 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
					{
						__LIB_0__::func_240(&Local_274, iVar2);
						return;
					}
				}
				else if (!__LIB_0__::func_239(&Local_274, iVar3))
				{
					sVar4 = func_354(&Local_15, iVar1);
					if (func_181(Local_15[iVar0], Global_35, sVar4, 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
					{
						__LIB_0__::func_240(&Local_274, iVar3);
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_179()
{
	int iVar0;
	iVar0 = __LIB_2__::func_327(&Local_15);
	if (iVar0 <= 2 && __LIB_1__::func_285(&(Local_274.f_12[1 /*3*/]), 15f))
	{
		return true;
	}
	if (iVar0 <= 3 && __LIB_1__::func_285(&(Local_274.f_12[1 /*3*/]), 30f))
	{
		return true;
	}
	return false;
}

bool func_181(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	return __LIB_2__::func_303(iParam0, iParam1, sParam2, "", fParam3, iParam4, 0, 0, 1, 1, 1, iParam5, bParam6, bParam7, 0);
}

void func_183()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			func_356(iVar0);
		}
		iVar0++;
	}
	func_357();
}

void func_254()
{
	func_404();
	Local_274.f_40[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2456.964f, 1316.604f, 110.885f, 0f, 0f, 0f, 16f, 16f, 16f, "volStayout");
	Local_274.f_40[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volWagonNavBlock");
	VOLUME::_0x39816F6F94F385AD(Local_274.f_40[4], 2458.075f, 1323.362f, 112.1701f, 0f, 0f, 7.999999f, 7.207866f, 2.45895f, 7.429438f);
	VOLUME::_0x39816F6F94F385AD(Local_274.f_40[4], 2458.125f, 1322.999f, 112.1701f, 0f, 0f, -15f, 7.207866f, 3f, 7.429438f);
	VOLUME::_0x39816F6F94F385AD(Local_274.f_40[4], 2452.74f, 1322.994f, 112.1701f, 0f, 0f, 46f, 8.032266f, 2.368714f, 7.429438f);
	VOLUME::_0x39816F6F94F385AD(Local_274.f_40[4], 2456.548f, 1321.582f, 112.1701f, 0f, 0f, -15f, 10.89017f, 3f, 7.429438f);
	PATHFIND::_0x19C7567D2F2287D6(Local_274.f_40[4], 7);
	if (__LIB_0__::func_51(&Local_274, 1))
	{
		Local_274.f_40[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2459.262f, 1301f, 119.2499f, 0f, 0f, 177.1445f, 52.02184f, 18.32374f, 21.75352f, "volWagonTrigger");
	}
	else
	{
		Local_274.f_40[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2472.144f, 1330.007f, 115.005f, 0f, 0f, 163.3511f, 82.04939f, 36f, 21.75352f, "volWagonTrigger");
	}
}

void func_255(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4, float fParam5, int iParam6)
{
	uParam0->f_5 = iParam1;
	uParam0->f_21 = fParam2;
	uParam0->f_22 = fParam3;
	uParam0->f_23 = iParam4;
	uParam0->f_24 = fParam5;
	uParam0->f_17 = iParam6;
}

void func_257(var uParam0, int iParam1, bool bParam2)
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
			__LIB_2__::func_149(uParam0, 262144);
		}
		if (__LIB_0__::func_27(iParam1, 2))
		{
			__LIB_2__::func_149(uParam0, 524288);
		}
	}
}

void func_258(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
							Jump @1377; //curOff = 1258
							__LIB_2__::func_68(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							Jump @1377; //curOff = 1287
							__LIB_2__::func_68(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							Jump @1377; //curOff = 1316
							__LIB_2__::func_68(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							Jump @1377; //curOff = 1345
							__LIB_2__::func_68(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							Jump @2998; //curOff = 1377
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
									break;
							}
							Jump @2998; //curOff = 1423
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
									break;
							}
							Jump @2998; //curOff = 1469
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
									break;
							}
							Jump @2998; //curOff = 1550
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
							Jump @2998; //curOff = 1666
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
									break;
							}
							Jump @2998; //curOff = 1747
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
							Jump @2998; //curOff = 1933
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
									break;
							}
							Jump @2998; //curOff = 1979
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
									break;
							}
							Jump @2998; //curOff = 2025
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
							Jump @2998; //curOff = 2176
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
									break;
							}
							Jump @2998; //curOff = 2222
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
									break;
							}
							Jump @2998; //curOff = 2268
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
									break;
							}
							Jump @2998; //curOff = 2314
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
									break;
							}
							Jump @2998; //curOff = 2360
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
									break;
							}
							Jump @2998; //curOff = 2406
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
									break;
							}
							Jump @2998; //curOff = 2452
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
									break;
							}
							Jump @2998; //curOff = 2498
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
									break;
							}
							Jump @2998; //curOff = 2579
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
									break;
							}
							Jump @2998; //curOff = 2625
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
									break;
							}
							Jump @2998; //curOff = 2671
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
									break;
							}
							Jump @2998; //curOff = 2717
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
									break;
							}
							Jump @2998; //curOff = 2798
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
									break;
							}
							Jump @2998; //curOff = 2844
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
							Jump @6225; //curOff = 2998
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
							Jump @6225; //curOff = 5957
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
							Jump @6225; //curOff = 6194
							*uParam2 = { 0f, 0f, 0f };
							*uParam3 = 0f;
							Jump @6225; //curOff = 6208
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
int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

void func_266()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_319(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_267(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = __LIB_2__::func_502(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

void func_269()
{
	AUDIO::PREPARE_MUSIC_EVENT("REHAT_START");
	AUDIO::PREPARE_MUSIC_EVENT("REHAT_END");
}

Vector3 func_270(var uParam0)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		return func_292(0, 12);
	}
	else
	{
		return func_292(1, 12);
	}
	return 0f, 0f, 0f;
}

void func_271(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_415(uParam0, iVar0, 0, 1);
		iVar0++;
	}
}

bool func_272(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_416(uParam0, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_273(var uParam0)
{
	func_417(uParam0, 0, "PBL_MURFREE_AMBUSH_WAGON_A_WAGON05X");
	func_417(uParam0, 0, "PBL_MURFREE_AMBUSH_WAGON_B_WAGON05X");
}

bool func_274()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_319(iVar0);
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
		iVar0 = __LIB_2__::func_502(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_502(iVar1)))
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
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_541(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

bool func_277(var uParam0)
{
	if (!func_418(uParam0, 0, "PBL_MURFREE_AMBUSH_WAGON_A_WAGON05X"))
	{
		return false;
	}
	if (!func_418(uParam0, 0, "PBL_MURFREE_AMBUSH_WAGON_B_WAGON05X"))
	{
		return false;
	}
	return true;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1829754305;
		case 1:
			return -383920487;
		case 2:
			return -1268552411;
		case 3:
			return -1637957348;
		case 4:
			return 1729811093;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

Vector3 func_279(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(0, 4);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(1, 4);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_280(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_419(0, 4);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_419(1, 4);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_282(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(0, 3);
			case 1:
				return func_292(0, 10);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(1, 3);
			case 1:
				return func_292(1, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_283(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_419(0, 3);
			case 1:
				return func_419(0, 10);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_419(1, 3);
			case 1:
				return func_419(1, 9);
			default:
				break;
		}
	}
	return 0f;
}

float func_286(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_419(0, 0);
			case 1:
				return func_419(0, 1);
			case 2:
				return func_419(0, 2);
			case 3:
				return func_419(0, 6);
			case 4:
				return func_419(0, 7);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_419(1, 0);
			case 1:
				return func_419(1, 1);
			case 2:
				return func_419(1, 2);
			case 3:
				return func_419(1, 6);
			case 4:
				return func_419(1, 7);
			default:
				break;
		}
	}
	return 0f;
}

float func_287(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_419(0, 5);
			case 3:
				return func_419(0, 8);
			case 4:
				return func_419(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_419(1, 5);
			case 3:
				return func_419(1, 8);
			case 4:
				return func_419(1, 10);
			default:
				break;
		}
	}
	return 0f;
}

bool func_288(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				return true;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 2:
			case 4:
				return true;
		}
	}
	return false;
}

Vector3 func_292(int iParam0, int iParam1)
{
	return func_429(iParam0, iParam1);
}

bool func_303()
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_15[0]))
	{
		return true;
	}
	if (PED::IS_PED_IN_COVER(Local_15[0], false, false))
	{
		return true;
	}
	if (__LIB_2__::func_167(Local_15[0], 0))
	{
		return true;
	}
	return false;
}

bool func_316(int iParam0)
{
	int iVar0;
	if (__LIB_1__::func_972(iParam0) != 3)
	{
		return false;
	}
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return false;
	}
	return __LIB_1__::func_44(iVar0);
}

char* func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@harassment_attack";
		default:
			break;
	}
	return "";
}

bool func_322()
{
	vector3 vVar0;
	if (__LIB_1__::func_205(Global_35, Local_274.f_40[3], 1, 0))
	{
		return true;
	}
	if (__LIB_1__::func_285(&(Local_274.f_12[0 /*3*/]), 6f))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_15.f_49[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		if (vVar0.y > 0f)
		{
			return true;
		}
		else
		{
			__LIB_0__::func_7(&Local_274, 512);
		}
	}
	return false;
}

void func_323()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	iVar4 = 3;
	while (iVar4 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar4], 0, 1))
		{
			vVar0 = { func_127(&Local_274, iVar4) };
			if (!__LIB_0__::func_86(vVar0))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar4], 51, true);
				__LIB_2__::func_542(Local_15[iVar4], vVar0, 3f, 1, 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar4], &iVar3, 0, 0, 1, 1);
		}
		iVar4++;
	}
}

void func_324(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_57[iParam1]))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_57[iParam1]);
}

void func_325(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	__LIB_2__::func_543(uParam0->f_57[iParam1], sParam2, bParam3, func_482(uParam0, iParam1));
}

void func_326()
{
	vector3 vVar0;
	vector3 vVar6;
	vector3 vVar9;
	if (__LIB_0__::func_51(&Local_274, 16))
	{
		return;
	}
	vVar0 = { func_282(&Local_274, 0) };
	if (__LIB_0__::func_94(Local_15.f_49[0], vVar0, 0) > 6f)
	{
		__LIB_1__::func_283(&(Local_274.f_12[2 /*3*/]), 0);
		if (!__LIB_1__::func_285(&(Local_274.f_12[2 /*3*/]), 7f))
		{
		}
	}
	if (__LIB_0__::func_75(&(Local_274.f_12[2 /*3*/])))
	{
		if (!__LIB_0__::func_51(&Local_274, 16))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_15.f_49[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0]))
					{
						if (!__LIB_2__::func_49(Local_15.f_182[3]))
						{
							Local_15.f_56 = PED::GET_MOUNT(Global_35);
							if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_56, true);
								TASK::TASK_HORSE_ACTION(Local_15.f_56, 4, Local_15.f_49[0], 0);
								if (__LIB_0__::func_94(Local_15.f_49[0], Global_36, 1) > 14f)
								{
									__LIB_2__::func_48(&(Local_15.f_182), 4);
								}
								else
								{
									__LIB_2__::func_48(&(Local_15.f_182), 16);
								}
							}
						}
						if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, true);
						}
						vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_49[0], 0f, 1f, 0f) };
						vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_49[0], 0f, 2f, 0f) };
						FIRE::ADD_EXPLOSION(vVar6, 2, 0.9f, false, false, 1f);
						FIRE::ADD_EXPLOSION(vVar9, 7, 0.9f, false, false, 1f);
						__LIB_2__::func_106(&vVar9, 1, 10, 0);
						FIRE::START_SCRIPT_FIRE(vVar9, 14, 14f, true, 0, -1f, 0);
						FIRE::ADD_EXPLOSION(2462.892f, 1318.5f, 109.6284f, 2, 0.5f, false, false, 1f);
						FIRE::START_SCRIPT_FIRE(2462.892f, 1318.5f, 109.6284f, 12, 12f, true, 0, -1f, 0);
						AUDIO::_0x374F0E716BFCDE82("EXPLOSIONS_SCRIPTED_WAGON_WOOD_BIG", vVar6);
						Local_274.f_119 = MISC::GET_GAME_TIMER();
						Local_274.f_117 = __LIB_0__::func_264(&(Local_274.f_12[2 /*3*/]));
						VEHICLE::DELETE_VEHICLE(&(Local_15.f_49[0]));
					}
				}
				__LIB_0__::func_7(&Local_274, 16);
			}
		}
		else if (__LIB_1__::func_285(&(Local_274.f_12[2 /*3*/]), (Local_274.f_117 + 2f)))
		{
			if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, false);
			}
		}
	}
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 16;
		case 2:
			return 32;
		default:
			break;
	}
	return 0;
}

char* func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HAT_RKR_V1_PED1_HIT";
		case 1:
			return "RE_HAT_RKR_V1_PED2_HIT";
		case 2:
			return "RE_HAT_RKR_V1_PED3_HIT";
		default:
			break;
	}
	return "";
}

char* func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HAT_RKR_V1_PED1_MISS";
		case 1:
			return "RE_HAT_RKR_V1_PED2_MISS";
		case 2:
			return "RE_HAT_RKR_V1_PED3_MISS";
		default:
			break;
	}
	return "";
}

int func_351(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0[8];
	int iVar9;
	int iVar10;
	int iVar11;
	iVar9 = iParam1;
	while (iVar9 <= iParam2)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar9], 0, 0))
		{
			if (!bParam3 || __LIB_2__::func_227(0f, 1, (*uParam0)[iVar9], 1))
			{
				iVar0[iVar10] = iVar9;
				iVar10++;
			}
		}
		iVar9++;
	}
	iVar11 = -1;
	if (iVar10 >= 1)
	{
		iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar10);
	}
	else
	{
		return iVar11;
	}
	return iVar0[iVar11];
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 64;
		case 1:
			return 256;
		case 2:
			return 1024;
		default:
			break;
	}
	return 0;
}

char* func_353(var uParam0, int iParam1)
{
	bool bVar0;
	bVar0 = uParam0->f_227;
	switch (iParam1)
	{
		case 0:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED1_HARASS_A";
			}
			return "RE_HAT_RKR_V1_PED1_HARASS_FEUD_A";
		case 1:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED2_HARASS_A";
			}
			return "RE_HAT_RKR_V1_PED2_HARASS_FEUD";
		case 2:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED3_HARASS_A";
			}
			return "RE_HAT_RKR_V1_PED3_HARASS_FEUD_A";
	}
	return "";
}

char* func_354(var uParam0, int iParam1)
{
	bool bVar0;
	bVar0 = uParam0->f_227;
	switch (iParam1)
	{
		case 0:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED1_HARASS_B";
			}
			return "RE_HAT_RKR_V1_PED1_HARASS_FEUD_B";
		case 1:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED2_HARASS_B";
			}
			return "RE_HAT_RKR_V1_PED2_HARASS_FEUD_B";
		case 2:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED3_HARASS_B";
			}
			return "RE_HAT_RKR_V1_PED3_HARASS_FEUD_B";
		default:
			break;
	}
	return "";
}

void func_356(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	if (Local_274.f_59[iParam0 /*10*/] < 6)
	{
		iVar0 = __LIB_0__::func_153(Local_15[iParam0], 0, 1, 0);
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15[iParam0], Global_35, 3, 4096, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_0__::func_325(&(Local_15.f_22[iParam0]));
			iVar1 = MAP::GET_BLIP_FROM_ENTITY(Local_15[iParam0]);
			__LIB_0__::func_325(&iVar1);
			PED::SET_PED_KEEP_TASK(Local_15[iParam0], true);
			func_492(iParam0, 6);
		}
	}
	Local_274.f_59[iParam0 /*10*/].f_4 = Local_15.f_9[iParam0];
	if (Local_274.f_59[iParam0 /*10*/].f_4 > 110f)
	{
		if (!__LIB_1__::func_472(Local_15[iParam0], 140f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			__LIB_0__::func_490(&(Local_15[iParam0]), 0);
			return;
		}
	}
	if (!Local_274.f_59[iParam0 /*10*/].f_9)
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_15[iParam0], false, true), func_494(&Local_274, iParam0)) < 4f)
		{
			Local_274.f_59[iParam0 /*10*/].f_9 = 1;
		}
	}
	switch (Local_274.f_59[iParam0 /*10*/])
	{
		case 0:
			if (!__LIB_0__::func_75(&(Local_274.f_59[iParam0 /*10*/].f_1)))
			{
				__LIB_2__::func_462(&(Local_274.f_59[iParam0 /*10*/].f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1.5f), 0);
			}
			if (__LIB_1__::func_285(&(Local_274.f_59[iParam0 /*10*/].f_1), 1.5f))
			{
				iVar2 = __LIB_1__::func_372(Local_15[iParam0], 0);
				if (__LIB_0__::func_154(iVar2) && WEAPON::_0x705BE297EEBDB95D(iVar2))
				{
					PED::_0x58F7DB5BD8FA2288(Local_15[iParam0]);
					Local_274.f_59[iParam0 /*10*/].f_6 = { ENTITY::GET_ENTITY_COORDS(Local_15[iParam0], false, false) };
					if (!Local_274.f_59[iParam0 /*10*/].f_9)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15[iParam0], func_494(&Local_274, iParam0), 2f, -1, 4f, 1, 40000f);
					}
					func_492(iParam0, 1);
				}
			}
			break;
		case 1:
			if ((__LIB_0__::func_163(Local_15[iParam0], 518218985) || __LIB_0__::func_163(Local_15[iParam0], 713668775)) || !__LIB_0__::func_163(Local_15[iParam0], 1435919172))
			{
				func_492(iParam0, 3);
			}
			else if (__LIB_0__::func_163(Local_15[iParam0], 780511057))
			{
				if (Local_274.f_59[iParam0 /*10*/].f_4 > (17f + 2f))
				{
					__LIB_1__::func_148(&(Local_274.f_59[iParam0 /*10*/].f_1));
					TASK::CLEAR_PED_TASKS(Local_15[iParam0], true, false);
					__LIB_0__::func_325(&(Local_15.f_22[iParam0]));
					if (!Local_274.f_59[iParam0 /*10*/].f_9)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15[iParam0], func_494(&Local_274, iParam0), 2f, -1, 5f, 1, 40000f);
					}
					else
					{
						func_492(iParam0, 3);
						return;
					}
					func_492(iParam0, 2);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&(Local_274.f_59[iParam0 /*10*/].f_1)) > 3f || !__LIB_0__::func_163(Local_15[iParam0], 1435919172))
			{
				__LIB_1__::func_148(&(Local_274.f_59[iParam0 /*10*/].f_1));
				func_492(iParam0, 3);
			}
			break;
		case 3:
			if (func_497(Local_15[iParam0], &(Local_274.f_59[iParam0 /*10*/])))
			{
				__LIB_2__::func_73(Local_15[iParam0], &(Local_15.f_22[iParam0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				iVar2 = __LIB_1__::func_372(Local_15[iParam0], 0);
				if (__LIB_0__::func_154(iVar2) && WEAPON::_0x705BE297EEBDB95D(iVar2))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iParam0], ENTITY::GET_ENTITY_COORDS(Local_15[iParam0], true, false), 7f, 0, false, 0);
				}
				else
				{
					__LIB_1__::func_733(Local_15[iParam0]);
				}
				TASK::TASK_COMBAT_PED(Local_15[iParam0], Global_35, 0, 0);
				__LIB_1__::func_148(&(Local_274.f_59[iParam0 /*10*/].f_1));
				Local_274.f_59[iParam0 /*10*/].f_5 = MISC::GET_RANDOM_INT_IN_RANGE(4, 9);
				if (Local_274.f_59[iParam0 /*10*/].f_9)
				{
					func_492(iParam0, 5);
				}
				else
				{
					func_492(iParam0, 4);
				}
			}
			else if (Local_274.f_59[iParam0 /*10*/].f_9)
			{
				if (!__LIB_0__::func_163(Local_15[iParam0], 1910705116))
				{
					vVar3 = { func_494(&Local_274, iParam0) };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iParam0], vVar3, 7f, 0, false, 0);
					TASK::TASK_SEEK_COVER_FROM_PED(Local_15[iParam0], Global_35, -1, 1, 0, 1);
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_264(&(Local_274.f_59[iParam0 /*10*/].f_1)) > BUILTIN::TO_FLOAT(Local_274.f_59[iParam0 /*10*/].f_5))
			{
				func_492(iParam0, 1);
			}
			break;
		case 5:
			if (!func_497(Local_15[iParam0], &(Local_274.f_59[iParam0 /*10*/])))
			{
				func_492(iParam0, 3);
			}
			break;
		case 6:
			__LIB_0__::func_325(&(Local_15.f_22[iParam0]));
			break;
	}
}

void func_357()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	if (__LIB_1__::func_285(&(Local_274.f_12[8 /*3*/]), 7f) && __LIB_2__::func_227(0, 1, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_15[iVar0], 0))
				{
				}
				else
				{
					iVar1 = func_129(iVar0);
					iVar2 = func_498(iVar1);
					if (iVar2 == 0)
					{
					}
					else if (!__LIB_2__::func_227(0f, 1, Local_15[iVar0], 1))
					{
						sVar3 = "RE_HAT_RKR_V1_FLEE";
						if (!__LIB_0__::func_239(&Local_274, iVar2))
						{
							if (func_181(Local_15[iVar0], Global_35, sVar3, 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0))
							{
								__LIB_0__::func_240(&Local_274, iVar2);
								return;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_404()
{
	Local_15.f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2492.525f, 1326.504f, 112.8341f, 0f, 0f, 0f, 115f, 115f, 60f, "volRestriction");
	if (__LIB_0__::func_51(&Local_274, 1))
	{
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2457.021f, 1286.51f, 113.0949f, 0f, 0f, 176.103f, 27.99959f, 29.33381f, 21.75352f, "volSlow");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2459.705f, 1302.5f, 113.0949f, 0f, 0f, 176.103f, 23.1424f, 31.78185f, 21.75352f, "volSlowest");
		Local_15.f_182[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2460.924f, 1311.921f, 114.766f, 0f, 0f, 169.587f, 25.40157f, 13.78471f, 18.39195f, "volHalt");
		Local_274.f_40[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[1], 2400.765f, 1377.892f, 114.9305f, 0f, 0f, 1.714838f, 39.24844f, 157.5462f, 70f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[1], 2587.63f, 1276.317f, 142.0203f, 0f, 0f, 0f, 182.7343f, 157.5462f, 70f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[1], 2381.018f, 1410.74f, 114.9305f, 0f, 0f, 37.90908f, 39.24844f, 157.5462f, 70f);
		Local_274.f_40[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[2], 2428.901f, 1298.858f, 113.0949f, 0f, 0f, 176.103f, 31.07556f, 29.33381f, 21.75352f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[2], 2486.936f, 1295.453f, 113.0949f, 0f, 0f, 178.8907f, 47.45874f, 29.33381f, 40.8321f);
	}
	else
	{
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2473.756f, 1350.215f, 113.095f, 0f, 0f, -17.68838f, 27.99959f, 45.84734f, 21.75352f, "volSlow");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2467.397f, 1335.515f, 113.095f, 0f, 0f, -17.68835f, 23.1424f, 19.208f, 21.754f, "volSlowest");
		Local_15.f_182[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2464.553f, 1325.918f, 114.766f, 0f, 0f, -17.68835f, 25.40157f, 13.78471f, 18.39195f, "volHalt");
		Local_274.f_40[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[1], 2514.571f, 1343.123f, 105.17f, 0f, 0f, 72.00601f, 50.78923f, 24.96425f, 88.18785f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[1], 2514.04f, 1309.079f, 105.17f, 0f, 0f, -16.98194f, 73.95107f, 41.84537f, 88.18785f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[1], 2356.076f, 1384.272f, 114.9305f, 0f, 0f, -15.26062f, 182.7343f, 69.26556f, 70f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[1], 2554.055f, 1308.327f, 105.17f, 0f, 0f, -40.71945f, 146.7324f, 41.84537f, 88.18785f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[1], 2562.063f, 1279.651f, 105.17f, 0f, 0f, 0.487701f, 178.0995f, 41.84537f, 88.18785f);
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_40[1], 2513.121f, 1370.857f, 107.9369f, 0f, 0f, 0f, 17.82559f, 16.58573f, 20.20379f);
		Local_274.f_40[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[2], 2452.498f, 1352.808f, 113.0949f, 0f, 0f, -15.32807f, 27.99959f, 49.82644f, 21.75352f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_40[2], 2497.728f, 1340.411f, 113.0949f, 0f, 0f, -18.58124f, 27.99959f, 49.82644f, 21.75352f);
	}
}

void func_415(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	char* sVar0;
	sVar0 = func_482(uParam0, iParam1);
	if (bParam3)
	{
		uParam0->f_57[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sParam2, false, true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_57[iParam1], true, false))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_57[iParam1]);
}

bool func_416(var uParam0, int iParam1)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_57[iParam1]))
	{
		return false;
	}
	sVar0 = func_482(uParam0, iParam1);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_57[iParam1], true, false))
	{
		return false;
	}
	return true;
}

void func_417(var uParam0, int iParam1, char* sParam2)
{
	__LIB_2__::func_544(uParam0->f_57[iParam1], sParam2, func_482(uParam0, iParam1));
}

bool func_418(var uParam0, int iParam1, char* sParam2)
{
	if (__LIB_2__::func_545(uParam0->f_57[iParam1], sParam2, func_482(uParam0, iParam1)))
	{
		return true;
	}
	return false;
}

float func_419(int iParam0, int iParam1)
{
	return func_516(iParam0, iParam1);
}

Vector3 func_429(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2463.034f, 1328.964f, 109.1976f;
				case 1:
					return 2472.084f, 1306.524f, 112.2193f;
				case 2:
					return 2471.329f, 1322.675f, 108.8796f;
				case 3:
					return 2456.952f, 1317.325f, 110.8401f;
				case 4:
					return 2501.48f, 1302.963f, 116.2009f;
				case 5:
					return 2478.368f, 1341.78f, 107.2861f;
				case 6:
					return 2507.977f, 1300.69f, 118.3496f;
				case 7:
					return 2508.309f, 1304.136f, 117.4963f;
				case 8:
					return 2478.375f, 1331.497f, 108.0165f;
				case 9:
					return 2473.911f, 1311.052f, 110.9773f;
				case 10:
					return 2456.424f, 1315.174f, 110.9285f;
				case 11:
					return 2461.717f, 1295.821f, 110.3482f;
				case 12:
					return 2462.589f, 1317.774f, 109.2215f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2455.27f, 1306.802f, 110.5666f;
				case 1:
					return 2467.884f, 1302.952f, 112.2522f;
				case 2:
					return 2447.373f, 1315.445f, 112.7474f;
				case 3:
					return 2456.281f, 1314.79f, 110.9452f;
				case 4:
					return 2501.65f, 1303.072f, 116.1943f;
				case 5:
					return 2463.151f, 1289.377f, 110.9123f;
				case 6:
					return 2508.003f, 1300.712f, 118.3468f;
				case 7:
					return 2508.38f, 1304.043f, 117.5046f;
				case 8:
					return 2472.829f, 1306.876f, 112.1792f;
				case 9:
					return 2455.892f, 1312.726f, 110.9843f;
				case 10:
					return 2471.196f, 1298.955f, 113.766f;
				case 11:
					return 2474.535f, 1336.529f, 107.6026f;
				case 12:
					return 2462.589f, 1317.774f, 109.2215f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2474.994f, 1304.45f, 113.0684f;
				case 1:
					return 2487.254f, 1314.661f, 111.1622f;
				case 2:
					return 2504.381f, 1306.983f, 116.5323f;
				case 3:
					return 2510.563f, 1282.958f, 127.5484f;
				case 4:
					return 2507.318f, 1285.889f, 125.3397f;
				case 5:
					return 2517.399f, 1285.432f, 127.4426f;
				case 6:
					return 2526.859f, 1286.896f, 129.0327f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2475.309f, 1314.214f, 110.1211f;
				case 1:
					return 2496.814f, 1286.439f, 122.367f;
				case 2:
					return 2490.203f, 1287.141f, 121.1662f;
				case 3:
					return 2501.823f, 1293.296f, 120.2847f;
				case 4:
					return 2510.48f, 1282.907f, 127.5636f;
				case 5:
					return 2494.243f, 1291.316f, 119.5412f;
				case 6:
					return 2479.11f, 1295.791f, 116.398f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

char* func_482(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return "scenario@randomevent@harassment_attack@harass_attack_front";
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "scenario@randomevent@harassment_attack@harass_attack_front";
			default:
				break;
		}
	}
	return "INVALID ANIM SCENE";
}

void func_492(int iParam0, int iParam1)
{
	Local_274.f_59[iParam0 /*10*/] = iParam1;
}

Vector3 func_494(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(2, 2);
			case 1:
				return func_292(2, 3);
			case 2:
				return func_292(2, 5);
			case 3:
				return func_292(2, 4);
			case 4:
				return func_292(2, 6);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(3, 1);
			case 1:
				return func_292(3, 2);
			case 2:
				return func_292(3, 3);
			case 3:
				return func_292(3, 4);
			case 4:
				return func_292(3, 5);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

bool func_497(int iParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	fVar0 = __LIB_0__::func_94(iParam0, uParam1->f_6, 1);
	if (__LIB_2__::func_262(Global_35, iParam0, &(Local_15.f_152)))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		return true;
	}
	if (fVar0 < 12f)
	{
		return false;
	}
	iVar1 = __LIB_1__::func_372(iParam0, 0);
	if (__LIB_0__::func_154(iVar1) && WEAPON::_0x705BE297EEBDB95D(iVar1))
	{
		if (uParam1->f_9)
		{
			if (uParam1->f_4 < 40f)
			{
				return true;
			}
		}
		else if (uParam1->f_4 < 17f)
		{
			return true;
		}
	}
	else if (uParam1->f_4 < 6f)
	{
		return true;
	}
	return false;
}

int func_498(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 131072;
		case 1:
			return 262144;
		case 2:
			return 524288;
		default:
			break;
	}
	return 0;
}

float func_516(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 178.5289f;
				case 1:
					return 102.61f;
				case 2:
					return 156.79f;
				case 3:
					return 237.74f;
				case 4:
					return 68.9358f;
				case 5:
					return 167.9548f;
				case 6:
					return 77.4126f;
				case 7:
					return 79.0647f;
				case 8:
					return 140.9829f;
				case 9:
					return 88.9829f;
				case 10:
					return 266.2154f;
				case 11:
					return 180.899f;
				case 12:
					return 292.3064f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -43.4711f;
				case 1:
					return 6.61f;
				case 2:
					return 294.79f;
				case 3:
					return 237.74f;
				case 4:
					return 69.25f;
				case 5:
					return 13.6581f;
				case 6:
					return 78.6927f;
				case 7:
					return 74.6927f;
				case 8:
					return 28.6927f;
				case 9:
					return 254.2154f;
				case 10:
					return 4.7479f;
				case 11:
					return 332.899f;
				case 12:
					return 292.3064f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 92.4426f;
				case 1:
					return 81.7418f;
				case 2:
					return 63.2589f;
				case 3:
					return 41.2589f;
				case 4:
					return 27.2589f;
				case 5:
					return 21.2589f;
				case 6:
					return 19.2589f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 16.4809f;
				case 1:
					return 14.3403f;
				case 2:
					return 24.3403f;
				case 3:
					return 28.3403f;
				case 4:
					return 28.3403f;
				case 5:
					return 30.3403f;
				case 6:
					return 13.1274f;
			}
			break;
	}
	return 0f;
}

