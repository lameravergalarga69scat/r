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
	struct<35> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_309 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_309 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_309, 961, 0);
		if (bLocal_309)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (__LIB_17__::func_803(&ScriptParam_0))
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
					if (func_12())
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
						__LIB_2__::func_267(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						__LIB_2__::func_428(&Local_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						__LIB_2__::func_147(&Local_15, 16384);
						__LIB_2__::func_146(&Local_15, 10);
					}
					break;
				case 10:
					func_29();
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
						__LIB_2__::func_235(&Local_15);
						__LIB_2__::func_146(&Local_15, 11);
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
						__LIB_2__::func_146(&Local_15, 12);
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
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_15[iVar0]) == joaat("G_M_O_UNIEXCONFEDS_01"))
			{
				__LIB_2__::func_133(Local_15[iVar0], "0174_G_M_O_UniExConfeds_01_WHITE_01", 0);
			}
			else
			{
				__LIB_2__::func_133(Local_15[iVar0], "1026_G_M_Y_UniExConfeds_01_WHITE_04", 0);
			}
			switch (iVar0)
			{
				case 0:
				case 1:
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 4:
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_2__::func_597(&(Local_15[4]), &(Local_15.f_49[0]), -1, 1);
					break;
				case 5:
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					PED::_0xAE6004120C18DF97(Local_15[iVar0], 0, 0);
					__LIB_2__::func_597(&(Local_15[5]), &(Local_15.f_49[0]), func_128(Local_15.f_49[0]), 1);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_15[iVar0], 2);
					break;
				case 2:
				case 3:
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					break;
			}
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_15[iVar0], 146, true);
			func_130(&Local_15, iVar0);
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(Local_15.f_40[0], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_40[0], 312, true);
		__LIB_2__::func_28(&Local_15, 0, 64);
	}
	if (__LIB_2__::func_1(Local_15.f_40[1], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_40[1], 312, true);
		__LIB_2__::func_28(&Local_15, 1, 64);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0]))
	{
		func_132();
	}
	func_133(0);
	return true;
}

bool func_23()
{
	__LIB_2__::func_436(&Local_15, 0);
	if (Local_274 < 1)
	{
		if (func_137())
		{
			func_138();
			Local_274 = 4;
		}
	}
	switch (Local_274)
	{
		case 0:
			if (func_139())
			{
				__LIB_2__::func_442(&Local_15, 1);
				__LIB_2__::func_500(&Local_15, 1);
				Local_274 = 1;
			}
			else if (func_140())
			{
				__LIB_2__::func_224(Local_15.f_151, 1);
				__LIB_0__::func_7(&(Local_274.f_5), 256);
				Local_274 = 1;
			}
			else if (func_143())
			{
				if (func_144())
				{
					if (!__LIB_0__::func_51(&(Local_274.f_5), 4096))
					{
						__LIB_0__::func_7(&(Local_274.f_5), 4096);
					}
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_146(&Local_15, 13);
				}
			}
			break;
		case 1:
			__LIB_1__::func_148(&(Local_274.f_16[0 /*3*/]));
			Local_274 = 2;
			break;
		case 2:
			CAM::_0xC252C0CC969AF79A(1);
			if (func_147())
			{
				Local_274 = 3;
			}
			break;
		case 3:
			func_148();
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			__LIB_2__::func_430(0, 7);
			Local_274 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_29()
{
	int iVar0;
	__LIB_1__::func_283(&(Local_15.f_247), 0);
	if (__LIB_1__::func_285(&(Local_15.f_247), 5f))
	{
		__LIB_2__::func_423(&Local_15, 0);
	}
	if (__LIB_1__::func_285(&(Local_15.f_247), 3f))
	{
		func_159(&Local_15);
	}
	__LIB_2__::func_332();
	if (!__LIB_2__::func_4(&Local_15, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				__LIB_2__::func_260(&Local_15, 1.1f);
			}
			else
			{
				__LIB_2__::func_260(&Local_15, 1.2f);
			}
			__LIB_2__::func_147(&Local_15, 4194304);
		}
		if (__LIB_2__::func_4(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_260(&Local_15, 1f);
				__LIB_2__::func_147(&Local_15, 8388608);
			}
		}
	}
}

bool func_31()
{
	Local_274.f_33 = __LIB_2__::func_374(&Local_15);
	func_162();
	func_163();
	if (Local_274.f_33 >= 2)
	{
		CAM::_0xC252C0CC969AF79A(1);
	}
	if (!__LIB_1__::func_285(&(Local_274.f_16[2 /*3*/]), 5f))
	{
		__LIB_2__::func_436(&Local_15, 0);
	}
	else if (!__LIB_0__::func_266(Global_35, Local_15.f_209, 20f, 1, 1))
	{
		if (!__LIB_0__::func_51(&(Local_274.f_5), 262144))
		{
			func_165(&Local_15, 0, 0);
			__LIB_0__::func_7(&(Local_274.f_5), 262144);
		}
		if (!__LIB_0__::func_51(&(Local_274.f_5), 524288))
		{
			func_165(&Local_15, 1, 1);
			__LIB_0__::func_7(&(Local_274.f_5), 524288);
		}
		if (!__LIB_0__::func_51(&(Local_274.f_5), 1048576))
		{
			func_133(1);
		}
	}
	switch (Local_274.f_1)
	{
		case 0:
			__LIB_0__::func_11();
			__LIB_1__::func_148(&(Local_274.f_16[0 /*3*/]));
			__LIB_1__::func_148(&(Local_274.f_16[2 /*3*/]));
			Local_274.f_1 = 1;
			break;
		case 1:
			func_167();
			func_168();
			func_169();
			if (!__LIB_0__::func_51(&(Local_274.f_5), 2048))
			{
				if (Local_274.f_33 <= 2 || !__LIB_2__::func_1(Local_15[5], 0, 0))
				{
					if (__LIB_2__::func_1(Local_15[4], 0, 0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_15[4], false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_15[4], 2);
						PED::SET_PED_COMBAT_RANGE(Local_15[4], 0);
					}
					if (__LIB_2__::func_1(Local_15[5], 0, 0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_15[5], false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_15[5], 2);
						PED::SET_PED_COMBAT_RANGE(Local_15[5], 0);
					}
					__LIB_0__::func_7(&(Local_274.f_5), 2048);
					Local_274.f_1 = 2;
				}
			}
			break;
		case 2:
			func_167();
			func_168();
			func_169();
			if (Local_274.f_33 <= 0)
			{
				Local_274.f_1 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_49()
{
	char* sVar0;
	char* sVar1;
	sVar0 = func_189(&Local_274);
	sVar1 = func_190(&Local_274);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sVar0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sVar1);
	}
	if (__LIB_2__::func_1(Local_15[5], 0, 0))
	{
		PED::_0xAE6004120C18DF97(Local_15[5], 0, 1);
	}
	VEHICLE::_0xC399CC89FBA05DA0(Local_15.f_49[0], 1);
	if (!__LIB_2__::func_4(&Local_15, 16384))
	{
		if (__LIB_0__::func_51(&(Local_274.f_5), 4096))
		{
			func_191();
		}
	}
}

bool func_83()
{
	switch (Local_15.f_221)
	{
		case 0:
			Local_274.f_6 = 1;
			break;
		case 1:
			Local_274.f_6 = 0;
			break;
		case 2:
			Local_274.f_6 = 2;
			break;
		default:
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221), false) <= MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221), false))
	{
		__LIB_0__::func_7(&(Local_274.f_5), 4);
	}
	Local_15.f_215 = 6;
	Local_15.f_217 = 1;
	Local_15.f_218 = 0;
	Local_15.f_216 = 2;
	Local_15.f_181 = 2;
	__LIB_2__::func_152(&Local_15, 5, 1);
	__LIB_2__::func_147(&Local_15, 131072);
	func_239();
	__LIB_2__::func_41(&(Local_15.f_182), 9, 2.5f, 1.25f, 1.75f, 2.001f, 0);
	return true;
}

