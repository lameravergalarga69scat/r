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
	struct<34> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, 0, 6, 0, 0, 0, 6 } ;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 1065353216;
	var uLocal_320 = 1119092736;
	var uLocal_321 = 1092616192;
	var uLocal_322 = 1085276160;
	bool bLocal_323 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_323 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_323, 961, 0);
		if (bLocal_323)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (__LIB_2__::func_558(&ScriptParam_0))
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
					__LIB_17__::func_780();
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
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
	int iVar1;
	int iVar2;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			func_125(iVar0);
			func_126(iVar0);
			if (__LIB_0__::func_58(iVar0))
			{
				__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[iVar0], 0, -1, 1);
			}
			else
			{
				if (func_129(iVar0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], true, 0, true);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 98, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 47, true);
			switch (iVar0)
			{
				case 0:
					iVar1 = 60;
					iVar2 = 110;
					break;
				case 1:
					PED::_0x89F5E7ADECCCB49C(Local_15[iVar0], "intimidate");
					iVar1 = 60;
					iVar2 = 110;
					break;
				case 2:
					iVar1 = 40;
					iVar2 = 110;
					break;
				case 3:
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					iVar1 = 60;
					iVar2 = 110;
					break;
				case 4:
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					iVar1 = 40;
					iVar2 = 110;
					break;
				case 5:
					__LIB_2__::func_429(&Local_15, iVar0, 0);
					iVar1 = 70;
					iVar2 = 110;
					break;
			}
			__LIB_2__::func_150(&Local_15, iVar0, iVar1, iVar2);
			__LIB_2__::func_553(&Local_15, iVar0);
		}
		iVar0++;
	}
	return true;
}

