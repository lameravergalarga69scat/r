#region Local Var
	int iLocal_0 = 0;
	char* sLocal_1 = NULL;
	char* sLocal_2[2] = { NULL, NULL };
	char* sLocal_5 = NULL;
	int iLocal_6 = 0;
	int iLocal_7[2] = { 0, 0 };
	int iLocal_10 = 0;
	vector3 vLocal_11[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_18[2] = { 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	vector3 vLocal_23 = { 0f, 0f, 0f };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 1097859072;
	var uLocal_46 = 1000;
	var uLocal_47 = 1067450368;
	var uLocal_48 = 5000;
	var uLocal_49 = 42;
	var uLocal_50 = 1103626240;
	var uLocal_51 = 1077936128;
	var uLocal_52 = 1106247680;
	var uLocal_53 = 1103101952;
	var uLocal_54 = 1097859072;
	var uLocal_55 = 1103626240;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58[2] = { 0, 0 };
	int iLocal_61 = 0;
	bool bLocal_62 = false;
	bool bLocal_63 = false;
#endregion
void __EntryFunction__()
{
	iLocal_27 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	int iVar0;
	if (iLocal_26 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_26))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_26);
		}
	}
	if (bLocal_63)
	{
		__LIB_6__::func_357();
		bLocal_63 = false;
	}
	if (STREAMING::IS_MODEL_VALID(iLocal_10))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_10);
	}
	if (STREAMING::IS_MODEL_VALID(iLocal_22))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_22);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_7)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_58[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(uLocal_58[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_7[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_7[iVar0]));
		}
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_18[iVar0]))
		{
			PHYSICS::DELETE_ROPE(&(iLocal_18[iVar0]));
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_6))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_6);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_57))
	{
		VOLUME::_DELETE_VOLUME(iLocal_57);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_61))
	{
		VOLUME::_DELETE_VOLUME(iLocal_61);
	}
	if (iLocal_27 != -1)
	{
		func_4();
		AUDIO::RELEASE_SOUND_ID(iLocal_27);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (func_5())
	{
		return true;
	}
	if (!bLocal_62)
	{
		bLocal_62 = func_6();
	}
	switch (func_7())
	{
		case 0:
			func_8();
			__LIB_17__::func_551(1);
			break;
		case 1:
			func_10();
			__LIB_17__::func_551(2);
			break;
		case 2:
			if (func_11())
			{
				__LIB_17__::func_551(3);
			}
			break;
		case 3:
			if (func_12())
			{
				__LIB_17__::func_551(4);
			}
			break;
		case 4:
			if (func_13() && func_14())
			{
				if (__LIB_2__::func_117(12))
				{
					func_16();
					__LIB_17__::func_551(9);
				}
				else
				{
					__LIB_17__::func_551(5);
				}
			}
			break;
		case 5:
			if (func_17())
			{
				__LIB_17__::func_551(6);
			}
			break;
		case 6:
			if (func_18())
			{
				__LIB_17__::func_551(8);
			}
			break;
		case 7:
			if (func_19())
			{
				__LIB_17__::func_551(10);
			}
			if (func_20())
			{
				bLocal_62 = false;
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_6))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_6, 0);
				}
				__LIB_3__::func_730(iLocal_61, 0, 0, 1, 1, 0);
				if (__LIB_2__::func_117(12))
				{
					func_22();
					func_16();
					__LIB_17__::func_551(9);
				}
				else
				{
					__LIB_17__::func_551(5);
				}
			}
			break;
		case 8:
			if (func_19())
			{
				__LIB_17__::func_551(10);
			}
			func_23();
			if (bLocal_62)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_6))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_6) < 0.99f)
					{
						return false;
					}
				}
				func_4();
				func_24();
				__LIB_17__::func_551(7);
			}
			if (func_25())
			{
				func_24();
				__LIB_17__::func_551(7);
			}
			break;
		case 9:
			if (func_19())
			{
				__LIB_17__::func_551(10);
			}
			if (bLocal_62)
			{
				__LIB_17__::func_551(7);
			}
			break;
		case 10:
			func_4();
			func_26();
			__LIB_17__::func_551(11);
			break;
		case 11:
			if (func_20())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_4()
{
	if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_27))
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_27);
	}
}

bool func_5()
{
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (__LIB_0__::func_12() != 105)
	{
		return true;
	}
	if (__LIB_2__::func_774(21) || __LIB_14__::func_432(21))
	{
		return true;
	}
	return false;
}

