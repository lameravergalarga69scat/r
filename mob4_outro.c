#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	float fLocal_5 = 0f;
	vector3 vLocal_6 = { 0f, 0f, 0f };
	vector3 vLocal_9 = { 0f, 0f, 0f };
	vector3 vLocal_12 = { 0f, 0f, 0f };
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 24;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<5> Local_130[6];
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	struct<4> Local_164 = { 0, 0, 0, 0 } ;
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
	iLocal_3 = joaat("WAGON02X");
	iLocal_4 = joaat("A_M_M_LAGTOWNFOLK_01");
	fLocal_5 = 0f;
	vLocal_6 = { 2114.573f, -606.6023f, 40.60275f };
	vLocal_9 = { 2098.055f, -756.3578f, 40.55793f };
	vLocal_12 = { 2111.296f, -655.2276f, 41.16518f };
	vLocal_15 = { 2033.488f, -428.7332f, 41.63809f };
	vLocal_18 = { 2404.619f, -522.8186f, 40.49999f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_164);
	}
	func_2(&Local_164, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_164))
	{
		__LIB_5__::func_233(&Local_164);
		switch (__LIB_0__::func_57(Local_164))
		{
			case 0:
				if (func_6(&Local_164))
				{
					__LIB_0__::func_19(&Local_164, 1);
				}
				break;
			case 1:
				if (__LIB_11__::func_356(&Local_164))
				{
					__LIB_0__::func_19(&Local_164, 2);
				}
				break;
			case 2:
				if (func_9(&Local_164))
				{
					__LIB_0__::func_19(&Local_164, 3);
				}
				break;
			case 3:
				func_1(&Local_164);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_164);
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
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if ((!func_21(uParam0) || !func_22()) || !func_23())
	{
		return false;
	}
	return true;
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_26(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_11(var uParam0)
{
	func_29();
	func_30();
	func_31();
}

void func_19(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
	}
	PED::_0xED9582B3DA8F02B4(2 + 6);
}

bool func_21(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_22))
	{
		iLocal_22 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "CreoleCaptain", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_22, true, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		iLocal_24 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_2, "SKIFF", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_24, true, true);
		VEHICLE::_SET_PED_OWNS_VEHICLE(iLocal_22, iLocal_24);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_24, false);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		iLocal_25 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_2, "p_skiff02x", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_25, true, true);
		OBJECT::_0xDFA1237F5228263F(iLocal_25, iLocal_22);
		return false;
	}
	return true;
}

bool func_22()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_23))
	{
		STREAMING::REQUEST_MODEL(iLocal_3, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_3))
		{
			iLocal_23 = VEHICLE::CREATE_VEHICLE(iLocal_3, vLocal_9, 2.28f, true, true, false, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_23, true, true);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		STREAMING::REQUEST_MODEL(iLocal_4, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_4))
		{
			iLocal_21 = __LIB_1__::func_545(iLocal_4, vLocal_9, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_21, true, true);
		}
		return false;
	}
	return true;
}

bool func_23()
{
	if (!func_50(&(Local_130[0 /*5*/]), 650, "MOB4_CIVMAN2", "MOB4_POSTM2", "MOB4_IDLEM2"))
	{
		return false;
	}
	if (!func_50(&(Local_130[1 /*5*/]), 651, "MOB4_CIVMAN3", "MOB4_POSTM3", "MOB4_IDLEM3"))
	{
		return false;
	}
	if (!func_50(&(Local_130[2 /*5*/]), 644, "MOB4_CIVMAN1", "MOB4_POSTM1", "MOB4_IDLEM1"))
	{
		return false;
	}
	if (!func_50(&(Local_130[3 /*5*/]), 646, "MOB4_CIVWOMAN2", "MOB4_POSTW2", "MOB4_IDLEW2"))
	{
		return false;
	}
	if (!func_50(&(Local_130[4 /*5*/]), 647, "MOB4_CIVWOMAN3", "MOB4_POSTW3", "MOB4_IDLEW3"))
	{
		return false;
	}
	if (!func_50(&(Local_130[5 /*5*/]), 656, "MOB4_CIVWOMAN1", "MOB4_POSTW1", "MOB4_IDLEW1"))
	{
		return false;
	}
	return true;
}

bool func_26(var uParam0)
{
	func_51();
	func_52();
	func_53();
	func_54();
	return func_55();
}