bool func_23()
{
	if (!__LIB_2__::func_275(&Local_274, 2))
	{
		if (func_136())
		{
			__LIB_2__::func_560();
			func_138();
			__LIB_2__::func_489(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (__LIB_2__::func_531())
			{
				if (func_141())
				{
					__LIB_2__::func_560();
					Local_274.f_32 = Local_15.f_9[0];
					__LIB_2__::func_442(&Local_15, 1);
					__LIB_2__::func_500(&Local_15, 1);
					__LIB_2__::func_494();
					__LIB_2__::func_489(&Local_274, 1);
				}
			}
			else if (__LIB_2__::func_559())
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
				if (func_146())
				{
					__LIB_2__::func_560();
					Local_274.f_32 = Local_15.f_9[0];
					__LIB_2__::func_442(&Local_15, 1);
					__LIB_2__::func_500(&Local_15, 1);
					__LIB_2__::func_494();
					__LIB_2__::func_489(&Local_274, 1);
				}
			}
			break;
		case 1:
			__LIB_2__::func_560();
			__LIB_2__::func_436(&Local_15, 0);
			func_147();
			if (func_148())
			{
				__LIB_2__::func_489(&Local_274, 2);
			}
			break;
		case 2:
			func_149();
			__LIB_2__::func_489(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_31()
{
	func_147();
	if (!__LIB_2__::func_275(&Local_274, 32))
	{
		if (PED::IS_PED_BEING_JACKED(Global_35))
		{
			if (Local_274.f_31 >= 0)
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Local_15[Local_274.f_31], Local_274.f_33[Local_274.f_31], true, -142743235);
				PED::SET_PED_CONFIG_FLAG(Local_15[Local_274.f_31], 249, true);
			}
			__LIB_2__::func_277(&Local_274, 32);
		}
		else
		{
			func_163();
			func_164();
		}
	}
	Local_274.f_29 = __LIB_2__::func_207(&Local_15);
	switch (Local_274.f_4)
	{
		case 0:
			if (__LIB_2__::func_1(Global_1935630.f_40, 0, 1))
			{
				PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 3, -1f);
				PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 1, -1f);
			}
			__LIB_2__::func_554(&Local_15, 1, 0, (Local_15.f_215 - 1));
			__LIB_1__::func_283(&(Local_274.f_7[0 /*3*/]), 0);
			__LIB_2__::func_151(&Local_274, 1);
			break;
		case 1:
			func_168();
			if (Local_274.f_29 <= 1)
			{
				__LIB_2__::func_151(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_556(&Local_15, &(Local_274.f_27), &(Local_15.f_241), "COMBAT_FLEE", 3f))
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

bool func_83()
{
	switch (Local_15.f_221)
	{
		case 0:
			Local_274 = 0;
			break;
		case 1:
			Local_274 = 1;
			break;
		case 2:
			Local_274 = 2;
			break;
		case 3:
			Local_274 = 3;
			break;
		default:
			Local_274 = 0;
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 1, Local_15.f_221), true))
	{
		__LIB_2__::func_277(&Local_274, 1);
	}
	Local_15.f_215 = 6;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 0;
	Local_15.f_181 = 1;
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 2, 1);
	__LIB_2__::func_491();
	func_240();
	__LIB_2__::func_41(&(Local_15.f_182), 65, 0f, 2f, 2f, 2.5f, 32768);
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	func_242(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!func_243(iParam0, 1))
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

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_255(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { __LIB_0__::func_217(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { __LIB_0__::func_217(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_260(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_260(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125(int iParam0)
{
	char* sVar0;
	sVar0 = func_261(iParam0);
	__LIB_2__::func_133(Local_15[iParam0], sVar0, 0);
}

void func_126(int iParam0)
{
	int iVar0;
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], true, true);
	__LIB_2__::func_272(Local_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	iVar0 = func_264(iParam0);
	__LIB_2__::func_530(&Local_15, Local_15[iParam0], iVar0, 1);
}

bool func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return true;
		case 3:
		case 4:
		case 5:
			return true;
		default:
			break;
	}
	return false;
}

bool func_136()
{
	if (__LIB_2__::func_538(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_28), 0, 5, 1))
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
	if (!bVar2)
	{
		if (__LIB_2__::func_275(&Local_274, 64))
		{
			bVar2 = true;
		}
		else if (__LIB_2__::func_1(Local_15[0], 0, 1))
		{
			__LIB_2__::func_336(Local_15[0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
			bVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
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
			if (!bVar2)
			{
				__LIB_2__::func_336(Local_15[iVar0], Global_35, "CALLOUT_JUST_KILL_EM_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_2__::func_224(Local_15.f_151, 1);
}

bool func_141()
{
	__LIB_2__::func_277(&Local_274, 4);
	return true;
}

bool func_146()
{
	vector3 vVar0;
	if (!__LIB_2__::func_47(&(Local_15.f_182), 64))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
	if (__LIB_2__::func_157(Local_274.f_23[2], vVar0) || __LIB_2__::func_157(Local_274.f_23[2], Global_36))
	{
		return true;
	}
	return false;
}

void func_147()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (__LIB_2__::func_167(Local_15[iVar0], 1) || __LIB_1__::func_472(Local_15[iVar0], 20f, 7f, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_148()
{
	char* sVar0;
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_7[1 /*3*/]), 0);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 0.1f))
			{
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				sVar0 = "GANG_TAUNT_GEN";
				if (func_243(1, 1))
				{
					sVar0 = "ARRIVAL_COMBAT_TRAP_NEUTRAL";
				}
				__LIB_2__::func_336(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, 1);
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 1f) || __LIB_1__::func_472(Local_15[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_291();
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 2.5f))
			{
				__LIB_2__::func_336(Local_15[4], Global_35, "SURROUNDED", -1073741824 /* Float: -2f */, 1, -500314840, 0);
				func_292();
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 4.5f))
			{
				__LIB_2__::func_336(Local_15[5], Global_35, "TAUNT_GEN_MALE", -1073741824 /* Float: -2f */, 1, -500314840, 2);
				__LIB_2__::func_277(&Local_274, 64);
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 5);
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 1f))
			{
				__LIB_2__::func_158(&Local_274, 6);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_149()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
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

int func_163()
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_275(&Local_274, 16))
	{
		Local_274.f_31 = __LIB_2__::func_557(&Local_15, 0, (Local_15.f_215 - 1), 0);
	}
	else if (Local_274.f_31 >= 0)
	{
		if (!__LIB_2__::func_1(Local_15[Local_274.f_31], 0, 1))
		{
			Local_274.f_31 = -1;
			if (__LIB_2__::func_275(&Local_274, 16))
			{
				__LIB_2__::func_534(&Local_274, 16);
			}
			return 0;
		}
		else
		{
			return 0;
		}
	}
	if (Local_274.f_31 < 0)
	{
		return 0;
	}
	if ((Local_15.f_9[Local_274.f_31] > 10f || ENTITY::GET_ENTITY_SPEED(Global_35) > 5f) || WEAPON::_IS_WEAPON_TWO_HANDED(__LIB_0__::func_399(Local_15[Local_274.f_31], 1, 0, 0)))
	{
		Local_274.f_31 = -1;
		if (__LIB_2__::func_275(&Local_274, 16))
		{
			__LIB_2__::func_534(&Local_274, 16);
		}
		return 0;
	}
	if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_31], joaat("WEAPON_MELEE_KNIFE")))
	{
		iVar0 = joaat("WEAPON_MELEE_KNIFE");
	}
	else if (WEAPON::_0xF29A186ED428B552(Local_15[Local_274.f_31], joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
	{
		iVar0 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return 0;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_31], iVar0, false, 0, false, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[Local_274.f_31], 93, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4112);
	__LIB_1__::func_474(Local_15[Local_274.f_31], &iVar1, 0, 0, 1, 1);
	__LIB_2__::func_277(&Local_274, 16);
	return 1;
}

int func_164()
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_275(&Local_274, 16))
	{
		return 0;
	}
	else if (Local_274.f_31 >= 0)
	{
		if (!__LIB_2__::func_1(Local_15[Local_274.f_31], 0, 1))
		{
			Local_274.f_31 = -1;
			__LIB_2__::func_534(&Local_274, 16);
			return 0;
		}
	}
	if (Local_274.f_31 < 0)
	{
		return 0;
	}
	if (Local_15.f_9[Local_274.f_31] > 14f || ENTITY::GET_ENTITY_SPEED(Global_35) > 4f)
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(Local_15[Local_274.f_31], false, false);
		if (!WEAPON::IS_WEAPON_VALID(iVar0))
		{
			return 0;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_31], iVar0, false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Local_15[Local_274.f_31], 1, 1, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[Local_274.f_31], 93, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_15[Local_274.f_31], &iVar1, 0, 0, 1, 1);
		__LIB_2__::func_534(&Local_274, 16);
		return 1;
	}
	return 0;
}

