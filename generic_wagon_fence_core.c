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
	struct<204> Local_9 = { 0, 0, 4, 6, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0 } ;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Local_9 = 4;
		func_1(&Local_9);
	}
	while (true)
	{
		switch (Local_9)
		{
			case 0:
				if (func_2(Global_35))
				{
					func_3(&Local_9);
					if (func_4(&(Local_9.f_117)))
					{
						if (__LIB_3__::func_332(__LIB_7__::func_849(), 0) < 500f)
						{
							__LIB_1__::func_649(&Local_9, 1);
						}
					}
				}
				break;
			case 1:
				PED::_0xED9582B3DA8F02B4(4);
				if (PED::_0x5E420FF293EE5472())
				{
					func_8(&Local_9);
					func_9(&Local_9);
					__LIB_1__::func_649(&Local_9, 2);
				}
				break;
			case 2:
				if (func_10(&Local_9))
				{
					if (__LIB_0__::func_0(&Local_9))
					{
						__LIB_1__::func_649(&Local_9, 3);
					}
				}
				break;
			case 3:
				if (func_12())
				{
					__LIB_1__::func_649(&Local_9, 4);
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_9.f_170, true, 0))
				{
					__LIB_1__::func_538(0);
				}
				break;
			case 4:
				func_1(&Local_9);
				break;
		}
		if (func_14(&Local_9))
		{
			func_1(&Local_9);
		}
		func_15(&Local_9);
		BUILTIN::WAIT(0);
	}
}

void func_1(int iParam0)
{
	__LIB_9__::func_319(0);
	__LIB_0__::func_11(iParam0);
	HUD::_TEXT_DATABASE_DELETE("RHMR0");
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_3__::func_319(iParam0->f_116);
	func_19(iParam0);
	func_9(iParam0);
	__LIB_4__::func_389(-1304772442, 1, 1);
	__LIB_4__::func_389(-1924401463, 1, 1);
	__LIB_3__::func_525(&(iParam0->f_167), &(iParam0->f_199));
	__LIB_3__::func_525(&(iParam0->f_169), &(iParam0->f_200));
	__LIB_9__::func_320(16);
	__LIB_9__::func_320(32);
	__LIB_9__::func_320(8);
	__LIB_9__::func_320(4);
	if (INTERIOR::IS_VALID_INTERIOR(iParam0->f_201))
	{
		INTERIOR::UNPIN_INTERIOR(iParam0->f_201);
	}
	if (!__LIB_3__::func_339(iParam0->f_109))
	{
		__LIB_4__::func_932(iParam0->f_109, 1);
	}
	__LIB_0__::func_172(iParam0->f_168);
	__LIB_0__::func_172(iParam0->f_170);
	iParam0->f_120 = 0;
	iParam0->f_119 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		if (PED::_GET_SEAT_PED_IS_USING(iParam0) == -1)
		{
			return true;
		}
	}
	return false;
}

void func_3(int iParam0)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_11(iParam0);
	func_27(iParam0);
	iParam0->f_118 = func_4(&(iParam0->f_117));
	if (!iParam0->f_118)
	{
		return;
	}
	func_28(iParam0);
}

bool func_4(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (__LIB_7__::func_850(iVar0))
	{
		__LIB_9__::func_322(uParam0, __LIB_9__::func_321(iVar0));
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(*uParam0, "wagonFenceValue") && DECORATOR::DECOR_GET_INT(*uParam0, "wagonFenceValue") != 0)
	{
		return true;
	}
	return false;
}

void func_8(int iParam0)
{
	func_33(iParam0);
	HUD::_TEXT_DATABASE_REQUEST("RHMR0");
	STREAMING::REQUEST_MODEL(joaat("A_M_M_HTLROUGHTRAVELLERS_01"), false);
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_167))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar2 = ENTITY::_0x886171A12F400B89(iParam0->f_167, iVar0, 2);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
		{
			iVar4 = MISC::_GET_VEHICLE_FROM_INDEXED_ITEM(iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				func_34(&iVar4, 0);
			}
		}
		iVar1++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

