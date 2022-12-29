#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<2> ScriptParam_0 = { 0, 73 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	char* sVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	int iVar32;
	iVar0 = 0;
	__LIB_0__::func_7(&Global_1935630, 8388608);
	iVar6 = 0;
	vVar7 = { -2593.506f, 457.0906f, 145.9973f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&iVar6);
		__LIB_0__::func_8(&Global_1935630, 8388608);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		HUD::_0xC9CAEAEEC1256E54(1331687942);
		HUD::_0x5651516D947ABC53();
		switch (iVar0)
		{
			case 0:
				CAM::DO_SCREEN_FADE_OUT(1500);
				__LIB_1__::func_26(0);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
				__LIB_7__::func_585(&iVar0, 1);
				break;
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, true);
					if (__LIB_0__::func_71(Global_35))
					{
						iVar4 = PED::GET_MOUNT(Global_35);
						PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar4, -2589.782f, 466.6921f, 145.0417f, 75.2096f, true, false, true);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						iVar3 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
						PED::_0xE0B61ED8BB37712F(Global_35);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar3, -2618.071f, 460.2562f, 144.8576f, 7.2663f, true, false, true);
					}
					__LIB_1__::func_26(1);
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
					func_7();
					__LIB_1__::func_971(0);
					__LIB_7__::func_585(&iVar0, 2);
				}
				break;
			case 2:
				iVar6 = func_9(ScriptParam_0);
				sVar28 = func_10(iVar6);
				if (MISC::IS_STRING_NULL_OR_EMPTY(sVar28))
				{
					iVar6 = 0;
				}
				if (iVar6 != 0)
				{
					iVar2 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_0__::func_67(__LIB_0__::func_98("cutscene@", sVar28, 1, 63)), 256, sVar28, false, true);
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar2))
					{
						iVar6 = 0;
					}
					else
					{
						ANIMSCENE::LOAD_ANIM_SCENE(iVar2);
					}
				}
				iVar1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@fast_travel@sky@skytl_0900_01clear", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
				if (iVar6 == 2)
				{
					func_13(&uVar5, 0);
				}
				else if (iVar6 != 1)
				{
				}
				else
				{
					func_14(&uVar5, 0);
				}
				Global_40.f_4283.f_574 = (Global_40.f_4283.f_574 || iVar6);
				__LIB_7__::func_585(&iVar0, 3);
				break;
			case 3:
				bVar13 = func_15(iVar6);
				bVar14 = (iVar6 == 0 || (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar2, true, false) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar2, "JOHN", &vVar16, false, 0, 2)));
				bVar15 = ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar1, true, false);
				if (((bVar14 && bVar13) && bVar15) && func_16(iVar6))
				{
					if (iVar6 != 0)
					{
						func_17(iVar2, iVar6);
					}
					switch (iVar6)
					{
						case 8:
						case 16:
							func_17(iVar2, iVar6);
							vVar10 = { vVar16 };
							__LIB_7__::func_585(&iVar0, 9);
							break;
						case 0:
							vVar10 = { vVar7 };
							__LIB_7__::func_585(&iVar0, 11);
							break;
						case 1:
						case 2:
						case 4:
							func_17(iVar2, iVar6);
							vVar10 = { vVar16 };
							__LIB_7__::func_585(&iVar0, 4);
							break;
					}
					if (__LIB_0__::func_272(Global_35, 0))
					{
						ENTITY::SET_ENTITY_COORDS(Global_35, vVar10, true, false, true, true);
						ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
					}
				}
				break;
			case 4:
				__LIB_18__::func_30(Global_35, ScriptParam_0.f_1, 1, 1, 0);
				CLOCK::ADVANCE_CLOCK_TIME_TO(func_20(), 0, 0);
				__LIB_7__::func_585(&iVar0, 5);
				break;
			case 5:
				ANIMSCENE::START_ANIM_SCENE(iVar1);
				AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				__LIB_7__::func_585(&iVar0, 6);
				break;
			case 6:
				fVar29 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iVar1);
				if ((fVar29 > 1.2f && !CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (fVar29 > 8.7f)
				{
					__LIB_7__::func_585(&iVar0, 7);
				}
				break;
			case 7:
				ANIMSCENE::START_ANIM_SCENE(iVar2);
				AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				__LIB_7__::func_585(&iVar0, 8);
				break;
			case 8:
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar2) > 0.9f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 0);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iVar2))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					if (iVar6 != 4)
					{
						__LIB_7__::func_585(&iVar0, 18);
					}
					else
					{
						__LIB_7__::func_585(&iVar0, 17);
					}
				}
				break;
			case 9:
				CAM::DO_SCREEN_FADE_IN(500);
				ANIMSCENE::START_ANIM_SCENE(iVar2);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				__LIB_7__::func_585(&iVar0, 10);
				break;
			case 10:
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar2) > 0.9f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 0);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iVar2))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_7__::func_585(&iVar0, 13);
				}
				break;
			case 11:
				ANIMSCENE::START_ANIM_SCENE(iVar1);
				AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				__LIB_7__::func_585(&iVar0, 12);
				break;
			case 12:
				fVar30 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iVar1);
				if ((fVar30 > 1.3f && !CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (fVar30 > 8.5f)
				{
					__LIB_7__::func_585(&iVar0, 13);
				}
				break;
			case 13:
				__LIB_18__::func_30(Global_35, ScriptParam_0.f_1, 1, 1, 0);
				CLOCK::ADVANCE_CLOCK_TIME_TO(func_20(), 0, 0);
				__LIB_7__::func_585(&iVar0, 14);
				break;
			case 14:
				func_21();
				if (iVar6 == 8 || iVar6 == 16)
				{
					CAM::_0x69D65E89FFD72313(0, 0);
					CAM::DO_SCREEN_FADE_IN(1500);
				}
				else
				{
					AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				}
				__LIB_1__::func_283(&uLocal_12, 0);
				__LIB_7__::func_585(&iVar0, 15);
				break;
			case 15:
				if (!CAM::IS_SCREEN_FADED_OUT() && __LIB_0__::func_264(&uLocal_12) > 6f)
				{
					if (iVar6 != 0)
					{
						__LIB_7__::func_585(&iVar0, 16);
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
						__LIB_7__::func_585(&iVar0, 18);
					}
				}
				break;
			case 16:
				ENTITY::SET_ENTITY_COORDS(Global_35, -2571.372f, 454.4025f, 144.7018f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, 266.6689f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 266.3258f, false, true);
				__LIB_7__::func_585(&iVar0, 21);
				break;
			case 18:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::DOES_CAM_EXIST(iLocal_15))
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::SET_CAM_ACTIVE(iLocal_15, false);
						CAM::DESTROY_CAM(iLocal_15, false);
					}
					iVar31 = 0;
					if (TASK::_0x6EEAD6AF637DA752(-2519.942f, 420.925f, 146.9122f, joaat("WORLD_HUMAN_LEAN_POST_RIGHT"), 2f, 1))
					{
						iVar31 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-2519.942f, 420.925f, 146.9122f, joaat("WORLD_HUMAN_LEAN_POST_RIGHT"), 2f, 1, false);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar31))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, iVar31, 0, 1300, false, true, 0, false, -1f, false);
						__LIB_1__::func_283(&uLocal_19, 0);
						__LIB_7__::func_585(&iVar0, 19);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(Global_35, -2519.942f, 420.925f, 146.9122f, true, false, true, true);
						ENTITY::SET_ENTITY_HEADING(Global_35, 90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						__LIB_7__::func_585(&iVar0, 20);
					}
				}
				break;
			case 19:
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -76381094, true) == 1 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					if (!__LIB_0__::func_75(&uLocal_16))
					{
						__LIB_1__::func_283(&uLocal_16, 0);
					}
					else if (__LIB_0__::func_265(&uLocal_16) > 0.3f)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-165f, 1f);
						__LIB_7__::func_585(&iVar0, 20);
					}
				}
				else if (__LIB_0__::func_265(&uLocal_19) > 2f)
				{
					ENTITY::SET_ENTITY_COORDS(Global_35, -2519.942f, 420.925f, 146.9122f, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(Global_35, 90f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					__LIB_7__::func_585(&iVar0, 20);
				}
				break;
			case 20:
				CAM::DO_SCREEN_FADE_IN(800);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 90f, false, true);
				__LIB_7__::func_585(&iVar0, 21);
				break;
			case 17:
				ENTITY::SET_ENTITY_COORDS(Global_35, -2564.423f, 403.3554f, 147.3823f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, 148f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 148f, false, true);
				CAM::DO_SCREEN_FADE_IN(800);
				__LIB_7__::func_585(&iVar0, 21);
				break;
			case 21:
				iVar32 = __LIB_1__::func_690(iLocal_10, 709, 714, 0);
				if (__LIB_2__::func_763(iVar32, 1))
				{
					__LIB_2__::func_753(iVar32, 1, 1, 0, 0);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_15))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iLocal_15, false);
					CAM::DESTROY_CAM(iLocal_15, false);
				}
				if (iVar6 != 2)
				{
					if (iVar6 == 1)
					{
						func_14(&uVar5, 1);
					}
				}
				else
				{
					func_13(&uVar5, 1);
				}
				if (!__LIB_6__::func_89(1))
				{
					__LIB_6__::func_413(joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"), 1, 0, 1103626240 /* Float: 25f */);
				}
				func_2(&iVar6);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_7__::func_585(&iVar0, 22);
				break;
			case 22:
				SCRIPTS::_0x7DE4643157AD646C(SCRIPTS::GET_ID_OF_THIS_THREAD());
				break;
		}
		BUILTIN::WAIT(0);
	}
	__LIB_0__::func_8(&Global_1935630, 8388608);
}