bool func_95()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	switch (Local_274.f_4)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("G_M_O_UNIEXCONFEDS_01"), false);
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_UNIEXCONFEDS_01"), false);
			STREAMING::REQUEST_MODEL(joaat("GATCHUCK_2"), false);
			STREAMING::REQUEST_MODEL(joaat("GATLINGMAXIM02"), false);
			sVar0 = func_189(&Local_274);
			sVar1 = func_190(&Local_274);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				TASK::REQUEST_WAYPOINT_RECORDING(sVar0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				TASK::REQUEST_WAYPOINT_RECORDING(sVar1);
			}
			Local_274.f_4 = 1;
			break;
		case 1:
			iVar2 = 1;
			if (((!STREAMING::HAS_MODEL_LOADED(joaat("G_M_O_UNIEXCONFEDS_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_UNIEXCONFEDS_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("GATCHUCK_2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("GATLINGMAXIM02")))
			{
				iVar2 = 0;
			}
			if (!PED::_0x5E420FF293EE5472())
			{
				iVar2 = 0;
			}
			sVar0 = func_189(&Local_274);
			sVar1 = func_190(&Local_274);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar0))
				{
					iVar2 = 0;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar1))
				{
					iVar2 = 0;
				}
			}
			return iVar2;
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
	int iVar0;
	iVar0 = iParam0;
	return func_251(&Local_274, iVar0);
}

int func_98(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_252(&Local_274, iVar0);
}

Vector3 func_99(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_253(&Local_274, iVar0);
}

float func_100(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_254(&Local_274, iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_256(&Local_274, iVar0);
}

float func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_257(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_260(&Local_274, iVar0);
}

float func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_261(&Local_274, iVar0);
}

int func_128(var uParam0)
{
	int iVar0;
	iVar0 = -2;
	VEHICLE::_0xFF5791B7639C2A46(uParam0, &iVar0);
	return iVar0;
}

void func_130(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*iParam0)[iParam1], 0, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 0);
	PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
	PED::SET_PED_FIRING_PATTERN((*iParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::_0x20E54854DEF6A54A((*iParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
	PED::SET_PED_ACCURACY((*iParam0)[iParam1], 80);
	PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 130);
}

void func_132()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3[2];
	float fVar10;
	if (ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0]))
	{
		return;
	}
	iVar0 = 6;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (iVar1 != 0 && VEHICLE::DOES_EXTRA_EXIST(Local_15.f_49[0], iVar1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(Local_15.f_49[0], iVar1, true);
		}
		iVar1++;
	}
	sVar2 = func_189(&Local_274);
	TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 0, &(vVar3[0 /*3*/]));
	TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 1, &(vVar3[1 /*3*/]));
	__LIB_2__::func_106(&(vVar3[0 /*3*/]), 1, 10, 0);
	fVar10 = __LIB_0__::func_152(vVar3[0 /*3*/], vVar3[1 /*3*/], 1);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15.f_49[0], vVar3[0 /*3*/], fVar10, true, false, true);
}

void func_133(bool bParam0)
{
	if (!bParam0)
	{
	}
	func_268(bParam0);
}

bool func_137()
{
	if (func_278(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_32), 0, 5, 1))
	{
		return true;
	}
	if (__LIB_0__::func_51(&(Local_274.f_5), 256))
	{
		return true;
	}
	return false;
}

void func_138()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (func_279(iVar0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0.1f, 0.5f, 1, 1);
				if (!bVar2)
				{
					if (func_280(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_WAT_BYPASS", 70f, 1744022339, 0))
					{
						bVar2 = true;
					}
				}
				PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
				__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			}
			else
			{
				__LIB_2__::func_426(&(Local_15[iVar0]));
			}
		}
		iVar0++;
	}
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_139()
{
	vector3 vVar0;
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_11[0], vVar0) || VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_11[0], Global_36))
	{
		return true;
	}
	return false;
}

bool func_140()
{
	if (__LIB_1__::func_205(Global_35, Local_274.f_11[2], 1, 0))
	{
		return true;
	}
	return false;
}