bool func_10(int iParam0)
{
	if (!func_35(iParam0))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("RHMR0"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_HTLROUGHTRAVELLERS_01")))
	{
		return false;
	}
	return true;
}

bool func_12()
{
	int iVar0;
	int iVar1;
	var uVar2;
	func_36();
	switch (Local_9.f_1)
	{
		case 0:
			__LIB_4__::func_389(-1304772442, 1, 1);
			__LIB_4__::func_389(-1924401463, 1, 1);
			__LIB_4__::func_722(&Local_9, 1);
			break;
		case 1:
			if (func_38(&Local_9))
			{
				if (func_39(&Local_9))
				{
					__LIB_4__::func_932(Local_9.f_109, 0);
					func_40(1);
					func_41(&Local_9);
					func_42(&(Local_9.f_2));
					__LIB_4__::func_722(&Local_9, 2);
				}
			}
			break;
		case 2:
			func_43(&(Local_9.f_116), Local_9.f_2);
			if (func_44(&Local_9))
			{
				func_45(&(Local_9.f_116), Local_9.f_4, &(Local_9.f_3));
				__LIB_4__::func_722(&Local_9, 3);
			}
			break;
		case 3:
			switch (Local_9.f_2)
			{
				case 4:
					func_46(Local_9.f_131, Local_9.f_132, 0f, 2, 1073741824 /* Float: 2f */);
					TASK::TASK_STAND_STILL(Local_9.f_131, -1);
					__LIB_4__::func_722(&Local_9, 4);
					break;
				case 5:
					if (__LIB_3__::func_332(Local_9.f_122, 1) < 65f)
					{
						func_47();
						__LIB_4__::func_722(&Local_9, 4);
					}
					break;
				default:
					__LIB_4__::func_722(&Local_9, 4);
					break;
			}
			break;
		case 4:
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_9.f_170, true, 0) && func_48(&(Local_9.f_116), Local_9.f_2)) && PED::_0xA0BC8FAED8CFEB3C(Local_9.f_131))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_9.f_131, false, true);
				PED::SET_PED_CAN_RAGDOLL(Local_9.f_131, false);
				__LIB_0__::func_202(Local_9.f_131, 1);
				ENTITY::_0xC64E597783BE9A1D(Local_9.f_131, true);
				__LIB_9__::func_319(32);
				ANIMSCENE::START_ANIM_SCENE(Local_9.f_116);
				func_50();
				__LIB_4__::func_722(&Local_9, 5);
			}
			break;
		case 5:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_9.f_131, &(Local_9.f_142));
			func_51(&Local_9);
			func_52(&Local_9);
			if (!ENTITY::IS_ENTITY_DEAD(Local_9.f_117) && __LIB_0__::func_94(Local_9.f_117, 1411.256f, 266.9222f, 88.60828f, 1) < 12f)
			{
				__LIB_5__::func_107(&uLocal_216);
				__LIB_4__::func_722(&Local_9, 7);
			}
			break;
		case 7:
			if (__LIB_0__::func_94(Local_9.f_117, Local_9.f_128, 1) < 6f)
			{
				__LIB_11__::func_425(Global_35, Local_9.f_128, &uLocal_216, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 12f, 1, 0, 1, 1, 1);
			}
			if (func_55() && __LIB_0__::func_94(Local_9.f_117, Local_9.f_128, 1) < func_56(Local_9.f_121))
			{
				__LIB_2__::func_608(&uLocal_216);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				if (func_58())
				{
					__LIB_3__::func_319(Local_9.f_116);
					func_59(0);
					__LIB_4__::func_722(&Local_9, 8);
				}
			}
			break;
		case 11:
			if (!ENTITY::IS_ENTITY_DEAD(Local_9.f_117) && __LIB_0__::func_94(Local_9.f_117, Local_9.f_125, 1) < 12f)
			{
				__LIB_4__::func_932(Local_9.f_109, 0);
				__LIB_4__::func_722(&Local_9, 12);
			}
			break;
		case 12:
			if (func_38(&Local_9))
			{
				if (func_39(&Local_9))
				{
					func_40(0);
					func_41(&Local_9);
					Local_9.f_3 = func_60(Local_9.f_4);
					__LIB_4__::func_722(&Local_9, 13);
				}
			}
			break;
		case 13:
			func_43(&(Local_9.f_116), Local_9.f_3);
			if (func_44(&Local_9))
			{
				__LIB_5__::func_107(&uLocal_216);
				__LIB_4__::func_722(&Local_9, 14);
			}
			break;
		case 14:
			if (func_55() && __LIB_0__::func_94(Local_9.f_117, Local_9.f_128, 1) < func_56(Local_9.f_121))
			{
				__LIB_2__::func_608(&uLocal_216);
				func_61();
				__LIB_3__::func_319(Local_9.f_116);
				func_59(0);
				__LIB_4__::func_722(&Local_9, 8);
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -828834893, true) == 8 && !PED::IS_PED_IN_VEHICLE(Global_35, Local_9.f_117, false))
			{
				func_43(&(Local_9.f_116), Local_9.f_3);
				if (func_44(&Local_9))
				{
					__LIB_4__::func_722(&Local_9, 9);
				}
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_9.f_116))
			{
				__LIB_3__::func_124(-308659358, 1);
				__LIB_3__::func_124(-66987983, 1);
				__LIB_4__::func_213(-308659358, -0.5f, 1);
				__LIB_4__::func_213(-66987983, 0.5f, 1);
			}
			if (__LIB_0__::func_163(Global_35, -828834893) && !CAM::DOES_CAM_EXIST(Local_9.f_203))
			{
				func_65(&(Local_9.f_203), 1411.1f, 280f, 90.8f, -2f, -1f, 171.5f, 38f, 0);
				func_66(&Local_9);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_9.f_116) && !__LIB_0__::func_163(Global_35, -828834893))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_9.f_131, 1411.328f, 268.0174f, 88.5583f, 15.5f, true, false, true);
				TASK::TASK_STAND_STILL(Local_9.f_131, -1);
				if ((((func_67(ENTITY::GET_ENTITY_MODEL(Local_9.f_117)) || ENTITY::GET_ENTITY_MODEL(Local_9.f_117) == joaat("CART06")) || ENTITY::GET_ENTITY_MODEL(Local_9.f_117) == joaat("CART04")) || ENTITY::GET_ENTITY_MODEL(Local_9.f_117) == joaat("BUGGY03")) || ENTITY::GET_ENTITY_MODEL(Local_9.f_117) == joaat("WAGON05X"))
				{
					func_46(Local_9.f_117, Local_9.f_128, 15.5f, 1, 1073741824 /* Float: 2f */);
				}
				else
				{
					func_46(Local_9.f_117, Local_9.f_128, 15.5f, 2, 1073741824 /* Float: 2f */);
				}
				ENTITY::_0x9587913B9E772D29(Local_9.f_117, 0);
				__LIB_9__::func_319(4);
				ENTITY::FREEZE_ENTITY_POSITION(Local_9.f_117, true);
				PHYSICS::_0xEAF529446488EB18(Local_9.f_117);
				PHYSICS::_0x5E981C764DF33117(Local_9.f_117, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				iVar0 = 134348801;
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 500, iVar0);
			}
			break;
		case 9:
			if (func_48(&(Local_9.f_116), Local_9.f_3))
			{
				iVar1 = 256;
				func_68(&iVar1, 0, 2, 0, 0, 0, 0);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				ANIMSCENE::START_ANIM_SCENE(Local_9.f_116);
				__LIB_4__::func_722(&Local_9, 10);
			}
			break;
		case 10:
			func_69(&Local_9);
			func_70(&Local_9);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_9.f_116, false))
			{
				if (CAM::DOES_CAM_EXIST(Local_9.f_203))
				{
					func_71(&(Local_9.f_203));
				}
				PHYSICS::_0x5E981C764DF33117(Local_9.f_117, 0);
				if (!ENTITY::_IS_ENTITY_FROZEN(Local_9.f_117))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_9.f_117, true);
				}
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_9.f_116))
			{
				__LIB_3__::func_618(1411.551f, 264.1102f, 90f, 15f, 1, 0, 0, 0, 0);
				func_73(Local_9.f_131);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_9.f_131, false);
				ENTITY::_0xC64E597783BE9A1D(Local_9.f_131, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_9.f_131, false, true);
				PED::_0xE0B61ED8BB37712F(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Local_9.f_117))
				{
					func_74(&(Local_9.f_117));
				}
			}
			if (ANIMSCENE::_0xF94692EB9DC15D74(Local_9.f_116, 0))
			{
				__LIB_5__::func_430(&uVar2, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				PED::SET_PED_CAN_RAGDOLL(Local_9.f_131, true);
				__LIB_3__::func_123(-308659358, 1);
				__LIB_3__::func_123(-66987983, 1);
				func_77();
				__LIB_4__::func_722(&Local_9, 16);
			}
			break;
		case 16:
			__LIB_1__::func_265(Local_9.f_131, "FAREWELL_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
			func_79(&Local_9);
			return true;
	}
	return false;
}