void func_2(int iParam0)
{
	func_31(*iParam0);
}

void func_7()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = __LIB_0__::func_147();
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		bVar1 = true;
	}
	iVar2 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar2))
	{
		return;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar2);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
	if (iVar3 == 0)
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2);
		iVar6 = iVar5;
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0xED00D72F81CF7278(iVar6, 0, 0);
			if (bVar1 && iVar6 == iVar0)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar6, -2589.73f, 462.719f, 145.099f, 1.44f, true, false, true);
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar6, -2595.92f, 474.3518f, 144.948f, 83.4473f, true, false, true);
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
}

int func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = 0;
		MISC::SET_BIT(&iVar2, iVar1);
		iVar0 = iVar2;
		if (__LIB_0__::func_1(uParam0, iVar0))
		{
			if (func_38(iVar0))
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return 0;
}

char* func_10(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 8:
			sVar0 = "PTL_MCS1";
			break;
		case 16:
			sVar0 = "PTL_MCS2";
			break;
		case 4:
			sVar0 = "PTL_MCS3";
			break;
		case 1:
			sVar0 = "PTL_MCS5";
			break;
		case 2:
			sVar0 = "PTL_MCS4";
			break;
	}
	return sVar0;
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!bParam1)
	{
		__LIB_4__::func_213(202123401, -1f, 1);
		__LIB_4__::func_389(202123401, 4, 0);
		iVar4 = VOLUME::_CREATE_VOLUME_BOX(-2547.044f, 419.8942f, 147.9372f, 0f, 0f, 0f, 25f, 25f, 3f);
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(iVar4, *uParam0, 1);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1);
			}
			iVar2++;
		}
		__LIB_0__::func_172(iVar4);
	}
	else
	{
		__LIB_4__::func_213(202123401, 0f, 1);
		__LIB_4__::func_389(202123401, 0, 0);
		iVar3 = ITEMSET::GET_ITEMSET_SIZE(*uParam0);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1);
			}
			iVar2++;
		}
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

