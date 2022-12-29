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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	struct<63> Local_26 = { 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	vector3 vLocal_93 = { 0f, 0f, 0f };
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	bool bLocal_106 = false;
	int iScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (iScriptParam_0 != -1)
	{
	}
	else
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Global_1430221.f_4 = 1;
	iLocal_92 = iScriptParam_0;
	__LIB_5__::func_813(&Local_26, 0, 537, 752, 1028);
	__LIB_5__::func_813(&Local_26, 1, 1115, 1187, 1401);
	__LIB_5__::func_813(&Local_26, 2, 1413, 1498, 1710);
	__LIB_5__::func_813(&Local_26, 3, 1722, 1734, 1862);
	__LIB_5__::func_813(&Local_26, 4, 1874, 1892, 1991);
	__LIB_5__::func_813(&Local_26, 5, 2003, 2057, 2238);
	__LIB_5__::func_813(&Local_26, 6, 2258, 2422, 3352);
	__LIB_5__::func_813(&Local_26, 7, 3450, 3502, 3566);
	__LIB_5__::func_813(&Local_26, 8, 3574, 3582, 3600);
	__LIB_6__::func_268(&Local_26, 0);
	while (!__LIB_9__::func_510(1))
	{
		BUILTIN::WAIT(0);
		func_32();
		__LIB_5__::func_803(&Local_26);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	var uVar0;
	Global_1430221.f_4 = 0;
	__LIB_0__::func_267(1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_97) && !ENTITY::IS_ENTITY_DEAD(iLocal_97))
	{
		uVar0 = VEHICLE::_0x45853F4E17D847D5(iLocal_97);
		if (VEHICLE::_0xC29996A337BDD099(uVar0))
		{
			VEHICLE::_0x38E7DD70A242D5CB(uVar0, 1);
		}
	}
	func_36(func_35());
	func_36(func_37());
	if (iLocal_99 != -1)
	{
		__LIB_17__::func_513(iLocal_99);
		__LIB_8__::func_981(iLocal_99, 1024);
	}
	if (__LIB_0__::func_800(joaat("DOCUMENT_TRAIN_TICKET"), __LIB_0__::func_949(0), 1084182731, 1) >= 1)
	{
		__LIB_17__::func_553(joaat("DOCUMENT_TRAIN_TICKET"), 1, -142743235, 0, 0);
	}
	if (bLocal_106)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		STREAMING::CLEAR_FOCUS();
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
		if (bLocal_100)
		{
			TASK::CLEAR_PED_TASKS(__LIB_0__::func_398(1), true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(1), false);
		}
		if (bLocal_101)
		{
			TASK::CLEAR_PED_TASKS(__LIB_0__::func_398(7), true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(7), false);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_105))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_105);
	}
	__LIB_1__::func_600(1);
	return 1;
}

void func_2()
{
	__LIB_1__::func_924();
	__LIB_1__::func_309(-1, 0, 0, 0, 0);
	LAW::_0xE94B5E938619712E();
	__LIB_0__::func_267(0);
	__LIB_0__::func_7(&(Global_1392581.f_3), 8);
	CAM::DO_SCREEN_FADE_OUT(2000);
	bLocal_102 = false;
	iLocal_91 = __LIB_0__::func_12();
	iLocal_99 = __LIB_17__::func_552(iLocal_92);
	bLocal_106 = true;
	if (__LIB_0__::func_48(Global_35, __LIB_0__::func_398(7), __LIB_1__::func_136(7), 1) && !TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(7)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(7), true);
		bLocal_101 = true;
	}
	if (__LIB_0__::func_48(Global_35, __LIB_0__::func_398(1), __LIB_1__::func_136(1), 1) && !TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(1)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(1), true);
		bLocal_100 = true;
	}
	func_52(iLocal_91, 0, &vLocal_93, &uLocal_96);
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x513F8AA5BF2F17CF(vLocal_93, 40f, 0);
	}
	func_53(func_37());
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_3()
{
	int iVar0;
	LAW::_0xE94B5E938619712E();
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return -1;
	}
	if (!bLocal_102)
	{
		__LIB_13__::func_707(iLocal_99);
		__LIB_0__::func_714(iLocal_99, 1024);
		__LIB_8__::func_981(iLocal_99, 2);
		__LIB_8__::func_981(iLocal_99, 65536);
		__LIB_8__::func_981(iLocal_99, 4096);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != iLocal_99)
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar0 /*373*/].f_1, 1);
				__LIB_0__::func_714(iVar0, 2);
				VEHICLE::_0x0D5FDF0D36FA10CD(Global_1425371[iVar0 /*373*/].f_1);
			}
			iVar0++;
		}
		VEHICLE::DELETE_ALL_TRAINS();
		__LIB_3__::func_618(__LIB_1__::func_974(PLAYER::PLAYER_ID()), 250f, 1, 0, 0, 0, 0);
		bLocal_102 = true;
	}
	if (!VEHICLE::_0xC29996A337BDD099(Global_1425371[iLocal_99 /*373*/].f_1))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
		{
			return 8;
		}
		return -1;
	}
	if (Global_1310750.f_16037 != 0)
	{
		__LIB_1__::func_924();
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		return -1;
	}
	if (!STREAMING::_0x0909F71B5C070797())
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(Global_1425371[iLocal_99 /*373*/].f_1)))
	{
		return -1;
	}
	return 1;
}