bool func_143()
{
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_11[1], Global_36))
	{
		__LIB_0__::func_11(&Local_15, 7);
		return true;
	}
	if (func_287(&Local_15))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_11[3], Global_36))
		{
			if (__LIB_2__::func_437(&Local_15, 60f, Local_274.f_11[3]) || __LIB_2__::func_300(&Local_15, 60f, Local_274.f_11[3]))
			{
				__LIB_0__::func_11(&Local_15, 5);
				return true;
			}
		}
	}
	if (__LIB_19__::func_90(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_144()
{
	if (__LIB_0__::func_51(&(Local_274.f_5), 4096))
	{
		return true;
	}
	return true;
}

bool func_147()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	switch (Local_274.f_2)
	{
		case 0:
			if (__LIB_1__::func_285(&(Local_274.f_16[0 /*3*/]), 0.1f))
			{
				func_292();
				__LIB_1__::func_148(&(Local_274.f_16[0 /*3*/]));
				func_280(&Local_274, Local_15[0], Global_35, "AMBUSH_WAT_QUICK", 1120403456 /* Float: 100f */, 1744022339, 0);
				Local_274.f_2 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_16[0 /*3*/]), 0.5f) || __LIB_0__::func_393(Global_35, Local_15.f_182[1], 0, 1))
			{
				__LIB_1__::func_148(&(Local_274.f_16[0 /*3*/]));
				if (__LIB_2__::func_1(Local_15[0], 0, 0))
				{
					vVar1 = { func_294(&Local_274, 0) };
					fVar4 = func_295(&Local_274, 0);
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[0], vVar1, 1.5f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[0], 37, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 3f, 0, 0.5f, 1f, 1, 2112, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
				}
				if (__LIB_2__::func_1(Local_15[1], 0, 1))
				{
					vVar1 = { func_294(&Local_274, 1) };
					fVar4 = func_295(&Local_274, 1);
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[1], false, 0, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[1], vVar1, 1.5f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[1], 37, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 3f, 0, 0.5f, 1f, 1, 2112, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					__LIB_1__::func_474(Local_15[1], &iVar0, 0, 0, 1, 1);
					__LIB_0__::func_7(&(Local_274.f_5), 128);
				}
				if (func_279(2))
				{
					vVar1 = { func_294(&Local_274, 2) };
					fVar4 = func_295(&Local_274, 2);
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[2], false, 0, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[2], vVar1, 1.5f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[2], 51, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 3f, 0, 0.5f, 1f, 1, 2112, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					__LIB_1__::func_474(Local_15[2], &iVar0, 0, 0, 1, 1);
				}
				else
				{
					__LIB_2__::func_426(&(Local_15[2]));
				}
				if (func_279(3))
				{
					vVar1 = { func_294(&Local_274, 3) };
					fVar4 = func_295(&Local_274, 3);
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[3], false, 0, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[3], vVar1, 1.5f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[3], 51, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 3f, 0, 0.5f, 1f, 1, 2112, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					__LIB_1__::func_474(Local_15[3], &iVar0, 0, 0, 1, 1);
				}
				else
				{
					__LIB_2__::func_426(&(Local_15[3]));
				}
				Local_274.f_2 = 2;
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_16[0 /*3*/]), 5f) || __LIB_0__::func_393(Global_35, Local_15.f_182[1], 0, 1))
			{
				__LIB_2__::func_73(Local_15[5], &(Local_15.f_22[5]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				iVar5 = 0;
				while (iVar5 <= 4)
				{
					__LIB_2__::func_73(Local_15[iVar5], &(Local_15.f_22[iVar5]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
					iVar5++;
				}
				if (__LIB_2__::func_1(Local_15[0], 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
				}
				if (__LIB_2__::func_1(Local_15[1], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_15[1], &iVar0, 0, 0, 1, 1);
				}
				if (__LIB_2__::func_1(Local_15[2], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_15[2], &iVar0, 0, 0, 1, 1);
				}
				if (__LIB_2__::func_1(Local_15[3], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_15[3], &iVar0, 0, 0, 1, 1);
				}
				Local_274.f_2 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_148()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (iVar0 == 1 && __LIB_0__::func_51(&(Local_274.f_5), 128))
			{
			}
			else
			{
				TASK::TASK_COMBAT_PED(Local_15[iVar0], Global_35, 0, 0);
			}
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		iVar0++;
	}
}

void func_159(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 0))
		{
			if (!__LIB_2__::func_25(uParam0, iVar0, 512))
			{
				if (PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0], false);
					__LIB_1__::func_733((*uParam0)[iVar0]);
					__LIB_2__::func_152(uParam0, iVar0, 512);
				}
			}
			else if (!PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
			{
				__LIB_2__::func_156(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_162()
{
	bool bVar0;
	int iVar1;
	if (__LIB_0__::func_51(&(Local_274.f_5), 8))
	{
		if (!__LIB_0__::func_51(&(Local_274.f_5), 2097152))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_15.f_49[0]) <= 0.1f)
			{
				VEHICLE::_0x7C06330BFDDA182E(Local_15.f_49[0]);
				__LIB_0__::func_7(&(Local_274.f_5), 2097152);
			}
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0]))
	{
		return;
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_15.f_49[0], 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_15.f_49[0]) > 0f)
		{
			VEHICLE::BRING_VEHICLE_TO_HALT(Local_15.f_49[0], 1f, -1, false);
		}
		if (__LIB_2__::func_1(Local_15[4], 0, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[4], &iVar1, 0, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[4], ENTITY::GET_ENTITY_COORDS(Local_15[4], true, false), 10f, 0, 0, 0);
			__LIB_2__::func_73(Local_15[4], &(Local_15.f_22[4]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
		func_314(1);
		__LIB_2__::func_73(Local_15[5], &(Local_15.f_22[5]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		__LIB_0__::func_7(&(Local_274.f_5), 8);
	}
}

void func_163()
{
	int iVar0;
	if (!__LIB_2__::func_1(Local_15[5], 0, 1))
	{
		return;
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (!__LIB_0__::func_51(&(Local_274.f_5), 131072))
			{
				iVar0 = 0;
				while (iVar0 <= 5)
				{
					if (iVar0 == 5)
					{
					}
					else if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
					{
					}
					else if (Local_15[iVar0] != Local_274.f_34 || __LIB_2__::func_227(0f, 1, Local_274.f_34, 1))
					{
						if (func_280(&Local_274, Local_15[iVar0], Local_15[5], "AMBUSH_WAT_MAXIM", 1120403456 /* Float: 100f */, 1744022339, 0))
						{
							__LIB_0__::func_7(&(Local_274.f_5), 131072);
						}
						else
						{
							iVar0++;
						}
						if (func_316())
						{
							func_317(5, 1);
						}
						if (!__LIB_0__::func_51(&(Local_274.f_5), 8))
						{
							return;
						}
						__LIB_1__::func_148(&(Local_274.f_16[1 /*3*/]));
						Local_274.f_3 = 1;
						Jump @511; //curOff = 268
						if (__LIB_1__::func_285(&(Local_274.f_16[1 /*3*/]), 1f))
						{
							__LIB_2__::func_427(&Local_15);
							func_317(5, 1);
							__LIB_1__::func_148(&(Local_274.f_16[1 /*3*/]));
							Local_274.f_3 = 2;
						}
						Jump @511; //curOff = 318
						if (__LIB_1__::func_285(&(Local_274.f_16[1 /*3*/]), 5f))
						{
							Local_274.f_3 = 3;
						}
						Jump @511; //curOff = 343
						if (PED::IS_PED_IN_VEHICLE(Local_15[5], Local_15.f_49[0], false))
						{
							if (!__LIB_0__::func_51(&(Local_274.f_5), 16))
							{
								if (__LIB_1__::func_992(Local_15[5], Global_36, 1) < 144f)
								{
									PED::SET_PED_ACCURACY(Local_15[5], 80);
									__LIB_0__::func_7(&(Local_274.f_5), 16);
								}
							}
							else if (__LIB_1__::func_992(Local_15[5], Global_36, 1) > 196f)
							{
								PED::SET_PED_ACCURACY(Local_15[5], 50);
								__LIB_0__::func_8(&(Local_274.f_5), 16);
							}
						}
						if (func_320())
						{
							Local_274.f_3 = 4;
						}
						Jump @511; //curOff = 489
						if (func_321())
						{
							Local_274.f_3 = 3;
						}
					}
				}
			}
			default:
				break;
	}
}

void func_165(var uParam0, int iParam1, int iParam2)
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
	if (iParam1 < 0 && iParam1 >= uParam0->f_215)
	{
		return;
	}
	if (iParam2 >= uParam0->f_216)
	{
		return;
	}
	if (!__LIB_2__::func_1((*uParam0)[iParam1], 0, 1))
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT((*uParam0)[iParam1]))
	{
		return;
	}
	if (iParam2 >= 0)
	{
		iVar0 = uParam0->f_40[iParam2];
	}
	else
	{
		uVar6 = 1;
		iVar8 = __LIB_2__::func_728(&uVar1, &uVar6, 4, ENTITY::GET_ENTITY_COORDS((*uParam0)[iParam1], true, false), 10f, 0, 1, 1, joaat("ANIMAL_HORSE"), 1, 0, -1082130432 /* Float: -1f */, 0, 0);
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			if (__LIB_0__::func_272(uVar1[iVar9], 0))
			{
				fVar13 = __LIB_0__::func_94(uVar1[iVar9], ENTITY::GET_ENTITY_COORDS((*uParam0)[iParam1], true, false), 1);
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
	__LIB_1__::func_474((*uParam0)[iParam1], &iVar14, 0, 0, 1, 1);
	PED::_0x1854217C640B39EC((*uParam0)[iParam1], Global_35, 0f, 0f, 0f, 15f, 0, 0);
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_22[iParam1]))
	{
		__LIB_2__::func_73((*uParam0)[iParam1], &(uParam0->f_22[iParam1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
}

void func_167()
{
	int iVar0;
	if (!__LIB_0__::func_51(&(Local_274.f_5), 8192))
	{
		if (!__LIB_2__::func_1(Local_15[5], 0, 0))
		{
			__LIB_1__::func_283(&(Local_274.f_16[3 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_16[3 /*3*/]), 1.5f))
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					iVar0 = __LIB_2__::func_439(&Local_15, 0, (Local_15.f_215 - 1), 1);
					if (iVar0 < 0)
					{
					}
					else if (func_280(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_WAT_MAXIM_FAIL", 1120403456 /* Float: 100f */, 1744022339, 0))
					{
						__LIB_0__::func_7(&(Local_274.f_5), 8192);
					}
				}
			}
		}
	}
}

void func_168()
{
	int iVar0;
	if (!__LIB_0__::func_51(&(Local_274.f_5), 16384))
	{
		if (PED::IS_PED_IN_VEHICLE(Global_35, Local_15.f_49[0], true))
		{
			__LIB_1__::func_283(&(Local_274.f_16[4 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_16[4 /*3*/]), 1.5f))
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					iVar0 = __LIB_2__::func_439(&Local_15, 0, (Local_15.f_215 - 1), 1);
					if (iVar0 < 0)
					{
						__LIB_0__::func_7(&(Local_274.f_5), 16384);
					}
					else if (func_280(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_WAT_MAXIM_TAKEOVER", 1120403456 /* Float: 100f */, 1744022339, 0))
					{
						__LIB_0__::func_7(&(Local_274.f_5), 16384);
					}
				}
			}
		}
	}
}

void func_169()
{
	int iVar0;
	if (!__LIB_0__::func_51(&(Local_274.f_5), 131072))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(Local_274.f_5), 65536))
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			iVar0 = __LIB_2__::func_439(&Local_15, 0, (Local_15.f_215 - 1), 1);
			if (iVar0 < 0)
			{
			}
			else if (func_280(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_WAT_QUICK_HIDEOUT", 1120403456 /* Float: 100f */, 1744022339, 0))
			{
				__LIB_0__::func_7(&(Local_274.f_5), 65536);
			}
		}
	}
	else if (!__LIB_0__::func_51(&(Local_274.f_5), 32768))
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			iVar0 = __LIB_2__::func_439(&Local_15, 0, (Local_15.f_215 - 1), 1);
			if (iVar0 < 0)
			{
			}
			else if (func_280(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_WAT_QUICK_MISSION", 1120403456 /* Float: 100f */, 1744022339, 0))
			{
				__LIB_0__::func_7(&(Local_274.f_5), 32768);
			}
		}
	}
}

char* func_189(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				return "gaewt_cat_front";
			}
			else
			{
				return "gaewt_cat_back";
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				return "gaewt_shb_front";
			}
			else
			{
				return "gaewt_shb_back";
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				return "gaewt_std_front";
			}
			else
			{
				return "gaewt_std_back";
			}
			break;
	}
	return "";
}

char* func_190(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				return "gaewt_cat_front";
			}
			else
			{
				return "gaewt_cat_back";
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				return "gaewt_shb_front_b";
			}
			else
			{
				return "gaewt_shb_back";
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				return "gaewt_std_front";
			}
			else
			{
				return "gaewt_std_back";
			}
			break;
	}
	return "";
}