int func_168()
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	switch (Local_274.f_6)
	{
		case 0:
			__LIB_2__::func_278(&Local_274, 1);
			break;
		case 1:
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				iVar0 = func_315(0, (Local_15.f_215 - 1), 1, 1);
				if (iVar0 >= 0)
				{
					if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "GANG_TAUNT_GEN", -1073741824 /* Float: -2f */, 1, 1744022339, 2))
					{
						__LIB_2__::func_278(&Local_274, 2);
					}
				}
				iVar1 = 3;
				while (iVar1 <= 5)
				{
					if (__LIB_2__::func_1(Local_15[iVar1], 0, 0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_15[iVar1], false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar1], 2);
					}
					iVar1++;
				}
				__LIB_2__::func_278(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(4f, 1, 0, 0))
			{
				__LIB_2__::func_278(&Local_274, 3);
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_240()
{
	switch (Local_274)
	{
		case 0:
			func_365(&Local_15, &Local_274);
			break;
		case 1:
			func_366(&Local_15, &Local_274);
			break;
		case 2:
			func_367(&Local_15, &Local_274);
			break;
		case 3:
			func_368(&Local_15, &Local_274);
			break;
	}
}

void func_242(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
			break;
		case 2:
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
							Jump @6194; //curOff = 6064
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							Jump @6194; //curOff = 6145
							switch (iParam4)
							{
								case 1:
									__LIB_2__::func_68(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
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
bool func_243(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 169272416;
		case 1:
			return 477366566;
		case 2:
			return -425386627;
		case 3:
			return -383691756;
		case 4:
			return -590922912;
		case 5:
			return -874767990;
		default:
			break;
	}
	return __LIB_2__::func_16();
}

struct<4> func_260(int iParam0, int iParam1)
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
						return func_384(0, 0);
					case 1:
						return func_384(0, 2);
					case 2:
						return func_384(0, 4);
					case 3:
						return func_384(0, 6);
					case 4:
						return func_384(0, 8);
					case 5:
						return func_384(0, 10);
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
					case 2:
						return func_384(1, 4);
					case 3:
						return func_384(1, 6);
					case 4:
						return func_384(1, 8);
					case 5:
						return func_384(1, 10);
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
						return func_384(2, 0);
					case 1:
						return func_384(2, 2);
					case 2:
						return func_384(2, 4);
					case 3:
						return func_384(2, 6);
					case 4:
						return func_384(2, 8);
					case 5:
						return func_384(2, 10);
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
					case 2:
						return func_384(3, 4);
					case 3:
						return func_384(3, 6);
					case 4:
						return func_384(3, 8);
					case 5:
						return func_384(3, 10);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(4, 0);
					case 1:
						return func_384(4, 2);
					case 2:
						return func_384(4, 4);
					case 3:
						return func_384(4, 6);
					case 4:
						return func_384(4, 8);
					case 5:
						return func_384(4, 10);
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
					case 2:
						return func_384(5, 4);
					case 3:
						return func_384(5, 6);
					case 4:
						return func_384(5, 8);
					case 5:
						return func_384(5, 10);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(6, 0);
					case 1:
						return func_384(6, 2);
					case 2:
						return func_384(6, 4);
					case 3:
						return func_384(6, 6);
					case 4:
						return func_384(6, 8);
					case 5:
						return func_384(6, 10);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(7, 0);
					case 1:
						return func_384(7, 2);
					case 2:
						return func_384(7, 4);
					case 3:
						return func_384(7, 6);
					case 4:
						return func_384(7, 8);
					case 5:
						return func_384(7, 10);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_261(int iParam0)
{
	int iVar0;
	iVar0 = func_385(iParam0);
	return func_386(iVar0);
}

int func_264(int iParam0)
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
		case 5:
			return joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
		default:
			break;
	}
	return joaat("GROUP_REVOLVER");
}

void func_291()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;
	iVar5 = 0;
	while (iVar5 <= 2)
	{
		if (!__LIB_2__::func_1(Local_15[iVar5], 0, 0))
		{
		}
		else
		{
			vVar1 = { func_410(&Local_274, iVar5) };
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar5], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (iVar5 == 0 && __LIB_2__::func_275(&Local_274, 4))
			{
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2f, 20000, 3f, 1, 40000f);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar5], &iVar0, 0, 0, 1, 1);
		}
		iVar5++;
	}
}

