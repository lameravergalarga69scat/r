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
	int iLocal_23[2] = { 0, 0 };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	vector3 vLocal_32 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	int iLocal_42[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	struct<4> Local_59 = { 0, 0, 0, 0 } ;
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
	vLocal_32 = { 920.4003f, -6726.304f, 35.7346f };
	vLocal_35 = { 18.4472f, 24.1111f, 177.789f };
	iLocal_38 = -1;
	iLocal_53 = joaat("A_C_SONGBIRD_01");
	iLocal_54 = joaat("S_M_M_FUSSARHENCHMAN_01");
	iLocal_55 = joaat("CS_HERCULE");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_59);
	}
	func_2(&Local_59, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_59))
	{
		__LIB_5__::func_233(&Local_59);
		switch (__LIB_0__::func_57(Local_59))
		{
			case 0:
				if (func_6(&Local_59))
				{
					__LIB_0__::func_19(&Local_59, 1);
				}
				break;
			case 1:
				if (func_8(&Local_59))
				{
					__LIB_0__::func_19(&Local_59, 2);
				}
				break;
			case 2:
				if (func_9(&Local_59))
				{
					__LIB_0__::func_19(&Local_59, 3);
				}
				break;
			case 3:
				func_1(&Local_59);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_59);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_1__::func_774(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		__LIB_4__::func_804(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		__LIB_4__::func_804(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_6(var uParam0)
{
	bool bVar0;
	bLocal_57 = true;
	bVar0 = true;
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_53))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_54))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_55))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_21(1)))
	{
		bVar0 = false;
	}
	if ((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(0)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(1))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(2)))
	{
		bVar0 = false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_23[0], true, false))
	{
		bVar0 = false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_23[1], true, false))
	{
		bVar0 = false;
	}
	if (!CAM::_0xAA235E2F2C09E952(func_23()))
	{
		bVar0 = false;
	}
	if (!STREAMING::IS_SRL_LOADED())
	{
		bVar0 = false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_24()))
	{
		bVar0 = false;
	}
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (!bVar0)
	{
		return false;
	}
	if (bLocal_56)
	{
		bLocal_56 = false;
	}
	if (!func_25(3, iLocal_54, 984.3f, -6777.9f, 49.5f, -27.3f))
	{
		bLocal_57 = false;
	}
	if (!func_25(4, iLocal_54, 982.5f, -6781.3f, 49.5f, 158.8f))
	{
		bLocal_57 = false;
	}
	if (!func_25(5, iLocal_54, 981.6f, -6784.6f, 49.4f, -105.7f))
	{
		bLocal_57 = false;
	}
	if (!func_25(6, iLocal_54, 981.7f, -6791.9f, 49.5f, 28.1f))
	{
		bLocal_57 = false;
	}
	if (!func_25(7, iLocal_54, 984.7f, -6784.1f, 49.6f, 28.1f))
	{
		bLocal_57 = false;
	}
	if (!func_25(8, iLocal_54, 982.5f, -6782.7f, 50.4f, 161f))
	{
		bLocal_57 = false;
	}
	if (!bLocal_57)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	func_26(3);
	func_26(4);
	func_26(5);
	func_26(6);
	func_26(7);
	func_26(8);
	GRAPHICS::_ADD_BLOOD_POOL(983.9f, -6777.3f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(984.7f, -6779.5f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(983.4f, -6781.5f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(982.2f, -6788.4f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(982.3f, -6789.4f, 49.2f, true);
	GRAPHICS::_ADD_BLOOD_POOL(984.1f, -6786.1f, 49f, true);
	GRAPHICS::_ADD_BLOOD_POOL(979.8f, -6791.7f, 49.2f, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_23[0], "ARTHUR", Global_35, 0);
	return true;
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_27(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_29(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_11(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_42[iVar0]));
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	AUDIO::_0x43037ABFE214A851();
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(2), 0, 1065353216 /* Float: 1f */, 1f, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_31);
	}
	__LIB_0__::func_172(iLocal_28);
	__LIB_0__::func_172(iLocal_27);
	__LIB_0__::func_172(iLocal_29);
	__LIB_0__::func_172(iLocal_30);
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(0));
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(1));
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(2));
	ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_23[0]);
	CAM::_0x2412216FCC7B4E3E(func_23());
	HUD::_TEXT_DATABASE_DELETE(func_24());
	__LIB_4__::func_509(0);
	return 1;
}