void func_191()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	if (__LIB_2__::func_1(Local_15[5], 0, 1))
	{
		__LIB_2__::func_426(&(Local_15[5]));
	}
	if (!__LIB_2__::func_193(&Local_15, Local_15.f_49[0]))
	{
		VEHICLE::_0xC399CC89FBA05DA0(Local_15.f_49[0], 1);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (__LIB_2__::func_1(Local_15.f_40[iVar1], 0, 0))
		{
			__LIB_3__::func_475(Local_15[iVar1], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 27, false);
			if (__LIB_0__::func_154(__LIB_1__::func_372(Local_15[iVar0], 0)))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_15[iVar0], joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Local_15[iVar0], 1, 1, 0, 0);
			}
			__LIB_3__::func_475(Local_15[iVar0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			switch (iVar0)
			{
				case 4:
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15[iVar0], 0f, 10f, 0f) };
					__LIB_2__::func_106(&vVar5, 1, 10, 0);
					if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar5, &vVar2, 1, 3f, 0f))
					{
						vVar2 = { vVar5 };
					}
					Local_15.f_118[4 /*4*/].f_1 = { vVar2 };
					break;
			}
		}
		iVar0++;
	}
}

void func_239()
{
	switch (Local_274.f_6)
	{
		case 0:
			func_371();
			break;
		case 1:
			func_372();
			break;
		case 2:
			func_373();
			break;
	}
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86100600;
		case 1:
			return 397438869;
		case 2:
			return 1265247797;
		case 3:
			return 967017128;
		case 4:
			return 759793292;
		case 5:
			return -1530007604;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

int func_251(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return joaat("G_M_O_UNIEXCONFEDS_01");
		case 1:
			return joaat("G_M_O_UNIEXCONFEDS_01");
		case 4:
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		case 5:
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		case 2:
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		case 3:
			return joaat("G_M_Y_UNIEXCONFEDS_01");
		default:
			break;
	}
	return 0;
}

int func_252(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return joaat("GATCHUCK_2");
		case 1:
			return joaat("GATLINGMAXIM02");
		default:
			break;
	}
	return 0;
}

Vector3 func_253(int iParam0, int iParam1)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(0, 4);
					case 1:
						return func_383(0, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(1, 4);
					case 1:
						return func_383(1, 5);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(2, 4);
					case 1:
						return func_383(2, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(3, 4);
					case 1:
						return func_383(3, 5);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(4, 4);
					case 1:
						return func_383(4, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(5, 4);
					case 1:
						return func_383(5, 5);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_254(int iParam0, int iParam1)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(0, 4);
					case 1:
						return func_384(0, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(1, 4);
					case 1:
						return func_384(1, 5);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(2, 4);
					case 1:
						return func_384(2, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(3, 4);
					case 1:
						return func_384(3, 5);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(4, 4);
					case 1:
						return func_384(4, 5);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(5, 4);
					case 1:
						return func_384(5, 5);
					default:
						break;
				}
			}
			break;
	}
	return 0f;
}

Vector3 func_256(int iParam0, int iParam1)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(0, 13);
					case 1:
						return func_383(0, 14);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(1, 13);
					case 1:
						return func_383(1, 14);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(2, 13);
					case 1:
						return func_383(2, 14);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(3, 13);
					case 1:
						return func_383(3, 14);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(4, 13);
					case 1:
						return func_383(4, 14);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(5, 13);
					case 1:
						return func_383(5, 14);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_257(int iParam0, int iParam1)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(0, 13);
					case 1:
						return func_384(0, 14);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(1, 13);
					case 1:
						return func_384(1, 14);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(2, 13);
					case 1:
						return func_384(2, 14);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(3, 13);
					case 1:
						return func_384(3, 14);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(4, 13);
					case 1:
						return func_384(4, 14);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(5, 13);
					case 1:
						return func_384(5, 14);
					default:
						break;
				}
			}
			break;
	}
	return 0f;
}

Vector3 func_260(int iParam0, int iParam1)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(0, 0);
					case 1:
						return func_383(0, 2);
					case 4:
						return func_383(0, 7);
					case 5:
						return func_383(0, 6);
					case 2:
						return func_383(0, 9);
					case 3:
						return func_383(0, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(1, 0);
					case 1:
						return func_383(1, 2);
					case 4:
						return func_383(1, 7);
					case 5:
						return func_383(1, 6);
					case 2:
						return func_383(1, 9);
					case 3:
						return func_383(1, 11);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(2, 0);
					case 1:
						return func_383(2, 2);
					case 4:
						return func_383(2, 7);
					case 5:
						return func_383(2, 6);
					case 2:
						return func_383(2, 9);
					case 3:
						return func_383(2, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(3, 0);
					case 1:
						return func_383(3, 2);
					case 4:
						return func_383(3, 7);
					case 5:
						return func_383(3, 6);
					case 2:
						return func_383(3, 9);
					case 3:
						return func_383(3, 11);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(4, 0);
					case 1:
						return func_383(4, 2);
					case 4:
						return func_383(4, 7);
					case 5:
						return func_383(4, 6);
					case 2:
						return func_383(4, 9);
					case 3:
						return func_383(4, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(5, 0);
					case 1:
						return func_383(5, 2);
					case 4:
						return func_383(5, 7);
					case 5:
						return func_383(5, 6);
					case 2:
						return func_383(5, 9);
					case 3:
						return func_383(5, 11);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_261(int iParam0, int iParam1)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(0, 0);
					case 1:
						return func_384(0, 2);
					case 4:
						return func_384(0, 7);
					case 5:
						return func_384(0, 6);
					case 2:
						return func_384(0, 9);
					case 3:
						return func_384(0, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(1, 0);
					case 1:
						return func_384(1, 2);
					case 4:
						return func_384(1, 7);
					case 5:
						return func_384(1, 6);
					case 2:
						return func_384(1, 9);
					case 3:
						return func_384(1, 11);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(2, 0);
					case 1:
						return func_384(2, 2);
					case 4:
						return func_384(2, 7);
					case 5:
						return func_384(2, 6);
					case 2:
						return func_384(2, 9);
					case 3:
						return func_384(2, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(3, 0);
					case 1:
						return func_384(3, 2);
					case 4:
						return func_384(3, 7);
					case 5:
						return func_384(3, 6);
					case 2:
						return func_384(3, 9);
					case 3:
						return func_384(3, 11);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(4, 0);
					case 1:
						return func_384(4, 2);
					case 4:
						return func_384(4, 7);
					case 5:
						return func_384(4, 6);
					case 2:
						return func_384(4, 9);
					case 3:
						return func_384(4, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(5, 0);
					case 1:
						return func_384(5, 2);
					case 4:
						return func_384(5, 7);
					case 5:
						return func_384(5, 6);
					case 2:
						return func_384(5, 9);
					case 3:
						return func_384(5, 11);
					default:
						break;
				}
			}
			break;
	}
	return 0f;
}

void func_268(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 1, bParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, !bParam0);
		}
		iVar0++;
	}
	if (bParam0)
	{
		if (!__LIB_0__::func_51(&(Local_274.f_5), 1048576))
		{
			__LIB_0__::func_7(&(Local_274.f_5), 1048576);
		}
	}
	else if (__LIB_0__::func_51(&(Local_274.f_5), 1048576))
	{
		__LIB_0__::func_8(&(Local_274.f_5), 1048576);
	}
}