void func_292()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar6;
	int iVar7;
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			vVar2 = { func_410(&Local_274, iVar0) };
			__LIB_2__::func_429(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			fVar6 = func_411(&Local_274, iVar0);
			iVar7 = func_412(&Local_274, iVar0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], vVar2, fVar6, iVar7, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 3f, -1, 4f, 1, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_189(&Local_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
	__LIB_2__::func_189(&Local_15, 5, joaat("BLIP_STYLE_ENEMY"), 0);
	if (__LIB_2__::func_1(Global_1935630.f_40, 0, 0))
	{
		PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 3, 0.8f, 0);
		PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 1, 0.8f, 0);
		PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 3, 0.05f);
		PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 1, 0.05f);
		TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 4, 0, 0);
	}
	__LIB_2__::func_277(&Local_274, 2048);
}

int func_315(int iParam0, int iParam1, bool bParam2, int iParam3)
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
				if (iParam3 == -1 || iParam3 == func_385(iVar2))
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

void func_365(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2379.475f, 1658.189f, 94.41473f, 0f, 0f, 44.75556f, 25.97093f, 45.43038f, 21.01608f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2233.576f, 1584.006f, 108.394f, 0f, 0f, -68.90441f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2456.139f, 1875.907f, 128.7063f, 0f, 0f, -11.02788f, 178.4207f, 446.6826f, 158.0314f);
		iParam1->f_23[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2405.285f, 1655.429f, 94.41473f, 0f, 0f, 67.75556f, 25.97093f, 45.43038f, 21.01608f, "volBypass");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2400.977f, 1634.161f, 90.40877f, 0f, 0f, 43.64134f, 167.2959f, 92.69518f, 40f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2376.628f, 1659.693f, 90.40877f, 0f, 0f, 43.64134f, 104.0991f, 92.69518f, 40f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2340.319f, 1697.767f, 90.40877f, 0f, 0f, 43.64134f, 104.0991f, 92.69518f, 40f, "volSlowest");
	}
	else
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2358.878f, 1677.454f, 94.41473f, 0f, 0f, 54.58324f, 25.97093f, 45.43038f, 21.01608f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2337.703f, 1567.208f, 108.394f, 0f, 0f, -1.675658f, 112.9127f, 225.4777f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2481.925f, 1712.873f, 128.7063f, 0f, 0f, -82.71819f, 108.5835f, 268.6344f, 158.0314f);
		iParam1->f_23[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2332.052f, 1672.304f, 94.41473f, 0f, 0f, 62.58324f, 25.97093f, 45.43038f, 21.01608f, "volBypass");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2319.938f, 1721.079f, 90.40877f, 0f, 0f, -136.1914f, 167.2959f, 92.69518f, 40f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2348.798f, 1690.992f, 90.40877f, 0f, 0f, -136.1914f, 83.53635f, 92.69518f, 40f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2366.453f, 1672.586f, 90.40877f, 0f, 0f, -136.1914f, 104.0991f, 92.69518f, 74.04325f, "volSlowest");
	}
}

