#region Local Var
	vector3 vLocal_0 = { 0f, 0f, 0f };
	float fLocal_3 = 0f;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	float fLocal_7 = 0f;
	vector3 vLocal_8 = { 0f, 0f, 0f };
	vector3 vLocal_11 = { 0f, 0f, 0f };
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<18> Local_23 = { 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	vLocal_0 = { 1.47681f, -0.749695f, -0.0486145f };
	fLocal_3 = 170.7721f;
	vLocal_4 = { 0.812012f, -0.631683f, -0.0291901f };
	fLocal_7 = 290.2319f;
	vLocal_8 = { 0.7006f, 0.094f, 1.076f };
	vLocal_11 = { -49.5998f, 0f, -107.2854f };
	vLocal_14 = { 0.75708f, -0.630981f, -0.0272522f };
	vLocal_17 = { 1.47479f, -0.239473f, -0.0476227f };
	iLocal_20 = joaat("A_C_COW");
	iLocal_21 = joaat("P_STOOL02X");
	iLocal_22 = joaat("S_BUCKETMILK01X");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	func_2(&Local_23, &uScriptParam_0);
	while (true)
	{
		if (func_3(&Local_23))
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(Local_23.f_1.f_2);
	func_5(iVar0, 0);
	__LIB_2__::func_788(&(Local_23.f_15), 1, 0, 1);
	func_7(647863662);
	func_8(&Local_23);
	__LIB_0__::func_172(Local_23.f_17);
	func_10();
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, var uParam1)
{
	int iVar0;
	*uParam0 = 4;
	uParam0->f_1 = { *uParam1 };
	__LIB_9__::func_497(uParam0, 0);
	__LIB_11__::func_212(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6, &(uParam0->f_21), &(uParam0->f_24));
	if (__LIB_11__::func_216(&(uParam0->f_15), uParam0->f_21))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_15, true, true);
		PED::SET_PED_CAN_LEG_IK(uParam0->f_15, false);
		PED::SET_PED_LEG_IK_MODE(uParam0->f_15, 0);
	}
	iVar0 = __LIB_1__::func_47(uParam1->f_2);
	func_5(iVar0, uParam0->f_15);
}

bool func_3(var uParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	iVar0 = __LIB_1__::func_47(uParam0->f_1.f_2);
	if (func_14(uParam0))
	{
		return true;
	}
	switch (uParam0->f_11)
	{
		case 0:
			func_15();
			__LIB_9__::func_497(uParam0, 1);
			break;
		case 1:
			if (func_16())
			{
				__LIB_9__::func_497(uParam0, 2);
			}
			break;
		case 2:
			if (!func_17(&(uParam0->f_15), uParam0->f_1.f_2 == 21))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_15, true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_15, true, true);
			}
			vVar2 = { __LIB_11__::func_213(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6, 0) };
			uParam0->f_14 = __LIB_11__::func_207(vVar2);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_14, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_14, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
			{
				TASK::STOP_ANIM_PLAYBACK(uParam0->f_14, 0, false);
			}
			vVar2 = { __LIB_11__::func_214(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6) };
			uParam0->f_13 = __LIB_11__::func_206(vVar2);
			func_22(647863662);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
			{
				__LIB_9__::func_497(uParam0, 3);
				__LIB_11__::func_215(uParam0->f_1.f_2);
				__LIB_0__::func_172(uParam0->f_16);
				if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_16))
				{
					uParam0->f_16 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), uParam0->f_1.f_3, 0f, 0f, 0f, 1.2f, 2.4f, 2f);
					PED::_0x7C00CFC48A782DC0(uParam0->f_16, uParam0->f_15, 0f, 0.2f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
			vVar2 = { __LIB_11__::func_214(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6) };
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_17))
			{
				if (uParam0->f_1.f_2 == 21)
				{
					uParam0->f_17 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vVar2 + Vector(1f, 0f, 0f), 0f, 0f, uParam0->f_24.f_2, 7.5f, 3.5f, 4f);
				}
				else
				{
					uParam0->f_17 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vVar2 + Vector(1f, 0f, 0f), 0f, 0f, uParam0->f_24.f_2, 3.5f, 3.5f, 4f);
				}
				VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_17, 0);
				VOLUME::_0xBE551C2CC421185D(uParam0->f_17, 1);
			}
			uParam0->f_19 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vVar2, 0f, 0f, 0f, 4f, 4f, 4f, "MilkAvoidVol");
			POPULATION::_0xB56D41A694E42E86(uParam0->f_19, 266209, 0, 0, -1, -1, 12);
			__LIB_3__::func_683(&(uParam0->f_18), vVar2, 0f, 0f, 0f, 2f, 2f, 2f, "MilkVignetteBlockVol");
			uParam0->f_20 = __LIB_2__::func_261(uParam0->f_18, "RestrictVignette", 1, 0, 2048, 0, -1082130432 /* Float: -1f */);
			func_5(iVar0, uParam0->f_15);
			break;
		case 3:
			if (Global_1899528.f_215)
			{
				return true;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15) || PED::IS_PED_INJURED(uParam0->f_15))
			{
				__LIB_11__::func_553(uParam0->f_1.f_2);
				func_5(iVar0, 0);
				__LIB_9__::func_497(uParam0, 5);
			}
			else
			{
				func_5(iVar0, uParam0->f_15);
				fVar1 = __LIB_0__::func_94(uParam0->f_15, uParam0->f_21, 0);
				if (fVar1 > 1.25f)
				{
					__LIB_11__::func_553(uParam0->f_1.f_2);
				}
				else
				{
					__LIB_11__::func_215(uParam0->f_1.f_2);
				}
			}
			if (__LIB_1__::func_44(uParam0->f_1.f_8))
			{
				func_8(uParam0);
				__LIB_9__::func_497(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (!__LIB_1__::func_44(uParam0->f_1.f_8))
			{
				__LIB_9__::func_497(uParam0, 2);
			}
			break;
	}
	return false;
}