bool func_278(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (func_403((*iParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
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

bool func_279(int iParam0)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_15[iParam0], false, false) };
	if (!__LIB_2__::func_1(Local_15[iParam0], 0, 1))
	{
		return false;
	}
	else if (__LIB_2__::func_159(&Local_15, iParam0))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_OCCLUDED(Local_15[iParam0]))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Global_35, Local_15[iParam0], 17))
		{
			return false;
		}
		if (__LIB_0__::func_48(Global_35, Local_15[iParam0], 5f, 0))
		{
			return false;
		}
	}
	if (!__LIB_2__::func_159(&Local_15, iParam0) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(func_251(&Local_274, iParam0), vVar0, false))
	{
		__LIB_2__::func_429(&Local_15, iParam0, 1);
		return true;
	}
	return false;
}

bool func_280(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, int iParam5, int iParam6)
{
	if (__LIB_2__::func_478(iParam1, iParam2, sParam3, 0, fParam4, iParam6, 0, 0, 1, 1, 1, iParam5, 1, 0, 0))
	{
		iParam0->f_34 = iParam1;
		return true;
	}
	return false;
}

bool func_287(int iParam0)
{
	return iParam0->f_224 == 6;
}

void func_292()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	func_417();
	sVar0 = func_189(&Local_274);
	sVar1 = func_190(&Local_274);
	iVar2 = 776;
	if (__LIB_2__::func_1(Local_15[4], 0, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0])))
	{
		if (__LIB_0__::func_51(&(Local_274.f_5), 256))
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_15[4], Local_15.f_49[0], sVar1, 0, 0, iVar2, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
		}
		else
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_15[4], Local_15.f_49[0], sVar0, 0, 0, iVar2, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
		}
		__LIB_2__::func_636(Local_15.f_49[0], Global_35, 10);
	}
	func_314(0);
}

Vector3 func_294(int iParam0, int iParam1)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 512))
			{
				if (__LIB_0__::func_51(&(iParam0->f_5), 4))
				{
					switch (iParam1)
					{
						case 0:
							return func_383(0, 1);
						case 1:
							return func_383(0, 3);
						case 4:
							return func_383(0, 8);
						case 2:
							return func_383(0, 10);
						case 3:
							return func_383(0, 12);
						default:
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							return func_383(1, 1);
						case 1:
							return func_383(1, 3);
						case 4:
							return func_383(1, 8);
						case 2:
							return func_383(1, 10);
						case 3:
							return func_383(1, 12);
						default:
							break;
					}
				}
			}
			else if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(0, 1);
					case 1:
						return func_383(0, 3);
					case 4:
						return func_383(0, 8);
					case 2:
						return func_383(0, 10);
					case 3:
						return func_383(0, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(1, 1);
					case 1:
						return func_383(1, 3);
					case 4:
						return func_383(1, 8);
					case 2:
						return func_383(1, 10);
					case 3:
						return func_383(1, 12);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 512))
			{
				if (__LIB_0__::func_51(&(iParam0->f_5), 4))
				{
					switch (iParam1)
					{
						case 0:
							return func_383(2, 1);
						case 1:
							return func_383(2, 3);
						case 4:
							return func_383(2, 8);
						case 2:
							return func_383(2, 10);
						case 3:
							return func_383(2, 12);
						default:
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							return func_383(3, 1);
						case 1:
							return func_383(3, 3);
						case 4:
							return func_383(3, 8);
						case 2:
							return func_383(3, 10);
						case 3:
							return func_383(3, 12);
						default:
							break;
					}
				}
			}
			else if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(2, 1);
					case 1:
						return func_383(2, 3);
					case 4:
						return func_383(2, 4);
					case 2:
						return func_383(2, 10);
					case 3:
						return func_383(2, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(3, 1);
					case 1:
						return func_383(3, 3);
					case 4:
						return func_383(3, 4);
					case 2:
						return func_383(3, 10);
					case 3:
						return func_383(3, 12);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 512))
			{
				if (__LIB_0__::func_51(&(iParam0->f_5), 4))
				{
					switch (iParam1)
					{
						case 0:
							return func_383(4, 1);
						case 1:
							return func_383(4, 3);
						case 4:
							return func_383(4, 8);
						case 2:
							return func_383(4, 10);
						case 3:
							return func_383(4, 12);
						default:
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							return func_383(5, 1);
						case 1:
							return func_383(5, 3);
						case 4:
							return func_383(5, 8);
						case 2:
							return func_383(5, 10);
						case 3:
							return func_383(5, 12);
						default:
							break;
					}
				}
			}
			else if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_383(4, 1);
					case 1:
						return func_383(4, 3);
					case 4:
						return func_383(4, 4);
					case 2:
						return func_383(4, 10);
					case 3:
						return func_383(4, 12);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_383(5, 1);
					case 1:
						return func_383(5, 3);
					case 4:
						return func_383(5, 4);
					case 2:
						return func_383(5, 10);
					case 3:
						return func_383(5, 12);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_295(int iParam0, int iParam1)
{
	switch (iParam0->f_6)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(0, 1);
					case 1:
						return func_384(0, 3);
					case 4:
						return func_384(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(1, 1);
					case 1:
						return func_384(1, 3);
					case 4:
						return func_384(1, 8);
					default:
						break;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(2, 1);
					case 1:
						return func_384(2, 3);
					case 4:
						return func_384(2, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(3, 1);
					case 1:
						return func_384(3, 3);
					case 4:
						return func_384(3, 8);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_51(&(iParam0->f_5), 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(4, 1);
					case 1:
						return func_384(4, 3);
					case 4:
						return func_384(4, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(5, 1);
					case 1:
						return func_384(5, 3);
					case 4:
						return func_384(5, 8);
					default:
						break;
				}
			}
			break;
	}
	return 0f;
}

void func_314(bool bParam0)
{
	if (__LIB_2__::func_1(Local_15[5], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15[5], 277, !bParam0);
	}
	if (__LIB_2__::func_1(Local_15[4], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15[4], 277, !bParam0);
	}
}

bool func_316()
{
	int iVar0;
	iVar0 = __LIB_2__::func_431(Local_15.f_49[0], Global_36, 1060437492 /* Float: 0.707f */);
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

int func_317(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_1(Local_15[iParam0], 0, 1))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_15[iParam0], false))
	{
		return 0;
	}
	if (!__LIB_0__::func_51(&(Local_274.f_5), 1024))
	{
		PED::SET_PED_COMBAT_MOVEMENT(Local_15[iParam0], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iParam0], 27, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iParam0], 30, true);
		WEAPON::_0xA769D753922B031B(Local_15[iParam0], 0.5f, 0.5f);
		PED::SET_PED_FIRING_PATTERN(Local_15[iParam0], 1575766855);
		PED::SET_PED_CONFIG_FLAG(Local_15[iParam0], 22, true);
		__LIB_2__::func_279(Local_15[iParam0], 1);
		if (bParam1)
		{
			PED::SET_PED_ACCURACY(Local_15[iParam0], 50);
			if (!__LIB_0__::func_163(Local_15[iParam0], 538064912))
			{
				TASK::TASK_VEHICLE_SHOOT_AT_PED(Local_15[iParam0], Global_35, 20f);
			}
		}
		else
		{
			PED::SET_PED_ACCURACY(Local_15[iParam0], 50);
			TASK::TASK_VEHICLE_SHOOT_AT_PED(Local_15[iParam0], Global_35, 20f);
		}
		if (bParam1)
		{
			__LIB_0__::func_7(&(Local_274.f_5), 1024);
		}
		return 1;
	}
	return 0;
}

