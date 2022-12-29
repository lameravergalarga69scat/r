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
	struct<33> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, 0, 5, 0, 0, 0 } ;
	var uLocal_307 = 5;
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
	var uLocal_318 = 1065353216;
	var uLocal_319 = 1119092736;
	var uLocal_320 = 1092616192;
	var uLocal_321 = 1085276160;
	bool bLocal_322 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_322 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_322, 961, 0);
		if (bLocal_322)
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
		iVar3 = func_92(iVar1);
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
			iVar3 = func_92(iVar1);
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
	iVar1 = func_92(iVar0);
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
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			func_125(iVar0);
			func_126(iVar0);
			if (__LIB_2__::func_486(iVar0))
			{
				__LIB_1__::func_571(Local_15[iVar0], Local_15.f_40[iVar1], 0, -1, 1);
				iVar1++;
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
				case 1:
				case 2:
					iVar2 = 10;
					iVar3 = 80;
					break;
				default:
					iVar2 = 40;
					iVar3 = 110;
					break;
			}
			__LIB_2__::func_150(&Local_15, iVar0, iVar2, iVar3);
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
		if (func_135())
		{
			__LIB_2__::func_560();
			func_137();
			__LIB_2__::func_489(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (__LIB_2__::func_531())
			{
				if (func_140())
				{
					__LIB_2__::func_224(Local_15.f_151, 1);
					__LIB_2__::func_489(&Local_274, 3);
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
				if (func_145())
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
			func_165();
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
	Local_15.f_216 = 2;
	Local_15.f_181 = 1;
	__LIB_2__::func_147(&Local_15, 131072);
	__LIB_2__::func_414(&Local_15, 2, 1);
	__LIB_2__::func_491();
	func_238();
	__LIB_2__::func_147(&Local_15, 8388608);
	__LIB_2__::func_41(&(Local_15.f_182), 65, 0f, 1.75f, 2f, 2.001f, 32768);
	return true;
}

int func_92(int iParam0)
{
	if (Local_15.f_57[iParam0] == 0)
	{
		if (!__LIB_2__::func_15(Local_15.f_181, 1))
		{
			Local_15.f_57[iParam0] = func_246(joaat("HORSE_CLASS_RIDING"), 1);
		}
		else
		{
			Local_15.f_57[iParam0] = func_247(Local_15.f_181, 0, 1);
		}
	}
	return Local_15.f_57[iParam0];
}

int func_96(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return __LIB_2__::func_673(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_255(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_255(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_258(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_258(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125(int iParam0)
{
	char* sVar0;
	sVar0 = func_259(iParam0);
	__LIB_2__::func_133(Local_15[iParam0], sVar0, 0);
}

void func_126(int iParam0)
{
	int iVar0;
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15[iParam0], true, true);
	__LIB_2__::func_272(Local_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	iVar0 = func_262(iParam0);
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
		default:
			break;
	}
	return false;
}

bool func_135()
{
	if (__LIB_2__::func_538(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_28), 0, 4, 1))
	{
		return true;
	}
	return false;
}

void func_137()
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

bool func_140()
{
	func_137();
	__LIB_2__::func_277(&Local_274, 4);
	return true;
}

bool func_145()
{
	if (!__LIB_2__::func_47(&(Local_15.f_182), 64))
	{
		return false;
	}
	if (__LIB_2__::func_157(Local_274.f_23[2], Global_36))
	{
		return true;
	}
	return false;
}

void func_147()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
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
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_7[1 /*3*/]), 0);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 0f))
			{
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				__LIB_2__::func_336(Local_15[0], Global_35, "ARRIVAL_COMBAT_TRAP_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 0.1f) || __LIB_1__::func_472(Local_15[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_288();
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 2.5f) && __LIB_2__::func_227(0, 1, Local_15[0], 1))
			{
				__LIB_2__::func_336(Local_15[1], Global_35, "ITS_THEM_EXTREME_RECOGNIZE", -1073741824 /* Float: -2f */, 1, 1744022339, 1);
				func_290();
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
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
	while (iVar0 <= 4)
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

int func_165()
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	switch (Local_274.f_6)
	{
		case 0:
			if (__LIB_2__::func_227(3f, 1, 0, 0))
			{
				iVar0 = __LIB_2__::func_557(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar0 >= 0)
				{
					if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "ARRIVAL_COMBAT_TRAP_NEUTRAL", -1073741824 /* Float: -2f */, 1, 1744022339, 0))
					{
						__LIB_2__::func_278(&Local_274, 1);
					}
				}
				iVar1 = 0;
				while (iVar1 <= 4)
				{
					if (__LIB_2__::func_1(Local_15[iVar1], 0, 0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_15[iVar1], false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_15[iVar1], 2);
						__LIB_2__::func_150(&Local_15, iVar1, 40, 110);
					}
					iVar1++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(3f, 1, 0, 0))
			{
				iVar0 = func_311(0, (Local_15.f_215 - 1), 1, 1);
				if (iVar0 >= 0)
				{
					if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "GANG_TAUNT_GEN", -1073741824 /* Float: -2f */, 1, 1744022339, 2))
					{
						__LIB_2__::func_278(&Local_274, 2);
					}
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(4f, 1, 0, 0))
			{
				iVar0 = func_311(0, (Local_15.f_215 - 1), 1, 0);
				if (iVar0 >= 0)
				{
					if (__LIB_2__::func_336(Local_15[iVar0], Global_35, "TAUNT_GEN_LOCATION", -1073741824 /* Float: -2f */, 1, 1744022339, 0))
					{
						__LIB_2__::func_278(&Local_274, 3);
					}
				}
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_238()
{
	switch (Local_274)
	{
		case 0:
			func_361(&Local_15, &Local_274);
			break;
	}
}

int func_246(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_DRAFT"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RACE"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WAR"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WORK"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), true, false, 0f, 0f, 0f);
		}
int func_247(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar1 = __LIB_2__::func_71(iParam0);
	if ((__LIB_0__::func_27(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 5:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_BLANKET");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
			}
			break;
		default:
			iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			break;
	}
	return iVar2;
}

struct<4> func_255(int iParam0, int iParam1)
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
						return func_372(0, 6);
					case 1:
						return func_372(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_372(1, 6);
					case 1:
						return func_372(1, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_258(int iParam0, int iParam1)
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
						return func_372(0, 0);
					case 1:
						return func_372(0, 2);
					case 2:
						return func_372(0, 4);
					case 3:
						return func_372(0, 6);
					case 4:
						return func_372(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_372(1, 0);
					case 1:
						return func_372(1, 2);
					case 2:
						return func_372(1, 4);
					case 3:
						return func_372(1, 6);
					case 4:
						return func_372(1, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_259(int iParam0)
{
	int iVar0;
	iVar0 = func_378(iParam0);
	return func_379(iVar0);
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_REVOLVER_CATTLEMAN");
		case 1:
			return joaat("WEAPON_REVOLVER_CATTLEMAN");
		case 2:
			return joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
		case 3:
			return joaat("GROUP_REVOLVER");
		case 4:
			return joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
		default:
			break;
	}
	return joaat("GROUP_REVOLVER");
}

void func_288()
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
			vVar1 = { func_401(&Local_274, iVar5) };
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar5], vVar1, 4f, 1, 0, 0);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar5], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2f, 20000, 3f, 1, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar5], &iVar0, 0, 0, 1, 1);
		}
		iVar5++;
	}
}