void func_29()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_0__::func_29(Local_130[iVar0 /*5*/].f_2))
		{
			if (__LIB_0__::func_122(Local_130[iVar0 /*5*/].f_2))
			{
				AUDIO::STOP_PED_SPEAKING(Local_130[iVar0 /*5*/], false);
				__LIB_2__::func_753(Local_130[iVar0 /*5*/].f_2, 0, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_30()
{
	__LIB_2__::func_788(&iLocal_21, 1, 0, 1);
	__LIB_10__::func_284(&iLocal_23);
	iLocal_161 = 2;
}

void func_31()
{
	func_65(iLocal_25, iLocal_22);
	__LIB_2__::func_788(&iLocal_22, 1, 0, 1);
	__LIB_10__::func_284(&iLocal_24);
	iLocal_162 = 3;
}

bool func_50(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (uParam0->f_1 <= 0)
	{
		if (!__LIB_0__::func_272(*uParam0, 0))
		{
			*uParam0 = __LIB_2__::func_965(iParam1, 1, 0, 0, 1, 1);
			return false;
		}
		__LIB_0__::func_928(&uLocal_26, *uParam0, sParam2, 1);
		AUDIO::STOP_PED_SPEAKING(*uParam0, true);
		uParam0->f_2 = iParam1;
		uParam0->f_3 = sParam3;
		uParam0->f_4 = sParam4;
		uParam0->f_1 = 1;
		return false;
	}
	return true;
}

void func_51()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		switch (iLocal_163)
		{
			case 0:
				__LIB_1__::func_283(&uLocal_127, 0);
				iLocal_163 = 1;
				break;
			case 1:
				func_81();
				if ((__LIB_0__::func_264(&uLocal_127) > 20f || ENTITY::IS_ENTITY_IN_WATER(Global_35)) || !__LIB_0__::func_266(Global_35, 2140.869f, -649.5916f, 41.34281f, 18f, 1, 0))
				{
					iLocal_163 = 2;
				}
				break;
			case 2:
				break;
		}
	}
}

void func_52()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_130[iVar0 /*5*/]))
		{
			switch (Local_130[iVar0 /*5*/].f_1)
			{
				case 1:
					if ((!__LIB_0__::func_75(&uLocal_124) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && __LIB_3__::func_547(Local_130[iVar0 /*5*/], Global_35, 0.5f) == 0)
					{
						if (func_85(&(Local_130[iVar0 /*5*/]), Local_130[iVar0 /*5*/].f_3))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_130[iVar0 /*5*/], Global_35, 10000, 0, 51, 0);
							Local_130[iVar0 /*5*/].f_1 = 2;
						}
					}
					break;
				case 2:
					if (!AUDIO::_0x1ECC76792F661CF5(Local_130[iVar0 /*5*/].f_3))
					{
						__LIB_1__::func_283(&uLocal_124, 0);
						fLocal_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
						__LIB_3__::func_10(Local_130[iVar0 /*5*/]);
						Local_130[iVar0 /*5*/].f_1 = 3;
					}
					break;
				case 3:
					if ((!__LIB_0__::func_75(&uLocal_124) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && __LIB_3__::func_547(Local_130[iVar0 /*5*/], Global_35, 0.5f) == 0)
					{
						if (func_85(&(Local_130[iVar0 /*5*/]), Local_130[iVar0 /*5*/].f_4))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_130[iVar0 /*5*/], Global_35, 10000, 0, 51, 0);
							Local_130[iVar0 /*5*/].f_1 = 4;
						}
					}
					break;
				case 4:
					if (!AUDIO::_0x1ECC76792F661CF5(Local_130[iVar0 /*5*/].f_4))
					{
						__LIB_1__::func_283(&uLocal_124, 0);
						fLocal_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
						__LIB_3__::func_10(Local_130[iVar0 /*5*/]);
						Local_130[iVar0 /*5*/].f_1 = 5;
					}
					break;
			}
		}
		iVar0++;
	}
	func_87();
}

void func_53()
{
	switch (iLocal_161)
	{
		case 0:
			if (!__LIB_2__::func_343(iLocal_21, iLocal_23, 1))
			{
				__LIB_11__::func_28(&iLocal_21, &iLocal_23, -1, 1);
			}
			else if (!__LIB_0__::func_266(iLocal_23, vLocal_12, 5f, 1, 1))
			{
				func_90(iLocal_23, vLocal_12, 2.28f, 2, 1073741824 /* Float: 2f */);
			}
			else if (!__LIB_0__::func_491(iLocal_21, 1199744105))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_21, iLocal_23, vLocal_15, 5f, 524419, 6, 5f, 5f, 0);
			}
			else
			{
				iLocal_161 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_491(iLocal_21, 1199744105))
			{
				func_30();
			}
			break;
		case 2:
			break;
	}
}

void func_54()
{
	switch (iLocal_162)
	{
		case 0:
			if (!__LIB_0__::func_491(iLocal_22, 1199744105))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_22, iLocal_24, vLocal_18, 1.5f, 524295, 6, 5f, 5f, 0);
			}
			else
			{
				iLocal_162 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_491(iLocal_22, 1199744105))
			{
				iLocal_162 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_343(iLocal_22, iLocal_24, 0))
			{
				if (!__LIB_0__::func_491(iLocal_22, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
				{
					TASK::TASK_LEAVE_VEHICLE(iLocal_22, iLocal_24, 0, 0);
				}
			}
			else
			{
				func_31();
			}
			break;
		case 3:
			break;
	}
}

int func_55()
{
	if (!__LIB_0__::func_266(Global_35, vLocal_6, 75f, 1, 1) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1396084);
		DECORATOR::DECOR_SET_BOOL(iParam0, "pedRoam_bInPedRoam", true);
		func_102(iParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_81()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

bool func_85(var uParam0, char[4] cParam1)
{
	if (__LIB_0__::func_266(*uParam0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 6.5f, 1, 0) && __LIB_2__::func_0(*uParam0, 0.25f, 0.75f, 0.25f, 0.75f))
	{
		if (__LIB_5__::func_544(&uLocal_26, cParam1, *uParam0, Global_35, 0, 0, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_87()
{
	if (__LIB_0__::func_75(&uLocal_124))
	{
		if (__LIB_0__::func_264(&uLocal_124) > fLocal_5)
		{
			__LIB_0__::func_37(&uLocal_124);
		}
	}
}

void func_90(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_90(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_90(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_102(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_owner", iParam1);
}