void func_19(var uParam0)
{
	__LIB_0__::func_7(&Global_1935630, 1048576);
	iLocal_23[0] = iLocal_23[0];
	PED::_0xED9582B3DA8F02B4(9);
	STREAMING::REQUEST_MODEL(iLocal_53, false);
	STREAMING::REQUEST_MODEL(iLocal_54, false);
	STREAMING::REQUEST_MODEL(iLocal_55, false);
	STREAMING::REQUEST_ANIM_DICT(func_21(1));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(0));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(1));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(2));
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		iLocal_23[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_52(0, 1), 0, func_52(0, 0), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23[0]);
	}
	else
	{
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		iLocal_23[0] = uParam0->f_2;
	}
	iLocal_23[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_52(1, 1), 2, func_52(1, 0), false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23[1]);
	CAM::_0x1B3C2D961F5FC0E1(func_23());
	STREAMING::END_SRL();
	STREAMING::PREFETCH_SRL(func_53(0));
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	__LIB_4__::func_804(uParam0, 8);
}

char* func_21(bool bParam0)
{
	if (bParam0)
	{
		return "script_shows@cancandance@p1";
	}
	return "cancandance_fem0";
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "smg2_cme1";
		case 1:
			return "smg2_cme2";
		case 2:
			return "smg2_cme3";
	}
	return "";
}

char* func_23()
{
	return "script@story@Smuggler2@beach_walk";
}

char* func_24()
{
	return "SMG2";
}

bool func_25(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	bool bVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[iParam0]))
	{
		return true;
	}
	if (bLocal_56)
	{
		return false;
	}
	bVar0 = true;
	if (iParam0 == 1)
	{
		bVar0 = 2;
	}
	iLocal_42[iParam0] = __LIB_8__::func_931(iParam1, vParam2, fParam5, 1, 1, bVar0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[iParam0], true);
	if (iParam1 == iLocal_54)
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_42[iParam0], Global_35, false);
	}
	bLocal_56 = true;
	return true;
}

void func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[iParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_42[iParam0]))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_42[iParam0], true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_42[iParam0], true, true);
			GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(iLocal_42[iParam0], true, false), true);
			ENTITY::_SET_ENTITY_HEALTH(iLocal_42[iParam0], 0, 0);
		}
	}
}

int func_27(var uParam0)
{
	__LIB_1__::func_725();
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	CAM::_0x702B75DC9D3EDE56(true);
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	__LIB_14__::func_614(0);
	Global_16 = 1;
	__LIB_4__::func_509(1);
	__LIB_0__::func_267(0);
	Global_43838 = 0;
	func_58();
	PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	return 1;
}

