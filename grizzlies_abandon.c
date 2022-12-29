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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	bool bLocal_21 = false;
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iScriptParam_0 = 0;
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
	iLocal_19 = -1;
	vLocal_22 = { -1338.12f, 2434.522f, 307.2562f };
	func_1();
	iLocal_15 = iScriptParam_0;
	while (true)
	{
		if (func_2())
		{
			func_3();
		}
		switch (iLocal_14)
		{
			case 0:
				if (7 != iLocal_15)
				{
				}
				else
				{
					sLocal_20 = "DONT_LEAVE_CAMP";
					__LIB_2__::func_347(1);
					iLocal_17 = __LIB_4__::func_981(sLocal_20, 0, 0, 1);
				}
				iLocal_14 = 1;
				break;
			case 1:
				func_6();
				if (__LIB_1__::func_205(Global_35, Global_1897952.f_38, 1, 0))
				{
					iLocal_14 = 2;
				}
				break;
			case 2:
				if (func_8())
				{
					func_3();
				}
				if (!__LIB_1__::func_205(Global_35, Global_1897952.f_38, 1, 0))
				{
					iLocal_14 = 1;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_3();
}

void func_1()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
}

bool func_2()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return true;
	}
	if (__LIB_0__::func_13(128))
	{
		return true;
	}
	if (7 == iLocal_15)
	{
		if (__LIB_2__::func_410(3))
		{
			return true;
		}
	}
	else if (8 == iLocal_15)
	{
		if (!__LIB_2__::func_410(38) || __LIB_2__::func_410(43))
		{
			return true;
		}
	}
	return false;
}

void func_3()
{
	Global_1897952.f_40 = 0;
	if (iLocal_19 != -1)
	{
		__LIB_0__::func_783(iLocal_19, 128);
	}
	__LIB_2__::func_347(1);
	MISC::SET_WIND_SPEED(-1f);
	MISC::SET_WIND_DIRECTION(-1f);
	MISC::_SET_SNOW_LEVEL(-1f);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6()
{
	int iVar0;
	float fVar1;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (8 == iLocal_15)
	{
		if (PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(iVar0, true);
				VEHICLE::EXPLODE_VEHICLE(iVar0, false, false, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iLocal_18 = PED::GET_MOUNT(Global_35);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_18, true, false);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_18))
		{
			__LIB_1__::func_864(iLocal_18, 0, 0);
		}
	}
	else if (7 == iLocal_15)
	{
		if (!__LIB_3__::func_127(iLocal_17))
		{
			__LIB_2__::func_347(1);
			iLocal_17 = __LIB_4__::func_981(sLocal_20, 0, 0, 1);
		}
		fVar1 = __LIB_3__::func_731(vLocal_22, Global_36);
		if (fVar1 < 0f)
		{
			fVar1 = (fVar1 + 360f);
		}
		MISC::SET_WIND_DIRECTION(fVar1);
		fLocal_25 = MISC::GET_WIND_SPEED();
		fLocal_25 = __LIB_0__::func_514(fLocal_25 < 100f, (fLocal_25 + 1f), 100f);
		MISC::SET_WIND_SPEED(fLocal_25);
		fLocal_26 = MISC::GET_SNOW_LEVEL();
		fLocal_26 = __LIB_0__::func_514(fLocal_26 < 1f, (fLocal_26 + 0.01f), 1f);
		MISC::_SET_SNOW_LEVEL(fLocal_26);
		if (iLocal_16 < MISC::GET_GAME_TIMER())
		{
			ENTITY::_SET_ENTITY_HEALTH(Global_35, (ENTITY::GET_ENTITY_HEALTH(Global_35) - 1), 0);
			iLocal_16 = MISC::GET_GAME_TIMER() + 200;
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::GET_MOUNT(Global_35) != iLocal_18)
				{
					iLocal_18 = PED::GET_MOUNT(Global_35);
					iLocal_19 = __LIB_0__::func_402(iLocal_18);
					if (iLocal_19 != -1)
					{
						__LIB_0__::func_782(iLocal_19, 128);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_18))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_18))
				{
					if (!bLocal_21)
					{
						__LIB_2__::func_347(1);
						sLocal_20 = "DONT_LEAVE_CAMP_HORSE_DIED";
						bLocal_21 = true;
					}
				}
				else
				{
					ENTITY::_SET_ENTITY_HEALTH(iLocal_18, (ENTITY::GET_ENTITY_HEALTH(iLocal_18) - 3), 0);
				}
			}
		}
	}
}

bool func_8()
{
	if (__LIB_3__::func_127(iLocal_17))
	{
		__LIB_2__::func_347(1);
	}
	if (7 == iLocal_15)
	{
		fLocal_25 = MISC::GET_WIND_SPEED();
		fLocal_25 = __LIB_0__::func_514(fLocal_25 > 0f, (fLocal_25 - 0.5f), 0f);
		MISC::SET_WIND_SPEED(fLocal_25);
		fLocal_26 = MISC::GET_SNOW_LEVEL();
		fLocal_26 = __LIB_0__::func_514(fLocal_26 > 0f, (fLocal_26 - 0.01f), 0f);
		MISC::_SET_SNOW_LEVEL(fLocal_26);
		if (fLocal_25 > 5f)
		{
			return false;
		}
	}
	return true;
}