void func_4()
{
	LAW::_0xE94B5E938619712E();
	STREAMING::_0x5A8B01199C3E79C3();
	STREAMING::CLEAR_FOCUS();
}

void func_6()
{
	LAW::_0xE94B5E938619712E();
	if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iLocal_99 /*373*/].f_1))
	{
		VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
	}
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_7()
{
	LAW::_0xE94B5E938619712E();
	if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(Global_1425371[iLocal_99 /*373*/].f_1)))
	{
		VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
		if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
		{
			return 8;
		}
		return -1;
	}
	else
	{
		iLocal_97 = VEHICLE::_0x6E585A616ABB8401(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
		if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iLocal_99 /*373*/].f_1))
		{
			VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
			VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
		}
	}
	if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_97))
	{
		return -1;
	}
	return 2;
}

void func_8()
{
	LAW::_0xE94B5E938619712E();
}

void func_9()
{
	LAW::_0xE94B5E938619712E();
	iLocal_103 = MISC::GET_GAME_TIMER();
	if (__LIB_0__::func_800(joaat("DOCUMENT_TRAIN_TICKET"), __LIB_0__::func_949(0), 1084182731, 1) >= 1)
	{
		__LIB_17__::func_553(joaat("DOCUMENT_TRAIN_TICKET"), 1, -142743235, 0, 0);
	}
	iLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_97, 4);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		ENTITY::_0x6C31B06E91518269(iLocal_98, 1);
	}
}

int func_10()
{
	vector3 vVar0;
	int iVar3;
	LAW::_0xE94B5E938619712E();
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98) || ENTITY::IS_ENTITY_DEAD(iLocal_98))
	{
		iLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_97, 4);
		return -1;
	}
	else
	{
		if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_98))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_98, 1);
			return -1;
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_98, true, false) };
		if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(vVar0, 5f, false, Global_35, false))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
			{
				return 8;
			}
			else
			{
				iVar3 = (MISC::GET_GAME_TIMER() - iLocal_103);
				return -1;
			}
		}
		if (!__LIB_0__::func_491(Global_35, -1518311320))
		{
			TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_98, true, false), 5f);
		}
	}
	if (__LIB_0__::func_491(Global_35, -1518311320))
	{
		__LIB_0__::func_568(__LIB_1__::func_974(PLAYER::PLAYER_ID()), 2f, 0);
		CAM::SET_CINEMATIC_MODE_ACTIVE(true);
		iLocal_103 = MISC::GET_GAME_TIMER();
		return 3;
	}
	return -1;
}