void func_14(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!bParam1)
	{
		iVar4 = VOLUME::_CREATE_VOLUME_BOX(-2514.243f, 432.0485f, 146.8721f, 0f, 0f, 0f, 2f, 2f, 2f);
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(iVar4, *uParam0, 1);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1);
			}
			iVar2++;
		}
		__LIB_0__::func_172(iVar4);
	}
	else
	{
		iVar3 = ITEMSET::GET_ITEMSET_SIZE(*uParam0);
		if (iVar3 == 0)
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1);
			}
			iVar2++;
		}
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			STREAMING::REQUEST_MODEL(joaat("CART06"), false);
			STREAMING::REQUEST_MODEL(joaat("P_HAYBALE03X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("CART06")) && STREAMING::HAS_MODEL_LOADED(joaat("P_HAYBALE03X")))
			{
				return 1;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"), false);
			STREAMING::REQUEST_MODEL(joaat("P_BRUSHHORSE01X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_AMERICANPAINT_TOBIANO")) && STREAMING::HAS_MODEL_LOADED(joaat("P_BRUSHHORSE01X")))
			{
				return 1;
			}
			break;
		case 1:
			STREAMING::REQUEST_MODEL(joaat("A_C_COW"), false);
			STREAMING::REQUEST_MODEL(joaat("P_CS_BUCKET01X"), false);
			STREAMING::REQUEST_MODEL(joaat("P_STOOL02X"), false);
			STREAMING::REQUEST_MODEL(joaat("P_VAL_GATE2M02X"), false);
			if (((STREAMING::HAS_MODEL_LOADED(joaat("A_C_COW")) && STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BUCKET01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_STOOL02X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_VAL_GATE2M02X")))
			{
				return 1;
			}
			break;
		case 0:
		case 8:
		case 16:
			return 1;
	}
	return 0;
}

bool func_16(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_10))
					{
						if (__LIB_3__::func_397(709, 0))
						{
							iLocal_10 = __LIB_2__::func_965(709, 1, 0, 1, 1, 1);
						}
					}
					else
					{
						return true;
					}
				}
				else
				{
					iLocal_3 = OBJECT::CREATE_OBJECT(joaat("P_BRUSHHORSE01X"), -2552.5f, 422.8f, 148.7f, true, true, false, false, true);
				}
			}
			else
			{
				iLocal_2 = __LIB_1__::func_545(joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"), 2552.5f, 424.8f, 148.7f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_10))
					{
						if (__LIB_3__::func_397(710, 0))
						{
							iLocal_10 = __LIB_2__::func_965(710, 1, 0, 1, 1, 1);
						}
					}
					else
					{
						return true;
					}
				}
				else
				{
					iLocal_1 = OBJECT::CREATE_OBJECT(joaat("P_HAYBALE03X"), -2565.166f, 404.6969f, 147.5132f, true, true, false, false, true);
					return false;
				}
			}
			else
			{
				iLocal_0 = VEHICLE::CREATE_VEHICLE(joaat("CART06"), -2564.759f, 405.6364f, 147.536f, 0f, true, true, false, false);
				return false;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6))
					{
						if (iLocal_7 != 0)
						{
							if (ENTITY::_0x1FF441D7954F8709(iLocal_7))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_10))
								{
									if (__LIB_3__::func_397(714, 0))
									{
										iLocal_10 = __LIB_2__::func_965(714, 1, 0, 1, 1, 1);
									}
								}
								else
								{
									return true;
								}
							}
						}
						else
						{
							if (iLocal_11 == 0)
							{
								iLocal_11 = 1;
								iLocal_7 = ENTITY::_0x6F3068258A499E52(joaat("P_VAL_GATE2M02X"), -2515.028f, 430.2761f, 146.9727f, 11);
							}
							return false;
						}
					}
					else
					{
						iLocal_6 = OBJECT::CREATE_OBJECT(joaat("P_STOOL02X"), -2515.2f, 415.7121f, 146.7645f, true, true, false, false, true);
						return false;
					}
				}
				else
				{
					iLocal_5 = OBJECT::CREATE_OBJECT(joaat("P_CS_BUCKET01X"), -2515.2f, 415.7121f, 146.7645f, true, true, false, false, true);
					return false;
				}
			}
			else
			{
				iLocal_4 = __LIB_1__::func_545(joaat("A_C_COW"), -2513.196f, 414.9384f, 146.8074f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
				{
					PED::_SET_PED_SCALE(iLocal_4, 1f);
				}
				return false;
			}
			break;
		case 8:
			if (iLocal_8 != 0)
			{
				if (ENTITY::_0x1FF441D7954F8709(iLocal_8))
				{
					return true;
				}
			}
			else
			{
				if (iLocal_11 == 0)
				{
					iLocal_11 = 1;
					iLocal_8 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR04X"), -2590.841f, 457.838f, 146.014f, 15);
				}
				return false;
			}
			break;
		case 16:
			if (iLocal_8 != 0)
			{
				if (ENTITY::_0x1FF441D7954F8709(iLocal_8))
				{
					return true;
				}
			}
			else
			{
				if (iLocal_11 == 0)
				{
					iLocal_11 = 1;
					iLocal_8 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR04X"), -2590.841f, 457.838f, 146.014f, 15);
				}
				return false;
			}
			break;
		case 0:
			return true;
	}
	return false;
}

