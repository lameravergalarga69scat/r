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
	struct<201> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	bool bLocal_478 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_478 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_478, 961, 0);
		if (bLocal_478)
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
				vVar1 = { __LIB_2__::func_291(iLocal_15.f_151, 0, iLocal_15.f_221) };
				vVar1 = { __LIB_2__::func_291(iLocal_15.f_151, 1, iLocal_15.f_221) };
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
						iLocal_15.f_227 = __LIB_2__::func_284(iLocal_15.f_181, -1);
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
					iVar2 = __LIB_2__::func_673(iVar1);
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
	iVar6 = __LIB_2__::func_673(iVar0);
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
			if (func_127(iVar0))
			{
				__LIB_1__::func_571(iLocal_15[iVar0], iLocal_15.f_40[iVar0], 0, -1, 1);
			}
			else
			{
				if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 0))
				{
					__LIB_1__::func_473(iLocal_15.f_40[iVar0], joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), -1, 0, 0, -1082130432 /* Float: -1f */);
				}
				if (__LIB_4__::func_867(iVar0))
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
			if (__LIB_2__::func_157(Local_274.f_40[4], Global_36) || __LIB_2__::func_157(Local_274.f_40[5], Global_36))
			{
				__LIB_2__::func_277(&Local_274, 128);
			}
		}
	}
	if (!__LIB_2__::func_275(&Local_274, 2))
	{
		if (func_138())
		{
			__LIB_2__::func_697();
			__LIB_2__::func_691(&(Local_274.f_198), iLocal_15[1], 0, 50f);
			func_141();
			__LIB_2__::func_489(&Local_274, 3);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (func_143())
			{
				if (func_144())
				{
					__LIB_2__::func_224(iLocal_15.f_151, 1);
					__LIB_2__::func_489(&Local_274, 3);
				}
			}
			else if (func_146())
			{
				if (__LIB_0__::func_0())
				{
					__LIB_2__::func_147(&iLocal_15, 16);
					__LIB_2__::func_146(&iLocal_15, 13);
				}
			}
			else
			{
				__LIB_2__::func_436(&iLocal_15, 0);
				if (func_149())
				{
					__LIB_2__::func_697();
					Local_274.f_59 = __LIB_0__::func_94(iLocal_15[0], Global_36, 1);
					__LIB_2__::func_442(&iLocal_15, 1);
					__LIB_2__::func_500(&iLocal_15, 1);
					__LIB_2__::func_679();
					__LIB_2__::func_489(&Local_274, 1);
				}
			}
			break;
		case 1:
			__LIB_2__::func_697();
			__LIB_2__::func_517(&iLocal_15, Local_274.f_40[6], func_152(&Local_274), 1067450368 /* Float: 1.25f */, 1097859072 /* Float: 15f */, 3f, 0);
			if (func_154())
			{
				__LIB_2__::func_489(&Local_274, 2);
			}
			break;
		case 2:
			func_155();
			__LIB_2__::func_632(&iLocal_15, Local_274.f_40[6]);
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
	__LIB_2__::func_527(&(Local_274.f_78));
	__LIB_17__::func_792(&iLocal_15, &(Local_274.f_115), &(Local_274.f_115.f_43));
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		__LIB_2__::func_208(&iLocal_15, iVar0, iLocal_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_2__::func_691(&(Local_274.f_198), iLocal_15[1], 0, 50f);
			__LIB_1__::func_283(&(Local_274.f_9[0 /*3*/]), 0);
			__LIB_2__::func_554(&iLocal_15, 1, 0, -1);
			func_173(&iLocal_15, 1, 0, -1);
			Local_274.f_56 = __LIB_2__::func_207(&iLocal_15);
			__LIB_2__::func_151(&Local_274, 1);
			break;
		case 1:
			func_176();
			if (__LIB_2__::func_556(&iLocal_15, &(Local_274.f_54), &(iLocal_15.f_241), "COMBAT_FLEE", 1092616192 /* Float: 10f */))
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
	__LIB_2__::func_632(&iLocal_15, Local_274.f_40[6]);
	__LIB_2__::func_680();
}

bool func_83()
{
	float fVar0[3];
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	int iVar10;
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
	fVar4 = 999999.9f;
	iVar5 = 0;
	iVar6 = 0;
	while (iVar6 < fVar0)
	{
		vVar7 = { __LIB_2__::func_291(iLocal_15.f_151, iVar6, iLocal_15.f_221) };
		if (!__LIB_0__::func_86(vVar7))
		{
			fVar0[iVar6] = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar7, true);
			if (fVar0[iVar6] < fVar4)
			{
				iVar5 = iVar6;
				fVar4 = fVar0[iVar6];
			}
		}
		iVar6++;
	}
	switch (iVar5)
	{
		case 0:
			__LIB_2__::func_277(&Local_274, 1);
			break;
		case 1:
			break;
	}
	iLocal_15.f_215 = 4;
	iLocal_15.f_217 = 0;
	iLocal_15.f_218 = 0;
	iLocal_15.f_216 = 4;
	if (iLocal_15.f_151 == 40)
	{
		Local_274.f_65 = 1;
		iLocal_15.f_181 = -1;
	}
	else if (__LIB_0__::func_181())
	{
		Local_274.f_64 = 1;
		iLocal_15.f_181 = 4;
	}
	else
	{
		iLocal_15.f_181 = 0;
	}
	Local_274.f_78.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
	__LIB_2__::func_147(&iLocal_15, 131072);
	__LIB_2__::func_570();
	func_248();
	__LIB_2__::func_41(&(iLocal_15.f_182), 65, 0f, 1.75f, 1.75f, 1.75f, 32896);
	iVar10 = __LIB_0__::func_41(__LIB_0__::func_23());
	if (iVar10 >= 21 || iVar10 < 5)
	{
		__LIB_2__::func_277(&Local_274, 1024);
	}
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_2)
	{
		case 0:
			__LIB_2__::func_187();
			__LIB_17__::func_793(&iLocal_15);
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
			return iVar0;
	}
	return false;
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
	vVar1 = { func_270(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_270(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_271(iParam0, iParam1);
	__LIB_2__::func_133(iLocal_15[iParam1], sVar0, 0);
}

void func_126(int iParam0)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_15[iParam0], true, true);
	__LIB_2__::func_272(iLocal_15[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_2__::func_272(iLocal_15[iParam0], func_274(iParam0), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
}

bool func_127(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

bool func_138()
{
	if (__LIB_2__::func_275(&Local_274, 16384))
	{
		if (__LIB_17__::func_795(&iLocal_15, &(iLocal_15.f_152), &(iLocal_15.f_152.f_16), &(Local_274.f_55), 0, 3, 1))
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

void func_141()
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
			func_282(&iLocal_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
			PED::_0x78815FC52832B690(iLocal_15[iVar0], 1);
			switch (iVar0)
			{
				case 0:
					fVar3 = 0.1f;
					break;
				case 1:
					fVar3 = 0.3f;
					break;
				default:
					fVar3 = 0f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
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
			else if ((__LIB_2__::func_275(&Local_274, 64) && Local_274.f_77 == iLocal_15[iVar0]) && !__LIB_2__::func_227(0, 1, iLocal_15[iVar0], 1))
			{
			}
			else
			{
				__LIB_2__::func_504(iLocal_15[iVar0], 500);
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

bool func_143()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_40[1]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_40[1], Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_144()
{
	func_141();
	__LIB_2__::func_277(&Local_274, 4);
	return true;
}

bool func_146()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_40[1], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_40[0], 1, 0))
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
	if (!__LIB_2__::func_47(&(iLocal_15.f_182), 64))
	{
		return false;
	}
	if (__LIB_2__::func_157(Local_274.f_40[2], Global_36) || __LIB_2__::func_157(Local_274.f_40[2], __LIB_2__::func_114(Global_35, 0.5f)))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 7f || __LIB_2__::func_157(Local_274.f_40[3], Global_36))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_152(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_304(iParam0) };
	return vVar0;
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
			if (func_306())
			{
				__LIB_2__::func_277(&Local_274, 8192);
			}
		}
	}
	if (Local_274.f_5 <= 4)
	{
		__LIB_2__::func_436(&iLocal_15, __LIB_2__::func_676() < 12f);
	}
	iVar10 = -1;
	if (Local_274.f_5 > 2)
	{
		iVar10 = func_308(&(Local_274.f_115));
		if (iVar10 == -1)
		{
			if (__LIB_2__::func_227(0f, 1, Local_274.f_77, 1))
			{
				if (__LIB_1__::func_313(&(Local_274.f_9[5 /*3*/]), 3f))
				{
					func_310(&iLocal_15, &(Local_274.f_115));
					__LIB_17__::func_796(&(Local_274.f_115), 1, 0);
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
			__LIB_1__::func_283(&(Local_274.f_9[1 /*3*/]), 0);
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 0.01f))
			{
				func_310(&iLocal_15, &(Local_274.f_115));
				__LIB_17__::func_796(&(Local_274.f_115), 0, 1);
				__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
				func_313(&iLocal_15, &Local_274, &iVar0, &cVar1, &iVar9);
				func_314(&iLocal_15, 3f);
				func_284(&Local_274, iLocal_15[iVar0], Global_35, &cVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 0.01f) || __LIB_1__::func_472(iLocal_15[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_315();
				func_316();
				__LIB_1__::func_148(&(Local_274.f_9[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 3);
			}
			break;
		case 3:
			__LIB_2__::func_681();
			if (__LIB_2__::func_227(0f, 1, iLocal_15[1], 1) && __LIB_2__::func_227(0f, 1, iLocal_15[0], 1))
			{
				func_318(&iLocal_15, &Local_274, &iVar0, &cVar1, &iVar9);
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
			if (func_319())
			{
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_274.f_9[1 /*3*/]), 4.5f) || iVar10 == 1)
			{
				func_284(&Local_274, iLocal_15[1], Global_35, "TAUNT_GEN_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 2);
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
			TASK::TASK_COMBAT_PED(iLocal_15[iVar0], Global_35, 0, 0);
		}
		iVar0++;
	}
}

void func_173(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = (iParam0->f_216 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1(iParam0->f_40[iVar0], 0, 0))
			{
				if (!__LIB_2__::func_566(iParam0, iVar0))
				{
					func_282(iParam0, iVar0, 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 0))
			{
				if (__LIB_2__::func_566(iParam0, iVar0))
				{
					func_282(iParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_176()
{
	switch (Local_274.f_58)
	{
		case 0:
			__LIB_2__::func_682();
			break;
		case 1:
			Local_274.f_56 = __LIB_2__::func_207(&iLocal_15);
			break;
	}
	Local_274.f_58++;
	Local_274.f_58 = (Local_274.f_58 % 2);
}

void func_248()
{
	iLocal_15.f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iLocal_15.f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	switch (Local_274)
	{
		case 0:
			func_395(&iLocal_15, &Local_274);
			break;
		case 1:
			func_396(&iLocal_15, &Local_274);
			break;
	}
}

struct<4> func_267(int iParam0, int iParam1)
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
						return func_407(0, 8);
					case 1:
						return func_407(0, 9);
					case 2:
						return func_407(0, 10);
					case 3:
						return func_407(0, 11);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(1, 10);
					case 1:
						return func_407(1, 11);
					case 2:
						return func_407(1, 12);
					case 3:
						return func_407(1, 13);
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
						return func_407(2, 8);
					case 1:
						return func_407(2, 9);
					case 2:
						return func_407(2, 4);
					case 3:
						return func_407(2, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(3, 10);
					case 1:
						return func_407(3, 11);
					case 2:
						return func_407(3, 4);
					case 3:
						return func_407(3, 7);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_270(int iParam0, int iParam1)
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
						return func_407(0, 0);
					case 1:
						return func_407(0, 2);
					case 2:
						return func_407(0, 4);
					case 3:
						return func_407(0, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(1, 0);
					case 1:
						return func_407(1, 2);
					case 2:
						return func_407(1, 4);
					case 3:
						return func_407(1, 7);
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
						return func_407(2, 0);
					case 1:
						return func_407(2, 2);
					case 2:
						return func_407(2, 4);
					case 3:
						return func_407(2, 6);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(3, 0);
					case 1:
						return func_407(3, 2);
					case 2:
						return func_407(3, 4);
					case 3:
						return func_407(3, 7);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_271(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_413(iParam0, iParam1);
	return func_414(iVar0);
}

int func_274(int iParam0)
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
			return joaat("GROUP_REPEATER");
		default:
			break;
	}
	return joaat("GROUP_REPEATER");
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_84[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_84[iParam1], true);
		}
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_40[iParam1], true);
		func_426(iParam0, iParam1, 4);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_84[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_84[iParam1], false);
		}
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_40[iParam1], false);
		__LIB_2__::func_28(iParam0, iParam1, 4);
	}
}

int func_284(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		iParam0->f_77 = iParam1;
		__LIB_17__::func_796(&(iParam0->f_115), 0, 1);
		__LIB_1__::func_148(&(iParam0->f_9[5 /*3*/]));
	}
	return 0;
}

struct<4> func_304(int iParam0)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_407(0, 14);
			}
			else
			{
				return func_407(1, 16);
			}
			break;
	}
	return Var0;
}

bool func_306()
{
	if (__LIB_2__::func_157(Local_274.f_40[6], Global_36))
	{
		return true;
	}
	return false;
}

int func_308(var uParam0)
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
			iVar0 = func_446(&(iLocal_15[iVar1]), uParam0[iVar1 /*21*/], 50f, &(uParam0->f_43), &iVar5, 4f, 3, 0, 0, iVar4, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
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
							__LIB_2__::func_691(&(Local_274.f_198), iLocal_15[1], 0, 50f);
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

void func_310(int iParam0, var uParam1)
{
	char* sVar0[2];
	char* sVar3[2];
	sVar0[0] = __LIB_2__::func_460(8);
	sVar0[1] = __LIB_2__::func_460(10);
	if (__LIB_0__::func_181())
	{
		sVar3[0] = "";
		sVar3[1] = "ORR_V2_ILO_NEG";
	}
	else if (__LIB_2__::func_15(iParam0->f_181, 0))
	{
		sVar3[0] = "";
		sVar3[1] = "ORR_V1_ILO_NEG";
	}
	else
	{
		sVar3[0] = "";
		sVar3[1] = "ORR_V2_ILO_NEG";
	}
	__LIB_2__::func_586(&(uParam1->f_43[0 /*17*/]), sVar0[0], sVar3[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_586(&(uParam1->f_43[1 /*17*/]), sVar0[1], sVar3[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_2__::func_482(&(uParam1->f_43[0 /*17*/]), 1, 1);
}

void func_313(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			*iParam4 = 1;
			break;
	}
}

void func_314(int iParam0, float fParam1)
{
	__LIB_1__::func_283(&(iParam0->f_182.f_13), 0);
	iParam0->f_182.f_16 = fParam1;
}

void func_315()
{
	int iVar0;
	vector3 vVar1;
	vVar1 = { func_455(&Local_274, 0) };
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[0], false, 0, false);
	__LIB_2__::func_429(&iLocal_15, 0, 1);
	func_282(&iLocal_15, 0, 1);
	PED::_0x8ACC0506743A8A5C(iLocal_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2f, 20000, 5.5f, 1, 40000f);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 1);
	__LIB_1__::func_474(iLocal_15[0], &iVar0, 0, 0, 1, 1);
	vVar1 = { func_455(&Local_274, 1) };
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[1], false, 0, false);
	__LIB_2__::func_429(&iLocal_15, 1, 1);
	__LIB_2__::func_429(&iLocal_15, 1, 1);
	PED::_0x8ACC0506743A8A5C(iLocal_15[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2f, 20000, 5f, 1, 40000f);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 1);
	__LIB_1__::func_474(iLocal_15[1], &iVar0, 0, 0, 1, 1);
	__LIB_2__::func_189(&iLocal_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
	__LIB_2__::func_189(&iLocal_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
	Local_274.f_66 = func_456();
	if (Global_1935630.f_40 != 0)
	{
		Local_274.f_67 = 1;
	}
	__LIB_1__::func_283(&(Local_274.f_9[6 /*3*/]), 0);
	__LIB_2__::func_277(&Local_274, 16384);
}

void func_316()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;
	iVar5 = 2;
	while (iVar5 <= 3)
	{
		__LIB_2__::func_429(&iLocal_15, iVar5, 1);
		func_282(&iLocal_15, iVar5, 1);
		vVar1 = { func_455(&Local_274, iVar5) };
		PED::_0x8ACC0506743A8A5C(iLocal_15[iVar5], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 0.5f, 3f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
		__LIB_1__::func_474(iLocal_15[iVar5], &iVar0, 0, 0, 1, 1);
		iVar5++;
	}
}

void func_318(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_STOP_OR_WE_SHOOT", 64);
			*iParam4 = 2;
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

bool func_319()
{
	char[] cVar0[8];
	int iVar8;
	int iVar9;
	float fVar10;
	__LIB_2__::func_714(&(Local_274.f_198), 50f);
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
		if (func_459())
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
		__LIB_2__::func_527(&(Local_274.f_78));
		if (func_460())
		{
			__LIB_2__::func_277(&Local_274, 4096);
			return false;
		}
	}
	__LIB_2__::func_510(&iLocal_15);
	fVar10 = 1f;
	switch (Local_274.f_7)
	{
		case 0:
			func_462();
			__LIB_2__::func_280(&Local_274, 1);
			break;
		case 1:
			if (!func_464(&Local_274, 0))
			{
				func_465(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
				__LIB_2__::func_282(&iLocal_15, 0);
				func_284(&Local_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
				__LIB_1__::func_283(&(Local_274.f_9[7 /*3*/]), 0);
				__LIB_2__::func_280(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_458(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_2__::func_275(&Local_274, 65536) && __LIB_1__::func_285(&(Local_274.f_9[7 /*3*/]), 2f))
				{
					__LIB_2__::func_691(&(Local_274.f_198), iLocal_15[1], 1, 50f);
					PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
					__LIB_2__::func_277(&Local_274, 65536);
				}
				if (!func_464(&Local_274, 0))
				{
					func_467(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
					if (!__LIB_2__::func_275(&Local_274, 65536))
					{
						__LIB_2__::func_691(&(Local_274.f_198), iLocal_15[1], 1, 50f);
						PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
						__LIB_2__::func_277(&Local_274, 65536);
					}
					__LIB_1__::func_283(&(Local_274.f_9[9 /*3*/]), 0);
					__LIB_2__::func_280(&Local_274, 3);
				}
			}
			else
			{
				func_468();
				__LIB_2__::func_280(&Local_274, 6);
			}
			break;
		case 3:
			if (__LIB_2__::func_458(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				fVar10 = 8.5f;
				if (func_469(fVar10) && !func_464(&Local_274, 0))
				{
					func_470(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
					__LIB_1__::func_148(&(Local_274.f_9[9 /*3*/]));
					__LIB_2__::func_280(&Local_274, 4);
				}
			}
			else
			{
				func_468();
				__LIB_2__::func_280(&Local_274, 6);
			}
			break;
		case 4:
			if (__LIB_2__::func_458(&iLocal_15, 1, 1) || !PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				fVar10 = 7.5f;
				if (func_469(fVar10) && !func_464(&Local_274, 0))
				{
					__LIB_2__::func_691(&(Local_274.f_198), iLocal_15[1], 0, 50f);
					__LIB_2__::func_677(&iLocal_15, &Local_274, &iVar8, &cVar0, &iVar9);
					func_284(&Local_274, iLocal_15[iVar8], Global_35, &cVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar9);
					__LIB_2__::func_277(&Local_274, 64);
					__LIB_2__::func_280(&Local_274, 5);
				}
			}
			else
			{
				func_468();
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
			__LIB_2__::func_592(&(Local_274.f_115.f_43), 1, 1);
			if (__LIB_0__::func_86(Local_274.f_200))
			{
				Local_274.f_200 = { Global_36 };
				__LIB_0__::func_172(Local_274.f_40[6]);
				Local_274.f_200 = { Global_36 };
				Local_274.f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Local_274.f_200, 0f, 0f, 0f, 3f, 3f, 5f, "volRobArea");
			}
			if (func_474())
			{
				if (func_475(iLocal_15[1], &(Local_274.f_78), 0.2f, 1, 0, 2, 0, 0, 0, 5000, 1, 0))
				{
					PED::_0x4FD80C3DD84B817B(iLocal_15[1]);
					PED::_0x58F7DB5BD8FA2288(iLocal_15[1]);
					__LIB_2__::func_691(&(Local_274.f_198), iLocal_15[1], 0, 50f);
					if (Local_274.f_78.f_4)
					{
						__LIB_2__::func_282(&iLocal_15, 1);
						__LIB_2__::func_280(&Local_274, 7);
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
		case 7:
			if (__LIB_2__::func_227(0f, 1, iLocal_15[1], 1))
			{
				func_476();
				__LIB_2__::func_280(&Local_274, 8);
			}
			break;
		case 8:
			if (func_477())
			{
				__LIB_2__::func_280(&Local_274, 9);
			}
			break;
		case 9:
			if (func_478())
			{
				__LIB_2__::func_147(&iLocal_15, 16);
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_395(int iParam0, int iParam1)
{
	iParam0->f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
	VOLUME::_0x39816F6F94F385AD(iParam0->f_239, -472.3117f, -328.8468f, 75.0726f, 0f, 0f, -85.39629f, 39.46958f, 69.39269f, 48.05282f);
	VOLUME::_0x39816F6F94F385AD(iParam0->f_239, -522.3907f, -323.4702f, 75.0726f, 0f, 0f, 54.34013f, 39.46958f, 69.39269f, 48.05282f);
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-525.2192f, -319.7985f, 63.89073f, 0f, 0f, -10.18612f, 14f, 14f, 10.60939f, "volBridgeRobArea");
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-536.0466f, -322.8382f, 75.07261f, 0f, 0f, 79.34012f, 54.77785f, 69.39269f, 34.11169f, "volTrigger");
		iParam1->f_40[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-547.9333f, -320.5719f, 75.07261f, 0f, 0f, 79.34012f, 54.778f, 69.39269f, 34.11169f, "volTriggerSlow");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -614.3592f, -206.4135f, 115.7361f, 0f, 0f, -86.43658f, 220.5375f, 335.8115f, 240.5904f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -645.3174f, -314.7065f, 77.17728f, 0f, 0f, 147.4868f, 355.7617f, 90.74519f, 107.3552f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-508.5792f, -326.271f, 66.54327f, 0f, 0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-536.8395f, -321.0542f, 64.33386f, 0f, 0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-549.4008f, -317.8009f, 64.33386f, 0f, 0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlowest");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_40[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 155.1157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
	}
	else
	{
		iParam1->f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-515.6293f, -324.5672f, 61.78128f, 0f, 0f, 0f, 20f, 20f, 19.79306f, "volBridgeRobArea");
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-501.651f, -343.331f, 75.07261f, 0f, 0f, 79.3401f, 73.72193f, 69.39269f, 34.11169f, "volTrigger");
		iParam1->f_40[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-501.651f, -343.331f, 75.07261f, 0f, 0f, 79.3401f, 73.72193f, 69.39269f, 34.11169f, "volTriggerSlow");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -435.8815f, -453.0908f, 59.82618f, 0f, 0f, 4.6707f, 178.4207f, 242.0585f, 305.9797f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -383.7283f, -349.3771f, 90.93168f, 0f, 0f, -38.65809f, 296.4414f, 105.0418f, 107.3552f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-525.5081f, -321.8875f, 72.00636f, 0f, 0f, -108.602f, 52.86029f, 40.69379f, 40.43703f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-503.6722f, -328.9248f, 76.33801f, 0f, 0f, -108.6972f, 52.74099f, 38.03329f, 29.5835f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-489.2079f, -333.8198f, 75.95811f, 0f, 0f, -108.6972f, 50.74282f, 45.5983f, 36.02916f, "volSlowest");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 159.2157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_40[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
	}
}

void func_396(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-525.2192f, -319.7985f, 63.89073f, 0f, 0f, -10.18612f, 14f, 14f, 10.60939f, "volBridgeRobArea");
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-520.018f, -323.06f, 68.0339f, 0f, 0f, 75.25701f, 86.63735f, 50f, 61.25628f, "volTrigger");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -614.3592f, -206.4135f, 115.7361f, 0f, 0f, -86.43658f, 220.5375f, 335.8115f, 240.5904f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -645.3174f, -314.7065f, 77.17728f, 0f, 0f, 147.4868f, 355.7617f, 90.74519f, 107.3552f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-508.5792f, -326.271f, 66.54327f, 0f, 0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-536.8395f, -321.0542f, 64.33386f, 0f, 0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-549.4008f, -317.8009f, 64.33386f, 0f, 0f, -104.5226f, 78.46297f, 66.52126f, 43.34432f, "volSlowest");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_40[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 155.1157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
	}
	else
	{
		iParam1->f_40[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-515.6293f, -324.5672f, 61.78128f, 0f, 0f, 0f, 20f, 20f, 19.79306f, "volBridgeRobArea");
		iParam1->f_40[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-501.651f, -343.331f, 75.07261f, 0f, 0f, 79.3401f, 73.72193f, 69.39269f, 34.11169f, "volTrigger");
		iParam1->f_40[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -492.8926f, -467.4217f, 59.82618f, 0f, 0f, -12.3293f, 178.4207f, 242.0585f, 305.9797f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_40[0], -383.7283f, -349.3771f, 90.93168f, 0f, 0f, -38.65809f, 296.4414f, 105.0418f, 107.3552f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-525.5081f, -321.8875f, 72.00636f, 0f, 0f, -108.602f, 52.86029f, 40.69379f, 40.43703f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-503.6722f, -328.9248f, 76.33801f, 0f, 0f, -108.6972f, 52.74099f, 38.03329f, 29.5835f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-489.2079f, -333.8198f, 75.95811f, 0f, 0f, -108.6972f, 50.74282f, 45.5983f, 36.02916f, "volSlowest");
		iParam1->f_40[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1731.654f, 37.99594f, 159.2157f, 0f, 0f, 19.89062f, 5.17899f, 24.2928f, 10f, "volBridgeFront");
		iParam1->f_40[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1748.319f, 76.6726f, 155.1157f, 0f, 0f, 33.59163f, 5.17899f, 24.2928f, 10f, "volBridgeBack");
	}
}

struct<4> func_407(int iParam0, int iParam1)
{
	return func_503(iParam0, iParam1);
}

int func_413(int iParam0, int iParam1)
{
	if (iParam0->f_65)
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
	else if (iParam0->f_64)
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
				return 1;
			case 1:
				return 0;
			case 2:
				return 0;
			case 3:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

char* func_414(int iParam0)
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
			return "1066_G_M_M_UniCriminals_01_HISPANIC_03";
		case 5:
			return "1068_G_M_M_UniCriminals_01_HISPANIC_05";
		default:
			break;
	}
	return "";
}

void func_426(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_106[iParam1] = (iParam0->f_106[iParam1] - (iParam0->f_106[iParam1] && iParam2));
}

int func_446(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_585(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

struct<4> func_455(int iParam0, int iParam1)
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
						return func_407(0, 1);
					case 1:
						return func_407(0, 3);
					case 2:
						return func_407(0, 5);
					case 3:
						return func_407(0, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(1, 1);
					case 1:
						return func_407(1, 3);
					case 2:
						return func_407(1, 5);
					case 3:
						return func_407(1, 8);
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
						return func_407(2, 1);
					case 1:
						return func_407(2, 3);
					case 2:
						return func_407(2, 5);
					case 3:
						return func_407(2, 7);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_407(3, 1);
					case 1:
						return func_407(3, 3);
					case 2:
						return func_407(3, 5);
					case 3:
						return func_407(3, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

float func_456()
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_598(&Local_274, 1), true);
}

bool func_459()
{
	int iVar0;
	if (__LIB_2__::func_275(&Local_274, 8192))
	{
		if (!__LIB_2__::func_157(Local_274.f_40[6], Global_36))
		{
			return true;
		}
	}
	if (Local_274.f_66 >= 0f)
	{
		if (Local_274.f_66 + 3f) < func_456()
		{
			return true;
		}
		if (!Local_274.f_78.f_4)
		{
			if (__LIB_1__::func_285(&(Local_274.f_9[6 /*3*/]), 2f))
			{
				if (__LIB_2__::func_157(Local_274.f_40[7], Global_36))
				{
					return true;
				}
			}
		}
	}
	if (Local_274.f_78 <= 0)
	{
		if (__LIB_2__::func_458(&iLocal_15, 0, 0) || !Local_274.f_67)
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

bool func_460()
{
	if (__LIB_0__::func_94(Global_35, Local_274.f_200, 0) > 7f && __LIB_2__::func_625(&iLocal_15, 0, 3) < 15f)
	{
		if (__LIB_17__::func_797())
		{
			return true;
		}
	}
	return false;
}

void func_462()
{
	switch (iLocal_15.f_181)
	{
		case 0:
			Local_274.f_78.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			Local_274.f_78.f_21 = 1;
			Local_274.f_78.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
			Local_274.f_78.f_22 = 2;
			Local_274.f_78.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_78.f_23 = 1;
			Local_274.f_78.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_78.f_24 = 1;
			break;
		case 4:
			Local_274.f_78.f_16 = "ARRIVAL_SURRENDER_ROB_MALE";
			Local_274.f_78.f_21 = 3;
			Local_274.f_78.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_78.f_23 = 2;
			Local_274.f_78.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_78.f_24 = 1;
			break;
		default:
			Local_274.f_78.f_16 = "HANDS_UP";
			Local_274.f_78.f_21 = 2;
			Local_274.f_78.f_18 = "GANG_INTERACT_KNOCKOUT";
			Local_274.f_78.f_23 = 2;
			Local_274.f_78.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL";
			Local_274.f_78.f_24 = 1;
			break;
	}
}

bool func_464(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return !__LIB_2__::func_227(0f, 1, iParam1, 1);
	}
	return !__LIB_2__::func_227(0f, 1, iParam0->f_77, 1);
}

void func_465(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_TOLL", 64);
			*iParam4 = 2;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_TOLL", 64);
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "GANG_INTERACT_APPROACH_STICKUP", 64);
			*iParam4 = 2;
			break;
	}
}

void func_467(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "ORDER_DISMOUNT_HORSE", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "ORDER_DISMOUNT_HORSE", 64);
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "ORDER_DISMOUNT", 64);
			*iParam4 = 1;
			break;
	}
	if (!__LIB_2__::func_458(iParam0, 1, 1))
	{
		StringCopy(sParam3, "HANDS_UP", 64);
		*iParam4 = 0;
	}
}

void func_468()
{
	__LIB_2__::func_503(&iLocal_15, 0);
	__LIB_2__::func_691(&(Local_274.f_198), iLocal_15[1], 0, 50f);
}

int func_469(float fParam0)
{
	if (func_601())
	{
		return 0;
	}
	return __LIB_2__::func_689(&iLocal_15, Local_274.f_9[9 /*3*/], fParam0);
}

void func_470(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			StringCopy(sParam3, "FINAL_WARNING", 64);
			*iParam4 = 1;
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

bool func_474()
{
	if (Local_274.f_78 > 0)
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
	if (func_464(&Local_274, 0))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0f, 1, Global_35, 1))
	{
		return false;
	}
	return true;
}

bool func_475(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
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
					func_612(iParam6, 1, 0, -142743235, 0);
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

void func_476()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar9;
	int iVar10;
	char[] cVar11[8];
	int iVar19;
	vector3 vVar20;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!__LIB_2__::func_1(iLocal_15[iVar0], 0, 0))
		{
		}
		else
		{
			__LIB_2__::func_152(&iLocal_15, iVar0, 2);
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
			vVar5 = { func_617(&Local_274, iVar0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 0))
			{
				vVar20 = { ENTITY::GET_ENTITY_COORDS(iLocal_15.f_40[iVar0], true, false) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar20, 2f, -1, 8f, 1, 40000f);
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_15.f_40[iVar0], -1, -1, 2f, 1, 0, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 2.001f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 2f, -1, 6f, 1, 40000f);
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
			__LIB_2__::func_152(&iLocal_15, iVar0, 2);
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
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 0))
			{
				vVar20 = { ENTITY::GET_ENTITY_COORDS(iLocal_15.f_40[iVar0], true, false) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar20, 2f, -1, 8f, 1, 40000f);
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_15.f_40[iVar0], -1, -1, 2f, 1, 0, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(0, Global_35, 4, vVar2, 29568, -1082130432 /* Float: -1f */, -1, 0);
			}
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

bool func_477()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;
	iVar5 = 1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_0__::func_71(iLocal_15[iVar0]))
		{
			if (!__LIB_0__::func_163(iLocal_15[iVar0], 518218985))
			{
				vVar1 = { func_619(&Local_274, iVar0) };
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

bool func_478()
{
	int iVar0;
	vector3 vVar1;
	bool bVar5;
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		vVar1 = { func_619(&Local_274, iVar0) };
		if (__LIB_0__::func_94(iLocal_15[iVar0], vVar1, 1) < 6f)
		{
			bVar5 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar5)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			__LIB_3__::func_897(iLocal_15[iVar0], 36, 0, 1);
			iVar0++;
		}
	}
	return bVar5;
}

struct<4> func_503(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_634(iParam0, iParam1) };
	Var0.f_3 = func_635(iParam0, iParam1);
	return Var0;
}

int func_585(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_585(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

Vector3 func_598(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_455(iParam0, iParam1) };
	return vVar0;
}

bool func_601()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_341(&(Local_274.f_115[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_612(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_612(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

struct<4> func_617(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_407(0, 13);
			}
			else
			{
				return func_407(1, 15);
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_407(2, 11);
			}
			else
			{
				return func_407(3, 13);
			}
			break;
	}
	return Var0;
}

struct<4> func_619(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_407(0, 12);
			}
			else
			{
				return func_407(1, 14);
			}
			break;
		case 1:
			if (__LIB_2__::func_275(iParam0, 1))
			{
				return func_407(2, 10);
			}
			else
			{
				return func_407(3, 12);
			}
			break;
	}
	return Var0;
}

Vector3 func_634(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -530.6622f, -297.5206f, 58.0524f;
				case 1:
					return -532.6747f, -311.9528f, 57.8306f;
				case 2:
					return -527.9f, -290.9423f, 59.2349f;
				case 3:
					return -526.2383f, -309.6333f, 58.7295f;
				case 4:
					return -544.0656f, -332.7348f, 62.1749f;
				case 5:
					return -535.2577f, -327.0268f, 62.1874f;
				case 6:
					return -553.5075f, -322.5239f, 56.7326f;
				case 7:
					return -547.8364f, -317.1053f, 56.0315f;
				case 8:
					return -541.2362f, -292.335f, 52.8356f;
				case 9:
					return -543.8275f, -293.8264f, 52.4396f;
				case 10:
					return -548.0543f, -281.4533f, 52.2551f;
				case 11:
					return -546.2682f, -278.0835f, 52.2258f;
				case 12:
					return -480.9486f, -182.3736f, 43.4022f;
				case 13:
					return -539.5151f, -302.887f, 55.3601f;
				case 14:
					return -508.8643f, -317.6341f, 66.0357f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -497.282f, -314.521f, 69.7498f;
				case 1:
					return -495.2901f, -324.2032f, 70.7841f;
				case 2:
					return -494.6499f, -319.7533f, 71.4527f;
				case 3:
					return -496.7591f, -328.9705f, 69.9682f;
				case 4:
					return -469.961f, -343.1347f, 78.6468f;
				case 5:
					return -482.4592f, -334.437f, 75.0688f;
				case 6:
					return -559.6129f, -311.5081f, 53.7085f;
				case 7:
					return -477.37f, -351.0639f, 79.0589f;
				case 8:
					return -487.2604f, -341.4452f, 75.701f;
				case 9:
					return -561.2073f, -324.3603f, 56.4443f;
				case 10:
					return -483.1715f, -299.1094f, 70.5579f;
				case 11:
					return -480.9109f, -298.1267f, 70.5355f;
				case 12:
					return -457.5569f, -371.0655f, 84.2488f;
				case 13:
					return -456.8083f, -373.457f, 84.668f;
				case 14:
					return -338.9661f, -301.531f, 89.8958f;
				case 15:
					return -483.6948f, -321.2603f, 73.6897f;
				case 16:
					return -513.6682f, -316.6307f, 64.1251f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -530.6622f, -297.5206f, 58.0524f;
				case 1:
					return -532.6747f, -311.9528f, 57.8306f;
				case 2:
					return -527.9f, -290.9423f, 59.2349f;
				case 3:
					return -526.2383f, -309.6333f, 58.7295f;
				case 4:
					return -544.0656f, -332.7348f, 62.1749f;
				case 5:
					return -535.2577f, -327.0268f, 62.1874f;
				case 6:
					return -553.5075f, -322.5239f, 56.7326f;
				case 7:
					return -547.8364f, -317.1053f, 56.0315f;
				case 8:
					return -541.2362f, -292.335f, 52.8356f;
				case 9:
					return -543.8275f, -293.8264f, 52.4396f;
				case 10:
					return -516.831f, -252.3551f, 50.7886f;
				case 11:
					return -539.5151f, -302.887f, 55.3601f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -497.282f, -314.521f, 69.7498f;
				case 1:
					return -500.2108f, -322.7002f, 69.4216f;
				case 2:
					return -492.8802f, -313.5155f, 70.952f;
				case 3:
					return -496.7591f, -328.9705f, 69.9682f;
				case 4:
					return -469.961f, -343.1347f, 78.6468f;
				case 5:
					return -482.4592f, -334.437f, 75.0688f;
				case 6:
					return -559.6129f, -311.5081f, 53.7085f;
				case 7:
					return -477.37f, -351.0639f, 79.0589f;
				case 8:
					return -487.2604f, -341.4452f, 75.701f;
				case 9:
					return -561.2073f, -324.3603f, 56.4443f;
				case 10:
					return -483.1715f, -299.1094f, 70.5579f;
				case 11:
					return -480.9109f, -298.1267f, 70.5355f;
				case 12:
					return -454.3138f, -326.6817f, 78.0955f;
				case 13:
					return -483.6948f, -321.2603f, 73.6897f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_635(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 181.0514f;
				case 1:
					return 245.0514f;
				case 2:
					return 191.0514f;
				case 3:
					return 203.0514f;
				case 4:
					return 351.9035f;
				case 5:
					return -58.0965f;
				case 6:
					return 333.9035f;
				case 7:
					return 241.9035f;
				case 8:
					return 10.3187f;
				case 9:
					return 8.3187f;
				case 10:
					return 304.3187f;
				case 11:
					return 316.3187f;
				case 12:
					return 310.8064f;
				case 13:
					return 43.7161f;
				case 14:
					return -69.695f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 163.949f;
				case 1:
					return 91.949f;
				case 2:
					return 129.949f;
				case 3:
					return 83.949f;
				case 4:
					return 62.8011f;
				case 5:
					return 64.8011f;
				case 6:
					return -17.1989f;
				case 7:
					return 52.8012f;
				case 8:
					return 50.8012f;
				case 9:
					return -13.1988f;
				case 10:
					return -221.6813f;
				case 11:
					return -159.6813f;
				case 12:
					return -53.6813f;
				case 13:
					return -67.6813f;
				case 14:
					return 300.8064f;
				case 15:
					return -110.2839f;
				case 16:
					return 56.305f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 181.0514f;
				case 1:
					return 245.0514f;
				case 2:
					return 191.0514f;
				case 3:
					return 203.0514f;
				case 4:
					return 351.9035f;
				case 5:
					return -58.0965f;
				case 6:
					return 333.9035f;
				case 7:
					return 241.9035f;
				case 8:
					return 10.3187f;
				case 9:
					return 8.3187f;
				case 10:
					return 318.8064f;
				case 11:
					return 43.7161f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 163.949f;
				case 1:
					return 91.949f;
				case 2:
					return 129.949f;
				case 3:
					return 83.949f;
				case 4:
					return 62.8011f;
				case 5:
					return 64.8011f;
				case 6:
					return -17.1989f;
				case 7:
					return 52.8012f;
				case 8:
					return 50.8012f;
				case 9:
					return -13.1988f;
				case 10:
					return -221.6813f;
				case 11:
					return -159.6813f;
				case 12:
					return 274.8064f;
				case 13:
					return -110.2839f;
			}
			break;
	}
	return 0f;
}

