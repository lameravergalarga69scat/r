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
	struct<39> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, 0, 5, 0, 0 } ;
	var uLocal_313 = 0;
	bool bLocal_314 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_314 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_314, 961, 0);
		if (bLocal_314)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (iLocal_15.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
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

bool func_3(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (iLocal_15.f_95 <= 9 && iLocal_15.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_205(&iLocal_15))
			{
				__LIB_0__::func_380(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		__LIB_0__::func_380(&Global_1393447, 2);
		return false;
	}
	if (iLocal_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (iLocal_15.f_95 < 10 && iLocal_15.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_131())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!__LIB_0__::func_86(iLocal_15.f_209))
			{
				if (iLocal_15.f_20 > 207f)
				{
					if (iLocal_15.f_223 == 0)
					{
						iLocal_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (iLocal_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					iLocal_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_696())
		{
			return true;
		}
		if (func_72(&uVar5))
		{
			fVar4 = __LIB_2__::func_323();
			iVar3 = 0;
			while (iVar3 < iLocal_15.f_215)
			{
				if (iLocal_15.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(iLocal_15[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
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
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
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
	iVar1 = func_97(iVar0);
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
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(iLocal_15[iVar0], 0, 0))
		{
			iVar1 = iVar0;
			func_125(&Local_274, iVar0);
			func_126(iVar0);
			switch (iVar0)
			{
				case 0:
					break;
				case 1:
					break;
				default:
					__LIB_2__::func_429(&iLocal_15, iVar1, 0);
					__LIB_2__::func_723(&iLocal_15, iVar1, 0);
					break;
			}
			if (__LIB_2__::func_486(iVar0))
			{
				__LIB_1__::func_571(iLocal_15[iVar0], iLocal_15.f_40[iVar0], 0, -1, 1);
			}
			else
			{
				if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 0))
				{
					__LIB_1__::func_473(iLocal_15.f_40[iVar0], joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), -1, 0, 0, -1082130432 /* Float: -1f */);
				}
				if (__LIB_0__::func_58(iVar0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], true, 0, true);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 98, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 47, true);
			__LIB_2__::func_150(&iLocal_15, iVar0, -1, -1);
			func_134(&iLocal_15, iVar0);
		}
		iVar0++;
	}
	return true;
}

bool func_23()
{
	if (func_137())
	{
		__LIB_2__::func_697();
		func_139();
		__LIB_2__::func_489(&Local_274, 3);
	}
	switch (Local_274.f_3)
	{
		case 0:
			if (__LIB_2__::func_531())
			{
				if (func_142())
				{
					__LIB_2__::func_224(iLocal_15.f_151, 1);
					__LIB_2__::func_489(&Local_274, 3);
				}
			}
			else if (func_144())
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
				if (func_147())
				{
					__LIB_2__::func_697();
					__LIB_2__::func_442(&iLocal_15, 1);
					__LIB_2__::func_500(&iLocal_15, 1);
					func_148();
					__LIB_2__::func_489(&Local_274, 1);
				}
			}
			break;
		case 1:
			__LIB_2__::func_697();
			__LIB_2__::func_436(&iLocal_15, 0);
			if (func_149())
			{
				__LIB_2__::func_489(&Local_274, 2);
			}
			break;
		case 2:
			func_150();
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
	if (Local_274.f_4 > 0)
	{
		func_163();
		func_164();
	}
	Local_274.f_36 = __LIB_2__::func_207(&iLocal_15);
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		__LIB_2__::func_208(&iLocal_15, iVar0, iLocal_15.f_40[iVar0]);
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			__LIB_1__::func_283(&(Local_274.f_7[0 /*3*/]), 0);
			__LIB_2__::func_554(&iLocal_15, 1, 0, -1);
			__LIB_17__::func_781(&iLocal_15, 1, 0, -1);
			__LIB_2__::func_151(&Local_274, 1);
			break;
		case 1:
			if (func_170())
			{
				__LIB_2__::func_151(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_556(&iLocal_15, &(Local_274.f_34), &(iLocal_15.f_241), "COMBAT_FLEE", 1092616192 /* Float: 10f */))
			{
				__LIB_2__::func_151(&Local_274, 3);
			}
			break;
		case 3:
			func_172();
			__LIB_2__::func_151(&Local_274, 4);
			break;
		case 4:
			return true;
	}
	return false;
}

void func_49()
{
	func_172();
}

bool func_72(var uParam0)
{
	if (iLocal_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (iLocal_15.f_21 < (__LIB_2__::func_323() - 10f))
	{
		*uParam0 = __LIB_2__::func_323();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (iLocal_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (iLocal_15.f_151)
	{
		case 29:
		case 30:
			if (iLocal_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!__LIB_2__::func_4(&iLocal_15, 512) && !__LIB_2__::func_4(&iLocal_15, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_83()
{
	switch (iLocal_15.f_221)
	{
		case 0:
			Local_274 = 0;
			break;
		default:
			Local_274 = 0;
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(iLocal_15.f_151, 0, iLocal_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_291(iLocal_15.f_151, 1, iLocal_15.f_221), true))
	{
		__LIB_2__::func_277(&Local_274, 1);
	}
	iLocal_15.f_215 = 5;
	iLocal_15.f_217 = 0;
	iLocal_15.f_218 = 0;
	iLocal_15.f_216 = 5;
	iLocal_15.f_181 = 5;
	__LIB_2__::func_147(&iLocal_15, 131072);
	__LIB_2__::func_570();
	func_242();
	__LIB_2__::func_41(&(iLocal_15.f_182), 65, 0f, 2.001f, 2.001f, 2.5f, 32768);
	return true;
}

bool func_95()
{
	int iVar0;
	switch (Local_274.f_2)
	{
		case 0:
			__LIB_2__::func_187();
			func_254(&iLocal_15);
			Local_274.f_2 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!func_256(&iLocal_15))
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
	return __LIB_2__::func_17(&iLocal_15, iParam0);
}

Vector3 func_108(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_260(&Local_274, iVar0) };
	return vVar1;
}

var func_109(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_260(&Local_274, iVar0) };
	return Var1.f_3;
}

Vector3 func_116(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = iParam0;
	vVar1 = { func_263(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	Var1 = { func_263(&Local_274, iVar0) };
	return Var1.f_3;
}

void func_125(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_264(iParam0, iParam1);
	__LIB_2__::func_133(iLocal_15[iParam1], sVar0, 0);
}

void func_126(int iParam0)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_15[iParam0], true, true);
	__LIB_2__::func_530(&iLocal_15, iLocal_15[iParam0], func_266(iParam0), 1);
}

void func_134(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*iParam0)[iParam1], 0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
		case 1:
			PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 0);
			break;
		default:
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 0);
			PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
			break;
	}
}

bool func_137()
{
	if (__LIB_2__::func_275(&Local_274, 16))
	{
		if (__LIB_2__::func_538(&iLocal_15, &(iLocal_15.f_152), &(iLocal_15.f_180), &(Local_274.f_35), 0, 4, 1))
		{
			func_272(0);
			return true;
		}
	}
	else if (__LIB_2__::func_538(&iLocal_15, &(iLocal_15.f_152), &(iLocal_15.f_180), &(Local_274.f_35), 0, 1, 1))
	{
		func_272(0);
		return true;
	}
	if (__LIB_2__::func_275(&Local_274, 2))
	{
		func_272(1);
		return true;
	}
	return false;
}

void func_139()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!bVar2)
	{
		if (__LIB_2__::func_275(&Local_274, 8))
		{
			bVar2 = true;
		}
		else if (__LIB_2__::func_1(iLocal_15[0], 0, 1))
		{
			func_274(&Local_274, iLocal_15[0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
			bVar2 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(iLocal_15[iVar0], 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_429(&iLocal_15, iVar0, 1);
			__LIB_2__::func_723(&iLocal_15, iVar0, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 67108864, 0);
			__LIB_1__::func_474(iLocal_15[iVar0], &iVar1, 0.1f, 0.3f, 1, 1);
			__LIB_2__::func_189(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			if (!bVar2)
			{
				func_274(&Local_274, iLocal_15[iVar0], Global_35, "OPENS_FIRE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	__LIB_2__::func_277(&Local_274, 16);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (Local_274.f_3 <= 0)
	{
		__LIB_2__::func_224(iLocal_15.f_151, 1);
	}
}

bool func_142()
{
	func_139();
	__LIB_2__::func_277(&Local_274, 4);
	return true;
}

bool func_144()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_23[1], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_23[0], 1, 0))
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

bool func_147()
{
	if (!__LIB_2__::func_47(&(iLocal_15.f_182), 64))
	{
		return false;
	}
	if (__LIB_2__::func_157(Local_274.f_23[2], Global_36))
	{
		return true;
	}
	return false;
}

void func_148()
{
	__LIB_2__::func_104(&(iLocal_15.f_152), 1);
	__LIB_2__::func_105(&(iLocal_15.f_152), 1);
	__LIB_2__::func_50(&(iLocal_15.f_152), 1);
	__LIB_2__::func_51(&(iLocal_15.f_152), 1);
	__LIB_2__::func_111(&(iLocal_15.f_152), 1);
	__LIB_2__::func_52(&(iLocal_15.f_152), 1);
	__LIB_2__::func_180(&(iLocal_15.f_152), 1);
}

bool func_149()
{
	int iVar0;
	char[] cVar1[8];
	int iVar9;
	switch (Local_274.f_5)
	{
		case 0:
			__LIB_2__::func_158(&Local_274, 1);
			break;
		case 1:
			if (func_294())
			{
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				func_295(&iLocal_15, &Local_274, &iVar0, &cVar1, &iVar9);
				func_274(&Local_274, iLocal_15[iVar0], Global_35, &cVar1, -1073741824 /* Float: -2f */, 1, -500314840, iVar9);
				__LIB_2__::func_158(&Local_274, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_274.f_7[1 /*3*/]), 1.5f))
			{
				__LIB_2__::func_189(&iLocal_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
				func_296();
				func_297();
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 3);
			}
			break;
		case 3:
			func_298();
			if ((__LIB_2__::func_227(0f, 1, iLocal_15[1], 1) && __LIB_2__::func_227(0f, 1, iLocal_15[0], 1)) && __LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_711(&iLocal_15);
				func_301(&iLocal_15, &Local_274, &iVar0, &cVar1, &iVar9);
				func_274(&Local_274, iLocal_15[1], Global_35, "GANG_TAUNT_GEN", -1073741824 /* Float: -2f */, 1, -500314840, 2);
				__LIB_2__::func_277(&Local_274, 8);
				__LIB_1__::func_148(&(Local_274.f_7[1 /*3*/]));
				__LIB_2__::func_158(&Local_274, 7);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_150()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(iLocal_15[iVar0], 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_189(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
			TASK::TASK_COMBAT_PED(iLocal_15[iVar0], Global_35, 0, 0);
		}
		iVar0++;
	}
}

void func_163()
{
	switch (Local_274.f_38)
	{
		case 0:
			func_318();
			break;
		case 1:
			Local_274.f_36 = __LIB_2__::func_207(&iLocal_15);
			break;
	}
	Local_274.f_38++;
	Local_274.f_38 = (Local_274.f_38 % 2);
}

int func_164()
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	if (__LIB_2__::func_275(&Local_274, 32))
	{
		func_319();
		return 0;
	}
	if (!__LIB_1__::func_285(&(Local_274.f_7[0 /*3*/]), 4f))
	{
		return 0;
	}
	if (__LIB_2__::func_157(Local_274.f_23[3], Global_36))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(iLocal_15[iVar0], 0, 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 98, false);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_15[iVar0], 2);
			PED::SET_PED_COMBAT_RANGE(iLocal_15[iVar0], 1);
			switch (iVar0)
			{
				case 0:
					fVar2 = 0f;
					break;
				case 1:
					fVar2 = 0.5f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 0))
			{
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_15.f_40[iVar0], -1, -1, 3f, 1, 0, 0);
			}
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 3f, -1, 72f, 1, 1, 0, 0, 1);
			__LIB_1__::func_474(iLocal_15[iVar0], &iVar1, fVar2, 0, 1, 1);
			if (!bVar3)
			{
				if (ENTITY::GET_ENTITY_SPEED(Global_35) > 6f)
				{
					func_274(&Local_274, iLocal_15[iVar0], Global_35, "CALLOUT_GET_FLEEING_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 0);
					bVar3 = true;
				}
				else
				{
					bVar3 = true;
				}
			}
		}
		iVar0++;
	}
	__LIB_2__::func_277(&Local_274, 32);
	return 1;
}

bool func_170()
{
	char[] cVar0[8];
	var uVar8;
	bool bVar9;
	int iVar10;
	if (!__LIB_1__::func_285(&(Local_274.f_7[0 /*3*/]), 7f) && !__LIB_2__::func_275(&Local_274, 32))
	{
		return false;
	}
	if (!__LIB_2__::func_227(-3f, 1, 0, 0))
	{
		return false;
	}
	func_322(&iLocal_15, &Local_274, &cVar0, &uVar8);
	iVar10 = 2;
	while (iVar10 <= 4)
	{
		if (__LIB_2__::func_1(iLocal_15[iVar10], 0, 0))
		{
			__LIB_1__::func_733(iLocal_15[iVar10]);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_15[iVar10], 2);
			PED::SET_PED_COMBAT_RANGE(iLocal_15[iVar10], 0);
			if (!bVar9)
			{
				func_274(&Local_274, iLocal_15[iVar10], Global_35, &cVar0, 100f, 1, 1744022339, 0);
				bVar9 = true;
			}
		}
		iVar10++;
	}
	return true;
}

void func_172()
{
	if (__LIB_2__::func_1(iLocal_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_15.f_56, true, __LIB_2__::func_160(iLocal_15.f_181));
	}
}

void func_242()
{
	iLocal_15.f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iLocal_15.f_209, 0f, 0f, 0f, 60f, 60f, 40f, "volAvoidance");
	switch (Local_274)
	{
		case 0:
			func_372(&iLocal_15, &Local_274);
			break;
	}
}

void func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_17(iParam0, iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_17(iParam0, iVar1);
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
	switch (iParam0)
	{
		case 0:
			return 2116375554;
		case 1:
			return 1776102258;
		case 2:
			return -538504875;
		case 3:
			return -709559055;
		case 4:
			return -1018603494;
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
						return func_383(0, 2);
					case 1:
						return func_383(0, 5);
					case 2:
						return func_383(0, 8);
					case 3:
						return func_383(0, 11);
					case 4:
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
						return func_383(1, 2);
					case 1:
						return func_383(1, 5);
					case 2:
						return func_383(1, 8);
					case 3:
						return func_383(1, 11);
					case 4:
						return func_383(1, 14);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_263(int iParam0, int iParam1)
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
						return func_383(0, 0);
					case 1:
						return func_383(0, 3);
					case 2:
						return func_383(0, 6);
					case 3:
						return func_383(0, 9);
					case 4:
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
						return func_383(1, 0);
					case 1:
						return func_383(1, 3);
					case 2:
						return func_383(1, 6);
					case 3:
						return func_383(1, 9);
					case 4:
						return func_383(1, 12);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

char* func_264(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_389(iParam0, iParam1);
	return func_390(iVar0);
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GROUP_REPEATER");
		case 1:
			return joaat("GROUP_REPEATER");
		case 2:
			return joaat("GROUP_REVOLVER");
		case 3:
			return joaat("GROUP_REVOLVER");
		case 4:
			return joaat("GROUP_REVOLVER");
		default:
			break;
	}
	return joaat("GROUP_REPEATER");
}

void func_272(int iParam0)
{
	Local_274.f_6 = iParam0;
}

int func_274(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		iParam0->f_39 = iParam1;
	}
	return 0;
}

bool func_294()
{
	vector3 vVar17;
	vVar17 = { __LIB_2__::func_114(Global_35, 2f) };
	return true;
}

void func_295(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	*iParam2 = 0;
	if (__LIB_2__::func_155(5, 1) || __LIB_11__::func_157(5) > 1)
	{
		StringCopy(sParam3, "ARRIVAL_COMBAT_TRAP_MALE", 64);
		*iParam4 = 2;
	}
	else
	{
		StringCopy(sParam3, "ARRIVAL_COMBAT_RAID_MALE", 64);
		*iParam4 = 1;
	}
}

void func_296()
{
	int iVar0;
	vector3 vVar1;
	vVar1 = { func_414(&Local_274, 0) };
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[0], false, 0, false);
	__LIB_2__::func_429(&iLocal_15, 0, 1);
	__LIB_2__::func_723(&iLocal_15, 0, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
	__LIB_1__::func_474(iLocal_15[0], &iVar0, 0, 0, 1, 1);
	vVar1 = { func_414(&Local_274, 1) };
	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[1], false, 0, false);
	__LIB_2__::func_429(&iLocal_15, 1, 1);
	__LIB_2__::func_429(&iLocal_15, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
	__LIB_1__::func_474(iLocal_15[1], &iVar0, 0, 0, 1, 1);
	__LIB_2__::func_189(&iLocal_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
	__LIB_2__::func_189(&iLocal_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
	__LIB_2__::func_277(&Local_274, 16);
}

void func_297()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;
	iVar5 = 2;
	while (iVar5 <= 4)
	{
		__LIB_2__::func_429(&iLocal_15, iVar5, 1);
		__LIB_2__::func_723(&iLocal_15, iVar5, 1);
		vVar1 = { func_414(&Local_274, iVar5) };
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_15[iVar5], vVar1, 3f, 1, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
		__LIB_1__::func_474(iLocal_15[iVar5], &iVar0, 0, 0, 1, 1);
		iVar5++;
	}
}

void func_298()
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(iLocal_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_15.f_22[iVar0]))
			{
				if (__LIB_1__::func_472(iLocal_15[iVar0], 80f, 30f, iLocal_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_189(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_301(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	*iParam2 = 1;
	StringCopy(sParam3, "GANG_TAUNT_GEN", 64);
	*iParam4 = 1;
}

void func_318()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(iLocal_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_15.f_22[iVar0]))
			{
				if (__LIB_2__::func_167(iLocal_15[iVar0], 1))
				{
					__LIB_2__::func_189(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_319()
{
	if (!__LIB_2__::func_275(&Local_274, 64))
	{
		if (func_423(0))
		{
			if (__LIB_2__::func_1(iLocal_15[0], 0, 0))
			{
				TASK::TASK_COMBAT_PED(iLocal_15[0], Global_35, 0, 0);
			}
			__LIB_2__::func_277(&Local_274, 64);
		}
	}
	if (!__LIB_2__::func_275(&Local_274, 128))
	{
		if (func_423(1))
		{
			if (__LIB_2__::func_1(iLocal_15[1], 0, 0))
			{
				TASK::TASK_COMBAT_PED(iLocal_15[1], Global_35, 0, 0);
			}
			__LIB_2__::func_277(&Local_274, 128);
		}
	}
}

void func_322(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	var uVar0;
	__LIB_0__::func_11(iParam0, iParam1, uVar0, sParam2, *uParam3);
	StringCopy(sParam2, "TAUNT_GEN_LOCATION", 64);
	*uParam3 = 0;
}

void func_372(int iParam0, int iParam1)
{
	if (__LIB_2__::func_275(iParam1, 1))
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5204.431f, -2878.174f, -0.449376f, 0f, 0f, 25.70486f, 36.9272f, 50f, 62.74747f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], -5379.791f, -2789.541f, -44.46426f, 0f, 0f, -80.44685f, 190.6763f, 335.8115f, 240.5904f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], -5308.527f, -3060.64f, 8.75246f, 0f, 0f, -69.9966f, 227.4959f, 341.2541f, 107.3552f);
		iParam1->f_23[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volMainArea");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[3], -5268.049f, -2932.338f, 3.422212f, 0f, 0f, 32f, 15f, 29.04267f, 16f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[3], -5236.606f, -2903.367f, 5.742976f, 0f, 0f, 39.69689f, 87.08837f, 25f, 10.78486f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[3], -5257.652f, -2934.396f, 2.317132f, 0f, 0f, 57.00001f, 40f, 10f, 16f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5196.83f, -2877.492f, 6f, 0f, 0f, 23.74281f, 36.74741f, 91.84983f, 34f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5220.416f, -2891.986f, 6f, 0f, 0f, 32.84999f, 69.12782f, 65.11771f, 44f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5264.563f, -2923.627f, 6f, 0f, 0f, 34.28172f, 84.79986f, 55.29245f, 54f, "volSlowest");
	}
	else
	{
		iParam1->f_23[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5277.055f, -2935.595f, -0.449376f, 0f, 0f, 6.892398f, 27.61028f, 83.0022f, 62.74747f, "volTrigger");
		iParam1->f_23[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], -5214.194f, -2804.46f, -44.46426f, 0f, 0f, -90.76098f, 220.1892f, 335.8115f, 240.5904f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[0], -5176.354f, -3019.191f, 8.75246f, 0f, 0f, -69.9966f, 227.4959f, 341.2541f, 107.3552f);
		iParam1->f_23[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volMainArea");
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[3], -5278.532f, -2944.601f, 3.422212f, 0f, 0f, 5f, 15f, 42.26341f, 16f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[3], -5242.652f, -2908.386f, 5.742976f, 0f, 0f, 39.69689f, 87.08837f, 25f, 10.78486f);
		VOLUME::_0x39816F6F94F385AD(iParam1->f_23[3], -5265.094f, -2938.326f, 2.317132f, 0f, 0f, 57f, 40f, 10f, 16f);
		iParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5274.5f, -2937.532f, 5f, 0f, 0f, 4.466274f, 104.6756f, 61.34875f, 34f, "volSlow");
		iParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5286.888f, -2938.023f, 5f, 0f, 0f, 97.11297f, 43.67916f, 65.11771f, 44f, "volSlower");
		iParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5236.116f, -2904.236f, 5f, 0f, 0f, 34.28171f, 84.79986f, 55.29245f, 54f, "volSlowest");
	}
}

struct<4> func_383(int iParam0, int iParam1)
{
	return func_439(iParam0, iParam1);
}

int func_389(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 1;
		default:
			break;
	}
	return 1;
}

char* func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1022_G_M_M_UniBanditos_01_HISPANIC_04";
		case 1:
			return "1020_G_M_M_UniBanditos_01_HISPANIC_02";
		default:
			break;
	}
	return "";
}