bool func_14(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_3__::func_332(iParam0->f_122, 1) < 65f;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_117))
	{
		func_27(iParam0);
	}
	if (iParam0->f_120 && !iParam0->f_118)
	{
		return true;
	}
	if (iParam0->f_120 && iParam0->f_118)
	{
		if (!__LIB_7__::func_851(4))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0->f_117) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_117, true, false))
			{
				if (!__LIB_1__::func_262(125))
				{
					__LIB_1__::func_240(125, 0);
				}
				return true;
			}
		}
	}
	if (!__LIB_7__::func_851(32) && iParam0->f_119)
	{
		return true;
	}
	if (Global_1935630.f_12)
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_TAXI(Global_35))
	{
		return true;
	}
	if ((__LIB_11__::func_248(1, 0, 1) && bVar0) && !__LIB_7__::func_851(32))
	{
		if (!__LIB_1__::func_262(124))
		{
			__LIB_1__::func_240(124, 0);
		}
		return true;
	}
	if (!__LIB_2__::func_343(Global_35, iParam0->f_117, 0) && !bVar0)
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_131) && iParam0->f_1 > 1)
	{
		return true;
	}
	if (__LIB_7__::func_851(8) && func_86(iParam0->f_131, iParam0->f_171, 1))
	{
		if (!__LIB_1__::func_262(123))
		{
			__LIB_1__::func_240(123, 0);
		}
		__LIB_9__::func_319(2);
		return true;
	}
	if (__LIB_7__::func_851(16) && __LIB_0__::func_12() != iParam0->f_107)
	{
		return true;
	}
	if (__LIB_4__::func_267(92) || __LIB_1__::func_200(92))
	{
		return true;
	}
	if (__LIB_0__::func_895(Global_1347702[113 /*49*/].f_15) == 1)
	{
		if (iParam0->f_121 == joaat("OILWAGON01X") || iParam0->f_121 == joaat("OILWAGON02X"))
		{
			return true;
		}
	}
	if (__LIB_0__::func_58(iParam0))
	{
		return true;
	}
	return false;
}