void func_290()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar6;
	int iVar7;
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
		}
		else
		{
			vVar2 = { func_401(&Local_274, iVar0) };
			__LIB_2__::func_429(&Local_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
			fVar6 = __LIB_5__::func_774(&Local_274, iVar0);
			iVar7 = __LIB_1__::func_976(&Local_274, iVar0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_15[iVar0], vVar2, fVar6, iVar7, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 3f, -1, 4f, 1, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_15[iVar0], &iVar1, 0, 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_189(&Local_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
	__LIB_2__::func_189(&Local_15, 4, joaat("BLIP_STYLE_ENEMY"), 0);
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

int func_311(int iParam0, int iParam1, bool bParam2, int iParam3)
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
				if (iParam3 == -1 || iParam3 == func_378(iVar2))
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

void func_361(int iParam0, int iParam1)
{
	iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 100f, 100f, 40f, "volAvoidance");
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2709.788f, 847.1711f, 86.63501f, 0f, 0f, -88.69374f, 39.5057f, 45.43038f, 21.01608f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2858.34f, 894.0152f, 102.7403f, 0f, 0f, 117.7443f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2797.264f, 638.8564f, 123.0526f, 0f, 0f, -164.2993f, 178.4207f, 446.6826f, 158.0314f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2696.104f, 848.8044f, 84.75505f, 0f, 0f, -11.09813f, 45.94968f, 48.47349f, 40f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2718.449f, 844.9586f, 84.75505f, 0f, 0f, -103.5945f, 40.93553f, 42.74232f, 40f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2718.955f, 842.1956f, 84.75505f, 0f, 0f, -13.42877f, 26.76766f, 27.60038f, 40f, "volSlowest");
	}
	else
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2742.837f, 845.163f, 85.267f, 0f, 0f, 176.613f, 39.5057f, 59.565f, 21.01608f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2590.163f, 763.3137f, 102.7403f, 0f, 0f, 136.3598f, 178.4207f, 310.3206f, 194.8402f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2553.862f, 988.8838f, 123.0526f, 0f, 0f, -140.2993f, 178.4207f, 446.6826f, 158.0314f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2579.916f, 1006.283f, 123.0526f, 0f, 0f, -148.2993f, 178.4207f, 446.6826f, 158.0314f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], 2628.878f, 713.5754f, 102.7403f, 0f, 0f, 154.3598f, 178.4207f, 310.3206f, 194.8402f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2756.673f, 845.4113f, 84.75505f, 0f, 0f, 0.90186f, 45.94968f, 79.85487f, 40f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2735.83f, 839.623f, 84.75505f, 0f, 0f, -88.5945f, 51.81061f, 42.74232f, 40f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2725.263f, 836.2425f, 84.75505f, 0f, 0f, 1.653287f, 26.76766f, 27.60038f, 40f, "volSlowest");
	}
}