bool func_320()
{
	int iVar0;
	if (!PED::IS_PED_IN_VEHICLE(Local_15[5], Local_15.f_49[0], true))
	{
		return false;
	}
	if (!func_316())
	{
		__LIB_2__::func_272(Local_15[5], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_LEAVE_VEHICLE(0, Local_15.f_49[0], 268501120, 0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[5], &iVar0, 0, 0, 1, 1);
		return true;
	}
	return false;
}

bool func_321()
{
	int iVar0;
	if (PED::IS_PED_IN_VEHICLE(Local_15[5], Local_15.f_49[0], true) || PED::IS_PED_IN_VEHICLE(Global_35, Local_15.f_49[0], true))
	{
		return false;
	}
	if (func_316())
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_ENTER_VEHICLE(0, Local_15.f_49[0], 20000, func_128(Local_15.f_49[0]), 2f, 1, 0);
		TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 20f);
		__LIB_1__::func_474(Local_15[5], &iVar0, 0, 0, 1, 1);
		return true;
	}
	return false;
}

void func_371()
{
	Local_274.f_11[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
	Local_274.f_11[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
	if (__LIB_0__::func_51(&(Local_274.f_5), 4))
	{
		Local_274.f_11[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1420.902f, -2253.318f, 44.654f, 0f, 0f, 28f, 29.47126f, 21f, 11f, "volAmbushTrigger");
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1424.552f, -2251.378f, 44.654f, 0f, 0f, 28.00001f, 16f, 21f, 11f, "volAmbushSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1433.84f, -2246.438f, 44.654f, 0f, 0f, 28f, 16f, 21f, 11f, "volAmbushSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1451.124f, -2237.248f, 44.654f, 0f, 0f, 28f, 16f, 21f, 11f, "volAmbushSlowest");
		Local_274.f_11[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1406.752f, -2260.843f, 47.24753f, 0f, 0f, 28f, 114.6677f, 54.383f, 17.8122f, "volTrafficKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1431.385f, -2134.01f, 50.03674f, 0f, 0f, 72.6627f, 134.5924f, 249.342f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1392.486f, -2157.548f, 50.03674f, 0f, 0f, -60.85253f, 134.5924f, 139.5536f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1474.633f, -2206.628f, 50.03673f, 0f, 0f, 22.84876f, 52.06392f, 399.9242f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1442.741f, -2348.077f, 50.03674f, 0f, 0f, -60.85253f, 134.5924f, 139.5536f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1505.059f, -2341.752f, 50.03674f, 0f, 0f, 151.4044f, 134.5924f, 249.342f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 1451.133f, -2262.818f, 50.03674f, 0f, 0f, -61.91369f, 23.2508f, 54.3062f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 1431.13f, -2222.428f, 50.03674f, 0f, 0f, -63.65365f, 21.82962f, 54.3062f, 40.15971f);
	}
	else
	{
		Local_274.f_11[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1471.773f, -2230.005f, 44.654f, 0f, 0f, 5.360653f, 29.47126f, 21f, 11f, "volAmbushTrigger");
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1468.697f, -2227.907f, 44.654f, 0f, 0f, 28.00001f, 16f, 21f, 11f, "volAmbushSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1457.599f, -2233.808f, 44.654f, 0f, 0f, 28f, 16f, 21f, 11f, "volAmbushSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1445.852f, -2240.05f, 44.654f, 0f, 0f, 28f, 16f, 21f, 11f, "volAmbushSlowest");
		Local_274.f_11[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1486.644f, -2211.25f, 47.24753f, 0f, 0f, 28f, 137.4117f, 74.37122f, 17.8122f, "volTrafficKill");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1501.596f, -2317.228f, 50.03674f, 0f, 0f, -76.58539f, 134.5924f, 249.342f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1573.025f, -2270.252f, 50.03674f, 0f, 0f, 137.3179f, 134.5924f, 139.5536f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1425.11f, -2269.539f, 50.03673f, 0f, 0f, -154.9272f, 52.06392f, 399.9242f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1398.832f, -2145.253f, 50.03674f, 0f, 0f, 88.00362f, 134.5924f, 139.5536f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1449.818f, -2178.837f, 50.03674f, 0f, 0f, -7.870644f, 82.74128f, 45.39213f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 1450.91f, -2211.04f, 50.03674f, 0f, 0f, 122.9668f, 23.2508f, 54.3062f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 1470.973f, -2249.456f, 50.03674f, 0f, 0f, 95.5941f, 21.82962f, 36.38644f, 40.15971f);
	}
}

void func_372()
{
	Local_274.f_11[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
	Local_274.f_11[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
	if (__LIB_0__::func_51(&(Local_274.f_5), 4))
	{
		Local_274.f_11[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1689.33f, -2070.291f, 44.654f, 0f, 0f, -9.505f, 40f, 17f, 11f, "volAmbushTrigger");
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1696.566f, -2067.618f, 45.508f, 0f, 0f, -9.005f, 32.62852f, 17f, 11f, "volAmbushSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1710.202f, -2060.11f, 44.654f, 0f, 0f, 1.784f, 32.62852f, 40f, 11f, "volAmbushSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1718.664f, -2064.417f, 44.654f, 0f, 0f, 18.37018f, 28.84641f, 21f, 11f, "volAmbushSlowest");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1750.785f, -1919.933f, 50.03674f, 0f, 0f, 80.54394f, 134.5924f, 249.342f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1715.481f, -1948.583f, 50.03674f, 0f, 0f, -52.97127f, 134.5924f, 139.5536f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1803.582f, -1985.935f, 50.03673f, 0f, 0f, 30.73001f, 52.06392f, 399.9242f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1791.387f, -2130.421f, 50.03674f, 0f, 0f, -52.97127f, 134.5924f, 139.5536f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1852.249f, -2115.611f, 50.03674f, 0f, 0f, 159.2857f, 134.5924f, 249.342f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 1732.392f, -2081.206f, 50.03674f, 0f, 0f, -61.91368f, 23.2508f, 54.3062f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 1701.144f, -2043.824f, 42.183f, 0f, 0f, -81.654f, 21.82962f, 56.67399f, 40.15971f);
		Local_274.f_11[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1644.458f, -2086.018f, 42.20628f, 0f, 0f, -99.92027f, 101.8932f, 100f, 40f, "volTrafficKill");
	}
	else
	{
		Local_274.f_11[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1743.241f, -2041.282f, 44.654f, 0f, 0f, 37.4995f, 28.84641f, 21f, 11f, "volAmbushTrigger");
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1742.157f, -2051.448f, 44.654f, 0f, 0f, 41.29634f, 51.48752f, 21f, 11f, "volAmbushSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1730.179f, -2058.402f, 45.50826f, 0f, 0f, 34.45727f, 39.58289f, 21f, 11f, "volAmbushSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1718.087f, -2066.062f, 44.654f, 0f, 0f, 32.91997f, 39.16941f, 21f, 11f, "volAmbushSlowest");
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1815.627f, -2155.72f, 50.037f, 0f, 0f, 132.3932f, 170.0329f, 139.5536f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1690.047f, -2088.644f, 50.03673f, 0f, 0f, -132.9753f, 46.5829f, 399.9242f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 1645.462f, -1939.698f, 50.037f, 0f, 0f, 123.759f, 174.3373f, 87.86232f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 1745.231f, -2081.173f, 50.037f, 0f, 0f, -47.92868f, 25.2508f, 54.3062f, 40.15971f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 1694.837f, -2040.35f, 50.037f, 0f, 0f, -55.943f, 47.83f, 56.674f, 40.16f);
		Local_274.f_11[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1770.539f, -2021.681f, 42.20628f, 0f, 0f, -49.562f, 55.90091f, 100f, 40f, "volTrafficKill");
	}
}

