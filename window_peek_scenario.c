#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9[4] = { 0, 0, 0, 0 };
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	vector3 vLocal_19 = { 0f, 0f, 0f };
	vector3 vLocal_22 = { 0f, 0f, 0f };
	int iLocal_25 = 0;
	vector3 vLocal_26 = { 0f, 0f, 0f };
	vector3 vLocal_29 = { 0f, 0f, 0f };
	vector3 vLocal_32 = { 0f, 0f, 0f };
	bool bLocal_35 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_16 = 20;
	iLocal_17 = 10;
	iLocal_18 = 3;
	vLocal_19 = { -287.356f, 818.9039f, 119.8698f };
	vLocal_22 = { -13.3335f, 0.0591f, -170.8708f };
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && __LIB_2__::func_821())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_822();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (__LIB_14__::func_481(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!__LIB_14__::func_481(2))
			{
				func_13();
			}
		}
	}
	func_14();
	switch (iLocal_6)
	{
		case 0:
			iLocal_7 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -287.0813f, 818.8734f, 119.85f, -11.269f, 0f, -171.0697f, 50f, false, 2);
			__LIB_17__::func_707(1);
			__LIB_14__::func_482(1);
			break;
		case 1:
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0f)
			{
				return;
			}
			CAM::SET_CAM_ACTIVE(iLocal_7, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, 4000, true, false, 0);
			__LIB_14__::func_482(2);
			break;
		case 2:
			if (CAM::IS_CAM_INTERPOLATING(iLocal_7))
			{
				return;
			}
			iLocal_8 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_19, vLocal_22, 40f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_8, iLocal_7, 4000, 3, 1);
			CAM::DESTROY_CAM(iLocal_7, false);
			__LIB_14__::func_482(3);
			break;
		case 3:
			if (CAM::IS_CAM_INTERPOLATING(iLocal_8))
			{
				return;
			}
			__LIB_14__::func_482(4);
			break;
		case 4:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				if (!TASK::_0x0C3CB2E600C8977D(Global_35, 0))
				{
					func_17(&iLocal_8, 1);
				}
				else
				{
					__LIB_14__::func_482(5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_7()
{
	CAM::DESTROY_CAM(iLocal_7, false);
	CAM::DESTROY_CAM(iLocal_8, false);
}

void func_13()
{
	if (__LIB_14__::func_481(2))
	{
		return;
	}
	func_21();
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	__LIB_0__::func_489(0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, true, 2000, true, false, 0);
	CAM::DESTROY_CAM(iLocal_8, false);
	__LIB_17__::func_707(2);
}

void func_14()
{
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		if (TASK::_0x0C3CB2E600C8977D(Global_35, 0))
		{
			func_13();
		}
		return;
	}
	if (!__LIB_14__::func_481(2))
	{
		func_13();
	}
	else if (CAM::_0x251241CAEC707106())
	{
		func_21();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		iLocal_0 = 0;
	}
}

void func_17(int iParam0, bool bParam1)
{
	float fVar0;
	vector3 vVar1;
	func_23(&(uLocal_9[0]), &(uLocal_9[1]), &(uLocal_9[2]), &(uLocal_9[3]), joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (iLocal_14 == uLocal_9[2] && iLocal_15 == uLocal_9[3])
	{
		if (iLocal_25 < MISC::GET_GAME_TIMER())
		{
			iLocal_14 = 0;
			iLocal_15 = 0;
		}
	}
	else
	{
		iLocal_14 = uLocal_9[2];
		iLocal_15 = uLocal_9[3];
		iLocal_25 = MISC::GET_GAME_TIMER() + 4000;
	}
	if (bParam1)
	{
		vLocal_26.f_2 = (-(BUILTIN::TO_FLOAT(uLocal_9[2]) / 127f) * IntToFloat(iLocal_16));
		vLocal_26.f_1 = ((-vLocal_26.z * IntToFloat(iLocal_18)) / IntToFloat(iLocal_16));
		if (PAD::IS_LOOK_INVERTED())
		{
			vLocal_26.x = ((BUILTIN::TO_FLOAT(uLocal_9[3]) / 127f) * IntToFloat(iLocal_17));
		}
		else
		{
			vLocal_26.x = (-(BUILTIN::TO_FLOAT(uLocal_9[3]) / 127f) * IntToFloat(iLocal_17));
		}
	}
	else
	{
		vLocal_26 = { 0f, 0f, 0f };
		iLocal_14 = 0;
		iLocal_15 = 0;
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	vVar1 = { vLocal_26 + vLocal_32 };
	vLocal_29.x = (vLocal_29.x + __LIB_0__::func_251((((vVar1.x - vLocal_29.x) * 0.05f) * fVar0), -3f, 3f));
	vLocal_29.f_1 = (vLocal_29.y + __LIB_0__::func_251((((vVar1.y - vLocal_29.y) * 0.05f) * fVar0), -3f, 3f));
	vLocal_29.f_2 = (vLocal_29.z + __LIB_0__::func_251((((vVar1.z - vLocal_29.z) * 0.05f) * fVar0), -3f, 3f));
	if (bLocal_35)
	{
		vLocal_29.x = __LIB_0__::func_251(vLocal_29.x, BUILTIN::TO_FLOAT(-iLocal_17), BUILTIN::TO_FLOAT(iLocal_17));
		vLocal_29.f_1 = __LIB_0__::func_251(vLocal_29.y, BUILTIN::TO_FLOAT(-iLocal_18), BUILTIN::TO_FLOAT(iLocal_18));
		vLocal_29.f_2 = __LIB_0__::func_251(vLocal_29.z, BUILTIN::TO_FLOAT(-iLocal_16), BUILTIN::TO_FLOAT(iLocal_16));
	}
	CAM::SET_CAM_PARAMS(*iParam0, vLocal_19, vLocal_22 + vLocal_29, 40f, 0, 1, 1, 2, 1, 0);
}

void func_21()
{
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127f));
}

