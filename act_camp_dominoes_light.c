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
	int iLocal_15[2] = { 0, 0 };
	int iLocal_18 = 0;
	vector3 vLocal_19 = { 0f, 0f, 0f };
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	var uLocal_36 = 0;
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
	fLocal_23 = 3f;
	fLocal_42 = 33.6376f;
	sLocal_43 = "script@common@cnv_camp@mini_games@dominoes_dynamic@intro";
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
	__LIB_17__::func_755(1);
	if (__LIB_0__::func_139(iLocal_14))
	{
		__LIB_1__::func_281(&iLocal_14, 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_30))
	{
		MAP::REMOVE_BLIP(&iLocal_30);
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
	if (bLocal_33)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_1__::func_714();
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
	{
		__LIB_1__::func_544(iLocal_31);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_32, false);
		VOLUME::_DELETE_VOLUME(iLocal_31);
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
	switch (iLocal_37)
	{
		case 0:
			if (func_8())
			{
				__LIB_9__::func_755(1);
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
			if ((!__LIB_1__::func_220(__LIB_0__::func_61()) || __LIB_0__::func_296(2, 0, 1)) || !(iVar1 > 6 && iVar1 < 20))
			{
				return true;
			}
			if (__LIB_0__::func_592() != 1)
			{
				return true;
			}
			if (((((bVar0 && !PED::_IS_PED_CARRYING(Global_35)) && func_15(1)) && !Global_1327590.f_19745) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !(WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar2, true, 0, true) && (iVar2 == joaat("WEAPON_KIT_CAMERA") || iVar2 == joaat("WEAPON_KIT_BINOCULARS"))))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_30))
				{
					iLocal_30 = MAP::_BLIP_ADD_FOR_COORD(-678244495, vLocal_19);
					switch (__LIB_0__::func_317())
					{
						case 1:
							MAP::SET_BLIP_SPRITE(iLocal_30, joaat("BLIP_MG_DOMINOES"), true);
							break;
						case 2:
							MAP::SET_BLIP_SPRITE(iLocal_30, joaat("BLIP_MG_DOMINOES_ALL5S"), true);
							break;
						case 3:
							MAP::SET_BLIP_SPRITE(iLocal_30, joaat("BLIP_MG_DOMINOES_ALL3S"), true);
							break;
						default:
							MAP::SET_BLIP_SPRITE(iLocal_30, joaat("BLIP_MG_DOMINOES"), true);
							break;
					}
					__LIB_5__::func_794(iLocal_30, __LIB_0__::func_61());
					iVar3 = __LIB_1__::func_245(-1567081107);
					if (iVar3 != 0)
					{
						MAP::SET_BLIP_FLASH_TIMER(iLocal_30, iVar3, -1);
					}
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_30, 724623647);
				}
				if (!__LIB_0__::func_139(iLocal_14))
				{
					iLocal_14 = __LIB_1__::func_282(__LIB_1__::func_246(-1567081107), joaat("INPUT_CONTEXT_X"), vLocal_19, fLocal_23, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
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
				if (MAP::DOES_BLIP_EXIST(iLocal_30))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_30, 724623647);
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
			if (bVar0)
			{
				if (__LIB_0__::func_567(iLocal_14, 1))
				{
					if (__LIB_0__::func_139(iLocal_14))
					{
						__LIB_1__::func_281(&iLocal_14, 1, 1);
					}
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
					{
						iLocal_31 = VOLUME::_CREATE_VOLUME_SPHERE(vLocal_19, 0f, 0f, 0f, 3f, 3f, 3f);
						uLocal_32 = PED::_0x4C39C95AE5DB1329(iLocal_31, 0, 15);
						__LIB_2__::func_261(iLocal_31, "TABLE", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
					}
					iVar4 = 0;
					while (iVar4 < 27)
					{
						if (__LIB_0__::func_903(iVar4) && __LIB_1__::func_205(__LIB_0__::func_271(iVar4), iLocal_31, 1, 0))
						{
							__LIB_0__::func_288(iVar4, 68, 1);
						}
						iVar4++;
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_30))
					{
						MAP::REMOVE_BLIP(&iLocal_30);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_38))
					{
						vLocal_39 = { __LIB_1__::func_252(__LIB_0__::func_317()) };
						vLocal_39.f_2 = (vLocal_39.z + 1.1f);
						iLocal_38 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_39, 0f, 0f, 0f, fLocal_42, false, 2);
					}
					bLocal_33 = true;
					func_34(4);
					if (iLocal_18 < 2)
					{
						func_34(25);
					}
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
					__LIB_1__::func_148(&uLocal_27);
					__LIB_9__::func_755(3);
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_75(&uLocal_24))
			{
				__LIB_1__::func_148(&uLocal_24);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				if (func_37(&iLocal_31, uLocal_36))
				{
					if (__LIB_0__::func_265(&uLocal_27) > 8f)
					{
						func_39(&iLocal_31, uLocal_36);
						__LIB_0__::func_37(&uLocal_27);
					}
					else
					{
						return false;
					}
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_44, true, false))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_44, "PL_INTRO"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_44, "PLAYER", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_44, func_41(__LIB_0__::func_317()), func_42(__LIB_0__::func_317()), 2);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
						ANIMSCENE::START_ANIM_SCENE(iLocal_44);
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
						__LIB_1__::func_265(Global_35, "MINIGAME_PLAYER_CAMP_CALLOVER_PLAYERS_DOMINOES", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
						__LIB_1__::func_247(1, iLocal_44);
						__LIB_9__::func_755(4);
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_44, "PL_INTRO");
					}
				}
			}
			break;
		case 4:
			if (__LIB_17__::func_758(7, __LIB_0__::func_61(), vLocal_19, fLocal_22, 0, &iLocal_15, 0, 1, 0))
			{
				iVar6 = 0;
				while (iVar6 < 27)
				{
					if (__LIB_0__::func_903(iVar6) && !__LIB_1__::func_248(__LIB_0__::func_271(iVar6), &iLocal_15))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(__LIB_0__::func_271(iVar6), "Minigame_Non_Participant_Ped_group", 0f);
					}
					iVar6++;
				}
				__LIB_1__::func_148(&uLocal_24);
				__LIB_9__::func_755(5);
			}
			break;
		case 5:
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			if (!bLocal_35)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (__LIB_1__::func_265(iLocal_15[1], "MINIGAME_COMPANION_CALLOVER_RESPONSE", joaat("SPEECH_PARAMS_FORCE_FRONTEND"), Global_35, 1, 0, 0, 1))
					{
						bLocal_35 = true;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_44, false))
			{
				if (!bLocal_34)
				{
					bLocal_34 = true;
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_44, 0);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_44, "PLAYER", Global_35);
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_44);
					__LIB_1__::func_249(1);
				}
			}
			if (!__LIB_1__::func_243(7))
			{
				TASK::CLEAR_PED_TASKS(iLocal_15[1], true, false);
				__LIB_1__::func_714();
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_32, false);
				VOLUME::_DELETE_VOLUME(iLocal_31);
				__LIB_9__::func_755(6);
			}
			break;
		case 6:
			__LIB_1__::func_148(&uLocal_24);
			__LIB_13__::func_687(7, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			iVar7 = 0;
			while (iVar7 < 27)
			{
				if (__LIB_0__::func_903(iVar7) && !__LIB_1__::func_248(__LIB_0__::func_271(iVar7), &iLocal_15))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(__LIB_0__::func_271(iVar7), 0f);
				}
				iVar7++;
			}
			iVar8 = 0;
			while (iVar8 < 2)
			{
				iLocal_15[iVar8] = __LIB_0__::func_749();
				iVar8++;
			}
			iLocal_18 = 0;
			__LIB_9__::func_755(7);
			break;
		case 7:
			if (__LIB_1__::func_313(&uLocal_24, 90f))
			{
				__LIB_0__::func_37(&uLocal_24);
				__LIB_9__::func_755(8);
			}
			break;
		case 8:
			__LIB_9__::func_755(0);
			break;
	}
	return false;
}