void func_15(int iParam0)
{
	if (!func_2(Global_35) && iParam0->f_120)
	{
		iParam0->f_119 = 1;
	}
	else if (func_2(Global_35) && !iParam0->f_120)
	{
		iParam0->f_120 = 1;
		if (iParam0->f_119)
		{
			iParam0->f_119 = 0;
		}
	}
	if (func_92(iParam0))
	{
		iParam0->f_117 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iParam0->f_121 = ENTITY::GET_ENTITY_MODEL(iParam0->f_117);
		iParam0->f_118 = func_4(&(iParam0->f_117));
	}
}

void func_19(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_131))
	{
		func_93(iParam0->f_131);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_131, false);
	}
	if (__LIB_2__::func_763(iParam0->f_108, 1))
	{
		__LIB_2__::func_753(iParam0->f_108, 0, 1, 0, 0);
	}
	__LIB_9__::func_320(8);
}

void func_27(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_117))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return;
		}
		iParam0->f_117 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iParam0->f_120 = 1;
	}
	if (iParam0->f_121 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_117))
		{
			return;
		}
		iParam0->f_121 = ENTITY::GET_ENTITY_MODEL(iParam0->f_117);
	}
}

void func_28(int iParam0)
{
	iParam0->f_107 = 69;
	iParam0->f_108 = 598;
	iParam0->f_109 = 18;
	iParam0->f_4 = func_104(&(iParam0->f_117));
	iParam0->f_122 = { __LIB_7__::func_849() };
	iParam0->f_125 = { 1411.256f, 266.9222f, 88.60828f };
	iParam0->f_128 = { 1410.307f, 271.3035f, 89.7135f };
	iParam0->f_132 = { 1412.491f, 270.6684f, 88.53571f };
	iParam0->f_135 = 15.42f;
	iParam0->f_136 = "PROP_HUMAN_SEAT_BENCH";
	iParam0->f_137 = { 1407.855f, 267.3564f, 88.99222f };
	iParam0->f_140 = "SCRIPT_PROC@ROBBERIES@HOMESTEAD@LONNIES_SHACK@DECEPTION";
	iParam0->f_141 = "DECEPTION_WAVE_SEAN";
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_170))
	{
		iParam0->f_170 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1413.266f, 252.548f, 90.005f, 0f, 0f, 0f, 25f, 25f, 4f, "Wagon Fence - Trigger Zone");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_167))
	{
		__LIB_3__::func_867(&(iParam0->f_167), &(iParam0->f_199), 1407.474f, 273.397f, 90f, 0f, 0f, 16f, 14f, 11f, 5f, 1, 10208, 1, 2, "SHOWF_VOL_BARN");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_168))
	{
		iParam0->f_168 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1407.474f, 273.397f, 90f, 0f, 0f, 16f, 14f, 14f, 5f);
		VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_168, 0);
		VOLUME::_0xBE551C2CC421185D(iParam0->f_168, 1);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_169))
	{
		__LIB_3__::func_867(&(iParam0->f_169), &(iParam0->f_200), 1410.87f, 261.8175f, 90.61948f, 0f, 0f, 15.5f, 20f, 12f, 5f, 1, 10208, 1, 2, "SHOWF_VOL_ENTRANCE");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_167))
	{
		__LIB_3__::func_378(iParam0->f_167, 0);
	}
	iParam0->f_201 = INTERIOR::GET_INTERIOR_AT_COORDS(iParam0->f_122);
	if (INTERIOR::IS_VALID_INTERIOR(iParam0->f_201))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam0->f_201);
	}
	__LIB_0__::func_928(&(iParam0->f_5), Global_35, "ARTHUR", 0);
}