void func_366(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2560.55f, 1748.315f, 94.41473f, 0f, 0f, 1.75556f, 25.97093f, 45.43038f, 21.01608f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2399.943f, 1798.431f, 108.394f, 0f, 0f, -98.84805f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2666.866f, 1817.754f, 128.7063f, 0f, 0f, -53.87566f, 109.4867f, 265.0174f, 158.0314f);
		iParam1->f_23[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2540.747f, 1726.775f, 94.41473f, 0f, 0f, 1.75556f, 25.97093f, 45.43038f, 21.01608f, "volBypass");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2579.645f, 1700.753f, 90.40877f, 0f, 0f, 13.49354f, 167.2959f, 92.69518f, 40f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2562.365f, 1768.858f, 90.40877f, 0f, 0f, 90.3363f, 104.0991f, 92.69518f, 40f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2569.75f, 1811.834f, 90.40877f, 0f, 0f, -7.958235f, 104.0991f, 92.69518f, 40f, "volSlowest");
	}
	else
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2670.963f, 1862.128f, 94.41473f, 0f, 0f, 78.29205f, 33.33298f, 66.87589f, 21.01608f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2529.854f, 1888.466f, 108.394f, 0f, 0f, -107.0081f, 112.9127f, 265.631f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2672.942f, 1700.983f, 128.7063f, 0f, 0f, -152.2841f, 227.8469f, 268.6344f, 158.0314f);
		iParam1->f_23[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2667.686f, 1885.606f, 99.72961f, 0f, 0f, 78.29205f, 33.33298f, 14.58255f, 21.01608f, "volBypass");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2658.903f, 1856.963f, 90.40877f, 0f, 0f, 148.6657f, 167.2959f, 92.69518f, 40f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2637.221f, 1821.353f, 90.40877f, 0f, 0f, 148.6657f, 83.53635f, 92.69518f, 40f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2623.958f, 1799.569f, 90.40877f, 0f, 0f, 148.6657f, 104.0991f, 92.69518f, 74.04325f, "volSlowest");
	}
}

void func_367(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2653.087f, 1310.469f, 111.4122f, 0f, 0f, -35.6775f, 49.5452f, 68.53388f, 100f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2544.614f, 1221.79f, 111.4122f, 0f, 0f, 18f, 234.841f, 141.5156f, 100f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2699.302f, 1315.015f, 119.2355f, 0f, 0f, 161.251f, 19.07939f, 30.215f, 60.40652f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2677.063f, 1331.753f, 106.0428f, 0f, 0f, -26.51317f, 33.03344f, 22.41611f, 50f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2657.232f, 1281.988f, 106.0428f, 0f, 0f, -57f, 19.4115f, 29.05031f, 50f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2656.938f, 1276.508f, 106.0428f, 0f, 0f, -40.99999f, 19.4115f, 29.05031f, 50f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2532.841f, 1406.829f, 111.4122f, 0f, 0f, 158.8648f, 236.6125f, 34.69799f, 100f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2645.811f, 1354.674f, 111.4122f, 0f, 0f, 124.0504f, 39.1544f, 34.69799f, 100f);
		iParam1->f_23[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2692.105f, 1307.473f, 111.4122f, 0f, 0f, -61.67751f, 22.1819f, 17.48288f, 72.79247f, "volBypass");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2621.458f, 1316.765f, 111.4122f, 0f, 0f, 153.8538f, 49.5452f, 68.53388f, 100f, "volSlowest");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2660.626f, 1297.538f, 111.4122f, 0f, 0f, 153.8538f, 49.5452f, 68.53388f, 100f, "volSlower");
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2699.431f, 1288.086f, 111.4122f, 0f, 0f, 153.8538f, 49.5452f, 126.31f, 100f, "volSlow");
	}
	else
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2588.816f, 1319.962f, 111.4122f, 0f, 0f, -4.823267f, 49.5452f, 68.53388f, 100f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2635.17f, 1195.116f, 111.4122f, 0f, 0f, 18f, 100f, 250f, 100f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2704.067f, 1392.273f, 111.4122f, 0f, 0f, 108f, 100f, 250f, 100f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2548.299f, 1319.037f, 111.4122f, 0f, 0f, -10.72106f, 49.5452f, 126.31f, 100f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2588.221f, 1320.247f, 111.4122f, 0f, 0f, -10.72106f, 49.5452f, 68.53388f, 100f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2631.09f, 1312.131f, 111.4122f, 0f, 0f, -10.72106f, 49.5452f, 68.53388f, 100f, "volSlowest");
	}
}

void func_368(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2853.491f, 890.4776f, 57.54722f, 0f, 0f, 21.40658f, 86.32664f, 68.53388f, 100f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2753.181f, 816.8569f, 88.67297f, 0f, 0f, 32.05695f, 234.841f, 141.5156f, 100f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2887.592f, 977.7258f, 66.05647f, 0f, 0f, 72.42944f, 314.8333f, 34.69799f, 100f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2815.33f, 954.1948f, 65.42703f, 0f, 0f, -71.6899f, 49.5452f, 126.31f, 100f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2835.76f, 919.8765f, 65.42703f, 0f, 0f, -71.6899f, 49.5452f, 68.53388f, 100f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2849.469f, 878.4553f, 65.42703f, 0f, 0f, -71.6899f, 49.5452f, 68.53388f, 100f, "volSlowest");
	}
	else
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2866.326f, 845.9394f, 88.20643f, 0f, 0f, 17.98639f, 49.5452f, 68.53388f, 100f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2757.151f, 859.8209f, 91.28005f, 0f, 0f, -11.11163f, 241.105f, 125.6228f, 100f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2930.669f, 854.6047f, 88.38855f, 0f, 0f, 55.09757f, 100f, 407.4789f, 100f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2880.808f, 788.38f, 78.41216f, 0f, 0f, 111.1953f, 49.5452f, 126.31f, 100f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2864.331f, 823.8185f, 78.41216f, 0f, 0f, 111.1953f, 49.5452f, 68.53388f, 100f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2848.555f, 864.4982f, 78.41216f, 0f, 0f, 111.1953f, 49.5452f, 68.53388f, 100f, "volSlowest");
	}
}