bool func_8()
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
	vLocal_19 = { __LIB_1__::func_252(__LIB_0__::func_317()) };
	fLocal_22 = func_63(__LIB_0__::func_317());
	return true;
}

bool func_15(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_1__::func_261(__LIB_1__::func_304(iParam0, __LIB_0__::func_317()), 6f, 4, 1))
	{
		return false;
	}
	if (__LIB_0__::func_750(&(Global_1391438.f_5), 2048))
	{
		return false;
	}
	if (func_74(iParam0) == 0)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_317();
	if (iVar0 == 3 && !__LIB_1__::func_185(28))
	{
		return false;
	}
	switch (iVar0)
	{
		case 1:
			if (func_76(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (func_76(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (bVar1)
	{
		return false;
	}
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (iVar2 >= 17 && iVar2 < 21)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 256))
			{
				return false;
			}
			if (!__LIB_10__::func_719(-1341684320))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 10))
			{
				return false;
			}
			if (__LIB_1__::func_250(-1341684320))
			{
				return false;
			}
			break;
		case 1:
			if (__LIB_8__::func_961(joaat("HAI_DOMINOES_01")) == 0 && __LIB_0__::func_317() == 2)
			{
				return false;
			}
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 512))
			{
				return false;
			}
			if (func_76(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
			{
				return false;
			}
			if (!__LIB_10__::func_719(-1567081107))
			{
				return false;
			}
			if (!(iVar2 > 6 && iVar2 < 20))
			{
				return false;
			}
			if (__LIB_1__::func_250(-1567081107))
			{
				return false;
			}
			break;
		case 2:
			if (!(__LIB_8__::func_961(joaat("HAI_FIVE_FINGER_FILLET_01")) || __LIB_8__::func_961(joaat("HAI_FIVE_FINGER_FILLET_02"))) && __LIB_0__::func_317() < 2)
			{
				return false;
			}
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 1024))
			{
				return false;
			}
			if (!__LIB_10__::func_719(-1511391406))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 20))
			{
				return false;
			}
			if (__LIB_1__::func_250(-1511391406))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_34(int iParam0)
{
	int iVar0;
	iLocal_15[0] = Global_35;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (iLocal_18 >= 1)
		{
		}
		else
		{
			if (func_96(iVar0))
			{
				iLocal_15[iLocal_18 + 1] = __LIB_0__::func_271(iVar0);
				__LIB_17__::func_757(iVar0, 2, 1, -1);
				__LIB_0__::func_7(&uLocal_36, __LIB_0__::func_771(iVar0));
				iLocal_18++;
			}
			iVar0++;
		}
	}
	return 1;
}