void func_33(int iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_140))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_140);
	}
}

void func_34(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_74(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

bool func_35(int iParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_140))
	{
		return true;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_140))
	{
		return false;
	}
	return true;
}

void func_36()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_7__::func_851(32))
	{
		if (__LIB_1__::func_374(Global_35, 1411.256f, 266.9222f, 88.60828f, 0.75f) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			__LIB_1__::func_448(Global_35, Local_9.f_125, 0, 50f, 35f, 25f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && VEHICLE::_IS_DRAFT_VEHICLE(iVar0))
			{
				iVar2 = 0;
				while (iVar2 < 6)
				{
					iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1.75f);
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar0, PED::_0x46BF2A810679D6E6(iVar1, 2.5f));
					}
					iVar2++;
				}
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 3f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
		}
	}
}

bool func_38(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_120(iParam0->f_108);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0x6759BEE6762E140B(iVar0);
	}
	if (!__LIB_2__::func_987(iParam0->f_108, 1, 0, 0, 0, 0))
	{
		return false;
	}
	else
	{
		iParam0->f_131 = __LIB_2__::func_963(iParam0->f_108);
		__LIB_9__::func_319(8);
	}
	return true;
}

bool func_39(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_131))
	{
		return true;
	}
	return false;
}

void func_40(bool bParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_9.f_131))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_9.f_131, true);
	PED::_0xF1C03A5352243A30(Local_9.f_131);
	WEAPON::_0x94A3C1B804D291EC(Local_9.f_131, 0, 0, 0, 1);
	__LIB_0__::func_202(Local_9.f_131, 0);
	__LIB_4__::func_228(&(Local_9.f_171));
	if (bParam0)
	{
		func_46(Local_9.f_131, Local_9.f_132, Local_9.f_135, 2, 1073741824 /* Float: 2f */);
	}
}

void func_41(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_131))
	{
		return;
	}
	__LIB_0__::func_928(&(iParam0->f_5), iParam0->f_131, "EMR_Son1", 0);
}

void func_42(var uParam0)
{
	*uParam0 = 4;
}

void func_43(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_13__::func_865(), 0, func_115(iParam1), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
}

bool func_44(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_116) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_116, true, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_116, "player", Global_35, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_131))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_116, "male", iParam0->f_131, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_117))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_116, "stagecoach", iParam0->f_117, 0);
		}
		return true;
	}
	return false;
}

void func_45(var uParam0, int iParam1, var uParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		*uParam2 = func_60(iParam1);
		ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_115(*uParam2));
	}
}

