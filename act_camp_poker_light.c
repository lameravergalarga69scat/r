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
	int iLocal_15[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_22 = 0;
	vector3 vLocal_23 = { 0f, 0f, 0f };
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	float fLocal_42 = 0f;
	char* sLocal_43 = NULL;
	int iLocal_44 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_27 = 3f;
	fLocal_42 = 33.6376f;
	sLocal_43 = "script@common@cnv_camp@mini_games@poker_dynamic@intro";
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
	__LIB_17__::func_755(2);
	if (__LIB_0__::func_139(iLocal_14))
	{
		__LIB_1__::func_281(&iLocal_14, 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_31))
	{
		MAP::REMOVE_BLIP(&iLocal_31);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_38))
	{
		CAM::DESTROY_CAM(iLocal_38, false);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_44))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iLocal_44, 0);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_44, "PLAYER", Global_35);
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_44);
	}
	if (bLocal_34)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_32))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_33, false);
		VOLUME::_DELETE_VOLUME(iLocal_32);
	}
}

bool func_2()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	switch (iLocal_37)
	{
		case 0:
			if (func_6())
			{
				iLocal_37 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_261(vLocal_23, 6f, 4, 1))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			iVar1 = CLOCK::GET_CLOCK_HOURS();
			if ((!__LIB_1__::func_220(__LIB_0__::func_61()) || __LIB_0__::func_296(2, 0, 1)) || !(iVar1 < 2 || iVar1 > 10))
			{
				return true;
			}
			if (__LIB_0__::func_592() != 1)
			{
				return true;
			}
			if (((((bVar0 && !PED::_IS_PED_CARRYING(Global_35)) && __LIB_17__::func_756(0)) && !Global_1327590.f_19745) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !(WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar2, true, 0, true) && (iVar2 == joaat("WEAPON_KIT_CAMERA") || iVar2 == joaat("WEAPON_KIT_BINOCULARS"))))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_31))
				{
					iLocal_31 = MAP::_BLIP_ADD_FOR_COORD(-678244495, vLocal_23);
					MAP::SET_BLIP_SPRITE(iLocal_31, joaat("BLIP_MG_POKER"), true);
					__LIB_5__::func_794(iLocal_31, __LIB_0__::func_61());
					iVar3 = __LIB_1__::func_245(-1341684320);
					if (iVar3 != 0)
					{
						MAP::SET_BLIP_FLASH_TIMER(iLocal_31, iVar3, -1);
					}
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_31, 724623647);
				}
				if (!__LIB_0__::func_139(iLocal_14))
				{
					iLocal_14 = __LIB_1__::func_282(__LIB_1__::func_246(-1341684320), joaat("INPUT_CONTEXT_X"), vLocal_23, fLocal_27, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				}
				else
				{
					__LIB_1__::func_221(iLocal_14, 1, 1);
					if (__LIB_1__::func_262(171))
					{
						__LIB_1__::func_263(171);
					}
				}
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_31))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_31, 724623647);
				}
				if (__LIB_0__::func_139(iLocal_14))
				{
					__LIB_1__::func_221(iLocal_14, 0, 1);
				}
				if (__LIB_1__::func_264(iLocal_14, 1))
				{
					if (!__LIB_0__::func_474(171))
					{
						__LIB_1__::func_240(171, 0);
					}
				}
				return false;
			}
			if (__LIB_0__::func_567(iLocal_14, 1))
			{
				if (__LIB_0__::func_139(iLocal_14))
				{
					__LIB_1__::func_281(&iLocal_14, 1, 1);
				}
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_32))
				{
					iLocal_32 = VOLUME::_CREATE_VOLUME_SPHERE(vLocal_23, 0f, 0f, 0f, 4f, 4f, 4f);
					uLocal_33 = PED::_0x4C39C95AE5DB1329(iLocal_32, 0, 15);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_31))
				{
					MAP::REMOVE_BLIP(&iLocal_31);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_38))
				{
					vLocal_39 = { __LIB_1__::func_251(__LIB_0__::func_317()) };
					vLocal_39.f_2 = (vLocal_39.z + 1.1f);
					iLocal_38 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_39, 0f, 0f, 0f, fLocal_42, false, 2);
				}
				bLocal_34 = true;
				func_26(4);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
				iLocal_37 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_75(&uLocal_28))
			{
				__LIB_1__::func_148(&uLocal_28);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_44, true, false))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_44, "PL_INTRO"))
					{
						vVar4 = { Global_36 };
						vVar4.f_2 = (vVar4.z + 1f);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_44, "PLAYER", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_44, vVar4, 0f, 0f, 0f, 2);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
						ANIMSCENE::START_ANIM_SCENE(iLocal_44);
						__LIB_1__::func_265(Global_35, "MINIGAME_PLAYER_CAMP_CALLOVER_PLAYERS_POKER", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
						__LIB_1__::func_247(2, iLocal_44);
						__LIB_1__::func_206(vLocal_23, 4f, 0);
						iVar7 = __LIB_1__::func_306(vLocal_23, joaat("P_BOWL04X"), 4f, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar7))
						{
							OBJECT::DELETE_OBJECT(&iVar7);
						}
						iVar7 = __LIB_1__::func_306(vLocal_23, joaat("P_BOWL04X_STEW"), 4f, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar7))
						{
							OBJECT::DELETE_OBJECT(&iVar7);
						}
						func_33(&iLocal_32, 0);
						iLocal_37 = 3;
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_44, "PL_INTRO");
					}
				}
			}
			break;
		case 3:
			if (__LIB_17__::func_758(24, __LIB_0__::func_61(), vLocal_23, fLocal_26, 100, &iLocal_15, 0, 1, 0))
			{
				__LIB_1__::func_283(&uLocal_28, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iVar8 = 0;
				while (iVar8 < 27)
				{
					if (__LIB_0__::func_903(iVar8) && !__LIB_1__::func_248(__LIB_0__::func_271(iVar8), &iLocal_15))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(__LIB_0__::func_271(iVar8), "Minigame_Non_Participant_Ped_group", 0f);
					}
					iVar8++;
				}
				iLocal_37 = 4;
			}
			break;
		case 4:
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			if (!bLocal_36)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (__LIB_1__::func_265(iLocal_15[2], "MINIGAME_COMPANION_CALLOVER_RESPONSE", joaat("SPEECH_PARAMS_FORCE_FRONTEND"), Global_35, 1, 0, 0, 1))
					{
						bLocal_36 = true;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_44, false))
			{
				if (!bLocal_35)
				{
					bLocal_35 = true;
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_44, 0);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_44, "PLAYER", Global_35);
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_44);
				}
			}
			if (!__LIB_1__::func_243(24))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_33, false);
				VOLUME::_DELETE_VOLUME(iLocal_32);
				iLocal_37 = 5;
			}
			break;
		case 5:
			iVar9 = 0;
			while (iVar9 < 27)
			{
				if (__LIB_0__::func_903(iVar9) && !__LIB_1__::func_248(__LIB_0__::func_271(iVar9), &iLocal_15))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(__LIB_0__::func_271(iVar9), 0f);
				}
				iVar9++;
			}
			iVar10 = 0;
			while (iVar10 < 6)
			{
				iLocal_15[iVar10] = __LIB_0__::func_749();
				iVar10++;
			}
			iLocal_22 = 0;
			__LIB_1__::func_148(&uLocal_28);
			__LIB_13__::func_687(24, 1);
			iLocal_37 = 6;
			break;
		case 6:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_44, false))
			{
				if (__LIB_1__::func_313(&uLocal_28, 90f))
				{
					__LIB_0__::func_37(&uLocal_28);
					iLocal_37 = 7;
				}
			}
			break;
		case 7:
			iLocal_37 = 0;
			break;
	}
	return false;
}