int func_13()
{
	if (!CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		iLocal_103 = MISC::GET_GAME_TIMER();
	}
	LAW::_0xE94B5E938619712E();
	if ((MISC::GET_GAME_TIMER() - iLocal_103) > 3500)
	{
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_97, false);
		VEHICLE::_0xA72B1BF3857B94D7(iLocal_97, 1);
		VEHICLE::_0xDD100CE1EBBF37E3(iLocal_97, 0);
		VEHICLE::_0x4182C037AA1F0091(iLocal_97, 0);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
		VEHICLE::_0x34BCF6209B9668A7(Global_1425371[iLocal_99 /*373*/].f_1, 1);
		return 4;
	}
	return -1;
}

void func_15()
{
	LAW::_0xE94B5E938619712E();
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_16()
{
	LAW::_0xE94B5E938619712E();
	if ((MISC::GET_GAME_TIMER() - iLocal_103) > 6000)
	{
		if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(3000);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 5;
		}
		return -1;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()) && CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	return -1;
}

void func_18()
{
	LAW::_0xE94B5E938619712E();
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_105))
	{
		iLocal_105 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_17__::func_514(-1), 0, 0, false, true);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_105, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_105);
	}
}

int func_19()
{
	LAW::_0xE94B5E938619712E();
	if ((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_105) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_105, false)) && CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_105, true, false))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_105);
		func_52(iLocal_92, 1, &vLocal_93, &uLocal_96);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_105))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_105, false) && CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
			func_53(func_35());
			__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 40f, 1, 0, 0, 0, 0);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_105) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_105, false))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			return 6;
		}
	}
	return -1;
}

void func_20()
{
	func_36(func_35());
	LAW::_0xE94B5E938619712E();
}

void func_21()
{
	int iVar0;
	int iVar1;
	LAW::_0xE94B5E938619712E();
	STREAMING::REQUEST_COLLISION_AT_COORD(vLocal_93);
	if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iLocal_99 /*373*/].f_1))
	{
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		ENTITY::_0x6C31B06E91518269(iLocal_98, 1);
	}
	VEHICLE::_0x4182C037AA1F0091(iLocal_97, 1);
	VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	iLocal_103 = MISC::GET_GAME_TIMER();
	iVar0 = __LIB_14__::func_994(iLocal_91, iLocal_92);
	__LIB_2__::func_522(iVar0, 0, 0, 0, 1);
	iVar1 = __LIB_0__::func_560(iLocal_91, 1);
	__LIB_14__::func_444(1, iVar1, -695085701, 1, iVar0);
}