void func_17(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
		case 16:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "ABIGAILROBERTS", __LIB_0__::func_271(13), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_door04x", ENTITY::_0x4735E2A4BB83D9DA(iLocal_8), 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "JOHN", Global_35, 0);
			if (iLocal_9 == 0)
			{
				iLocal_10 = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_DAVID_GEDDES")));
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "DavidGeddes", iLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "Horse_01", iLocal_2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_brushHorse01x", iLocal_3, 0);
			break;
		case 4:
			if (iLocal_9 == 0)
			{
				iLocal_10 = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_TOM_DICKENS")));
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "TomDickens", iLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "CART06", iLocal_0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_hayBale03x", iLocal_1, 0);
			break;
		case 1:
			if (iLocal_9 == 0)
			{
				iLocal_10 = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_ABE")));
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "ABE", iLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "cow", iLocal_4, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_cs_bucket01x", iLocal_5, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_stool02x", iLocal_6, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_val_gate2m02x", ENTITY::_0x4735E2A4BB83D9DA(iLocal_7), 0);
			break;
	}
}

int func_20()
{
	if (__LIB_1__::func_25(Global_1835011[64 /*74*/].f_1, 1))
	{
		return 15;
	}
	return 9;
}

void func_21()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
			vVar0 = { -2630.748f, 494.9098f, 166.4427f };
			vVar3 = { -5.5882f, -0.6052f, -136.2172f };
			fVar6 = 26.8916f;
			break;
		case 1:
			vVar0 = { -2607.747f, 313.8794f, 150.8527f };
			vVar3 = { 2.8811f, 0f, -29.0874f };
			fVar6 = 37.8065f;
			break;
		case 2:
			vVar0 = { -2593.301f, 516.9439f, 145.0856f };
			vVar3 = { 1.1034f, -0.6875f, -150.0637f };
			fVar6 = 26.922f;
			break;
		case 3:
			vVar0 = { -2578.31f, 439.7971f, 146.6813f };
			vVar3 = { 8.7918f, -0.4415f, -129.2381f };
			fVar6 = 37.8087f;
			break;
		case 4:
			vVar0 = { -2584.975f, 399.6115f, 150.8719f };
			vVar3 = { 1.2934f, -0.2442f, -55.7509f };
			fVar6 = 26.8832f;
			break;
		case 5:
		default:
			vVar0 = { -2524.076f, 428.6737f, 148.6333f };
			vVar3 = { 3.7283f, -0.5313f, 119.6752f };
			fVar6 = 42.8312f;
			break;
	}
	iLocal_15 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar3, fVar6, true, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SHAKE_CAM(iLocal_15, "HAND_SHAKE", 0.1f);
}

