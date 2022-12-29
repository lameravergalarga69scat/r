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
	int iLocal_15 = 8;
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
	struct<198> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	bool bLocal_474 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_474 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_474, 961, 0);
		if (bLocal_474)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (iLocal_15.f_95 < 13)
			{
				if (__LIB_17__::func_790(&ScriptParam_0))
				{
					__LIB_2__::func_146(&iLocal_15, 13);
				}
			}
			if (__LIB_0__::func_58())
			{
				__LIB_0__::func_11();
			}
			__LIB_2__::func_684();
			switch (iLocal_15.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						__LIB_2__::func_146(&iLocal_15, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (__LIB_0__::func_58())
						{
							__LIB_2__::func_146(&iLocal_15, 2);
						}
						else if (iLocal_15.f_217 > 0)
						{
							__LIB_2__::func_146(&iLocal_15, 3);
						}
						else if (iLocal_15.f_218 > 0)
						{
							__LIB_2__::func_146(&iLocal_15, 4);
						}
						else if (iLocal_15.f_216 > 0)
						{
							__LIB_2__::func_146(&iLocal_15, 5);
						}
						else
						{
							__LIB_2__::func_146(&iLocal_15, 6);
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_58())
					{
						__LIB_0__::func_11();
					}
					__LIB_2__::func_146(&iLocal_15, 3);
					break;
				case 3:
					if (__LIB_2__::func_576())
					{
						if (__LIB_0__::func_0())
						{
							__LIB_2__::func_146(&iLocal_15, 4);
						}
					}
					break;
				case 4:
					if (__LIB_2__::func_577())
					{
						__LIB_2__::func_146(&iLocal_15, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						__LIB_2__::func_146(&iLocal_15, 6);
					}
					break;
				case 6:
					if (__LIB_0__::func_0())
					{
						__LIB_2__::func_146(&iLocal_15, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						Global_40.f_9632[iLocal_15.f_151 /*4*/].f_2 = (1 + Global_40.f_9632[iLocal_15.f_151 /*4*/].f_2);
						if (__LIB_0__::func_65(&Global_1393447, 65536))
						{
							__LIB_0__::func_380(&Global_1393447, 65536);
						}
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_2__::func_146(&iLocal_15, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (iLocal_15.f_20 > (100f - 10f))
						{
							__LIB_2__::func_567();
							__LIB_2__::func_146(&iLocal_15, 9);
						}
						else
						{
							__LIB_2__::func_147(&iLocal_15, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						iLocal_15.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						iLocal_15.f_226 = __LIB_0__::func_36();
						if (Global_40.f_9632.f_194 != iLocal_15.f_151)
						{
							switch (iLocal_15.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									__LIB_2__::func_442(&iLocal_15, 1);
									break;
							}
						}
						__LIB_2__::func_585();
						__LIB_2__::func_222(&iLocal_15);
						iLocal_15.f_21 = iLocal_15.f_20;
						__LIB_2__::func_282(&iLocal_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						__LIB_2__::func_147(&iLocal_15, 16384);
						__LIB_2__::func_146(&iLocal_15, 10);
					}
					break;
				case 10:
					__LIB_17__::func_782();
					if (__LIB_2__::func_4(&iLocal_15, 32768) || func_31())
					{
						switch (iLocal_15.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								__LIB_2__::func_500(&iLocal_15, 1);
								break;
						}
						__LIB_2__::func_283(&iLocal_15, 1);
						__LIB_0__::func_747(120, 0, 1);
						__LIB_2__::func_304(1, -1, 0, 0, 0);
						__LIB_2__::func_148(&iLocal_15);
						__LIB_2__::func_146(&iLocal_15, 11);
					}
					break;
				case 11:
					__LIB_2__::func_301(&iLocal_15);
					__LIB_2__::func_685();
					if (__LIB_2__::func_305(&iLocal_15))
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_1__::func_283(&(iLocal_15.f_244), 0);
						__LIB_2__::func_146(&iLocal_15, 12);
					}
					break;
				case 12:
					__LIB_2__::func_223(&iLocal_15);
					__LIB_2__::func_685();
					if (__LIB_2__::func_686())
					{
						if (__LIB_0__::func_65(&Global_1393447, 16))
						{
							__LIB_0__::func_380(&Global_1393447, 16);
						}
						__LIB_2__::func_146(&iLocal_15, 13);
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
		if (__LIB_2__::func_4(&iLocal_15, 4))
		{
			__LIB_2__::func_6(0);
			__LIB_2__::func_149(&iLocal_15, 4);
		}
	}
	fVar0 = 8f;
	if (iLocal_15.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!__LIB_0__::func_0() && !__LIB_1__::func_285(&(iLocal_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_2__::func_7())
	{
		__LIB_1__::func_283(&(iLocal_15.f_250), 0);
		return;
	}
	if (__LIB_1__::func_285(&(iLocal_15.f_250), fVar0))
	{
	}
	__LIB_2__::func_301(&iLocal_15);
	func_49();
	__LIB_2__::func_310(&iLocal_15, 0);
	__LIB_17__::func_783();
	__LIB_2__::func_171(&iLocal_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_282(&iLocal_15, 1);
	__LIB_2__::func_273(&iLocal_15, 0);
	if (iLocal_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_15.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_15.f_237))
	{
		__LIB_2__::func_492(&iLocal_15);
		__LIB_1__::func_544(iLocal_15.f_237);
	}
	__LIB_2__::func_283(&iLocal_15, 1);
	if (iLocal_15.f_95 >= 9 && iLocal_15.f_95 < 11)
	{
		if (__LIB_2__::func_8(iLocal_15.f_151))
		{
		}
		else if (__LIB_2__::func_172(iLocal_15.f_151, 1) || __LIB_2__::func_245(iLocal_15.f_151, 1))
		{
			__LIB_0__::func_47(&Global_1393447, 2048);
			if (!__LIB_0__::func_75(&(iLocal_15.f_244)))
			{
				__LIB_0__::func_747(120, 0, 1);
			}
		}
	}
	if (__LIB_2__::func_1(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (__LIB_2__::func_1(iLocal_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_15.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_2__::func_9(iLocal_15.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	__LIB_2__::func_10(iLocal_15.f_151);
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
	if (__LIB_0__::func_86(iLocal_15.f_209))
	{
		__LIB_2__::func_289(&(iLocal_15.f_152));
		__LIB_2__::func_290(&(iLocal_15.f_152));
		__LIB_2__::func_104(&(iLocal_15.f_152), 0);
		__LIB_2__::func_105(&(iLocal_15.f_152), 1);
		__LIB_1__::func_975(&(iLocal_15.f_152), 6f);
		iLocal_15.f_209 = { Param0 };
		iLocal_15.f_151 = Param0.f_3;
		iLocal_15.f_221 = Param0.f_4;
		iLocal_15.f_222 = __LIB_2__::func_12(iLocal_15.f_151);
		if (Param0.f_7)
		{
			__LIB_2__::func_147(&iLocal_15, 2);
		}
		if (!__LIB_2__::func_13(iLocal_15.f_151))
		{
			__LIB_2__::func_146(&iLocal_15, 12);
			return false;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iLocal_15.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { func_84(iLocal_15.f_151, 0, iLocal_15.f_221) };
				vVar1 = { func_84(iLocal_15.f_151, 1, iLocal_15.f_221) };
				if (__LIB_0__::func_0())
				{
					if (__LIB_2__::func_14(&iLocal_15))
					{
						__LIB_2__::func_147(&iLocal_15, 1);
					}
				}
				if (!iLocal_15.f_227)
				{
					if (__LIB_2__::func_15(iLocal_15.f_181, 0))
					{
						iLocal_15.f_227 = func_88(iLocal_15.f_181, -1);
					}
				}
				if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_2__::func_146(&iLocal_15, 13);
					return false;
				}
				else
				{
					if (!bVar4)
					{
						__LIB_2__::func_498(&iLocal_15);
						__LIB_2__::func_174(&iLocal_15, 8672);
					}
					PED::_0xED9582B3DA8F02B4((((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217 * 2) + iLocal_15.f_219) + 1);
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
	while (iVar1 < iLocal_15.f_216)
	{
		iVar3 = __LIB_2__::func_580(iVar1);
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
		while (iVar1 < iLocal_15.f_216)
		{
			iVar3 = __LIB_2__::func_580(iVar1);
			iVar2 = __LIB_2__::func_581(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iLocal_15.f_66[iVar1]))
			{
				if (iVar2 == __LIB_2__::func_16())
				{
				}
				else
				{
					iLocal_15.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!PED::_0x610438375E5D1801(iLocal_15.f_66[iVar1]))
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
				while (iVar1 < iLocal_15.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = __LIB_17__::func_791(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iLocal_15.f_31[iVar1]))
					{
						if (iVar2 == __LIB_2__::func_16())
						{
						}
						else
						{
							iLocal_15.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!PED::_0x610438375E5D1801(iLocal_15.f_31[iVar1]))
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
	if (iLocal_15.f_216 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = __LIB_2__::func_580(iVar0);
	vVar2 = { func_108(iVar0) };
	uVar5 = func_109(iVar0);
	iVar6 = __LIB_2__::func_581(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_40[iVar0]))
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
			if (__LIB_2__::func_581(iVar0) == __LIB_2__::func_16())
			{
				iLocal_15.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				iLocal_15.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, uVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(iLocal_15.f_40[iVar0], __LIB_2__::func_581(iVar0));
				PED::_UPDATE_PED_VARIATION(iLocal_15.f_40[iVar0], false, true, true, true, false);
			}
		}
	}
	if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 1))
	{
		__LIB_1__::func_991(iLocal_15.f_40[iVar0], 0);
		if (__LIB_2__::func_4(&iLocal_15, 1))
		{
			iVar7 = __LIB_2__::func_562(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_84[iVar0]))
				{
					iLocal_15.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_LANTERN09X"), vVar2, true, true, false, false, true);
					__LIB_2__::func_563(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_15.f_84[iVar0], iLocal_15.f_40[iVar0], iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		__LIB_2__::func_20(&(iLocal_15.f_152), iLocal_15.f_40[iVar0], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15.f_40[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_15.f_40[iVar0], 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_15.f_40[iVar0]);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_40[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_15.f_40[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15.f_40[iVar0], true, false);
		}
		iLocal_15.f_220++;
		if (iLocal_15.f_220 >= iLocal_15.f_216)
		{
			iLocal_15.f_220 = 0;
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
	if (iLocal_15.f_215 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = __LIB_17__::func_791(iVar0);
	vVar2 = { func_116(iVar0) };
	uVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	iVar7 = __LIB_2__::func_21(iLocal_15.f_181);
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
			iLocal_15[iVar0] = __LIB_1__::func_545(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			iLocal_15[iVar0] = PED::_0xEAF682A14F8E5F53(iLocal_15.f_31[iVar0], vVar2, uVar5, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
			{
				iLocal_15[iVar0] = __LIB_1__::func_545(iVar1, vVar2, uVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(iLocal_15[iVar0], 277, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_15[iVar0], 6, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_15[iVar0], 233, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_15[iVar0]);
			__LIB_2__::func_22(&(iLocal_15.f_152), iLocal_15[iVar0]);
			__LIB_2__::func_23(&(iLocal_15.f_152), iLocal_15[iVar0], 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_15[iVar0], false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_15[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15[iVar0], true, false);
			}
			if (iLocal_15.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
			}
			__LIB_2__::func_24(iLocal_15[iVar0], 1);
			PED::_0xBD75500141E4725C(iLocal_15[iVar0], iVar7);
			DECORATOR::DECOR_SET_BOOL(iLocal_15[iVar0], "bBeatPed", true);
			__LIB_2__::func_132(__LIB_1__::func_509(iLocal_15[iVar0]), iLocal_15[iVar0]);
		}
		else
		{
			iLocal_15.f_220 = (iLocal_15.f_220 - 1);
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_215)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_20()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_15[iVar0], 0, 0))
		{
			iVar1 = iVar0;
			func_125(&Local_274, iVar0);
			func_126(iVar0);
			__LIB_2__::func_429(&iLocal_15, iVar1, 0);
			__LIB_2__::func_723(&iLocal_15, iVar1, 0);
			if (__LIB_3__::func_964(iVar0))
			{
				__LIB_1__::func_571(iLocal_15[iVar0], iLocal_15.f_40[iVar0], 0, -1, 1);
			}
			else
			{
				if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 0))
				{
					__LIB_1__::func_473(iLocal_15.f_40[iVar0], joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), -1, 0, 0, -1082130432 /* Float: -1f */);
				}
				if (__LIB_2__::func_737(iVar0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], true, 0, true);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 98, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 47, true);
			__LIB_2__::func_150(&iLocal_15, iVar0, -1, -1);
			__LIB_2__::func_372(&iLocal_15, iVar0);
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
			if (__LIB_2__::func_157(Local_274.f_37[4], Global_36) || __LIB_2__::func_157(Local_274.f_37[5], Global_36))
			{
				__LIB_2__::func_277(&Local_274, 128);
			}
		}
	}
	if (!__LIB_2__::func_275(&Local_274, 2))
	{
		if (func_140())
		{
			__LIB_2__::func_697();
			__LIB_2__::func_691(&(Local_274.f_195), iLocal_15[1], 0, 20f);
			func_143();
			__LIB_2__::func_489(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_145())
			{
				if (func_146())
				{
					__LIB_2__::func_224(iLocal_15.f_151, 1);
					__LIB_2__::func_489(&Local_274, 3);
				}
			}
			else if (func_148())
			{
				if (func_149())
				{
					__LIB_2__::func_147(&iLocal_15, 16);
					__LIB_2__::func_146(&iLocal_15, 13);
				}
			}
			else
			{
				__LIB_2__::func_436(&iLocal_15, 0);
				if (func_151())
				{
					__LIB_2__::func_697();
					Local_274.f_56 = __LIB_0__::func_94(iLocal_15[0], Global_36, 1);
					__LIB_2__::func_442(&iLocal_15, 1);
					__LIB_2__::func_500(&iLocal_15, 1);
					__LIB_2__::func_679();
					__LIB_2__::func_489(&Local_274, 1);
				}
			}
			break;
		case 1:
			__LIB_2__::func_697();
			if (func_154())
			{
				__LIB_2__::func_489(&Local_274, 2);
			}
			break;
		case 2:
			func_155();
			__LIB_2__::func_489(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	__LIB_2__::func_527(&(Local_274.f_75));
	Local_274.f_53 = __LIB_2__::func_207(&iLocal_15);
	__LIB_17__::func_792(&iLocal_15, &(Local_274.f_112), &(Local_274.f_112.f_43));
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (iVar0 > 1)
		{
			__LIB_2__::func_208(&iLocal_15, iVar0, iLocal_15.f_40[iVar0]);
		}
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			func_172();
			__LIB_2__::func_691(&(Local_274.f_195), iLocal_15[1], 0, 20f);
			__LIB_1__::func_283(&(Local_274.f_9[0 /*3*/]), 0);
			__LIB_2__::func_554(&iLocal_15, 1, 0, -1);
			__LIB_17__::func_781(&iLocal_15, 1, 0, -1);
			__LIB_2__::func_151(&Local_274, 1);
			break;
		case 1:
			func_176();
			if (__LIB_2__::func_556(&iLocal_15, &(Local_274.f_51), &(iLocal_15.f_241), "COMBAT_FLEE", 1092616192 /* Float: 10f */))
			{
				__LIB_2__::func_151(&Local_274, 2);
			}
			break;
		case 2:
			__LIB_2__::func_680();
			__LIB_2__::func_151(&Local_274, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_49()
{
	PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
	__LIB_2__::func_503(&iLocal_15, 1);
	__LIB_2__::func_680();
}

bool func_83()
{
	int iVar0;
	switch (iLocal_15.f_221)
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
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(iLocal_15.f_151, 0, iLocal_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(iLocal_15.f_151, 1, iLocal_15.f_221), true))
	{
		__LIB_2__::func_277(&Local_274, 1);
	}
	iLocal_15.f_215 = 4;
	iLocal_15.f_217 = 0;
	iLocal_15.f_218 = 0;
	iLocal_15.f_216 = 4;
	if (iLocal_15.f_151 == 41)
	{
		Local_274.f_62 = 1;
		iLocal_15.f_181 = -1;
	}
	else if (__LIB_0__::func_181())
	{
		Local_274.f_61 = 1;
		iLocal_15.f_181 = 4;
	}
	else
	{
		iLocal_15.f_181 = 0;
	}
	__LIB_2__::func_147(&iLocal_15, 131072);
	__LIB_2__::func_570();
	func_248();
	__LIB_2__::func_41(&(iLocal_15.f_182), 65, 0f, 1.75f, 1.75f, 1.75f, 32896);
	iVar0 = __LIB_0__::func_41(__LIB_0__::func_23());
	if (iVar0 >= 21 || iVar0 < 5)
	{
		__LIB_2__::func_277(&Local_274, 1024);
	}
	return true;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	func_252(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!func_253(iParam0, 1))
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
	switch (Local_274.f_2)
	{
		case 0:
			__LIB_2__::func_187();
			__LIB_17__::func_793(&iLocal_15);
			TASK::REQUEST_WAYPOINT_RECORDING("am_odrbra_f_1");
			TASK::REQUEST_WAYPOINT_RECORDING("am_odrbra_f_2");
			TASK::REQUEST_WAYPOINT_RECORDING("am_odrbra_r_1");
			TASK::REQUEST_WAYPOINT_RECORDING("am_odrbra_r_2");
			Local_274.f_2 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!__LIB_17__::func_794(&iLocal_15))
			{
				iVar0 = 0;
			}
			if (((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("am_odrbra_f_1") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("am_odrbra_f_2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("am_odrbra_r_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("am_odrbra_r_2"))
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
	return func_265(iVar0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_268(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_268(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_271(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_271(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_272(iParam0, iParam1);
	__LIB_2__::func_133(iLocal_15[iParam1], sVar0, 0);
}

void func_126(int iParam0)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_15[iParam0], true, true);
	__LIB_2__::func_272(iLocal_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_2__::func_272(iLocal_15[iParam0], func_275(iParam0), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
}

bool func_140()
{
	if (__LIB_2__::func_275(&Local_274, 16384))
	{
		if (__LIB_17__::func_795(&iLocal_15, &(iLocal_15.f_152), &(iLocal_15.f_152.f_16), &(Local_274.f_52), 0, 3, 1))
		{
			if (Local_274.f_5 <= 3)
			{
				switch (iLocal_15.f_152.f_16)
				{
					case 4:
					case 256:
						__LIB_2__::func_571(&(iLocal_15.f_152), &(iLocal_15.f_152.f_16));
						return false;
				}
			}
			__LIB_2__::func_675(0);
			return true;
		}
	}
	if (__LIB_2__::func_275(&Local_274, 4096))
	{
		__LIB_2__::func_675(1);
		return true;
	}
	return false;
}

void func_143()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	if (!bVar2)
	{
		if (__LIB_2__::func_275(&Local_274, 64))
		{
			bVar2 = true;
		}
		else if (__LIB_2__::func_1(iLocal_15[0], 0, 1))
		{
			func_284(&Local_274, iLocal_15[0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
			bVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_2__::func_1(iLocal_15[iVar0], 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_429(&iLocal_15, iVar0, 1);
			__LIB_2__::func_723(&iLocal_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
			PED::_0x78815FC52832B690(iLocal_15[iVar0], 1);
			switch (iVar0)
			{
				case 0:
					fVar3 = 0.1f;
					break;
				case 1:
					fVar3 = 0.2f;
					break;
				default:
					fVar3 = 0f;
					break;
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_15[iVar0], WEAPON::GET_BEST_PED_WEAPON(iLocal_15[iVar0], false, false), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (Local_274.f_75.f_4)
			{
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			}
			if (iVar0 > 1)
			{
				PED::SET_COMBAT_FLOAT(iLocal_15[iVar0], 32, 3f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			__LIB_1__::func_474(iLocal_15[iVar0], &iVar1, fVar3, 0, 1, 1);
			__LIB_2__::func_189(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			if (!bVar2)
			{
				func_284(&Local_274, iLocal_15[iVar0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	__LIB_2__::func_277(&Local_274, 16384);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (Local_274.f_3 <= 0)
	{
		__LIB_2__::func_224(iLocal_15.f_151, 1);
	}
}

bool func_145()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_37[1]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_37[1], Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_146()
{
	func_143();
	__LIB_2__::func_277(&Local_274, 4);
	return true;
}

bool func_148()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_37[1], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_37[0], 1, 0))
		{
			__LIB_0__::func_11(&iLocal_15, 7);
			return true;
		}
	}
	if (__LIB_2__::func_539(&iLocal_15))
	{
		return true;
	}
	return false;
}

bool func_149()
{
	func_172();
	return true;
}

bool func_151()
{
	if (!__LIB_2__::func_47(&(iLocal_15.f_182), 64))
	{
		return false;
	}
	if (__LIB_2__::func_157(Local_274.f_37[2], Global_36))
	{
		if (func_299() || __LIB_2__::func_157(Local_274.f_37[3], Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_154()
{
	int iVar0;
	char[] cVar1[8];
	int iVar9;
	int iVar10;
	if (Local_274.f_5 >= 3)
	{
		if (!__LIB_2__::func_275(&Local_274, 8192))
		{
			if (func_303())
			{
				__LIB_2__::func_277(&Local_274, 8192);
			}
		}
	}
	if (Local_274.f_5 <= 4)
	{
		__LIB_2__::func_436(&iLocal_15, __LIB_2__::func_676() < 10f);
	}
	iVar10 = -1;
	if (Local_274.f_5 > 2)
	{
		iVar10 = func_305(&(Local_274.f_112));
		if (iVar10 == -1)
		{
			if (__LIB_2__::func_227(0f, 1, Local_274.f_74, 1))
			{
				if (__LIB_1__::func_313(&(Local_274.f_9[5 /*3*/]), 3f))
				{
					func_308(&(Local_274.f_112));
					__LIB_17__::func_796(&(Local_274.f_112), 1, 0);
				}
			}
		}
		else if (iVar10 == 1)
		{
			if (Local_274.f_5 < 5)
			{
				__LIB_2__::func_158(&Local_274, 5);
			}
		}
	}
	switch (Local_274.f_5)
	{
		case 0:
			func_172();
			__LIB_1__::func_283(&(Local_274.f_9[1 /*3*/]), 0);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 0.01f))
			{
				func_308(&(Local_274.f_112));
				__LIB_17__::func_796(&(Local_274.f_112), 0, 1);
				__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
				func_311(&iLocal_15, &Local_274, &iVar0, &cVar1, &iVar9);
				func_284(&Local_274, iLocal_15[iVar0], Global_35, &cVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 0.01f) || __LIB_1__::func_472(iLocal_15[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_312();
				func_313();
				__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 3);
			}
			break;
		case 3:
			__LIB_2__::func_681();
			if (__LIB_2__::func_227(0f, 1, iLocal_15[1], 1) && __LIB_2__::func_227(0f, 1, iLocal_15[0], 1))
			{
				func_315(&iLocal_15, &Local_274, &iVar0, &cVar1, &iVar9);
				func_284(&Local_274, iLocal_15[iVar0], Global_35, &cVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
				__LIB_2__::func_104(&(iLocal_15.f_152), 1);
				__LIB_2__::func_105(&(iLocal_15.f_152), 1);
				if (iLocal_15.f_152.f_16 != 0)
				{
					__LIB_2__::func_571(&(iLocal_15.f_152), &(iLocal_15.f_152.f_16));
				}
				__LIB_2__::func_158(&Local_274, 4);
			}
			break;
		case 4:
			if (func_316())
			{
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 4.5f) || iVar10 == 1)
			{
				func_284(&Local_274, iLocal_15[1], Global_35, "TAUNT_GEN_MALE", -1073741824 /* Float: -2f */, 1, -500314840, 2);
				__LIB_2__::func_277(&Local_274, 64);
				__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 6);
			}
			break;
		case 6:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 1f))
			{
				__LIB_2__::func_158(&Local_274, 7);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_155()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_2__::func_1(iLocal_15[iVar0], 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_189(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
			PED::_0x78815FC52832B690(iLocal_15[iVar0], 1);
			if (iVar0 > 1)
			{
				PED::SET_COMBAT_FLOAT(iLocal_15[iVar0], 32, 3f);
				TASK::TASK_COMBAT_PED(iLocal_15[iVar0], Global_35, 0, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(iLocal_15[iVar0], Global_35, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_172()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 1))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_15.f_40[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_15.f_40[iVar0], true, false);
			}
		}
		iVar0++;
	}
}

void func_176()
{
	switch (Local_274.f_55)
	{
		case 0:
			__LIB_2__::func_682();
			break;
		case 1:
			Local_274.f_53 = __LIB_2__::func_207(&iLocal_15);
			break;
	}
	Local_274.f_55++;
	Local_274.f_55 = (Local_274.f_55 % 2);
}

void func_248()
{
	iLocal_15.f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iLocal_15.f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	switch (Local_274)
	{
		case 0:
			func_391(&iLocal_15, &Local_274);
			break;
		case 1:
			func_392(&iLocal_15, &Local_274);
			break;
	}
}

void func_252(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
							Jump @5135; //curOff = 5103
							__LIB_2__::func_68(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							Jump @5957; //curOff = 5135
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
									break;
							}
							Jump @5957; //curOff = 5181
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
									break;
							}
							Jump @5957; //curOff = 5227
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
									break;
							}
							Jump @5957; //curOff = 5273
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
									break;
							}
							Jump @5957; //curOff = 5319
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
									break;
							}
							Jump @5957; //curOff = 5365
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
									break;
							}
							Jump @5957; //curOff = 5411
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
									break;
							}
							Jump @5957; //curOff = 5492
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
									break;
							}
							Jump @5957; //curOff = 5538
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
									break;
							}
							Jump @5957; //curOff = 5584
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
									break;
							}
							Jump @5957; //curOff = 5630
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
									break;
							}
							Jump @5957; //curOff = 5676
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
									break;
								case 1:
									__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							Jump @5957; //curOff = 5757
							switch (iParam4)
							{
								case 0:
									__LIB_2__::func_68(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
									break;
							}
							Jump @5957; //curOff = 5803
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
bool func_253(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_265(int iParam0)
{
	switch (iLocal_15.f_181)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1104129217;
				case 1:
					return 1394167636;
				case 2:
					return -304965544;
				case 3:
					return 605381;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1104129217;
				case 1:
					return 1394167636;
				case 2:
					return -304965544;
				case 3:
					return 605381;
				default:
					break;
			}
			break;
	}
	return __LIB_2__::func_16();
}

struct<4> func_268(int iParam0, int iParam1)
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
						return func_403(0, 10);
					case 1:
						return func_403(0, 11);
					case 2:
						return func_403(0, 4);
					case 3:
						return func_403(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(1, 10);
					case 1:
						return func_403(1, 11);
					case 2:
						return func_403(1, 4);
					case 3:
						return func_403(1, 7);
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
						return func_403(2, 10);
					case 1:
						return func_403(2, 11);
					case 2:
						return func_403(2, 4);
					case 3:
						return func_403(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(3, 10);
					case 1:
						return func_403(3, 11);
					case 2:
						return func_403(3, 4);
					case 3:
						return func_403(3, 7);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_271(int iParam0, int iParam1)
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
						return func_403(0, 0);
					case 1:
						return func_403(0, 2);
					case 2:
						return func_403(0, 4);
					case 3:
						return func_403(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(1, 0);
					case 1:
						return func_403(1, 2);
					case 2:
						return func_403(1, 4);
					case 3:
						return func_403(1, 7);
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
						return func_403(2, 0);
					case 1:
						return func_403(2, 2);
					case 2:
						return func_403(2, 4);
					case 3:
						return func_403(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(3, 0);
					case 1:
						return func_403(3, 2);
					case 2:
						return func_403(3, 4);
					case 3:
						return func_403(3, 7);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_272(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_409(iParam0, iParam1);
	return func_410(iVar0);
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GROUP_REPEATER");
		case 1:
			return joaat("GROUP_REVOLVER");
		case 2:
			return joaat("GROUP_REPEATER");
		case 3:
			return joaat("GROUP_REVOLVER");
		default:
			break;
	}
	return joaat("GROUP_REPEATER");
}

int func_284(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		iParam0->f_74 = iParam1;
		__LIB_17__::func_796(&(iParam0->f_112), 0, 1);
		__LIB_1__::func_148(&(iParam0->f_9[5 /*3*/]));
	}
	return 0;
}

bool func_299()
{
	if (ENTITY::GET_ENTITY_SPEED(Global_35) < 7f)
	{
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_JUMPING(Global_35))
	{
		return false;
	}
	return true;
}

bool func_303()
{
	if (__LIB_2__::func_157(Local_274.f_37[6], Global_36))
	{
		return true;
	}
	return false;
}

int func_305(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = 524288 | __LIB_2__::func_340(3, 0, 0);
	iVar5 = 1;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar1]))
		{
		}
		else
		{
			iVar0 = func_438(&(iLocal_15[iVar1]), uParam0[iVar1 /*21*/], 20f, &(uParam0->f_43), &iVar5, 4f, 3, 0, 0, iVar4, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(uParam0[iVar1 /*21*/]))
			{
				if (uParam0->f_79 == -1)
				{
					uParam0->f_79 = iVar1;
				}
				iVar3 = (uParam0[iVar1 /*21*/])->f_1;
				switch (iVar3)
				{
					case 0:
						if (!__LIB_2__::func_572(&(uParam0->f_43[0 /*17*/]), 0))
						{
							__LIB_2__::func_482(&(uParam0->f_43[0 /*17*/]), 1, 1);
						}
						break;
					case 1:
						if (!__LIB_2__::func_572(&(uParam0->f_43[1 /*17*/]), 0))
						{
							__LIB_2__::func_691(&(Local_274.f_195), iLocal_15[1], 0, 20f);
							__LIB_2__::func_482(&(uParam0->f_43[1 /*17*/]), 1, 1);
						}
						break;
				}
				switch (iVar3)
				{
					case 0:
					case 1:
						__LIB_17__::func_796(uParam0, 0, 1);
						break;
				}
			}
			if (iVar0 != -1)
			{
				iVar2 = iVar0;
				uParam0->f_78 = iVar2;
				switch (iVar2)
				{
					case 0:
						break;
					case 1:
						uParam0->f_82++;
						break;
				}
				uParam0->f_80 = 0;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_308(var uParam0)
{
	char* sVar0[2];
	char* sVar3[2];
	sVar0[0] = __LIB_2__::func_460(8);
	sVar0[1] = __LIB_2__::func_460(10);
	if (__LIB_0__::func_181())
	{
		sVar3[0] = "";
		sVar3[1] = "BRA_V2_ILO_NEG";
	}
	else
	{
		sVar3[0] = "";
		sVar3[1] = "BRA_V1_ILO_NEG";
	}
	__LIB_2__::func_586(&(uParam0->f_43[0 /*17*/]), sVar0[0], sVar3[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_586(&(uParam0->f_43[1 /*17*/]), sVar0[1], sVar3[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_2__::func_482(&(uParam0->f_43[0 /*17*/]), 1, 1);
}

void func_311(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			StringCopy(sParam3, "GANG_INTERACT_STOP_RIGHT_THERE", 64);
			*iParam4 = 2;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_STOP_RIGHT_THERE", 64);
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_STOP_RIGHT_THERE", 64);
			*iParam4 = 2;
			break;
	}
}

void func_312()
{
	int iVar0;
	vector3 vVar1;
	vVar1 = { func_449(&Local_274, 0) };
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[0], false, 0, false);
	__LIB_2__::func_429(&iLocal_15, 0, 1);
	__LIB_2__::func_723(&iLocal_15, 0, 1);
	__LIB_2__::func_723(&iLocal_15, 1, 1);
	if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 7f || __LIB_2__::func_275(&Local_274, 1))
	{
		PED::FORCE_PED_MOTION_STATE(iLocal_15[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
	}
	PED::_0x8ACC0506743A8A5C(iLocal_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2f, 20000, 4.5f, 2049, 40000f);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 1);
	__LIB_1__::func_474(iLocal_15[0], &iVar0, 0, 0, 1, 1);
	vVar1 = { func_449(&Local_274, 1) };
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[1], false, 0, false);
	__LIB_2__::func_429(&iLocal_15, 1, 1);
	__LIB_2__::func_429(&iLocal_15, 1, 1);
	if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 7f || __LIB_2__::func_275(&Local_274, 1))
	{
		PED::FORCE_PED_MOTION_STATE(iLocal_15[1], joaat("MOTIONSTATE_RUN"), false, 0, false);
	}
	PED::_0x8ACC0506743A8A5C(iLocal_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2f, 20000, 4.5f, 2049, 40000f);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 1);
	__LIB_1__::func_474(iLocal_15[1], &iVar0, 0, 0, 1, 1);
	__LIB_2__::func_189(&iLocal_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
	__LIB_2__::func_189(&iLocal_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
	Local_274.f_63 = func_450();
	if (Global_1935630.f_40 != 0)
	{
		Local_274.f_64 = 1;
	}
	__LIB_1__::func_283(&(Local_274.f_9[6 /*3*/]), 0);
	__LIB_2__::func_277(&Local_274, 16384);
}

void func_313()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar5;
	int iVar9;
	iVar9 = 2;
	while (iVar9 <= 3)
	{
		__LIB_2__::func_429(&iLocal_15, iVar9, 1);
		__LIB_2__::func_723(&iLocal_15, iVar9, 1);
		vVar1 = { func_449(&Local_274, iVar9) };
		vVar5 = { func_451(&Local_274, iVar9) };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1.5f, 0, 8f, 0f, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar5, Global_35, 1f, 0, 5f, 0f, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar5, Global_35, 0.101f, 0, 2f, 0f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		if (iVar9 == 2)
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
		}
		__LIB_1__::func_474(iLocal_15[iVar9], &iVar0, 0, 0, 1, 1);
		iVar9++;
	}
}

void func_315(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_STOP_OR_WE_SHOOT", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_STOP_OR_WE_SHOOT", 64);
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "GANG_STOP_OR_ILL_SHOOT", 64);
			*iParam4 = 2;
			break;
	}
}

bool func_316()
{
	char[] cVar0[8];
	int iVar8;
	int iVar9;
	float fVar10;
	__LIB_2__::func_714(&(Local_274.f_195), 40f);
	if (__LIB_2__::func_4(&iLocal_15, 33554432))
	{
		if (__LIB_2__::func_587(&iLocal_15))
		{
			__LIB_2__::func_277(&Local_274, 4096);
			return false;
		}
	}
	if (Local_274.f_7 <= 6)
	{
		if (func_454())
		{
			__LIB_2__::func_277(&Local_274, 4096);
			return false;
		}
		if (Local_274.f_7 < 6)
		{
			__LIB_2__::func_681();
		}
	}
	else
	{
		if (func_455())
		{
			__LIB_2__::func_277(&Local_274, 4096);
			return false;
		}
		__LIB_2__::func_527(&(Local_274.f_75));
	}
	__LIB_2__::func_510(&iLocal_15);
	switch (Local_274.f_7)
	{
		case 0:
			func_457();
			__LIB_2__::func_280(&Local_274, 1);
			break;
		case 1:
			if (!func_459(&Local_274, 0))
			{
				func_460(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
				func_284(&Local_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
				__LIB_2__::func_282(&iLocal_15, 0);
				__LIB_2__::func_280(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_458(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				if (!func_459(&Local_274, 0))
				{
					func_462(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
					__LIB_2__::func_691(&(Local_274.f_195), iLocal_15[1], 1, 20f);
					PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), func_463());
					__LIB_1__::func_283(&(Local_274.f_9[7 /*3*/]), 0);
					__LIB_2__::func_280(&Local_274, 3);
				}
			}
			else
			{
				func_464();
				__LIB_2__::func_280(&Local_274, 6);
			}
			break;
		case 3:
			if (__LIB_2__::func_458(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				fVar10 = 8.5f;
				if (func_465(fVar10) && !func_459(&Local_274, 0))
				{
					func_466(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
					__LIB_1__::func_148(&(Local_274.f_9[7 /*3*/]));
					__LIB_2__::func_280(&Local_274, 4);
				}
			}
			else
			{
				func_464();
				__LIB_2__::func_280(&Local_274, 6);
			}
			break;
		case 4:
			if (__LIB_2__::func_458(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				fVar10 = 7.5f;
				if (func_465(fVar10) && !func_459(&Local_274, 0))
				{
					__LIB_2__::func_691(&(Local_274.f_195), iLocal_15[1], 0, 20f);
					__LIB_2__::func_677(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
					__LIB_2__::func_277(&Local_274, 64);
					__LIB_2__::func_280(&Local_274, 5);
				}
			}
			else
			{
				func_464();
				__LIB_2__::func_280(&Local_274, 6);
			}
			break;
		case 5:
			__LIB_1__::func_283(&(Local_274.f_9[4 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_274.f_9[4 /*3*/]), 0.4f))
			{
				__LIB_2__::func_277(&Local_274, 4096);
			}
			break;
		case 6:
			__LIB_2__::func_592(&(Local_274.f_112.f_43), 1, 1);
			if (__LIB_0__::func_86(Local_274.f_197))
			{
				Local_274.f_197 = { Global_36 };
				__LIB_0__::func_172(Local_274.f_37[6]);
				Local_274.f_197 = { Global_36 };
				Local_274.f_37[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Local_274.f_197, 0f, 0f, 0f, 3f, 3f, 5f, "volRobArea");
			}
			if ((!__LIB_2__::func_458(&iLocal_15, 0, 0) && !func_459(&Local_274, 0)) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				__LIB_2__::func_280(&Local_274, 7);
			}
			break;
		case 7:
			if (func_470())
			{
				if (func_471(iLocal_15[1], &(Local_274.f_75), 0.2f, 1, 0, 2, 0, 0, 0, 5000, 1, 0))
				{
					PED::_0x4FD80C3DD84B817B(iLocal_15[1]);
					PED::_0x58F7DB5BD8FA2288(iLocal_15[1]);
					__LIB_2__::func_691(&(Local_274.f_195), iLocal_15[1], 0, 20f);
					if (Local_274.f_75.f_4)
					{
						__LIB_2__::func_282(&iLocal_15, 1);
						__LIB_2__::func_280(&Local_274, 8);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_15[1], true, false);
						TASK::TASK_REACT(iLocal_15[1], Global_35, Global_36, "Default_Shocked", 0.6f, 0, 4);
						TASK::TASK_REACT(iLocal_15[0], Global_35, Global_36, "Default_Shocked", 0.3f, 0, 4);
						__LIB_2__::func_280(&Local_274, 5);
					}
				}
			}
			break;
		case 8:
			if (__LIB_2__::func_227(0f, 1, iLocal_15[1], 1))
			{
				func_472();
				__LIB_2__::func_280(&Local_274, 9);
			}
			break;
		case 9:
			if (func_473())
			{
				__LIB_2__::func_280(&Local_274, 10);
			}
			break;
		case 10:
			break;
		case 11:
			return true;
	}
	return false;
}

void func_391(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_37[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1737.212f, 58.81725f, 158.8715f, 0f, 0f, 18.34016f, 8f, 8f, 5f, "volBridgeRobArea");
		iParam1->f_37[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1743.692f, 69.342f, 159.326f, 0f, 0f, 33.70486f, 4.208f, 25f, 9.654927f, "volTrigger");
		iParam1->f_37[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1738.478f, 61.426f, 159.149f, 0f, 0f, 33.70486f, 4.264f, 25f, 9.370013f, "volTriggerSlow");
		iParam1->f_37[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], -1907.113f, -51.53559f, 212.4884f, 0f, 0f, -83.43656f, 220.5375f, 335.8115f, 240.5904f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], -1581.194f, -85.49786f, 128.7063f, 0f, 0f, -93.16156f, 303.745f, 341.2541f, 107.3552f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], -1673.457f, -109.6284f, 128.7063f, 0f, 0f, 173.1701f, 303.745f, 341.2541f, 107.3552f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1745.833f, 74.472f, 159.339f, 0f, 0f, 32.84999f, 7.022682f, 10.237f, 10f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1743.226f, 67.917f, 155.116f, 0f, 0f, 32.84999f, 7.022682f, 10.237f, 10f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1738.758f, 60.999f, 155.116f, 0f, 0f, 32.84999f, 12.91665f, 8.565f, 9.370356f, "volSlowest");
		iParam1->f_37[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_37[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 155.1157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
		iParam1->f_37[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGriefArea");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1762.107f, 52.76211f, 157.4706f, 0f, 0f, 16f, 35.9721f, 28.83903f, 52.59315f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1753.436f, 31.77595f, 157.4706f, 0f, 0f, 16f, 35.9721f, 19.78889f, 38.47161f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1731.675f, 45.06287f, 152.0251f, 0f, 0f, 16f, 68.26999f, 19.78889f, 39.99775f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1742.678f, 79.87193f, 147.4783f, 0f, 0f, 16f, 35.9721f, 33.7631f, 13.59598f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1710.665f, 64.04034f, 150.1661f, 0f, 0f, 16f, 35.9721f, 19.78889f, 45.35422f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1766.693f, 66.48969f, 161.7077f, 0f, 0f, 35f, 35.9721f, 15.2716f, 21.8018f);
	}
	else
	{
		iParam1->f_37[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1735.447f, 56.41874f, 158.8715f, 0f, 0f, 0f, 8f, 8f, 5f, "volBridgeRobArea");
		iParam1->f_37[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1732.65f, 40.79314f, 161.9901f, -5f, 0f, 19.70485f, 4.140419f, 25f, 13f, "volTrigger");
		iParam1->f_37[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1733.915f, 44.32264f, 161.6615f, -5f, 0f, 19.70485f, 4.418937f, 11.86304f, 13f, "volTriggerSlow");
		iParam1->f_37[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], -1874.758f, -16.34735f, 188.0956f, 0f, 0f, -34.35329f, 178.4207f, 242.0585f, 305.9797f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], -1623.138f, 191.5055f, 128.7063f, 0f, 0f, -85.59352f, 296.4414f, 231.8987f, 107.3552f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], -1716.568f, 72.54486f, 188.0956f, 0f, 0f, -70.353f, 62.75396f, 46.50194f, 112.4214f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], -1765.099f, 55.21907f, 188.0956f, 0f, 0f, -70.353f, 62.75396f, 46.50194f, 112.4214f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.054f, 35.283f, 158.334f, 0f, 0f, -160.487f, 7.022682f, 6f, 10f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1732.597f, 40.377f, 158.545f, 0f, 0f, -160.5822f, 7.022682f, 6f, 10f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1735.728f, 49.261f, 158.545f, 0f, 0f, -160.5822f, 12.91665f, 13.565f, 9.370356f, "volSlowest");
		iParam1->f_37[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 159.2157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_37[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
		iParam1->f_37[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGriefArea");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1761.187f, 49.55367f, 157.4706f, 0f, 0f, 16f, 35.9721f, 19.78889f, 52.59315f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1753.436f, 31.77595f, 157.4706f, 0f, 0f, 16f, 35.9721f, 19.78889f, 38.47161f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1739.2f, 71.30732f, 152.0251f, 0f, 0f, 16f, 68.26999f, 19.78889f, 39.99775f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1730.752f, 38.28046f, 147.4783f, 0f, 0f, 16f, 35.9721f, 19.78889f, 13.59598f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], -1710.665f, 64.04034f, 150.1661f, 0f, 0f, 16f, 35.9721f, 19.78889f, 45.35422f);
	}
}

void func_392(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_37[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeRobArea");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[6], 838.1658f, -697.9883f, 69.4267f, 0f, 0f, -15.32145f, 8.882322f, 23.19692f, 15f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[6], 836.9966f, -698.0906f, 69.4267f, 0f, 0f, -20.32144f, 8.882322f, 23.10287f, 15f);
		iParam1->f_37[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(839.541f, -690.551f, 65f, 0f, 0f, 169.5818f, 32.18207f, 25f, 30f, "volTrigger");
		iParam1->f_37[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(837.3818f, -702.2953f, 65f, 0f, 0f, 169.5818f, 32.18207f, 25f, 30f, "volTriggerSlow");
		iParam1->f_37[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], 653.8997f, -754.6222f, 77.2983f, 0f, 0f, -100.4366f, 220.5375f, 335.8115f, 102.3968f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], 950.4058f, -881.6387f, 64.1602f, 0f, 0f, -112.1616f, 303.745f, 341.2541f, 107.3552f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(842.281f, -678.498f, 62f, 0f, 0f, -10.08309f, 48.55145f, 32.70766f, 30f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(837.324f, -702.5f, 68f, 0f, 0f, -10.08309f, 44.21958f, 30f, 30f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(832.5411f, -720.9957f, 71f, 0f, 0f, -14.08309f, 40f, 18f, 30f, "volSlowest");
		iParam1->f_37[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_37[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 155.1157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
		iParam1->f_37[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGriefArea");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], 817.3767f, -692.2924f, 69.4267f, 0f, 0f, -15.32145f, 32.91606f, 56.89853f, 28.48458f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], 859.656f, -703.876f, 69.4267f, 0f, 0f, -15.32145f, 32.91606f, 56.89853f, 28.48458f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], 830.3483f, -726.0137f, 69.4267f, 0f, 0f, -15.32145f, 76.61453f, 34.77027f, 28.48458f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], 848.6749f, -659.1212f, 69.4267f, 0f, 0f, -15.32145f, 76.61453f, 34.77027f, 28.48458f);
	}
	else
	{
		iParam1->f_37[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBridgeRobArea");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[6], 845.8454f, -660.186f, 69.4267f, 0f, 0f, -2.32145f, 8.882322f, 23.19692f, 15f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[6], 845.0909f, -667.5868f, 69.4267f, 0f, 0f, -9.32144f, 8.882322f, 9.10287f, 15f);
		iParam1->f_37[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(845.0783f, -666.7124f, 65f, 0f, 0f, 173.5818f, 21.59675f, 25f, 30f, "volTrigger");
		iParam1->f_37[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(846.3382f, -655.5139f, 65f, 0f, 0f, 173.5818f, 21.59675f, 25f, 30f, "volTriggerSlow");
		iParam1->f_37[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], 732.3145f, -570.2667f, 41.81028f, 0f, 0f, -100.4825f, 178.4207f, 249.7477f, 119.4785f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[0], 995.8594f, -566.3121f, 68.67828f, 0f, 0f, -0.406f, 296.4414f, 231.8987f, 107.3552f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(840.8793f, -678.9103f, 69.31625f, 0f, 0f, -10.08309f, 48.55145f, 32.70766f, 30f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(843.8898f, -658.1097f, 70.10764f, 0f, 0f, -10.08309f, 44.21958f, 30f, 30f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(847.0398f, -643.6722f, 73.08923f, 0f, 0f, -6.083089f, 40f, 18f, 45.31071f, "volSlowest");
		iParam1->f_37[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 159.2157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_37[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
		iParam1->f_37[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGriefArea");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], 821.9105f, -667.5668f, 69.4267f, 0f, 0f, -9.715546f, 32.91606f, 56.89853f, 28.48458f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], 866.4661f, -675.2966f, 69.4267f, 0f, 0f, -1.715546f, 32.91606f, 56.89853f, 28.48458f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], 840.722f, -696.6516f, 69.4267f, 0f, 0f, -6.715547f, 76.61453f, 34.77027f, 28.48458f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_37[7], 851.9071f, -631.4554f, 69.4267f, 0f, 0f, -2.715547f, 76.61453f, 34.77027f, 28.48458f);
	}
}

struct<4> func_403(int iParam0, int iParam1)
{
	return func_499(iParam0, iParam1);
}

int func_409(int iParam0, int iParam1)
{
	if (iParam0->f_62)
	{
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
			default:
				break;
		}
		return 4;
	}
	else if (iParam0->f_61)
	{
		switch (iParam1)
		{
			case 0:
				return 3;
			case 1:
				return 2;
			case 2:
				return 3;
			case 3:
				return 2;
			default:
				break;
		}
		return 3;
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 1;
			case 3:
				return 0;
			default:
				break;
		}
	}
	return 0;
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 1:
			return "0357_G_M_M_UniDuster_02_WHITE_01";
		case 2:
			return "0712_G_M_M_UniRanchers_01_WHITE_02";
		case 3:
			return "0713_G_M_M_UniRanchers_01_WHITE_03";
		case 4:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 5:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		default:
			break;
	}
	return "";
}

int func_438(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_580(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

struct<4> func_449(int iParam0, int iParam1)
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
						return func_403(0, 1);
					case 1:
						return func_403(0, 3);
					case 2:
						return func_403(0, 5);
					case 3:
						return func_403(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(1, 1);
					case 1:
						return func_403(1, 3);
					case 2:
						return func_403(1, 5);
					case 3:
						return func_403(1, 8);
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
						return func_403(2, 1);
					case 1:
						return func_403(2, 3);
					case 2:
						return func_403(2, 5);
					case 3:
						return func_403(2, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_403(3, 1);
					case 1:
						return func_403(3, 3);
					case 2:
						return func_403(3, 5);
					case 3:
						return func_403(3, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

float func_450()
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_594(&Local_274, 1), true);
}

struct<4> func_451(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				switch (iParam1)
				{
					case 2:
						return func_403(0, 6);
					case 3:
						return func_403(0, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 2:
						return func_403(1, 6);
					case 3:
						return func_403(1, 9);
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
					case 2:
						return func_403(2, 6);
					case 3:
						return func_403(2, 9);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 2:
						return func_403(3, 6);
					case 3:
						return func_403(3, 9);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

bool func_454()
{
	int iVar0;
	if (__LIB_2__::func_275(&Local_274, 8192))
	{
		if (!__LIB_2__::func_157(Local_274.f_37[6], Global_36))
		{
			return true;
		}
	}
	if (Local_274.f_63 >= 0f)
	{
		if (Local_274.f_63 + 3f) < func_450()
		{
			return true;
		}
		if (!Local_274.f_75.f_4)
		{
			if (__LIB_1__::func_285(&(Local_274.f_9[6 /*3*/]), 2f))
			{
				if (__LIB_2__::func_157(Local_274.f_37[7], Global_36))
				{
					return true;
				}
			}
		}
	}
	if (Local_274.f_75 <= 0)
	{
		if (__LIB_2__::func_458(&iLocal_15, 0, 0) || !Local_274.f_64)
		{
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (iLocal_15.f_9[iVar0] < 2f)
				{
					return true;
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_455()
{
	if (func_595())
	{
		if (__LIB_0__::func_94(Global_35, Local_274.f_197, 0) > 7f && __LIB_2__::func_625(&iLocal_15, 0, 3) < 15f)
		{
			if (__LIB_17__::func_797())
			{
				return true;
			}
		}
	}
	return false;
}

void func_457()
{
	int iVar0;
	iVar0 = __LIB_3__::func_554(__LIB_1__::func_898(), 0, 0, 0);
	switch (iVar0)
	{
		case 0:
			Local_274.f_75.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			Local_274.f_75.f_21 = 1;
			Local_274.f_75.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
			Local_274.f_75.f_22 = 2;
			Local_274.f_75.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_75.f_23 = 1;
			Local_274.f_75.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_75.f_24 = 1;
			break;
		case 4:
			Local_274.f_75.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			Local_274.f_75.f_21 = 3;
			Local_274.f_75.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_75.f_23 = 2;
			Local_274.f_75.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_75.f_24 = 1;
			break;
		default:
			Local_274.f_75.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			Local_274.f_75.f_21 = 1;
			Local_274.f_75.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_75.f_23 = 1;
			Local_274.f_75.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_75.f_24 = 1;
			break;
	}
}

bool func_459(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return !__LIB_2__::func_227(0f, 1, iParam1, 1);
	}
	return !__LIB_2__::func_227(0f, 1, iParam0->f_74, 1);
}

void func_460(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_TOLL", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_TOLL", 64);
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_STICKUP", 64);
			*iParam4 = 1;
			break;
	}
}

void func_462(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "ORDER_DISMOUNT", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "ORDER_DISMOUNT_HORSE", 64);
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "ORDER_DISMOUNT_HORSE", 64);
			*iParam4 = 2;
			break;
	}
	if (!__LIB_2__::func_458(iParam0, 1, 1))
	{
		StringCopy(sParam3, "HANDS_UP", 64);
		*iParam4 = 0;
	}
}

char* func_463()
{
	switch (iLocal_15.f_181)
	{
		case 0:
			return "BRA_V1_ILO_SURRENDER";
		case 4:
			return "BRA_V2_ILO_SURRENDER";
		default:
			break;
	}
	return "BRA_V3_ILO_SURRENDER";
}

void func_464()
{
	__LIB_2__::func_503(&iLocal_15, 0);
	__LIB_2__::func_691(&(Local_274.f_195), iLocal_15[1], 0, 50f);
}

int func_465(float fParam0)
{
	return __LIB_2__::func_689(&iLocal_15, Local_274.f_9[7 /*3*/], fParam0);
}

void func_466(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			StringCopy(sParam3, "FINAL_WARNING", 64);
			*iParam4 = 2;
			break;
		case 4:
			*iParam2 = 0;
			StringCopy(sParam3, "FINAL_WARNING", 64);
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "ORDER_DISMOUNT_HORSE_ESCALATED", 64);
			*iParam4 = 1;
			if (!__LIB_2__::func_458(iParam0, 1, 1))
			{
				StringCopy(sParam3, "FINAL_WARNING", 64);
				*iParam4 = 0;
			}
			break;
	}
}

bool func_470()
{
	if (Local_274.f_75 > 0)
	{
		return true;
	}
	if (__LIB_2__::func_458(&iLocal_15, 0, 0))
	{
		return false;
	}
	__LIB_1__::func_283(&(Local_274.f_9[8 /*3*/]), 0);
	if (!__LIB_1__::func_285(&(Local_274.f_9[8 /*3*/]), 1f))
	{
		return false;
	}
	if (func_459(&Local_274, 0))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0f, 1, Global_35, 1))
	{
		return false;
	}
	return true;
}

bool func_471(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	__LIB_2__::func_527(uParam1);
	if (Global_1935630.f_12)
	{
		uParam1->f_1 = 0;
		uParam1->f_2 = 1;
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
	switch (*uParam1)
	{
		case 0:
			if (!uParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_16, 0, -1082130432 /* Float: -1f */, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_IS_PED_FALLING_2(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !__LIB_0__::func_163(Global_35, 501393341)) && !__LIB_0__::func_163(Global_35, 1553520516)) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				uParam1->f_25 = { Global_36 };
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
					__LIB_1__::func_283(&(uParam1->f_32), 0);
				}
				else
				{
					__LIB_2__::func_462(&(uParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!__LIB_0__::func_474(609))
				{
					__LIB_0__::func_105(1);
					uParam1->f_28 = __LIB_0__::func_45("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					__LIB_0__::func_378(609, &uVar0, &uVar1);
					__LIB_2__::func_447(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && __LIB_1__::func_285(&(uParam1->f_32), 2f)) && __LIB_2__::func_448(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (__LIB_2__::func_694(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (__LIB_0__::func_139(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BENDSUCCESS"), "bEndSuccess", 1, 1.8f, 1))
				{
					__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				uParam1->f_1 = 1;
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
			else if (__LIB_2__::func_518(uParam1))
			{
				bVar2 = true;
			}
			else if (__LIB_2__::func_508(uParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((__LIB_0__::func_27(iParam5, 16) && !__LIB_0__::func_163(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				bVar2 = true;
			}
			if (!uParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_20))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(Global_35, iParam0, uParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_611(iParam6, 1, 0, -142743235, 0);
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
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BBEFOREHITBREAKOUT"), "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return true;
				}
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_INTRO"), "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(0f, 1, iParam0, 1))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_17, 0, -1082130432 /* Float: -1f */, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_HIT"), "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_2__::func_461(0);
					}
				}
				if (uParam1->f_11)
				{
					if (__LIB_2__::func_227(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
						{
							__LIB_2__::func_303(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (__LIB_2__::func_227(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_748(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_FAILED"), "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_19))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_19, 0, -1082130432 /* Float: -1f */, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("BLENDOUT"), "Blendout", iParam8, 0.8f, 0) || !__LIB_0__::func_163(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_472()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar9;
	int iVar10;
	char[] cVar11[8];
	int iVar19;
	char* sVar20;
	vector3 vVar21;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!__LIB_2__::func_1(iLocal_15[iVar0], 0, 0))
		{
		}
		else
		{
			__LIB_0__::func_325(&(iLocal_15.f_22[iVar0]));
			switch (iVar0)
			{
				case 0:
					fVar9 = 0.2f;
					break;
				case 1:
					fVar9 = 0.75f;
					break;
			}
			vVar5 = { func_616(&Local_274, iVar0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 0))
			{
				switch (Local_274)
				{
					case 0:
						if (__LIB_2__::func_275(&Local_274, 1))
						{
							if (iVar0 == 0)
							{
								sVar20 = "am_odrbra_f_1";
							}
							else
							{
								sVar20 = "am_odrbra_f_2";
							}
						}
						else if (iVar0 == 0)
						{
							sVar20 = "am_odrbra_r_1";
						}
						else
						{
							sVar20 = "am_odrbra_r_2";
						}
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sVar20, 0, 74, -1, 0, 0, -1);
						break;
					case 1:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_15.f_40[iVar0], true, false), 2f, -1, 3f, 1, 40000f);
						break;
				}
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_15.f_40[iVar0], -1, -1, 2f, 1, 0, 0);
			}
			else
			{
				switch (Local_274)
				{
					case 0:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 2.001f, -1, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 2f, -1, 6f, 1, 40000f);
						break;
					case 1:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 2f, -1, 6f, 1, 40000f);
						break;
				}
			}
			__LIB_1__::func_474(iLocal_15[iVar0], &iVar1, fVar9, 0, 1, 1);
		}
		iVar0++;
	}
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (!__LIB_2__::func_1(iLocal_15[iVar0], 0, 0))
		{
		}
		else
		{
			__LIB_0__::func_325(&(iLocal_15.f_22[iVar0]));
			switch (iVar0)
			{
				case 0:
					fVar9 = 0.4f;
					break;
				case 1:
					fVar9 = 0.9f;
					break;
			}
			vVar21 = { func_617(&Local_274, iVar0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(iLocal_15[iVar0], Global_35, 4, vVar21, 29568, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(iLocal_15[iVar0], &iVar1, fVar9, 0, 1, 1);
		}
		iVar0++;
	}
	__LIB_2__::func_678(&iLocal_15, &Local_274, &iVar10, &cVar11, &iVar19);
	if (__LIB_2__::func_1(iLocal_15[iVar10], 0, 0))
	{
		func_284(&Local_274, iLocal_15[iVar10], Global_35, &cVar11, -1073741824 /* Float: -2f */, 1, 1744022339, iVar19);
	}
}

bool func_473()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;
	iVar5 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_0__::func_71(iLocal_15[iVar0]))
		{
			if (!__LIB_0__::func_163(iLocal_15[iVar0], 518218985))
			{
				vVar1 = { func_617(&Local_274, iVar0) };
				TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(iLocal_15[iVar0], Global_35, 4, vVar1, 29568, -1082130432 /* Float: -1f */, -1, 0);
				iVar5 = 0;
			}
		}
		else
		{
			iVar5 = 0;
		}
		iVar0++;
	}
	return iVar5;
}

struct<4> func_499(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_633(iParam0, iParam1) };
	Var0.f_3 = func_634(iParam0, iParam1);
	return Var0;
}

int func_580(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_3__::func_269(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_580(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_3__::func_272(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_270(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

Vector3 func_594(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_449(iParam0, iParam1) };
	return vVar0;
}

bool func_595()
{
	if (Local_274 != 0)
	{
		return true;
	}
	if (Global_36.f_2 <= 153.5f)
	{
		return true;
	}
	if (__LIB_2__::func_557(&iLocal_15, 0, iLocal_15.f_215, 0) > 1)
	{
		return true;
	}
	return false;
}

int func_611(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_611(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

struct<4> func_616(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_403(0, 13);
			}
			else
			{
				return func_403(1, 13);
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_403(2, 13);
			}
			else
			{
				return func_403(3, 13);
			}
			break;
	}
	return Var0;
}

struct<4> func_617(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					if (__LIB_2__::func_275(iParam0, 1))
					{
						return func_403(0, 12);
					}
					else
					{
						return func_403(1, 12);
					}
					break;
				case 2:
				case 3:
					if (__LIB_2__::func_275(iParam0, 1))
					{
						return func_403(0, 14);
					}
					else
					{
						return func_403(1, 14);
					}
					break;
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_403(2, 12);
			}
			else
			{
				return func_403(3, 12);
			}
			break;
	}
	return Var0;
}

Vector3 func_633(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1729.037f, 55.1623f, 154.6673f;
				case 1:
					return -1736.706f, 53.1099f, 154.7622f;
				case 2:
					return -1727.261f, 55.5487f, 154.547f;
				case 3:
					return -1733.147f, 54.4014f, 154.7622f;
				case 4:
					return -1730.825f, -28.8174f, 169.2484f;
				case 5:
					return -1723.19f, -9.9752f, 162.8449f;
				case 6:
					return -1723.285f, 1.4775f, 160.3464f;
				case 7:
					return -1731.255f, -32.5596f, 170.4781f;
				case 8:
					return -1717.962f, -6.0187f, 161.6357f;
				case 9:
					return -1718.992f, 4.6263f, 160.1538f;
				case 10:
					return -1695.524f, 56.0071f, 135.1386f;
				case 11:
					return -1692.293f, 55.8458f, 134.5537f;
				case 12:
					return -1563.492f, 72.4161f, 109.6908f;
				case 13:
					return -1739.58f, 43.3928f, 152.9405f;
				case 14:
					return -1720.876f, -59.0768f, 175.3309f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1728.544f, 64.984f, 154.7763f;
				case 1:
					return -1740.827f, 63.24f, 154.7625f;
				case 2:
					return -1727.622f, 66.0547f, 154.7285f;
				case 3:
					return -1736.994f, 63.0852f, 154.7622f;
				case 4:
					return -1763.714f, 122.9245f, 155.3251f;
				case 5:
					return -1764.739f, 107.2557f, 158.4045f;
				case 6:
					return -1761.188f, 100.4338f, 157.896f;
				case 7:
					return -1764.412f, 127.6986f, 153.5219f;
				case 8:
					return -1769.007f, 108.5848f, 158.3481f;
				case 9:
					return -1766.606f, 101.1617f, 158.2021f;
				case 10:
					return -1695.524f, 56.0071f, 135.1386f;
				case 11:
					return -1692.293f, 55.8458f, 134.5537f;
				case 12:
					return -1563.944f, 72.2114f, 109.8925f;
				case 13:
					return -1750.64f, 66.0685f, 155.6229f;
				case 14:
					return -1754.979f, 147.9245f, 146.5603f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 823.6652f, -711.5054f, 64.5023f;
				case 1:
					return 833.2661f, -711.5591f, 64.4245f;
				case 2:
					return 822.0086f, -712.6428f, 64.0812f;
				case 3:
					return 829.8744f, -711.6774f, 64.2322f;
				case 4:
					return 791.9047f, -760.6771f, 53.1025f;
				case 5:
					return 822.8891f, -743.5657f, 58.0261f;
				case 6:
					return 830.783f, -728.4836f, 61.111f;
				case 7:
					return 788.7646f, -761.1575f, 52.7973f;
				case 8:
					return 818.172f, -744.451f, 57.646f;
				case 9:
					return 822.1853f, -732.6055f, 60.4165f;
				case 10:
					return 804.9972f, -706.3107f, 64.1642f;
				case 11:
					return 802.7814f, -707.7939f, 64.1291f;
				case 12:
					return 809.162f, -869.8225f, 52.1317f;
				case 13:
					return 811.2566f, -707.0321f, 64.1727f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 835.8835f, -646.5416f, 71.4059f;
				case 1:
					return 848.412f, -647.9088f, 70.322f;
				case 2:
					return 833.0231f, -644.6268f, 71.5748f;
				case 3:
					return 843.9594f, -647.127f, 70.4443f;
				case 4:
					return 827.7505f, -592.3489f, 78.4614f;
				case 5:
					return 837.864f, -601.7726f, 76.8486f;
				case 6:
					return 844.8516f, -619.3614f, 74.1909f;
				case 7:
					return 823.8334f, -587.7614f, 78.5552f;
				case 8:
					return 840.006f, -597.2047f, 77.1917f;
				case 9:
					return 846.9919f, -616.7607f, 74.2096f;
				case 10:
					return 823.1742f, -644.031f, 71.6492f;
				case 11:
					return 825.2624f, -644.0623f, 71.7028f;
				case 12:
					return 818.0812f, -571.9724f, 79.3586f;
				case 13:
					return 835.4178f, -637.4328f, 72.1319f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_634(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 127.0514f;
				case 1:
					return 23.0514f;
				case 2:
					return 113.0514f;
				case 3:
					return 33.0514f;
				case 4:
					return 1.9035f;
				case 5:
					return -18.0965f;
				case 6:
					return -6.0965f;
				case 7:
					return 339.9035f;
				case 8:
					return 7.9035f;
				case 9:
					return 57.9035f;
				case 10:
					return 292.3187f;
				case 11:
					return 290.3187f;
				case 12:
					return 282.8064f;
				case 13:
					return -110.2839f;
				case 14:
					return 197.2242f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 143.949f;
				case 1:
					return 197.949f;
				case 2:
					return 143.949f;
				case 3:
					return 205.949f;
				case 4:
					return 148.8011f;
				case 5:
					return 200.8011f;
				case 6:
					return 190.8011f;
				case 7:
					return 148.8012f;
				case 8:
					return 204.8012f;
				case 9:
					return 232.8012f;
				case 10:
					return 292.3187f;
				case 11:
					return 290.3187f;
				case 12:
					return 282.8064f;
				case 13:
					return 41.7161f;
				case 14:
					return 331.2242f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 263.0514f;
				case 1:
					return -18.9486f;
				case 2:
					return 273.0514f;
				case 3:
					return 329.0514f;
				case 4:
					return -98.0965f;
				case 5:
					return -40.0965f;
				case 6:
					return -20.0965f;
				case 7:
					return 291.9035f;
				case 8:
					return 327.9035f;
				case 9:
					return 337.9035f;
				case 10:
					return 196.3187f;
				case 11:
					return 192.3187f;
				case 12:
					return 184.8064f;
				case 13:
					return 69.7161f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 257.949f;
				case 1:
					return 179.949f;
				case 2:
					return 271.949f;
				case 3:
					return 191.949f;
				case 4:
					return 240.8011f;
				case 5:
					return 198.8011f;
				case 6:
					return 182.8011f;
				case 7:
					return 236.8012f;
				case 8:
					return 192.8012f;
				case 9:
					return 180.8012f;
				case 10:
					return -41.6813f;
				case 11:
					return -27.6813f;
				case 12:
					return 70.8064f;
				case 13:
					return 99.7161f;
			}
			break;
	}
	return 0f;
}