bool func_29(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	__LIB_1__::func_725();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	if (bLocal_56)
	{
		bLocal_56 = false;
	}
	__LIB_18__::func_408(43, 1, 1);
	func_58();
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	CAM::_0x702B75DC9D3EDE56(true);
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && !ENTITY::IS_ENTITY_DEAD(iLocal_31))
	{
		if (!__LIB_0__::func_86(vLocal_32))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_31, vLocal_32, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_31, vLocal_35, 2, true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_31, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, true);
		}
	}
	if (!bLocal_39)
	{
		bLocal_39 = AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
	}
	switch (iLocal_26)
	{
		case 0:
			MISC::_0x1096603B519C905F("SMG2");
			MISC::_SET_WEATHER_TYPE(joaat("FOG"), true, true, true, 60f, false);
			CLOCK::PAUSE_CLOCK(true, 0);
			iLocal_27 = VOLUME::_CREATE_VOLUME_BOX(984.2063f, -6781.292f, 49.91065f, 0f, 0f, -20f, 5f, 30f, 4f);
			iLocal_28 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 987.4385f, -6772.322f, 49.94096f, 0f, 0f, -20f, 8f, 5f, 2f);
			iLocal_29 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 985.287f, -6785.009f, 49.76819f, 0f, 0f, -19.99999f, 1f, 30f, 4f);
			iLocal_30 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 981.1976f, -6783.522f, 49.76819f, 0f, 0f, -19.99999f, 1f, 30f, 4f);
			CAM::DO_SCREEN_FADE_IN(1000);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_23[0], false))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_23[0]);
			}
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_53(1));
			__LIB_14__::func_614(1);
		case 1:
			bLocal_57 = true;
			if (!func_25(0, iLocal_53, 984f, -6769.4f, 54.4f, 175f))
			{
				bLocal_57 = false;
			}
			if (!func_25(1, iLocal_53, 984f, -6769.4f, 54.4f, 175f))
			{
				bLocal_57 = false;
			}
			if (!func_25(2, iLocal_55, 988f, -6771f, 50f, -130f))
			{
				bLocal_57 = false;
			}
			bLocal_57 = bLocal_57;
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				iLocal_31 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(iLocal_23[0], "Warship", false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_31, true, true);
				}
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_23[0], "ARTHUR"))
			{
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_23[0], "Warship", &Var7, false, 0, 2);
				vLocal_32 = { Var7.f_6 };
				vLocal_35 = { Var7.f_9 };
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_23[0], "Warship", iLocal_31);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_31, vLocal_32, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_31, vLocal_35, 2, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_31, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, true);
				__LIB_1__::func_283(&uLocal_20, 0);
				__LIB_14__::func_614(2);
			}
			break;
		case 2:
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(0), 1, 1065353216 /* Float: 1f */, 1f, 1);
			TASK::TASK_FLY_TO_COORD(iLocal_42[0], 2f, 983.9f, -6775.8f, 50f, 1, 1);
			TASK::TASK_FLY_TO_COORD(iLocal_42[1], 2f, 984f, -6775.6f, 50f, 1, 1);
			ENTITY::_0x9587913B9E772D29(iLocal_42[2], 0);
			TASK::TASK_PLAY_ANIM(iLocal_42[2], func_21(1), func_21(0), 1000f, -1000f, -1, 132, 0.474f, false, 0, false, 0, false);
			__LIB_14__::func_614(3);
			break;
		case 3:
			if (!bLocal_58)
			{
				if (__LIB_0__::func_266(Global_35, 983.2f, -6785.1f, 49.5f, 2f, 1, 1))
				{
					TASK::TASK_FLY_TO_COORD(iLocal_42[0], 2f, 975.7f, -6819.1f, 51f, 1, 1);
					TASK::TASK_FLY_TO_COORD(iLocal_42[1], 2f, 975.7f, -6819.1f, 51f, 1, 1);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_42[8], 5000, 48, 51, 1);
					__LIB_1__::func_265(Global_35, "COUGH_SICK_SMALL", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), 0, 1, 0, 0, 1);
					bLocal_58 = true;
				}
			}
			func_63(0);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_42[2], func_21(1), func_21(0), 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_42[2], func_21(1), func_21(0)) >= 0.75f)
				{
					ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(iLocal_42[2], func_21(1), func_21(0), 0.474f);
				}
			}
			Var1 = { func_64(1) };
			STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_27, true, 0))
			{
				__LIB_14__::func_614(4);
			}
			break;
		case 4:
			if (__LIB_0__::func_139(iLocal_52))
			{
				__LIB_1__::func_281(&iLocal_52, 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[2]))
			{
				PED::DELETE_PED(&(iLocal_42[2]));
			}
			Var1 = { func_64(1) };
			STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
			func_67(1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, true, false, true);
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_22(1), 0, 4194304, -1, 0, 0, -1);
			PED::_0x2208438012482A1A(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
			AUDIO::_0x5E3CCF03995388B5(MISC::GET_HASH_KEY(func_68(1)), ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
			CAM::_0xBC016635D6A73B31(func_23(), func_69(1), 5);
			__LIB_1__::func_283(&uLocal_14, 1);
			CLOCK::SET_CLOCK_TIME(19, 40, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(0), 0, 1065353216 /* Float: 1f */, 1f, 1);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_53(2));
			__LIB_14__::func_614(5);
			break;
		case 5:
			Var1 = { func_64(2) };
			STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
			iVar0 = (func_70(1) - __LIB_1__::func_871(&uLocal_14));
			if (func_73(2, func_72(2), iVar0))
			{
				__LIB_14__::func_614(6);
			}
			break;
		case 6:
			Var1 = { func_64(2) };
			STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
			func_67(2);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, true, false, true);
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_22(2), 0, 4194304, -1, 0, 0, -1);
			PED::_0x2208438012482A1A(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
			CAM::_0xBC016635D6A73B31(func_23(), func_69(2), 5);
			__LIB_1__::func_283(&uLocal_14, 1);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			STREAMING::END_SRL();
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			__LIB_0__::func_400(-217646849);
			__LIB_0__::func_400(-694809996);
			__LIB_0__::func_400(-2053475031);
			__LIB_0__::func_401(-279703229);
			__LIB_0__::func_401(-623091266);
			Global_43838 = 1;
			__LIB_14__::func_614(7);
			break;
		case 7:
			iVar0 = ((func_70(1) - __LIB_1__::func_871(&uLocal_14)) - BUILTIN::FLOOR((1.6f * 1000f)));
			if (func_73(3, func_72(2), iVar0))
			{
				if (__LIB_0__::func_139(iLocal_52))
				{
					__LIB_1__::func_281(&iLocal_52, 1, 1);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_23[1]);
				if (bLocal_39)
				{
					iLocal_38 = AUDIO::_0x0556C784FA056628("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
					AUDIO::PLAY_STREAM_FRONTEND(iLocal_38);
				}
				AUDIO::_0x6339C1EA3979B5F7("Clouds", "Death_Fail_Respawn_Scenes");
				__LIB_14__::func_614(8);
			}
			break;
		case 8:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_23[1]) >= 1.6f)
			{
				AUDIO::_0x43037ABFE214A851();
				ENTITY::SET_ENTITY_COORDS(Global_35, 1303.8f, -6845.3f, 42.8f, true, false, true, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_14__::func_614(9);
			}
			break;
		case 9:
			iVar5 = __LIB_3__::func_918(43);
			iVar6 = __LIB_0__::func_80(iVar5);
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_23[1]) >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_23[1]) - 1.6f) && __LIB_0__::func_702(iVar5)) && __LIB_3__::func_919(iVar6, 128))
			{
				if (__LIB_3__::func_919(iVar6, 512))
				{
					__LIB_4__::func_728(iVar6, 512);
				}
				MISC::_0x1096603B519C905F("");
				__LIB_14__::func_614(10);
			}
			break;
		case 10:
			if (__LIB_0__::func_91())
			{
				__LIB_14__::func_614(11);
				if (iLocal_38 != -1)
				{
					AUDIO::STOP_STREAM(iLocal_38);
					iLocal_38 = -1;
				}
				AUDIO::_0x9428447DED71FC7E("Death_Fail_Respawn_Scenes");
			}
			break;
		case 11:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_23[1]) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_23[1]))
			{
				return true;
			}
			break;
	}
	return false;
}