int func_22()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	var uVar7;
	vector3 vVar8;
	var uVar11;
	vector3 vVar12;
	var uVar15;
	int iVar16;
	LAW::_0xE94B5E938619712E();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			if (!STREAMING::_0x0909F71B5C070797())
			{
				return -1;
			}
		}
		else if (__LIB_0__::func_94(Global_35, vLocal_93, 1) < 1000f)
		{
			vVar0 = { vLocal_93 };
			fVar6 = func_66(iLocal_97, vLocal_93, &vVar3);
			if (!__LIB_0__::func_86(vVar3))
			{
				vVar0 = { vVar3 };
			}
			STREAMING::_0x513F8AA5BF2F17CF(vVar0, fVar6, 1);
			iLocal_103 = MISC::GET_GAME_TIMER();
			return -1;
		}
		else
		{
			if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iLocal_99 /*373*/].f_1))
			{
				VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
			}
			if (!__LIB_0__::func_491(Global_35, -1518311320))
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_93, true, false, true, true);
			}
			return -1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97))
			{
				iLocal_97 = VEHICLE::_0x6E585A616ABB8401(Global_1425371[iLocal_99 /*373*/].f_1);
				VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
				VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
				return -1;
			}
			else
			{
				iLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_97, 4);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
				return -1;
			}
		}
		else if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_98))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_98, 1);
			return -1;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_103) < 500)
	{
		return -1;
	}
	if (!__LIB_0__::func_491(Global_35, -1518311320))
	{
		if (TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_98, true, false), 5f, false, Global_35, false))
		{
			TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_98, true, false), 5f);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return -1;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		__LIB_0__::func_568(__LIB_1__::func_974(PLAYER::PLAYER_ID()), 2f, 0);
		VEHICLE::_0x4182C037AA1F0091(iLocal_97, 1);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
		uVar7 = VEHICLE::_0x45853F4E17D847D5(iLocal_97);
		VEHICLE::_0x34BCF6209B9668A7(uVar7, 1);
		VEHICLE::_0x38E7DD70A242D5CB(uVar7, 0);
		CAM::DO_SCREEN_FADE_IN(3000);
		if (bLocal_100)
		{
			func_68(iLocal_92, &vVar8, &uVar11, 1);
			func_69(__LIB_0__::func_398(1), vVar8, uVar11, 32, 1073741824 /* Float: 2f */);
			TASK::TASK_STAND_STILL(__LIB_0__::func_398(1), -1);
		}
		if (bLocal_101)
		{
			func_68(iLocal_92, &vVar12, &uVar15, 0);
			func_69(__LIB_0__::func_398(7), vVar12, uVar15, 32, 1073741824 /* Float: 2f */);
			TASK::TASK_STAND_STILL(__LIB_0__::func_398(7), -1);
		}
		STREAMING::_0x5A8B01199C3E79C3();
		STREAMING::CLEAR_FOCUS();
		iLocal_104 = MISC::GET_GAME_TIMER();
		return -1;
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || !ENTITY::DOES_ENTITY_EXIST(iLocal_97))
		{
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			return 7;
		}
	}
	if (bLocal_100)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(__LIB_0__::func_398(1), 0f);
		if (!__LIB_0__::func_491(__LIB_0__::func_398(1), -982327190))
		{
			TASK::TASK_STAND_STILL(__LIB_0__::func_398(1), -1);
		}
	}
	if (bLocal_101)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(__LIB_0__::func_398(7), 0f);
		if (!__LIB_0__::func_491(__LIB_0__::func_398(7), -982327190))
		{
			TASK::TASK_STAND_STILL(__LIB_0__::func_398(7), -1);
		}
	}
	iVar16 = (MISC::GET_GAME_TIMER() - iLocal_104);
	if (iVar16 < 40000 && !VEHICLE::_0xE887BD31D97793F6(iLocal_97))
	{
		return -1;
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(3000);
		STREAMING::CLEAR_FOCUS();
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
	VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	return 7;
}

void func_23()
{
	if (bLocal_100)
	{
		TASK::CLEAR_PED_TASKS(__LIB_0__::func_398(1), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(1), false);
	}
	if (bLocal_101)
	{
		TASK::CLEAR_PED_TASKS(__LIB_0__::func_398(7), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(7), false);
	}
	LAW::_0xE94B5E938619712E();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
}

void func_24()
{
	bLocal_106 = false;
	LAW::_0xE94B5E938619712E();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_0__::func_8(&(Global_1392581.f_3), 8);
	iLocal_103 = MISC::GET_GAME_TIMER();
	func_36(func_37());
}

int func_25()
{
	LAW::_0xE94B5E938619712E();
	if (((MISC::GET_GAME_TIMER() - iLocal_103) > 30000 || !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID(), 0) > 0)
	{
		return 8;
	}
	return -1;
}

int func_28()
{
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return -1;
}