int func_6()
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		if (func_7() == 8 && __LIB_2__::func_117(12))
		{
			return 1;
		}
		if (func_7() == 9 && __LIB_2__::func_117(3))
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	return iLocal_0;
}

void func_8()
{
	iLocal_10 = joaat("A_C_DONKEY_01");
	iLocal_22 = joaat("P_RHO_COTTONGIN_03");
	vLocal_23 = { 1404.02f, -1324.268f, 76.7704f };
	vLocal_11[0 /*3*/] = { 1400.77f, -1315.403f, 76.6572f };
	vLocal_11[1 /*3*/] = { 1407.911f, -1332.822f, 76.6569f };
	sLocal_1 = "script@ambient@generic@cotton_gin@action";
	sLocal_2[0] = "DONKEY_0";
	sLocal_2[1] = "DONKEY_1";
	sLocal_5 = "COTTON_PRESS";
	__LIB_0__::func_634(&(vLocal_11[0 /*3*/]), 50, 10, 0);
	__LIB_0__::func_634(&(vLocal_11[1 /*3*/]), 50, 10, 0);
	__LIB_2__::func_887(&uLocal_28, 0);
	__LIB_1__::func_398(&uLocal_28, 1);
	__LIB_1__::func_401(&uLocal_28, 1);
	__LIB_2__::func_828(&uLocal_28, 1);
	__LIB_2__::func_829(&uLocal_28, 1);
	__LIB_2__::func_830(&uLocal_28, 1);
	__LIB_1__::func_392(&uLocal_28, 1);
	__LIB_1__::func_413(&uLocal_28, 1);
	__LIB_2__::func_956(&uLocal_28, 1);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_57))
	{
		iLocal_57 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1439.646f, -1296.078f, 78.22333f, 0f, 0f, 15.93833f, 5.460037f, 5.05896f, 3.246991f, "m_volDonkeyPen");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_61))
	{
		iLocal_61 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1403.892f, -1324.662f, 76.65739f, 0f, 0f, 0f, 19.09795f, 13.32395f, 7.186517f, "m_volVehicleAntiGrief");
	}
	iLocal_27 = AUDIO::GET_SOUND_ID();
}

void func_10()
{
	STREAMING::REQUEST_MODEL(iLocal_10, false);
	STREAMING::REQUEST_MODEL(iLocal_22, false);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_6))
	{
		iLocal_6 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_1, 1, 0, false, true);
	}
	if (PED::_0x5C16855277819BBF() <= 2)
	{
		PED::_0xED9582B3DA8F02B4(2);
	}
}

bool func_11()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_10) || !STREAMING::HAS_MODEL_LOADED(iLocal_22))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_6, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_6, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_6);
		}
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	return true;
}

bool func_12()
{
	if (BUILTIN::VDIST2(Global_36, vLocal_23) > 10000f)
	{
		return false;
	}
	return true;
}

int func_13()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7[iVar0]))
		{
			iLocal_7[iVar0] = __LIB_1__::func_545(iLocal_10, vLocal_11[iVar0 /*3*/], 95f, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_7[iVar0]))
			{
				PED::_SET_PED_SCALE(iLocal_7[iVar0], 0.67f);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[iVar0], 136, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[iVar0], 441, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[iVar0], 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[iVar0], 407, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[iVar0], 419, true);
				PED::_0xAE6004120C18DF97(iLocal_7[iVar0], 0, 0);
				TASK::TASK_STAND_STILL(iLocal_7[iVar0], -1);
				PED::_SET_PED_BODY_COMPONENT(iLocal_7[iVar0], -937613161);
				PED::_UPDATE_PED_VARIATION(iLocal_7[iVar0], false, true, true, true, false);
				if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_58[iVar0]))
				{
					uLocal_58[iVar0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vLocal_11[iVar0 /*3*/], 0f, 0f, 0f, 1.5f, 1.5f, 1f);
					PED::_0x7C00CFC48A782DC0(uLocal_58[iVar0], iLocal_7[iVar0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (!bLocal_63)
	{
		__LIB_5__::func_467(10);
		bLocal_63 = true;
	}
	return 1;
}

int func_14()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		if (iLocal_26 == 0)
		{
			iLocal_26 = ENTITY::_0x6F3068258A499E52(iLocal_22, vLocal_23, 11);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_26))
		{
			iLocal_21 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_26);
		}
		return 0;
	}
	return 1;
}

