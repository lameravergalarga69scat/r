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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16[1] = { 0 };
	int iLocal_18 = 0;
	vector3 vLocal_19 = { 0f, 0f, 0f };
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	char* sLocal_32 = NULL;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_23 = 3f;
	sLocal_32 = "script@common@cnv_camp@mini_games@five_finger_dynamic@intro";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	__LIB_17__::func_755(3);
	if (__LIB_0__::func_139(iLocal_15))
	{
		__LIB_1__::func_281(&iLocal_15, 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_27))
	{
		MAP::REMOVE_BLIP(&iLocal_27);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_33))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_33, "PLAYER", Global_35);
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_33);
	}
	if (bLocal_30)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_1__::func_714();
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_29, false);
		VOLUME::_DELETE_VOLUME(iLocal_28);
	}
}

bool func_2()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	switch (iLocal_14)
	{
		case 0:
			if (func_7())
			{
				iLocal_14 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_261(vLocal_19, 6f, 4, 1))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			iVar1 = CLOCK::GET_CLOCK_HOURS();
			if ((!__LIB_1__::func_220(__LIB_0__::func_61()) || __LIB_0__::func_296(2, 0, 1)) || !(iVar1 < 2 || iVar1 > 20))
			{
				return true;
			}
			if (__LIB_0__::func_592() != 1)
			{
				return true;
			}
			if (((((bVar0 && !PED::_IS_PED_CARRYING(Global_35)) && __LIB_17__::func_756(2)) && !Global_1327590.f_19745) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !(WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar2, true, 0, true) && (iVar2 == joaat("WEAPON_KIT_CAMERA") || iVar2 == joaat("WEAPON_KIT_BINOCULARS"))))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_27))
				{
					iLocal_27 = MAP::_BLIP_ADD_FOR_COORD(-678244495, vLocal_19);
					switch (__LIB_0__::func_317())
					{
						case 1:
							MAP::SET_BLIP_SPRITE(iLocal_27, joaat("BLIP_MG_FIVE_FINGER_FILLET"), true);
							break;
						case 2:
							MAP::SET_BLIP_SPRITE(iLocal_27, joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS"), true);
							break;
						case 3:
							MAP::SET_BLIP_SPRITE(iLocal_27, joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT"), true);
							break;
						default:
							MAP::SET_BLIP_SPRITE(iLocal_27, joaat("BLIP_MG_FIVE_FINGER_FILLET"), true);
							break;
					}
					iVar3 = __LIB_1__::func_245(-1511391406);
					if (iVar3 != 0)
					{
						MAP::SET_BLIP_FLASH_TIMER(iLocal_27, iVar3, -1);
					}
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_27, 724623647);
				}
				if (!__LIB_0__::func_139(iLocal_15))
				{
					iLocal_15 = __LIB_1__::func_282(__LIB_1__::func_246(-1511391406), joaat("INPUT_CONTEXT_X"), vLocal_19, fLocal_23, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				}
				else
				{
					__LIB_1__::func_221(iLocal_15, 1, 1);
					if (__LIB_1__::func_262(171))
					{
						__LIB_1__::func_263(171);
					}
				}
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_27))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_27, 724623647);
				}
				if (__LIB_0__::func_139(iLocal_15))
				{
					__LIB_1__::func_221(iLocal_15, 0, 1);
				}
				if (__LIB_1__::func_264(iLocal_15, 1))
				{
					if (!__LIB_0__::func_474(171))
					{
						__LIB_1__::func_240(171, 0);
					}
				}
				return false;
			}
			if (bVar0)
			{
				if (__LIB_0__::func_567(iLocal_15, 1))
				{
					if (__LIB_0__::func_139(iLocal_15))
					{
						__LIB_1__::func_281(&iLocal_15, 1, 1);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_27))
					{
						MAP::REMOVE_BLIP(&iLocal_27);
					}
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
					{
						iLocal_28 = VOLUME::_CREATE_VOLUME_SPHERE(vLocal_19, 0f, 0f, 0f, 3f, 3f, 3f);
						uLocal_29 = PED::_0x4C39C95AE5DB1329(iLocal_28, 0, 15);
					}
					bLocal_30 = true;
					func_25(4);
					if (iLocal_18 < 1)
					{
						func_25(25);
					}
					if (iLocal_18 >= 1)
					{
						iVar4 = __LIB_4__::func_656(iLocal_16[0]);
						__LIB_1__::func_551(iVar4, 0);
					}
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
					iLocal_14 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(func_28(__LIB_4__::func_656(iLocal_16[0]), 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1), 0))
			{
				return false;
			}
			if (!__LIB_0__::func_75(&uLocal_24))
			{
				__LIB_1__::func_148(&uLocal_24);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_33, true, false))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_33, "PL_INTRO"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_33, "PLAYER", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_33, Global_36, 0f, 0f, 0f, 2);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
						ANIMSCENE::START_ANIM_SCENE(iLocal_33);
						__LIB_1__::func_206(vLocal_19, 4f, 0);
						iVar5 = __LIB_1__::func_306(vLocal_19, joaat("P_BOWL04X"), 4f, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							OBJECT::DELETE_OBJECT(&iVar5);
						}
						iVar5 = __LIB_1__::func_306(vLocal_19, joaat("P_BOWL04X_STEW"), 4f, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							OBJECT::DELETE_OBJECT(&iVar5);
						}
						__LIB_1__::func_265(Global_35, "MINIGAME_PLAYER_CAMP_CALLOVER_PLAYERS_FFF", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
						PED::SET_PED_LEG_IK_MODE(Global_35, 0);
						iLocal_31 = 0;
						__LIB_1__::func_247(3, iLocal_33);
						iLocal_14 = 3;
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_33, "PL_INTRO");
					}
				}
			}
			break;
		case 3:
			Global_1900325.f_36 = 1;
			if (__LIB_17__::func_758(14, __LIB_0__::func_61(), vLocal_19, fLocal_22, 0, &iLocal_16, 0, 1, 0))
			{
				__LIB_1__::func_148(&uLocal_24);
				iVar6 = 0;
				while (iVar6 < 27)
				{
					if (__LIB_0__::func_903(iVar6) && !__LIB_1__::func_248(__LIB_0__::func_271(iVar6), &iLocal_16))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(__LIB_0__::func_271(iVar6), "Minigame_Non_Participant_Ped_group", 0f);
					}
					iVar6++;
				}
				iLocal_14 = 4;
			}
			break;
		case 4:
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			if (!bLocal_34)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (__LIB_1__::func_265(iLocal_16[0], "MINIGAME_COMPANION_CALLOVER_RESPONSE", joaat("SPEECH_PARAMS_FORCE_FRONTEND"), Global_35, 1, 0, 0, 1))
					{
						bLocal_34 = true;
					}
				}
			}
			if (iLocal_31 == 0 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_33))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_33, false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_33))
				{
					__LIB_1__::func_249(3);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_33, "PLAYER", Global_35);
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_33);
					iLocal_31 = 1;
				}
			}
			if (!__LIB_1__::func_243(14))
			{
				TASK::CLEAR_PED_TASKS(iLocal_16[0], true, false);
				__LIB_1__::func_714();
				__LIB_1__::func_774(__LIB_4__::func_656(iLocal_16[0]), 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_29, false);
				VOLUME::_DELETE_VOLUME(iLocal_28);
				iLocal_14 = 5;
			}
			break;
		case 5:
			__LIB_1__::func_148(&uLocal_24);
			__LIB_13__::func_687(14, 1);
			iVar7 = 0;
			while (iVar7 < 27)
			{
				if (__LIB_0__::func_903(iVar7) && !__LIB_1__::func_248(__LIB_0__::func_271(iVar7), &iLocal_16))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(__LIB_0__::func_271(iVar7), 0f);
				}
				iVar7++;
			}
			iVar8 = 0;
			while (iVar8 < 1)
			{
				iLocal_16[iVar8] = __LIB_0__::func_749();
				iVar8++;
			}
			iLocal_18 = 0;
			iLocal_14 = 6;
			break;
		case 6:
			if (__LIB_1__::func_313(&uLocal_24, 90f))
			{
				__LIB_0__::func_37(&uLocal_24);
				iLocal_14 = 7;
			}
			break;
		case 7:
			iLocal_14 = 0;
			break;
	}
	return false;
}