struct<4> func_384(int iParam0, int iParam1)
{
	return func_439(iParam0, iParam1);
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 0;
		default:
			break;
	}
	return 1;
}

char* func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0201_G_M_M_UniInbred_02_WHITE_01";
		case 1:
			return "0202_G_M_M_UniInbred_02_WHITE_02";
		default:
			break;
	}
	return "";
}

struct<4> func_410(int iParam0, int iParam1)
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
						return func_384(0, 1);
					case 1:
						return func_384(0, 3);
					case 2:
						return func_384(0, 5);
					case 3:
						return func_384(0, 7);
					case 4:
						return func_384(0, 9);
					case 5:
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
						return func_384(1, 1);
					case 1:
						return func_384(1, 3);
					case 2:
						return func_384(1, 5);
					case 3:
						return func_384(1, 7);
					case 4:
						return func_384(1, 9);
					case 5:
						return func_384(1, 11);
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
						return func_384(2, 1);
					case 1:
						return func_384(2, 3);
					case 2:
						return func_384(2, 5);
					case 3:
						return func_384(2, 7);
					case 4:
						return func_384(2, 9);
					case 5:
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
						return func_384(3, 1);
					case 1:
						return func_384(3, 3);
					case 2:
						return func_384(3, 5);
					case 3:
						return func_384(3, 7);
					case 4:
						return func_384(3, 9);
					case 5:
						return func_384(3, 11);
					default:
						break;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(4, 1);
					case 1:
						return func_384(4, 3);
					case 2:
						return func_384(4, 5);
					case 3:
						return func_384(4, 7);
					case 4:
						return func_384(4, 9);
					case 5:
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
						return func_384(5, 1);
					case 1:
						return func_384(5, 3);
					case 2:
						return func_384(5, 5);
					case 3:
						return func_384(5, 7);
					case 4:
						return func_384(5, 9);
					case 5:
						return func_384(5, 11);
					default:
						break;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 0:
						return func_384(6, 1);
					case 1:
						return func_384(6, 3);
					case 2:
						return func_384(6, 5);
					case 3:
						return func_384(6, 7);
					case 4:
						return func_384(6, 9);
					case 5:
						return func_384(6, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_384(7, 1);
					case 1:
						return func_384(7, 3);
					case 2:
						return func_384(7, 5);
					case 3:
						return func_384(7, 7);
					case 4:
						return func_384(7, 9);
					case 5:
						return func_384(7, 11);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

float func_411(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 4:
						return 2f;
					case 5:
						return 3f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 5:
						return 3f;
					default:
						break;
				}
			}
			break;
	}
	return 5f;
}

int func_412(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 2:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 4:
						return 1;
					case 5:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 5:
						return 1;
					default:
						break;
				}
			}
			break;
	}
	return 0;
}

struct<4> func_439(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_523(iParam0, iParam1) };
	Var0.f_3 = func_524(iParam0, iParam1);
	return Var0;
}