void func_373()
{
	Local_274.f_11[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
	Local_274.f_11[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
	Local_274.f_11[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
	if (__LIB_0__::func_51(&(Local_274.f_5), 4))
	{
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[0], 2103.88f, -1320.069f, 45.155f, 0f, 0f, -20.636f, 24f, 40f, 11f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[0], 2138.833f, -1328.249f, 43.907f, 0f, 0f, -20.636f, 45f, 30f, 10f);
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_11[2], 2137.655f, -1347.977f, 43.127f, 0f, 0f, -6f, 25f, 13f, 10f);
		VOLUME::_0xBCE668AAF83608BE(Local_274.f_11[2], 2150.057f, -1305.688f, 49.174f, 0f, 0f, -25f, 22f, 9f, 10f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 2138.731f, -1301.052f, 46.222f, 0f, 0f, -110.342f, 18f, 21f, 20f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 2264.362f, -1275.847f, 58.005f, 0f, 0f, 69.953f, 220f, 150f, 40.16f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 2186.326f, -1205.341f, 45.143f, 0f, 0f, 71f, 140f, 50f, 30f);
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2104.381f, -1322.616f, 44.922f, 0f, 0f, -20.636f, 27f, 45f, 11f, "volAmbushSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2106.95f, -1321.211f, 45.046f, 0f, 0f, -20.636f, 20f, 40f, 11f, "volAmbushSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2135.183f, -1320.867f, 45.396f, 0f, 0f, -20.636f, 35f, 20f, 11f, "volAmbushSlowest");
		Local_274.f_11[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2097.857f, -1322.89f, 47.34889f, 0f, 0f, -6.55889f, 55.60991f, 115.9953f, 20f, "volTrafficKill");
	}
	else
	{
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[0], 2140.92f, -1326.701f, 45.155f, 0f, 0f, -19.636f, 45f, 42.348f, 11f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 2124.65f, -1342.28f, 42.776f, 0f, 0f, -110.342f, 15f, 35f, 20f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[2], 2097.244f, -1299.453f, 42.776f, 0f, 0f, -110.342f, 80f, 55f, 20f);
		VOLUME::_0x39816F6F94F385AD(Local_274.f_11[1], 2186.622f, -1205.442f, 45.143f, 0f, 0f, 71f, 140f, 45f, 30f);
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2142.7f, -1328.882f, 44.922f, 0f, 0f, -20.636f, 20f, 30f, 11f, "volAmbushSlow");
		Local_15.f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2137.924f, -1329.313f, 44.708f, 0f, 0f, -20.636f, 20f, 33f, 11f, "volAmbushSlower");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2128.045f, -1329.695f, 45.108f, 0f, 0f, -20.636f, 25f, 40f, 11f, "volAmbushSlowest");
		Local_274.f_11[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2204.021f, -1345.912f, 47.34889f, 0f, 0f, 68.83604f, 55.60991f, 99.78413f, 20f, "volTrafficKill");
	}
}

Vector3 func_383(int iParam0, int iParam1)
{
	return func_443(iParam0, iParam1);
}

float func_384(int iParam0, int iParam1)
{
	return func_444(iParam0, iParam1);
}

