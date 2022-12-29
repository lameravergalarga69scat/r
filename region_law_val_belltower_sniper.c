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
	var uLocal_15 = 3;
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
	var uLocal_26 = 0;
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
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_44 = joaat("S_M_M_AMBIENTLAWRURAL_01");
	vLocal_45 = { -230.9494f, 797.3469f, 134.418f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iScriptParam_0) && func_4())
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (__LIB_0__::func_272(iLocal_42, 0))
	{
		__LIB_2__::func_426(&iLocal_42);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_43))
	{
		VOLUME::_DELETE_VOLUME(iLocal_43);
	}
	LAW::_0x7EF2A2FE38D74456(__LIB_14__::func_211(7), 0);
}

void func_2()
{
	iLocal_43 = VOLUME::_CREATE_VOLUME_BOX(-230.0599f, 797.554f, 134.0912f, 0f, 0f, 29.97786f, 3.336159f, 3.371833f, 4.034389f);
	iLocal_41 = 1;
	PED::_0xED9582B3DA8F02B4(1);
}

int func_3(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_21(iParam0, 8))
	{
		return 0;
	}
	if (!__LIB_1__::func_205(Global_35, __LIB_0__::func_559(iParam0), 1, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_4()
{
	float fVar0;
	if (iLocal_41 >= 7)
	{
		return 0;
	}
	fVar0 = __LIB_0__::func_94(Global_35, vLocal_45, 1);
	if (fVar0 > 100f)
	{
		return 0;
	}
	if (__LIB_0__::func_264(&uLocal_48) > 120f)
	{
		return 0;
	}
	return 1;
}

void func_5()
{
	switch (iLocal_41)
	{
		case 1:
			iLocal_41 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_44, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_44) && PED::_0x5E420FF293EE5472())
			{
				iLocal_41 = 4;
			}
			break;
		case 4:
			func_16();
			__LIB_1__::func_148(&uLocal_48);
			iLocal_41 = 5;
			break;
		case 5:
			__LIB_14__::func_212(iLocal_42, joaat("INPUT_FOCUS_CAM"));
			if (!__LIB_0__::func_272(iLocal_42, 0))
			{
				iLocal_41 = 6;
			}
			break;
		case 6:
			iLocal_41 = 7;
			break;
	}
}

void func_16()
{
	int iVar0;
	iLocal_42 = __LIB_1__::func_545(iLocal_44, vLocal_45, 101.6932f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_42, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	PED::_0xFC3DB99C8144CD81(iLocal_42, iLocal_43, 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_42, 263, true);
	PED::SET_PED_CAN_RAGDOLL(iLocal_42, false);
	iVar0 = 160;
	ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_42, iVar0);
	ENTITY::_SET_ENTITY_HEALTH(iLocal_42, iVar0, 0);
	__LIB_14__::func_214(iLocal_42);
}