Vector3 func_523(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2404.261f, 1660.332f, 93.7795f;
				case 1:
					return 2391.992f, 1652.427f, 93.5522f;
				case 2:
					return 2358.904f, 1655.492f, 95.2931f;
				case 3:
					return 2369.823f, 1656.355f, 95.1877f;
				case 4:
					return 2380.879f, 1701.022f, 98.9152f;
				case 5:
					return 2370.489f, 1682.633f, 97.2825f;
				case 6:
					return 2333.629f, 1671.618f, 96.7881f;
				case 7:
					return 2341.562f, 1678.425f, 96.251f;
				case 8:
					return 2333.16f, 1719.363f, 102.5603f;
				case 9:
					return 2331.454f, 1706.131f, 99.168f;
				case 10:
					return 2317.028f, 1685.378f, 96.1567f;
				case 11:
					return 2327.794f, 1690.569f, 95.6304f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2323.63f, 1680.336f, 97.07f;
				case 1:
					return 2329.987f, 1682.533f, 96.745f;
				case 2:
					return 2367.689f, 1690.881f, 98.6076f;
				case 3:
					return 2360.47f, 1688.154f, 97.6893f;
				case 4:
					return 2350.594f, 1646.224f, 93.0741f;
				case 5:
					return 2362.049f, 1653.729f, 95.1614f;
				case 6:
					return 2379.118f, 1629.917f, 93.1902f;
				case 7:
					return 2384.009f, 1643.263f, 93.6293f;
				case 8:
					return 2406.374f, 1666.223f, 93.6408f;
				case 9:
					return 2395.923f, 1653.147f, 93.795f;
				case 10:
					return 2423.657f, 1634.447f, 89.7857f;
				case 11:
					return 2417.283f, 1633.089f, 90.4928f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2538.988f, 1718.648f, 88.1232f;
				case 1:
					return 2547.324f, 1726.29f, 89.1266f;
				case 2:
					return 2555.681f, 1765.84f, 90.58f;
				case 3:
					return 2555.41f, 1761.972f, 90.3264f;
				case 4:
					return 2592.029f, 1783.694f, 92.8714f;
				case 5:
					return 2589.202f, 1776.999f, 94.6026f;
				case 6:
					return 2579.28f, 1790.203f, 90.8775f;
				case 7:
					return 2579.498f, 1790.038f, 90.9392f;
				case 8:
					return 2620.82f, 1791.037f, 97.3015f;
				case 9:
					return 2616.332f, 1785.648f, 96.9892f;
				case 10:
					return 2618.719f, 1806.077f, 96.1348f;
				case 11:
					return 2616.335f, 1805.425f, 95.3696f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2656.185f, 1887.692f, 97.8976f;
				case 1:
					return 2662.488f, 1881.505f, 98.7037f;
				case 2:
					return 2687.429f, 1850.576f, 99.8158f;
				case 3:
					return 2683.36f, 1851.427f, 98.6722f;
				case 4:
					return 2668.02f, 1818.814f, 99.4476f;
				case 5:
					return 2671.24f, 1822.274f, 99.7159f;
				case 6:
					return 2644.024f, 1786.944f, 101.6906f;
				case 7:
					return 2646.77f, 1789.078f, 101.3641f;
				case 8:
					return 2620.852f, 1833.045f, 91.5615f;
				case 9:
					return 2625.621f, 1840.949f, 89.4534f;
				case 10:
					return 2587.737f, 1801.456f, 89.8046f;
				case 11:
					return 2591.178f, 1803.636f, 89.5327f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2684.967f, 1312.484f, 104.6301f;
				case 1:
					return 2681.19f, 1310.141f, 104.415f;
				case 2:
					return 2669.256f, 1324.706f, 106.055f;
				case 3:
					return 2667.411f, 1320.834f, 107.1336f;
				case 4:
					return 2641.922f, 1306.434f, 115.6888f;
				case 5:
					return 2645.462f, 1309.117f, 113.7967f;
				case 6:
					return 2613.175f, 1333.942f, 112.8887f;
				case 7:
					return 2610.308f, 1323.327f, 113.2365f;
				case 8:
					return 2612.73f, 1295.164f, 122.3113f;
				case 9:
					return 2616.592f, 1304.059f, 119.375f;
				case 10:
					return 2574.706f, 1309.339f, 110.2242f;
				case 11:
					return 2580.938f, 1314.759f, 109.4347f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2577.968f, 1293.012f, 121.7431f;
				case 1:
					return 2580.322f, 1298.953f, 119.5432f;
				case 2:
					return 2602.909f, 1331.914f, 112.6261f;
				case 3:
					return 2596.058f, 1323.462f, 111.1826f;
				case 4:
					return 2585.565f, 1341.609f, 103.8779f;
				case 5:
					return 2581.786f, 1332.18f, 107.1296f;
				case 6:
					return 2644.644f, 1305.631f, 115.5173f;
				case 7:
					return 2635.305f, 1308.201f, 116.3732f;
				case 8:
					return 2640.781f, 1326.77f, 112.66f;
				case 9:
					return 2636.002f, 1321.016f, 112.7281f;
				case 10:
					return 2665.137f, 1306.53f, 107.764f;
				case 11:
					return 2662.815f, 1311.733f, 108.0191f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2816.424f, 901.0772f, 54.8229f;
				case 1:
					return 2823.911f, 904.8638f, 51.8489f;
				case 2:
					return 2876.821f, 892.2032f, 45.5331f;
				case 3:
					return 2870.669f, 895.8381f, 47.6094f;
				case 4:
					return 2863.893f, 872.4036f, 48.5062f;
				case 5:
					return 2856.954f, 874.1216f, 49.4625f;
				case 6:
					return 2833.971f, 838.5937f, 57.4629f;
				case 7:
					return 2849.293f, 846.9117f, 51.6637f;
				case 8:
					return 2850.105f, 816.5446f, 52.8743f;
				case 9:
					return 2858.324f, 821.4249f, 50.72f;
				case 10:
					return 2884.795f, 826.8777f, 47.5307f;
				case 11:
					return 2880.889f, 822.8198f, 47.9483f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2850.293f, 819.0887f, 52.7724f;
				case 1:
					return 2855.851f, 817.2917f, 51.557f;
				case 2:
					return 2865.242f, 859.7393f, 48.6417f;
				case 3:
					return 2862.781f, 859.9919f, 49.0463f;
				case 4:
					return 2840.242f, 868.2878f, 53.037f;
				case 5:
					return 2847.458f, 862.8607f, 50.9526f;
				case 6:
					return 2824.808f, 905.2791f, 51.4757f;
				case 7:
					return 2831.972f, 904.2695f, 49.5258f;
				case 8:
					return 2866.389f, 912.2373f, 47.8499f;
				case 9:
					return 2864.851f, 904.4775f, 48.2117f;
				case 10:
					return 2809.062f, 932.4424f, 52.4895f;
				case 11:
					return 2823.001f, 934.7114f, 48.3258f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_524(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -220.9486f;
				case 1:
					return 101.0514f;
				case 2:
					return 277.0514f;
				case 3:
					return -34.9486f;
				case 4:
					return -198.5504f;
				case 5:
					return 157.4496f;
				case 6:
					return 315.9035f;
				case 7:
					return 289.9035f;
				case 8:
					return 179.9035f;
				case 9:
					return 185.9035f;
				case 10:
					return 287.9035f;
				case 11:
					return 259.9035f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 337.949f;
				case 1:
					return -40.051f;
				case 2:
					return 125.949f;
				case 3:
					return 157.949f;
				case 4:
					return -34.1437f;
				case 5:
					return -38.1437f;
				case 6:
					return -13.1989f;
				case 7:
					return 16.8011f;
				case 8:
					return 84.8012f;
				case 9:
					return 112.8012f;
				case 10:
					return 72.8012f;
				case 11:
					return 66.8012f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -54.9486f;
				case 1:
					return 297.0514f;
				case 2:
					return 193.0514f;
				case 3:
					return -150.9486f;
				case 4:
					return -234.5504f;
				case 5:
					return 117.4496f;
				case 6:
					return 177.9035f;
				case 7:
					return 181.9035f;
				case 8:
					return 127.9035f;
				case 9:
					return 125.9035f;
				case 10:
					return 131.9035f;
				case 11:
					return 147.9035f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 235.949f;
				case 1:
					return -112.051f;
				case 2:
					return 91.949f;
				case 3:
					return 67.949f;
				case 4:
					return -36.1437f;
				case 5:
					return -18.1437f;
				case 6:
					return -61.1989f;
				case 7:
					return -31.1989f;
				case 8:
					return 344.8012f;
				case 9:
					return 316.8012f;
				case 10:
					return -45.1988f;
				case 11:
					return 322.8012f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -260.9486f;
				case 1:
					return 127.0514f;
				case 2:
					return 161.0514f;
				case 3:
					return -186.9486f;
				case 4:
					return -62.5504f;
				case 5:
					return -34.5504f;
				case 6:
					return 189.9035f;
				case 7:
					return 171.9035f;
				case 8:
					return 327.9034f;
				case 9:
					return 335.9034f;
				case 10:
					return 299.9035f;
				case 11:
					return 277.9034f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -28.051f;
				case 1:
					return -18.051f;
				case 2:
					return 133.949f;
				case 3:
					return 101.949f;
				case 4:
					return -174.1437f;
				case 5:
					return 127.8563f;
				case 6:
					return 70.8011f;
				case 7:
					return 50.8011f;
				case 8:
					return 106.8012f;
				case 9:
					return 112.8012f;
				case 10:
					return 44.8012f;
				case 11:
					return 78.8012f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -70.9486f;
				case 1:
					return -54.9486f;
				case 2:
					return 57.0514f;
				case 3:
					return -290.9486f;
				case 4:
					return -316.5505f;
				case 5:
					return 43.4496f;
				case 6:
					return -52.0965f;
				case 7:
					return -50.0965f;
				case 8:
					return 317.9033f;
				case 9:
					return 315.9034f;
				case 10:
					return 67.9035f;
				case 11:
					return 57.9033f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -124f;
				case 1:
					return -100f;
				case 2:
					return 120f;
				case 3:
					return 160f;
				case 4:
					return -120.0927f;
				case 5:
					return -108.0927f;
				case 6:
					return -119.1479f;
				case 7:
					return -103.1479f;
				case 8:
					return 124.8522f;
				case 9:
					return 126.8522f;
				case 10:
					return -113.1478f;
				case 11:
					return 218.8522f;
			}
			break;
	}
	return 0f;
}