bool func_37(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (__LIB_1__::func_482(iVar1, &uParam1))
		{
		}
		else if (__LIB_0__::func_903(iVar1))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(__LIB_0__::func_271(iVar1), *iParam0, true, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_39(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_1__::func_482(iVar0, &uParam1))
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

Vector3 func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -117.95f, -27.3f, 94.804f;
		case 2:
			return 665.6985f, -1244.2f, 43.143f;
		case 3:
			return 1881.6f, -1874.302f, 41.8096f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0f, 0f, -105.25f;
		case 2:
			return 0f, 0f, 135f;
		case 3:
			return 0f, 0f, 80f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_63(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 110.99f;
		case 2:
			return -10f;
		case 3:
			return -67.66f;
		default:
			break;
	}
	return 0f;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (((((((__LIB_1__::func_307(21, 1, 1) && !func_76(joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"), 1)) || __LIB_1__::func_307(17, 1, 1)) || __LIB_1__::func_307(19, 1, 1)) || __LIB_1__::func_307(9, 1, 1)) || (__LIB_1__::func_307(1, 1, 1) && !func_76(joaat("CSTAG_FLOW_JOHN_RECOVER"), 1))) || __LIB_1__::func_307(18, 1, 1)) || __LIB_1__::func_307(4, 1, 1))
			{
				return 1;
			}
			break;
		case 1:
			if ((((__LIB_1__::func_307(22, 1, 1) || __LIB_1__::func_307(15, 1, 1)) || __LIB_1__::func_307(13, 1, 1)) || __LIB_1__::func_307(17, 1, 1)) || __LIB_1__::func_307(5, 1, 1))
			{
				return 1;
			}
			break;
		case 2:
			if (((__LIB_1__::func_307(2, 1, 1) || __LIB_1__::func_307(6, 1, 1)) || __LIB_1__::func_307(9, 1, 1)) || (__LIB_1__::func_307(11, 1, 1) && __LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_76(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		return func_146(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_96(int iParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = __LIB_0__::func_49(iParam0);
	if (bVar0)
	{
		if (!__LIB_1__::func_307(iParam0, 1, 1))
		{
			return false;
		}
		iVar1 = __LIB_0__::func_271(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar1) != 0)
		{
			return false;
		}
		switch (iParam0)
		{
			case 5:
			case 13:
			case 15:
			case 17:
			case 22:
				return true;
			default:
				break;
		}
	}
	return false;
}

bool func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	func_208(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

int func_208(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_263(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