char* func_52(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_196(bParam1, "script@story@SMG2@IG@IG_CME_Start@smuggler2_cme", "");
		case 1:
			return __LIB_0__::func_196(bParam1, "script@timelapse@sad3_ext_timelapse", "");
	}
	return "";
}

char* func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@cme@SMG2_CME_SHOT1_srl";
		case 1:
			return "script@cme@SMG2_CME_SHOT2_srl";
		case 2:
			return "script@cme@SMG2_CME_SHOT3_srl";
	}
	return "";
}

void func_58()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
}

void func_63(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	vector3 vVar7;
	__LIB_1__::func_283(&uLocal_17, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	if (((!PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR")) == 0f || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_RIGHT_ONLY")) == 0f) || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UP_ONLY")) == 0f) || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_DOWN_ONLY")) == 0f)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (__LIB_0__::func_139(iLocal_52) && __LIB_1__::func_514(iLocal_52, 1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		__LIB_1__::func_148(&uLocal_20);
		if (__LIB_0__::func_139(iLocal_52))
		{
			__LIB_1__::func_281(&iLocal_52, 1, 1);
		}
		if (__LIB_1__::func_871(&uLocal_17) >= 60)
		{
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_22(iParam0), &iVar1);
			iVar2 = __LIB_10__::func_397(Global_35, func_22(iParam0), &vVar4);
			iVar3 = __LIB_0__::func_309(iVar2 + 2, 0, (iVar1 - 1));
			TASK::WAYPOINT_RECORDING_GET_COORD(func_22(iParam0), iVar3, &vVar7);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 60, __LIB_2__::func_916(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar7), false, true);
			__LIB_1__::func_148(&uLocal_17);
		}
	}
	else if (!__LIB_0__::func_139(iLocal_52))
	{
		if (__LIB_0__::func_265(&uLocal_20) >= 5f)
		{
			if (!bLocal_40)
			{
				HUD::_TEXT_DATABASE_REQUEST(func_24());
				bLocal_40 = true;
			}
			else if (!bLocal_41)
			{
				if (HUD::_TEXT_DATABASE_HAS_LOADED(func_24()))
				{
					bLocal_41 = true;
				}
			}
			else
			{
				iLocal_52 = __LIB_5__::func_651("SMG2_O_HLP_WALK", joaat("INPUT_MOVE_UD"), joaat("INPUT_MOVE_LR"), 16);
				__LIB_1__::func_522(iLocal_52, 10, 1, 1);
				__LIB_1__::func_522(iLocal_52, 11, 1, 1);
				__LIB_1__::func_522(iLocal_52, 14, 1, 1);
			}
		}
	}
}