void func_16()
{
	int iVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_57))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_7[iVar0]))
		{
			func_47(iLocal_7[iVar0], VOLUME::_GET_VOLUME_COORDS(iLocal_57) + Vector(0f, 0f, (IntToFloat(iVar0) * 1f)), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 2, 1073741824 /* Float: 2f */);
			TASK::TASK_WANDER_IN_VOLUME(iLocal_7[iVar0], iLocal_57, 1f, 3f, 1);
		}
		iVar0++;
	}
}

bool func_17()
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_6))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_6, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_6, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_6);
		}
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_6, 1404.02f, -1324.268f, 76.71f, 0f, 0f, -81f, 2);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_7[iVar0]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_6, sLocal_2[iVar0], iLocal_7[iVar0], 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_21))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_6, sLocal_5, iLocal_21, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_6);
	return true;
}

bool func_18()
{
	int iVar0;
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_21) && !ENTITY::IS_ENTITY_DEAD(iLocal_7[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_7[1]))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!PHYSICS::DOES_ROPE_EXIST(iLocal_18[iVar0]))
			{
				iLocal_18[iVar0] = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iLocal_7[iVar0], true, false), 0f, 0f, 0f, 1f, 6, true, -1, -1f);
				PHYSICS::_0x522FA3F490E2F7AC(iLocal_18[iVar0], 1, 1);
				PHYSICS::_0x8D59079C37C21D78(iLocal_18[iVar0], 2.5f);
				return false;
			}
			iVar0++;
		}
		PHYSICS::_0x462FF2A432733A44(iLocal_18[0], iLocal_7[0], iLocal_21, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect1");
		PHYSICS::_0x462FF2A432733A44(iLocal_18[1], iLocal_7[1], iLocal_21, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect2");
		return true;
	}
	return false;
}

bool func_19()
{
	var uVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (__LIB_2__::func_983(iLocal_7[iLocal_56], 0, &uLocal_28, &uVar0, 0, 0))
		{
			return true;
		}
		if (PED::_0x77525BBF433F2CD6(iLocal_7[iLocal_56]))
		{
			return true;
		}
		iLocal_56++;
		if (iLocal_56 >= 2)
		{
			iLocal_56 = 0;
		}
	}
	return false;
}

bool func_20()
{
	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, vLocal_23) < 3600f)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(1439.646f, -1296.078f, 78.22333f, 2f) || CAM::IS_SPHERE_VISIBLE(1403.686f, -1324.119f, 73.60623f, 9.5f))
	{
		return false;
	}
	return true;
}

void func_22()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_18[iVar0]))
		{
			PHYSICS::DELETE_ROPE(&(iLocal_18[iVar0]));
		}
		iVar0++;
	}
}

void func_23()
{
	if (AUDIO::_0xE368E8422C860BA7("COTTON_GIN", "OFF_MISSION_SOUNDS", -2) && AUDIO::_0x84848E1C0FC67DBB(iLocal_27))
	{
		AUDIO::_0xDCF5BA95BBF0FABA(iLocal_27, "COTTON_GIN", vLocal_23, "OFF_MISSION_SOUNDS", 0, 0, 1);
	}
}

void func_24()
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_6))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_6, true);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_7[iVar0]))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_6, sLocal_2[iVar0], iLocal_7[iVar0]);
			TASK::TASK_STAND_STILL(iLocal_7[iVar0], -1);
		}
		iVar0++;
	}
}

bool func_25()
{
	int iVar0;
	int iVar1;
	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, vLocal_23) > 625f)
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_61))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iLocal_61, iVar0, 2, 1, 0, 0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_26()
{
	int iVar0;
	int iVar1;
	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_6, true);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (__LIB_0__::func_272(iLocal_7[iVar1], 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_6, sLocal_2[iVar1], iLocal_7[iVar1]);
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_18[iVar1]))
			{
				PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_18[iVar1], iLocal_7[iVar1]);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Global_36, 3, 256, 10000f, 10000, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_7[iVar1], 3f);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_7[iVar1], iVar0);
			PED::SET_PED_KEEP_TASK(iLocal_7[iVar1], true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		iVar1++;
	}
}

void func_47(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
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
				func_47(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_47(iVar2, vParam1, fParam4, iParam5, fParam6);
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