struct<4> func_414(int iParam0, int iParam1)
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
						return func_383(0, 1);
					case 1:
						return func_383(0, 4);
					case 2:
						return func_383(0, 7);
					case 3:
						return func_383(0, 10);
					case 4:
						return func_383(0, 13);
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
						return func_383(1, 4);
					case 2:
						return func_383(1, 7);
					case 3:
						return func_383(1, 10);
					case 4:
						return func_383(1, 13);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

bool func_423(int iParam0)
{
	if (iLocal_15.f_9[iParam0] >= (72f + 2f))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_15[iParam0], Global_35, 17))
	{
		return false;
	}
	if (!__LIB_2__::func_1(iLocal_15.f_40[iParam0], 0, 0) || PED::IS_PED_ON_MOUNT(iLocal_15[iParam0]))
	{
		return true;
	}
	return false;
}

struct<4> func_439(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_525(iParam0, iParam1) };
	Var0.f_3 = func_526(iParam0, iParam1);
	return Var0;
}

Vector3 func_525(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -5256.905f, -2895.872f, 10.6087f;
				case 1:
					return -5254.418f, -2896.247f, 11.4563f;
				case 2:
					return -5267.541f, -2886.379f, 7.9202f;
				case 3:
					return -5246.385f, -2940.096f, 8.7129f;
				case 4:
					return -5247.894f, -2934.999f, 9.2195f;
				case 5:
					return -5247.9f, -2942.72f, 8.6119f;
				case 6:
					return -5301.028f, -2931.268f, 1.0255f;
				case 7:
					return -5279.496f, -2938.828f, 1.858f;
				case 8:
					return -5333.012f, -2946.117f, 0.9045f;
				case 9:
					return -5327.538f, -2940.478f, 0.976f;
				case 10:
					return -5285.959f, -2932.361f, 0.7429f;
				case 11:
					return -5327.548f, -2940.5f, 0.9762f;
				case 12:
					return -5285.825f, -2957.403f, -1.0795f;
				case 13:
					return -5266.648f, -2942.326f, 1.4801f;
				case 14:
					return -5285.987f, -2957.145f, -1.1138f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -5216.229f, -2911.641f, 8.7905f;
				case 1:
					return -5219.552f, -2911.387f, 9.0221f;
				case 2:
					return -5213.832f, -2926.387f, 8.3125f;
				case 3:
					return -5224.834f, -2869.121f, 13.3367f;
				case 4:
					return -5225.497f, -2870.865f, 13.3484f;
				case 5:
					return -5235.749f, -2857.376f, 11.409f;
				case 6:
					return -5212.883f, -2865.215f, 4.4201f;
				case 7:
					return -5209.656f, -2878.278f, 2.3452f;
				case 8:
					return -5213.196f, -2871.805f, 3.2903f;
				case 9:
					return -5195.931f, -2865.771f, 2.8848f;
				case 10:
					return -5211.805f, -2882.596f, 2.2075f;
				case 11:
					return -5195.938f, -2865.673f, 2.9025f;
				case 12:
					return -5164.219f, -2897.391f, 3.2176f;
				case 13:
					return -5202.468f, -2886.595f, 2.2582f;
				case 14:
					return -5164.244f, -2897.44f, 3.2222f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_526(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 255.0514f;
				case 1:
					return 255.0514f;
				case 2:
					return 358.3187f;
				case 3:
					return 7.0514f;
				case 4:
					return -2.9486f;
				case 5:
					return 170.3187f;
				case 6:
					return -84.0965f;
				case 7:
					return 307.9035f;
				case 8:
					return 100.3187f;
				case 9:
					return 317.9035f;
				case 10:
					return 331.9035f;
				case 11:
					return 318.3187f;
				case 12:
					return 299.9035f;
				case 13:
					return 359.9035f;
				case 14:
					return 288.3187f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 95.0514f;
				case 1:
					return 91.0514f;
				case 2:
					return 286.3187f;
				case 3:
					return 157.0514f;
				case 4:
					return -202.9486f;
				case 5:
					return 340.3187f;
				case 6:
					return -174.0965f;
				case 7:
					return 147.9035f;
				case 8:
					return 322.3187f;
				case 9:
					return 147.9035f;
				case 10:
					return 167.9035f;
				case 11:
					return 156.3187f;
				case 12:
					return 51.9035f;
				case 13:
					return 95.9035f;
				case 14:
					return 50.3187f;
			}
			break;
	}
	return 0f;
}