bool func_403(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_270(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_225(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_218(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_417()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	if (__LIB_0__::func_51(&(Local_274.f_5), 4))
	{
		vVar0 = { func_383(0, 15) };
		vVar3 = { func_383(0, 16) };
		if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
		{
			bVar6 = true;
		}
	}
	else
	{
		vVar0 = { func_383(0, 16) };
		vVar3 = { func_383(0, 15) };
		if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
		{
			bVar6 = false;
		}
	}
	if (!bVar6 || __LIB_3__::func_693(vVar0, vVar3, Global_36, 0) < 3f)
	{
		__LIB_0__::func_7(&(Local_274.f_5), 512);
	}
}

Vector3 func_443(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1462.798f, -2220.354f, 44.837f;
				case 1:
					return 1461.076f, -2227.604f, 42.6106f;
				case 2:
					return 1450.405f, -2222.599f, 44.6719f;
				case 3:
					return 1452.23f, -2227.263f, 43.526f;
				case 4:
					return 1453.135f, -2217.322f, 45.2377f;
				case 5:
					return 1458.817f, -2219.078f, 44.5268f;
				case 6:
					return 1455.94f, -2209.98f, 46.7808f;
				case 7:
					return 1453.682f, -2211.305f, 46.8094f;
				case 8:
					return 1466.039f, -2230.295f, 42.818f;
				case 9:
					return 1392.084f, -2243.137f, 49.1826f;
				case 10:
					return 1410.337f, -2261.687f, 42.2599f;
				case 11:
					return 1411.608f, -2236.545f, 48.1626f;
				case 12:
					return 1418.986f, -2250.624f, 41.7183f;
				case 13:
					return 1473.812f, -2213.735f, 46.2529f;
				case 14:
					return 1473.936f, -2212.641f, 46.3572f;
				case 15:
					return 1403.204f, -2261.686f, 43.3835f;
				case 16:
					return 1467.485f, -2226.547f, 43.0954f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1437.574f, -2252.938f, 42.3561f;
				case 1:
					return 1439.705f, -2247.464f, 42.8212f;
				case 2:
					return 1434.694f, -2231.83f, 44.486f;
				case 3:
					return 1441.13f, -2234.449f, 44.7554f;
				case 4:
					return 1428.903f, -2228.128f, 44.2506f;
				case 5:
					return 1424.617f, -2228.468f, 44.8161f;
				case 6:
					return 1432.422f, -2228.319f, 44.09f;
				case 7:
					return 1433.871f, -2227.722f, 44.6397f;
				case 8:
					return 1432.447f, -2247.4f, 42.1443f;
				case 9:
					return 1478.894f, -2209.196f, 47.5522f;
				case 10:
					return 1479.163f, -2224.2f, 43.4441f;
				case 11:
					return 1466.953f, -2208.783f, 46.9508f;
				case 12:
					return 1472.232f, -2224.934f, 43.4075f;
				case 13:
					return 1402.046f, -2238.578f, 48.5743f;
				case 14:
					return 1400.728f, -2238.402f, 48.5555f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1729.139f, -2067.607f, 43.2912f;
				case 1:
					return 1725.206f, -2066.151f, 43.2146f;
				case 2:
					return 1723.013f, -2058.774f, 43.2176f;
				case 3:
					return 1722.47f, -2063.341f, 43.0689f;
				case 4:
					return 1722.803f, -2053.831f, 43.2948f;
				case 5:
					return 1717.248f, -2056.208f, 43.2094f;
				case 6:
					return 1722.446f, -2048.923f, 43.2495f;
				case 7:
					return 1724.044f, -2050.14f, 43.3113f;
				case 8:
					return 1733.924f, -2057.51f, 43.3798f;
				case 9:
					return 1651.023f, -2084.122f, 41.2327f;
				case 10:
					return 1684.311f, -2064.311f, 40.8445f;
				case 11:
					return 1669.577f, -2036.916f, 42.9729f;
				case 12:
					return 1685.749f, -2057.406f, 42.8399f;
				case 13:
					return 1733.246f, -2076.189f, 42.938f;
				case 14:
					return 1732.552f, -2074.543f, 43.3161f;
				case 15:
					return 1697.583f, -2067.781f, 41.7419f;
				case 16:
					return 1743.215f, -2048.283f, 43.6679f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1713.304f, -2078.086f, 42.9252f;
				case 1:
					return 1716.589f, -2069.851f, 42.9859f;
				case 2:
					return 1704.57f, -2063.128f, 43.2969f;
				case 3:
					return 1711.057f, -2067.668f, 42.6685f;
				case 4:
					return 1719.245f, -2075.96f, 42.7214f;
				case 5:
					return 1714.853f, -2079.93f, 42.7711f;
				case 6:
					return 1713.258f, -2077.815f, 42.9189f;
				case 7:
					return 1715.259f, -2082.287f, 42.4938f;
				case 8:
					return 1697.377f, -2071.371f, 42.101f;
				case 9:
					return 1748.601f, -2026.631f, 43.6118f;
				case 10:
					return 1751.542f, -2043.313f, 43.6279f;
				case 11:
					return 1720.328f, -2024.434f, 43.6483f;
				case 12:
					return 1742.72f, -2047.476f, 43.7578f;
				case 13:
					return 1699.063f, -2058.812f, 43.1237f;
				case 14:
					return 1698.96f, -2060.034f, 43.1556f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2140.98f, -1310.836f, 41.5444f;
				case 1:
					return 2137.551f, -1314.992f, 41.9231f;
				case 2:
					return 2137.167f, -1335.786f, 41.9006f;
				case 3:
					return 2142.138f, -1328.268f, 42.0271f;
				case 4:
					return 2142.662f, -1301.195f, 41.6726f;
				case 5:
					return 2144.448f, -1296.434f, 41.4486f;
				case 6:
					return 2149.357f, -1306.667f, 41.643f;
				case 7:
					return 2147.834f, -1307.977f, 41.7048f;
				case 8:
					return 2142.086f, -1317.259f, 41.9549f;
				case 9:
					return 2105.211f, -1289.281f, 41.2387f;
				case 10:
					return 2100.447f, -1297.854f, 41.9961f;
				case 11:
					return 2089.791f, -1325.008f, 42.04f;
				case 12:
					return 2096.094f, -1316.581f, 42.5503f;
				case 13:
					return 2149.478f, -1314.666f, 41.5243f;
				case 14:
					return 2151.926f, -1314.947f, 41.5108f;
				case 15:
					return 2136.081f, -1278.426f, 40.8244f;
				case 16:
					return 2145.665f, -1327.116f, 42.0614f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2101.278f, -1342.301f, 41.3681f;
				case 1:
					return 2137.326f, -1328.135f, 42.1f;
				case 2:
					return 2124.398f, -1305.432f, 41.3676f;
				case 3:
					return 2123.064f, -1310.7f, 42.0375f;
				case 4:
					return 2124.336f, -1296.335f, 41.1209f;
				case 5:
					return 2120.851f, -1293.017f, 41.043f;
				case 6:
					return 2128.817f, -1289.966f, 40.9985f;
				case 7:
					return 2127.355f, -1296.46f, 41.1922f;
				case 8:
					return 2132.153f, -1317.33f, 41.6949f;
				case 9:
					return 2181.788f, -1328.859f, 41.1288f;
				case 10:
					return 2165.021f, -1323.893f, 41.5961f;
				case 11:
					return 2168.144f, -1338.348f, 41.0375f;
				case 12:
					return 2160.338f, -1335.809f, 41.7965f;
				case 13:
					return 2105.706f, -1284.65f, 41.2978f;
				case 14:
					return 2106.092f, -1282.627f, 41.2942f;
				case 15:
					return 2136.081f, -1278.426f, 40.1354f;
				case 16:
					return 2145.665f, -1327.116f, 42.0614f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_444(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 154.0989f;
				case 1:
					return 152.0989f;
				case 2:
					return 166.0989f;
				case 3:
					return 168.0989f;
				case 4:
					return 220.0989f;
				case 5:
					return 40.6691f;
				case 6:
					return 208.5156f;
				case 7:
					return 222.5239f;
				case 8:
					return 264.7276f;
				case 9:
					return 275.0236f;
				case 10:
					return 299.0236f;
				case 11:
					return 235.0239f;
				case 12:
					return 293.0239f;
				case 13:
					return 271.0239f;
				case 14:
					return 267.0239f;
				case 15:
					return 295.4724f;
				case 16:
					return 295.4724f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 300.0989f;
				case 1:
					return 316.0989f;
				case 2:
					return 210.0989f;
				case 3:
					return 258.0989f;
				case 4:
					return 196.0989f;
				case 5:
					return 19.9f;
				case 6:
					return 200.5156f;
				case 7:
					return 222.5239f;
				case 8:
					return 190.7276f;
				case 9:
					return 179.0236f;
				case 10:
					return 169.0236f;
				case 11:
					return 189.0239f;
				case 12:
					return 173.0239f;
				case 13:
					return 177.0239f;
				case 14:
					return 175.0239f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 74.0989f;
				case 1:
					return 96.0989f;
				case 2:
					return 166.0989f;
				case 3:
					return 114.0989f;
				case 4:
					return 254.0989f;
				case 5:
					return 40.6691f;
				case 6:
					return 246.5156f;
				case 7:
					return 238.5239f;
				case 8:
					return 288.7276f;
				case 9:
					return 307.0236f;
				case 10:
					return 247.0236f;
				case 11:
					return 193.0239f;
				case 12:
					return 253.0239f;
				case 13:
					return 297.0239f;
				case 14:
					return 297.0239f;
				case 15:
					return 295.4724f;
				case 16:
					return 291.4724f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 358.0989f;
				case 1:
					return 316.0989f;
				case 2:
					return 262.0989f;
				case 3:
					return 290.0989f;
				case 4:
					return 58.0989f;
				case 5:
					return 47.9f;
				case 6:
					return 232.5156f;
				case 7:
					return 312.5239f;
				case 8:
					return 114.7276f;
				case 9:
					return 185.0236f;
				case 10:
					return 141.0236f;
				case 11:
					return 225.0239f;
				case 12:
					return 139.0239f;
				case 13:
					return 81.0239f;
				case 14:
					return 85.0239f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 146.0989f;
				case 1:
					return 88.0989f;
				case 2:
					return 12.0989f;
				case 3:
					return 62.0989f;
				case 4:
					return 156.0989f;
				case 5:
					return 298.6691f;
				case 6:
					return 144.5156f;
				case 7:
					return 136.5239f;
				case 8:
					return 62.7276f;
				case 9:
					return 185.0236f;
				case 10:
					return 197.0236f;
				case 11:
					return 287.0239f;
				case 12:
					return -92.9761f;
				case 13:
					return 193.0239f;
				case 14:
					return 195.0239f;
				case 15:
					return 193.4724f;
				case 16:
					return 189.4724f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 324.0989f;
				case 1:
					return 254.0989f;
				case 2:
					return 152.0989f;
				case 3:
					return 244.0989f;
				case 4:
					return 156.0989f;
				case 5:
					return 152.6691f;
				case 6:
					return 148.5156f;
				case 7:
					return 136.5239f;
				case 8:
					return 62.7276f;
				case 9:
					return 73.0236f;
				case 10:
					return 77.0236f;
				case 11:
					return 75.0239f;
				case 12:
					return 73.0239f;
				case 13:
					return 109.0239f;
				case 14:
					return 109.0239f;
				case 15:
					return 193.4724f;
				case 16:
					return 189.4724f;
			}
			break;
	}
	return 0f;
}

