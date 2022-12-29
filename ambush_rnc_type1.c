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
	struct<172> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 3, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	bool bLocal_446 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_446 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_446, 961, 0);
		if (bLocal_446)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (__LIB_17__::func_779(&ScriptParam_0))
				{
					__LIB_2__::func_146(&Local_15, 13);
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
						__LIB_2__::func_267(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						__LIB_2__::func_282(&Local_15, 1);
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
								__LIB_2__::func_548(&Local_15, 1);
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
					if (func_39(&Local_15))
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
	__LIB_2__::func_484();
	__LIB_2__::func_317(&Local_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_282(&Local_15, 1);
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
	char* sVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			sVar1 = func_125(&Local_15, iVar0);
			__LIB_2__::func_133(Local_15[iVar0], sVar1, 0);
			switch (iVar0)
			{
				case 0:
					__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[func_127(iVar0)], 0, -1, 1);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_RIFLE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 1:
					__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[func_127(iVar0)], 0, -1, 1);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 2:
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iVar0], false, true);
					__LIB_2__::func_272(Local_15[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
					break;
			}
		}
		iVar0++;
	}
	func_130(0);
	func_131(&Local_15, &Local_274);
	return true;
}

bool func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	__LIB_2__::func_714(&(Local_274.f_70), 30f);
	iVar0 = -1;
	iVar0 = func_135();
	if (iVar0 != -1)
	{
	}
	func_136();
	func_137();
	func_138();
	if (func_139())
	{
		func_140();
		__LIB_0__::func_612(&Local_274, 11);
	}
	if (__LIB_8__::func_747(&Local_274, 4096))
	{
		func_143();
	}
	iVar2 = PED::GET_MOUNT(Global_35);
	if (iVar2 != 0)
	{
		Local_274.f_68 = iVar2;
	}
	switch (Local_274.f_2)
	{
		case 0:
			if (func_144())
			{
				__LIB_1__::func_683(&Local_274, 128);
			}
			if (func_146())
			{
				if (Local_15.f_151 == 30)
				{
					func_130(1);
				}
				else
				{
					__LIB_2__::func_282(&Local_15, 0);
				}
				Local_15.f_182.f_18 = { Global_36 };
				__LIB_0__::func_612(&Local_274, 1);
			}
			else if (func_147())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&Local_15, 16);
					__LIB_2__::func_146(&Local_15, 13);
					if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
					{
						AITRANSPORT::_0x67F7CEAC2391E114(Local_15.f_56, 0);
					}
				}
			}
			break;
		case 1:
			if (func_149(&iVar0))
			{
				__LIB_0__::func_612(&Local_274, 10);
			}
			else
			{
				if (func_144())
				{
					__LIB_1__::func_683(&Local_274, 128);
				}
				if (!__LIB_2__::func_1(Local_15.f_56, 0, 1))
				{
					if (Global_1935630.f_40 != 0)
					{
						Local_15.f_56 = Global_1935630.f_40;
					}
					else
					{
						Local_15.f_56 = Global_1935630.f_41;
					}
				}
				if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
				{
					if (__LIB_2__::func_227(0f, 1, Local_15[0], 1))
					{
						if (!__LIB_0__::func_71(Global_35))
						{
							func_152(1);
							__LIB_0__::func_612(&Local_274, 6);
						}
						else
						{
							if (!__LIB_8__::func_747(&Local_274, 262144))
							{
								if (__LIB_8__::func_747(&Local_274, 4096))
								{
									if (func_153(&Local_274, Local_15[0], Global_35, "AMBUSH_HA1_V2_WARN", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926))
									{
										__LIB_1__::func_683(&Local_274, 262144);
									}
								}
								else if (func_153(&Local_274, Local_15[0], Global_35, "AMBUSH_HA1_V1_WARN", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926))
								{
									__LIB_1__::func_683(&Local_274, 262144);
								}
							}
							func_154(&Local_15, 0, Global_35, 3, 1, -1f);
							func_154(&Local_15, 1, Global_35, 3, 1, -1f);
							if (__LIB_8__::func_747(&Local_274, 4096))
							{
								__LIB_1__::func_283(&(Local_274.f_11[7 /*3*/]), 1);
								func_130(0);
								__LIB_0__::func_612(&Local_274, 4);
							}
							else
							{
								__LIB_2__::func_691(&(Local_274.f_70), Local_15[0], 1, 30f);
								PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
								if (Global_1935630.f_40 != 0)
								{
									Local_274.f_65 = 1;
									PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_HA1_V1_DISMOUNT");
								}
								else
								{
									PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
								}
								__LIB_0__::func_612(&Local_274, 2);
							}
						}
					}
				}
				Jump @2312; //curOff = 720
				if (func_149(&iVar0))
				{
					__LIB_0__::func_612(&Local_274, 10);
				}
				else
				{
					if (func_144())
					{
						__LIB_1__::func_683(&Local_274, 128);
					}
					if (!__LIB_0__::func_71(Global_35))
					{
						func_152(1);
						__LIB_0__::func_612(&Local_274, 6);
					}
					else if (!__LIB_8__::func_747(&Local_274, 256))
					{
						if (Local_15.f_151 != 30)
						{
							if (__LIB_2__::func_227(0f, 1, Local_15[0], 1))
							{
								func_130(1);
							}
						}
						if (__LIB_2__::func_227(0, 1, 0, 0) || func_156())
						{
							if (__LIB_2__::func_1(Local_15[1], 0, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
								__LIB_1__::func_474(Local_15[1], &iVar1, 1f, 0, 1, 1);
							}
							if (__LIB_2__::func_227(0, 1, 0, 0))
							{
								func_153(&Local_274, Local_15[0], Global_35, "AMBUSH_HA1_V1_OFFHORSE", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
								__LIB_0__::func_612(&Local_274, 3);
							}
						}
					}
					Jump @2312; //curOff = 948
					if (func_149(&iVar0))
					{
						__LIB_0__::func_612(&Local_274, 10);
					}
					else
					{
						if (!__LIB_0__::func_71(Global_35))
						{
							func_152(1);
							__LIB_0__::func_612(&Local_274, 6);
						}
						else if (!__LIB_8__::func_747(&Local_274, 256))
						{
							if (__LIB_2__::func_227(0, 1, 0, 0) || func_144())
							{
								if ((__LIB_0__::func_163(Global_35, 501393341) || __LIB_0__::func_163(Global_35, 1553520516)) || __LIB_0__::func_163(Global_35, 1920417248))
								{
								}
								else
								{
									__LIB_0__::func_612(&Local_274, 10);
								}
							}
						}
						Jump @2312; //curOff = 1097
						if (__LIB_1__::func_285(&(Local_274.f_11[7 /*3*/]), 0.1f))
						{
							if (!__LIB_8__::func_747(&Local_274, 8192))
							{
								if (!__LIB_0__::func_163(Local_15[2], 242628503) || TASK::GET_SEQUENCE_PROGRESS(Local_15[2]) > 0)
								{
									vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_15.f_56, 0f, 2f, 0f) };
									__LIB_2__::func_106(&vVar3, 1, 10, 0);
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_SHOOT_AT_COORD(0, vVar3, 3000, joaat("FIRING_PATTERN_SINGLE_SHOT"), 1);
									__LIB_1__::func_474(Local_15[2], &iVar1, 0, 0, 1, 1);
									func_152(0);
									__LIB_1__::func_683(&Local_274, 8192);
									func_159();
								}
							}
							else if (__LIB_1__::func_285(&(Local_274.f_11[7 /*3*/]), 2.1f))
							{
								__LIB_1__::func_148(&(Local_274.f_11[7 /*3*/]));
								__LIB_0__::func_612(&Local_274, 5);
							}
						}
						Jump @2312; //curOff = 1296
						if (__LIB_2__::func_710(Global_35, &(Local_274.f_6), 0, 0, 256, 0))
						{
							func_153(&Local_274, Global_35, Global_35, "AMBUSH_HA1_V2_LASSOED", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
							__LIB_0__::func_612(&Local_274, 3);
						}
						Jump @2312; //curOff = 1358
						if (func_149(&iVar0))
						{
							__LIB_0__::func_612(&Local_274, 10);
						}
						else
						{
							if (Local_15.f_151 == 30)
							{
								if (__LIB_2__::func_227(0f, 1, Global_35, 1))
								{
									func_130(1);
								}
							}
							if (__LIB_2__::func_227(0f, 1, Global_35, 1))
							{
								if (!__LIB_0__::func_163(Local_15[2], 1868526510) || !__LIB_8__::func_747(&Local_274, 524288))
								{
									iVar6 = 1;
									if (!__LIB_8__::func_747(&Local_274, 4096))
									{
										if (!__LIB_3__::func_419(Global_35, Local_15.f_56))
										{
											iVar6 |= 262144;
										}
										else
										{
											iVar6 |= 131072;
										}
									}
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_15[2], 32768);
									TASK::CLEAR_PED_TASKS(Local_15[2], true, false);
									TASK::TASK_MOUNT_ANIMAL(Local_15[2], Local_274.f_68, -1, -1, 2f, iVar6, 0, 0);
									__LIB_2__::func_282(&Local_15, 1);
									Local_274.f_69 = Local_274.f_68;
									if (!__LIB_8__::func_747(&Local_274, 16777216))
									{
										__LIB_1__::func_683(&Local_274, 16777216);
									}
									__LIB_1__::func_683(&Local_274, 524288);
								}
							}
							if (((__LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), 1f) && __LIB_2__::func_227(-3.5f, 1, 0, 0)) && __LIB_8__::func_747(&Local_274, 524288)) && __LIB_2__::func_227(0f, 1, Global_35, 1))
							{
								if (__LIB_8__::func_747(&Local_274, 4096))
								{
									func_153(&Local_274, Local_15[0], Global_35, "GANG_INTERACT_STAY_THERE", -1082130432 /* Float: -1f */, 1, 1, 2, 291934926);
								}
								else
								{
									func_153(&Local_274, Local_15[2], Global_35, "AMBUSH_HA1_V1_TAKE1", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
								}
								__LIB_0__::func_612(&Local_274, 7);
							}
							Jump @2312; //curOff = 1764
							if (func_149(&iVar0))
							{
								__LIB_0__::func_612(&Local_274, 10);
							}
							else
							{
								if (!__LIB_8__::func_747(&Local_274, 16))
								{
									if (__LIB_0__::func_71(Local_15[2]))
									{
										PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_15[2], 32768);
										if (Local_274.f_57 == 0)
										{
											Local_274.f_57 = PED::_GET_RIDER_OF_MOUNT(Local_15.f_56, false);
										}
										if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_56, false);
										}
										if (!PED::IS_PED_RAGDOLL(Global_35))
										{
											PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
										}
										__LIB_1__::func_148(&(Local_274.f_11[1 /*3*/]));
										__LIB_1__::func_683(&Local_274, 16);
									}
								}
								else if (__LIB_1__::func_285(&(Local_274.f_11[1 /*3*/]), 0.2f) || __LIB_8__::func_747(&Local_274, 4096))
								{
									if ((__LIB_2__::func_227(0f, 1, Local_15[2], 1) && __LIB_2__::func_227(0f, 1, Local_15[0], 1)) && __LIB_2__::func_227(0f, 1, Local_15[1], 1))
									{
										if (__LIB_8__::func_747(&Local_274, 4096))
										{
											func_153(&Local_274, Local_15[2], Global_35, "CALLOUT_LETS_GET_OUTTA_HERE_MALE", -1082130432 /* Float: -1f */, 1, 1, 1, 291934926);
										}
										else
										{
											func_153(&Local_274, Local_15[2], Global_35, "AMBUSH_HA1_V1_TAKE2", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
										}
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
										__LIB_0__::func_612(&Local_274, 8);
									}
								}
								Jump @2312; //curOff = 2102
								if (func_149(&iVar0))
								{
									__LIB_0__::func_612(&Local_274, 10);
								}
								else if (__LIB_2__::func_227(-6.5f, 1, 0, 0) || __LIB_8__::func_747(&Local_274, 4096))
								{
									func_163();
									__LIB_2__::func_147(&Local_15, 1048576);
									__LIB_0__::func_612(&Local_274, 9);
								}
								Jump @2312; //curOff = 2180
								if (func_149(&iVar0))
								{
									__LIB_0__::func_612(&Local_274, 10);
								}
								else if (func_164())
								{
								}
								Jump @2312; //curOff = 2211
								if (Local_274.f_171 == -1 || __LIB_2__::func_227(0f, 1, Global_35, 1))
								{
									if (func_165())
									{
										__LIB_0__::func_612(&Local_274, 11);
									}
								}
								Jump @2312; //curOff = 2256
								func_166();
								if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
								{
									AITRANSPORT::_0x67F7CEAC2391E114(Local_15.f_56, 0);
								}
								__LIB_2__::func_691(&(Local_274.f_70), Local_15[0], 0, 30f);
								return true;
							}
						}
					}
				}
			}
			return false;
			default:
				break;
	}
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
		func_177(&Local_15);
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
	int iVar0;
	int iVar1;
	func_166();
	func_138();
	if (__LIB_8__::func_747(&Local_274, 32) && !__LIB_8__::func_747(&Local_274, 33554432))
	{
		if (__LIB_2__::func_227(0f, 1, Local_274.f_67, 1))
		{
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					if ((Local_15.f_151 == 29 && func_179(&Local_15, iVar0) == 1) || (Local_15.f_151 == 30 && func_179(&Local_15, iVar0) == 3))
					{
						if (func_153(&Local_274, Local_15[iVar0], Global_35, func_180(), -1082130432 /* Float: -1f */, 1, 1, 0, 291934926))
						{
							__LIB_1__::func_683(&Local_274, 33554432);
						}
						else
						{
							iVar0++;
						}
						if (!__LIB_8__::func_747(&Local_274, 33554432))
						{
							iVar0 = 0;
							while (iVar0 <= 2)
							{
								if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
								{
									if (func_153(&Local_274, Local_15[iVar0], Global_35, func_180(), -1082130432 /* Float: -1f */, 1, 1, 0, 291934926))
									{
										__LIB_1__::func_683(&Local_274, 33554432);
									}
									else
									{
										iVar0++;
									}
									if (!__LIB_8__::func_747(&Local_274, 33554432))
									{
										__LIB_1__::func_683(&Local_274, 33554432);
									}
									__LIB_17__::func_800(&Local_15, &(Local_274.f_72), &(Local_274.f_136));
									iVar1 = 0;
									while (iVar1 < Local_15.f_215)
									{
										if (iVar1 < 2)
										{
											__LIB_2__::func_399(&Local_15, iVar1, Local_15.f_40[iVar1]);
										}
										iVar1++;
									}
									switch (Local_274.f_3)
									{
										case 0:
											__LIB_1__::func_283(&(Local_274.f_11[13 /*3*/]), 0);
											__LIB_1__::func_283(&(Local_274.f_11[3 /*3*/]), 0);
											func_183();
											if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
											{
												if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Global_35) > 0.65f || __LIB_8__::func_747(&Local_274, 16))
												{
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
													__LIB_1__::func_683(&Local_274, 2048);
												}
											}
											__LIB_0__::func_613(&Local_274, 1);
											break;
										case 1:
											if (__LIB_2__::func_374(&Local_15) <= 1)
											{
												__LIB_0__::func_613(&Local_274, 2);
											}
											break;
										case 2:
											func_186();
											if (__LIB_17__::func_801(&Local_15, &(Local_274.f_56), &(Local_15.f_241), func_187(&Local_274), 1092616192 /* Float: 10f */))
											{
												__LIB_0__::func_613(&Local_274, 3);
											}
											break;
										case 3:
											return true;
									}
									return false;
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_39(var uParam0)
{
	char* sVar0;
	if (!__LIB_8__::func_747(&Local_274, 8388608) && __LIB_8__::func_747(&Local_274, 16777216))
	{
		if (__LIB_2__::func_1(Local_274.f_69, 0, 1))
		{
			if (__LIB_2__::func_227(0, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				if (!__LIB_2__::func_385(Global_35) && __LIB_0__::func_94(Local_274.f_69, Global_36, 1) < 3f)
				{
					if (Local_15.f_151 == 29)
					{
						sVar0 = "AMBUSH_HA1_V1_PLYFINAL_RECOVER";
					}
					else
					{
						sVar0 = "AMBUSH_HA1_V2_PLYFINAL_RECOVER";
					}
					func_153(&Local_274, Global_35, Local_274.f_69, sVar0, -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
					__LIB_1__::func_683(&Local_274, 8388608);
				}
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_49()
{
	__LIB_2__::func_503(&Local_15, 1);
	__LIB_1__::func_724(256);
	if (PED::_GET_RIDER_OF_MOUNT(Local_15.f_56, false) != 0 && PED::_GET_RIDER_OF_MOUNT(Local_15.f_56, false) != Global_35)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_56));
	}
	else
	{
		__LIB_2__::func_423(&Local_15, 1);
	}
	PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
}

bool func_83()
{
	if (Local_15.f_151 == 30)
	{
		__LIB_1__::func_683(&Local_274, 4096);
	}
	switch (Local_15.f_221)
	{
		case 0:
			Local_274.f_5 = 0;
			break;
		case 1:
			break;
		default:
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(Local_15.f_151, 1, Local_15.f_221), true))
	{
		__LIB_1__::func_683(&Local_274, 8);
	}
	else
	{
		__LIB_1__::func_683(&Local_274, 4);
	}
	Local_15.f_215 = 3;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 2;
	Local_15.f_181 = 4;
	if (!__LIB_8__::func_747(&Local_274, 4096))
	{
		Local_15.f_57[0] = joaat("A_C_HORSE_MORGAN_BAY");
		Local_15.f_57[1] = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
	}
	else
	{
		Local_15.f_57[0] = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		Local_15.f_57[1] = joaat("A_C_HORSE_MORGAN_BAY");
	}
	func_257(&Local_15, &Local_274);
	__LIB_2__::func_325(&(Local_15.f_152));
	__LIB_3__::func_498(&(Local_15.f_152), 1);
	__LIB_2__::func_345(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_634(&(Local_15.f_152), 1);
	__LIB_2__::func_41(&(Local_15.f_182), 8201, 1.5f, 1.501f, 1.501f, 1.75f, 0);
	return true;
}

bool func_95()
{
	int iVar0;
	if (!__LIB_8__::func_747(&Local_274, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("G_M_M_UNIRANCHERS_01"), false);
		__LIB_1__::func_683(&Local_274, 2);
	}
	else
	{
		iVar0 = 1;
		if (!STREAMING::HAS_MODEL_LOADED(joaat("G_M_M_UNIRANCHERS_01")))
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
	return func_272(iVar0);
}

int func_97(int iParam0)
{
	return joaat("G_M_M_UNIRANCHERS_01");
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_274(&Local_274, iVar0);
}

var func_109(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_275(&Local_274, iVar0);
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_278(&Local_274, iVar0);
}

var func_117(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_279(&Local_274, iVar0);
}

char* func_125(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_179(uParam0, iParam1);
	return func_280(iVar0);
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return -1;
}

void func_130(bool bParam0)
{
	if (bParam0)
	{
		if (!__LIB_1__::func_489(&(Local_274.f_136[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_274.f_136[0 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_274.f_136[0 /*17*/]), 1, 0);
		}
		if (!__LIB_1__::func_489(&(Local_274.f_136[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_274.f_136[1 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_274.f_136[1 /*17*/]), 1, 0);
		}
	}
	else
	{
		if (__LIB_1__::func_489(&(Local_274.f_136[0 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_274.f_136[0 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_274.f_136[0 /*17*/]), 0, 0);
		}
		if (__LIB_1__::func_489(&(Local_274.f_136[1 /*17*/]), 0) && !__LIB_1__::func_489(&(Local_274.f_136[1 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(Local_274.f_136[1 /*17*/]), 0, 0);
		}
	}
}

void func_131(var uParam0, var uParam1)
{
	__LIB_2__::func_602(&(uParam1->f_136[0 /*17*/]), __LIB_2__::func_460(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(uParam1->f_136[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_526(&(uParam1->f_136), 0, 0);
	__LIB_2__::func_482(&(uParam1->f_136[0 /*17*/]), 1, 1);
}

int func_135()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = 1;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15[iVar3]))
		{
		}
		else
		{
			iVar0 = func_291(&(Local_15[iVar3]), &(Local_274.f_72[iVar3 /*21*/]), 20f, &(Local_274.f_136), &iVar1, 0f, 3, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iVar0 != -1)
			{
				iVar2 = iVar0;
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_136()
{
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	func_292(&Local_15, 0);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
}

void func_137()
{
	if (__LIB_8__::func_747(&Local_274, 256))
	{
		return;
	}
	if (Local_274.f_65 == 1)
	{
		if ((__LIB_2__::func_455() || !__LIB_2__::func_458(&Local_15, 1, 1)) || PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
		{
			__LIB_2__::func_691(&(Local_274.f_70), Local_15[0], 0, 30f);
			if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				func_153(&Local_274, Global_35, Local_15[0], "AMBUSH_HA1_V1_DISMOUNT", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
			}
			else
			{
				__LIB_2__::func_503(&Local_15, 0);
			}
			__LIB_2__::func_504(Local_15[0], 300);
			__LIB_2__::func_504(Local_15[1], 50);
			__LIB_2__::func_504(Local_15[2], 150);
			__LIB_1__::func_683(&Local_274, 256);
		}
	}
}

void func_138()
{
	int iVar0;
	if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(Local_15.f_56, false);
		if (__LIB_2__::func_1(iVar0, 0, 1) && iVar0 != Global_35)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_COLLECT"), false);
		}
	}
}

bool func_139()
{
	int iVar0;
	if (__LIB_8__::func_747(&Local_274, 16384))
	{
		if (__LIB_0__::func_75(&(Local_274.f_11[9 /*3*/])))
		{
			__LIB_0__::func_37(&(Local_274.f_11[9 /*3*/]));
		}
	}
	if (!__LIB_8__::func_747(&Local_274, 128))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_41))
			{
				if (PED::_IS_PED_LASSOED(Global_1935630.f_41))
				{
					__LIB_1__::func_683(&Local_274, 128);
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (__LIB_13__::func_211(Local_15[iVar0], 1097859072 /* Float: 15f */))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15[iVar0], false);
		}
		if (__LIB_4__::func_28(Local_15[iVar0], 0, &(Local_15.f_152), &(Local_15.f_180), 0, 0))
		{
			if (!PED::IS_PED_RAGDOLL(Global_35))
			{
				if (Local_15.f_180 == 2)
				{
					if (Local_15[iVar0] == Local_274.f_57)
					{
						if (!__LIB_0__::func_75(&(Local_274.f_11[5 /*3*/])))
						{
							if (PED::IS_PED_BEING_JACKED(Local_274.f_57))
							{
								__LIB_1__::func_283(&(Local_274.f_11[5 /*3*/]), 0);
							}
							else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_274.f_57))
							{
							}
							else if (Local_15.f_180 == 2048)
							{
								if (!__LIB_8__::func_747(&Local_274, 4096) && !__LIB_8__::func_747(&Local_274, 16384))
								{
									__LIB_2__::func_111(&(Local_15.f_152), 0);
									__LIB_1__::func_283(&(Local_274.f_11[9 /*3*/]), 0);
									__LIB_2__::func_303(Local_15[iVar0], Global_35, "AMBUSH_HA1_V1_MAGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									__LIB_1__::func_683(&Local_274, 16384);
									return false;
								}
								else if (Local_15[iVar0] == Local_15[2] && (PED::IS_PED_ON_MOUNT(Local_15[iVar0]) || __LIB_0__::func_163(Local_15[iVar0], 1868526510)))
								{
								}
								else
								{
									return true;
								}
								iVar0++;
								if (__LIB_2__::func_157(Local_274.f_7[1], Global_36))
								{
									Local_274.f_66 = 1;
									__LIB_1__::func_683(&Local_274, 32);
									return true;
								}
								if (__LIB_8__::func_747(&Local_274, 128) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
								{
									return true;
								}
								if (__LIB_1__::func_285(&(Local_274.f_11[5 /*3*/]), 1.75f))
								{
									return true;
								}
								return false;
							}
						}
					}
				}
			}
		}
	}
}

void func_140()
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	__LIB_2__::func_711(&Local_15);
	func_292(&Local_15, 0);
	if (!__LIB_8__::func_747(&Local_274, 4096))
	{
		if (__LIB_8__::func_747(&Local_274, 32))
		{
			sVar2 = "FOOT_CHASE_MALE";
		}
		else
		{
			sVar2 = "AMBUSH_HA1_V1_AGGRO";
		}
	}
	else if (__LIB_8__::func_747(&Local_274, 32))
	{
		sVar2 = "FOOT_CHASE_MALE";
	}
	else
	{
		sVar2 = "AMBUSH_HA1_V2_AGGRO";
	}
	__LIB_2__::func_691(&(Local_274.f_70), Local_15[0], 0, 30f);
	if (__LIB_8__::func_747(&Local_274, 32))
	{
		func_166();
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			if (__LIB_2__::func_227(0f, 1, Local_15[iVar0], 1))
			{
				if (!bVar1)
				{
					if ((Local_15.f_151 == 29 && func_179(&Local_15, iVar0) != 1) || (Local_15.f_151 == 30 && func_179(&Local_15, iVar0) != 3))
					{
						if (func_153(&Local_274, Local_15[iVar0], Global_35, sVar2, -1f, 1, 1, 0, 1744022339))
						{
							bVar1 = true;
						}
					}
				}
			}
			else
			{
				__LIB_2__::func_504(Local_15[iVar0], 500);
			}
			if (__LIB_1__::func_372(Local_15[iVar0], 0) == joaat("WEAPON_LASSO"))
			{
				__LIB_2__::func_272(Local_15[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_15[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
			}
			PED::_0x78815FC52832B690(Local_15[iVar0], 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar3, 0.2f, 0, 1, 1);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			func_303(&Local_15, iVar0, 1);
		}
		iVar0++;
	}
	if (func_304())
	{
		__LIB_2__::func_504(Global_35, 0);
	}
	if (__LIB_8__::func_747(&Local_274, 4096) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	__LIB_1__::func_683(&Local_274, 64);
}

void func_143()
{
	if (__LIB_8__::func_747(&Local_274, 8192) && !__LIB_8__::func_747(&Local_274, 2048))
	{
		func_159();
		if (!__LIB_8__::func_747(&Local_274, 131072))
		{
			if (PED::_IS_PED_LASSOED(Global_35))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				}
				__LIB_1__::func_683(&Local_274, 131072);
			}
		}
		else
		{
			if (__LIB_1__::func_285(&(Local_274.f_11[12 /*3*/]), 7f) || PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_15[2], true))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_1__::func_683(&Local_274, 2048);
			}
			else if (!__LIB_0__::func_75(&(Local_274.f_11[12 /*3*/])))
			{
				__LIB_1__::func_283(&(Local_274.f_11[12 /*3*/]), 0);
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(Global_35))
				{
					__LIB_3__::func_676(Global_35, 7000, 10000, 0, 0);
				}
			}
		}
	}
}

bool func_144()
{
	vector3 vVar0;
	if (!__LIB_0__::func_86(Local_15.f_182.f_18))
	{
		vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
		if (__LIB_0__::func_94(Global_35, Local_15.f_182.f_18, 0) > 5f && Global_1935630.f_40 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_146()
{
	int iVar0;
	vector3 vVar1;
	vVar1 = { __LIB_2__::func_114(Global_35, 1.25f) };
	switch (Local_274.f_1)
	{
		case 0:
			if (__LIB_2__::func_157(Local_274.f_7[2], vVar1))
			{
				Local_274.f_64 = 1;
				__LIB_1__::func_283(&(Local_274.f_11[0 /*3*/]), 0);
				__LIB_0__::func_115(&Local_274, 1);
			}
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_11[0 /*3*/]), 0.01f))
			{
				__LIB_1__::func_148(&(Local_274.f_11[0 /*3*/]));
				__LIB_2__::func_442(&Local_15, 1);
				__LIB_2__::func_548(&Local_15, 1);
				func_308();
				__LIB_0__::func_115(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_11[0 /*3*/]), 0.5f))
			{
				func_309();
				__LIB_0__::func_115(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_11[0 /*3*/]), 2f))
			{
				__LIB_1__::func_283(&(Local_274.f_11[10 /*3*/]), 0);
				if (__LIB_8__::func_747(&Local_274, 4096))
				{
					func_153(&Local_274, Local_15[0], Global_35, "AMBUSH_HA1_V2_TRIGGER", -1082130432 /* Float: -1f */, 0, 1, 0, 291934926);
				}
				else if (Local_15.f_227)
				{
					func_153(&Local_274, Local_15[0], Global_35, "AMBUSH_HA1_V1_TRIGGER_FEUD_A", -1082130432 /* Float: -1f */, 0, 1, 0, 291934926);
					__LIB_0__::func_115(&Local_274, 4);
					Jump @562; //curOff = 346
				}
				else
				{
					func_153(&Local_274, Local_15[0], Global_35, "AMBUSH_HA1_V1_TRIGGER", -1082130432 /* Float: -1f */, 0, 1, 0, 291934926);
				}
				__LIB_0__::func_115(&Local_274, 5);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0f, 1, Local_15[0], 1))
			{
				func_153(&Local_274, Local_15[0], Global_35, "AMBUSH_HA1_V1_TRIGGER_FEUD_B", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
				__LIB_0__::func_115(&Local_274, 5);
			}
			break;
		case 5:
			if (func_310())
			{
				if (__LIB_2__::func_1(Local_15[0], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_15[0], &iVar0, 0, 0, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					__LIB_1__::func_474(Local_15[1], &iVar0, 0.5f, 0, 1, 1);
				}
				__LIB_0__::func_115(&Local_274, 6);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_147()
{
	if (Local_274.f_64)
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, Local_274.f_7[0], 1, 0))
	{
		if (!__LIB_1__::func_205(Global_35, Local_274.f_7[1], 1, 0))
		{
			return true;
		}
	}
	if (__LIB_19__::func_90(&Local_15))
	{
		return true;
	}
	return false;
}

bool func_149(int iParam0)
{
	if (*iParam0 != -1)
	{
		Local_274.f_171 = *iParam0;
	}
	else
	{
		return false;
	}
	switch (Local_274.f_171)
	{
		case 0:
			if (Local_274.f_67 != Global_35)
			{
				__LIB_2__::func_504(Local_274.f_67, 250);
			}
			func_313();
			__LIB_2__::func_482(&(Local_274.f_136[0 /*17*/]), 1, 1);
			func_130(0);
			__LIB_2__::func_298();
			switch (Local_274.f_2)
			{
				case 1:
					Local_274.f_2 = 2;
					break;
				case 2:
					Local_274.f_2 = 3;
					break;
			}
			break;
		case 1:
			if (Local_274.f_67 != Global_35)
			{
				__LIB_2__::func_504(Local_274.f_67, 250);
			}
			__LIB_2__::func_691(&(Local_274.f_70), Local_15[0], 0, 30f);
			func_315();
			__LIB_2__::func_482(&(Local_274.f_136[1 /*17*/]), 1, 1);
			*iParam0 = -1;
			return true;
		default:
			if (__LIB_1__::func_285(&(Local_274.f_11[11 /*3*/]), 10f))
			{
				__LIB_2__::func_482(&(Local_274.f_136[0 /*17*/]), 1, 1);
				func_130(0);
				func_316();
				__LIB_2__::func_298();
			}
			break;
	}
	*iParam0 = -1;
	return false;
}

void func_152(bool bParam0)
{
	if (__LIB_2__::func_1(Local_15.f_56, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_56, true);
		AITRANSPORT::_0x67F7CEAC2391E114(Local_15.f_56, 1);
		TASK::TASK_STAND_STILL(Local_15.f_56, -1);
	}
	if (bParam0)
	{
		__LIB_1__::func_283(&(Local_274.f_11[1 /*3*/]), 1);
	}
}

bool func_153(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, 0, fParam4, iParam7, 0, 0, 2, bParam5, bParam6, iParam8, 1, 0, 0))
	{
		uParam0->f_67 = iParam1;
		return true;
	}
	return false;
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	func_319(iParam0, iParam1, iParam2, iParam3, iParam4, fParam5, 1);
}

bool func_156()
{
	if (__LIB_0__::func_94(Global_35, Local_15.f_182.f_18, 0) > 3.1f)
	{
		return true;
	}
	return false;
}

void func_159()
{
	if (__LIB_8__::func_747(&Local_274, 8192))
	{
		if (Local_274.f_2 < 8)
		{
			if (__LIB_0__::func_71(Global_35))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
			}
		}
	}
}

void func_163()
{
	int iVar0;
	int iVar1;
	vector3 vVar2[2];
	int iVar9;
	float fVar10;
	float fVar11;
	vVar2[0 /*3*/] = { func_324(&Local_274, 0) };
	vVar2[1 /*3*/] = { func_324(&Local_274, 1) };
	fVar10 = 0f;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			switch (Local_15.f_151)
			{
				case 29:
					switch (iVar0)
					{
						case 0:
							fVar10 = 0f;
							break;
						case 1:
							fVar10 = 0.5f;
							break;
						case 2:
							fVar10 = 2.75f;
							break;
					}
					break;
				case 30:
					switch (iVar0)
					{
						case 0:
							fVar10 = 1f;
							break;
						case 1:
							fVar10 = 2f;
							break;
						case 2:
							fVar10 = 4.25f;
							break;
					}
					break;
			}
			if (!PED::IS_PED_ON_MOUNT(Local_15[iVar0]))
			{
				iVar1 = func_127(iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar9);
				if (func_325(iVar1))
				{
					if (__LIB_2__::func_1(Local_15.f_40[iVar1], 0, 1))
					{
						TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar1], -1, -1, 3f, 1, 0, 0);
					}
				}
				else if (__LIB_8__::func_747(&Local_274, 4096))
				{
					if (iVar0 == 2)
					{
						TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_56, -1, -1, 3f, 1, 0, 0);
					}
				}
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar2[1 /*3*/], 30f, 2.5f, 0, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(0, Global_35, 4, vVar2[1 /*3*/], 553728, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(Local_15[iVar0], &iVar9, fVar10, 0, 1, 1);
			}
			else
			{
				fVar11 = func_326(&Local_274, iVar0);
				fVar11 = __LIB_2__::func_709((fVar11 + 180f));
				TASK::OPEN_SEQUENCE_TASK(&iVar9);
				if (iVar0 != 2)
				{
					TASK::TASK_ACHIEVE_HEADING(0, fVar11, 1250);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar2[1 /*3*/], 30f, 2.5f, 0, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(0, Global_35, 4, vVar2[1 /*3*/], 553728, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(Local_15[iVar0], &iVar9, fVar10, 0, 1, 1);
			}
			PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
			__LIB_2__::func_237(&Local_15, iVar0, 128);
			__LIB_2__::func_237(&Local_15, iVar0, 256);
		}
		iVar0++;
	}
}

bool func_164()
{
	int iVar0;
	if (Local_274.f_4 < 2)
	{
		if (!__LIB_8__::func_747(&Local_274, 32768))
		{
			if (__LIB_2__::func_227(-3f, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Local_15[2], 1))
			{
				iVar0 = -1;
				iVar0 = __LIB_2__::func_439(&Local_15, 0, 1, 0);
				if (iVar0 >= 0)
				{
					if (__LIB_8__::func_747(&Local_274, 4096))
					{
						if (func_153(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_HA1_V2_FLEE", 100f, 1, 1, 0, 291934926))
						{
							__LIB_1__::func_683(&Local_274, 32768);
						}
					}
					else if (func_153(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_HA1_V1_FLEE", 100f, 1, 1, 0, 291934926))
					{
						__LIB_1__::func_683(&Local_274, 32768);
					}
				}
			}
		}
	}
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_0__::func_614(&Local_274, 1);
			break;
		case 1:
			if (PED::_GET_RIDER_OF_MOUNT(Local_15.f_56, false) == 0)
			{
				if (!__LIB_8__::func_747(&Local_274, 2097152))
				{
					if (!PED::IS_PED_JACKING(Global_35))
					{
						if (Local_15.f_151 == 29)
						{
							func_153(&Local_274, Global_35, Global_35, "AMBUSH_HA1_V1_ATTACK", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
						}
						else
						{
							func_153(&Local_274, Global_35, Global_35, "AMBUSH_HA1_V2_ATTACK", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
						}
					}
					__LIB_1__::func_683(&Local_274, 2097152);
				}
				__LIB_2__::func_423(&Local_15, 1);
				__LIB_1__::func_148(&(Local_274.f_11[4 /*3*/]));
				__LIB_0__::func_614(&Local_274, 2);
			}
			else
			{
				if (__LIB_8__::func_747(&Local_274, 32768))
				{
					if (!__LIB_8__::func_747(&Local_274, 4194304))
					{
						if (__LIB_2__::func_227(-3f, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (!__LIB_2__::func_385(Global_35))
							{
								if (Local_15.f_151 == 29)
								{
									func_153(&Local_274, Global_35, Global_35, "AMBUSH_HA1_V1_PLYFINAL_LOSS", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
								}
								else
								{
									func_153(&Local_274, Global_35, Global_35, "AMBUSH_HA1_V2_PLYFINAL_LOSS", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
								}
								Local_274.f_63 = __LIB_0__::func_485();
								__LIB_1__::func_683(&Local_274, 4194304);
							}
						}
					}
				}
				if (__LIB_0__::func_94(Local_15.f_56, Global_36, 1) > 100f)
				{
					if (!__LIB_4__::func_377(256))
					{
						__LIB_0__::func_635(256);
					}
				}
			}
			break;
		case 2:
			if (func_332())
			{
				__LIB_1__::func_148(&(Local_274.f_11[4 /*3*/]));
				__LIB_0__::func_614(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_11[4 /*3*/]), 1f))
			{
				__LIB_1__::func_683(&Local_274, 128);
				__LIB_0__::func_614(&Local_274, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_165()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			if (!bVar1)
			{
				if (__LIB_2__::func_227(0f, 1, Local_15[iVar0], 1))
				{
					if (__LIB_8__::func_747(&Local_274, 524288))
					{
						if (Local_15.f_151 == 29)
						{
							func_153(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_HA1_V1_AGGRO", -1f, 0, 1, 0, 1744022339);
						}
						else
						{
							func_153(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_HA1_V2_AGGRO", -1f, 0, 1, 0, 1744022339);
						}
					}
					else if (Local_15.f_151 == 29)
					{
						func_153(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_HA1_V1_HAGGRO", -1f, 0, 1, 0, 1744022339);
					}
					else
					{
						func_153(&Local_274, Local_15[iVar0], Global_35, "AMBUSH_HA1_V2_AGGRO", -1f, 0, 1, 0, 1744022339);
					}
					bVar1 = true;
				}
			}
			PED::_0x1F44B7E283C09EDE(Local_15[iVar0], 0.05f, 3000);
			PED::_0x78815FC52832B690(Local_15[iVar0], 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar2, 0.5f, 1f, 1, 1);
			__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			func_303(&Local_15, iVar0, 1);
		}
		iVar0++;
	}
	Local_274.f_66 = 1;
	func_166();
	return true;
}

void func_166()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_333(iVar0))
		{
			PED::SET_PED_RESET_FLAG(Local_15[iVar0], 27, true);
		}
		iVar0++;
	}
}

void func_177(var uParam0)
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
					__LIB_2__::func_237(uParam0, iVar0, 512);
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

int func_179(int iParam0, int iParam1)
{
	switch (iParam0->f_151)
	{
		case 29:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 2:
					return 0;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				case 2:
					return 3;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_180()
{
	if (!__LIB_8__::func_747(&Local_274, 4096))
	{
		return "AMBUSH_HA1_V1_BYPASS";
	}
	return "AMBUSH_HA1_V2_BYPASS";
}

void func_183()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	iVar5 = 0;
	while (iVar5 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar5], 0, 0))
		{
			if (!__LIB_8__::func_747(&Local_274, 1024))
			{
				vVar0 = { func_353(&Local_274, iVar5) };
				if (!__LIB_0__::func_86(vVar0))
				{
					fVar3 = func_354(&Local_274, iVar5);
					iVar4 = func_355(&Local_274, iVar5);
					if (fVar3 > 0f)
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar5], vVar0, fVar3, iVar4, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar5], 45, true);
					}
				}
			}
			else
			{
				PED::_0x1854217C640B39EC(Local_15[iVar5], Global_35, 0f, 0f, 0f, 15f, 0, 0);
			}
			PED::SET_PED_COMBAT_RANGE(Local_15[iVar5], 0);
		}
		__LIB_2__::func_156(&Local_15, iVar5, 128);
		__LIB_2__::func_156(&Local_15, iVar5, 256);
		iVar5++;
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_15.f_40[iVar0]))
			{
				iVar1 = PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], true);
				if (!__LIB_2__::func_1(iVar1, 0, 1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

char[] func_187(var uParam0)
{
	if (__LIB_8__::func_747(uParam0, 4096))
	{
		return "AMBUSH_HA1_V2_FLEE";
	}
	return "AMBUSH_HA1_V1_FLEE";
}

void func_257(var uParam0, var uParam1)
{
	switch (uParam1->f_5)
	{
		case 0:
			uParam0->f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
			VOLUME::_0x39816F6F94F385AD(uParam0->f_239, -2288.972f, -374.4293f, 159.12f, 0f, 0f, 3.047187f, 21.12421f, 92.61999f, 25.71437f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_239, -2255.16f, -417.7544f, 159.12f, 0f, 0f, 96.04719f, 21.12421f, 62.14087f, 25.71437f);
			if (__LIB_8__::func_747(uParam1, 8))
			{
				uParam1->f_7[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(uParam1->f_7[0], -2267.839f, -525.2435f, 151.0723f, 0f, 0f, 2.396824f, 149.0371f, 180.8692f, 99.82714f);
				VOLUME::_0x39816F6F94F385AD(uParam1->f_7[0], -2261.972f, -313.1424f, 167.7692f, 0f, 0f, 9.073042f, 140.9079f, 180.8692f, 65.75652f);
				uParam1->f_7[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2271.356f, -439.497f, 151.0723f, 0f, 0f, -7.458085f, 36.63259f, 24.51159f, 99.82714f, "volBypass");
				uParam0->f_182[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2294.032f, -413.7893f, 159.1203f, 0f, 0f, -23.06396f, 36.63259f, 48.79445f, 25.71437f, "volHalt");
				uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2288.818f, -417.575f, 156.12f, 0f, 0f, -1.952813f, 36.63259f, 48.79445f, 25.71437f, "volSlowest");
				uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2286.914f, -417.64f, 153.1203f, 0f, 0f, -1.952813f, 36.63259f, 48.79445f, 25.71437f, "volSlower");
				uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2283.943f, -417.49f, 150.12f, 0f, 0f, -1.952813f, 36.63259f, 48.79445f, 25.71437f, "volSlow");
				uParam1->f_7[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2287.063f, -417.686f, 159.1203f, 0f, 0f, -1.952813f, 36.63259f, 48.79445f, 25.71437f, "volTrigger");
			}
			else
			{
				uParam1->f_7[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
				VOLUME::_0x39816F6F94F385AD(uParam1->f_7[0], -2185.552f, -402.3318f, 151.0723f, 0f, 0f, 91.34035f, 149.0371f, 180.8692f, 99.82714f);
				VOLUME::_0x39816F6F94F385AD(uParam1->f_7[0], -2392.493f, -415.0987f, 167.7692f, 0f, 0f, 98.01658f, 140.9079f, 180.8692f, 65.75652f);
				uParam1->f_7[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2306.666f, -416.8317f, 151.0723f, 0f, 0f, 101.3598f, 44.8636f, 24.51159f, 99.82714f, "volBypass");
				uParam0->f_182[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2289.111f, -421.5056f, 151.0723f, 0f, 0f, 90.25735f, 38.63259f, 50.79445f, 40.97283f, "volHalt");
				uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2289.152f, -412.693f, 148.072f, 0f, 0f, 90.25735f, 36.63259f, 48.79445f, 40.97283f, "volSlowest");
				uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2289.165f, -409.758f, 145.072f, 0f, 0f, 90.25735f, 36.63259f, 48.79445f, 40.97283f, "volSlower");
				uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2289.216f, -398.351f, 142.0723f, 0f, 0f, 90.25735f, 36.63259f, 48.79445f, 40.97283f, "volSlow");
				uParam1->f_7[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2289.152f, -412.636f, 159.1203f, 0f, 0f, 90.25735f, 36.63259f, 48.79445f, 25.71437f, "volTrigger");
			}
			break;
	}
}

int func_272(int iParam0)
{
	if (__LIB_8__::func_747(&Local_274, 4096))
	{
		switch (iParam0)
		{
			case 0:
				return -177268864;
			case 1:
				return -1422785781;
			case 2:
				return -520917363;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1615541117;
			case 1:
				return 2106813965;
			case 2:
				return 1120368758;
			default:
				break;
		}
	}
	return __LIB_2__::func_16();
}

Vector3 func_274(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_412(uParam0, iParam1) };
	return vVar0;
}

var func_275(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_412(uParam0, iParam1) };
	return Var0.f_3;
}

Vector3 func_278(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_418(uParam0, iParam1) };
	return vVar0;
}

var func_279(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_418(uParam0, iParam1) };
	return Var0.f_3;
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0711_G_M_M_UniRanchers_01_WHITE_01";
		case 1:
			return "0712_G_M_M_UniRanchers_01_WHITE_02";
		case 2:
			return "0713_G_M_M_UniRanchers_01_WHITE_03";
		case 3:
			return "0714_G_M_M_UniRanchers_01_WHITE_04";
		default:
			break;
	}
	return "";
}

int func_291(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_434(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_292(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (iParam0->f_182.f_17 & 4 != 0)
	{
		return;
	}
	if (iParam0->f_182.f_17 & 128 != 0)
	{
		if (!__LIB_2__::func_47(&(iParam0->f_182), 256))
		{
			if (__LIB_2__::func_47(&(iParam0->f_182), 64))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_STOP")))
				{
					__LIB_1__::func_283(&(iParam0->f_182.f_10), 0);
					if (__LIB_0__::func_33(&(iParam0->f_182.f_10)))
					{
						__LIB_2__::func_112(&(iParam0->f_182.f_10));
					}
					if (__LIB_1__::func_285(&(iParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630.f_40 != 0 && bParam1)
						{
							TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 8, 0, 0);
							__LIB_2__::func_48(&(iParam0->f_182), 256);
						}
					}
				}
				else if (__LIB_0__::func_75(&(iParam0->f_182.f_10)))
				{
					__LIB_2__::func_113(&(iParam0->f_182.f_10));
				}
			}
		}
	}
	if (iParam0->f_182.f_17 & 8 != 0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_2__::func_48(&(iParam0->f_182), 4);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		if (__LIB_2__::func_1(PED::GET_MOUNT(Global_35), 0, 1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_MOUNT(Global_35), false);
		}
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (iParam0->f_182.f_17 & 32768 != 0 && iParam0->f_182.f_17 & 64 == 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (iParam0->f_182.f_17 & 1 == 0)
	{
		if (bVar1 && (__LIB_2__::func_49(iParam0->f_182[3]) || __LIB_2__::func_47(&(iParam0->f_182), 16)))
		{
			if (__LIB_2__::func_47(&(iParam0->f_182), 32))
			{
				if (__LIB_2__::func_210(iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!__LIB_2__::func_47(&(iParam0->f_182), 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				__LIB_2__::func_48(&(iParam0->f_182), 1);
			}
		}
		else if (bVar1 && __LIB_2__::func_49(iParam0->f_182[2]))
		{
			if (__LIB_2__::func_210(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_22);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 6f);
					}
				}
			}
		}
		else if (bVar1 && __LIB_2__::func_49(iParam0->f_182[1]))
		{
			if (__LIB_2__::func_210(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_23);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 9f);
					}
				}
			}
		}
		else if (__LIB_2__::func_49(iParam0->f_182[0]))
		{
			if (!__LIB_2__::func_47(&(iParam0->f_182), 64))
			{
				__LIB_2__::func_48(&(iParam0->f_182), 64);
			}
			if (__LIB_2__::func_210(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_24);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 12f);
					}
				}
			}
		}
	}
	if (bVar1 && iParam0->f_182.f_17 & 1 != 0)
	{
		if (!__LIB_2__::func_47(&(iParam0->f_182), 2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iVar3, 5f, 5000, false);
					__LIB_1__::func_283(&(iParam0->f_182.f_7), 0);
					__LIB_2__::func_48(&(iParam0->f_182), 2);
				}
			}
			else
			{
				if (__LIB_0__::func_27(iParam0->f_182.f_5, 16))
				{
					bVar4 = __LIB_2__::func_710(Global_35, &(iParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = __LIB_2__::func_660(Global_35, &(iParam0->f_182.f_6), iParam0->f_182.f_5, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
				}
				if (bVar4)
				{
					if (__LIB_0__::func_27(iParam0->f_182.f_5, 8))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
						if (__LIB_2__::func_1(iVar0, 0, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
						}
					}
					iParam0->f_182.f_18 = { Global_36 };
					if (__LIB_2__::func_1(iVar0, 0, 1))
					{
						TASK::TASK_STAND_STILL(iVar0, BUILTIN::FLOOR((iParam0->f_182.f_21 * 1000f)));
					}
					__LIB_1__::func_283(&(iParam0->f_182.f_7), 0);
					__LIB_2__::func_48(&(iParam0->f_182), 2);
				}
			}
		}
		else if (!__LIB_2__::func_47(&(iParam0->f_182), 4))
		{
			if (__LIB_1__::func_285(&(iParam0->f_182.f_7), iParam0->f_182.f_21))
			{
				if (__LIB_0__::func_27(iParam0->f_182.f_5, 8))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					if (__LIB_2__::func_1(iVar0, 0, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_2__::func_48(&(iParam0->f_182), 4);
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
				if (__LIB_2__::func_1(iVar0, 0, 1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				}
			}
		}
	}
}

void func_303(int iParam0, int iParam1, int iParam2)
{
	func_474(iParam0, iParam1, iParam2);
}

bool func_304()
{
	int iVar0;
	if (Local_15.f_151 == 29)
	{
		return false;
	}
	if (Local_274.f_63 < 0)
	{
		return false;
	}
	if (__LIB_2__::func_227(0f, 1, Global_35, 1))
	{
		return false;
	}
	iVar0 = (__LIB_0__::func_485() - Local_274.f_63);
	if (iVar0 >= 3000)
	{
		return false;
	}
	if (__LIB_1__::func_339(Local_15.f_152.f_16, 1, 0, 1, 0) || Local_15.f_152.f_16 == 256)
	{
		return true;
	}
	return false;
}

void func_308()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			vVar2 = { func_477(&Local_274, iVar0) };
			fVar5 = func_326(&Local_274, iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15[iVar0], vVar2, 2f, 5000, 0.5f, 2048, fVar5);
			iVar1 = func_127(iVar0);
			if (__LIB_2__::func_1(Local_15.f_40[iVar1], 0, 1))
			{
				PED::FORCE_PED_MOTION_STATE(Local_15.f_40[iVar1], joaat("MOTIONSTATE_RUNSTART"), false, 0, false);
			}
		}
		iVar0++;
	}
}