void func_46(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_46(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_46(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_47()
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Local_9.f_131))
	{
		return 0;
	}
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_9.f_137, MISC::GET_HASH_KEY(Local_9.f_136), 0.5f, 1, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		TASK::_TASK_USE_SCENARIO_POINT(Local_9.f_131, iVar0, 0, 0, false, true, 0, false, -1f, false);
		return 1;
	}
	return 0;
}

bool func_48(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_115(iParam1)))
	{
		return true;
	}
	return false;
}

void func_50()
{
	__LIB_3__::func_440(&(Local_9.f_142), Global_35, 1, -1, 1, 1, 2, 1, 0, 0, 0, 0);
}

void func_51(int iParam0)
{
	if (!func_121(iParam0, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_116) > 0.558f)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 1)
		{
			__LIB_1__::func_265(Global_35, "GREET_SEAMUS", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"), 0, 1, 0, 0, 1);
		}
		else
		{
			__LIB_1__::func_265(iParam0->f_131, "PARK_WAGON", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"), 0, 1, 0, 0, 1);
		}
		func_122(iParam0, 1);
	}
}

void func_52(int iParam0)
{
	if (func_121(iParam0, 1))
	{
		if (!__LIB_2__::func_618(&(iParam0->f_204)))
		{
			__LIB_8__::func_901(&(iParam0->f_204), 0);
		}
		if (__LIB_11__::func_410(&(iParam0->f_204), 20f))
		{
			__LIB_1__::func_265(iParam0->f_131, "TAKE_YOUR_TIME", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"), 0, 1, 0, 0, 1);
			__LIB_2__::func_608(&(iParam0->f_204));
		}
	}
}

bool func_55()
{
	int iVar0;
	if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_9.f_116) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_9.f_116, true, false)) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_9.f_116, func_115(Local_9.f_3)))
	{
		return false;
	}
	iVar0 = func_104(&(Local_9.f_117));
	if (iVar0 == Local_9.f_4)
	{
		return true;
	}
	else
	{
		Local_9.f_4 = iVar0;
		Local_9.f_3 = func_60(Local_9.f_4);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_9.f_116, func_115(Local_9.f_3));
		return false;
	}
	return true;
}

float func_56(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CART02"):
		case joaat("WAGON03X"):
		case joaat("BUGGY03"):
		case joaat("COACH5"):
		case joaat("WAGON05X"):
		case joaat("SUPPLYWAGON"):
		case joaat("LOGWAGON"):
		case joaat("COACH6"):
		case joaat("STAGECOACH006X"):
		case joaat("CART03"):
		case joaat("BUGGY01"):
		case joaat("BUGGY02"):
		case joaat("OILWAGON01X"):
		case joaat("STAGECOACH005X"):
		case joaat("CART01"):
		case joaat("CART04"):
		case joaat("STAGECOACH003X"):
		case joaat("CART08"):
		case joaat("WAGON02X"):
		case joaat("COACH3"):
		case joaat("CART07"):
		case joaat("COACH4"):
		case joaat("WAGONDAIRY01X"):
		case joaat("CART06"):
		case joaat("CART05"):
		case joaat("UTILLIWAG"):
		case joaat("WAGON06X"):
		case joaat("CHUCKWAGON000X"):
		case joaat("STAGECOACH002X"):
		case joaat("COACH2"):
		case joaat("CHUCKWAGON002X"):
		case joaat("WAGON04X"):
		case joaat("STAGECOACH001X"):
			return 3.15f;
		default:
			break;
	}
	return 2.25f;
}

bool func_58()
{
	if (!__LIB_2__::func_618(&uLocal_219))
	{
		__LIB_8__::func_901(&uLocal_219, 0);
	}
	if (__LIB_9__::func_324(&uLocal_219) > 0.75f)
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(Local_9.f_117) || ENTITY::GET_ENTITY_SPEED(Local_9.f_117) <= 2.5f)
		{
			__LIB_2__::func_608(&uLocal_219);
			return true;
		}
	}
	return false;
}