struct<4> func_64(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 986.7128f, -6775.761f, 49.9186f };
			Var0.f_3 = 167.688f;
			break;
		case 1:
			Var0 = { 998.3f, -6913.8f, 41.6f };
			Var0.f_3 = -154.6f;
			break;
		case 2:
			Var0 = { 1008.8f, -6948.5f, 41.9f };
			Var0.f_3 = -160f;
			break;
		default:
			break;
	}
	return Var0;
}

void func_67(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_64(iParam0) };
	MISC::CLEAR_AREA(vVar0, 10f, 1131016);
}

char* func_68(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "2_BEACH_1_CAM";
		case 2:
			return "3_BEACH_2_CAM";
	}
	return "";
}

char* func_69(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "2_BEACH_1";
		case 2:
			return "3_BEACH_2";
	}
	return "";
}

int func_70(int iParam0)
{
	var uVar0;
	uVar0 = CAM::_0xEA113BF9B0C0C5D7(func_23(), func_69(iParam0), 5);
	return uVar0;
}

Vector3 func_72(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_64(iParam0) };
	switch (iParam0)
	{
		case 1:
			return vVar0;
		case 2:
			return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_73(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (!iParam0 == 3)
	{
		iVar0 = MISC::GET_HASH_KEY(func_68(iParam0));
		uVar1 = CAM::_0x465F04F68AD38197(func_23(), func_69(iParam0), 5);
	}
	else
	{
		uVar1 = CAM::_0x465F04F68AD38197(func_23(), func_69(2), 5);
	}
	uVar2 = AUDIO::_0xFFE9C53DEEA3DB0B(iParam4, iVar0, vParam1, STREAMING::IS_SRL_LOADED(), uVar1);
	return uVar2;
}