void func_309()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (__LIB_2__::func_1(Local_15[2], 0, 1))
	{
		PED::_0x8ACC0506743A8A5C(Local_15[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
		vVar0 = { func_477(&Local_274, 2) };
		fVar3 = __LIB_0__::func_152(vVar0, Global_36, 1);
		if (__LIB_8__::func_747(&Local_274, 4096))
		{
			__LIB_2__::func_272(Local_15[2], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[2], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 2f, -1, 0.25f, 0, fVar3);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			__LIB_1__::func_474(Local_15[2], &iVar4, 0, 0, 1, 1);
		}
		else
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[2], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 2f, -1, 0.25f, 1, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			__LIB_1__::func_474(Local_15[2], &iVar4, 0, 0, 1, 1);
		}
	}
}

bool func_310()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (__LIB_0__::func_163(Local_15[iVar0], 1435919172))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	if (!__LIB_1__::func_285(&(Local_274.f_11[10 /*3*/]), 2f))
	{
		iVar1 = 0;
	}
	return iVar1;
}

void func_313()
{
	__LIB_1__::func_148(&(Local_274.f_11[11 /*3*/]));
	if (Local_15.f_151 == 29)
	{
		func_153(&Local_274, Global_35, Local_15[0], "AMBUSH_HA1_V1_ILO_DEFUSE", 50f, 1, 1, 0, 291934926);
	}
	else
	{
		func_153(&Local_274, Global_35, Local_15[0], "AMBUSH_HA1_V2_ILO_DEFUSE", 50f, 1, 1, 0, 291934926);
	}
}