void func_31(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 16:
			if (ENTITY::_0x1FF441D7954F8709(iLocal_8))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_DOOR04X"));
				ENTITY::_0xD2B9C78537ED5759(iLocal_8);
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_HAYBALE03X"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CART06"));
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2))
			{
				PED::DELETE_PED(&iLocal_2);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
			{
				OBJECT::DELETE_OBJECT(&iLocal_3);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BRUSHHORSE01X"));
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5))
			{
				OBJECT::DELETE_OBJECT(&iLocal_5);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BUCKET01X"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
			{
				PED::DELETE_PED(&iLocal_4);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_COW"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6))
			{
				OBJECT::DELETE_OBJECT(&iLocal_6);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_STOOL02X"));
			}
			if (ENTITY::_0x1FF441D7954F8709(iLocal_7))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_VAL_GATE2M02X"));
				ENTITY::_0xD2B9C78537ED5759(iLocal_7);
			}
			break;
	}
}

bool func_38(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 16:
			if (__LIB_1__::func_307(13, 1, 1))
			{
				return true;
			}
			break;
		case 1:
			if (__LIB_2__::func_763(714, 0))
			{
				return false;
			}
			return true;
		case 2:
			if (__LIB_2__::func_763(709, 0))
			{
				return false;
			}
			return true;
		case 4:
			if (__LIB_2__::func_763(710, 0))
			{
				return false;
			}
			return true;
	}
	return false;
}