void func_32()
{
	if (Local_26.f_62 != 7 && Local_26.f_62 != 8)
	{
		if (Local_26.f_62 != -1)
		{
			VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (Local_26.f_62 != 0 && Local_26.f_62 != 1)
			{
				CAM::_0x702B75DC9D3EDE56(true);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::_0x5651516D947ABC53();
		}
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	}
}

char* func_35()
{
	return "FastTravel_Train_Ticket_Clouds_Sequence_Scene";
}

void func_36(char* sParam0)
{
	AUDIO::STOP_AUDIO_SCENE(sParam0);
}

char* func_37()
{
	return "FastTravel_Train_Ticket_Sequence_Scene";
}

void func_52(int iParam0, bool bParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f };
				*uParam3 = 0;
			}
			break;
		case 23:
			if (bParam1)
			{
				*uParam2 = { -1143f, -545.4f, 86.6f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1067.019f, -604.0603f, 78.0298f };
				*uParam3 = 0;
			}
			break;
		case 28:
			if (bParam1)
			{
				*uParam2 = { -1280f, 477.1f, 93.7f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1333.328f, 374.2152f, 94.938f };
				*uParam3 = 0;
			}
			break;
		case 69:
			if (bParam1)
			{
				*uParam2 = { 1529.7f, 477.9f, 90.2f };
				*uParam3 = 1;
			}
			else
			{
				*uParam2 = { 1529.595f, 405.6096f, 89.3616f };
				*uParam3 = 1;
			}
			break;
		case 76:
			if (bParam1)
			{
				*uParam2 = { -190.6f, 589.1f, 113.2f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -136.938f, 659.54f, 112.672f };
				*uParam3 = 0;
			}
			break;
		case 78:
			if (bParam1)
			{
				*uParam2 = { 2884.136f, 1211.772f, 44.32313f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2978.219f, 1344.3f, 42.941f };
				*uParam3 = 0;
			}
			break;
		case 105:
			if (bParam1)
			{
				*uParam2 = { 1196.2f, -1281.2f, 76.6f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 1307.31f, -1382.5f, 75.3375f };
				*uParam3 = 0;
			}
			break;
	}
}

void func_53(char* sParam0)
{
	AUDIO::START_AUDIO_SCENE(sParam0);
}

float func_66(int iParam0, vector3 vParam1, var uParam4)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	float fVar5;
	fVar5 = 40f;
	if (!__LIB_0__::func_86(vParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar3 = VEHICLE::_0x1180A2974D251B7B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
			uVar4 = VEHICLE::_0xAF787E081AC4A8EE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
			if (iVar3 >= 0)
			{
				vVar0 = { VEHICLE::_0xBA958F68031DDBFC(uVar4, iVar3) };
				if (!__LIB_0__::func_86(vVar0))
				{
					*uParam4 = { __LIB_4__::func_147(vParam1, vVar0) };
					fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, true);
				}
			}
		}
	}
	if (fVar5 > 100f)
	{
		fVar5 = 100f;
	}
	return fVar5;
}

void func_68(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 5:
			if (!bParam3)
			{
				*uParam1 = { 2755.556f, -1418.491f, 45.2074f };
			}
			else
			{
				*uParam1 = { 2756.556f, -1418.491f, 45.2074f };
			}
			*uParam2 = 145f;
			break;
		case 23:
			if (!bParam3)
			{
				*uParam1 = { -1101.923f, -574.2673f, 81.27955f };
			}
			else
			{
				*uParam1 = { -1102.923f, -574.2673f, 81.27955f };
			}
			*uParam2 = 0.85f;
			break;
		case 28:
			if (!bParam3)
			{
				*uParam1 = { -1314.075f, 387.0378f, 94.41888f };
			}
			else
			{
				*uParam1 = { -1315.075f, 387.0378f, 94.41888f };
			}
			*uParam2 = 72.5f;
			break;
		case 69:
			*uParam1 = { 1521.333f, 419.062f, 88.96367f };
			if (!bParam3)
			{
				*uParam1 = { 1521.333f, 419.062f, 88.96367f };
			}
			else
			{
				*uParam1 = { 1522.333f, 419.062f, 88.96367f };
			}
			*uParam2 = 4f;
			break;
		case 76:
			if (!bParam3)
			{
				*uParam1 = { -168.7946f, 646.7418f, 112.5389f };
			}
			else
			{
				*uParam1 = { -169.7946f, 646.7418f, 112.5389f };
			}
			*uParam2 = -122f;
			break;
		case 78:
			if (!bParam3)
			{
				*uParam1 = { 2920.64f, 1273.347f, 43.50124f };
			}
			else
			{
				*uParam1 = { 2921.64f, 1273.347f, 43.50124f };
			}
			*uParam2 = 2f;
			break;
		case 105:
			if (!bParam3)
			{
				*uParam1 = { 1256.509f, -1317.039f, 75.2567f };
			}
			else
			{
				*uParam1 = { 1257.509f, -1317.039f, 75.2567f };
			}
			*uParam2 = 2f;
			break;
	}
}

void func_69(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_69(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_69(iVar2, vParam1, fParam4, iParam5, iParam6);
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