bool func_7()
{
	if (!__LIB_0__::func_272(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	iLocal_33 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_32, 0, "PL_INTRO", false, true);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_33))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_33);
	}
	vLocal_19 = { func_54(__LIB_0__::func_317()) };
	fLocal_22 = func_55(__LIB_0__::func_317());
	return true;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar0 = __LIB_0__::func_271(iVar1);
		if (!__LIB_0__::func_272(iLocal_16[iLocal_18], 0))
		{
			if (func_83(iVar0))
			{
				iLocal_16[iLocal_18] = iVar0;
				iLocal_18++;
			}
		}
		if (iLocal_18 >= 1)
		{
		}
		else
		{
			iVar1++;
		}
	}
	return 1;
}

int func_28(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_100(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -118.119f, -27.6134f, 95.57f;
		case 2:
			return 665.5322f, -1243.902f, 43.95f;
		case 3:
			return 1881.669f, -1874.046f, 42.58f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_55(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 166.84f;
		case 2:
			return 225.55f;
		case 3:
			return 167.47f;
		default:
			break;
	}
	return 0f;
}

bool func_83(int iParam0)
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_248(iParam0, &iLocal_16))
	{
		return false;
	}
	iVar1 = __LIB_4__::func_656(iParam0);
	bVar0 = __LIB_0__::func_49(iVar1);
	if (bVar0)
	{
		if (!__LIB_1__::func_307(iVar1, 1, 1))
		{
			return false;
		}
		switch (iVar1)
		{
			case 2:
			case 6:
			case 9:
				return true;
			case 11:
				if (__LIB_1__::func_187(134))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

void func_100(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_100(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_100(iVar2, vParam1, fParam4, iParam5, iParam6);
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