void func_5(int iParam0, int iParam1)
{
	Global_1392915.f_121[iParam0 /*20*/].f_13 = iParam1;
}

void func_7(int iParam0)
{
	if (!__LIB_0__::func_724(iParam0))
	{
		__LIB_0__::func_68(iParam0, 0, 0);
	}
	__LIB_1__::func_948(iParam0, 0, 1f, 0, 1, 0, 0, 0);
}

void func_8(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_18))
	{
		__LIB_1__::func_544(uParam0->f_18);
		__LIB_0__::func_172(uParam0->f_18);
		uParam0->f_20 = 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_19))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_19);
	}
	__LIB_0__::func_172(uParam0->f_16);
	__LIB_0__::func_172(uParam0->f_19);
	__LIB_0__::func_172(uParam0->f_17);
	__LIB_0__::func_172(uParam0->f_18);
}

void func_10()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_20);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_21);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_22);
	STREAMING::REMOVE_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::_REMOVE_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
	STREAMING::REMOVE_ANIM_DICT("CREATURES_MAMMAL@COW@NORMAL@IDLE");
	PED::_0x7D4E70A67A651C71(1);
}

bool func_14(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_4__::func_865(*uParam0);
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (!__LIB_1__::func_815(*uParam0))
	{
		return true;
	}
	if (Global_1899528.f_215)
	{
		return true;
	}
	if (__LIB_0__::func_21(uParam0->f_1.f_7, 4194304))
	{
		return true;
	}
	if (__LIB_0__::func_1(Global_1935630, 8388608))
	{
		__LIB_2__::func_426(&(Local_23.f_15));
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_1.f_3) > (fVar0 * fVar0))
		{
			__LIB_2__::func_426(&(Local_23.f_15));
			return true;
		}
	}
	return false;
}

void func_15()
{
	STREAMING::REQUEST_MODEL(iLocal_20, false);
	STREAMING::REQUEST_MODEL(iLocal_21, false);
	STREAMING::REQUEST_MODEL(iLocal_22, false);
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::_REQUEST_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@COW@NORMAL@IDLE");
	PED::_0xED9582B3DA8F02B4(1);
}

bool func_16()
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_20))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_21))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_22))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@COW@NORMAL@IDLE"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW"))
	{
		return false;
	}
	if (!STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED("script_mar5_milkcow_cow"))
	{
		return false;
	}
	return true;
}

bool func_17(var uParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar6;
	int iVar7;
	struct<9> Var8;
	struct<31> Var18;
	Var8 = -1;
	Var8.f_1 = -1;
	Var8.f_2 = -1;
	if (bParam1)
	{
		__LIB_1__::func_65(21, &Var8, 1);
	}
	else
	{
		__LIB_1__::func_65(22, &Var8, 1);
	}
	__LIB_11__::func_212(Var8.f_5, 0f, 0f, Var8.f_8, &vVar0, &uVar3);
	if (!__LIB_11__::func_216(uParam0, vVar0))
	{
		*uParam0 = __LIB_1__::func_545(joaat("A_C_COW"), vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return false;
		}
		PED::_SET_PED_SCALE(*uParam0, 1f);
	}
	PED::SET_PED_CAN_LEG_IK(*uParam0, false);
	PED::SET_PED_LEG_IK_MODE(*uParam0, 0);
	EVENT::SET_DECISION_MAKER(*uParam0, joaat("EMPTY"));
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
	{
		Var18.f_6 = -1082130432;
		Var18.f_9 = -1082130432;
		Var18.f_30 = "Milking";
		Var18.f_1 = joaat("DEFAULT");
		Var18 = joaat("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
		TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(*uParam0, "script_mar5_milkcow_cow", &Var18, Var8.f_5, 0f, 0f, Var8.f_8, 2, 0.125f, 0, 0, 1154, 0);
	}
	vVar0 = { __LIB_11__::func_213(Var8.f_5, 0f, 0f, Var8.f_8, 0) };
	iVar7 = __LIB_11__::func_207(vVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (ENTITY::_0x0B7CB1300CBFE19C(iVar7, 1))
		{
			TASK::STOP_ANIM_PLAYBACK(iVar7, 0, false);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	}
	vVar0 = { __LIB_11__::func_214(Var8.f_5, 0f, 0f, Var8.f_8) };
	iVar6 = __LIB_11__::func_206(vVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	}
	return true;
}

void func_22(int iParam0)
{
	if (!__LIB_0__::func_724(iParam0))
	{
		__LIB_0__::func_68(iParam0, 0, 0);
	}
	__LIB_1__::func_948(iParam0, 0, 1f, 0, 0, 0, 0, 0);
}