void func_59(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	iVar0 = __LIB_0__::func_398(7);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = ENTITY::_0x886171A12F400B89(Local_9.f_169, iVar1, 1);
	vVar4 = { 1404.513f, 258.6714f, 88.6714f };
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar7))
		{
			iVar8 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar7);
			if (iVar8 != iVar0 && __LIB_0__::func_125(iVar8))
			{
				bVar9 = false;
				if (!ENTITY::IS_ENTITY_DEAD(Local_9.f_117) && VEHICLE::_IS_DRAFT_VEHICLE(Local_9.f_117))
				{
					iVar10 = 0;
					while (iVar10 < 6)
					{
						if (iVar8 == VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_9.f_117, iVar10))
						{
							bVar9 = true;
						}
						else
						{
							iVar10++;
						}
					}
				}
				if (!bVar9)
				{
					func_46(iVar8, vVar4, 14.4941f, 2, 1073741824 /* Float: 2f */);
					vVar4.x = (vVar4.x + 1.5f);
				}
			}
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (__LIB_0__::func_125(iVar0))
		{
			iVar11 = __LIB_0__::func_402(iVar0);
			if (iVar11 != -1)
			{
				if (__LIB_0__::func_795(iVar11))
				{
					return;
				}
			}
			if (__LIB_0__::func_126(iVar0))
			{
				PHYSICS::_0x0348469DAA17576C(iVar0);
			}
			__LIB_0__::func_568(1395.742f, 261.8848f, 88.4427f, 2.5f, 0);
			func_46(iVar0, 1395.742f, 261.8848f, 88.4427f, 14.4941f, 2, 1073741824 /* Float: 2f */);
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
				PHYSICS::_0x06AADE17334F7A40(iVar0, 1395.742f, 261.8848f, 88.4427f);
			}
		}
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 6;
		case 5:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 6;
}

void func_61()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_9.f_117))
	{
		return;
	}
	VEHICLE::BRING_VEHICLE_TO_HALT(Local_9.f_117, 0.75f, 2, true);
}