struct<4> func_372(int iParam0, int iParam1)
{
	return func_427(iParam0, iParam1);
}

int func_378(int iParam0)
{
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
		case 4:
			return 0;
		default:
			break;
	}
	return 1;
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0203_G_M_M_UniInbred_03_WHITE_01";
		case 1:
			return "0204_G_M_M_UniInbred_03_WHITE_02";
		default:
			break;
	}
	return "";
}

struct<4> func_401(int iParam0, int iParam1)
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
						return func_372(0, 1);
					case 1:
						return func_372(0, 3);
					case 2:
						return func_372(0, 5);
					case 3:
						return func_372(0, 7);
					case 4:
						return func_372(0, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_372(1, 1);
					case 1:
						return func_372(1, 3);
					case 2:
						return func_372(1, 5);
					case 3:
						return func_372(1, 7);
					case 4:
						return func_372(1, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_427(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_516(iParam0, iParam1) };
	Var0.f_3 = func_517(iParam0, iParam1);
	return Var0;
}

Vector3 func_516(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2719.797f, 820.5356f, 90.1514f;
				case 1:
					return 2720.022f, 828.5452f, 90.4094f;
				case 2:
					return 2738.742f, 821.8988f, 86.9314f;
				case 3:
					return 2734.676f, 826.7144f, 87.9392f;
				case 4:
					return 2742.294f, 830.7717f, 82.354f;
				case 5:
					return 2738.141f, 834.3707f, 83.3953f;
				case 6:
					return 2778.157f, 866.4509f, 72.6451f;
				case 7:
					return 2768.468f, 849.7348f, 74.6081f;
				case 8:
					return 2780.913f, 819.7943f, 70.4444f;
				case 9:
					return 2772.44f, 829.5135f, 73.6046f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2706.896f, 823.7822f, 90.2412f;
				case 1:
					return 2711.912f, 828.8743f, 90.4082f;
				case 2:
					return 2717.581f, 851.4651f, 91.3432f;
				case 3:
					return 2720.966f, 841.5399f, 90.2522f;
				case 4:
					return 2698.169f, 835.8815f, 88.1659f;
				case 5:
					return 2701.136f, 840.8953f, 88.4152f;
				case 6:
					return 2680.073f, 825.7728f, 86.0297f;
				case 7:
					return 2678.951f, 838.2275f, 86.7272f;
				case 8:
					return 2678.849f, 877.8453f, 87.0861f;
				case 9:
					return 2687.054f, 861.7098f, 86.2257f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_517(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -328.9486f;
				case 1:
					return 33.0514f;
				case 2:
					return 75.0514f;
				case 3:
					return -324.9486f;
				case 4:
					return 81.9035f;
				case 5:
					return 83.9035f;
				case 6:
					return 157.9035f;
				case 7:
					return 119.9035f;
				case 8:
					return 61.9035f;
				case 9:
					return 77.9035f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 317.949f;
				case 1:
					return -52.051f;
				case 2:
					return -124.051f;
				case 3:
					return 245.949f;
				case 4:
					return -61.1989f;
				case 5:
					return -101.1989f;
				case 6:
					return 326.8012f;
				case 7:
					return 316.8012f;
				case 8:
					return -143.1988f;
				case 9:
					return 246.8012f;
			}
			break;
	}
	return 0f;
}