bool func_6()
{
	if (!__LIB_0__::func_272(PLAYER::PLAYER_PED_ID(), 0))
	{
		return false;
	}
	iLocal_44 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_43, 0, "PL_INTRO", false, true);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_44))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_44);
	}
	vLocal_23 = { __LIB_1__::func_251(__LIB_0__::func_317()) };
	fLocal_26 = func_49(__LIB_0__::func_317());
	return true;
}

int func_26(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (iLocal_22 >= 3)
		{
		}
		else
		{
			if (func_79(iVar0))
			{
				iLocal_15[__LIB_5__::func_772(iLocal_22)] = __LIB_0__::func_271(iVar0);
				__LIB_17__::func_757(iVar0, 2, 1, -1);
				iLocal_22++;
			}
			iVar0++;
		}
	}
	iLocal_15[0] = Global_35;
	return 1;
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_3__::func_743(iVar0, &iParam1))
		{
		}
		else if (__LIB_0__::func_903(iVar0) && !__LIB_0__::func_699(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(__LIB_0__::func_271(iVar0), *iParam0, true, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_271(iVar0), false, true);
				PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(iVar0, 0));
				PERSCHAR::_0x631CD2D77FDC0316(__LIB_0__::func_748(iVar0, 0));
			}
		}
		iVar0++;
	}
}

float func_49(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0f;
		case 2:
			return -50.6f;
		case 3:
			return -80f;
		default:
			break;
	}
	return 0f;
}

bool func_79(int iParam0)
{
	if (!__LIB_1__::func_307(iParam0, 1, 1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 21:
			if (__LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"), 1) == 0)
			{
				return true;
			}
			break;
		case 1:
		case 4:
		case 9:
		case 17:
		case 18:
		case 19:
			return true;
	}
	return false;
}