void func_65(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8)
{
	int iVar0;
	iVar0 = 256;
	func_68(&iVar0, 0, 2, 0, 0, 0, 0);
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", vParam1, vParam4, fParam7, true, 2);
	}
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (iParam8 != 0)
		{
			CAM::POINT_CAM_AT_ENTITY(*uParam0, iParam8, 0f, 0f, 0f, true);
		}
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_66(int iParam0)
{
	if (!func_121(iParam0, 2))
	{
		__LIB_1__::func_265(PLAYER::PLAYER_PED_ID(), "PRESENT_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
		func_122(iParam0, 2);
	}
}

bool func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OILWAGON02X"):
		case joaat("OILWAGON01X"):
			return true;
	}
	return false;
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*iParam0, 4) && !__LIB_0__::func_1(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*iParam0, 8192))
	{
		func_140();
	}
	if (!__LIB_0__::func_1(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*iParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_0__::func_151(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*iParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_5__::func_431(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_69(int iParam0)
{
	int iVar0;
	if (!func_121(iParam0, 4) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_116) > 0.165f)
	{
		if (iParam0->f_4 == 5)
		{
			func_152(&(iParam0->f_5), "SHOWF_CRRD_BRK", iParam0->f_131, Global_35, 0, 0, 1, 1);
		}
		else if (iParam0->f_4 == 6)
		{
			func_152(&(iParam0->f_5), "SHOWF_CRRD_BRK2", iParam0->f_131, Global_35, 0, 0, 1, 1);
		}
		else if (iParam0->f_4 == 7)
		{
			func_152(&(iParam0->f_5), "SHOWF_CRRD_BRK3", iParam0->f_131, Global_35, 0, 0, 1, 1);
		}
		else
		{
			iVar0 = (ENTITY::GET_ENTITY_HEALTH(iParam0->f_117) / 10);
			if (ENTITY::GET_ENTITY_HEALTH(iParam0->f_117) < (ENTITY::GET_ENTITY_MAX_HEALTH(iParam0->f_117, false) - iVar0))
			{
				__LIB_1__::func_265(iParam0->f_131, "COMMENT_ON_DAMAGED_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
			}
			else if (func_67(iParam0->f_121))
			{
				__LIB_1__::func_265(iParam0->f_131, "COMMENT_ON_OIL_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
			}
			else if (func_153(iParam0->f_121))
			{
				__LIB_1__::func_265(iParam0->f_131, "COMMENT_ON_LUMBER_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
			}
			else
			{
				switch (iParam0->f_4)
				{
					case 0:
					case 1:
						__LIB_1__::func_265(iParam0->f_131, "COMMENT_ON_POOR_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
						break;
					case 2:
						__LIB_1__::func_265(iParam0->f_131, "COMMENT_ON_AVERAGE_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
						break;
					case 3:
						__LIB_1__::func_265(iParam0->f_131, "COMMENT_ON_QUALITY_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
						break;
					case 4:
						__LIB_1__::func_265(iParam0->f_131, "COMMENT_ON_EXCEPTIONAL_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
						break;
				}
			}
		}
		func_122(iParam0, 4);
	}
}

void func_70(int iParam0)
{
	float fVar0;
	fVar0 = 0.52f;
	if (iParam0->f_4 == 1)
	{
		fVar0 = 0.49f;
	}
	if ((!func_121(iParam0, 8) && !AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_131)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_116) > fVar0)
	{
		__LIB_1__::func_265(iParam0->f_131, "BUY_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
		func_122(iParam0, 8);
	}
}

void func_71(var uParam0)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

void func_73(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		func_46(iParam0, 1411.586f, 267.0799f, 88.5993f, 196.7626f, 2, 1073741824 /* Float: 2f */);
	}
}

void func_74(int* iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
				{
					PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
					func_46(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

void func_77()
{
	func_161(Local_9.f_4);
	__LIB_0__::func_15(__LIB_0__::func_14(joaat("STOLEN_WAGONS_SOLD")), 1);
}

void func_79(int iParam0)
{
	iParam0->f_202 = 0;
}

bool func_86(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29)
{
	var uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	func_168(iParam0, 0, &uParam1, &uVar0, 0, 0);
	if (bParam29 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (__LIB_4__::func_188(&uParam1) == iParam0)
	{
		return true;
	}
	return false;
}

bool func_92(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_35, false)))
	{
		if (iParam0->f_117 != PED::GET_VEHICLE_PED_IS_IN(Global_35, false))
		{
			return true;
		}
	}
	return false;
}

void func_93(int iParam0)
{
	if (__LIB_14__::func_565(iParam0, 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

int func_104(var uParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(*uParam0, "wagonFenceValue"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(*uParam0, "wagonFenceValue");
			return iVar0;
		}
	}
	return 0;
}

char* func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "";
		case 2:
			return "PBL_OPENS_DOORS_INSIDE_SLOW";
		case 3:
			return "PBL_OPENS_DOORS_BENCH_SLOW";
		case 4:
			return "PBL_OPENS_DOORS_INSIDE_FAST";
		case 5:
			return "PBL_OPENS_DOORS_BENCH_FAST";
		case 6:
			return "PBL_PAYMENT_POOR";
		case 7:
			return "PBL_PAYMENT_MED";
		case 8:
			return "PBL_PAYMENT_MED";
		case 9:
			return "PBL_PAYMENT_MED";
		default:
			break;
	}
	return "INVALID_PLAY_LIST";
}

bool func_121(int iParam0, int iParam1)
{
	return __LIB_0__::func_1(iParam0->f_202, iParam1);
}

void func_122(int iParam0, int iParam1)
{
	__LIB_0__::func_7(&(iParam0->f_202), iParam1);
}

void func_140()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_229(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_152(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		__LIB_5__::func_107(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (__LIB_1__::func_568(sParam1))
			{
				return 1;
			}
		}
		else if (__LIB_1__::func_104(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_153(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOGWAGON"):
		case joaat("LOGWAGON2"):
			return true;
	}
	return false;
}

void func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			__LIB_11__::func_367(joaat("REWARD_WAGON_CARGO_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 1:
			__LIB_11__::func_367(joaat("REWARD_WAGON_CARGO_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 5:
			__LIB_11__::func_367(joaat("REWARD_WAGON_CARGO_DAMAGED"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2:
			__LIB_11__::func_367(joaat("REWARD_WAGON_CARGO_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 3:
			__LIB_11__::func_367(joaat("REWARD_WAGON_CARGO_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 4:
			__LIB_11__::func_367(joaat("REWARD_WAGON_CARGO_HUGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

int func_168(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_895(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_882(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (__LIB_2__::func_874(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_896(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_14__::func_329(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_897(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_229(int iParam0, int iParam1)
{
	var uVar0;
	return func_313(&uVar0, iParam0, iParam1);
}

int func_313(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_313(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