void func_315()
{
	__LIB_1__::func_148(&(Local_274.f_11[11 /*3*/]));
	__LIB_2__::func_592(&(Local_274.f_136), 1, 1);
	func_130(0);
	__LIB_2__::func_298();
	if (Local_15.f_151 == 29)
	{
		if (!__LIB_8__::func_747(&Local_274, 524288))
		{
			func_153(&Local_274, Global_35, Local_15[0], "AMBUSH_HA1_V1_DISMOUNT_NO", 50f, 1, 1, 0, 291934926);
		}
		else
		{
			func_153(&Local_274, Global_35, Local_15[0], "AMBUSH_HA1_V1_ILO_ANTAGONIZE", -1082130432 /* Float: -1f */, 1, 1, 0, 291934926);
		}
	}
	else
	{
		func_153(&Local_274, Global_35, Local_15[0], "AMBUSH_HA1_V2_ILO_ANTAGONIZE", 50f, 1, 1, 0, 291934926);
	}
}

void func_316()
{
	__LIB_1__::func_148(&(Local_274.f_11[11 /*3*/]));
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6)
{
	struct<23> Var0;
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	if (bParam6)
	{
		TASK::_0xE7FA07624574B79A((*iParam0)[iParam1], iParam2, iParam3, iParam4, fParam5, 1, 0, 0, 0);
	}
	TASK::TASK_LOOK_AT_ENTITY((*iParam0)[iParam1], iParam2, BUILTIN::FLOOR(fParam5), 0, 51, 0);
	__LIB_2__::func_281(&Var0, iParam2, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5((*iParam0)[iParam1], &Var0);
}

Vector3 func_324(var uParam0, int iParam1)
{
	switch (uParam0->f_5)
	{
		case 0:
			if (__LIB_8__::func_747(uParam0, 8))
			{
				switch (iParam1)
				{
					case 0:
						return func_498(0, 6);
					case 1:
						return func_498(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_498(1, 7);
					case 1:
						return func_498(1, 9);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_325(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 1);
}

float func_326(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_499(uParam0, iParam1) };
	return Var0.f_3;
}

bool func_332()
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar1 = 1;
	fVar2 = __LIB_0__::func_94(Local_274.f_57, Global_36, 0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (Local_15[iVar0] != Local_274.f_57)
			{
				if (!func_500(&Local_15, iVar0))
				{
					if (__LIB_2__::func_660(Local_15[iVar0], &(Local_274.f_58[iVar0]), 1056, 384, 0, 1000f, 100, 0, 0))
					{
						if (__LIB_0__::func_94(Local_15[iVar0], Global_36, 0) > fVar2)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[iVar0], Local_274.f_57, -1, -1f, -1f, -1f);
						}
						else
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[iVar0], Global_35, -1, -1f, -1f, -1f);
						}
						func_501(&Local_15, iVar0);
					}
					else
					{
						iVar1 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_333(int iParam0)
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
	if (Global_1935630.f_25)
	{
		return false;
	}
	if (Local_274.f_66)
	{
		if (Local_274.f_67 != Global_35)
		{
			if (!__LIB_2__::func_227(0f, 1, Local_274.f_67, 1))
			{
				__LIB_1__::func_148(&(Local_274.f_11[13 /*3*/]));
				return true;
			}
			if (__LIB_8__::func_747(&Local_274, 32))
			{
				if (!__LIB_8__::func_747(&Local_274, 33554432))
				{
					__LIB_1__::func_148(&(Local_274.f_11[13 /*3*/]));
					return true;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.3f;
			break;
		case 1:
			fVar0 = 0.4f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
	}
	if (__LIB_1__::func_285(&(Local_274.f_11[13 /*3*/]), fVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_353(var uParam0, int iParam1)
{
	switch (uParam0->f_5)
	{
		case 0:
			if (__LIB_8__::func_747(uParam0, 8))
			{
			}
			else
			{
				switch (iParam1)
				{
					case 2:
						return func_498(1, 12);
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_354(var uParam0, int iParam1)
{
	if (__LIB_8__::func_747(uParam0, 8))
	{
	}
	else
	{
		switch (iParam1)
		{
			case 2:
				return 2f;
			default:
				break;
		}
	}
	return 0f;
}

int func_355(var uParam0, int iParam1)
{
	if (__LIB_8__::func_747(uParam0, 8))
	{
	}
	else
	{
		switch (iParam1)
		{
			case 2:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

struct<4> func_412(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_5)
	{
		case 0:
			if (__LIB_8__::func_747(uParam0, 8))
			{
				switch (iParam1)
				{
					case 0:
						return func_523(0, 0);
					case 1:
						return func_523(0, 1);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_523(1, 0);
					case 1:
						return func_523(1, 1);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_418(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_5)
	{
		case 0:
			if (__LIB_8__::func_747(uParam0, 8))
			{
				switch (iParam1)
				{
					case 0:
						return func_523(0, 0);
					case 1:
						return func_523(0, 0);
					case 2:
						if (!__LIB_8__::func_747(uParam0, 4096))
						{
							return func_523(0, 2);
						}
						else
						{
							return func_523(0, 8);
						}
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_523(1, 0);
					case 1:
						return func_523(1, 0);
					case 2:
						if (!__LIB_8__::func_747(uParam0, 4096))
						{
							return func_523(1, 2);
						}
						else
						{
							return func_523(1, 10);
						}
						break;
				}
			}
			break;
	}
	return Var0;
}

int func_434(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_434(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_474(int iParam0, int iParam1, int iParam2)
{
	TASK::_0x541E5B41DCA45828((*iParam0)[iParam1], iParam2, 0);
	_NAMESPACE29::_0x0EABF182FBB63D72((*iParam0)[iParam1], 6, 1);
	TASK::TASK_CLEAR_LOOK_AT((*iParam0)[iParam1]);
}

Vector3 func_477(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_499(uParam0, iParam1) };
	return vVar0;
}

Vector3 func_498(int iParam0, int iParam1)
{
	return func_617(iParam0, iParam1);
}

struct<4> func_499(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_5)
	{
		case 0:
			if (__LIB_8__::func_747(uParam0, 8))
			{
				switch (iParam1)
				{
					case 0:
						return func_523(0, 3);
					case 1:
						return func_523(0, 4);
					case 2:
						if (!__LIB_8__::func_747(uParam0, 4096))
						{
							return func_523(0, 5);
						}
						else
						{
							return func_523(0, 9);
						}
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_523(1, 3);
					case 1:
						return func_523(1, 4);
					case 2:
						if (!__LIB_8__::func_747(uParam0, 4096))
						{
							return func_523(1, 5);
						}
						else
						{
							return func_523(1, 11);
						}
						break;
				}
			}
			break;
	}
	return Var0;
}

bool func_500(var uParam0, int iParam1)
{
	return __LIB_2__::func_25(uParam0, iParam1, 16777216);
}

void func_501(var uParam0, int iParam1)
{
	__LIB_2__::func_237(uParam0, iParam1, 16777216);
}

struct<4> func_523(int iParam0, int iParam1)
{
	return func_628(iParam0, iParam1);
}

Vector3 func_617(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2285.609f, -403.0194f, 156.5418f;
				case 1:
					return -2286.968f, -401.7005f, 156.4143f;
				case 2:
					return -2292.066f, -423.0259f, 155.2855f;
				case 3:
					return -2282.27f, -410.7172f, 156.6573f;
				case 4:
					return -2284.749f, -413.4199f, 156.5533f;
				case 5:
					return -2286.816f, -420.0552f, 156.7268f;
				case 6:
					return -2298.12f, -324.8313f, 154.3994f;
				case 7:
					return -2610.288f, -284.9024f, 157.7555f;
				case 8:
					return -2287.398f, -428.5055f, 155.9038f;
				case 9:
					return -2281.027f, -421.974f, 156.958f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2277.326f, -415.6383f, 156.4975f;
				case 1:
					return -2275.842f, -418.8721f, 156.5202f;
				case 2:
					return -2295.532f, -420.0864f, 154.2598f;
				case 3:
					return -2284.606f, -410.5184f, 156.6827f;
				case 4:
					return -2287.559f, -412.4594f, 156.6903f;
				case 5:
					return -2292.713f, -409.4035f, 156.0565f;
				case 6:
					return -2283.607f, -417.1963f, 156.6007f;
				case 7:
					return -2228.915f, -410.1693f, 163.0907f;
				case 8:
					return -2276.229f, -424.3391f, 157.2648f;
				case 9:
					return -2117.987f, -471.3092f, 145.7247f;
				case 10:
					return -2295.942f, -411.7133f, 154.5117f;
				case 11:
					return -2291.431f, -407.9535f, 156.5732f;
				case 12:
					return -2293.373f, -416.6461f, 155.4363f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

struct<4> func_628(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_617(iParam0, iParam1) };
	Var0.f_3 = func_711(iParam0, iParam1);
	return Var0;
}

float func_711(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 193.5343f;
				case 1:
					return 195.4277f;
				case 2:
					return 305.7126f;
				case 3:
					return 191.899f;
				case 4:
					return 198.0965f;
				case 5:
					return 282.0965f;
				case 6:
					return 44.074f;
				case 7:
					return 97.2506f;
				case 8:
					return -53.0486f;
				case 9:
					return -15.0486f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 59.5343f;
				case 1:
					return 57.4277f;
				case 2:
					return 319.7126f;
				case 3:
					return 41.899f;
				case 4:
					return 64.0965f;
				case 5:
					return 338.0965f;
				case 6:
					return 24.0965f;
				case 7:
					return -67.8178f;
				case 8:
					return -111.2188f;
				case 9:
					return -84.6157f;
				case 10:
					return -65.0486f;
				case 11:
					return -63.0486f;
				case 12:
					return 323.8981f;
			}
			break;
	}
	return 0f;
}

